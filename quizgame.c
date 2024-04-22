#include<stdio.h>

int main()
{
    int i = 7 ;
    int ans1,ans2,ans3,ans4,ans5 ;
    int point1 = 0 ,point2 = 0 ,point3 = 0 ;

    printf(" Welcom Player 0 to the Game \n\n ");

    printf("press '7' to start the game " );
    printf("press 0 to exit the game");

    scanf( "%d" , &i );

    if(i==7)
    {
        printf("the gane has started \n");
    }
    else if ( i == 0 )
    {
        printf("the game has ended");
    }
    else
    {
        printf ("error");
    }

    if(i==7)
    {   printf(" how many hearts does an octupus have ? \n");
        printf("a) 3 \n b) 2 \n c) 5\n ");
        printf("enter your answer : ");
        scanf("%d" , & ans1);

        if(ans1 == 3 )
        {
            printf("correct!!\n\n you've scored 5 points \n ");
            point1 = 5 ;
        }
        else {
            printf("False answer \n"  " you've scored 0 points \n" " Correct answer is :3 \n");
            point1 = 0 ;
        }

        printf("how fast can an octupus swim ? \n ");
        printf("a) 15 km/h \n b) 35 km/h \n c) 40 km/h \n");
        printf("enter your answer :  ");
        scanf("%d" , & ans2);
        if (ans2 == 40 )
        {
            printf(" Correct!!\n\n you've scored 5 points \n");
            point2 = 5 ;
        }
        else{
            printf("False answer \n you've scored 0 points \n correct answer is 40 km/h\n");
            point2 = 0;
        }
        printf("how many arms does an octupus has ? \n ");
        printf("a) 12\n b) 6\n c) 8\n");
        printf("enter your answer : ");
        scanf("%d" , & ans3);

        if(ans3 == 8 )
        {
            printf("Correct!!\n\n you've scored 5 points\n");
            point3 = 5;
        }
        else{
            printf("False answer \n you've scored 0 points\n correct answer is 8 arms\n ");
            point3 = 0;
        }








    }




printf (" your total score is :%d/15\n ",  point1 + point2 + point3 );
return 0 ;
}
