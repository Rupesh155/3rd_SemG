

// #include <stdio.h>

// int main() {
//     char name[] = "hiii";   // '\0' automatically add hota hai
//     printf("Name: %c", name[0]);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char name[] = "madam"; // 'h','i','i','\0'
//     int ln=   strlen(name);
//     int isTrue=1;
//     for(int i=0;i<ln/2;i++){
//         if(name[i]!=name[ln-i-1]){
//             isTrue=0;
//             break;
//         }
//     }
//     if(isTrue==1){

//     }

// char data[10];

// for(int i=0;name[i]!='\0';i++){
//     // printf("%c",name[i]);
//     data[i]=name[i];
// }
// printf("%s",data);//     int i = 0;
//  int ln=    strlen(name);
//  printf("%d",ln);

// while(name[i] != '\0') {
//     printf("%c\n", name[i]);
//     i++;
// }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char name[50];\0
//     printf("Enter your name: ");
//     scanf("%s", name);  // space tak hi input leta hai
//     printf("You entered: %s\n", name);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char name[50];
//     printf("Enter your full name: ");
//     gets(name);   // pure line le lega, space ke sath
//     printf("You entered: %s\n", name);
//     return 0;
// }
// String

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "hello";
//     int freq[100]={0};
//       int ln=strlen(str);
//     for(int i=0;i<ln;i++){
//         freq[str[i]]++;
//     }
//     for(int i=0;str[i]!='\0';i++){
//         if(freq[i]>0){
//             printf("%c: %d\n",i ,freq[i]);
//         }
//     }
    // int vCount=0;
    // int cCount=0;
  
    // for(int i=0;i<ln;i++){
    //     char ch=str[i];
    //     if(ch=='a' || ch=='i' || ch=='o' || ch=='e' ||ch=='u'){
    //         vCount++;
    //     }else{
    //         cCount;
    //     }
    // }
  
    // int count;
    // for (int i = 0; i < ln; i++)
    // {count = 0;
    //     for (int j = 0; j < i; j++)
    //     {  if (str[i] == str[j]) {
    //             count++;
    //             break;  }
    //     }
    //     if (count == 0)
    //     {
    //         printf("%c", str[i]);
    //     }
    // }
//     return 0;
// }


// int isTrue=1;
// for(int i=0;i<ln/2;i++){
//     if(str[i]!=str[ln-i-1]){
//         isTrue=0;
//         break;
//     }

// }
// if(isTrue==1){

// }

//     char newStr[10];
//    int ln=    strlen(str);
//     for(int i=0;str[i]!='\0';i++){
//         newStr[i]=str[i];
//         // printf("%c\n",str[i]);
//     }
//     printf("%s",newStr);

// #include <stdio.h>
// #include <string.h>
// int main(){
// char str[]="hello";
//  int count;
// int ln=    strlen(str);
// for(int i=0;i<ln-1;i++){
//        count=0;
//     for(int j=0;j<ln;j++){
    
//         if(  str[i]==str[j]){
//             count++;
//         }
//     }
//     if(count==0){
//         printf("%c",str[i]);
//     }
// }


// "hello"


// }



#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abc";
    int freq[256] = {0};   
    int ln = strlen(str);

    for (int i = 0; i < ln; i++) {
        freq[str[i]]++; 
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}




