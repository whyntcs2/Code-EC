#include<stdio.h>
#include<math.h>

void merge(int a1[], int n, int a2[], int m, int c[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a1[i] < a2[j]) {
            c[k++] = a1[i++];
        } else {
            c[k++] = a2[j++];
        }
    }
    while (i < n) {
        c[k++] = a1[i++];
    }
    while (j < m) {
        c[k++] = a2[j++];
    }
}

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	int a1[n], a2[m];
	for(int i =0; i<n; i++){
		scanf("%d", &a1[i]);
	}
	for(int i=0; i<m; i++){
		scanf("%d", &a2[i]);
	}
	int c[n+m];
	merge(a1,n,a2,m,c);
	for(int i=0; i<n+m; i++){
		printf("%d ", c[i]);
	}
}
