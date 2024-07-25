# 1 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
# 2 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 2
# 3 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 2
# 4 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 2


# 5 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
int counter = 0;
int main(void){

    
# 8 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
   __asm__ __volatile__ ("cli" ::: "memory")
# 8 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
        ;
    
# 9 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
   (*(volatile uint8_t *)((0x0A) + 0x20)) 
# 9 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
        |=(1<<7);
    
# 10 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
   (*(volatile uint8_t *)((0x0B) + 0x20)) 
# 10 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
         &=~(1<<7);
    
# 11 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
   (*(volatile uint8_t *)((0x26) + 0x20)) 
# 11 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
         = 130;
    
# 12 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
   (*(volatile uint8_t *)((0x25) + 0x20)) 
# 12 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
          = 
# 12 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
            (*(volatile uint8_t *)((0x25) + 0x20)) 
# 12 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
                   | (1<<
# 12 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
                         2
# 12 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
                             ) | (1<<
# 12 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
                                     0
# 12 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
                                         );
    
# 13 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
   (*(volatile uint8_t *)(0x6E))
# 13 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
         =(1<<
# 13 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
              0
# 13 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
                   );
    
# 14 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
   __asm__ __volatile__ ("sei" ::: "memory")
# 14 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
        ;
    while(1){};

}


# 19 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
extern "C" void __vector_16 /* Timer/Couner0 Overflow */ (void) __attribute__ ((signal,used, externally_visible)) ; void __vector_16 /* Timer/Couner0 Overflow */ (void)
# 19 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
                   {

    counter++;
    
# 22 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
   (*(volatile uint8_t *)((0x26) + 0x20))
# 22 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
        =130;
    if(counter == 125){

        
# 25 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino" 3
       (*(volatile uint8_t *)((0x0B) + 0x20))
# 25 "C:\\Users\\cesar\\Documents\\GitHub\\180724\\180724.ino"
            ^=(1<<7);
        counter = 0;
        Serial.print("rodou");
    }

}
