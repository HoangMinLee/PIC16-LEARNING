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
    uint8_t i;
    // config A0-A4 is digital input
    PCFG0 = 0;
    PCFG1 = 1;
    PCFG2 =1;
    PCFG3 =0;
    
    
	TRISB= 0X00;
    TRISC=0X00;
    TRISD =0X00;
    TRISA =0X00;
  //  TRISC =0X00;
   // PORTA= 0XFF;
   // PORTA =0X00;
   // fun_1();
   // PORTA = 0XFF; 
   // PORTA = 0X00;
   // PORTA =   0XFF;
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
	PORTB =0XFF;
    PORTC =0XFF;
    PORTD =0XFF;
    PORTA =0XFF;
   // PORTC =0X00;
  
    

	__delay_ms(500);

	
	
	
	
}
  
    void E_LED_2(void)
{
      uint8_t i;
      for(i=0;i<2;i++)
      {
    
         PORTB = 0XAA;
         PORTC = 0XAA;
         PORTD =  0XAA;
         PORTA =  0XAA;
       
        __delay_ms(1000);
        
        //  PORTA = 0XFF;
        //  PORTC =0X00;
        //__delay_ms(100);
        
        PORTA = 0X55;
      //  PORTC = 0X55;
        __delay_ms(1000);
      //  PORTA= 0XFF;
      //  PORTC = 0X00;
       // __delay_ms(100);
      }
      
        
        
    
}
 

 
  void E_LED_3(void)
{
	unsigned int  value = 0XFF;
	uint8_t index;
	for(index =0;index <=7;index++)
	{
        value = (value<<1)|0XFE;
		PORTB = value ;
      //  PORTC = value;
	
      //  __delay_ms(1000);
	}
    /* 
    value = 0X00;
    for(index =0;index <7;index++)
	{
        value = (value>>1)|0X80;
		PORTB = value ;
       // PORTC = value;
	
        __delay_ms(1000);
    }
      */
  }
    /*
    value = 0X80;
	for(index=0 ; index <=7 ;index++)
	{
        value = value 
		PORTB = value >>index ;
		__delay_ms(200);
	}
	
}
  void fun_4(void)
  {
      PORTB =0X00;
      int i;
      for(i=0;i<8;i++)
      {
          __delay_ms(1000);
          PORTB =(PORTB<<1)|0X01;
      }
  }
   
   
   
   */