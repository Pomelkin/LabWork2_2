#include <windows.h>
#pragma hdrstop
#include "pt4.h"
using namespace std;

void Solve()
{
	Task("ListWork22");
	int M; pt >> M;
	PNode P1; pt >> P1;
	PNode P2 = P1;
	PNode Node;
	PNode Tail = 0;
	while (P2 != NULL && P2->Next != NULL) {
		P2 = P2->Next;
		Node = new TNode; Node->Data = M;
		Node->Next = P2->Next; P2->Next = Node;
		P2 = Node->Next;
		P2 == NULL ? Tail = Node : Tail = P2;
	}
	pt << Tail;
}
