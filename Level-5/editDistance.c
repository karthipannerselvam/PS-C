#include<stdio.h>
#include<string.h>
int min(int a,int b,int c){
    return a<b?(a<c?a:c):(b<c?b:c);
}
int check(char str1[100],char str2[100],int n,int m){
    int dp[n+1][m+1];
    for(int i=0;i<n;i++){
        dp[i][0]=i;
    }
    for(int i=0;i<n;i++){
        dp[0][i]=i;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j]=dp[i-1][j-1];

            }
            else{
                dp[i][j]=1+min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
            }
        }
    }
    return dp[n][m];
}
int main(){
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int n=strlen(str1);
    int m=strlen(str2);

    printf("%d",check(str1,str2,n,m));
}