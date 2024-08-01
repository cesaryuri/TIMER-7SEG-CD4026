#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int counter = 1;
int countdec = 1;
int counterst = 1;

int main(void){

    cli();
    DDRD |=(1<<2);
    DDRD |=(1<<3);
    DDRD |=(1<<4);
    DDRD |=(1<<5);
    
    PORTD |= (1<<4);
    PORTD &= (0<<4);
    PORTD |= (1<<5);
    PORTD &= (0<<5);

    //PORTD &=~(1<<2);

    TCNT0 = 130;
    TCCR0B = TCCR0B | (1<<CS02) | (1<<CS00);
    TIMSK0=(1<<TOIE0);
    sei();
    while(1){};

}

ISR(TIMER0_OVF_vect){

    counter++;
    TCNT0=130;
    //125
    if(counter == 60){

        PORTD |= (1<<2);
        PORTD &= (0<<2);
        counter = 1;
        countdec++;
        if(countdec == 11){
          PORTD |= (1<<3);
          PORTD &= (0<<3);
          countdec = 1;
          counterst++;
          if(counterst == 7){
          counterst = 1;
          //Serial.print("rodourst");
          PORTD |= (1<<4);
          PORTD &= (0<<4);
        }
        }
    }
    //PORTD &= (0<<2);

    

    /*
    if(countdec == 10){
        PORTD = PORTD | (1<<3);
        countdec = 1;
        counterst++;
        if(counterst == 6){
          counterst = 1;
          //Serial.print("rodourst");
          PORTD |= (1<<4);
        }
        PORTD &= (0<<4);

    }   
    PORTD |= (0<<3);
  */
}