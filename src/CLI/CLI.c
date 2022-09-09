#include "CLI.h"
#include <stdio.h>
#include <string.h>

bool CLIMain()
{
    char iString[1024];
    memset(iString, '\0', 1024);

    printf(">");
    gets(iString);
    return true;
}

char* input()
{
    char iString[1024];
    memset(iString, '\0', 1024);

    printf(">");
    gets(iString);

    return iString;
}