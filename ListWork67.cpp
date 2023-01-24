#include "pt4.h"
#include <fstream>
#include <String>
using namespace std;

PNode pHead,pBack;

void del(PNode& Head, PNode DelNode)
{
    PNode p = Head;

    if (Head == DelNode)
    {
        Head = DelNode->Next;
        pBack->Next = Head;
    }
    else
    {
        while (p->Next != DelNode) p = p->Next;
        p->Next = DelNode->Next;
    }
    delete DelNode;
}

void Solve()
{
    Task("ListWork67");
    string fname;
    pt >> pHead;
    
    pt >> fname;
    ofstream Out(fname.c_str());
    PNode p = pHead;

    while (p->Next != pHead) p = p->Next;
    pBack = p;

    p = pHead;

    while (p !=p->Next->Next)
    {
        Out<<p->Data<< ' ';
        PNode Pold = p;
        p = p->Next->Next;
        del(pHead, Pold);
    }

    
    Out << p->Data << ' ';
    Out << p->Next->Data;
    delete p->Next;
    delete p;
    Out.close();



}
