#include <stdio.h>
#include <stdlib.h>
///cautarea binara
int main()
{
   int v[100], i, n, st, dr, x, mij, j=0;
   printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &n);
    printf("Elementul pe care doriti sa il cautati este: ");
    scanf("%d", &x);
    printf("Introduceti componentele:\n");
    for(i=1; i<=n; i++)
       scanf("%d", &v[i]);
       st=1;
       dr=n;
     do
       {
          mij=(st+dr)/2;
          if(x==v[mij])
            {
                printf("Elementul %d se afla pe pozitia %d", x, mij);
                j=1;
            break;
            }
            if(x<v[mij])
        dr=mij-1;
        if(x>v[mij])
        st=mij+1;
       }while((st<=dr) || (x==v[mij]));
        if(j==0)
        printf("Elementul %d nu se afla in vector", x);
    return 0;
}
