#include <stdio.h>
#include <stdlib.h>

int input(char *s,int length);

int main()
{
    char *buffer = NULL;
    size_t bufsize = 0;
    size_t character;
    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }

    write(1, "$", 2);
    character = getline(&buffer,&bufsize,stdin);
   /* printf("You typed: '%s'\n",buffer);*/

    return(0);
}
