#include <stdio.h>
#include <string.h>
int palindrome(char *a)
{
    int flag = 1, length = strlen(a);
    for(int i = 0 ; i < length ; i++) {
        if(a[i] != a[length-i-1]){
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    char string[50];
    int res;
    printf("Enter a string to check for palindrome - ");
    scanf("%50s", &string);
    res = palindrome(string);
    if(!res) printf("%s is not a palindrome.");
    if(res) printf("%s is a palindrome");
}