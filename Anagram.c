#include<stdio.h>
int main(){
    char str[1000];
    char str1[1000];
    fgets(str,1000,stdin);
    fgets(str1,1000,stdin);
    int a=0,b=0;
    int temp;
    while(str[a]!='\0'){
        a++;
    }
    a--;
    while(str1[b]!='\0'){
        b++;
    }
    b--;
    printf("%d %d\n",a,b);


if(a!=b){
    printf("not a anagram\n");
    return 0;
}
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        if(str[i]>str[j]){
            temp=str[j];
            str[j]=str[i];
            str[i]=temp;
        }
    }
}
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        if(str1[i]>str1[j]){
            temp=str1[j];
            str1[j]=str1[i];
            str1[i]=temp;
        }
    }
}
for(int i=0;i<a;i++){
    if(str[i]!=str1[i]){
        printf("Not the anagram\n");
        return 0;
    }
}
printf("anagram\n");
printf("%s %s",str,str1);
}
