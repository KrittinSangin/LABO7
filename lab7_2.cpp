//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Fahsai: Sawadee ka...Can you tell me your name?"<< endl;
    cout << "?????: ";
    string Name;
    getline(cin,Name);
    cout << "Fahsai: Wow!!! "<< Name <<" is a really cool name."<<endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
    cout << Name <<": ";
    string studentid;
    cin >> studentid;
    cin.ignore();
    int x = studentid[0]-48-1;
    int y = studentid[1]-48-2;
    cout << "Fahsai: I think you may be GEAR " <<x<<y<<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << Name <<": ";
    string Movie;
    getline(cin,Movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << Name <<": ";
    string Date;
    getline(cin,Date);
    cout << "Fahsai: "<<Date<<"....that is OK!!! I'm looking forward to watching\n"<<Movie<<" with you.\n";
    cout << Name <<": ";
    string randomassline;
    getline(cin,randomassline);
    cout << "Fahsai: 555+ see you " << Date <<". Bye Bye \(^ ^)/";

}
