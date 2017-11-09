//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//
#include "UI.h"
#include <string>
#include "MovieValidator.h"
#include "Exceptions.h"

using namespace std;

void UI::printMenu()
{
	cout << "\n===================================================\n" << endl;
	cout << "\t~MENU~\n" <<endl;
	cout << "     1. Admin.👨🏼‍💻" << endl;
	cout << "     2. User.👶🏼" << endl;
	cout << "     0. Exit.🔴" << endl;
}

void UI::printAdminMenu()
{
	cout << "\n   ======================================================\n" << endl;
	cout << "\n\t\t     ~Manage movies repository~\n\t\t\t         🎬👨🏼‍💻🎬\n" << endl;
	cout << "\t\t 1. Add movie." << endl;
	cout << "\t\t 2. Delete movie." << endl;
	cout << "\t\t 3. Update movie." << endl;
	cout << "\t\t 4. Display all." << endl;
	cout << "\t\t 5. Display instances." << endl;
	cout << "\t\t 0. Back.🔴" << endl;
}

void UI::printUserMenu()
{
	cout << "\n   =============================================================\n" << endl;
	cout << "\n\t\t     ~User options~\n\t\t\t   🎬👶🏼🎬\n" << endl;
	cout << "\t\t 1. Display avaible movies from database." << endl;
	cout << "\t\t 2. Display existing movies from database with a given genre." << endl;
	cout << "\t\t 3. Display your movies playlist." << endl;
	cout << "\t\t 4. Add a movie to your playlist." << endl;
	cout << "\t\t 5. Delete a movie from your playlist." << endl;
	cout << "\t\t 6. Watch." << endl;
	cout << "\t\t 7. Watch the next movie." << endl;
	cout << "\t\t 0. Back.🔴" << endl;
}

void UI::addMovieToRepo()
{
	cout << "\n\tEnter the genre: ";
	std::string genre;
	getline(cin, genre);
	cout << "\tEnter the title: ";
	std::string title;
	getline(cin, title);
//	if (this->ctrl.testExistFromRepository(genre, title,"", 0, 0, 0, "") != -1)
//		return 0;
    cout << "\n\tEnter the Year of Release: ";
    std::string year;
    getline(cin, year);
	int likes;
	cout << "\tLikes: ";
	cin >> likes;
	cin.ignore();
	double minutes = 0, seconds = 0;
	cout << "\tEnter the duration: " << endl;
	cout << "\t\tMinutes: ";
	cin >> minutes;
	cin.ignore();
	cout << "\t\tSeconds: ";
	cin >> seconds;
	cin.ignore();
	cout << "\tYoutube link: ";
	std::string link;
	getline(cin, link);

//	return this->ctrl.addMovieToRepository(genre, title,year, likes, minutes, seconds, link);
    try
    {
        this->ctrl.addMovieToRepository(genre, title, year, likes, minutes, seconds, link);
    }
    catch (MovieException& e)
    {
        for (auto s : e.getErrors())
            cout << s;
    }
    
    catch (RepositoryException& e)
    {
        cout << e.what() << endl;
    }
}

void UI::deleteMovieFromRepo()
{
	cout << "\n\tEnter the genre: ";
	std::string genre;
	getline(cin, genre);
	cout << "\tEnter the title: ";
	std::string title;
	getline(cin, title);

//	return this->ctrl.deleteMovieFromRepository(genre, title,"", 0, 0, 0, "");
    try
    {
        this->ctrl.deleteMovieFromRepository(genre, title, " ", 0, 0, 0, "");
    }
    catch (RepositoryException& e)
    {
        cout << e.what() << endl;
    }

}

void UI::updateMovieFromRepo()
{
	cout << "\n\tEnter the genre: ";
	std::string genre;
	getline(cin, genre);
	cout << "\tEnter the title: ";
	std::string title;
	getline(cin, title);
//	if (this->ctrl.testExistFromRepository(genre, title,"", 0, 0, 0, "") == -1)
//		return 0;
    cout << "\n\tEnter the Year of Release: ";
    std::string year;
    getline(cin, year);
	int likes;
	cout << "\tLikes: ";
	cin >> likes;
	cin.ignore();
	double minutes = 0, seconds = 0;
	cout << "\tEnter the duration: " << endl;
	cout << "\t\tMinutes: ";
	cin >> minutes;
	cin.ignore();
	cout << "\t\tSeconds: ";
	cin >> seconds;
	cin.ignore();
	cout << "\tYoutube link: ";
	std::string link;
	getline(cin, link);

//	Movie m{ genre,title,year, likes, Duration{ minutes, seconds }, link };
//	if (this->ctrl.testExistFromPlayListC(m) != -1)
//		this->ctrl.updateMovieToPlayList(genre, title,year, likes, minutes, seconds, link);
//
//	return this->ctrl.updateMovieToRepository(genre, title,year, likes, minutes, seconds, link);
    
    try
    {
        this->ctrl.updateMovieToRepository(genre, title, year, likes, minutes, seconds, link);
    }
    catch (RepositoryException& e)
    {
        cout << e.what() << endl;
    }
    
    Movie m{ genre,title,year, likes, Duration{ minutes, seconds }, link };
    if (this->ctrl.testExistFromPlayListC(m) != -1)
        this->ctrl.updateMovieToPlayList(genre, title,year, likes, minutes, seconds, link);
}

void UI::displayAllMoviesRepo()
{
//	DynamicVector<Movie> v = this->ctrl.getRepo().getMovies();
//	Movie* movies = v.getAllElems();
//	if (movies == NULL)
//		return;
//	if (v.getSize() == 0)
    std::vector<Movie> v = this->ctrl.getRepo().getAll();
    if (v.size() == 0)
	{
		cout << "\n\tThere are no movies in the playlist.\n" << endl;
		return;
	}
	cout << "\n==========================================================================\n" << endl;
	for (int i = 0; i < v.size(); i++)
	{
		Movie m = v[i];
		Duration d = m.getDuration();
		cout << "  Movie Genre: " << m.getGenre() << endl;
		cout << "  Title: " << m.getTitle() << endl;
        cout << "  Year of Release: " << m.getYear() << endl;
		cout << "  Number of likes: " << m.getLikes() << endl;
		cout << "  Duration: " << d.getMinutes() << ":" << d.getSeconds() << endl;
		cout << "\n==========================================================================\n" << endl;
	}
}


void UI::displayAllMoviesPlayList()
{
//	DynamicVector<Movie> v = this->ctrl.getPlayList().getPlayList();
//	Movie* movies = v.getAllElems();
//	if (movies == NULL)
//		return;
//	if (v.getSize() == 0)
    std::vector<Movie> v = this->ctrl.getRepo().getAll();
    if (v.size() == 0)
	{
		cout << "\n\tThere are no movies in the PlayList.\n" << endl;
		return;
	}
	cout << "\n==========================================================================\n" << endl;
	for (int i = 0; i < v.size(); i++)
	{
		Movie m = v[i];
		Duration d = m.getDuration();
		cout << "  Movie Genre: " << m.getGenre() << endl;
		cout << "  Title: " << m.getTitle() << endl;
        cout << "  Year of Release: " << m.getYear() << endl;
		cout << "  Number of likes: " << m.getLikes() << endl;
		cout << "  Duration: " << d.getMinutes() << ":" << d.getSeconds() << endl;
		cout << "\n==========================================================================\n" << endl;
	}
}


void UI::moviesByGenre(Movie mov)
{
//	DynamicVector<Movie> v = this->ctrl.getRepo().getMovies();
//	Movie* movies = v.getAllElems();
//	if (movies == NULL)
//		return;
//	if (v.getSize() == 0)
    std::vector<Movie> v = this->ctrl.getRepo().getAll();
    if (v.size() == 0)
	{
		cout << "\n\tThere are no movies in the repository.\n" << endl;
		return;
	}
	int newCommand = -1;
	while (newCommand != 0)
	{
//		DynamicVector<Movie> v = this->ctrl.getRepo().getMovies();
//		Movie* movies = v.getAllElems();
        
        std::vector<Movie> v = this->ctrl.getRepo().getAll();

		for (int i = 0; i < v.size(); i++)
		{
			if (mov.getGenre() == v[i].getGenre())
			{
				Movie m = v[i];
				Duration d = m.getDuration();
				cout << "\n==========================================================================\n" << endl;
				cout << "  Movie Genre: " << m.getGenre() << endl;
				cout << "  Title: " << m.getTitle() << endl;
                cout << "  Year of Release: " << m.getYear() << endl;
				cout << "  Number of likes: " << m.getLikes() << endl;
				cout << "  Duration: " << d.getMinutes() << ":" << d.getSeconds() << endl;
				cout << "\n\t 1. Like movie." << endl;
				cout << "\t 2. Add to watch list." << endl;
				cout << "\t 3. Next." << endl;
				cout << "\t 0. Exit." << endl;
				cout << "\n\t Your command: ";
				newCommand = 0;
				cin >> newCommand;
				cin.ignore();
				cout << "\n==========================================================================\n" << endl;
				if (newCommand == 0)
					break;
				switch (newCommand)
				{
				case 1:
				{
					this->ctrl.updateMovieToRepository(v[i].getGenre(), v[i].getTitle(), v[i].getYear(), v[i].getLikes() + 1, d.getMinutes(), d.getSeconds(), v[i].getSource());
					this->ctrl.updateMovieToPlayList(v[i].getGenre(), v[i].getTitle(), v[i].getYear(), v[i].getLikes() + 1, d.getMinutes(), d.getSeconds(), v[i].getSource());
					cout << "\n\t Movie liked !\n" << endl;
					break;
				}
				case 2:
				{
					if (this->ctrl.testExistFromPlayListC(v[i]) == -1)
					{
						this->ctrl.addMovieToPlayList(v[i]);
						cout << "\n\t The movie has been added to your playlist !\n" << endl;
					}
					else
						cout << "\n\t\t The movies does already exists in the playlist !" << endl;
					break;
				}
				}
			}
		}
		
	}
}

void UI::addMovieToPlayListUI()
{
	cout << "\n\t\tEnter the genre: ";
	std::string genre;
	getline(cin, genre);
	cout << "\t\tEnter the title: ";
	std::string title;
	getline(cin, title);
	Movie m = this->ctrl.getRepo().findByGenreAndTitle(genre, title);
	if (m.getGenre() == "" && m.getTitle() == "")
	{
		cout << "\n\tThere are no movies avaible with that input.\n" << endl;
		return;
	}
	this->ctrl.addMovieToPlayList(m);
	cout << "\n\tThe movie has been added to your playlist !\n";
}


void UI::deleteMovieToPlayListUI()
{
	cout << "\n\t\tEnter the genre: ";
	std::string genre;
	getline(cin, genre);
	cout << "\t\tEnter the title: ";
	std::string title;
	getline(cin, title);
	Movie m = this->ctrl.getPlayList()->findByGenreAndTitle(genre, title);
	if (m.getGenre() == "" && m.getTitle() == "")
	{
		cout << "\n\tThere are no movies avaible with that input.\n" << endl;
		return;
	}
	this->ctrl.deleteMovieToPlayList(m.getGenre(), m.getTitle());
	cout << "\n\tThe movie has been removed from your playlist !\n";
}


void UI::run()
{
	while (true)
    {
		UI::printMenu();
		int command{ 0 };
		cout << "\n\t Your command: ";
		cin >> command;
		cin.ignore();
		if (command == 0)
			break;

		if (command == 1)
		{
			while (true)
			{
				UI::printAdminMenu();
				int commandAdminRepo{ 0 };
				cout << "\n\t Your command: ";
				cin >> commandAdminRepo;
				cin.ignore();
				if (commandAdminRepo == 0)
					break;
				switch (commandAdminRepo)
				{
				case 1:
				{
//					int res = this->addMovieToRepo();
//					if (res == 1) cout << "\n\t Movie added ! \n" << endl;
//					else cout << "\n\t Movie does already exists !\n" << endl;
                    this->addMovieToRepo();
					break;
				}
				case 2:
				{
//					int res = this->deleteMovieFromRepo();
//					if (res == 1) cout << "\n\t Movie deleted ! \n" << endl;
//					else cout << "\n\t Movie does not exist !\n" << endl;
                    this->deleteMovieFromRepo();
					break;
				}
				case 3:
				{
//					int res = this->updateMovieFromRepo();
//					if (res == 1) cout << "\n\t Movie updated ! \n" << endl;
//					else cout << "\n\t Movie does not exist !\n" << endl;
                    this->updateMovieFromRepo();
					break;
				}
				case 4:
				{
					this->displayAllMoviesRepo();
					break;
				}
				case 5:
					cout << "\n\n \t All instances: " << Movie::allInstances << endl;
					cout << "\t Current instances: " << Movie::currentInstances << endl;
				}
			}
		}
		else
		{
			while (true)
			{
				UI::printUserMenu();
				int commandUserRepo{ 0 };
				cout << "\n\t Your command: ";
				cin >> commandUserRepo;
				cin.ignore();
				if (commandUserRepo == 0)
					break;
				switch (commandUserRepo)
				{
				case 1:
				{
					this->displayAllMoviesRepo();
					break;
				}
				case 2:
				{
					cout << "\n\tEnter the genre: ";
					std::string genre;
					getline(cin, genre);
					if (this->ctrl.testExistFromRepositoryByGenre(genre, "","", 0, 0, 0, "") == -1)
						cout << "\n\t There are no movies by Genre :  " << genre << " !"<< endl;
					else
					{
						Movie m{ genre, "","", 0, Duration{ 0, 0 }, "" };
						moviesByGenre(m);
					}
					break;
				}
				case 3:
				{
					this->displayAllMoviesPlayList();
                    this->ctrl.displayPlayListC();
					break;
				}
				case 4:
				{
					addMovieToPlayListUI();
					break;
				}
				case 5:
				{
					deleteMovieToPlayListUI();
					break;
				}
				case 6:
				{
					if (this->ctrl.getPlayList()->isEmpty())
					{
						cout << "\n\t\tNothing to watch, the playlist is empty." << endl;
						continue;
					}
					this->ctrl.startPlayList();
					Movie m = this->ctrl.getPlayList()->getCurrentMovie();
					cout << "\n\t\tNow watching: " << m.getGenre() << " - " << m.getTitle() << endl;
					break;
				}
				case 7:
				{
					if (this->ctrl.getPlayList()->isEmpty())
					{
						cout << "\n\t\tNothing to watch, the playlist is empty." << endl;
						continue;
					}
					this->ctrl.nextMoviePlayList();
					Movie m = this->ctrl.getPlayList()->getCurrentMovie();
					cout << "\n\t\tNow watching: " << m.getGenre() << " - " << m.getTitle() << endl;
					break;
				}
				}
			}
		}
	}
}
