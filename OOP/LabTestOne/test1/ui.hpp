//
//  ui.hpp
//  test1
//
//  Created by Olteanu Andrei on 10/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//

#ifndef ui_hpp
#define ui_hpp

#include <stdio.h>
#include "controller.hpp"

class UI
{
private:
    Controller ctrl;
    
public:
    UI(const Controller& c) : ctrl(c) {}
    
    void run();
    
private:
    static void printMenu();
 
    
    void addProjectToRepo();
    void displayAllProjectsRepo();
    void displayAllCostRepo();
};

#endif /* ui_hpp */
