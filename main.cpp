#include <iostream>

using namespace std;

int main() {

    string name;
    int age;

    cout << "What is your age?:";
    cin >> age;

    cout << "What is your full name?:";
    // if we have a space in our input we could get line like this
    // here ws(white space) ensures that any leading white is ignored,
    // input starts from the first non-whitespace character
    getline(cin >> ws,name);


    cout << "Hello " <<name << endl;
    cout << "You are " << age << " years old." << endl;

    // some string methods

    cout << name.length() << endl;

    bool isEmpty = name.empty();

    name.clear();

    name.append("Huseyin Koroglu");

    // returns index in given index
    cout << name.at(0) << endl;

    // we can insert a value in to a given index
    // our name is ?@gmail.com now
    name.insert(0,"?");

    cout << name << endl;

    cout << name.find(' ') << endl;

    cout << name << endl;

    // we can erase a portion in between given indices
    name.erase(0,8);

    cout << name << endl;

    return 0;
}
