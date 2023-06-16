#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
    int arr[MAX_SIZE];
    int i, num;
    cout<<"Enter size of array: ";
    cin>>num;

    cout<<"Enter "<<num<< " elements in the array :";


    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }


    cout<<"\nElements in array are: ";
    for(i=0; i<num; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
