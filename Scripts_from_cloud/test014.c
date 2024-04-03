#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main(){
	
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	/*student1.name = "Jim" <-- geht nicht */
	strcpy(student1.name, "Jim");
	strcpy(student1.major, "Business");
	
	printf("%s\n", student1.name);
	
	struct Student student2;
	student2.age = 25;
	student2.gpa = 3.1;
	strcpy(student1.name, "John");
	strcpy(student1.major, "Art");

	printf("%d\n", student2.age);

	return 0;
}