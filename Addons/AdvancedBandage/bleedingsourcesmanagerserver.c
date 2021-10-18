modded class BleedingSourcesManagerServer
{
	const float CHANCE_TO_REMOVE_ONE_BLEEDING = 0.1;
	
	bool AB_RemoveTwoMostSignificantBleedingSources()
	{
		if (m_Player.GetBleedingSourceCount() < 2)
		{
			RemoveMostSignificantBleedingSource();
			return;
		}
		
		int bleeding_sources_bits = m_Player.GetBleedingBits();
		
		float highest_flow;
		int highest_flow_bit_1;
		int highest_flow_bit_2;
		int bit_offset;
		
		for(int i = 0; i < BIT_INT_SIZE; i++)
		{
			int bit = 1 << bit_offset;
			
			if( (bit & bleeding_sources_bits) != 0 )
			{
				BleedingSourceZone meta = GetBleedingSourceMeta(bit);
				if(meta)
				{
					if( meta.GetFlowModifier() > highest_flow )
					{
						highest_flow = meta.GetFlowModifier();
						highest_flow_bit_2 = highest_flow_bit_1;
						highest_flow_bit_1 = bit;
						//Print(meta.GetSelectionName());
					}
				}
			}
			bit_offset++;
		}
		int twoBits = highest_flow_bit_1 | highest_flow_bit_2;
		
		float diceRoll = Math.RandomFloat01();
		if (diceRoll < CHANCE_TO_REMOVE_ONE_BLEEDING)
		{
			twoBits = twoBits & (~highest_flow_bit_2);
		}
		
		return RemoveBleedingSource(twoBits);
	}
}