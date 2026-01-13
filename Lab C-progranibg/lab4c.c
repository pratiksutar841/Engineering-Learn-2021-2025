#include <stdio.h>
#include <stdlib.h>
void tower(int n, char s, char T, char D)
{
          if (n == 1)
          {
               printf("\nMove disk 1 from  rod %c to rod %c\n", s, T);
               return;
          }
          tower(n - 1, s, T, D);
          printf("\nMove disk %d from rod %c to rod %c", n, s, T);
          tower(n - 1, D, T, s);
}
int main()
{
          int n;
          printf("Enter no.of disk = ");
          scanf("%d", &n);
          tower(n, 'A', 'B', 'c');
          return 0;
}