#include <iostream>
#include <string>
#include <vector>
using namespace std;

//I will be reversing a string from user input and a prompt.

vector<char> reversal(string input){
    //vector implementation, push_back
    vector<char> reverse;

    for(int i = input.length()-1; i >= 0 ; i--){
        reverse.push_back(input[i]);
    }
    return reverse;
}



int main(int argc, char *argv[]){
    cout << "Please enter a string to be reversed: ";
    string input;
    getline(cin, input);

    vector<char> output = reversal(input);
    cout << "Output from reversal: ";
    for(auto i: output){
        cout << i;
    }
    cout << "\n";
     
}