#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item item1, item2;

    cin>>item1>>item2;
    if(item1.isbn() == item2.isbn())
    {
        cout<< item1 + item2 << endl;
        return 0;
    }
    else{
        cerr << "data must have same ISBN" << endl;
        return -1;
    }
}
