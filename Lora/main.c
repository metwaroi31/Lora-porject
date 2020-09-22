#include <reg52.h>
#include <init.h>
#include <util.h>

void main () {
	
    init_timer_0();
    while(1) {
      P2 = 0xFF;
      delay(1000);
      P2 = 0x00;
      delay(1000);
    }
}