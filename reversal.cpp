#include <iostream>
#include <string>
using namespace std;

//I will be reversing a string from user input and a prompt.

string reversal(string input){
    //push_back build string
    string reverse;
    for(int i = input.length()-1; i >= 0 ; i--){
        reverse.push_back(input[i]);
    }
    return reverse;
}



int main(int argc, char *argv[]){
    cout << "Please enter a string to be reversed: ";
    string input;
    getline(cin, input);

    string output = reversal(input);
    cout << "Output from first reversal: " + output + "\n";
}