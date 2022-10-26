#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template <typename Big_Black_Noir>
void swap(Big_Black_Noir &a, Big_Black_Noir &b) {
	Big_Black_Noir tmp = a;

	a = b;
	b = tmp;
}

template <typename T>
const T &min(const T &a, const T &b) {
	return a < b ? a : b;
}

template <typename T>
const T &max(const T &a, const T &b) {
	return a > b ? a : b;
}

#endif