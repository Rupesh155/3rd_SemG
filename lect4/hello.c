// #include <stdio.h>

// int main(){

//     int amount;

//     printf("Enter a amount in indian ..");
//     scanf("%d",&amount);

//     char ch;
//     printf("which you want to convert");
//     scanf("%c",&ch);

//     switch (ch)
//     {
//     case '$':
//       printf("%f",(float)amount/87);
//       break;

//     case ''

//     // 0.87 ==1/87

//     default:
//         break;
//     }

// int a=4;
// switch (a)
// {
// case  1:
//     printf("hello");
//     break;
// case 2:
//      printf("hiii");
//      break;

// default:
//     printf("kuch nhi mila");
//     break;
// }

// a<5?printf("hello"):printf("hiii");
// int a=5;

// if(a<5){
//     printf("hello");
//     printf("byee");
// }
// else
//     printf("hiii");

// int a;
// int b;
// char ch;
// printf("Enter your choice");
// scanf("%d %d %c" ,&a,&b,&ch);
// printf("%d %d %c", a,b,ch);
// if(ch=='/'){
//     if(b!=0){
// }else{
//     printf("")
// }
// printf("%d",a/b);
// }
// }

// int a=5;
// int b=0

#include <stdio.h>

int main()
{
    // int a=1;
    int amt,bal=1000,ch;
    printf("\nChoices : ");
    printf("\n1.check balance ");
    printf("\n2.deposit");
   printf("\n3.withdraw");
   printf("\nEnter choice : ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1: printf("\nThe Balance : %d",bal);
            break;
    case 2 : printf("\nEnter amount : ");
            scanf("%d",&amt);
            bal+=amt;
            printf("\nCurrent Balance : %d",bal);
            break;
    case 3 : printf("\nEnter amount: ");
            scanf("%d",&amt);
            if(amt<=bal)
            {
                bal=bal-amt;
                printf("\nWithdrawl successful\n current Balance : %d",bal);

            }
            else
            {
                printf("\nInsufficient Amount !!");
            }
   }

    // int amount;
    // // int b;
    // char s;
    // scanf("%d  %c", &amount, &s);
    // switch (s)
    // {
    // case 'd':
    // printf()
        // if (b != 0)
        //     printf("%f", (float)a / b);
        // else
        //     printf("");

        // break;
    case 'Y':
        printf(amount/12);
        break;

    default:
        printf("hehehe");
        break;
    }
}
