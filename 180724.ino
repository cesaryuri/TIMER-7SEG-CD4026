#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int counter = 0;
int main(void){

    cli();
    DDRD |=(1<<7);
    PORTD &=~(1<<7);
    TCNT0 = 130;
    TCCR0B = TCCR0B | (1<<CS02) | (1<<CS00);
    TIMSK0=(1<<TOIE0);
    sei();
    while(1){};

}

ISR(TIMER0_OVF_vect){

    counter++;
    TCNT0=130;
    if(counter == 125){

        PORTD^=(1<<7);
        counter = 0;
        Serial.print("rodou");
    }

}