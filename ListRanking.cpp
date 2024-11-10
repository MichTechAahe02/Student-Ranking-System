#include <bits/stdc++.h>
using namespace std;

void sortPair(vector<pair<string,int>>&t)
{

    sort(t.begin(), t.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
        return a.second > b.second; // Compare by marks in descending order
    });

}

int main() {

    int Sc;
    cout<<"Enter student count :";
    cin>>Sc;  
     cin.ignore();

    vector<pair<string,int>> std;

    //Taking input as a pair of Student name and marks
    for(int i = 0 ; i < Sc; i++)
    {
        cout<<"Enter  Full Name of student\n:";
        string name;
        getline(cin,name);
        

//Concatenation of name and lastname 
        string full_name = name+" " + lname;

        cout<<"Enter  Marks of student\n:";
        int mark;
        cin>>mark;
        cin.ignore();

        std.push_back(make_pair(full_name,mark));
    }

cout<<"Printing initial List\n";

    for(auto i: std )
    {
        cout<<"Student Name :" << i.first <<" Marks: "<<i.second <<endl;
    }

    sortPair(std);

    cout << "Printing sorted list in descending order of marks:\n";
    for (auto i: std ){
        cout << "Student Name: " << i.first <<" Marks: "<<i.second <<endl;
    }

    return 0;
}
