#include "LCD1602.h"
#include "stm8s_tim4.h"
void delay_ms(uint16_t u16Delay)
{
    TIM4_TimeBaseInit(TIM4_PRESCALER_128, 125 - 1);
	TIM4_Cmd(ENABLE);
    while (u16Delay) 
    {
        TIM4_SetCounter(0);
        TIM4_ClearFlag(TIM4_FLAG_UPDATE);
        while (TIM4_GetFlagStatus(TIM4_FLAG_UPDATE) == RESET) {}
        --u16Delay;
    }
}
void lcd_init(void)
{
	/*Config output for LCD 1602*/
	GPIO_Init(GPIOA,(GPIO_Pin_TypeDef)(GPIO_PIN_1|GPIO_PIN_2),GPIO_MODE_OUT_PP_LOW_FAST);
    GPIO_Init(GPIOD,(GPIO_Pin_TypeDef)(GPIO_PIN_6|GPIO_PIN_4|GPIO_PIN_3|GPIO_PIN_2),GPIO_MODE_OUT_PP_LOW_FAST);
    delay_ms(40);

    PIN_LOW(D4_PORT, D4_PIN);
    PIN_HIGH(D5_PORT,D5_PIN);
	PIN_LOW(D6_PORT,D6_PIN);
	PIN_LOW(D7_PORT,D7_PIN);
	PIN_LOW(RS_PORT,RS_PIN);
	
	PIN_HIGH(EN_PORT,EN_PIN);
	PIN_LOW(EN_PORT,EN_PIN);

    lcd_write(0,0x28);
	lcd_write(0,0x0c);
	lcd_write(0,0x06);
	lcd_write(0,0x01);
}

void lcd_write(uint8_t type, uint8_t data)
{
    delay_ms(2);
	if(type)
	{
		PIN_HIGH(RS_PORT,RS_PIN);
	}else
	{
		PIN_LOW(RS_PORT,RS_PIN);
	}
	
	//Send High Nibble
	if(data&0x80)
	{
		PIN_HIGH(D7_PORT,D7_PIN);
	}else
	{
		PIN_LOW(D7_PORT,D7_PIN);
	}
	
	if(data&0x40)
	{
		PIN_HIGH(D6_PORT,D6_PIN);
	}else
	{
		PIN_LOW(D6_PORT,D6_PIN);
	}
	
	if(data&0x20)
	{
		PIN_HIGH(D5_PORT,D5_PIN);
	}else
	{
		PIN_LOW(D5_PORT,D5_PIN);
	}
	
	if(data&0x10)
	{
		PIN_HIGH(D4_PORT,D4_PIN);
	}else
	{
		PIN_LOW(D4_PORT,D4_PIN);
	}
	PIN_HIGH(EN_PORT,EN_PIN);
	PIN_LOW(EN_PORT,EN_PIN);
	

	//Send Low Nibble
	if(data&0x08)
	{
		PIN_HIGH(D7_PORT,D7_PIN);
	}else
	{
		PIN_LOW(D7_PORT,D7_PIN);
	}
	
	if(data&0x04)
	{
		PIN_HIGH(D6_PORT,D6_PIN);
	}else
	{
		PIN_LOW(D6_PORT,D6_PIN);
	}
	
	if(data&0x02)
	{
		PIN_HIGH(D5_PORT,D5_PIN);
	}else
	{
		PIN_LOW(D5_PORT,D5_PIN);
	}
	
	if(data&0x01)
	{
		PIN_HIGH(D4_PORT,D4_PIN);
	}else
	{
		PIN_LOW(D4_PORT,D4_PIN);
	}
	PIN_HIGH(EN_PORT,EN_PIN);
	PIN_LOW(EN_PORT,EN_PIN);
}

void lcd_puts(uint8_t x, uint8_t y, int8_t *string)
{
    switch(x)
	{
		case 0: //Row 0
			lcd_write(0,0x80+0x00+y);
			break;
		case 1: //Row 1
			lcd_write(0,0x80+0x40+y);
			break;
	}
    while(*string)
	{
		lcd_write(1,*string);
		string++;
	}
}
void lcd_clear(void)
{
	lcd_write(0,0x01);
}