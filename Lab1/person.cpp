#include "person.hpp"
#include <string.h>

using namespace std;

Person::Person(char* pName, unsigned short age, double score): m_age(age),m_score(score)
{
    strcpy(m_name,pName);
}

char* Person::GetName()
{
    return m_name;
}
void Person::SetName(char* pName)
{
    strcpy(m_name,pName);

}
unsigned short Person::GetAge()
{
    return m_age;
    
}
void Person::SetAge(unsigned short age)
{
    m_age=age;

}
double Person::GetScore()
{
    return m_score;
}

void Person::SetScore(double score)
{
    m_score=score;
}

Person::~Person()
{
}