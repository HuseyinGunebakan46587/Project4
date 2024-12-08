#include <vector>
template <typename T, typename Compare>
void bubbleSort(std::vector<T>& arr, Compare comp) {
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - 1; ++j) {
            if (comp(arr[j + 1], arr[j])) { // Use the comparison function
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T, typename Compare>
void bubbleSortReduced(std::vector<T>& arr, Compare comp) {
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - 1 - i; ++j) {
            if (comp(arr[j + 1], arr[j])) { // Use the comparison function
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T, typename Compare>
void bubbleSortFlag(std::vector<T>& arr, Compare comp) {
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (comp(arr[j + 1], arr[j])) { // Use the comparison function
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}