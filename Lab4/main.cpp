#include "person.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void HalfCopy(vector<Person>& v1,const vector<Person>& v2);

int main()
{
    vector<Person> person_vector1;
    vector<Person> person_vector2={ Person("Ivan",33,4.5),
                                    Person("Natacha",23,8.2),
                                    Person("Chris",48,6.2),
                                    Person("Masha",33,7.6)
                                };    
    
   
    HalfCopy(person_vector1,person_vector2);
    for(auto p:person_vector1)
    {
        cout<<"Name:"<<p.GetName()<<endl;
    }

    
    return 0;
}

void HalfCopy(vector<Person>& v1,const vector<Person>& v2)
{ 
    v1.insert(v1.begin(),v2.begin()+v2.size()/2,v2.end());
}
