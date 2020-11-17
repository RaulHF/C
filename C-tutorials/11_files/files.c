#include<stdio.h>
#include<stdlib.h>

int main(){

char *my_file = "my_file.txt";

FILE *pf = fopen(my_file, "w");

fprintf(pf, "Introduce:\n");

fclose(pf);

return 0;
}
