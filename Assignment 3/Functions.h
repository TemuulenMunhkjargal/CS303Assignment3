#pragma once
#include <vector>
#include <queue>
#include <string>
#include <map>
using namespace std;

//Moves the front element of a queue to the rear, takes queue by reference so returns no value
void moveToRear(queue<int>&);

//Recursive function thjat checks if a string is a palindrome, the two integers are the start (equal to 0) and the length of the string minus 1
string isPalindrome(string&, int, int);

//Prints out a map with key and value
void printMap(map<string, string>);

//Very specific function that changes key named California's value to Los Angeles
void changeCalifornia(map<string, string>&);

//Uses user entered string to find if a key exists, and if it does it outputs the value of the key.
void findCapital(map<string, string>);

