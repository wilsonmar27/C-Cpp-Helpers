#include <stdio.h>
#include "helpers.h"

void printCharArray(char str[], int array_size) {
    printf("{");
    for(int i = 0; i < array_size - 1; i++) {
        if (str[i] == 0) printf("\'\\0\', ");
        else printf("\'%c\', ", str[i]);
    }
    if (str[array_size - 1] == 0) printf("\'\\0\'");
    else printf("\'%c\'", str[array_size - 1]);
    printf("}\n");
}

void printDecArray(int dec[], int array_size) {
    printf("{");
    for(int i = 0; i < array_size - 1; i++) {
        printf("\'%d\', ", dec[i]);
    }
    printf("\'%d\'", dec[array_size - 1]);
    printf("}\n");
}

void printDoubleArray(double ldec[], int array_size) {
    printf("{");
    for(int i = 0; i < array_size - 1; i++) {
        printf("\'%lf\', ", ldec[i]);
    }
    printf("\'%lf\'", ldec[array_size - 1]);
    printf("}\n");
}