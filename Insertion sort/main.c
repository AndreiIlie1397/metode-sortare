#include <stdio.h>
#include <stdlib.h>
///insertion sort
int main()
{
    int i, v[100], n, j, aux;
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &n);
    printf("Introduceti componentele:\n");
    for(i=1; i<=n; i++)
        scanf("%d", &v[i]);
        for(i=1; i<=n; i++)
        {
            j=i;
            while(j>0 && v[j-1]>v[j])
            {
                aux=v[j];
                v[j]=v[j-1];
                v[j-1]=aux;
                j--;
            }
        }
        printf("Elementele vectorului sortate crescator sunt:\n");
    for(i=1; i<=n; i++)
        printf("%d ", v[i]);
    return 0;
}
