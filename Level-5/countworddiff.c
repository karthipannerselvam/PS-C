#include<stdio.h>
#include<string.h>
int count(char str1[],char str2[],int len1,int len2){
    int cnt=0;
    int max=0;
    if(len1>len2) max=len1;
    else max=len2;
    int flag[len2];
    for(int i=0;i<len2;i++){
        flag[i]=0;
    }
    for(int i=0;i<len1;i++){
        if(flag[i]==0){
            for(int j=0;j<len2;j++){
                if(str1[i]==str2[j]){
                    flag[j]=1;
                    cnt++;
                    break;
                }
            }
        }
    }
    return max-cnt;
}
int main(){
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    printf("%d",count(str1,str2,len1,len2));
}