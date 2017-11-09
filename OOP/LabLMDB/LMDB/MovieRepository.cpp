//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//
#include "MovieRepository.h"
#include <string>
#include "Exceptions.h"

using namespace std;
int Repository::find(const Movie& m)
{
    int pos = -1;
    int pos2 = 0;
    for (auto it : movies)
    {
        if (it.getGenre() == m.getGenre() && it.getTitle() == m.getTitle())
            pos = 0;
        if (pos == -1)
            pos2++;
    }
    if (pos == -1) return -1;
    return pos2;
}

int Repository::testExist(const Movie& m)
{
    int pos = -1;
    int pos2 = 0;
    for (auto it : movies)
    {
        if (it.getGenre() == m.getGenre())
            pos = 0;
        if (pos == -1)
            pos2++;
    }
    if (pos == -1) return -1;
    return pos2;
}

void Repository::writeToFile()
{
    std::ofstream fout("Movies.txt");
    
    if (! fout.is_open())
        throw FileException("The file could not be opened!");
    
    for (auto it : this->movies)
        fout << it;
    fout.close();
}

void Repository::readFromFile()
{
    std::ifstream fin("Movies.txt");
    
    if (! fin.is_open())
        throw FileException("The file could not be opened!");
    
    Movie m;
    
    while (fin >> m){
        this->movies.push_back(m);
    }
    fin.close();
}

void Repository::addMovie(const Movie& m)
{
    if (this->find(m) == -1)
        this->movies.push_back(m);
    else
        try
    {
        throw DuplicateMovieException();
    }
    catch (InexistenMovieException& e) {}
}

void Repository::deleteMovie(const Movie& m)
{
    int pos = this->find(m);
    if (pos != -1)
    {
        this->movies.erase(movies.begin() + pos);
    }
    else
        throw InexistenMovieException{};
}

void Repository::updateMovie(const Movie& m)
{
    if (this->find(m) != -1)
    {
        this->deleteMovie(m);
        this->addMovie(m);
    }
    else
        throw InexistenMovieException{};
}

Movie Repository::findByGenreAndTitle(const std::string& genre, const std::string& title)
{
    for (auto m : this->movies)
    {
        if (m.getGenre() == genre && m.getTitle() == title)
            return m;
    }
    
    throw InexistenMovieException{};
}

std::vector<Movie> Repository::getAll()
{
    return this->movies;
}



/*

            Commented varianta cu repository Dynamic vector
 
*/
//int Repository::addMovie(const Movie& m)
//{
//	if (this->movies.testExist(m) == -1)
//	{
//		this->movies = this->movies + m;
//		return 1;
//	}
//	return 0;
//}
//
//int Repository::deleteMovie(const Movie& m)
//{
//	if (this->movies.testExist(m) != -1)
//	{
//		this->movies.deleteM(m);
//		return 1;
//	}
//	return 0;
//}
//
//int Repository::updateMovie(const Movie& m)
//{
//	if (this->movies.testExist(m) != -1)
//	{
//		this->movies.update(m);
//		return 1;
//	}
//	return 0;
//}
//
//int Repository::testExistInRepo(const Movie& m)
//{
//	int res = this->movies.testExist(m);
//	return res;
//}
//
//int Repository::testExistInRepoByPresenter(const Movie& m)
//{
//	int res = this->movies.testExistByGenre(m);
//	return res;
//}
//
//int Repository::getSizeRepo()
//{
//	return this->movies.getSize();
//}
//
//Movie Repository::findByGenreAndTitle(const std::string& genre, const std::string& title)
//{
//	Movie* moviesInDynamicArray = this->movies.getAllElems();
//	if (moviesInDynamicArray == NULL)
//		return Movie{};
//
//	for (int i = 0; i < this->movies.getSize(); i++)
//	{
//		Movie m = moviesInDynamicArray[i];
//		if (m.getGenre() == genre && m.getTitle() == title)
//			return m;
//	}
//
//	return Movie{};
//}
//
//
//void Repository::writeToFile()
//{
//    std::ofstream fout("Movies.txt");
//    
//    if (! fout.is_open())
//        throw FileException("The file could not be opened!");
//    
//    for (auto it : this->movies)
//        fout << it;
//    fout.close();
//}
//
//void Repository::readFromFile()
//{
//    std::ifstream fin("Movies.txt");
//    
//    if (! fin.is_open())
//        throw FileException("The file could not be opened!");
//    
//    Movie m;
//    while (fin >> m)
//        this->movies.push_back(m);
//    fin.close();
//}
