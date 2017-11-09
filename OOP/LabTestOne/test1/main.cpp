//
//  main.cpp
//  test1
//
//  Created by Olteanu Andrei on 10/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//

#include <iostream>

#include "domain.hpp"
#include "ui.hpp"
using namespace std;

int main()
{
    
    Repository repo{};
    
    // add some projects
    Project p1{"Website", "UBB Cluj",10,3,2017,555,false};
    Project p2{"Game", "EVL PPY", 12,12,2017,3000,true};
    Project p3{"App", "HIP MENU", 13,3,2017,288,true};
    
    repo.addProject(p1);
    repo.addProject(p2);
    repo.addProject(p3);
    
    Controller ctrl{ repo };
    UI ui{ ctrl };
    ui.run();

    
    return 0;
}
