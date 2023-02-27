#include <iostream>
#include <string>
using namespace std;

//I will be reversing a string from user input and a prompt.

void reversal(string &input, int n, int i){
    //recursive function
    if(n <= i){
        return;
    }
    swap(input[i], input[n]);
    reversal(input, n-1, i+1);

}



int main(int argc, char *argv[]){
    cout << "Please enter a string to be reversed: ";
    string input;
    getline(cin, input);

    reversal(input, input.length()-1, 0);
    cout << "Output from first reversal: " + input + "\n";
}