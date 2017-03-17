#ifndef DATE_H_INCLUDED 
#define DATE_H_INCLUDED

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class date {
public:
    friend ostream &operator<<(ostream&, const date&);

    date() = default;
    date(string &ds);

    unsigned y() const { return year; }
    unsigned m() const { return month; }
    unsigned d() const { return day; }

private:
    unsigned year, month, day;
};

const string month_name[] = {"January", "February", "March", "April",
                             "May", "June", "July", "August", "September",
                             "October", "November", "December"};

const string month_abbr[] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "Jul", 
                             "Agu", "Sep", "Oct", "Nov", "Dec"};

const int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

inline int get_month(string &ds, int &end_of_month) {

}
//放弃