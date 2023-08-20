#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void addName()
{
    ofstream myFile;
    string inputName = "";
    string dummy = "";

    myFile.open("CSC450_CT5_mod5.txt", ios:: app);
    if(!myFile)
    {
        cout << "File not found.\n";
    }

    std:: cout << "Enter a name: \n";
    getline(cin, dummy);
    getline(cin, inputName);

        
    myFile << endl << inputName;
    myFile.close();
}

void findName(string name)
{
    ifstream myFile;
    string fileName;
    string currentLine = "";
    bool nameFound = false;

    fileName = "CSC450_CT5_mod5.txt";
    myFile.open(fileName.c_str());
    std:: string line;
    while(std:: getline(myFile, line))
    {
        if(line == name)
        {
            nameFound = true;
            break;
        }
    }
    if(nameFound == true)
    {
        std:: cout << "The name was found in the file!\n";

        ofstream File;
        File.open("CSC450_CT5_mod5_Not_Found.txt", ios:: app);
        File << "Name found: " << name << endl;
        File.close();
    }
    else
    {
        std:: cout << "The name was not found in the file.\n";
        
        ofstream File;
        File.open("CSC450_CT5_mod5_Not_Found.txt", ios:: app);
        File << "Name not found: " << name << endl;
        File.close();
    }
    myFile.close();
}

int main()
{
    bool flag = true;
    while(flag)
    {
        int input = 0;
        string searchName = "";
        string searchLastName = "";
        string dummy = "";
        std:: cout << "Would you like to enter a name?\n";
        std:: cout << "Enter 1 for yes, 2 for no, and 3 to exit: \n";
        cin >> input;

        if(input == 1)
        {
            addName();
        }

        else if(input == 2)
        {
            std:: cout << "SEARCH IS CASE SENSITIVE\n";
            std:: cout << "Enter the name to search for: \n";
            getline(cin,dummy);
            getline(cin, searchName);
            
            findName(searchName);
        }

        else if(input == 3)
        {
            std:: cout << "Thank you, good bye.\n";
            return 0;
        }

        else
        {
            std:: cout << "Invalid input, try again.\n";
        }
    }
    return 0;
}