#include <iostream>
#include <string>
using namespace std;

//I will be reversing a string from user input and a prompt.

string reversal(string input){
    //loop that swaps the first and last elements
    string copy = input;
    int size = copy.length() - 1;
    for(int i = 0; i <= size/2; i++){
        swap(copy[i],copy[size-i]);    
    }
    return copy;
}



int main(int argc, char *argv[]){
    cout << "Please enter a string to be reversed: ";
    string input;
    getline(cin, input);

    string output = reversal(input);
    cout << "Output from first reversal: " + output + "\n";
}