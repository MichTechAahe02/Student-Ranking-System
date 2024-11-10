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
    vector<pair<string,int>> std;

    //Taking input as a pair of Student name and marks
    for(int i = 0 ; i < Sc; i++)
    {
        cout<<"Enter  name of student\n:";
        string name;
        cin>>name;
        cout<<"Enter  Marks of student\n:";
        int mark;
        cin>>mark;
        std.push_back(make_pair(name,mark));
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
