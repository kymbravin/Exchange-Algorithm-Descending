#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int N = 10000000; // 10 million values
    vector<int> arr(N);

    // Fill with random values
    srand(time(0));
    for (int i = 0; i < N; i++) {
        arr[i] = rand();
    }

    // Exchange algorithm (descending order)
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] < arr[j]) {
                // Swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print first 10 values to verify
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
