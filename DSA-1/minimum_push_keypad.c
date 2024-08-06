#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(int arr[]){
    for(int i=0;i<26;i++){
        for(int j=i+1;j<=26;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    char str[100];
    scanf("%s",str);
    int arr[26]={0};
    int n=strlen(str);
    for(int i=0;i<n;i++){
        arr[str[i]-'a']++;
    }
    sort(arr);

    int cnt=0,ans=0;
    for(int i=0;arr[i]!=0;i++){
        cnt++;
        if(cnt<=8){
            ans+=arr[i]*1;
        }
        else if(cnt<=16){
            ans+=arr[i]*2;
        }
        else if(cnt<=24){
            ans+=arr[i]*3;
        }
        else{
            ans+=arr[i]*4;
        }
    }
    printf("%d",ans);
}