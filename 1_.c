
#include <stdio.h>
#include<string.h>
int main()
{
   char c[100]="CSE Rocks";
   int hash = 7;
for (int i = 0; i < strlen(c); i++) {
    hash = hash*31 + c[i]-48;
}
  printf("%d",hash);
    return 0;
}
