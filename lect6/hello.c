#include <stdio.h>
int main()
{
    int n = 6;
    int i;
    if (n <= 1)
    {
        printf("not prime\n");
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("ye nhi haii\n");
        }
        else
        {

            printf("primee haiiii");
        }
    }

    // int num;
    // scanf("%d",&num);
    //   int original=num;
    // int res=0;
    // while (num!=0)
    // {
    //     int lastDigit=num%10;
    //     res=  res*10+  lastDigit;
    //     num=num/10;

    // }
    // if(original==res){
    //     printf("p");
    // }else{
    //     printf("not");
    // }

    int i , n , fact=1;
    printf("number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial=%d",fact);
}