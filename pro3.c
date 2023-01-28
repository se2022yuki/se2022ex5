#include <stdio.h>
#include <string.h>

int main(void){
    size_t len;
    char str[] = "hello";

    len = strlen(str);
    printf("%s,%d", str, len);
    return 0;
}
