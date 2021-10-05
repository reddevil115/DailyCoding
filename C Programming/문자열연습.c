#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
char *str ="ab234cid*(s349*(20kd", *ptr = str;
while (*ptr) { // While there are more characters to process...
    if ( isdigit(*ptr) ) {
        // Found a number
        int val = (int)strtol(ptr,&ptr, 10); // Read number
        printf("%d\n", val); // and print it.
    } else {
        // Otherwise, move on to the next character.
        ptr++;
    }
}

}
