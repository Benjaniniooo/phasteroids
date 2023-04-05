#include "CShape.hpp"

CShape::CShape(){
    //m_vertices.push_back(sf::Vertex(sf::Vector2f(100.f, 100.f), sf::Color::White));
    //m_vertices.push_back(sf::Vertex(sf::Vector2f(200.f, 100.f), sf::Color::White));
    //m_vertices.push_back(sf::Vertex(sf::Vector2f(250.f, 200.f), sf::Color::White));
}

CShape::~CShape(){

}

void CShape::loadFromString(){
}
    
void CShape::loadFromFile(){
    
}

void CShape::getCenterVector(){}




std::vector<sf::Vertex> CShape::getVertices(){
    return m_vertices;
}