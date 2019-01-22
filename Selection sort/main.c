#include <stdio.h>
#include <stdlib.h>
///selection sort
int main()
{
    int i, v[100], n, j, aux, min, poz;
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &n);
    printf("Introduceti componentele:\n");
    for(i=1; i<=n; i++)
        scanf("%d", &v[i]);
    for(i=1; i<n; i++)
    {
        poz=i;
        min=v[i];
        for(j=i+1; j<=n; j++)
        {
            if(min<v[j])
            {
                poz=j;
                min=v[j];
            }
        }
        aux=v[i];
        v[i]=v[poz];
        v[poz]=aux;
    }
    printf("Elementele vectorului sortate descrescator sunt:\n");
    for(i=1; i<=n; i++)
        printf("%d ", v[i]);
    return 0;
}
