#include <iostream>
using namespace std;


int main()
{
    double hour, rate, pay;

    cout <<"WELCOME TO WAZINGWA'S WAGE CALCULATOR   ";

    cout <<"   How many hours did you work for?  ";
    cin >> hour;

    cout << "What is your pay per hour? (PLEASE BE HONEST) ";
    cin >> rate;

    pay = hour * rate;

    cout << "Your earned K"<<pay<<endl;

    return 0;
}
