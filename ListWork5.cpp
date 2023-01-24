#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ListWork5");
    
    PNode P1; pt >> P1;
    PNode P6 = P1->Next->Next->Next->Next->Next;
    pt << P6;
}
