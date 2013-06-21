#include "Delay.h"
#include "intrins.h"
void delay10ms(void)   //@22.1184 Îó²î -0.000000000001us
{
    unsigned char a,b,c;
    for(c=193;c>0;c--)
        for(b=114;b>0;b--)
            for(a=1;a>0;a--);
}

void delay1s(void)   //@22.1184 Îó²î -0.000000000125us
{
    unsigned char a,b,c,n;
    for(c=169;c>0;c--)
        for(b=228;b>0;b--)
            for(a=142;a>0;a--);
    for(n=5;n>0;n--);
    _nop_();  //if Keil,require use intrins.h
}