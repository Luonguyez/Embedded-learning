#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x.h"

#define SLK  GPIO_Pin_6
#define MOSI GPIO_Pin_7
#define SS   GPIO_Pin_8
#define PORT GPIOB

uint8_t data = 0;
void config_SPI();
void waitStart();
uint8_t receiveData();


int main(){
	
	config_SPI();
	while(1){
    	data = receiveData();
		}
		
	return 0;
}
void config_SPI(){
	GPIO_InitTypeDef gpioSPI; // struct at line 100, stm32f10x_gpio.h

	//Kich hoat clock cua port B
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE); 
	
		gpioSPI.GPIO_Pin = SLK | MOSI;
	gpioSPI.GPIO_Mode = GPIO_Mode_IPD;
	gpioSPI.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_Init(PORT, &gpioSPI);

	gpioSPI.GPIO_Pin = SS;
	gpioSPI.GPIO_Mode = GPIO_Mode_IPU;
	gpioSPI.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_Init(PORT, &gpioSPI);
	
}

uint8_t receiveData(){
	uint8_t data = 0;
	waitStart();
	for(uint8_t i = 0; i<8; i++){
		while(GPIO_ReadInputDataBit(PORT, SLK) == 0){};
		if(GPIO_ReadInputDataBit(PORT, MOSI) == 1)
				{data = data | (0x80 >> i);};
		while(GPIO_ReadInputDataBit(PORT, SLK) == 1){};
	}
	return data;
	
}

void waitStart(){
	while(GPIO_ReadInputDataBit(PORT, SS) == 1);
}
