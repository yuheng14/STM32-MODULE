#include "pe43711.h"



// Ð´Ë¥¼õ×Ö
void PE43711_Write(u8 Att_Word)
{
	S_CLK(0);
	LE(0);
	delay_us(1);
	for (int i = 0; i < 8; i++)
	{
		if (Att_Word & 0x01) 
		{
			S_SI(1);
		}
		else
		{
			S_SI(0);
		}
		delay_us(1);
		S_CLK(1);
		delay_us(1);
		S_CLK(0);
		delay_us(1);
		Att_Word >>= 1;
	}
	LE(1);
	delay_us(1);
	LE(0);
	
}







