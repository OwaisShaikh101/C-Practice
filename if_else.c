#include<stdio.h>
int main (){

int a=100;
int b=30;
int c=20;

if(a<b&& a<c){
    printf("a is smallest %d",a);
}
else if(b<c&& b<a){
    printf("b is smallest %d",b);
}
else{
    printf("c is smallest %d",c);
}






    return 0;
}