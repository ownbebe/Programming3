#include <iostream>
#include <stdio.h>

using namespace std;
/*There are simpler ways to reverse a string, but I believed this was a good 
opportunity to practice arrays in C++ since I have no experience with the language*/
int main()
{
    string input;
    string reverseString = "";

    for(int i = 0; i < 3; i++)
    {
        cout<< "Word: "<< i + 1<< endl;
        cout<< "Enter a string: \n";
        getline(cin, input);

        cout<< "You entered: "<< input << endl;
        //convert input string to character array
        char inputArray[input.length() + 1];

        for(int z = 0; z < sizeof(inputArray); z++)
        {
            inputArray[z] = input[z];
        }
        char reverse[input.length() + 1];

        int counter = 0;
        for(int j = input.length(); j >= 0; j--)
        {
            reverse[counter] = inputArray[j];
            counter++;
        }

        //convert array to string
        string reverseString = "";
        for(int k = 0; k < sizeof(reverse); k++)
        {
            reverseString += reverse[k];
        }
        cout<< "Your string reversed is: " << reverseString << endl << endl;
    }
    return 0;
}