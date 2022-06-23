#include <stdio.h>
#include <stdlib.h>

int isPrime(int num){
    if(num % 2 == 0)
        return 0;
    else
	for(int k = 2; k < num/2; k++)
            if(num % k == 0)
	        return 0;
    return 1;

}

int main(){
    int counter = 1;
    for(int i = 3; counter != 10002; i++){
        if(isPrime(i) == 1)
            counter++;
	if(counter == 10001){
	    printf("%d\n",i);
	    break;
	}
    }
    return 0;
}
