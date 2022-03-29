#include <stdio.h>
#include <stdlib.h>
#include "mystr.h"



int my_strlen(const char* str){
    int length=0;
    while (*str!='\0')
    {
        length++;
        str++;
    }
    
    return length;
}

int my_strcmp(const char* str1, const char* str2){
    while (*str1!='\0')
    {
        if (*str1!=*str2)
        {
            return 0;
        }
        
        str1++;
        str2++;
    }

    return 1;
}

char* my_strcpy(char* dest, const char* str){
    while (*dest!='\0')
    {
        *dest=*str;
        if(*str=='\0')
        break;
        
        str++;
        dest++;
    }

    return dest;
}

char* my_strdup(const char* str){
    char* newStr;
    newStr = (char*) malloc(sizeof(char)*my_strlen(str)+10);
    newStr="";

    while (*str!='\0')
    {
        *newStr=*str;

        newStr++;
        str++;
    }
 
    printf("%s\n",newStr);
    return newStr;
}

int main(){
    char str[]="CIao";
    printf("%d\n",my_strlen(str));


    printf("%d\n",my_strcmp("ciao","ciao"));
    printf("%d\n",my_strcmp("ciAo","ciao"));
    printf("%d\n",my_strcmp("ciao","co"));
    printf("%d\n",my_strcmp("co","ciao"));
    printf("%d\n",my_strcmp("ciao","coai"));

    char dest[]="dest";
    char res[]="res";

    my_strcpy(dest,res);

    printf("%s\n",dest);


    char res1[]="res1";
    char* dest1;
    dest1=my_strdup(res1);
    
    printf("%s\n",dest1);


}