#include<xc.h>

int main(){
 TRISD=0x00;
 while(1){
     PORTD=0xFF;
     for(int i=0;i<10000;i++);
     PORTD=0x00;
     for(int i=0;i<10000;i++);
 }
 return 0;
}