//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//
#pragma once
#include "Controller.h"

class UI
{
private:
	Controller ctrl;

public:
	UI(const Controller& c) : ctrl(c) {}

	UI();

	void run();

private:
	static void printMenu();
	static void printAdminMenu();
	static void printUserMenu();

	void addMovieToRepo();
	void deleteMovieFromRepo();
	void updateMovieFromRepo();
	void displayAllMoviesRepo();
	void displayAllMoviesPlayList();
	void moviesByGenre(Movie m);
	void addMovieToPlayListUI();
	void deleteMovieToPlayListUI();
    void displayPlayListUI() { return this->ctrl.displayPlayListC(); }

};
