#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Bankprogram
{
    int acno;
    char AccountHolderName[100], Account_Type[100];
    float bal;

public:
    Bankprogram(int acc_no, char *name, char *acc_type, float Balance)
    {
        acno = acc_no;
        strcpy(AccountHolderName, name);
        strcpy(Account_Type, acc_type);
        bal = Balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void Bankprogram::deposit()
{
    int DepositAmmount;
    cout << " Enter Deposit Amount ---> ";
    cin >> DepositAmmount;
    bal += DepositAmmount;
}
void Bankprogram::withdraw()
{
    int WithdrawAmmount;
    cout << " Enter Withdraw Amount ---> ";
    cin >> WithdrawAmmount;
    if (WithdrawAmmount > bal)
        cout << " Cannot Withdraw Amount";
    bal -= WithdrawAmmount;
}
void Bankprogram::display()
{
    // cout << " _______________________________________________________" << endl;
    cout << " Accout No. : \n" << acno;
    cout << " Name : \n" << AccountHolderName;
    cout << " Account Type : \n" << Account_Type;
    cout << " Balance : \n" << bal;
}
int main()
{
    int acc_no;
    char name[100], acc_type[100];
    float Balance;
    cout << " ~~~~~~~~~~~~~~~~~~~ This is Wish Bank ~~~~~~~~~~~~~~~~~~~~ " << endl;
    cout << "CREATE YOUR ACCOUNT NO. --->";
    cin >> acc_no;
    cout << "WHAT'S YOUR NAME ? --->";
    cin >> name;
    cout << "WHAT ACCOUT WOULD YOU PREFER? --->";
    cin >> acc_type;
    cout << "PLEASE ENTER YOUR INITIAL BALANCE --->";
    cin >> Balance;

    Bankprogram b1(acc_no, name, acc_type, Balance);
    b1.deposit();
    b1.withdraw();
    b1.display();
    return 0;
}