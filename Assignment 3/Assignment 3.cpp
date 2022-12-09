#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include "Functions.h"
#include <map>
using namespace std;


/* ////////GENERAL COMMENT\\\\\\\\\
* Functions.cpp has almost no comments as all the function comments are in Functions.h to reduce cluttering.
* Trees.txt has the answers for questions 3 and 4, The instructions said draw them, and also said provide  a text documents for questions 3 and 4
* so I just drew them in Trees.txt.
*/




int main(){
	/*	 ////////QUEUE SECTION////////
	*This is where the queue moveToRear function is tested, after the while function stops we can see that the first element is now displayed at the 
	*rear of the queue.
	*/
	queue<int> testQueue;
	testQueue.push(10);
	testQueue.push(130);
	testQueue.push(120);
	moveToRear(testQueue);
	while (!testQueue.empty()) {
		cout << testQueue.front() << endl;
		testQueue.pop();
	}
	/* ////////PALINDROME SECTION////////
	* The isPalindrome function returns a string so we can directly use it in cout 
	*/
	string str;
	cin >> str;
	int strL = str.length();
	cout << isPalindrome(str, 0, strL - 1);
	/*//////////MAP SECTION//////////
	* We create a simple string, string map and input the following values into it.
	* Then the printMap function prints out the map, followed by change California which changes Californias value to Los Angeles
	* We printMap again to check if Californias capital has been changed to Los Angeles.
	* Then findCapital is finally used to search for a capital by user entered string.
	*/
	map<string, string> stateDataMap;
	stateDataMap.insert({ "Nebraska", "Lincoln"});
	stateDataMap.insert({ "New York", "Albany" });
	stateDataMap.insert({ "Ohio", "Columbus" });
	stateDataMap.insert({ "California", "Sacramento" });
	stateDataMap.insert({ "Massachusetts", "Boston" });
	stateDataMap.insert({ "Texas", "Austin" });
	printMap(stateDataMap);
	changeCalifornia(stateDataMap);
	printMap(stateDataMap);
	findCapital(stateDataMap);



}
