#include <iostream>
#include <string>

struct address_storage{
    std::string city = "None";
    std::string street = "None";
    int house = 0;
    int apartament = 0;
    int zip_code = 0;
};

void print_address_storage(const address_storage &test){
    std::cout << "City: " << test.city << "\nStreet: " << test.street << "\nHouse: " 
    << test.house << "\nApartament: " << test.apartament << "\nZip-code: " << test.zip_code << '\n' << '\n';
}

int main(){
    address_storage test_first = {"Moscow", "Sofiyskaya", 37, 1, 236123};
    address_storage test_second = {"Piter", "Moscovskaya", 23, 2, 234654};
    print_address_storage(test_first);
    print_address_storage(test_second);
    return 0;
}