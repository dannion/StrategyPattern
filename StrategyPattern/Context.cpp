//
//  Content.cpp
//  StrategyPattern
//
//  Created by Dannion on 12-9-13.
//  Copyright (c) 2012年 dannionQ. All rights reserved.
//

#include "Context.h"


Context::Context(Strategy* strategySample)
{
    this->strtgyPointer = strategySample;
}

void Context::contextInterface()
{
    this->strtgyPointer->algorithmInterface();
}

