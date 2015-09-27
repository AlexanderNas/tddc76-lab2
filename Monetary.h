// Monetary.h

#include <iostream>
#include <string>

#ifndef MONEY_H
#define MONEY_H

class Money
{
public:
    Money() noexcept = default;
    Money(std::string, unsigned int = 0, unsigned int = 0);
    Money(unsigned int, unsigned int = 0);
    Money(const Money&);

    std::string& get_currency() {return currency;} // Varför måste vi ha referens?!
    unsigned int get_units() {return units;}
    unsigned int get_hundredths() {return hundredths;}

    void set_currency(std::string& new_currency) {currency = new_currency;}
    void set_units(unsigned int new_units) {units = new_units;}
    void set_hundredths(unsigned int new_hundredths) {hundredths = new_hundredths;}
    void copy(Money&);
        
    void print(std::ostream&);

    //std::ostream& operator<< (std::ostream&);
    
    void operator= (Money&); // Verkar fungera även utan överlagring?!

private:
    std::string currency{""};
    unsigned int units{0};
    unsigned int hundredths{0};
};

#endif

//#ifndef <<_H
//#define <<_H

std::ostream& operator<< (std::ostream&, Money&);

//#endif

//void operator= (Money&, const Money&);
