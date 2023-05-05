#include <stdio.h>
#include <stdlib.h>


char *get_string()
{
    int i=0;
    char *string = (char*)malloc(sizeof(char));
    char c =getchar();
    while((c!='\n')&&(c!= EOF))
    {
        string[i++]=c;
        string = (char*)realloc(string,(i+1)*sizeof(char));
        c=getchar();
    }
}
