#include<iostream>
using namespace std;

int  main()
{
    int English,Maths,Science,Computer,Social;
    float total,percentage;

    cout<<"\nEnter marks of English: ";
    cin>>English;
    cout<<"\nEnter marks of maths: ";
    cin>>Maths;
    cout<<"\nEnter marks of Scince: ";
    cin>>Science;
    cout<<"\nEnter marks of computer: ";
    cin>>Computer;
    cout<<"\nEnter marks of social: ";
    cin>>Social;
    
    total=English+Maths+Science+Computer+Social;
    cout<<"Total marks: "<<total<<endl;

    percentage=(total/500)*100;
    cout<<"percentage: "<<percentage<<endl;

    if(English>=35 && Maths>=35 && Science>=35 && Computer>=35 && Social>=35)
    {
        cout<<"\n you are pass"<<endl;
    }
    else
    {
        cout<<"\n you are fail"<<endl;
    } 

    if (percentage>=90)
    {
        cout<<"\n you are in grade A"<<endl;
    }
    else if (percentage>=80)
    {
        cout<<"\n you are in grade A"<<endl;
    }
    else if (percentage>=70)
    {
        cout<<"\n you are in grade B"<<endl;
    }
    else if (percentage>=60)
    {
        cout<<"\n you are in grade C"<<endl;
    }
    else if (percentage>=50)
    {
        cout<<"\n you are in grade D"<<endl;
    }
    else
    {
        cout<<"\n you are in grade F"<<endl;
    }

    return 0;
    
    
}