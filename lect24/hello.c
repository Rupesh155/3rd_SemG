#include <stdio.h>
#include <string.h>
  
struct Addressss
{
    int pinCode;
};

struct Student {
    char name[50];
    int RollNo;
    int age;
    struct Addressss s2; 
    {
        /* data */
    };
    
};

int main() {
    struct Student s1; 
    
    s1.age = 15;
    s1.s2.pinCode=482001

     strcpy(s1.name,"hello");

    // printf("Enter name: ");
    // scanf("%s", s1.name);  

    printf("Age: %d\n", s1.age);
    printf("Name: %s\n", s1.name); 

    return 0;
}






    




