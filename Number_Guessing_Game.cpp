#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int main()
{
    int number,guess,attempts;

    srand(time(0));
    number=rand() % 100 +1;
    cout<<"-----Number Guessing Game-----"<<endl;
    cout<<"\n Note: Guess a number between 1 To 100"<<endl;

    while(guess!=number)
    {
        cout<<"\n enter your guess number: ";
        cin>>guess;
        cout<<"\n you guessed the number: "<<guess<<endl;
        attempts++;
        cout<<"number of attempts:"<<attempts<<endl;

        if(guess>number)
        {
            cout<<"\n nnumber is too high"<<endl;

        }
        else if (guess<number)
        {
            cout<<"\n number is too low"<<endl;
        }
        else{
            cout<<"\n congratulations!!!"<<endl;
            cout<<"\n you guessed the Right number in:"<<attempts<<"attempts"<<endl;
        }
        

    }

   return 0;
}