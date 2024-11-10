#include <bits/stdc++.h>
using namespace std;

int main() {

    int Sc;
    cout<<"Enter student count :";
    cin>>Sc;
   
    string std[Sc];
    for(int i = 0 ; i < Sc; i++)
    {
        cout<<"Enter  name of student\n:";
        string name;
        cin>>name;
        std[i]=name;
    }

   
    int stdm[Sc];
     for(int i = 0 ; i < Sc; i++)
    {
          cout<<"Enter  Marks of student\n:";
        int mark;
        cin>>mark;
        stdm[i]=mark;
    }

cout<<"Printing initial List\n";

    for(int i = 0 ; i < Sc;i++ )
    {
        cout<<"Student Name :" <<std[i]<<" Marks: "<<stdm[i]<<endl;
    }
return 0;
}

