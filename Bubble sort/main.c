#include <stdio.h>
#include <stdlib.h>
///sortarea prin interschimbare(bubble sort)
int main()
{
    int i, v[100], n, j, aux;
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &n);
    printf("Introduceti componentele:\n");
    for(i=1; i<=n; i++)
        scanf("%d", &v[i]);
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++)
            if(v[i]>v[j])
    {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
    }
    printf("Elementele vectorului sortate crescator sunt:\n");
    for(i=1; i<=n; i++)
        printf("%d ", v[i]);
    return 0;
}
