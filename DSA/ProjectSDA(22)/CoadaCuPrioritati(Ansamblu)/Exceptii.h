#pragma once
#include "Student.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;

class ExceptieValidatorStudent {
public:
	vector<string> msg;
	ExceptieValidatorStudent(const vector<string> errors) : msg{ errors } {};

	class StudentValidator {
	public:
		void validare(Student& x) {
			vector<string> err;
			if (x.getMedia() < 1) err.push_back("Final grade must be a real number, > 1");

			if (x.getNume == "") err.push_back("Last name must not be an empty string");

			if (x.getPrenume = "") err.push_back("First name must not be an empty string");


		}
	};
};