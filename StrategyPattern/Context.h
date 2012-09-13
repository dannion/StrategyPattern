//
//  Content.h
//  StrategyPattern
//
//  Created by Dannion on 12-9-13.
//  Copyright (c) 2012年 dannionQ. All rights reserved.
//

#ifndef __StrategyPattern__Content__
#define __StrategyPattern__Content__

#include "Strategy.h"
//Context Class
class Context
{
public:
    Context(Strategy* strtgySample);
    ~Context(){;}
    
    void contextInterface();
    
private:
    Strategy* strtgyPointer;
};



#endif /* defined(__StrategyPattern__Content__) */
