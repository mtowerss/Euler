#include <stdio.h>

int main(){
  int smallest = 1;
  int counter = smallest;
  
  for(int x = 2; x < 20; x++){
    while(counter % x != 0){
      counter += smallest;
    }
    smallest = counter;
  }

  printf("Smallest positive number divisible by 1 to 20 %d", smallest);
} 
