//23. Chu?i d?i x?ng: Ki?m tra xem m?t chu?i ký t? có ph?i là chu?i d?i x?ng (palindrome) hay không.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int trai, phai, ok;
   gets(str);
    int len = strlen(str);
    trai = 0;
    phai = len - 1;
    ok = 1;

    while (trai < phai) {
        if (str[trai] != str[phai]) 
		{
            ok = 0;
            break;
        }
        trai++;
        phai--;
    }

    if (ok) {
        printf("dx");
    } else {
        printf("kdx");
    }

    return 0;
}

