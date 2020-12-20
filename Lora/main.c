#include <reg52.h>
#include <init.h>
#include <util.h>
#include <line_detector.h>

sbit test = P2 ^ 0;

void main () {
	
    EA = 1;
    init_timer_0();
    init_external_interrupt_0();
    init_motor();
		
    while(1) {
      test = 1;
      delay(1000);
      test = 0;
      delay(1000);
    }
}