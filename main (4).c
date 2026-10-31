#include <stdio.h>

int min_max(const int a[], int n, int *lo, int *hi) {
    if (n <= 0) return 0;
    int min_val = a[0];
    int max_val = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min_val) min_val = a[i];
        if (a[i] > max_val) max_val = a[i];
    }
    *lo = min_val;
    *hi = max_val;
    return 1;
}

int main(void) {
    int a[] = {4, -2, 7};
    int n;
    int lo = 99, hi = 99;
    if (scanf("%d", &n) != 1 || n > 3) return 1;
    if (min_max(a, n, &lo, &hi))
        printf("Success; lo=%d; hi=%d\n", lo, hi);
    else
        printf("Fail; lo=%d; hi=%d\n", lo, hi);
    return 0;
}
