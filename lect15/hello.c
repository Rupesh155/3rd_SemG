// // [10,20,30,40,50]=> [20,30,40,50,10]
// #include <stdio.h>
// #include <limits.h>

// int main(){
//     int arr[6]={0,5,-5,3,-4,-5,-7};
//     int maxSum=INT_MIN;

//     for(int i=0;i<6;i++){
//             int currSum=0;
//         for(int j=i;j<6;j++){
//             currSum=currSum+arr[j];
//              if(currSum>maxSum){
//             maxSum=currSum;
//         }
//         }
       
//     }
//     printf("%d",maxSum);
// }









// int arr[5]={1,2,3,2,2};
// int isTrue=1;
// for(int i=0;i<5/2;i++){
//     if(arr[i]!=arr[5-i-1]){
//         isTrue=0;
//     }
// }
// if(isTrue==1){
//     printf("haiii");
// }else{
//     printf("nhi haiiii");   

    // int arr[5]={10,20,30,40,50};
    // int first=arr[0];
    // for(int i =0;i<5;i++){
    //     arr[i]=arr[i+1];
    // }
    // arr[4]=first;


    // for(int k=0;k<5;k++){
    //     printf("%d",arr[k]);

    // }





#include <stdio.h>
#include<limits.h>
    
   int    BSearch(){
      int arr[6]={1,2,3,4,5,6};
    int target=11;
    int s=0;
    int end=5;
    while(s<=end)
    {
        int mid=(s+end)/2;
        if(arr[mid]==target){
            return mid;
            // printf("%d",mid);
        }
        else if(arr[mid]<target){
            s=mid+1;

        }else
        {   end=mid-1;
           
        }
        

    }
    return -1;
    


   }
int main(){

  int data=    BSearch();
  printf("%d",data);
  















    // int arr[5]={-1,-2,-3,-4,-5};
    // int maxsum=INT_MIN,currsum=0;
    // for(int i=0;i<5;i++)
    // {
            
    //         currsum=currsum+arr[i];
    //         if(maxsum<currsum)
    //         {
    //             maxsum=currsum;
    //         }
    //         if(currsum<0)
    //         {
    //             currsum=0;
    //         }
            

    // }
    // printf("Max = %d",maxsum);


    // int arr[5]={-8,2,-3,4,9};
    // int maxSum=0;
    // int currSum=0;
    // for(int i=0;i<5;i++){
    //     currSum+=arr[i];
    //     if(currSum>maxSum){
    //         maxSum=currSum;
    //     }
    //     if(currSum<0){
    //         currSum=0;
    //     }
    // }



    // for(int i=0;i<5;i++){
    //     int curSum=0;
    //     for(int j=i;j<5;j++){
    //         curSum= curSum+arr[j];
    //         if(curSum>maxSum){
    //             maxSum=curSum;
    //         }
    //     }
    // }
    // printf("%d",maxSum);
}
// int a[3]={1,2,3}
// int b[3]={4,5,6}
// int c[6]=[1,2,3,4,5,6]

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j>5;j--)
//     {
//         cout<<"*";
//     }
//     return 0;
// }