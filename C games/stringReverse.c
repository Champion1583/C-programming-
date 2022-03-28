#include <stdio.h>
#include <string.h>
int reverse(char *p, int n)
{
    if (n < 0)
    {
        return 0;
    }
    else
    {
        printf("%c", p[n]);
        return reverse(p, n - 1);
    }
}
int main()
{
    char word[100], *p = word;
    printf("Please enter the string you want to reverse - ");
    scanf("%[^\n]%*c", word);
    reverse(p, strlen(word) - 1);
    return 0;
}