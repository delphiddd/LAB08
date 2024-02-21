#include <stdio.h>
#include <stdlib.h>
float I[4];
char unit[3];

int main(){
    for (int i = 0;i<4;i++){
        printf("Enter I : ");
        scanf("%f%s",&I[i],unit);
        if(unit[0] == 'A' ){   
            printf("I = %fA\n" , I[i]);
        } else if (unit[0] == 'm' && unit[1] == 'A') {
            I[i] = I[i]/1000;
            printf("I = %fA\n" ,I[i]);
        } else if (unit[0] == 'u' && unit[1] == 'A') {
            I[i] = I[i]/1000000;
            printf("I = %fA\n" ,I[i]);
        } else if (unit[0] == 'n' && unit[1] == 'A') {
            I[i] = I[i]/1000000000;
            printf("I = %fA\n" ,I[i]);
        }
    }
}