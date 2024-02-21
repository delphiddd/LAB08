#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <complex.h>

float complex Trans(){
    char text[20];
    float a, b;
    gets(text);
    a = atof(text);
    text[0] = ' ';
    char *a_plus = strstr(text, "+");
    char *a_minus = strstr(text, "-");
    if (a_plus != NULL){
        a_plus[0] = ' ';
        b = atof(a_plus);
    } else if (a_minus != NULL) {
        a_minus[0] = ' ';
        b = atof(a_minus);
        b = b * -1;
    }
    float complex result = a + b * I;
    return result;
}
main(){
    float complex z1 , z2 , z3 , zeq;
    printf("Enter z1:");
    z1 = Trans();
    printf("Enter z2:");
    z2 = Trans();
    printf("Enter z3:");
    z3 = Trans();
    zeq = z1 + ( (z2 * z3 ) / (z2 + z3 ));
    printf("zeq = %.3f%+.3fi\n", creal(zeq) , cimag(zeq));
}