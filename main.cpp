#include <iostream>
#include <iomanip>

// iomanip provides input/output manipulators that control the format of input and output operations

// we need to declare functions before the main
double getTotal(double prices[],int size);

using namespace std;

// we can't invoke functions if they are declared after main function because compiler does not recognize them
// we can declare functions before

void basics(string parameter) {

    /*
    cout<<parameter<<endl;

    string name;
    int age;

    cout << "What is your age?:";
    cin >> age;

    cout << "What is your full name?:";
    // if we have a space in our input we could get line like this
    // here ws(white space) ensures that any leading white is ignored,
    // input starts from the first non-whitespace character
    getline(cin >> ws,name);


    cout << "Hello " << name << endl;
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

    // NUMBER GUESSING GAME

    // to generate a random number
    srand(time(NULL));

    // generate a number between 1 and 100
    int num = (rand() % 100) + 1;
    int guess;
    int tries = 0;

    cout << "NUMBER GUESSING GAME" << endl;

    do {
        cout << "Enter a guess between (1-100): " << endl;
        cin >> guess;
        tries++;

        if(guess > num) {
            cout << "Your guess is too high!!" << endl;
        }else if(guess < num) {
            cout << "Your guess is too low!!" << endl;
        }else {
            cout << "Your guess is correct!! # of tries " << tries << endl;
        }

    }while (guess != num);

    // setprecision(2) is for two decimal places
    // fixed forces floating-point output to be in fixed-point notation
    double balance = 123;
    cout << "Your balance is $" << setprecision(2) << fixed << balance << endl;
    */

    // ---------------ARRAYS---------------

    // if we are not assigning values right away we need to set the size of the array
    string cars[] = {"Corvette","Mustang","Camry"};

    for(int i = 0;i<sizeof(cars) / sizeof(cars[0]);i++) {
        cout << cars[i] << endl;
    }

    // we could do it like that too
    for(int i = 0;i<size(cars);i++) {
        cout << cars[i] << endl;
    }

    // foreach loop

    // sizeof() determines the size in bytes of a : variable,data type,class,objects

    string name = "Bro";
    cout << sizeof(name) << endl;

    string students[] = {"Spongebob","Patrick","Squidward"};

    for(string student : students) {
        cout << student << endl;
    }

}

int main() {

    //basics("parameter");

    double prices[] = {49.99,15.05,75,0.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices,size);
    cout << total << endl;

    return 0;
}

double getTotal(double prices[],int size) {

    double total = 0;

    for(int i = 0;i<size;i++) {
        total += prices[i];
    }

    return total;
}
