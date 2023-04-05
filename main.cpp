#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<iostream>
#include<vector>

#include "CAsteroid.hpp"

#define PI 3.14159265

int asteroidCount = 4;
std::vector<CAsteroid> asteroids;

int main(int argc, char const *argv[]){
    for(int i = 0; i < asteroidCount; i++){
        asteroids.emplace_back();
        asteroids[i].createAsteroidShape();
    }


    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();  

        for(int i = 0; i < asteroidCount; i++){
            //Possibility to optimize = return pointer instead of value
            std::vector<sf::Vertex> vertices = asteroids[i].getVertices();
        
            window.draw(&vertices[0], vertices.size(), sf::LinesStrip);     
        }
        
        window.display();
    }

    return 0;
}