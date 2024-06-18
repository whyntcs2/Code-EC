#include <stdio.h>

void DTB(int n) {
    if (n > 1)
        DTB(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    scanf("%d", &n);
	if(n>1){
   		DTB(n);
	}
}
