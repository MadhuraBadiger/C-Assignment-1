#include <stdio.h>

int main()
{
    int menu, bill, quantity;
    int price;

    // Display menu
    printf("Welcome to Engineer juice bar");
    printf("\nPress 1. Lemon juice: ₹30");
    printf("\nPress 2. Apple juice: ₹30");
    printf("\nPress 3. Banana juice: ₹30");
    printf("\nPress 4. Mango juice: ₹30");
    printf("\nPress 5. Strawberry juice: ₹40");
    printf("\nPress 6. Pineapple juice: ₹50");
    printf("\nPress 7. Sweet lime juice: ₹50");
    printf("\nPress 8. Orange juice: ₹50");
    printf("\nPress 9. Watermelon juice: ₹50");
    printf("\nPress 10. Apple-Banana smoothie: ₹60");

    // Prompt for menu selection
    printf("\n\nYour choice: ");
    scanf("%d", &menu);

    // Set prices based on user choice
    switch(menu)
    {
        case 1:
            printf("\nLemon juice");
            price = 30;
            break;
        case 2:
            printf("\nApple juice");
            price = 30;
            break;
        case 3:
            printf("\nBanana juice");
            price = 30;
            break;
        case 4:
            printf("\nMango juice");
            price = 30;
            break;
        case 5:
            printf("\nStrawberry juice");
            price = 40;
            break;
        case 6:
            printf("\nPineapple juice");
            price = 50;
            break;
        case 7:
            printf("\nSweet lime juice");
            price = 50;
            break;
        case 8:
            printf("\nOrange juice");
            price = 50;
            break;
        case 9:
            printf("\nWatermelon juice");
            price = 50;
            break;
        case 10:
            printf("\nApple-Banana smoothie");
            price = 60;
            break;
        default:
            printf("\n\nPlease enter a valid choice...");
            return 1; // Exit if invalid input
    }

    // Get the quantity
    printf("\nPlease enter the required quantity: ");
    scanf("%d", &quantity);

    // Calculate the total bill
    bill = price * quantity;

    // Print the total bill
    printf("Total Bill: ₹%d\n", bill);

    printf("\nPlease collect your order from the counter");
    printf("\nVisit Again");
    printf("\n\nThankyou also share your feedback on our official website");
}




Output:
Welcome to Engineer juice bar
Press 1. Lemon juice: ₹30
Press 2. Apple juice: ₹30
Press 3. Banana juice: ₹30
Press 4. Mango juice: ₹30
Press 5. Strawberry juice: ₹40
Press 6. Pineapple juice: ₹50
Press 7. Sweet lime juice: ₹50
Press 8. Orange juice: ₹50
Press 9. Watermelon juice: ₹50
Press 10. Apple-Banana smoothie: ₹60

Your choice: 6

Pineapple juice
Please enter the required quantity: 4
Total Bill: ₹200

Please collect your order from the counter
Visit Again

Thankyou also share your feedback on our official website

