#include <iostream>
#include <vector>
#include <algorithm>
#include <ctype.h>

using namespace std;

void CheckTelNumber(string numberStr);

int main() 
{ 
    string tel1="+7(095)555-44-3Z";
    try
    {
        CheckTelNumber(tel1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}


void CheckTelNumber(string numberStr)
{
    if(numberStr.length()!=16)
        throw invalid_argument("Phone must contain 16 characters");
    for (size_t i = 0; i < 16; i++)
    {        
        switch (i)
        {
            case 0:
                if(numberStr[i]!='+')
                    throw invalid_argument("The first character must be equal to plus");
                break;
            case 2:
                if(numberStr[i]!='(')
                    throw invalid_argument("No brackets");
                break;
            case 6:
                if(numberStr[i]!=')')
                    throw invalid_argument("No brackets");
                break;
            case 10:
            case 13:
                if(numberStr[i]!='-')
                    throw invalid_argument("No dash");
                break;
            default:
                if(!isdigit(numberStr[i]))
                    throw invalid_argument("No digit");
                break;
        }
    }   
    
}
