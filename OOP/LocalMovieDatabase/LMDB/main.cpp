//
//  main.cpp
//  LMDB
//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//





#include "Movie.h"
#include "UI.h"
#include <assert.h>
#include "PlayList.h"
#include "CSV_Playlist.h"
#include "HTML_Playlist.h"

using namespace std;


//void testRepo()
//{
//    Repository repoForTest{};
//    
//    assert(repoForTest.getSizeRepo() == 0);
//    Movie m{ "Comedy", "Bad Santa 2","2017", 418 ,Duration{ 100, 54 }, "https://www.youtube.com/watch?v=S24LN5h_pac" };
//    //We add to to repo the Movie.
//    assert(repoForTest.addMovie(m) == 1);
//    //Test the length of the repository.
//    assert(repoForTest.getSizeRepo() == 1);
//    //Try to add it again.
//    assert(repoForTest.addMovie(m) == 0);
//    //Fails to add it.
//    assert(repoForTest.getSizeRepo() == 1);
//    //We update t
//    assert(repoForTest.updateMovie(m) != 0);
//    //Test again the length
//    assert(repoForTest.getSizeRepo() == 1);
//    //We delete the Movie
//    assert(repoForTest.deleteMovie(m) == 1);
//    //The repository is empty
//    assert(repoForTest.getSizeRepo() == 0);
//    //Try to delete it again
//    assert(repoForTest.deleteMovie(m) == 0);
//    //The repository is still empty
//    assert(repoForTest.getSizeRepo() == 0);
//}
//
//void testPlayList()
//{
//    PlayList repoForTest{};
//    
//    //The playlist is empty
//    assert(repoForTest.getSizePlayList() == 0);
//    Movie m{ "Comedy", "Bad Santa 2","2017", 418 ,Duration{ 100, 54 }, "https://www.youtube.com/watch?v=S24LN5h_pac" };
//    //We add to to repo the Movie.
//    repoForTest.addPlayList(m);
//    //Test the length of the repository.
//    assert(repoForTest.getSizePlayList() == 1);
//    //The element does exist already in the playlist.
//    assert(repoForTest.testExistInPlayList(m) != -1);
//    //The length it is the same.
//    assert(repoForTest.getSizePlayList() == 1);
//    //We update t
//    repoForTest.updateMoviePlayList(m);
//    //Test again the length
//    assert(repoForTest.getSizePlayList() == 1);
//    //We delete the tutorial
//    repoForTest.deletePlayList(m);
//    //The repository is empty
//    assert(repoForTest.getSizePlayList() == 0);
//    //Try to delete it again
//    repoForTest.deletePlayList(m);
//    //The repository is still empty
//    assert(repoForTest.getSizePlayList() == 0);
//}

int main()
{
    
//        testRepo();
//        testPlayList();
        Repository repo{};
        
        //Adding some movies to the repo
        
//        Movie m{ "Comedy", "Snatch","2000", 500 ,Duration{ 100, 54 }, "https://www.youtube.com/watch?v=Q8jbt0wBkMI" };
//        repo.addMovie(m);
//        Movie m1{ "Comedy", "Rock N Rolla","2004", 450 ,Duration{ 120, 54 }, "https://www.youtube.com/watch?v=TdpR8VuvbCM" };
//        repo.addMovie(m1);
//        Movie m2{ "Fantasy", "Harry Potter and the Sorcerer's Stone","2000", 12000 ,Duration{ 120, 30 }, "https://www.youtube.com/watch?v=VyHV0BRtdxo" };
//        repo.addMovie(m2);
//        Movie m3{ "Horror", "Lights Out","2016", 200 ,Duration{ 80, 10 }, "https://www.youtube.com/watch?v=6LiKKFZyhRU" };
//        repo.addMovie(m3);
//        Movie m4{ "Comedy", "The Wolf of Wall Street","2013", 2000 ,Duration{ 140, 54 }, "https://www.youtube.com/watch?v=pabEtIERlic" };
//        repo.addMovie(m4);
//        Movie m5{ "Thriller", "Fight Club","1998", 2345 ,Duration{ 135, 54 }, "https://www.youtube.com/watch?v=SUXWAEX2jlg" };
//        repo.addMovie(m5);
//        Movie m6{ "Horror", "The Conjuring 2","2016", 300 ,Duration{ 97, 54 }, "https://www.youtube.com/watch?v=KyA9AtUOqRM" };
//        repo.addMovie(m6);
//        Movie m7{ "Action", "Fast And Furious 8","2017", 33000 ,Duration{ 130, 54 }, "https://www.youtube.com/watch?v=uisBaTkQAEs" };
//        repo.addMovie(m7);
//        Movie m8{ "Action", "The Mechanic 2","2016", 2999 ,Duration{ 98, 54 }, "https://www.youtube.com/watch?v=mUxmN3GfM6A" };
//        repo.addMovie(m8);
//        Movie m9{ "Adventure", "Pirates of the Caribbean 5","2017", 2300 ,Duration{ 124, 30 }, "https://www.youtube.com/watch?v=XibzC-e_s5M&t=91s" };
//        repo.addMovie(m9);

        repo.readFromFile();
//        Controller ctrl{ repo };
//        UI ui{ ctrl };
//        ui.run();
        
        cout << "\n\tHow would you like to work?" << endl;
        cout << "\n \t\t1. CSV File" << endl;
        cout << "\t\t2. HTML." << endl;
        int command{ 0 };
        cout << "\n\t Your command: ";
        cin >> command;
        cin.ignore();
        
        if (command == 1)
        {
            CSV p;
            
            Controller ctrl{ repo , &p };
            UI ui{ ctrl };
            ui.run();
            
            p.writeToFilePL();
        }
        else if (command == 2)
        {
            HTML p;
            
            Controller ctrl{ repo , &p };
            UI ui{ ctrl };
            ui.run();
            
            p.writeToFilePL();
        }

    
    
    //	if (_CrtDumpMemoryLeaks())
    //	{
    //		printf("\n    There are some memory leaks !\n\n");
    //		system("pause");
    //	}
    
    cout << "\n\n \t All instances: " << Movie::allInstances << endl;
    cout << "\t Current instances: " << Movie::currentInstances << endl;
    cout << "\n\n\t Have a nice day ! \n\t Thank you for using LMDB !\n\n\t products@andreio.io👨🏼‍💻\n\n" << endl;
    return 0;
}
