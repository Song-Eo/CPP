#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;


void menu();
void MAccount();
void IMoney();
void OMoney();
void SAccount();

typedef struct{
    int AID;
    int money;
    char Name[20];
} Account;

Account Acc[100];
int Accnum = 0;


int main()
{
    int select;
    while (true)
    {
        menu();
        cout<<'Select: ';
        cin>>select;
        cout<<endl;


        if (select == 1){
            MAccount();
        }
        else if (select == 2){
            IMoney();
        }
        else if (select == 3){
            OMoney();
        }
        else if (select == 4){
            SAccount();
        }
        else if (select == 5){
            cout<<'ProgramExit';
            break;
        }
        else{
            cout<<'Wrong Selection';
        }
        
    }
    return 0;
    
}

void menu(){
    cout<<'-----Menu------'<<endl;
    cout<<'1. Make Account'<<endl;
    cout<<'2. DepositMoney'<<endl;
    cout<<'3. WithdrawMoney'<<endl;
    cout<<'4. ShowAllAccount'<<endl;
    cout<<'5. ProgramExit'<<endl;
}
void MAccount(){
    int ID;
    int Money;
    char name[20];
    cout<<'[Make Account]';
    cout<<'Account ID: ';
    cin>>ID;
    cout<<'Name: ';
    cin>>name;
    cout<<'Balance: ';
    cin>>Money;
    Acc[Accnum].AID = ID;
    strcpy(Acc[Accnum].Name, name);
    Acc[Accnum].money = Money;
    Accnum++;
}
void IMoney(){
    int ID;
    int Money;
    cout<<'[DepositMoney]';
    cout<<'Account ID: ';
    cin>>ID;
    for(int i = 0; i <= Accnum; i++){
        if (Acc[i].AID == ID){
            cout<<'depositMoney: ';
            cin>>Money;
            cout<<'Deposit Complete';
            return;
        }

    }
    cout<<'Wrong Account.';
}
void OMoney(){
    int ID;
    int Money;
    cout<<'[WithdrawMoney]';
    cout<<'Account ID: ';
    cin>>ID;
    for(int i = 0; i <= Accnum; i++){
        if (Acc[i].AID == ID){
            cout<<'WithdrawMoney: ';
            cin>>Money;
            cout<<'Withdraw Complete';
            return;
        }
    }
    cout<<'Wrong Account';
}

void SAccount(){
    for(int i = 0; i <= Accnum; i++){
        cout<<'Account ID: '<<Acc[i].AID;
        cout<<'Name: '<<Acc[i].Name;
        cout<<'Balance: '<<Acc[i].money<<endl;
    }
}