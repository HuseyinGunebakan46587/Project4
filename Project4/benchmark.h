#include <chrono>
template <typename D = std::chrono::microseconds>
class benchmark {
public:
	benchmark() {
		start = std::chrono::high_resolution_clock::now();
	}
	typename D::rep elapsed() const
	{
		auto end = std::chrono::high_resolution_clock::now();
		auto result = std::chrono::duration_cast<D>(end - start);
		return result.count();
	}
private:
	std::chrono::high_resolution_clock::time_point start;
};
/*How to use:
* Benchmark<std::chrono::nanoseconds> b;
* function execution
* size_t eleapsed=b.elapsed();
* elapsed - time of function execution
*
*/