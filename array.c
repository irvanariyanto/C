#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char name[14] = "Irvan Ariyanto";
	printf("My name is %s \n", name);

	name[2] = 'p';
	printf("My name is %s \n", name);

	char food[] = "tuna";
	printf("My best food is %s \n", food);

	strcpy(food, "bacon");
	printf("My best food is %s \n", food);

	return 0;
}
