#include<stdio.h>
int main()
{
    char *months[] ={"january","February","March","April","May","June","July","August","September","Octobor","November","December"};
    int Days_In_Month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int i,j,Total_Days,Week_Day=0;

    for(i=0;i<=12;i++){
        printf("\n------------------------%s------------------------\n\n",months[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat");

        Total_Days=Days_In_Month[i];

        for(j=1;j<=Total_Days;j++){
            printf("%5d",j); 
            Week_Day++;
            if(Week_Day > 6){
                Week_Day=0;
                printf("\n");
            }
        }
    }
    
    
    return 0;
}