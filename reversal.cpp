#include <iostream>
#include <string>
using namespace std;

//I will be reversing a string from user input and a prompt.

string reversal(string input){
    //reversed loop
    string output;
    int size = input.length() - 1;
    for(int i = size; i >= 0; i--){
        output += input[i];
    }
    return output;
}



int main(int argc, char *argv[]){
    cout << "Please enter a string to be reversed: ";
    string input;
    getline(cin, input);

    string output = reversal(input);
    cout << "Output from first reversal: " + output + "\n";
}