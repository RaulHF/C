#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int r;
	int b;
	int g;
}Pixel;

int main(){

char *my_file = "my_file.txt";
Pixel p[50];
Pixel p2[50];

FILE *pf = fopen(my_file, "w");
fprintf(pf, "Introduce:\n");
fclose(pf);

for(int indx = 0; indx < 50; indx ++){
	p[indx].r=2;
	p[indx].b=3;
	p[indx].g=4;
}
pf = fopen("test.bin", "wb");
fwrite(p,sizeof(Pixel), 50, pf);
fclose(pf);

pf = fopen("test.bin", "rb");
fread(p2, sizeof(Pixel), 50, pf);
for(int indx = 0; indx < 50; indx ++){
printf("%d %d %d\n",
	p2[indx].r,
	p2[indx].b,
	p2[indx].g);
}
fclose(pf);
return 0;
}
