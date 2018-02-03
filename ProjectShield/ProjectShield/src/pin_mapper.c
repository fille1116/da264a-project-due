/*
 * pin_mapper.c
 *
 * Created: 2015-06-17 14:32:55
 *  Author: Daniel Nordahl
 */ 
#include "pin_mapper.h"

static uint8_t pin_table[66] = {PIO_PA8_IDX,PIO_PA9_IDX,PIO_PB25_IDX,PIO_PC28_IDX,PIO_PA29_IDX,
					PIO_PC25_IDX,PIO_PC24_IDX,PIO_PC23_IDX,PIO_PC22_IDX,PIO_PC21_IDX,
					PIO_PC29_IDX,PIO_PD7_IDX,PIO_PD8_IDX,PIO_PB27_IDX,0,0,0,0,0,0,0,0,
					PIO_PB26_IDX,PIO_PA14_IDX,PIO_PA15_IDX,PIO_PD0_IDX,PIO_PD1_IDX,
					PIO_PD2_IDX,PIO_PD3_IDX,PIO_PD6_IDX,PIO_PD9_IDX,PIO_PA7_IDX,PIO_PD10_IDX,
					PIO_PC1_IDX,PIO_PC2_IDX,PIO_PC3_IDX,PIO_PC4_IDX,PIO_PC5_IDX,PIO_PC6_IDX,
					PIO_PC7_IDX,PIO_PC8_IDX,PIO_PC9_IDX,PIO_PA19_IDX,PIO_PA20_IDX,PIO_PC19_IDX,
					PIO_PC18_IDX,PIO_PC17_IDX,PIO_PC16_IDX,PIO_PC15_IDX,PIO_PC14_IDX,PIO_PC13_IDX,
					PIO_PC12_IDX,PIO_PB21_IDX,PIO_PB14_IDX,PIO_PA16_IDX,PIO_PA24_IDX,PIO_PA23_IDX,
					PIO_PA22_IDX,PIO_PA6_IDX,PIO_PA4_IDX,PIO_PA3_IDX,PIO_PA2_IDX,PIO_PB17_IDX,
					PIO_PB18_IDX,PIO_PB19_IDX,PIO_PB20_IDX};
					
uint8_t arduino_to_sam(uint8_t pin){
	return pin_table[pin];
}
