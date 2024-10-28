//Code for FOR LOOP//
//Code for table//
#include<stdio.h>
int main()
{
    int m,number,ans;
    printf("Enter a number:");
    scanf("%d",&number);
   for(m=1;m<=10;m++)
    {
    ans=number*m;
    printf("\n%d*%d=%d",m,number,ans);
    }

 
}



Output:
Enter a number:7
1*7=7
2*7=14
3*7=21
4*7=28
5*7=35
6*7=42
7*7=49
8*7=56
9*7=63
10*7=70

