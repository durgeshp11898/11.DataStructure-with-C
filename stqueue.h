/*Disha Parichha
RollNo:87*/


#define qsize 30

typedef struct
{
int items[qsize];
int front,rear;
}queue;

void initq(queue *pq)
{
pq->front=pq->rear=-1;
}

void addq(queue *pq,int num)
{
pq->rear++;
pq->items[pq->rear]=num;
}

int delq(queue *pq)
{
int num;
pq->front++;
num=pq->items[pq->front];
return(num);
}

int peekq(queue *pq)
{
int num;
pq->front++;
num=pq->items[pq->front];
pq->front--;
return(num);
}

int isempty(queue *pq)
{
if(pq->front==pq->rear)
{
pq->front=pq->rear=-1;
return 1;
}
}

int isfullq(queue *pq)
{
return(pq->rear==qsize-1);
}
