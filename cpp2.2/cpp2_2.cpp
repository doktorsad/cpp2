#include <iostream>
#include <string>

struct bank_account{
    int number_account = 0;
    int account_balance = 0;
    std::string name;
};

void designer_struct(bank_account &test){
    std::cout << "Enter the account number => ";
    std::cin >> test.number_account;
    std::cout << "Enter the owner's name => ";
    std::cin >> test.name;
    std::cout << "Enter the balance => ";
    std::cin >> test.account_balance;
}

void set_balance(bank_account &test){
    std::cout << "Enter the new balance => ";
    std::cin >> test.account_balance;
}

void print_bank_account(const bank_account &test){
    std::cout << "Your account: " << test.account_balance << ", " << test.number_account << ", " << test.name << '\n';
}

int main(){
    bank_account test;
    designer_struct(test);
    set_balance(test);
    print_bank_account(test);
    return 0;
}