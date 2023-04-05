#pragma once

#ifndef CASTEROID_HPP
#define CASTEROID_HPP

#include <cmath>
#include <random>
#include <SFML/Graphics.hpp>
 
#include "CShape.hpp"

class CAsteroid : public CShape{
private:
public:
    CAsteroid();
    ~CAsteroid();

    void createAsteroidShape();

};

#endif