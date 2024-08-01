#include<stdbool.h>
bool checkRecord(char* s) {
    int n=strlen(s);
    int a=0,p=0,l=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') a++;
    }
    if(a>=2) return false;
    for(int i=0;i<n-2;i++){
        if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
            return false;
        }
    }
    return true;
}
int main(){
    char s[100]="PPLAAA";
    
}