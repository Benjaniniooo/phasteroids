#include "CAsteroid.hpp"

CAsteroid::CAsteroid(){

}

CAsteroid::~CAsteroid(){

}

void CAsteroid::createAsteroidShape(){
    int verticesCount = 10;
    int rotationStep = 360 / verticesCount;

    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist800(1,800);
    std::uniform_int_distribution<std::mt19937::result_type> dist600(1,600);
    std::uniform_int_distribution<std::mt19937::result_type> dist100(50,100);

    int x = dist800(rng);
    int y = dist600(rng);

    for(int i = 0; i <= 360; i+=rotationStep){
        m_vertices.push_back(
            sf::Vertex(
                sf::Vector2f(
                    x + dist100(rng) * cos(M_PI / 180 * i),
                    y + dist100(rng) * sin(M_PI / 180 * i)
                ),
                sf::Color::White
                )
            );
    }

    m_vertices.push_back(m_vertices[0]);
}