#include <iostream>
#include "Comp.h"
using namespace std;
int main()
{
    std::string br;
    int proc, mem, stor;
    cout << "Type model: "; cin >> br;
    cout << "Type number of processor cores: "; cin >> proc;
    cout << "Type size of memory: "; cin >> mem;
    cout << "Type size of storage: "; cin >> stor;
    Pc<int> pc(br, { proc, mem, stor });
    pc.print();
}
