#include <stdio.h>
#include <stdlib.h>

struct date {
	int date;
	int month;
	int year;
};

struct student_info {
	int roll;
	char* name;
	float cgpa;

	struct date age;
};

void printValues(struct student_info p){
	printf("Name: %s\tRoll: %d\tcgpa: %f\n",p.name, p.roll, p.cgpa);
	printf("Age: %d-%d-%d\n",p.age.date, p.age.month, p.age.year);
} 

void populateValue(struct student_info stu) {
	stu.roll = 20051554;
	stu.name = "Dipankar";
	stu.cgpa = 9.3f;
	stu.age.date = 28;
	stu.age.month = 10;
	stu.age.year = 2001;

	printValues(stu);
}

void populateValueRef(struct student_info* stu) {
	stu->roll = 20051554;
	stu->name = "Dipankar ref";
	stu->cgpa = 9.3f;
	stu->age.date = 28;
	stu->age.month = 10;
	stu->age.year = 2001;

	printValues(*stu);
}
int main() {
	struct student_info ss1;
	populateValue(ss1);
	struct student_info ss;
	populateValueRef(&ss);
}
