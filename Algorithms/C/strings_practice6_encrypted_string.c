// Write a program to encrypt a string by adding 1 to the ascii value of its characters.
#include <stdio.h>
void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char c[] = "Phaham";
    encrypt(c);
    printf("Encrypted string is: %s\n", c);
    return 0;
}