
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRC = 0x0F; 

    while (1)
    {
        PORTC = 0x01; 
        _delay_ms(1000);

        PORTC = 0x02; 
        _delay_ms(1000);

        PORTC = 0x04; 
        _delay_ms(1000);

        PORTC = 0x08; 
        _delay_ms(1000);
    }
}
