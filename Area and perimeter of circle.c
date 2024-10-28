//code for area and perimeter of circle//
#include<stdio.h>
int main()
{
  float area,peri,r,pi=3.14;
  printf("Enter the value of radius:");
  scanf("%f",&r);
  area=pi*r*r;//formula for area of circle//
  printf("\nArea of circle=%f sqcm",area);
  peri=2*pi*r;//formila for perimeter of circle//
  printf("\nPerimeter of circle=%f cm", peri);
}



output:
Enter the value of radius:10

Area of circle=314.000000 sqcm
Perimeter of circle=62.800003 cm

