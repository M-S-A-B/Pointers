#include<iostream>
using namespace std;


int main()
{int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10},a;
int *ptr=&arr[0];
cout<<"Enter the position to be printed: ";
cin>>a;

    cout<<*(ptr+a)<<endl;
   

}






