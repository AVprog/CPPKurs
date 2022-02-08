#include "person.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int SortPerson(vector<Person>& v);

int main()
{
    vector<Person> person_vector={  Person("Ivan",33,4.5),
                                    Person("Natacha",23,8.2),
                                    Person("Chris",48,6.2)
                                };    
   
    auto PrintPerson
    {
        [](Person person)->void
        {
            cout<<"Name:"<<person.GetName()<<" ";
            cout<<"Age:"<<person.GetAge()<<" ";
            cout<<"Score:"<<person.GetScore()<<endl;
        }
    };
    
    for_each(person_vector.begin(),person_vector.end(),PrintPerson);
    int c=SortPerson(person_vector);
    cout<<"***************************"<<endl;
    for_each(person_vector.begin(),person_vector.end(),PrintPerson);
    cout<<"count="<<c<<endl;

    return 0;
}


int SortPerson(vector<Person>& v)
{    
    int count=0;

    auto PredicatPerson
    {
        [&count](Person p1 , Person p2)->bool{
            ++count;
            return p1.GetScore()>p2.GetScore();
        }
    };
    
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if(PredicatPerson(v[i],v[j]))              
            {
                Person temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }            
        }        
    }
    
    return count;
}

