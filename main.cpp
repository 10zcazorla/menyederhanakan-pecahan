#include <stdio.h>

int pecahan();

int pecahan()
{
  int a, b, l, t;
  printf("Masukkan Pembilang : ");
  scanf("%d", &a);
  printf("Masukkan Penyebut : ");
  scanf("%d", &b);
  t = a/b;
  l = a%b;
  if (a%b == 0)
        printf("Bilangan (%d/%d) \ndi sederhanakan menjadi %d", a, b, t);
    else if (a%b != 0)
        printf("Bilangan (%d/%d) \ndi sederhanakan menjadu (%d %d/%d)", a, b, t, l, b);
}
int main ()
{
    pecahan();
}
