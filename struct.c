/*
 * struct.c
 *
 *  Created on: 2020. 4. 10.
 *      Author: 김윤기
 */


#include <stdio.h>

struct student1{
	char lastName;
	int studentId;
	char grade;
};

typedef struct{
	char lastName;
	int studentId;
	char grade;
} student2;

int main(){
	struct student1 st1 = {'A', 100, 'A'};

	printf("[----- [김윤기] [2017038094] -----]\n");
	printf("-----------------------------------------\n");
	printf("st1.lastName   = %c\n", st1.lastName);		//student1 st1에 저장되어있는 값 A 출력
	printf("st1.studentId  = %d\n", st1.studentId);		//student1 st1에 저장되어있는 값 100 출력
	printf("st1.grade      = %c\n", st1.grade);			//student1 st1에 저장되어있는 3번째 값 A 출력

	student2 st2 = {'B', 200, 'B'};

	printf("\nst2.lastName  = %c\n", st2.lastName);		//st2의 첫번째 값 B 출력
	printf("st2.studentId   = %d\n", st2.studentId);	//st2의 두번째 값 200 출력
	printf("st2.grade       = %c\n", st2.grade);		//st2의 세번째 값 B 출력

	student2 st3;

	st3 = st2;

	printf("\nst3.lastName  = %c\n", st3.lastName);		//st2의 값을 st3에 저장하여서 st2의 첫번째 값 B 출력
	printf("st3.studentId   = %d\n", st3.studentId);	//st2의 두번째 값 200 출력
	printf("st3.grade       = %c\n", st3.grade);		//st2의 세번째 값 B 출력

	return 0;
}

