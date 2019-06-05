#include <stdio.h>
#include <stdlib.h>
int justString(char str[]);
char* getApellido();
int main()
{
    printf("%s", getApellido());
    return 0;
}

int justString(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        if((str[i] < 'a' || str[i] > 'z') && str[i] != ' ' && (str[i] < 'A' || str[i] > 'Z')){
            return -1;
        }
        i++;
    }
    return 1;
}
 char* getApellido(){
    printf("Ingrese el apellido del empleado:\n");
    char apellido[51];
    fflush(stdin);
    gets(apellido);
    while(justString(apellido) == -1)
    {
        printf("Reingrese apellido: \n");
        gets(apellido);
    }

    return apellido;
 }
