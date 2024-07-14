#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> ar;
    int my;
    while (std::cin >> my) {
        ar.push_back(my);
    }

    int n = ar.size();

    //เรียงค่าน้อยไปหามาก
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ar[j] < ar[j + 1]) {
                std::swap(ar[j], ar[j + 1]);
            }
        }
    }

    for (int u = 0; u < n; u++) {
        std::cout << ar[u] << " ";
    }
    std::cout << std::endl;
    return 0;
}
