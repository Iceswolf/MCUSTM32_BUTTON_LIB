#include <stdio.h>
#include <stdlib.h>
#include <clock.c>
#include <config.c>
#include <led.c>
#include <pulsante.c>

int pulsante();
void main (void){

  
attiva_clock(1,'d');
attiva_clock(1,'a');

gpio_config('d',15,"output","push-pull","low","no");
gpio_config('a',0,"input","default","default","default");

while(1){   


if(pulsante()==1){
  led("blu","off");
    }
else{
  led("blu","on");
    }
  } 

} 