//How to merge two arrays?
#include<stdio.h>
int main(){
        int n1,n2,sum;
        printf("enter the number of elements in 1st array: ");
        scanf("%d",&n1);
        printf("enter the number of elements in 2nd array: ");
        scanf("%d",&n2);
        sum = n1+n2;
        int arr1[n1],arr2[n2],merge[sum];
        printf("enter the %d elements of the array1: ",n1);
        for(int i=0;i<n1;i++){
            scanf("%d",&arr1[i]);
        }
        printf("enter the %d elements of the array2: ",n2);
        for(int i=0;i<n2;i++){
            scanf("%d",&arr2[i]);
        }
        for(int i=0;i<n1;i++){
            if(i<=n1){
                merge[i]=arr1[i];
            }
        }
        for(int i=0;i<n1;i++){

                merge[i+n1]=arr2[i];
        }
        printf("Merged array after array 1 and array 2: ");
        for(int i=0;i<sum;i++){
            printf("%d ",merge[i]);
        }
}
