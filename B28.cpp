//28. X? l� chu?i: Vi?t chuong tr�nh chuy?n d?i t?t c? c�c k� t? ch? c�i trong m?t chu?i th�nh ch? hoa.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

  
    printf("%s", str);

    return 0;
}

