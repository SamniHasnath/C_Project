#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("=======WELCOME TO MY CALCULATOR========\n\n");
    printf("Enter your choice want to calculate:\n ");
    printf("1. Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n ");
    scanf("%d",&choice);

   switch(choice)
   {
    case 1:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        printf("Sum = %d\n",a+b);
        break;
        
    case 2:
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Difference = %d\n",a-b);
    break;

    case 3:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        printf("Product = %d\n",a*b);
        break;
        
    case 4:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        if(b==0)
        {
            printf("Error! Division by zero is not allowed.\n");
        }
        else
        {
            printf("Quotient = %d\n",a/b);
        }
        break;
        
    case 5:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        if(b==0)
        {
            printf("Error! Division by zero is not allowed.\n");
        }
        else
        {
            printf("Modulus = %d\n",a%b);
        }
        break;
        
    default:
    printf("You entered wrong choice\n");
    break;
   }
    return 0;
}