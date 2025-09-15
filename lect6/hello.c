// #include <stdio.h>
// int main()
// {
//     // int n = 6;
//     // int i;
//     // if (n <= 1)
//     // {
//     //     printf("not prime\n");
//     // }
//     // for (i = 2; i < n; i++)
//     // {
//     //     if (n % i == 0)
//     //     {
//     //         printf("ye nhi haii\n");
//     //     }
//     //     else
//     //     {

//     //         printf("primee haiiii");
//     //     }
//     // }

//     // int num;
//     // scanf("%d",&num);
//     //   int original=num;
//     // int res=0;
//     // while (num!=0)
//     // {
//     //     int lastDigit=num%10;
//     //     res=  res*10+  lastDigit;
//     //     num=num/10;

//     // }
//     // if(original==res){
//     //     printf("p");
//     // }else{
//     //     printf("not");
//     // }

//     // int i , n , fact=1;
//     // printf("number:");
//     // scanf("%d",&n);
//     // for (i=1;i<=n;i++)
    
//     // {
//     //     fact=fact*i;
//     // }
//     // printf("Factorial=%d",fact);


//     // int num=121;
//     // int original=num;
//     // int res=0;
//     // while (num!=0)
//     // {
//     //    int lastD=   num%10;
//     //    res=  res*10+  lastD;
//     //   num=   num/10;
        
//     // }
//     // if(original==res){
//     //     printf("palindronnnnnnn");
//     // }else{
//     //     printf("not ");
//     // }




// for (int i = 1; i <= 5; i++) {
//     if (i == 3) break;;   // i = 3 pe skip
//     printf("%d ", i);
// }
// for (int i = 1; i <= 5; i++) {
//     if (i == 3) continue;;;   // i = 3 pe skip
//     printf("%d ", i);
// }

    
// }


#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int candidate = n + 1;   // input ke baad ka number se start

    while (1) {
        int isPrime = 1;    // assume prime

        for (int i = 2; i * i <= candidate; i++) {
            if (candidate % i == 0) {
                isPrime = 0;   // factor mil gaya
                break;
            }
        }

        if (isPrime) {
            printf("Next prime after %d is %d\n", n, candidate);
            break;   // prime mil gaya → loop khatam
        }

        candidate++;   // warna next number check karo
    }

    return 0;
}
