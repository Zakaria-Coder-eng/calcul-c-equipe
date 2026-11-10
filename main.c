
#include <stdio.h>
float moyenne(int a, int b)
{
    return ((float)(a + b) / 2);
}
int produit(int a, int b)
{
  return a * b;
}
int main(void)
{
	printf("Produit de 3 et 4 : %d\n", produit(3, 4));
	return 0;
}
