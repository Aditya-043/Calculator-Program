#include<iostream>
using namespace std;
int main()
{
    int x,y,a,s,m,d,choice; 
    do{ 
        cout<<"\n \t\t\t** CALCULATOR **"<<endl;
        cout<<"**********************************"<<endl;
        cout <<"1.Addition" <<endl;
        cout <<"2.Subtraction" << endl;
        cout <<"3.Multiplication"<< endl;  
        cout <<"4.Division" << endl;
        cout <<"5. Exit"<<endl<<endl;

        cout<<"**********************************"<<endl;
        cout <<"Enter your choice : ";

        cin >> choice;

        switch (choice)
        {
        case 1: 
            cout <<"Enter First number : ";
            cin >> x;
            cout <<"Enter Second number : ";
            cin >> y;

            a = x+y;
            cout <<"Sum of "<< x <<" and "<< y <<" is "<< a<<endl;
            break;
        case 2:
            cout <<"Enter first number : ";
            cin >> x;
            cout <<"Enter Second number : ";
            cin >> y;

            s = x-y;
            cout <<"Subtraction of "<< x <<" and "<< y <<" is "<< s<<endl;;
            break;
        case 3:
            cout <<"Enter first number : ";
            cin >> x;
            cout <<"Enter Second number : ";
            cin >> y;

            m = x*y;
            cout <<"Multiplication of "<< x <<" and "<< y <<" is "<< m<<endl;;
            break;
        case 4:
            cout <<"Enter first number : ";
            cin >> x;
            cout <<"Enter Second number : ";
            cin >> y;

            d = x/y;
            cout <<"Division of "<< x <<" and "<< y <<" is "<< d<<endl;;
            break;
        case 5:
            exit(0);
        default:
            cout <<"Wrong choice"<<endl;;
        }
    }
    while(choice != 5);
    return 0;
} 

