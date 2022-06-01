#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    float b,c;
    printf("enter the amount");
    scanf("%d",&a);
    printf("enter amt to be withdrawn");
    scanf("%f",&b);
    if( a%5==0)
    {
        c=a-b-0.5;
        printf("the left amt is %.2f",c);

    }


    }




