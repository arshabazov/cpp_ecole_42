#include <algorithm>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T &t, int item) {
	typename T::iterator it = std::find(t.begin(), t.end(), item);
	if (it != t.end())
		return it;
	else
		throw std::runtime_error("Item not found");
}
