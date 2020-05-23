#pragma once
#include <vector>

template<class T>
class IndexedStack {
public:
	bool Pop() {
		if (!D.size()) { return false; }
		D.pop_back();
		return true;
	}

	bool Push(const T& In) {
		D.push_back(In);
		return true;
	}
	const T& Top() {
		return D.back();
	}
	std::size_t Size() {
		return D.size();
	}
	const T& operator [](std::size_t In) {
		return D[In];
	}

	typename std::vector<T>::const_iterator begin() {
		return D.cbegin();
	}
	typename std::vector<T>::const_iterator end() {
		return D.cend();
	}

protected:
	std::vector<T> D;
};