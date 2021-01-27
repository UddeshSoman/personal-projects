/**Text to ASCII code generator.
This program takes in text messages as input and provides an array of binary
encoded version (8-Bit) of the text.**/

#include <iostream>
using namespace std;
void manualConverter(string input);
void textFromFileConvereter();
int main(){
    cout << "Welcome to the ASCII converter." << endl;
    cout<<"This program takes in text messages as input and provides an array of binary encoded version (8-Bit) of the text."<<endl;
    int work = 1;
    int cont;
    do{
        int entrytype;
        int valid = 1;
        do{
            cout << "How would you like to enter text. \nPress 1 to typein.\nPress 2 to scan text file"<< endl;
            cout << "Enter Choice: ";
            cin >> entrytype;
            if (entrytype == 1 || entrytype == 2){
                valid = 0;
                break;
            }
            else{
                cout << "Invalid input Enter again:"<< endl;
                valid = 1;
            }
        }while(valid > 0);
        string text;
        switch(entrytype){
        case 0:

            cout << "Type the text You would like to convert."<< endl;
            getline(cin, text);
            //manualConverter(text);
            break;
        case 1:
           // textFromFileConvereter();
            break;
        default:
            break;
        }

        cout<< "Would you like to continue.\nPress 1 for yes.\nPress any other key to exit.\n Enter choice : ";
        cin >> cont;
        if (cont == 1)
            continue;
        else
            work = 0;
        cout << "done";
    }while (work > 0);
    return 0;
}


