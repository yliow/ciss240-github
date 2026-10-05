#include <iostream>
#include "Date.h"

int main()
{
    Date today(2026, 10, 5);
    Date yesterday = Date(2026, 10, 4);
    Date * lastyear = new Date(2025, 10, 5);
    //today.init(2025, 10, 5);
    today.print();
    //yesterday.init(2025, 10, 4);
    yesterday.print();

    today.add_m_d(1, 5);
    today.print();

    // Date ONEDAY;
    // ONEDAY.init(0, 0, 1);
    // today.add_date(ONEDAY);

    std::cout << today.year() << '\n';
    return 0;
}
