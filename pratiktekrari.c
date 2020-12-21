#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

struct arabalar {
	char marka[20];
	char model[20];
	int yil;
	int yas;
};


struct Humans {
	char FirstName[25],LastName[25],Country[25];
	int age;
};

int main(int argc, char const *argv[]) {

	struct arabalar arabaBir = {"Accent","Hyundai",2018,18};

	printf("%s\n",arabaBir.marka);
	printf("%s\n",arabaBir.model);
	printf("%d\n",arabaBir.yil);
	printf("%d\n",arabaBir.yas);



	// FirstName , LastName , Country , Age

	struct Humans human = {
		"Anna","Vissi","Greece",50
	};


	printf("FirstName : %s\nLastName : %s \nCountry : %s\nAge : %d\n",human.FirstName,human.LastName,human.Country,human.age);

	return 0;

}
