/*
 * struct.c
 *
 *  Created on: 2020. 4. 10.
 *      Author: ������
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

	printf("[----- [������] [2017038094] -----]\n");
	printf("-----------------------------------------\n");
	printf("st1.lastName   = %c\n", st1.lastName);		//student1 st1�� ����Ǿ��ִ� �� A ���
	printf("st1.studentId  = %d\n", st1.studentId);		//student1 st1�� ����Ǿ��ִ� �� 100 ���
	printf("st1.grade      = %c\n", st1.grade);			//student1 st1�� ����Ǿ��ִ� 3��° �� A ���

	student2 st2 = {'B', 200, 'B'};

	printf("\nst2.lastName  = %c\n", st2.lastName);		//st2�� ù��° �� B ���
	printf("st2.studentId   = %d\n", st2.studentId);	//st2�� �ι�° �� 200 ���
	printf("st2.grade       = %c\n", st2.grade);		//st2�� ����° �� B ���

	student2 st3;

	st3 = st2;

	printf("\nst3.lastName  = %c\n", st3.lastName);		//st2�� ���� st3�� �����Ͽ��� st2�� ù��° �� B ���
	printf("st3.studentId   = %d\n", st3.studentId);	//st2�� �ι�° �� 200 ���
	printf("st3.grade       = %c\n", st3.grade);		//st2�� ����° �� B ���

	return 0;
}

