class Person
{
private:
    char m_name[100];
    unsigned short m_age;
    double m_score;    
public:   
    Person()
    :m_name("Nemo"),m_age(100),m_score(0)
    {
    };

    Person(char* pName, unsigned short age, double score);    
    ~Person();    
   const char* GetName() const;
    void SetName(char* pName);
    unsigned short GetAge() const;
    void SetAge(unsigned short age);
    double GetScore() const;
    void SetScore(double score);
};


