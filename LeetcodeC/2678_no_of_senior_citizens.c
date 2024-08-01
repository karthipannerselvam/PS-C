int countSeniors(char ** details, int detailsSize){
char str[2];
int pos=11;
int len=2;
int sum=0;

for(int i=0;i<detailsSize;i++){
    char str[len+1];
    strncpy(str,&details[i][pos],len);
    str[len]='\0';
    int age=atoi(str);
    if(age>60){
        sum++;
    }
}
return sum;
}