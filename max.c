#include <stdio.h>
int main(void) {
  int Maximum, Numbers[100], Counter, Size;
  printf("How many numbers do you want to read?");
  scanf("%d", &Size);
  //printf("To find out the largest among 10 numbers\n");
  for(Counter = 1;Counter <= Size;Counter ++)
  {
    printf("Enter number %d:", Counter);
    scanf("%d", &Numbers[Counter]);
  }
  Maximum = Numbers[1];
  for(Counter = 1; Counter <= Size-1; Counter ++){
    if(Maximum < Numbers[Counter + 1]){
      Maximum = Numbers[Counter + 1];
    }
  }
  printf("The largest number is %d.\n", Maximum);
  return 0;
}
