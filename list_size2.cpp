template <typename T>
int List<T>::size() {
	return size(begin(), end());
}

template <typename T>
int List<T>::size(List<T>::iterator start, List<T>::iterator end) {
	if (start == end) {
		return 0;
	} else {
		return 1+size(++start, end);
	}
}
