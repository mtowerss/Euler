#include <stdio.h>

int main() {
  int sum = 0;
  for(int a = 0; a < 1000; a++){ 
    if(a % 3 == 0 || a % 5 ==0){
      sum += a;
    }
  }
  printf("Total sum is %d", sum);
  return 0;
}
	
