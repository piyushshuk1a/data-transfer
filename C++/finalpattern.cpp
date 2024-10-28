#include <iostream>

int main() {
    int n;

    // Get the value of n from the user
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int i = 1;

    // Loop to iterate through rows
    while (i <= n) {
        int j = 1;

        // Loop to print numbers in each row
        while (j <= i) {
            std::cout << j << " ";
            j++;
        }

        int k = 1;

        // Loop to print '*' in each row
        while (k <= 2 * (n - i)) {
            std::cout << "* ";
            k++;
        }

        int l = i;

        // Loop to print numbers in reverse order in each row
        while (l >= 1) {
            // Skip printing the last number to avoid duplicate
            if (l != n)
                std::cout << l << " ";
            l--;
        }

        // Move to the next line after completing each row
        std::cout << std::endl;
        i++;
    }

    return 0;
}
