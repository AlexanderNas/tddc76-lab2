// Monetary.cc

#include "Monetary.h"

using namespace std;

Money::Money(std::string new_currency, unsigned int new_units, unsigned int new_hundredths)
{
    currency = new_currency;
    //cout << currency << endl;
    units = new_units;
    //cout << units << endl;
    hundredths = new_hundredths;
    if(new_hundredths > 99)
    {
        hundredths = 0;
    }
    //cout << hundredths << endl;
}

Money::Money(unsigned int new_units, unsigned int new_hundredths)
{
    currency = "";
    //cout << currency << endl;
    units = new_units;
    //cout << units << endl;
    hundredths = new_hundredths;
    //cout << hundredths << endl;
}

Money::Money(const Money& orig_money)
{
    currency = orig_money.currency;
    units = orig_money.units;
    hundredths = orig_money.hundredths;
    //cout << currency << endl << units << endl << hundredths << endl;
}

void Money::print(ostream& out_stream)
{
    if(currency != "")
    {
        out_stream << currency << " ";
    }
    cout << units << "." 
         << hundredths << endl;
}

void Money::copy(Money& money2)
{
    set_currency(money2.get_currency());
    set_units(money2.get_units());
    set_hundredths(money2.get_hundredths());
}

//försök som medlem
/*
ostream& Money::operator<< (ostream& out_stream)
{
    print(out_stream);
    return out_stream;
}
*/


ostream& operator<< (ostream& out_stream, Money& money)
{
    money.print(out_stream);
    return out_stream;
}


void Money::operator= (Money& money2)
{
    copy(money2);
}

