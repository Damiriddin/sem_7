#include <stdio.h>
#include <malloc.h>

void shellSort(int n, int array[]) {
    int i, j, step;
    int tmp;

    for (step = n / 2; step > 0; step /= 2) {
        for (i = step; i < n; i++) {
            tmp = array[i];
            for (j = i; j >= step; j -= step) {
                if (tmp < array[j - step])
                    array[j] = array[j - step];
                else
                    break;
            }
            array[j] = tmp;
        }
    }
}


int main() {
    int n;
    scanf("%d", &n);

    int* array;
    array = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    shellSort(n, array);

    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
        printf("\n");
    }

    free(array);

    return 0;
}
