#include <stdio.h>

void  fun (int *p) {//=p ) {
  *p = *p * 2;
  printf("%d", *p);
}

int main(void) {
  int a = 10;
  fun(&a);
  return 0;
}