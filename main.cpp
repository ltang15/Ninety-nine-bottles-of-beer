#include <iostream>
#include <string>
using namespace std;

string getInteger (int bottles);
int bottles;

int main()
{ // ninety-nine bottles for beer lyrics

    cout << "Type in the number of bottles of beer on wall (0-99) " << endl;
    cin >> bottles;

    while (bottles >= 0)
    {
        string english = getInteger(bottles);
        if(bottles == 1)
        {
            cout << "One bottle of beer on the wall." << endl;
            cout << "One bottle of beer." << endl;
            cout << "Take one down, pass it around." << endl;

        }
        else
        {   cout << english << " bottles of beer on the wall." << endl;
            cout << english << " bottles of beer." << endl;
            cout << "Take one down, pass it around." << endl;

        }
        bottles--;
    }

    return 0;

}

string getInteger (int bottles)
{

    string english = "";

    int ones;
    int tens;
    ones = bottles % 10;
    tens = bottles / 10;

    if(tens > 1)
    {
        switch(tens)
        {
            case 2:
                english += "Twenty";
                break;
            case 3:
                english += "Thirty";
                break;
            case 4:
                english += "Forty";
                break;
            case 5:
                english += "Fifty";
                break;
            case 6:
                english += "Sixty";
                break;
            case 7:
                english += "Seventy";
                break;
            case 8:
                english += "Eighty";
                break;
            case 9:
                english += "Ninety";
                break;

        }

        switch(ones)
        {
            case 1:
                english += " one";
                break;
            case 2:
                english += " two";
                break;
            case 3:
                english += " three";
                break;
            case 4:
                english += " four";
                break;
            case 5:
                english += " five";
                break;
            case 6:
                english += " six";
                break;
            case 7:
                english += " seven";
                break;
            case 8:
                english += " eight";
                break;
            case 9:
                english += " nine";
                break;
        }
    }

    else if(tens == 1)
    {
        switch(ones)
        {
            case 0:
                english += "Ten";
                break;
            case 1:
                english += "Eleven";
                break;
            case 2:
                english += "Twelve";
                break;
            case 3:
                english += "Thirteen";
                break;
            case 4:
                english += "Fourteen";
                break;
            case 5:
                english += "Fifteen";
                break;
            case 6:
                english += "Sixteen";
                break;
            case 7:
                english += "Seventeen";
                break;
            case 8:
                english += "Eighteen";
                break;
            case 9:
                english += "Nineteen";
                break;
        }
    }

    else if(tens == 0)
    {
        switch (ones)
        {
            case 0:
                english += "Zero";
                break;
            case 1:
                english += "One";
                break;
            case 2:
                english += "Two";
                break;
            case 3:
                english += "Three";
                break;
            case 4:
                english += "Four";
                break;
            case 5:
                english += "Five";
                break;
            case 6:
                english += "Six";
                break;
            case 7:
                english += "Seven";
                break;
            case 8:
                english += "Eight";
                break;
            case 9:
                english += "Nine";
                break;
        }
    }

    return english;

}
