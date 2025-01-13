#include <iostream>

using namespace std;

void prompt_user(string& first_name, string& last_name) {
    cout << "first name: " << endl;
    cin >> first_name;
    cout << "last name: " << endl;
    cin >> last_name;
    
}

int main() {
    string first_name = "blarg";
    string last_name = "jarglinson";
    prompt_user(first_name, last_name);
    cout << "gotten first name: " << first_name << endl;
    cout << "gotten last name: " << last_name << endl;
}