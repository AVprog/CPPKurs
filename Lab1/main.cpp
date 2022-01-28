#include "person.hpp"
#include <iostream>
#define N 4

using namespace std;

void SortPersonByScore(Person* pPerson);
void PrintAllPrson(Person* pPerson);

int main()
{
    Person masPerson[N]={Person("Ivan",33,4.5),
                         Person("Natacha",23,8.2),
                         Person("Chris",48,6.2)
                         };    
    PrintAllPrson(masPerson);
    SortPersonByScore(masPerson);
    PrintAllPrson(masPerson);
    return 0;
}

void SortPersonByScore(Person* pPerson)
{
    for (int i = 0; i < N; i++)
    {
        for (int  j = 0; j < N; j++)
        {
            if(pPerson[i].GetScore() > pPerson[j].GetScore())
            {
                Person temp=pPerson[i];
                pPerson[i]=pPerson[j];
                pPerson[j]=temp;
            }            
        }        
    }   
}

void PrintAllPrson(Person* pPerson)
{
    for (int i = 0; i < N; i++)
    {
        Person person=pPerson[i];
        cout<<"Name:"<<person.GetName()<<" ";
        cout<<"Age:"<<person.GetAge()<<" ";
        cout<<"Score:"<<person.GetScore()<<endl;
    }
    cout<<"*********************"<<endl;
}
