/*Fascinating Number
Given a number N. Your task is to check whether it is fascinating or not.
Fascinating Number: When a number(should contain 3 digits or more) is multiplied by 2 and 3, and when both these products are concatenated with the original number, then it results in all digits from 1 to 9 present exactly once.

Example 1:

Input: 
N = 192
Output: Fascinating
Explanation: After multiplication with 2
and 3, and concatenating with original
number, number will become 192384576 
which contains all digits from 1 to 9.*/
#include<stdio.h>
int main(){
    int num;
    int cpy[]={1,2,3,4,5,6,7,8,9};
    scanf("%d",&num);
    int p2=num*2;
    int p3 = num*3;
    int arr[100];
    int i=0;
    while(num!=0){
        arr[i]=num%10;
        i++;
        num/=10;
    }
    while(p2!=0){
        arr[i]=p2%10;
        i++;
        p2/=10;
    }
    while(p3!=0){
        arr[i]=p3%10;
        i++;
        p3/=10;
    }
int temp;
for(int j=0;j<i;j++){
        for(int k=0;k<i;k++){
            if(arr[j]<arr[k]){
                temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
            }
        }
}
for(int j=0;j<i;j++){
    if(arr[j]!=cpy[j]){
        printf("not an fascinating number");
        return 0;
    }
}
   printf("fascinating number");
}
