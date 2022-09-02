#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i = 1;
	long long int result1 = 0;
	for(; i <= 100; i++) result1 += (i*i);
	long long int result2 = 5050 * 5050;
	printf("%lld",result1 - result2);
	return 0;
}
