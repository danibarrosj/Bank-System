#include <iostream>

using namespace std;

class BankAccount {
private:
	int accountNumber;
	string accountHolder;
	double balance;

public:
	BankAccount(int accNum, string accHolder, double initialBalance) {
		accountNumber = accNum;
		accountHolder = accHolder;
		balance = initialBalance;

	}

	//Deposit Function
	void deposit(double amount) {
		if (amount > 0) {
			balance += amount;
			cout << "Deposited" << amount << "successfully!" << endl;
		}
		else {
			cout << "Amount not acceptable for deposit" << endl;
		}

	}

	//Withdraw Function
	void withdraw(double amount) {
		if (amount > 0 && amount <= balance) {
			balance -= amount;
			cout << "Successfully withdrew" << amount << "\n" << "Remaining balance is" << balance << endl;
		}
		else {
			cout << "Invalid withdrawing amount! \n Try again" << endl;
		}
	}

	//Display Balance Function 
	void displayBalance(balance) {
		cout << "Account number:" << accountNumber << "\n";
		cout << "Account holder:" << accountHolder << "\n";
		cout << "Your balance is: $ " << balance << endl;
	}

};

int main() {
	 
}