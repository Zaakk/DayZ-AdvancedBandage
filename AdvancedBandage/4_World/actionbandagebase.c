modded class ActionBandageBase
{
	override void ApplyBandage(ItemBase item, PlayerBase player)
	{
		autoptr BleedingSourcesManagerServer bleedingManager;
		bleedingManager = player.GetBleedingManagedServer();
		
		if (!bleedingManager)
		{
			return;
		}
		
		bleedingManager.AB_RemoveTwoMostSignificantBleedingSources();
		
		PluginTransmissionAgents m_mta = PluginTransmissionAgents.Cast(GetPlugin(PluginTransmissionAgents));
		m_mta.TransmitAgents(item, player, AGT_ITEM_TO_FLESH);
		
		if (item.HasQuantity())
		{
			item.AddQuantity(-1, true);
		}
		else
		{
			item.Delete();
		}
	}
}