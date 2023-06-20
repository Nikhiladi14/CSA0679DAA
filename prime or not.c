#include <stdio.h>

int main()

{

    int i,count=0;

    int num;

    printf("Enter a number: ");

    scanf("%d",&num);

    for(i=1;i<=num;i++) 

    { 
        if(num%i==0) 

            count++; 

    }

    if(num<=1)

        printf("%d is not a prime number", num);

    else if(count > 2) 

        printf("%d is not a prime number", num);

    else

        printf("%d is a prime number", num);

    return 0;

}