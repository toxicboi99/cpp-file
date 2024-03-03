#include <iostream> 
#include <string> 
using namespace std;
class BankAccount {
  private: 
string accountNumber;
double balance; 
  public:
    BankAccount(const string & accNum, double initialBalance): accountNumber(accNum), balance(initialBalance) {}
    void deposit(double amount) {
      balance += amount; 
      cout << "Deposit successful. Current balance: " << balance << endl;
    }
};

int main() {
 string sacno = "SB-123Ritesh";
  double Opening_balance, deposit_amt, deamt; 
  Opening_balance = 1000;
 cout << "A/c. No." << sacno <<endl<< " Balance: " << Opening_balance << endl;
  BankAccount account(sacno, 1000.0);
  cout<<"Enter Deposite Amount:";
  cin>>deamt;
  deposit_amt = deamt;
  cout << "Deposit Amount: " << deposit_amt << endl; 
  account.deposit(deposit_amt);
  return 0;
}
