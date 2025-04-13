#include<lpc21xx.h>
#include"hedar.h"
main()
{
	IODIR0=0xFF;
	IOSET0=0x0F;
	delay_ms(200);
	while(1)
	{
		IOCLR0=0x0F;
		delay_ms(200);
		IOSET0=0x0F;
		delay_ms(200);
	}
}

