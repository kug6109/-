/*
 * circularQ.c
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 4

typedef char element;
typedef struct {
	element queue[MAX_QUEUE_SIZE];
	int front, rear;
}QueueType;


QueueType *createQueue();
int isEmpty(QueueType *cQ);
int isFull(QueueType *cQ);
void enQueue(QueueType *cQ, element item);
void deQueue(QueueType *cQ, element* item);
void printQ(QueueType *cQ);
void debugQ(QueueType *cQ);

element getElement();


int main(void)
{
	QueueType *cQ = createQueue();
	element data;

	char command;

	do{
		printf("\n-----------------[김윤기]----[2017038094]--------------\n");
		printf("\n-----------------------------------------------------\n");
		printf("                     Circular Q                   \n");
		printf("------------------------------------------------------\n");
		printf(" Insert=i,  Delete=d,   PrintQ=p,   Dubug=b,   Quit=q \n");
		printf("------------------------------------------------------\n");

		printf("Command = ");
		scanf(" %c", &command);

		switch(command) {
		case 'i': case 'I':
			data = getElement();
			enQueue(cQ, data);		//enQueue(cQ, item)값 호출
			break;
		case 'd': case 'D':
			deQueue(cQ,&data);		//deQueue의 cQ 호출 및 itme참조 호출
			break;
		case 'p': case 'P':
			printQ(cQ);				//printQ cQ호출
			break;
		case 'b': case 'B':
			debugQ(cQ);				//debugQ cQ호출
			break;
		case 'q': case 'Q':
			break;
		default:
			printf("\n       >>>>>   Concentration!!   <<<<<     \n");
			break;
		}

	}while(command != 'q' && command != 'Q');


	return 1;
}


QueueType *createQueue()
{
	QueueType *cQ;
	cQ = (QueueType *)malloc(sizeof(QueueType));
	cQ->front = 0;
	cQ->rear = 0;
	return cQ;
}

element getElement()
{
	element item;
	printf("Input element = ");
	scanf(" %c", &item);
	return item;
}


/* complete the function */
int isEmpty(QueueType *cQ)
{
	if (cQ->front == cQ->rear) { 			//머리와 꼬리가 같은값을 가리키고 있으면 그 큐는 공백상태이다.
			printf(" Queue is empty! ");
			return 1;
		}
}

/* complete the function */
int isFull(QueueType *cQ)
{
	if (cQ->rear == MAX_QUEUE_SIZE - 1) { 	//꼬리가 큐의 크기-1과 같으면 배열이 꽉 차있으므로 더이상 값을 넣을 수 없는 상태이다
			printf(" Queue is full! ");
			return 1; 						//포화상태이면 포화상태임을 알리고 1(참)을 리턴한다.
		}
}


/* complete the function */
void enQueue(QueueType *cQ, element item)
{
	if (isFull(cQ))
		return;  				// 포화 상태이면, 삽입 연산 중단 더 이상 값을 넣을 수 없다.
	else {
		cQ->rear++; 					//꼬리값을 1 올리고
		cQ->queue[cQ->rear] = item; 	//값을 넣는다.
		}
}

/* complete the function */
void deQueue(QueueType *cQ, element *item)
{
	if (cQ->front == cQ->rear)
		return 1;							// 공백 상태이면, 삭제 연산 중단
	else {
		cQ->front++; 						//머리값을 1 올리고
		return cQ->queue[cQ->front]; 		//값을 리턴받는다. front는 줄지 않으므로 front아래값은 더이상 접근할 수 없게된다.
		}
}


void printQ(QueueType *cQ)
{
	int i, first, last;

	first = (cQ->front + 1)%MAX_QUEUE_SIZE;	//front 다음위치(시계방향)으로 이동
	last = (cQ->rear + 1)%MAX_QUEUE_SIZE;	//rear 다음위치(시계방향)으로 이동

	printf("Circular Queue : [");

	i = first;
	while(i != last){
		printf("%3c", cQ->queue[i]);		//Insert에서 입력받은 값 출력
		i = (i+1)%MAX_QUEUE_SIZE;			//다음 원형큐로 넘어가기 위한 값+1

	}
	printf(" ]\n");
}


void debugQ(QueueType *cQ)
{

	printf("\n---DEBUG\n");
	for(int i = 0; i < MAX_QUEUE_SIZE; i++)
	{
		if(i == cQ->front) {
			printf("  [%d] = front\n", i);
			continue;
		}
		printf("  [%d] = %c\n", i, cQ->queue[i]);	//Insert에서 입력받은 값 출력

	}
	printf("front = %d, rear = %d\n", cQ->front, cQ->rear);	//front, rear 증가값 출력
}

