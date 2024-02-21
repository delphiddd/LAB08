#include <stdio.h>
#include <math.h>
#include <complex.h>
float R,L,C,f;
int main(){
  printf("Enter R: ");
  scanf("%f",&R);
  printf("Enter L: ");
  scanf("%f",&L);
  printf("Enter C: ");
  scanf("%f",&C);
  printf("Enter f: ");
  scanf("%f",&f);
  float complex ZR = R;
  float omega = 2 * M_PI * f;
  float complex ZL = omega * L *I;
  float complex ZC = 1.0/(omega * C * I);
  float complex Zeq = ZR + ZL + ZC;
  printf("%.3f%+.3fi\n" ,creal((Zeq)) , cimag(Zeq));
}