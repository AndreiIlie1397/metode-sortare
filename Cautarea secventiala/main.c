#include <stdio.h>
#include <stdlib.h>
///cautarea secventiala
int main()
{
    int n, v[100], i, gasit=0, x, poz=0;
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &n);
    printf("Introduceti numarul pe care doriti sa il cautati in vector: ");
    scanf("%d", &x);
    printf("Introduceti componentele:\n");
    for(i=1; i<=n; i++)
        scanf("%d", &v[i]);
    for(i=1; i<=n; i++)
        if(x==v[i])
        {
            gasit=1;
            poz=i;
        }
    if (gasit!=0)
        printf("Elementul %d se afla in vector pe pozitia %d", x, poz);
    else
        printf("Elementul %d nu se afla in vector", x);
    return 0;
}
