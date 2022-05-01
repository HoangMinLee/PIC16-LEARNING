#include"config.h"
#include<xc.h>
#include<stdio.h>
#include<stdint.h>


void E_LED_1(void);
void E_LED_2(void);
void E_LED_3(void);
void E_LED_4(void);

int main()
{
  /*All led are using sink current */

    uint8_t i;
    /* config A0-A4 is digital input */
    PCFG0 = 0;
    PCFG1 = 1;
    PCFG2 =1;
    PCFG3 =0;
    
    /* config output pin */
  	TRISB= 0X00;
    TRISC=0X00;
    TRISD =0X00;
    TRISA =0X00;


    while(1)
    {
       
       
        
        
        
      E_LED_3();  
        
        
     
    }
  
   
  
    
   
  
	
	return 0;
}

    


  void E_LED_1()
{
    
	PORTB = 0X00;
    PORTC = 0X00;
    PORTD = 0X00;
    PORTA = 0X00;
   	__delay_ms(500);

    PORTB = 0XFF;
    PORTC = 0XFF;
    PORTD = 0XFF;
    PORTA = 0XFF;
  __delay_ms(500);

	
	
	
	
}
  
    void E_LED_2(void)
{
      uint8_t i;
      for(i=0;i<2;i++)
      {
    
         PORTB = 0XAA;
         PORTC = 0XAA;
         PORTD = 0XAA;
         PORTA = 0XAA;
       __delay_ms(1000);
         PORTB = 0X55;
         PORTC = 0X55;
         PORTD = 0X55;
         PORTA = 0X55;
      
        __delay_ms(1000);
   
      }
}
  void E_LED_3(void)
{
    PORTC = 0XFFFF;
	uint16_t  value = 0XFFFF;
    uint16_t value2;
   
	uint8_t index;
	for(index =0;index < 16;index++)
	{
        value = (value<<1)&0XFFFE;
		PORTB = value ;
       // __delay_ms(500);
        if(index >= 8)
        {
            value2 = value>>8;
            value2 =(value2<<1)&0XFFFE;
            PORTC = value2;
          //  __delay_ms(500);
        
        }
    }
  }