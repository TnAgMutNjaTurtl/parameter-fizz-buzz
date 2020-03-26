#include <iostream>
#include <string.h>
using namespace std;

int argIn;
char isLetOrNah;
//char input_char;

// char charCheck() 
// { 
//     //CHECKING FOR ALPHABET 
//     if ((input_char >= 65 && input_char <= 90) || (input_char >= 97 && input_char <= 122))
//     {
//         cout << " Alphabet ";
//         return 0;
//     }
  
//     //CHECKING FOR DIGITS 
//     else if (input_char >= 48 && input_char <= 57)
//     {
//         cout << " Digit ";
//         return 0;
//     }
  
//     //OTHERWISE SPECIAL CHARACTER 
//     else
//     {
//         cout << " Special Character ";
//         return 0;
//     }

// } 

int divisBy()
{
    if(argIn == 0)
    {
        return 0;
    }
    if(argIn != 0)
    {
        if((argIn % 3 == 0) && (argIn % 4 == 0))
        {
            cout << argIn << " fizz buzz" << endl;
        }
        else if(argIn % 3 == 0)
        {
            cout << argIn << " fizz" << endl;
        }
        else if(argIn % 4 == 0)
        {
            cout << argIn << " buzz" << endl;
        }
        else
        {
            cout << argIn << endl;
        }
    }
}

int main(int argc, char * argv[])
{
    char charCheck;
    if((argc > 1) && (argc < 3))
    {
        for(int i; i < argc; i++)
        {
            isLetOrNah = argv[i][0];
            if(isalpha(isLetOrNah))
            {
               cout << "You gave me one parameter, but it is not an integer!" << endl;
            }
            // charCheck(); ascii values that are spec characters not "-" //32-44 //45-47 //58-64 //91-96 //123-126
            
            // charCheck = argv[i][0];
            // if(((charCheck >= 33) && (charCheck <= 44)) || ((charCheck >= 45) && (charCheck <= 47)) || ((charCheck >= 58) && (charCheck <= 64)) || ((charCheck >= 91) && (charCheck <= 96)) || ((charCheck >= 123) && (charCheck <= 126)))
            // {
            //     cout << "You gave me one parameter, but it is not an integer!" << endl;
            // }

            argIn = atoi(argv[i]);
            if(argIn < 0)
            {
                divisBy();
                while(argIn < 0)
                {
                    argIn++;
                    divisBy();
                }
            }

            if(argIn > 0)
            {
                divisBy();
                while(argIn > 0)
                {
                    argIn--;
                    divisBy();
                }
            }
        }
    }
    if(argc <= 1 || argc >= 3)
    {
        cout << "Give me one parameter that is a number" << endl;
    }

    return 0;
}


  
