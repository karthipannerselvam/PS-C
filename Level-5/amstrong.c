#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int cnt=0;
    int n=a,m=a;
    while(n){
        cnt++;
        n=n/10;
    }
    int sum=0;
    while(a){
        int rem=a%10;
        int p=1;
        for(int i=0;i<cnt;i++){
            p*=rem;
        }
        sum+=p;
        a/=10;
    }
    printf("\n%d\n",sum);
    if(sum==m){
        printf("Yes");
    }
    else{
        printf("No");
    }

}