#include <reg52.h>
#include <init.h>
char a = 0;
void main () {
	
    init_timer_0();
    
    while(1) {
      a++;  
    }
}