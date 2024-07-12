#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    gets(arr);
    char ans='0';
    int cnt=1;
    for(int i=0;i<strlen(arr);i++){
        cnt=1;
        for(int j=0;j<strlen(arr);j++){
            if(i!=j && arr[i]==arr[j]){
                cnt=0;
                break;
            }
        }
        if(cnt==1){
            ans=arr[i];
        }
    }
    printf("%c",ans);
}