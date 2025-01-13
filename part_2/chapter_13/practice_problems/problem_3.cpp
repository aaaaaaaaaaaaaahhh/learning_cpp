#include <iostream>

using namespace std;

void prompt_user(string *p_first_name, string *p_last_name) {
    cout << "first name: " << endl;
    cin >> *p_first_name;
    if (p_last_name == NULL) {
        cout << "last name: " << endl;
        cin >> *p_last_name; 
    }
    
}

int main() {
    string first_name;
    string *p_first_name;
    p_first_name = & first_name;    
    string last_name;
    string *p_last_name;
    p_last_name = NULL;    
    prompt_user(p_first_name, p_last_name);
    cout << "gotten first name: " << first_name << endl;
    cout << "gotten last name: " << last_name << endl;
}