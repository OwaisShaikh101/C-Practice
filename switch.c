#include<stdio.h>
 int main(){
printf("enter Your number...");
int day=8;
scanf("%d",&day);
 switch (day)
 {
    case 1: printf("Sunday");
    break;

case 2: printf("Monday");
break;
case 3: printf("Tuesday");
break;
case 4: printf("Wednesday");
break;
case 5: printf("Thursady");
break;
case 6: printf("Friday");
break;
case 7: printf("Saturday");
break;
 default: printf("Plz Enter 1-7 Number...");
 break;
 }








    return 0;
 }