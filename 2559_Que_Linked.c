#include <stdio.h>
#include <stdlib.h>

// 2559번
// 간단한 누적 합: 겉멋으로 링크드 리스트로 큐를 만들어 풀었다
// 개씹 겉멋 방법이다 비추
// 그냥 배열 하나로 해결하세요 

struct node {
	int data;
	struct node *next;
};

typedef struct node node;

struct queue {
	int cnt;
	int biggest;
	struct node* front;
	struct node* rear;	
};

typedef struct queue queue;

void enqueue(queue* head, int data) {
	node* p;
	p = malloc(sizeof(node));
	p -> data = data;
	p -> next = NULL;
	
	if(head -> cnt == 0) {
		head -> front = p;
		head -> rear = p;
		head -> cnt += 1;
		head -> biggest += data;
		return;
	}
	
	(head -> rear) -> next = p;
	head -> rear = p;
	head -> cnt += 1;
	head -> biggest += data;
	return;
}

int dequeue(queue* head) {
	node* tmp;
	int data;
	tmp = head -> front;
	data = head -> front -> data;
	
	head -> front = head -> front -> next;
	head -> cnt -= 1;
	
	free(tmp);
	return data;
}


int main(void) {
	int n,k;
	scanf("%d %d",&n,&k);
	

	int result = 0;
	int flag = 0;
	queue* head;
	head = malloc(sizeof(queue));
	head -> front = NULL;
	head -> rear = NULL;
	head -> cnt = 0;
	head -> biggest = 0;

	for(int i = 0 ; i < n; i++) {
		int tmp;
		scanf("%d",&tmp);
		enqueue(head,tmp);
		if(head -> cnt == k && !flag) {
			result = head -> biggest;
			flag += 1;
		} else if (head -> cnt == k + 1) {
			int minus = dequeue(head);
			if(result < (head -> biggest) - minus)
				result = (head -> biggest) - minus;
				(head -> biggest) -= minus;
		}
	}
	
	printf("%d\n",result);
	free(head);	
	return 0;
}
