/*
 * p2-1.c
 *
 *  Created on: 2020. 4. 10.
 *      Author: 김윤기
 */

/*
#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void){
	for(i=0; i <MAX_SIZE; i++)
		input[i] = i;

	printf("[----- [김윤기] [2017038094] -----]\n");
	printf("-----------------------------------------\n");
	printf("address of input = %p\n",input); 	//input의 주소 출력

	answer = sum(input, MAX_SIZE);
	printf("The sum is: %f\n", answer);
}

float sum(float list[], int n){
	printf("value of list = %p\n", list);		//input의 주소를 담고있는 list 출력
	printf("address of list = %p\n\n", &list);	//list의 주소값 출력

	int i;
	float tempsum = 0;
	for(i = 0; i < n; i++)
		tempsum += list[i];
	return tempsum;
}

*/
