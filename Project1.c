#include <stdio.h>

int main()
{
    int a,b,choice;
    printf("Enter your choice want to calculate:\n ");
    printf("1. Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n ");
    scanf("%d",&choice);

    printf("Enter two integers: \n");
    scanf("%d %d",&a,&b);

    if(choice==1)
    {
        printf("Sum = %d\n", a+b);
    }
    else if(choice==2)
    {
        printf("Difference = %d\n", a-b);
    }
    else if(choice==3)
    {
        printf("Product = %d\n", a*b);
    }
    else if(choice==4)
    {
        if(b!=0)
            printf("Quotient = %d\n", a/b);
        else
            printf("Error! Division by zero is not allowed.");
    }
    else if(choice==5)
    {
        if(b!=0)
            printf("Modulus = %d\n", a%b);
        else
            printf("Error! Division by zero is not allowed.");
    }
   else{
    printf("Invalid choice.\n");
   }
    return 0;
}