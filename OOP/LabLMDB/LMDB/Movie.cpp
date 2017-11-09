//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//
#include "Movie.h"

int Movie::currentInstances = 0;
int Movie::allInstances = 0;

Movie::Movie() : title(""), genre(""),year(""), likes(0) , duration(Duration()), source("")
{
	this->allInstances++;
	this->currentInstances++;
}

Movie::Movie(const std::string& genre, const std::string& title,const std::string& year, const int likes, const Duration& duration, const std::string& source)
{
	this->genre = genre;
	this->title = title;
    this->year = year;
	this->likes = likes;
	this->duration = duration;
	this->source = source;
	this->allInstances++;
	this->currentInstances++;
}

Movie::~Movie()
{
	this->currentInstances--;
}

Movie::Movie(const Movie& m)
{
	this->genre = m.genre;
	this->title = m.title;
    this->year = m.year;
	this->likes = m.likes;
	this->duration = m.duration;
	this->source = m.source;
	this->allInstances++;
	this->currentInstances++;
}

void Movie::play()
{
    std::string source1;
    source1 = this->source;
    std::string command = "open " + source1;
    system(command.c_str());
}
std::vector<std::string> tokenize(std::string s, char del)
{
    std::stringstream ss(s);
    std::string aux;
    std::vector<std::string> res;
    while (getline(ss, aux, del))
        res.push_back(aux);
    return res;
}

std::istream & operator >> (std::istream & is, Movie & m)
{
    std::string s;
    std::cout <<s;
    getline(is, s);
    std::vector<std::string> res = tokenize(s, ',');
    if (res.size() != 7)
        return is;

    m.genre = res[0];
    m.title = res[1];
    m.year = res[2];
    m.likes = atoi(res[3].c_str());
    m.duration.setMinutes(atoi(res[4].c_str()));
    m.duration.setSeconds(atoi(res[5].c_str()));
    m.source = res[6];
    return is;
}

std::ostream & operator<<(std::ostream & os, Movie & m)
{
    os << m.genre << "," << m.title << "," << m.year << "," << m.likes << "," << m.duration.getMinutes() << "," << m.duration.getSeconds() << "," << m.source << "\n";
    return os;
}

