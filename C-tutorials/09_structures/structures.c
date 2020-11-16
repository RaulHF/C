/*Structures.c show how to use structures*/
/*an pointer to structrues               */

#include<stdio.h>

struct struct_1{
	int member_1;
	char *member_2;
	float member_3;
	/*Rember to define the nested strurewihin the structure*/
	struct struct_2{
		int member_1;
	}struct_2;
};

void change_structure(struct struct_1*);

int main(){

struct struct_1 struct_1;

struct_1.member_1 = 0;
struct_1.member_2 = "laolalal";
struct_1.member_3 = 8;
struct_1.struct_2.member_1 = 0;

printf("%d\n", struct_1.member_1);
printf("%s\n", struct_1.member_2);
printf("%d\n", struct_1.struct_2.member_1);

change_structure(&struct_1);

printf("%d\n", struct_1.member_1);
printf("%lf\n", struct_1.member_3);
printf("%d\n", struct_1.struct_2.member_1);

return 0;
}

void change_structure(struct struct_1* st){
st->member_1 = 10;
st->member_3 = 80;
st->struct_2.member_1 = 10;
}
