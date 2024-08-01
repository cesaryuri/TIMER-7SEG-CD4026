# 1 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
# 2 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 2
# 3 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 2
# 4 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 2


# 5 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
int counter = 1;
int countdec = 1;
int counterst = 1;

int main(void){

    
# 11 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   __asm__ __volatile__ ("cli" ::: "memory")
# 11 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
        ;
    
# 12 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x0A) + 0x20)) 
# 12 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
        |=(1<<2);
    
# 13 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x0A) + 0x20)) 
# 13 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
        |=(1<<3);
    
# 14 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x0A) + 0x20)) 
# 14 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
        |=(1<<4);
    
# 15 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x0A) + 0x20)) 
# 15 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
        |=(1<<5);

    
# 17 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 17 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
         |= (1<<4);
    
# 18 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 18 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
         &= (0<<4);
    
# 19 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 19 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
         |= (1<<5);
    
# 20 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 20 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
         &= (0<<5);

    //PORTD &=~(1<<2);

    
# 24 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x26) + 0x20)) 
# 24 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
         = 130;
    
# 25 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x25) + 0x20)) 
# 25 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
          = 
# 25 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
            (*(volatile uint8_t *)((0x25) + 0x20)) 
# 25 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
                   | (1<<
# 25 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
                         2
# 25 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
                             ) | (1<<
# 25 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
                                     0
# 25 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
                                         );
    
# 26 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)(0x6E))
# 26 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
         =(1<<
# 26 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
              0
# 26 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
                   );
    
# 27 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   __asm__ __volatile__ ("sei" ::: "memory")
# 27 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
        ;
    while(1){};

}


# 32 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
extern "C" void __vector_16 /* Timer/Couner0 Overflow */ (void) __attribute__ ((signal,used, externally_visible)) ; void __vector_16 /* Timer/Couner0 Overflow */ (void)
# 32 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
                   {

    counter++;
    
# 35 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
   (*(volatile uint8_t *)((0x26) + 0x20))
# 35 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
        =130;
    //125
    if(counter == 60){

        
# 39 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
       (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 39 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
             |= (1<<2);
        
# 40 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
       (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 40 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
             &= (0<<2);
        counter = 1;
        countdec++;
        if(countdec == 11){
          
# 44 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
         (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 44 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
               |= (1<<3);
          
# 45 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
         (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 45 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
               &= (0<<3);
          countdec = 1;
          counterst++;
        if(counterst == 7){
          counterst = 1;
          //Serial.print("rodourst");
          
# 51 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
         (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 51 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
               |= (1<<4);
          
# 52 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino" 3
         (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 52 "C:\\Users\\cesar\\Documents\\GitHub\\TIMER-7SEG-CD4026\\TIMER-7SEG-CD4026.ino"
               &= (0<<4);
        }
        }
    }
}
