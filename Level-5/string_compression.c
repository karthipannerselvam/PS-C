#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    gets(arr);
    int cnt=1;
    char cur=arr[0];
    for(int i=1;i<strlen(arr);i++){
        
        if (arr[i] == cur) {
            cnt++;
        } else {
            if (cnt == 1) {
                printf("%c", cur);
            } else {
                printf("%c%d", cur, cnt);
            }
            cur = arr[i];
            cnt = 1;
        }

    }
    if(cnt==1){
        printf("%c",cur);
    }
    else{
    printf("%c%d",cur,cnt);}
    
}