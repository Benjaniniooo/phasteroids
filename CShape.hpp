#pragma once

#ifndef CSHAPE_HPP
#define CSHAPE_HPP

#include <vector>
#include <SFML/Graphics.hpp>


class CShape{
protected:
   std::vector<sf::Vertex> m_vertices;
   
   sf::Vector2f m_position;
   sf::Vector2f m_velocity;
   sf::Vector2f m_acceleration;
   

public:
    CShape();
    ~CShape();

    void loadFromString();
    void loadFromFile();

    void getCenterVector();

    std::vector<sf::Vertex> getVertices();
};

#endif