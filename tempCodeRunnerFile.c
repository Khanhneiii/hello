#include<stdio.h>

int a[10] = { 1, 5, 4, 8, 2, 9, 8, 6, 3, 9 };
int n = 10;
void sapxep(int a[], int n)
{
 int i, j;
 for (i = 0; i < n - 1;i++)
 for (j = i + 1; j < n;j++)
 if ((a[i] % 2 != 0 && a[j] % 2 == 0) 
  || (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i]>a[j]) 
  || (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i]>a[j]))
 {
  int t = a[i];
  a[i] = a[j];
  a[j] = t;
 }
}
void xuatmang(int a[], int n)
{
 for (int i = 0; i < n; i++) printf(" %d ", a[i]);
}
int main()
{
 sapxep(a, n);
 xuatmang(a, n);
 printf("\n");
}