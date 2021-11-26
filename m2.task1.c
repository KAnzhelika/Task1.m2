#include <stdio.h>

int main()
{
  int sumPeople = 0, addingPeople = 4, prevSum;
  int array[2];
  
  printf("Numbers : ");
  scanf("%d %d", &array[0], &array[1]);
  
  sumPeople += array[1];
  prevSum = array[1];
  
  int i;
  
  for(i = 1; i < array[0]; i++)
  {
    prevSum +=  addingPeople;
    sumPeople += prevSum;
  }
  
  sumPeople -= array[1];
  printf("Result : %d", sumPeople);
  
  return 0;
}
