#include "Short.h"
#include "vectroGenerator.h"
#include <iostream>
#include"benchmark.h"

int main() {
	auto comparison = [](int a, int b) {
		return a < b;

		};

	std::vector<int> v = generateRandomVector<int>(20);
	
	
	benchmark <std::chrono::microseconds> b;
	
	bubbleSort(v, comparison);
	size_t duration=b.elapsed();


	std::cout << std::endl;
	std::cout << duration << std::endl;
}	