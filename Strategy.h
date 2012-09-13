//
//  Strategy.h
//  StrategyPattern
//
//  Created by Dannion on 12-9-13.
//  Copyright (c) 2012年 dannionQ. All rights reserved.
//

#ifndef __StrategyPattern__Strategy__
#define __StrategyPattern__Strategy__

#include <iostream>
//Abstract Strategy Class
class Strategy
{
public:
    Strategy(){;}
    virtual ~Strategy(){;}
    
    virtual void algorithmInterface() = 0;
};
//Concrete Strategy Class
class StrategyA : public Strategy
{
public:
    StrategyA(){;}
    ~StrategyA(){;}
    
    void algorithmInterface(){std::cout<<"AlgorithmA has been executed!!"<<std::endl;}
};
//Concrete Strategy Class
class StrategyB : public Strategy
{
public:
    StrategyB(){;}
    ~StrategyB(){;}
    
    void algorithmInterface(){std::cout<<"AlgorithmB has been executed!!"<<std::endl;}
};

#endif /* defined(__StrategyPattern__Strategy__) */
