#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    long float sum = 0;
    int b = 3, c = 3;
    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        sum += b * 2 + c - i;
    }
    auto end_time = chrono::steady_clock::now();
    double elapsed_time = double(chrono::duration_cast <std::chrono::nanoseconds> (end_time - start_time).count());
    cout << "Сумма: " << fixed << sum << endl;
    cout << "Времени прошло: " << elapsed_time/1e9 << " s" << endl;
}
