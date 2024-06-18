#include<stdio.h>
#include<math.h>

int THCK(int n, int k) {
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

void Pascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", THCK(i, j));
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Pascal(n);
    return 0;
}
