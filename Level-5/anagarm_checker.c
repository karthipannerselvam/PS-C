#include<stdio.h>
#include<string.h>
#include<ctype.h>

//getting input, storing only alpphabets in new array in lower, then sorting the array, then checking
int main(){
    char arr[100];
    char arr1[100];
    fgets(arr,100,stdin);
    fgets(arr1,100,stdin);
    char res[100];
    char res1[100];
    int j=0;
    for(int i=0;arr[i];i++){
        if(isalpha(arr[i])){
            res[j++]=tolower(arr[i]);
        }
    }
    j=0;
    for(int i=0;arr1[i];i++){
        if(isalpha(arr1[i])){
            res1[j++]=tolower(arr1[i]);
        }
    }
    res1[j]='\0';
    res[j]='\0';

    int n=strlen(res);
    int m=strlen(res1);
    if(n!=m){
        printf("False");
        return 0;
    }
    char temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(res[i]>res[j]){
                temp=res[i];
                res[i]=res[j];
                res[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(res1[i]>res1[j]){
                temp=res1[i];
                res1[i]=res1[j];
                res1[j]=temp;
            }
        }
    }
   
    int flag=1;
    for(int i=0;i<n;i++){
        if(res[i]!=res1[i]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("True");
    }
    else{
        printf("False");
    }
   

    
}