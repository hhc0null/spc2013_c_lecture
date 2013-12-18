#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = NULL;
    int len = 0;

    str = (char *)malloc(sizeof(char) * ++len);
    for(int i = 0; (str[i] = (char)getc(stdin)) != EOF;i++) {
        str = (char *)realloc(str, sizeof(char) * ++len);
    }
    str[len-1] = '\0';

    printf("%x\n\n", EOF);
    printf("%s", str);
    /*
    for(int i = 0; i < len; i++) {
        putchar(str[i]);
    }
    */

    free(str);

    return 0;
}
