/*
 * p2-2.c
 *
 *  Created on: 2020. 4. 10.
 *      Author: ������
 */

/*
#include <stdio.h>

void print1(int *ptr, int rows);

int main(){
	int one[] = {0, 1, 2, 3, 4};

	printf("[----- [������] [2017038094] -----]\n");
	printf("-----------------------------------------\n");
	printf("one       = %p\n", one);					//one�� �ּҰ� ���
	printf("&one      = %p\n", &one);					//one�� ������ �ּҰ� ���
	printf("&one[0]   = %p\n", &one[0]);				//one�� ������ &one[0]�� �ּҰ� ���
	printf("\n");

	print1(&one[0], 5);									//&one[0]�� int *ptr, 5�� int rows�� �� �ѱ�

	return 0;
}

void print1 (int *ptr, int rows)
{
	int i;
	printf("Address \t Contents \n");
	for(i = 0; i < rows; i++)
		printf("%p \t %5d\n", ptr + i, *(ptr + i));		//&one[0] + 0���� 4������ ���� �ּҰ� ���, rows + 4������ ���� �� ���
	printf("\n");
}

*/
