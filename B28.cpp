//28. X? lý chu?i: Vi?t chuong trình chuy?n d?i t?t c? các ký t? ch? cái trong m?t chu?i thành ch? hoa.
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

