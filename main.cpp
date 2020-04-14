#include <iostream>

using namespace std;

int main()
{
    char x,y;
    cin>>x>>y;
    cout<<"Ready"<<endl;

    if ( x=='p' && y=='q' )
        cout<<"Mirrored pair"<<endl;
    else if ( x=='q' && y=='p')
        cout<<"Mirrored pair"<<endl;
    else if ( x=='b' && y=='d' )
        cout<<"Mirrored pair"<<endl;
    else if ( x=='d' && y=='b')
        cout<<"Mirrored pair"<<endl;
    else
        cout<<"Ordinary pair"<<endl;
    return 0;
}
