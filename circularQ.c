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
		printf("\n-----------------[������]----[2017038094]--------------\n");
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
			enQueue(cQ, data);		//enQueue(cQ, item)�� ȣ��
			break;
		case 'd': case 'D':
			deQueue(cQ,&data);		//deQueue�� cQ ȣ�� �� itme���� ȣ��
			break;
		case 'p': case 'P':
			printQ(cQ);				//printQ cQȣ��
			break;
		case 'b': case 'B':
			debugQ(cQ);				//debugQ cQȣ��
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
	if (cQ->front == cQ->rear) { 			//�Ӹ��� ������ �������� ����Ű�� ������ �� ť�� ��������̴�.
			printf(" Queue is empty! ");
			return 1;
		}
}

/* complete the function */
int isFull(QueueType *cQ)
{
	if (cQ->rear == MAX_QUEUE_SIZE - 1) { 	//������ ť�� ũ��-1�� ������ �迭�� �� �������Ƿ� ���̻� ���� ���� �� ���� �����̴�
			printf(" Queue is full! ");
			return 1; 						//��ȭ�����̸� ��ȭ�������� �˸��� 1(��)�� �����Ѵ�.
		}
}


/* complete the function */
void enQueue(QueueType *cQ, element item)
{
	if (isFull(cQ))
		return;  				// ��ȭ �����̸�, ���� ���� �ߴ� �� �̻� ���� ���� �� ����.
	else {
		cQ->rear++; 					//�������� 1 �ø���
		cQ->queue[cQ->rear] = item; 	//���� �ִ´�.
		}
}

/* complete the function */
void deQueue(QueueType *cQ, element *item)
{
	if (cQ->front == cQ->rear)
		return 1;							// ���� �����̸�, ���� ���� �ߴ�
	else {
		cQ->front++; 						//�Ӹ����� 1 �ø���
		return cQ->queue[cQ->front]; 		//���� ���Ϲ޴´�. front�� ���� �����Ƿ� front�Ʒ����� ���̻� ������ �� ���Եȴ�.
		}
}


void printQ(QueueType *cQ)
{
	int i, first, last;

	first = (cQ->front + 1)%MAX_QUEUE_SIZE;	//front ������ġ(�ð����)���� �̵�
	last = (cQ->rear + 1)%MAX_QUEUE_SIZE;	//rear ������ġ(�ð����)���� �̵�

	printf("Circular Queue : [");

	i = first;
	while(i != last){
		printf("%3c", cQ->queue[i]);		//Insert���� �Է¹��� �� ���
		i = (i+1)%MAX_QUEUE_SIZE;			//���� ����ť�� �Ѿ�� ���� ��+1

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
		printf("  [%d] = %c\n", i, cQ->queue[i]);	//Insert���� �Է¹��� �� ���

	}
	printf("front = %d, rear = %d\n", cQ->front, cQ->rear);	//front, rear ������ ���
}

