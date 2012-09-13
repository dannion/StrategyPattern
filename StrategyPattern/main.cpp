//
//  main.cpp
//  StrategyPattern
//
//  Created by Dannion on 12-9-13.
//  Copyright (c) 2012年 dannionQ. All rights reserved.
//

#include <iostream>
#include "Context.h"
//Client
int main(int argc, const char * argv[])
{

    Context* cntext = new Context(new StrategyA);
    cntext->contextInterface();
    
    delete cntext;

    cntext = new Context(new StrategyB);
    cntext->contextInterface();
    
    delete cntext;

    return 0;
}

