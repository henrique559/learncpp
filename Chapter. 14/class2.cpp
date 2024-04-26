#include <iostream>



class Date 
{
    private:
        int m_year;
        int m_month;
        int m_day;
    
        
    public:
        Date(const int& year, const  int& month, const int& day)
        {
            m_year = {year};
            m_month = {month};
            m_day = {day};
        }
        ~Date()
        {
            std::cout << "Feliz aniversário!\n";
        }

        void print() const
        {        
            std::cout << Year() << '/' << Month() << '/' << Day() << '\n'; 
        }
        
        void setYear(const int& s) { m_year = s; }
       
        const int& Year() const { return m_year; }

        const int& Month() const { return m_month; }

        const int& Day() const { return m_day; }
};


int main()
{
    // C++ Não permite chamar funções que não sejam const de classes const
    Date birthday { 2005, 2, 3 };
    birthday.print();
}

