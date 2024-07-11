#include<stdio.h>
#include <string.h>
#include<ctype.h>
void tolowerarr(char arr[]){
    for(int i=0;arr[i];i++){
        arr[i]=tolower(arr[i]);
    }
}
void toRemoveSpace(char arr[], int *h) {
    for(int i = 0; i < *h; i++) {  
        if(arr[i] == ' ') {  
            for(int j = i; j < *h; j++) {  
                arr[j] = arr[j + 1];  
            }  
            (*h)--;  
            i--; 
        }  
    }  
}
int main(){
    char arr[100];
    fgets(arr,100,stdin);
    int h=strlen(arr)-2;
    
    int l=0;
    int flag=1;
    tolowerarr(arr);
    toRemoveSpace(arr,&h);
    while(l<h){
        if(arr[l]!=arr[h]){
            flag=0;
            break;
        }
        l++;
        h--;
    }
    if(flag){
        printf("True");
    }
    else{
        printf("False");
    }
    
}