#include "Uart.h"
#include "Delay.h"
u8 cmd;


void main(void)
{
	
	Uart_init();

	SendStr("\r\n\r\nCommand List:\r\n");
	SendStr("v:Get C51 boodload Version\r\n");
	SendStr("r:reset cpu\r\n");
	
	while(1)
	{
		cmd=0;
		if(GetByte_NoWait(&cmd)==0)
		{
			SendByte(cmd);
			SendStr("\r\n");
		}
		
		switch(cmd)
		{
			case 'v':
			case 'V':
				SendStr("C51 BootLoaad V0.01\r\n");
				break;
			case 'r':
			case 'R':
				SendStr("Reset broad ...\r\n");
			((void (code *) (void)) 0x0000) ();
				break;
			case 't':

			break;
		}
	}
	
}