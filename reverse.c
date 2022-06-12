#include <stdio.h>

int main(void){

    char setence[100] = { '\0'};

    printf( "Enter any string:" );
    scanf("%99[^\n]s", setence);

    char *last = setence;

    while(*last) ++ last;

    if(setence != last){
        for(char *first = setence; first < --last; ++first){
            char c = *first;
            *first = *last;
            *last = c;
        }
    }

    printf("Reserved String = %s\n", setence);

    return 0;
}