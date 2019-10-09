int pulsante();

#define  GPIO_A_IDR (unsigned int*) (0x40020010)

int pulsante(){

int outval=0;
	
unsigned int* puntatore;
	
puntatore=GPIO_A_IDR;

	
if(*puntatore & 1 == 1){
  outval=1;
}
else{
  outval=0;
}

return (outval);		
}