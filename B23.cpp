
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int tr, ph, oke;
   gets(str);
    int lenz = strlen(str);
    tr = 0;
    ph = lenz - 1;
    oke = 1;
    while (tr < ph) {
        if (str[tr] != str[ph]) 
		{
            oke = 0;
            break;
        }
        tr++;
        ph--;
    }
    if (oke) {
        printf("dx");
    } else {
        printf("kdx");
    }
}

