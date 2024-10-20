#include <iostream>
#include <cmath> 
using namespace std;

int findCount(int arr[], int length, int num, int diff) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (abs(arr[i] - num) <= diff) {
            count++;
        }
    }
    if (count > 0) {
    return count;
    } 
    else {
    return -1;
}

}

int main() {
    int arr[] = {12, 3, 14, 56, 77, 13};
    int length = sizeof(arr) / sizeof(arr[0]);
    int num = 14;
    int diff = 2;

    int result = findCount(arr, length, num, diff);
    std::cout << "Count of elements with absolute difference less than or equal to " << diff << " with " << num << " is: " << result << std::endl;

    return 0;
}
