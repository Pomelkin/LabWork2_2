#include "pt4.h"
using namespace std;

void Add(int data, PNode& Head, PNode& LastNode)
{
    PNode Temp;
        if (Head == NULL)
        {
            Head = new Node;
            LastNode = Head;
            Head->Next = NULL;
        }
        else
        {
            Temp = new Node;
            LastNode->Next = Temp;
            LastNode = Temp;
            LastNode->Next = NULL;
        }
    LastNode->Data = data;
}

void del(PNode& Head, PNode DelNode)
{
    PNode p = Head;

    if (Head == DelNode) Head = DelNode->Next;
    else
    {
        while (p->Next != DelNode) p = p->Next;
        p->Next = DelNode->Next;
    }
    delete DelNode;
}


void Solve()
{
    Task("ListWork70");
    int n;
    float SUM = 0;
    pt >> n;

    PNode Head = NULL, LastNode = NULL;

    for (int i = 0; i < n; i++)
    {
        int num;
        pt >> num;
        SUM += num;
        Add(num, Head, LastNode);
    }

    SUM /= n;
    PNode p = Head;

    for (int i = 0; i < n; i++)
    {
        if (p->Data < SUM) del(Head, p);
        p = p->Next;
    }
    pt << Head;
}
