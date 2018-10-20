/**

Description: Prompts the user for an input of the type string
             Prompts the user for a char
             counts how many times the char is contained in the string and outputs the result
Filename: main.cpp
Author: Matthew Carlson
Date: 10/20/2018

*/
#include<iostream>
#include<string>

using namespace std;

string get_string(string prompt);
int char_count(string s, char c);

int main()
{
    string input;
	char test;

	input = get_string("Please input the string: ");
	cout << input;
	cout << "Please eneter the char: ";
	cin >> test;
	cout << "The string: " << input << " uses the char " << test << " " << char_count(input, test) << " times";
    return 0;
}
/*
Prompts the user for an input of the type string
@peram prompt the string output to the user
@return returns the string input by the user
*/
string get_string(string prompt)
{
	string input;
	
	cout << prompt;
	getline(cin, input);
	return input;

}
/*
counts how many times a char is contained in a string
@peram s the string to be checked
@peram c the char to be counted
@return returns the number of times c is contained in s
*/
int char_count(string s, char c)
{
	int length = s.length(); // sets length to the length of the string
	int count = 0;
	char current;
	int times = 0;
	while(count < length)
	{
		current = s.at(count);

		if(current == c)
		{
			times ++;
		}
		count ++;
	}
	return times;
}
