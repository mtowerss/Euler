#include <stdio.h>

int main() {
  int sum = 2; //adding original a+b
  int a = 1;
  int b = 2;
  int c = 0;
  while(a < 4000000 && b < 4000000){ 
    c = a + b;
    a = b;
    b = c;
    if(c % 2 == 0){
      sum += c;
    }
  }
  printf("Total sum is %d", sum);
  return 0;
}
	 
