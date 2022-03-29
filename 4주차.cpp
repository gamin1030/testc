#include <stdio.h>
main(){
	int a, b;
	float hap = 6;
	float sum = 0;
	
	for(a=8;a<=50;a+=2)
		for(b=6; b<=48; b+=2)
			hap = hap + b;
	sum = sum + (a/hap);
	printf("sum = %f", sum);			
}
