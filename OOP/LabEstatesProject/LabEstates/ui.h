//
//  ui.h
//  Lab4
//
//  Created by andreio on 06.03.2017.
//  Copyright © 2017 Andrei. All rights reserved.
//

#ifndef ui_h
#define ui_h

#include <stdio.h>
#include "controller.h"
typedef struct
{
    Controller* ctrl;
} UI;

UI createUI(Controller* c);

void startUI(UI* ui);

#endif /* ui_h */
