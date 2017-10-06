#include <stdio.h>
#include <stdlib.h>

long main(int argc, char *argv[]){
  char chararreglo[20];
  chararreglo[0]='A';
  chararreglo[1]='s';
  chararreglo[2]='i';
  chararreglo[3]=' ';
  chararreglo[4]='e';
  chararreglo[5]='s';
  chararreglo[6]=' ';
  chararreglo[7]='l';
  chararreglo[8]='a';
  chararreglo[9]=' ';
  chararreglo[10]='v';
  chararreglo[11]='i';
  chararreglo[12]='d';
  chararreglo[13]='a';
  chararreglo[14]='\0';
  int i=0;
  while (chararreglo[i]!='\0'){
        printf ("%c",chararreglo[i]);
        i=i+1;
        }
        printf ("\n");
  
  char chararr[]= "de caprichosa\navece negra\navece color rosa\nasi es la vida\njacarandosa\n\n";
  for (i=0; chararr[i] != '\0' ; i++){
      printf ("%c",chararr[i]);
  }
  
  char chara[] ="Te quita, te ponea\nte sube y te baja\ny aveces te lo da\nAsi es la vida\n\n";
  printf ("%s",&chara[0]);
  
  char charb[] ="\"Elefante\", OLE.\n";
  printf ("%s",charb);
  
  system("PAUSE");	
  return 0;
}
