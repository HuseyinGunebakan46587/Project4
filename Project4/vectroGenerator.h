#include <vector>
#include <ctime>

template <typename T>
std::vector<T> generateRandomVector(size_t n) {
    //static_assert(std::is_arithmetic<T>::value, "T must be an arithmetic type (int, float, etc.).");

    std::vector<T> result;
    result.reserve(n); // Reserve memory for efficiency

    // Seed the random number generator (only once)
    static bool seeded = false;
    if (!seeded) {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        seeded = true;
    }

    for (size_t i = 0; i < n; ++i) {
        result.push_back(std::rand());
    }

    return result;
}