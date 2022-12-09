#include <vector>
#include <queue>
#include <string>
#include "Functions.h"
#include <map>
#include <iostream>
#include <iterator>
using namespace std;


//The comments for the functions are in the Functions.h header file, they are very simple functions so I thought commenting too much would be annoying
void moveToRear(queue<int>& tempQ) {
    int temp = tempQ.front();
    tempQ.pop();
    tempQ.push(temp);
}


string isPalindrome(string& str, int start, int end) {
    if (start >= end) {
        return "\nIs Palindrome\n";
    }
    if (str[start] != str[end]) {
        return "\nIs not Palindrome\n";
    }
        return isPalindrome(str, ++start, --end);
}

void printMap(map<string, string> stateMap) {
    cout << endl;
    for (const auto& i : stateMap) {
        cout  << i.first << " " << i.second << endl;
    }

}

void changeCalifornia(map<string, string>& stateMap) {
    stateMap.find("California")->second = "Los Angeles";
}

void findCapital(map<string, string> stateMap) {
    cout << "Enter a state to find its capital: ";
    string state;
    cin >> state;
    if (stateMap.find(state) == stateMap.end()) {
        cout << "State not found in map data.\n";
    }
    else {
        cout << stateMap.find(state)->second << endl;
    }
}