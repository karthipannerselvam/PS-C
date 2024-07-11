#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    gets(arr);
    int h=strlen(arr)-1;
    int l=0;
    while(l<h){
        char temp=arr[l];
        arr[l]=arr[h];
        arr[h]=temp;
        l++;
        h--;
    }
    printf("%s",arr);


}