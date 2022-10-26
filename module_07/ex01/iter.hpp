#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(const T* arr, const int length, void(*func)(const T&)) {
	for (int i = 0; i < length; ++i) {
		func(arr[i]);
	}
}

#endif

