/*
 * GccApplication1.c
 *
 * Created: 4/27/2018 2:26:37 PM
 * Author : MonierAshraf
 */ 


#define F_CPU 1000000   

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
int main(void)
{ 
	 DDRC = 0xFF; //PORTB as Output
	 DDRB = 0xFF;//PORTB as Output
	 DDRD=0x00;//PORTB as Iutput
	 
	 PORTC = 0x00;
	 PORTB=0x38;
	 PORTD=0x03;
	
	

	 	
	while(1)
	{

	if(PIND==0x01)
	{
	

			PORTC|=(1<<PORTC2);
			PORTC&=~(1<<PORTC2);
			_delay_ms(100);

			PORTB=0x01; //clear
			PORTC|=(1<<PORTC2);
			PORTC&=~(1<<PORTC2);
			_delay_ms(100);
			
			PORTB=0x0f; //caser is ON
			PORTC|=(1<<PORTC2);
			PORTC&=~(1<<PORTC2);
			_delay_ms(50);

			PORTB=0x80; //start line 1 from 1 letter
			PORTC|=(1<<PORTC2);
			PORTC&=~(1<<PORTC2);
			_delay_ms(200);

			
			
			PORTC|=(1<<PORTC0); //RS=1 data entrry

	//The //
	PORTB=0b01010100;//T
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	
	PORTB=0b01101000;//h
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b01100101;//e
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b00100000;//space
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	//Motor//
	PORTB=0b01001101;//M
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	
	PORTB=0b01101111;//o
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b01110100;//t
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b01101111;//o
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b01110010;//r
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b00100000;//space
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);










	//comes//
	PORTB=0b01100011;//c
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);
	
	PORTB=0b01101111;//o
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b01101101;//m
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b01100101;//e
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b01110011;//s
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b00100000;//space
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);


	
	PORTC=0x00;
	PORTB=0xC0; //start line 2 from 1 letter
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);


	PORTC|=(1<<PORTC0); //RS=1 data entrry




	//out//
	PORTB=0b01101111;//o
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);


	PORTB=0b01110101;//u
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);
	
	PORTB=0b01110100;//t
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b00100000;//space
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	//hot//
	PORTB=0b01101000;//h
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b01101111;//o
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	
	PORTB=0b01110100;//t
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);
	
	PORTB=0b00100000;//space
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	
	//air//
	
	
	PORTB=0b01100001;//a
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b01101001;//i
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);

	PORTB=0b01110010;//r
	PORTC|=(1<<PORTC2);
	PORTC&=~(1<<PORTC2);
	_delay_ms(100);


	



			//Rotates Motor in Antilockwise
			PORTC = 0x08; //0001000
			_delay_ms(1000);
			
			//Stops Motor
			PORTC = 0x00; //0000000
			_delay_ms(1000);
				
				
	}
	
	
		else if(PIND==0x02)
		{
		
		
		
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0x01; //clear
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);
		
		PORTB=0x0f; //caser is ON
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(50);

		PORTB=0x80; //start line 1 from 1 letter
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(200);

		
		
		PORTC|=(1<<PORTC0); //RS=1 data entrry

		//The //
		PORTB=0b01010100;//T
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		
		PORTB=0b01101000;//h
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b01100101;//e
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b00100000;//space
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		//Motor//
		PORTB=0b01001101;//M
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		
		PORTB=0b01101111;//o
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b01110100;//t
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b01101111;//o
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b01110010;//r
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b00100000;//space
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);



		//comes//
		PORTB=0b01100011;//c
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);
		
		PORTB=0b01101111;//o
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

			PORTB=0b01101101;//m
			PORTC|=(1<<PORTC2);
			PORTC&=~(1<<PORTC2);
			_delay_ms(100);

			PORTB=0b01100101;//e
			PORTC|=(1<<PORTC2);
			PORTC&=~(1<<PORTC2);
			_delay_ms(100);

		PORTB=0b01110011;//s
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b00100000;//space
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);


		
		PORTC=0x00;
		PORTB=0xC0; //start line 2 from 1 letter
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);


		PORTC|=(1<<PORTC0); //RS=1 data entrry




		//out//
		PORTB=0b01101111;//o
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);


		PORTB=0b01110101;//u
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);
		
		PORTB=0b01110100;//t
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b00100000;//space
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		//cool//
		PORTB=0b01100011;//c
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b01101111;//o
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b01101111;//o
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b01101100;//l
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);
		
		PORTB=0b00100000;//space
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		
		//air//
		
		
		PORTB=0b01100001;//a
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b01101001;//i
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		PORTB=0b01110010;//r
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);


		

		PORTB=0b00100000;//space
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

	

		//Rotates Motor in Clockwise
		PORTC = 0x10; //0010000
		_delay_ms(1000);
		
		//Stops Motor
		PORTC = 0x18; //0011000
		_delay_ms(1000);
		
			
			}

			else  {PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);

				PORTB=0x01; //clear
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);
				
				PORTB=0x0f; //caser is ON
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(50);

				PORTB=0x80; //start line 1 from 1 letter
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(200);

				
				
				PORTC|=(1<<PORTC0); //RS=1 data entrry

				//The //
				PORTB=0b01010100;//T
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);

				
				PORTB=0b01101000;//h
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);

				PORTB=0b01100101;//e
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);

				PORTB=0b00100000;//space
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);

				//Motor//
				PORTB=0b01001101;//M
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);

				
				PORTB=0b01101111;//o
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);

				PORTB=0b01110100;//t
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);

				PORTB=0b01101111;//o
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);

				PORTB=0b01110010;//r
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);

				PORTB=0b00100000;//space
				PORTC|=(1<<PORTC2);
				PORTC&=~(1<<PORTC2);
				_delay_ms(100);
				 
				 //are// 
				 		
				 		PORTB=0b01100001;//a
				 		PORTC|=(1<<PORTC2);
				 		PORTC&=~(1<<PORTC2);
				 		_delay_ms(100);


				 PORTB=0b01110010;//r
				 PORTC|=(1<<PORTC2);
				 PORTC&=~(1<<PORTC2);


				 _delay_ms(100);
				 PORTB=0b01100101;//e
				 PORTC|=(1<<PORTC2);
				 PORTC&=~(1<<PORTC2);
				 _delay_ms(100);
					
					
					PORTB=0b00100000;//space
					PORTC|=(1<<PORTC2);
					PORTC&=~(1<<PORTC2);
					_delay_ms(100);

					PORTC=0x00;
					PORTB=0xC0; //start line 2 from 1 letter
					PORTC|=(1<<PORTC2);
					PORTC&=~(1<<PORTC2);
					_delay_ms(100);


					PORTC|=(1<<PORTC0); //RS=1 data entrry

					PORTB=0b00100000;//space
					PORTC|=(1<<PORTC2);
					PORTC&=~(1<<PORTC2);
					_delay_ms(100);

					PORTB=0b00100000;//space
					PORTC|=(1<<PORTC2);
					PORTC&=~(1<<PORTC2);
					_delay_ms(100);

					PORTB=0b00100000;//space
					PORTC|=(1<<PORTC2);
					PORTC&=~(1<<PORTC2);
					_delay_ms(100);

					PORTB=0b00100000;//space
					PORTC|=(1<<PORTC2);
					PORTC&=~(1<<PORTC2);
					_delay_ms(100);

					PORTB=0b00100000;//space
					PORTC|=(1<<PORTC2);
					PORTC&=~(1<<PORTC2);
					_delay_ms(100);

						//Stop//
						
						PORTB=0b01010011;//S
						PORTC|=(1<<PORTC2);
						PORTC&=~(1<<PORTC2);
						_delay_ms(100);

						
						PORTB=0b01110100;//t
						PORTC|=(1<<PORTC2);
						PORTC&=~(1<<PORTC2);
						_delay_ms(100);



						
						PORTB=0b01101111;//o
						PORTC|=(1<<PORTC2);
						PORTC&=~(1<<PORTC2);
						_delay_ms(100);


						PORTB=0b01110000;//p
						PORTC|=(1<<PORTC2);
						PORTC&=~(1<<PORTC2);
						_delay_ms(100);
						

						PORTB=0b00100000;//space
						PORTC|=(1<<PORTC2);
						PORTC&=~(1<<PORTC2);
						_delay_ms(100);

						PORTB=0b00100000;//space
						PORTC|=(1<<PORTC2);
						PORTC&=~(1<<PORTC2);
						_delay_ms(100);
PORTB=0b00100000;//space
PORTC|=(1<<PORTC2);
PORTC&=~(1<<PORTC2);
_delay_ms(100);

					
					//Stops Motor
					PORTC = 0x18; //0011000
					_delay_ms(1000);
			}
			

			

		PORTB=0x01; //clear
		PORTC|=(1<<PORTC2);
		PORTC&=~(1<<PORTC2);
		_delay_ms(100);

		
	}
		
}


