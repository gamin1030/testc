#include <stdio.h>

main(){
	char ss[]="We are the champion\n";
	char Large[80]="WE ARE THE CHAMPION\n";
	char Small[80]="we are the champion\n";
	
	int i;
   for(i=0;ss[i]!='\0';i++)
   {
   		if(ss[i]>='A' && ss[i]<='Z')
   			printf("%c", ss[i]);
   		else if(ss[i]>='a'&& ss[i]<='z')
   			printf("%c", ss[i]-('a'-'A'));
   		else
   			printf("%c",ss[i]);
   }
   
	printf("%s\n", ss);
	printf("%s\n", Large);
	printf("%s\n", Small);
}
