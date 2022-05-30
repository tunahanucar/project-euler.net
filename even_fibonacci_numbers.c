#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int sum = 0;
  int num;
  for(int n = 1; num < 4000000; n++){
    num = (pow((1+ sqrt(5)),n) - pow((1- sqrt(5)),n)) / (pow(2,n) * sqrt(5)); 
    if(num % 2 == 0)sum += num;
  }
  printf("%d\n",sum);
  return 0;
}
