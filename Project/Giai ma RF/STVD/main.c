/* MAIN.C file
 * 
 * Copyright (c) 2002-2005 STMicroelectronics
 */
 

#include "main.h"
//===========================khai bao cac chan vao ra======================//
#define LED_PORT  	GPIOA//khai bao lED o PORTB
#define LED_PIN  	GPIO_PIN_3//khai bao LED1 o chan PB0
#define BUT_PORT	GPIOD
#define BUT_PIN  	GPIO_PIN_4//khai bao BUTTON o chan PC7
//============================khai bao bien va hang==========================//
uint8_t TxAddress[] = {0xEE, 0xDD, 0xCC, 0xBB, 0xAA};
uint8_t TxData[] = "Hello World\n";


//============================khai bao ham==================================//
void Clock_setup(void);	//thiet lap xung clk cho MCU
void GPIO_setup(void);	//thiet lap GPIO

//============================HAM MAIN=======================================//
int main()
{
	Clock_setup();//goi lai ham
	GPIO_setup();//goi lai ham
	delay_config();
  
	SPI_Master_Init(SPI_BAUDRATEPRESCALER_64);
	
	//nRF24_Init();

	//nRF24_TxMode(TxAddress, 10);
	//GPIO_WriteHigh(LED_PORT, LED_PIN);
	while (1)
	{
	  
		//if(nRF24_Transmit(TxData) == 1)
	//{}
		
		GPIO_WriteHigh(LED_PORT, LED_PIN);
		SPI_SendData(0x08);
		while( !SPI_GetFlagStatus(SPI_FLAG_TXE));
		GPIO_WriteLow(LED_PORT, LED_PIN);
		delay_ms(1);
	  
	}
}

void Clock_setup(void)
{
	//KHAI BAO XUNG CLK 16MHz
	CLK_DeInit();   
	CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);
}
void GPIO_setup(void)
{
	///RESET CAC PORT
	GPIO_DeInit(GPIOD);
	GPIO_DeInit(GPIOC);
	GPIO_DeInit(GPIOA);
	GPIO_DeInit(GPIOE);
	GPIO_DeInit(GPIOB);   
	GPIO_DeInit(GPIOF);
	//KHAI BAO CAC CHAN VAO RA
	GPIO_Init(LED_PORT,LED_PIN,GPIO_MODE_OUT_PP_LOW_FAST);
	GPIO_Init(BUT_PORT,BUT_PIN,GPIO_MODE_IN_PU_IT);
	
}





