//sunol rasapatirath
#include <stdio.h>

int srasapatirat () {

    char name[20];
    printf("enter name to print");
    if (scanf("%s", name)) {
        printf("name accepted %s", name);
    }else{
        printf("not accepted %s", name);
    }

   return 0;
}

int main () {
    return 0;
}
