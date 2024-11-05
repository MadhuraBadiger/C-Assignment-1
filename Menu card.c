//switch case for menu card//
#include<stdio.h>
int main()
{
    int menu;
    printf("Press 1.Mango juice\nPress 2.Strawberry juice\nPress 3.Lichi juice\nPress 4.Orange juice\nPress 5.Apple juice\n Your choice:");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1:
        printf("\nMango juice");
        break;
        
        case 2:
        printf("\nStrawberry juice");
        break;
        
        case 3:
        printf("\nLichi juice");
        break;
        
        case 4:
        printf("\nOrange juice");
        break;
        
        case 5:
        printf("\nApple juice");
        break;
        
        default:
        printf("\nPlease enter a valid choice..");
        
    }
     printf(" Thankyou...");
}

Output:
Press 1.Mango juice
Press 2.Strawberry juice
Press 3.Lichi juice
Press 4.Orange juice
Press 5.Apple juice
 Your choice:5

Apple juice
Thankyou... 