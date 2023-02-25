#include<stdio.h>
 long int fact(int n){
   
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return n*fact(n-1);

}

void main(){
    int num;
    long int f;
    printf("enter the number whose factorial to found out");
    scanf("%d",&num);
    f=fact(num);
    printf("%d",f,"is the factorial");
    
}