#include<iostream>
using namespace std;

int main()
{
    double num1,num2;
    char choice;
    char operation;

    
    cout<<"---------simple calculator---------"<<endl;


    cout<<"Enter First Number: ";
    cin>> num1;

    cout<<"Enter Second Number: ";
    cin>> num2;

    cout<<"MENU:"<<"\n1=add"<<"\n2=sub"<<"\n3=multi"<<"\n4=div"<<endl;
    cin>> operation;
 
    
    switch(operation)
    {
        case '1':
            cout<<"Result: "<< num1+num2<<endl;
            break;
        case '2':
            cout<<"Result: "<< num1-num2<<endl;
            break;
        case '3':
            cout<<"Result: "<< num1*num2<<endl;
            break;
        case '4':
            if(num2!=0)
                cout<<"result: "<< num1/num2<<endl;
            else
                cout<<"error: division with zero cannot be done."<<endl;
            break;
        
        default:
            cout<<"error: invalid operation."<<endl;
    }
        while (true)
        {
            cout<<"do you want to continue?y/n: ";
            cin>> choice;
            if(choice=='y' || choice=='Y')
            {
                cout<<"Enter First Number: ";
                cin>> num1;

                cout<<"Enter Second Number: ";
                cin>> num2;

                cout<<"MENU:"<<"\n1=add"<<"\n2=sub"<<"\n3=multi"<<"\n4=div"<<endl;
                cin>> operation;

                switch(operation)
                {
                case '1':
                    cout<<"Result: "<< num1+num2<<endl;
                    break;
                case '2':
                    cout<<"Result: "<< num1-num2<<endl;
                    break;
                case '3':
                    cout<<"Result: "<< num1*num2<<endl;
                    break;
                case '4':
                    if(num2!=0)
                    cout<<"result: "<< num1/num2<<endl;
                    else
                    cout<<"error: division with zero cannot be done."<<endl;
                    break;
        
                default:
                    cout<<"error: invalid operation."<<endl;
                }
                
            }
            else if(choice=='n' || choice=='N')
            {
                cout<<"thank you for using the calculator."<<endl;
                break;
            }
            


        }
    


    
    return 0; 

}