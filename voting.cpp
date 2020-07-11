#include <iostream>

using namespace std;

int main()
{
    int candidate;

    cout<< "Input the age of the candidate :";
    cin>>candidate;

    if(candidate<18)
    {
        cout<< "\n Sorry , You are not eligible to caste your vote.";
        cout<<  " You would be able to caste your vote after " << 18-candidate << " year" ;
    }
    else
    {
        cout << "Congratulation! You are eligible for casting your vote.";
    }
    return 0;
}
