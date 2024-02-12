#include <iostream>

int main()
{
    int position;
    int range;
    int gun0_position;
    int gun1_position;
    std::cin >> position >> range >> gun0_position >> gun1_position;

    bool in_range_gun0 = (gun0_position - range <= position
                          && position <= gun0_position + range);

    std::cout << in_range_gun0 << '\n';

    bool in_range_gun1 = (gun1_position - range <= position
                          && position <= gun1_position + range);

    std::cout << in_range_gun1 << '\n';

    bool in_range = in_range_gun0 || in_range_gun1;
    std::cout << in_range << '\n';
    
    return 0;
}
