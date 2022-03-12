#include <stdio.h>
struct car
{
    char*engine; 
} c1, c2;

int main () {
    c1.engine = "DDL 12 ENgine";
    c2.engine = "LKM Engine";
    printf("%s\n", c1.engine);  
    printf("%s", c2.engine);   
    return 0;
}