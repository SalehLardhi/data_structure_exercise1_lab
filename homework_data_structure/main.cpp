#include <iostream>

using namespace std;

int main()
{
    int index, item,i;
    int arr [4]={1,2,3,4};
    cout<<"The array after the process "<<endl;
    for(i=0; i<4;i++){
        cout<<arr[i]<<" , ";
    }cout<<endl<<endl;
    cout<<"Please, enter The index of the element (0-3)"<<endl;
    cin>>index;
    if(index>=0 && index<4){
            cout<<"Enter the element which you want replace "<<endl;
            cin>>item;
            for( i=0; i<4 ; i++){
                if(index==i){
                    arr[i]=item;
                }
            }
    }
    else {cout<<"index not found, try again later"<<endl;}
    cout<<"The array after the process "<<endl;
    for(i=0; i<4;i++){
        cout<<arr[i]<<" , ";
    }

    return 0;
}
