#pragma once
#include <string>
using namespace std;
class Student {
private:
	string nume;
	string prenume;
	float media;
public:
	Student() = default;

	Student(string _nume, string _prenume, float _medie) : nume{ _nume }, prenume{ _prenume }, media{ _medie } {};
	Student(const Student& st) {
		nume = st.nume;
		prenume = st.prenume;
		media = st.media;
	}
	Student operator =(const Student& st) {
		nume = st.nume;
		prenume = st.prenume;
		media = st.media;
		return st;
	}

	bool operator>(const Student other) {
		return (media > other.media);
	}
	bool operator<(const Student other) {
		return (media < other.media);
	}
	friend std::ostream& operator<<(std::ostream &os, Student &st) {
		os << st.nume << " " << st.prenume << " " << st.media;
		return os;
	}

	string getNume() {
		return nume;
	}
	string getPrenume() {
		return prenume;
	}
	float getMedia() {
		return media;
	}



};