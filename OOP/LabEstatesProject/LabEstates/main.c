//
//  main.c
//  Lab4
//
//  Created by andreio on 06.03.2017.
//  Copyright © 2017 Andrei. All rights reserved.
//

#include "repository.h"
#include "UI.h"

int main()
{
    testEstateRepo();
    
    EstateRepo repo = createRepo();
    Controller ctrl = createController(&repo);
    addEstate(&ctrl, "house", "Baker", 10, 1000);
    addEstate(&ctrl, "apartment", "Titulescu", 20, 200);
    addEstate(&ctrl, "house", "Calea", 30, 3000);
    addEstate(&ctrl, "penthouse", "Luxury", 169, 99999999);
    
    UI ui = createUI(&ctrl);
    
    startUI(&ui);
    
    
    return 0;
}
