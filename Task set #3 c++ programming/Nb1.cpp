#include <iostream>
using namespace std;

bool YYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysin(int year, int month) {
    if (month == 2) {
        if (YYear(year)) return 29;
        else return 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}


int main() {
    int year1, month1, day1;
    int year2, month2, day2;
    int dd = 0, d = 0;
    cout << "Date1 - ";
    cin >> year1 >> month1 >> day1;
    cout << "Date2 - ";
    cin >> year2 >> month2 >> day2;
    if (year1 * 365 + month1 * 30 + day1 <  year2 * 365 + month2 + day2)
    {
        d = year2;
        year2 = year1;
        year1 = d;

        d = month2;
        month2 = month1;
        month1 = d;

        d = day2;
        day2 = day1;
        day1 = d;
        
    }
    if (month1 > month2)
    {
        while (month1 > month2) 
        {
            dd += daysin(year1, month1);
            month1 = month1 - 1;
        }
    }
    else 
    {
        while (month1 < month2) 
        {
            dd -= daysin(year2, month2);
            month2 = month2 - 1;
        }
    }
    dd += day1 - day2;




    if (year1 > year2)
    {
        while (year1 > year2) 
        {
            if (YYear(year1))
            {
                dd += 366;
                year1 = year1 - 1;
            }
            else
            {
                dd += 365;
                year1 = year1 - 1;
            }
        }
    }
    else 
    {
        while (year1 < year2) 
        {
            if (YYear(year2))
            {
                dd -= 366;
                year2 = year2 - 1;
            }
            else
            {
                dd -= 365;
                year2 = year2 - 1;
            }
        }
    }
    if (dd == 0)
    {
        cout << "Answer Date1 = Date2";
    }
    else
    {
    if (d == 0)
    {
        if (dd > 0)
        {
            cout << "Answer Date1 > Date2 on "<< dd << " days";
        }
        else
        {
            cout << "Answer Date2 > Date1 on "<< dd * - 1<< " days";
        }
    }
    else
    {
        
        if (dd < 0)
        {
            cout << "Answer Date1 > Date2 on "<< dd * -1<< " days";
        }
        else
        {
            cout << "Answer Date2 > Date1 on "<< dd << " days";
        }
    }
    }
    return 0;
}