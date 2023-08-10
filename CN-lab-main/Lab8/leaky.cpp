#include <iostream>

using namespace std;

int main()
{
    int size=50,current=0,input,out=10;
    char a='y';
    do{
        if(current<=size){
        if(current<=size && a=='y'){
            cout<<"Enter a packet input: ";
            cin>>input;
            current+=input;
        }
        if(current>=10){
        current=current-10;
        cout<<"Packets sent is 10\n";
        }
        else{
            cout<<"Packets sent is "<<current<<endl;
            current=0;
        }
        cout<<"Remaining packets in bucket: "<<current<<endl;
        cout<< "Do you want to input packet: ";
        cin>>a;
        }
        //else cout<<"Bucket is full\n";
    }while(current>0 || a=='y');
    cout<<"---------------------------------\nProgram ended\n---------------------------------";

    return 0;
}
