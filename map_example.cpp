#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> grades;

    grades["Alice"] = 90;
    grades["Bob"] = 85;

    cout << grades["Alice"];
}
