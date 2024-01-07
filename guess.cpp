#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;
int main()
{
    int a,c;
    for(int i=0; i<5; i++)
    {
        srand(time(0)); //for rand to function srand is needed. Without time(0) the computer will return the same value again and again.
        cout<<"Enter your guess between 1 to 10 : ";
        cin>>a;
        c=(rand()%10)+1;
        if(a==c)
        {
            cout<<"Correct guess"<<endl;
        }
        else
        {
            cout<<"Incorrect guess"<<endl;
            cout<<"The number is: "<<c<<endl;
        }

    }
    return 0;
}