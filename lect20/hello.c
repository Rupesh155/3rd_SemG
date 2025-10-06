

// #include <stdio.h>

// int main() {
//     char name[] = "hiii";   // '\0' automatically add hota hai
//     printf("Name: %c", name[0]);
//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "madam"; // 'h','i','i','\0'
    int ln=   strlen(name);
    int isTrue=1;
    for(int i=0;i<ln/2;i++){
        if(name[i]!=name[ln-i-1]){
            isTrue=0;
            break;
        }
    }
    if(isTrue==1){
        

    }








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

  

    return 0;
}


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





