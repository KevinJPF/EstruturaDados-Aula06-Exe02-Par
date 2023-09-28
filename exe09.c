#include <stdio.h>

int Par(int n) {
  if (n == 1) {
    printf("1 = impar.\n", n);
    return 0;
  }

  if (Par(n - 1) == 1) {
    printf("%d = impar.\n", n);
    return 0;
  } else {
    printf("%d = par.\n", n);
    return 1;
  }
}

int main(void) {
  int n;
  printf("Valor a ser calculado: ");
  scanf("%d", &n);
  if (Par(n) == 0)
    printf("\nO numero %d e impar.", n);
  else
    printf("\nO numero %d e par.", n);
  return 0;
}