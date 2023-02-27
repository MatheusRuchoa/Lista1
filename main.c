#include <stdio.h>

int expressao_1(float x) {
  x = 7 + 3 * 6 / 2 - 1; // ordem dos operadores nessa expressão (*, /, +, -)
  return x;
}
int expressao_2(float x) {
  x = 2 % 2 + 2 * 2 -
      2 / 2; // ordem dos operadores nessa expressão (%, *, /, +, -)
  return x;
}
int expressao_3(float x) {
  x = (3 * 9 *
       (3 +
        (9 * 3 / (3)))); // ordem dos operadores nessa expressão ((), *, /, +)
  return x;
}
int main() {
  float x;
  x = expressao_1(x);
  printf("Resultado da primeira expressão= %.2f\n", x);
  x = expressao_2(x);
  printf("Resultado da segunda expressão= %.2f\n", x);
  x = expressao_3(x);
  printf("Resultado da terceira expressão= %.2f\n", x);
  return 0;
}