#include <iostream>

enum class months{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5, 
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12,
};

int main(){
    int choice;
    while(true){
        std::cout << "Please enter the date of the month => ";
        std::cin >> choice;
        if(choice < 0 || choice > 12){
            std::cout << "Wrong number\n";
            continue;
        }
        if(choice == 0){
            std::cout << "Goodbay\n";
            exit(0);
        }
        months month = static_cast<months> (choice);
        switch (month){
        case months::January: std::cout << "January\n"; break;
        case months::February: std::cout << "February\n"; break;
        case months::March: std::cout << "March\n"; break;
        case months::April: std::cout << "April\n"; break;
        case months::May: std::cout << "May\n"; break;
        case months::June: std::cout << "June\n"; break;
        case months::July: std::cout << "July\n"; break;
        case months::August: std::cout << "August\n"; break;
        case months::September: std::cout << "September\n"; break;
        case months::October: std::cout << "October\n"; break;
        case months::November: std::cout << "November\n"; break;
        case months::December: std::cout << "December\n"; break;
        }
    }
    return 0;
}