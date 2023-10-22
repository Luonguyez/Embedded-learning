#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x.h"

#define SLK  GPIO_Pin_6
#define MOSI GPIO_Pin_7
#define SS   GPIO_Pin_8
#define PORT GPIOB

void config_SPI();
void transmitData(uint8_t data);
void startSPI();
void finishSPI();
void clock();

uint8_t data = 48;

int main(){
	
	config_SPI();
	
		transmitData(data);
	
	return 0;
}

void config_SPI(){
	//Kich hoat clock cua port B
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE); 
	
	GPIO_InitTypeDef gpioSPI; // struct at line 100, stm32f10x_gpio.h
	gpioSPI.GPIO_Pin =  SLK | MOSI | SS;
	gpioSPI.GPIO_Mode = GPIO_Mode_Out_PP;
	gpioSPI.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_Init(PORT, &gpioSPI);
	
	GPIO_SetBits(PORT, SS);
	GPIO_ResetBits(PORT, SLK);
	GPIO_ResetBits(PORT, MOSI);
	
}
void startSPI(){
	GPIO_ResetBits(PORT, SS);
}

void finishSPI(){
	GPIO_SetBits(PORT, SS);
}

void clock(){
	GPIO_SetBits(PORT, SLK);
	for(int i = 0; i< 1000; i++);
	GPIO_ResetBits(PORT, SLK);
	for(int i = 0; i< 1000; i++);
}

void transmitData(uint8_t data){
	startSPI();
	for(uint8_t i=0; i<8; i++){
		if(( data & (0x80 >> i)) == 0) GPIO_ResetBits(PORT, MOSI);
		else GPIO_SetBits(PORT, MOSI);
		clock();
	}
	finishSPI();
}
