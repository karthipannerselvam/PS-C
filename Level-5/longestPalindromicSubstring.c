// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
char check(char str1[]){
    int h=strlen(str1)-1;
    int l=0;
    
    while(l<h){
        if(str1[l]!=str1[h]){
            return 0;
        }
        l++;
        h--;
    }
    return 1;
    
}
int send(int i,int j, char str[],int *maxlen,char max[]){
    int n=j-i+1;
    char str1[n+1];
    int m;
    for(int k=0;k<n;k++){
        str1[k]=str[i+k];
    }
    str1[n]='\0';
    
    int ans=check(str1);
    
    
    if(ans){
        int len=strlen(str1);
        if(*maxlen<len){
            *maxlen=len;
            strcpy(max, str1);
            
        }
    }
  
}
int main() {
    // Write C code here
    char str[100];
    scanf("%s",str);
    int maxlen=0;
    char max[100];
    for(int i=0;i<strlen(str);i++){
        for(int j=i+1;j<strlen(str);j++){
            send(i,j,str,&maxlen,max);
        }
    }
    printf("%s",max);

    return 0;
}