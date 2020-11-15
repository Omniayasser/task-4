#include <stdio.h>
#include <stdlib.h>

    int main()
    {
    int sum=0;
    FILE *p;
    p = fopen("sum.txt", "w+");
    int arr[6];
    while (!feof(p))
    {
        int i;
        fscanf(p, "%d", &arr[i] );
        i++;
    }
    for (int i = 0; i < 2; i++)
    {
    sum=sum+(arr[i]);
    }
    fprintf(p ,"\n sum is: %d" , sum);
    fclose(p);
    return 0;

    }


