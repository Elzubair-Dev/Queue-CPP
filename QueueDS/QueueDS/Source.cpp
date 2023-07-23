using namespace std;
#include <iostream>
#include <string>
const int maxsize = 5;
//template <class z>
class Queue
{
private:
	int head;
	int rear;
	int count;
	int arr[maxsize];
public:
	Queue()
	{
		head = 0;
		rear = maxsize - 1;
		count = 0;
	}
	bool isEmpty()
	{
		return count == 0;
	}
	bool isFull()
	{
		return count == maxsize;
	}
	void enQueue(int Element)
	{
		if (isFull()) cout << "Queue is full ....\n";
		else
		{
			rear = (rear + 1) % maxsize;
			arr[rear] = Element;
			count++;
		}
	}
	void deQueue()
	{
		if (isEmpty()) cout << "Queue is Empty in deQueue fun...\n";
		else
		{
			head = (head + 1) % maxsize;
			count--;
		}
	}
	int getHead()
	{
		if (isEmpty()) cout << "Queue is Empty in get Head fun  ...\n";
		else
		return arr[head];
	}
	int getRear()
	{
		if (isEmpty()) cout << "Queue is Empty in get Rear fun  ...\n";
		else
		return arr[rear];
	}
	void Search(int Element)
	{
		int pos = -1;
		for (int i = head; i != rear; i = (i + 1) % maxsize)
		{
			if (arr[i] == Element)
			{
				pos = i;
				break;
			}
		}
		if (pos == -1)
		{
			if (arr[rear] == Element)
				pos = rear;
		}
		if (pos == -1)cout << "Oops! Element is not Exist...\n";
		else cout << "Element index is " << pos << "\n";
		
	}
	void Display()
	{
		if (isEmpty()) cout << "Queue is Empty in Display fun  ...\n";
		else
		{
			for (int i = head; i != rear; i++)
			{
				cout << "| " << arr[i] << " |\n";
			}
			cout << "| " << arr[rear] << " |\n";
		}
	}
};
int main()
{
	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	//q.deQueue();
	q.enQueue(60);
	q.Display();
	//q.Search(10);
}