#include "MovieValidator.h"

using namespace std;

MovieException::MovieException(std::vector<std::string> _errors): errors{ _errors }
{
}

std::vector<std::string> MovieException::getErrors() const
{
	return this->errors;
}

void MovieValidator::validate(const Movie& m)
{
	vector<string> errors;
	if (m.getGenre().size() < 1)
		errors.push_back("\n\t\tThe genre can't be NULL !\n");
	if (m.getTitle().size() < 1)
		errors.push_back("\n\t\tThe title can't be NULL !\n");
	if (m.getSource().size() < 1)
		errors.push_back("\n\t\tThe source can't be NULL !\n");
    if (m.getYear().size() < 1)
        errors.push_back("\n\t\tThe year can't be NULL !\n");
	if (m.getLikes() < 0)
		errors.push_back("\n\t\tThe movie can't have negative numbers of likes !\n");
	if (m.getDuration().getMinutes() < 0)
		errors.push_back("\n\t\tThe minutes can't be negative !\n");
	if (m.getDuration().getSeconds() < 0)
		errors.push_back("\n\t\tThe seconds can't be negative !\n");	
	
	if (errors.size() > 0)
		throw MovieException(errors);
}
