#include "fsl_device_registers.h"

static int unit_dot = 200000;     // unit length of a dot or the pause between dash/dot
static int unit_dash = 600000;    // unit length of a dash

static int space = 600000;     // unit length between chars

char morseString[3] = {'1', '2', '3'};

void delay(int x) {
	for(int i = 0; i < x; i++) {
		i++;
	}
}

void LED_Off(int time_delay) {
	GPIOD_PDOR = 0x0;
	delay(time_delay);
}

void MorseDot() {
	GPIOD_PDOR = 0x1;
	delay(unit_dot);
}

void MorseDash() {
	GPIOD_PDOR = 0x1;
	delay(unit_dash);
}

void transmitChar(char tmp) {
  switch (tmp) {
    case 'a':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'b':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'c':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'd':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'e':
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'f':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'g':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'h':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'i':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'j':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'k':
    	MorseDash();
	   	LED_Off(unit_dot);
	   	MorseDot();
	   	LED_Off(unit_dot);
	   	MorseDash();
	   	LED_Off(unit_dot);
	   	break;
    case 'l':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'm':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'n':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'o':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'p':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 'q':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'r':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 's':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case 't':
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'u':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'v':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'w':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'x':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'y':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case 'z':
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	break;
    case '1':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case '2':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case '3':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case '4':
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDot();
    	LED_Off(unit_dot);
    	MorseDash();
    	LED_Off(unit_dot);
    	break;
    case '5':
    	MorseDot();
       	LED_Off(unit_dot);
       	MorseDot();
       	LED_Off(unit_dot);
       	MorseDot();
       	LED_Off(unit_dot);
       	MorseDot();
       	LED_Off(unit_dot);
   	    MorseDot();
   	    LED_Off(unit_dot);
   	    break;
    case '6':
    	MorseDash();
     	LED_Off(unit_dot);
      	MorseDot();
    	LED_Off(unit_dot);
       	MorseDot();
       	LED_Off(unit_dot);
       	MorseDot();
       	LED_Off(unit_dot);
   	    MorseDot();
   	    LED_Off(unit_dot);
   	    break;
    case '7':
    	MorseDash();
    	LED_Off(unit_dot);
       	MorseDash();
       	LED_Off(unit_dot);
       	MorseDot();
       	LED_Off(unit_dot);
       	MorseDot();
       	LED_Off(unit_dot);
   	    MorseDot();
   	    LED_Off(unit_dot);
   	    break;
    case '8':
    	MorseDash();
       	LED_Off(unit_dot);
       	MorseDash();
       	LED_Off(unit_dot);
       	MorseDash();
       	LED_Off(unit_dot);
       	MorseDot();
       	LED_Off(unit_dot);
   	    MorseDot();
   	    LED_Off(unit_dot);
    	break;
    case '9':
    	MorseDash();
       	LED_Off(unit_dot);
       	MorseDash();
       	LED_Off(unit_dot);
       	MorseDash();
       	LED_Off(unit_dot);
       	MorseDash();
       	LED_Off(unit_dot);
   	    MorseDot();
   	    LED_Off(unit_dot);
   	    break;
    case '0':
    	MorseDash();
    	LED_Off(unit_dot);
       	MorseDash();
       	LED_Off(unit_dot);
       	MorseDash();
       	LED_Off(unit_dot);
       	MorseDash();
       	LED_Off(unit_dot);
   	    MorseDash();
   	    LED_Off(unit_dot);
   	    break;
    default:
    LightsOff(char_space);
  }
}

unsigned short ADC_read16b(void) {
	ADC0_SC1A = 0x1A;
	while(ADC0_SC2 & ADC_SC2_ADACT_MASK);
	while(!(ADC0_SC1A & ADC_SC1_COCO_MASK));
	return ADC0_RA;
}

/*void PORTA_IRQHandler(void) {
	NVIC_ClearPendingIRQ(PORTA_IRQn); //Clear pending interrupts

	unsigned int ones_digit;
	unsigned int tens_digit;

	unsigned int adcValue;
	//unsigned int convertedDecimal;

	adcValue = (unsigned int)(ADC_read16b());
	unsigned int Vk = adcValue * ((3.3) / (65535));

	GPIOC_PCOR = 0x1BF;
	GPIOC_PSOR = decoder[Vk / 10];
	//GPIOC_PDOR = decoder[Vk / 10]; //OUR CODE BREAKS HERE!

	GPIOD_PCOR = 0xFF;
	GPIOD_PSOR = decoder[Vk % 10];

	//GPIOC_PDOR = decoder[adcValue];

	//GPIOC_PDOR = decoder[ones_digit];
	//GPIOD_PDOR = decoder[tens_digit];

	//Clear ISFR
	PORTA_ISFR = (1 << 1);
}*/

int main(void) {

	//SIM_SCGC5 |= SIM_SCGC5_PORTA_MASK;
	SIM_SCGC5 |= SIM_SCGC5_PORTD_MASK;
	//SIM_SCGC6 |= SIM_SCGC6_ADC0_MASK;

	PORTD_GPCLR = 0x00FF0100;
	GPIOD_PDDR = 0xFF;

	/*PORTA_PCR1 = 0xA0100;

	ADC0_CFG1 =0x0C;

	ADC0_SC1A = 0x1F;

	GPIOA_PDDR |= (0 << 1);

	PORTA_ISFR = PORT_ISFR_ISF(0x02);
	NVIC_EnableIRQ(PORTA_IRQn);*/

	//GPIOD_PDOR = 0x1;
	for(;;) {

		//This for loop will transmit each ASCII character's Morse Code equivalent on the LED connected to PD0.

		for (int i = 0; i < sizeof(morseString); i++) {
			char tmp = morseString[i];
			transmitChar(tmp);
		}

		LED_Off(8000000);

		// PORTA_IRQHandler();
	}
	
    return 0;
}