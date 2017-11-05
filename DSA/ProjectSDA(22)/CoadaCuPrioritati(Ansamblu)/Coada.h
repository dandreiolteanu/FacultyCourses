#pragma once
#include <iostream>
#include <algorithm>
#include <cassert>
#include "Student.h"
using namespace std;

template <typename T>
class Coada {
protected:
	int cap;
	int size;
	T* list;
public:
	virtual void push(const T& el) = 0;
	virtual T pop() = 0;
};

template<typename T>
class Heap : public Coada<T> {
public:

	Heap(int _cap) {
		cap = _cap;
		list = new T[cap];
		size = 0;
	};
	Heap(const Heap& other) {
		cap = other.cap;
		list = new T[cap];
		for (int i = 0; i < cap; i++)
			list[i] = other.list[i];
		size = other.size;
	};
	~Heap() {
		delete[] list;
	}
	void push(const T& element)override {
		list[size] = element;
		size++;
		int current = size - 1;
		while (list[current / 2] < list[current]) {
			swap(list[current / 2], list[current]);
			current = current / 2;
		}
	}

	T pop()override {
		T top = list[0];
		list[0] = list[size - 1];

		int current = 0;
		int max;
		if (list[current] < list[2 * current])
			max = current * 2;
		else max = current;
		if (list[2 * current + 1] > list[max])
			max = 2 * current + 1;

		while (max != current) {
			swap(list[current], list[max]);
			current = max;
			if (list[current] < list[2 * current])
				max = current * 2;
			else max = current;
			if (list[2 * current + 1] > list[max])
				max = 2 * current + 1;

		}
		size = size - 1;
		return top;
	}
	int getSize() {
		return size;
	}

	
};


