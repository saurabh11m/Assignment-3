#include <stdio.h>
#include <time.h>

void display(long long int *a, long long int s)
{
    for (long long int j = 0; j < s; j++)
    {
        printf("%lld ", a[j]);
    }
}
void Insertion_sort()
{
    long long int size;
    printf("Enter size of array: ");
    scanf("%lld", &size);
    long long int arr[size];
    printf("Enter elsements of array: \n");
    for (long long int i = 0; i < size; i++)
    {
        scanf("%lld", arr + i);
    }
    printf("\nArray before sorting: \n");
    display(arr, size);
    long long int h = 1;
    while (h != size)
    {
        long long int  move = arr[h];
        long long int j = h-1;
        while(arr[j]>move && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=move;
        h++;
    }
    printf("\nArray after sorting: \n");
    display(arr, size);
}

int main()
{
    clock_t start, end;
    long int t;
    start = clock();

    Insertion_sort();

    end = clock();
    t = end - start;
    printf("\nTotal elapsed time: %f ", (double)t / (double)CLOCKS_PER_SEC);

    return 0;
}