#include <stdio.h>

int main(void) {
    char cha[100];
    int i;
    printf("Enter a string.");
    scanf("%s", cha);
    for (i = 0; cha[i] != '\0'; i++) {};
    printf("%d", i + 1);

    return 0;
}
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] == '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    return ret_val;  
}
