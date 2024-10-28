//code for if else using scanf//
//check wether the person is eligible to vote//
#include<stdio.h>
int main()
{
  int age;
  printf("Enter your age:");
  scanf("%d",&age);
  if(age<=18)
  {
    printf("Eligible to vote");
  }
  else
  {
    printf("Not eligible to vote");
  }
  
}



Output:
Enter your age:17
Not eligible to vote
