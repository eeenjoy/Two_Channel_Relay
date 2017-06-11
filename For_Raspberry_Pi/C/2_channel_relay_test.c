#include <wiringPi.h>
#include <stdio.h>

#define uchar unsigned char

uchar RelayPin[2] = { 0, 1 };

int main(void)
{
	int i;
	if(wiringPiSetup() == -1){ //when initialize wiring failed,print messageto screen
		printf("setup wiringPi failed !");
		return 1; 
	}
	
	for( i=0; i<1; i++ )
		pinMode( RelayPin[i], OUTPUT );

	while(1)
	{
		for( i=0; i<1; i++)
		{
		    digitalWrite( RelayPin[i], LOW );			
		    delay( 500 );
		    digitalWrite( RelayPin[i], HIGH );
		    delay( 500 );
		}
	}

	return 0;
}
