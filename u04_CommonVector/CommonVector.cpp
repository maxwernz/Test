
#include "CommonVector.h"

#ifndef COMMONVECTOR_CPP_
#define COMMONVECTOR_CPP_

template<typename T, size_t len>
CommonVector<T, len>::CommonVector() {
	_array = new T[len] {};
}

template<typename T, size_t len>
CommonVector<T, len>::~CommonVector() {
	delete[] _array;
}

template<typename T, size_t len>
T& CommonVector<T, len>::operator[] (size_t idx) {
	if (idx >= len) {
		throw std::runtime_error ("CommonVector: Index out of bounds");
	}
	return _array[idx];
}

template<typename T, size_t len>
void CommonVector<T, len>::out(void) const {
	std::cout << "[ ";
	for (size_t i = 0; i < len; ++i) {
		std::cout << _array[i] << " ";
	}
		std::cout << "]" << std::endl;
}



#endif

