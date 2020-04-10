/*
 * ap1.c
 *
 *  Created on: 2020. 4. 10.
 *      Author: 김윤기
 */

/*
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int list[5];				//정수형 list 4개 생성
	int *plist[5] = {NULL,};	//정수형 참조plist 4개 생성

	plist[0] = (int *)malloc(sizeof(int));	//malloc을 이용하여 int의 값인 4를 할당

	list[0] = 1;
	list[1] = 100;

	*plist[0] = 200;

	printf("[----- [김윤기] [2017038094] -----]\n");
	printf("-----------------------------------------\n");

	printf("value of list[0] = %d\n", list[0]);				//list[0]의 값 출력
	printf("address of list [0]      = %p\n", &list[0]);	//참조함수 list[0]의 값 출력
	printf("value of list            = %p\n", list);		//list의 값 출력
	printf("address of list (&list)  = %p\n", &list);		//참조함수 list의 값 출력


	printf("----------------------------------------\n\n");
	printf("value of list[1]    = %d\n", list[1]);			//list[1]의 값 출력
	printf("address of list[1]  = %p\n", &list[1]);			//참조함수list[1]의 값 출력
	printf("value of *(list+1)  = %d\n", *(list + 1));		//list를 가르키는 포인터+1의 값 출력
	printf("address of list+1   = %p\n", list+1);			//list+1의 값 출력

	printf("----------------------------------------\n\n");

	printf("value of *plist[0]  = %d\n", *plist[0]);		//포인터형 변수plist[0]의 값 출력
	printf("&plist[0]           = %p\n", &plist[0]);		//참조함수 &plist[0]의 값 출력
	printf("&plist              = %p\n", &plist);			//참조함수 &plist[0]의 값 출력
	printf("plist               = %p\n", plist);			//&plist[0]의 값 출력
	printf("plist[0]            = %p\n", plist[0]);			//plist[0]의 값 출력
	printf("plist[1]            = %p\n", plist[1]);			//plist[1]의 값 출력
	printf("plist[2]            = %p\n", plist[2]);			//plist[2]의 값 출력
	printf("plist[3]            = %p\n", plist[3]);			//plist[3]의 값 출력
	printf("plist[4]            = %p\n", plist[4]);			//plist[4]의 값 출력

	free(plist[0]);
}
*/
