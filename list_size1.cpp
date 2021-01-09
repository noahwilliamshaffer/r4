template <typename T>
int List<T>::size() {
	return size(head->next);
}

template <typename T>
int List<T>::size(Node<T> *p) {
	if (p == tail) {
		return 0;
	} else {
		return 1+size(p->next);
	}
}
