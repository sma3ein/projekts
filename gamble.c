
#include<stdio.h>
#include<stdlib.h>
int main(void)
{

int deposit = 1;
int balance=0;
int bet=0;
int computer=0;
int guess=0;
while(deposit == 1)
{
    printf ("deposit an amount of money: ");

    scanf ("%d" , &deposit);
    balance += deposit;
    printf("your balance  is %d \n\n ", balance);
    if (balance == 0)
    { printf("not enough balance!");
        return 0 ;
    }
for(int i = 1 ; i< 4 ; i++)
{
    printf("welcome player X to round %d \n ", i);
    printf("your balance  is %d \n\n ", balance);
    printf("enter thr amount of money to bet with : ");
    scanf("%d" , &bet);
    if(bet > balance)
    {
        printf("!! not enough deposit . \n\n enter a new bet :  ");
        scanf("%d" , &bet);
    }
    else
    {
    printf ("choose a number from 1 to 7 :  ");
    scanf("%d" , &guess);

    computer = rand() % 8 ;

    if (computer == guess)
    {
        printf("you've won this round , Congratulation your new balance is : ");
        balance = balance + bet;
        printf("%d \n\n" , balance );


    }
    else
    {
        printf("you've lost \n\n  new balance is :  ");
        balance = balance - bet;
        printf("%d\n\n" , balance);

    }
    if (balance == 0 )
    {return 0;
    }

    }







}


printf ("End of the game\n");
if (balance > deposit)
{   
    printf("you've won extra %d to your deposit amount\n\n" , balance - deposit);
}
else if(balance > deposit)
{   
    printf ("you've lost %d from your deposit\n\n" , deposit - balance) ;
}
else if (balance == deposit)
{
    printf("it's a withdraw!!, you're left with %d \n\n" , balance);
}



printf ("press 0 to play again\n\n press 1 to end the game \n\n :");
int c =0;
scanf("%d" , &c );
if (c == 0)
{
    deposit=1;
}
else if (c==1)
{
    deposit|= 1;
}
else
{
    printf("not available");
}

}
return 0;
}