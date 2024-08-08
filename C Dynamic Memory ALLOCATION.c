// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[20] = "RIAZ PROGRAMMER";
    char *str2;
    str2 = calloc(20 , sizeof(char));
    if(str2 == NULL){
        printf("MEMORY NOT CREATE");
    }
    else{
        strcpy(str2,str);
    }
    printf("%s\n",str);
    printf("%s\n",str2);

    str2 = realloc(str2 ,100*sizeof(char));
    strcpy(str2,"MY NAME IS RIAZ HASAN");
    printf("%s\n",str2);
    free(str2);

    return 0;
}
