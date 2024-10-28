//code for area and perimeter of rectangle//
#include<stdio.h>
int main()
{
  float area,peri,leng,width;
  printf("Enter the value of length:");
  scanf("%f",&leng);
  printf("Enter the value of width:");
  scanf("%f",&width);
  area=leng*width; //formula for area of rectangle//
  printf("\nArea of rectangle=%f sqcm",area);
  peri=2*(leng+width); //formula for perimeter of rectangle//
  printf("\nPerimeter of rectangle=%f cm", peri);
}


Output:
Enter the value of length:12
Enter the value of width:5

Area of rectangle=60.000000 sqcm
Perimeter of rectangle=34.000000 cm

