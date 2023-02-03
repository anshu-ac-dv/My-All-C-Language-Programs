#include<stdio.h>
#include<conio.h>
int heap[40];
int size=-1;
int parent(int i)
{
	return(i-1)/2;
}
int left_child(int i)
{
	return i+1;
}
int right_child(int i)
{
	return i+2;
}
int get_Max()
{
	return heap[0];
}
int get_Min()
{
	return heap[size];
}
void moveUp(int i)
{
	while(i>0)
	{
		if(heap[parent(i)]<heap[i]);
		{
			int temp;
			temp=heap[parent(i)];
			heap[parent(i)]=heap[i];
			heap[i]=temp;
		}
		i=i/2;
	}
}
void moveDown(int k)
{
	int index=k;
	int left=left_child(k);
	if(left<=size&&heap[left]>heap[index])
	{
		index=left;
	}
	int right=right_child(k);
	if(right<=size&&heap[right]>heap[index])
	{
		index=right;
	}
	if(k!=index)
	{
		int temp;
		temp=heap[index];
		heap[index]=heap[k];
		heap[k]=temp;
		moveDown(index);
	}
}
void removeMax()
{
	int r=heap[0];
	heap[0]=heap[size];
	size=size-1;
	moveDown(0);
}
void insert(int p)
{
	size=size+1;
	heap[size]=p;
	moveUp(size);
}
void delete(int i)
{
	heap[i]=heap[0]+1;
	moveUp(i);
	removeMax();
}
int main()
{
	insert(20);
	insert(19);
	insert(21);
	insert(18);
	insert(12);
	insert(17);
	insert(15);
	insert(16);
	insert(14);
	int i=0;
	printf("Elements in a Priority queue are:");
	for(i=0;i<=size;i++)
	{
		printf("%d",heap[i]);
	}
	delete(2);
	printf("\nElements in a Priority queue after deleting the element are:");
	for(i=0;i<=size;i++)
	{
		printf("%d",heap[i]);
	}
	int max=get_Max();
	printf("\nElements which is having the higest priority is %d",max);
	int min=get_Min();
	printf("\n The wlwment which is having thr minimum priority is : %d",min);
	return 0;
}
