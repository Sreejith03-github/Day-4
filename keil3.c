#include <lpc214x.h>
int main() 
{

IODIR0 |= (1<<3);

while (1)
	{
		IOSET0 |=(1<<3);
	  //IOCLR0 |=(1<<3);
        
    }

}

