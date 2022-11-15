#include <iostream>
#include <string>

struct address_storage{
    std::string city;
    std::string street;
    int house;
    int apartament;
    int zip_code;
};

void designe_struct(const std::string &city, const std::string &street,
const int &house, const int &apartament, const int &zip_code, address_storage &test){
    test.city = city;
    test.street = street;
    test.house = house;
    test.apartament = apartament;
    test.zip_code = zip_code;
}

void print_address_storage(const address_storage &test){
    std::cout << "City: " << test.city << "\nStreet: " << test.street << "\nHouse: " 
    << test.house << "\nApartament: " << test.apartament << "\nZip-code: " << test.zip_code << '\n' << '\n';
}

int main(){
    address_storage test_first;
    address_storage test_second;
    designe_struct("Moscow", "Sofiyskaya", 37, 1, 236-123, test_first);
    designe_struct("Piter", "Moscovskaya", 23, 2, 234-654, test_second);
    print_address_storage(test_first);
    print_address_storage(test_second);
    return 0;
}