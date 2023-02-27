#include <iostream>
#include <string>
using namespace std;

//I will be reversing a string from user input and a prompt.

void reversal(string &input, int i){
    //1 pointer, similar to recursion implementation, but psses only 1 additional argument
    if(i > input.length() - 1 - i){
        return;
    }
    swap(input[i],input[input.length() - i - 1]);
    i++;
    reversal(input, i);
}



int main(int argc, char *argv[]){
    cout << "Please enter a string to be reversed: ";
    string input;
    getline(cin, input);

    reversal(input, 0);
    cout << "Output from first reversal: " + input + "\n";
}