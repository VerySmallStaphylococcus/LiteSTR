#include "./liteSTR.h"

//get string len function
size_t len(char *str)  {

    size_t str_size = 1;
    while (str) {
        switch (*str)   {
        case '\0':  return str_size;  break;
        default:    str_size++; break;;
        }
    }
    
}

//splite str
int split(char *in, char **out, char symbol)   {
    size_t str_size = len(in); //str_size

    for (size_t i = 0; i < str_size; i++)
    {
        /* code */
    }
    
}