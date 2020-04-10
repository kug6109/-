/*
 * p2-2.c
 *
 *  Created on: 2020. 4. 10.
 *      Author: 김윤기
 */

/*
#include <stdio.h>

void print1(int *ptr, int rows);

int main(){
	int one[] = {0, 1, 2, 3, 4};

	printf("[----- [김윤기] [2017038094] -----]\n");
	printf("-----------------------------------------\n");
	printf("one       = %p\n", one);					//one의 주소값 출력
	printf("&one      = %p\n", &one);					//one의 참조된 주소값 출력
	printf("&one[0]   = %p\n", &one[0]);				//one의 참조된 &one[0]의 주소값 출력
	printf("\n");

	print1(&one[0], 5);									//&one[0]는 int *ptr, 5는 int rows로 값 넘김

	return 0;
}

void print1 (int *ptr, int rows)
{
	int i;
	printf("Address \t Contents \n");
	for(i = 0; i < rows; i++)
		printf("%p \t %5d\n", ptr + i, *(ptr + i));		//&one[0] + 0부터 4까지의 더한 주소값 출력, rows + 4까지의 더한 값 출력
	printf("\n");
}

*/
