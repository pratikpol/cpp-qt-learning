#include <iostream>
using namespace std;

void showBalance(double balance);
double deposite();
double withdraw(double balance);


int main()
{
    double balance = 0;
    int choice = 0;
    do{
        cout << "********************\n";
        cout << " Enter Your Choice: \n";
        cout << "********************\n";
        cout << " 1. Show Balance    \n";
        cout << " 2. Deposite Money  \n";
        cout << " 3. Withdraw Money  \n";
        cout << " 4. Exit            \n";
        cout << "********************\n";
        cin >> choice;

        switch (choice) {
        case 1: showBalance(balance);
            break;
        case 2: balance += deposite();
            break;
        case 3: balance -= withdraw(balance);
            break;
        case 4: cout << "Thanks for visiting!\n";
            break;
        default: cout << "Invalid choice\n";
        }

    }while (choice != 4);

    return 0;

}

void showBalance(double balance){

}

double deposite(){
    return 0;
}
double withdraw(double balance){
    return 0;
}
