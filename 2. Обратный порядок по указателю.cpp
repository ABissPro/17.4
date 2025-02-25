#include <iostream>

void reverse(int* arr) {
    int size = 10; //по условию задачи
    for (int i = 0; i < size / 2; ++i) { //первые эл-ты меняются с посл. 
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::cout << "Original array: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    reverse(arr);

    std::cout << "Reversed array: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}
