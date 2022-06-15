#include "Header.h"


int main()
{
    LinkedList list;
    list.push_front(5);
    list.push_front(10);
    list.push_front(15);
    cout <<"Size = "<< list.getsize() << "\n\n";
    list.printPTR();
    list.push_back(21);
    list.push_back(225);
    cout << "Size = " << list.getsize() << "\n\n";
    list.printPTR();
    cout << "Index = " <<list[4] << "\n\n";
    cout << "Index = " <<list[3] << "\n\n";
    cout << "Index = " <<list[2] << "\n\n";
    cout << "Index = " <<list[1] << "\n\n";
    cout << "Index = " <<list[0] << "\n\n";
    cout << "Index = " <<list[5] << "\n\n";
    list.printALL();
    list[0] = 51;
    list.printALL();
    list.pop_front();
    list.pop_front();
    list.pop_front();
    list.pop_front();
    list.pop_front();
    list.printALL();
    cout << "Size = " << list.getsize() << "\n\n";
    list.push_front(5);
    list.push_front(10);
    list.push_front(15);
    cout << "Size = " << list.getsize() << "\n\n";
    list.printPTR();
    list.push_back(21);
    list.push_back(225);
    cout << "Size = " << list.getsize() << "\n\n";
    list.pop_back();
    list.pop_back();
    list.pop_back();
    list.pop_back();
    list.pop_back();
    cout << "Size = " << list.getsize() << "\n\n";
    list.printALL();





    return 0;
}
