#include <stdio.h>
#include <stdlib.h>


int main(){

int birler,onlar,yuzler,binler,ana;

ana=5353;
binler=ana/1000;
yuzler=ana/100%10;
onlar=ana%100/10;
birler=ana%10;

  printf("binler basamagi %d\n",binler);
  printf("yuzler basamagi: %d\n",yuzler);
  printf("onlar basamagi: %d\n",onlar);
  printf("birler basamagi: %d\n",birler);




return 0;
}
