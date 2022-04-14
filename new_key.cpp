

#include <iostream>

using namespace std;


int main()
{
    int *ptr;
    ptr=new int(3);//memory Allocate
    ptr[0]=8;
    ptr[1]=12;
    ptr[2]=18;
    cout<<ptr[0]<<endl<<ptr[1]<<endl<<ptr[2]<<endl;
    delete ptr;
    cout<<"After Delete : \n";
     cout<<ptr[0]<<endl<<ptr[1]<<endl<<ptr[2];
    return 0;
}
