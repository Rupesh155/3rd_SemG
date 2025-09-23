// #include <stdio.h>
  

// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             // printf("*");
//             if(i==1 || i==n || j==1 || j==n){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }


// }


#include <stdio.h>

int main() {
    int n = 3;  // 3x3 magic square
    int magic[3][3] = {0};

    int i = 0, j = n / 2;  // start position: first row, middle column

    for (int num = 1; num <= n * n; num++) {
        magic[i][j] = num;  // number place karo

        // next position calculate karo
        int newi = (i - 1 + n) % n;  // upar jao (wrap around)
        int newj = (j + 1) % n;      // right jao (wrap around)

        if (magic[newi][newj] != 0) {
            // agar already filled hai to neeche jao
            i = (i + 1) % n;
        } else {
            i = newi;
            j = newj;
        }
    }

    // print magic square
    printf("Magic Square of size 3:\n");
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            printf("%3d ", magic[r][c]);
        }
        printf("\n");
    }

    return 0;
}


    // for(int i=0;i<4;i++){
    //       for(int j=0;j<=i;j++){
    //         printf("*");
    //     }
       
    //     for(int k=3;k>i;k--){
    //         printf(" ");
    //     }
    //       for(int k=3;k>i;k--){
    //         printf(" ");
    //     }
    //     for(int p=0;p<=i;p++){
    //         printf("*");
    //     }
    //     printf("\n");



    // }


//     for(int i=0;i<4;i++){
//         for(int j=3;j>i;j--){
//             printf("*");
//         }
//         for(int k=0;k<=i;k++){
//             printf(" ");
//         }
//           for(int k=0;k<=i;k++){
//             printf(" ");
//         }
//           for(int j=3;j>i;j--){
//             printf("*");
//         }
//         printf("\n");

//     }

   

// }
    /*int a,b=0,c;
      printf("Enter Number to check:");
      scanf("%d",&a);
      if(a==1){
        printf("Not prime");
      }
      else{}
      for(int i=2; i<a/2;i++)
      {
        if(a%i==0){
            b++;
        }
      }
      if(b!=0){
        printf("number is not prime");
      }
      else{
        printf("number is prime")
      }
       return 0;*/

//        int n;
//        printf("enter number:");
//        scanf("%d",&n);
//        for(int i=2;i<=n;i++){
//         int count=0;
//         for(int j=1;j<=i;j++)
//          if(i%j==0)
//           count++;
//         if(count==2)
//          printf("%d\n",i);
//        }
//        return 0;

// int n=122
// ;
// int b=n;
// for(;n>0;n=n/10)
// { 
//    int  ld= n%10;
//    int num=10*ld;
// }

// (n==b)?printf("is palindrome"):printf("not");

// }

    

    



//     int n=5;
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=n;j++){ 
//             // printf("*");
//             if(i==1 || i==n || j==1|| j==n){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }








// int main(){
//     for(int i =0;i<4;i++){
//         for(int j=0;j<=i;j++){
//             printf("*");
//         }
//         for(int k=3;k>i;k--){
//             printf(" ");
//         }
//          for(int p=3;p>i;p--){
//             printf(" ");
//         }
//         for(int z=0;z<=i;z++){
//             printf("*");
//         }
//         printf("\n");
//     }

//     for(int i=0;i<4;i++){
//         for(int j=3;j>i;j--){
//             printf("*");
//         }
//         for(int k=0;k<=i;k++){
//             printf(" ");
//         }
//          for(int k=0;k<=i;k++){
//             printf(" ");
//         }
//          for(int j=3;j>i;j--){
//             printf("*");
//         }
//         printf("\n");

//     }







