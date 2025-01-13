#include <iostream>
#include <string>

using namespace std;

struct info{
    string name;
    string phone_num;
    string address;
};

info get_new_info() {
    info new_info;
    new_info.name = "";
    new_info.phone_num = "";
    new_info.address = "";
    return new_info;
}

int main() {

    info new_info = get_new_info();


    cout << "name: ";
    getline(cin, new_info.name, '\n');

    cout << "phone number: ";
    getline(cin, new_info.phone_num, '\n');

    cout << "address: ";
    getline(cin, new_info.address, '\n');

    cout << "-----------------------------" << endl;
    cout << "name: " << new_info.name << endl;
    cout << "phone_num: " << new_info.phone_num << endl;
    cout << "address: " << new_info.address << endl;

}

