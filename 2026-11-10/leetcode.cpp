
class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
        {
            return false;
        }
        else if (x == 0)
        {
            return true;
        }
        else
        {
            // compute number of digits in x, store in num_digits
            int num_digits = 0;
            int t = x;
            while (x != 0)
            {
                x /= 10;
                ++num_digits;
            }
            x = t;

            // compare digits in a loop
            int left = num_digits - 1;
            int right = 0;
            bool is_pal = true;
            while (left > right)
            {
                int left_digit = x / int(pow(10, left)) % 10;
                int right_digit = x / int(pow(10, right)) % 10;
                if (left_digit != right_digit)
                {
                    is_pal = false;
                    break;
                }
                --left;
                ++right;
            }
            return is_pal;
        }
    }
};
