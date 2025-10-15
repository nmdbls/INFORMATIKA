#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>


int main() {

    sf::RenderWindow window(sf::VideoMode(500, 500),
        "Приложение для вывода матрицы",
        sf::Style::Titlebar | sf::Style::Close);

    const int cellSize = 50;
    const int gridSize = 12;

    sf::RectangleShape cells[gridSize][gridSize];

    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            cells[i][j].setSize(sf::Vector2f(cellSize - 2, cellSize - 2));
            cells[i][j].setPosition(i * cellSize, j * cellSize);
            cells[i][j].setFillColor(sf::Color::White);
            cells[i][j].setOutlineColor(sf::Color::Black);
            cells[i][j].setOutlineThickness(1);
        }
    }
    for (int i = 4; i > -1; i--) {
        for (int j = 4 - i; j >= 0 ; j--) {
                cells[i][j].setFillColor(sf::Color::Green);   
        }
    }

    sf::Font font;


    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                }
            }
        }

        window.clear(sf::Color::Black);


        for (int i = 0; i < gridSize; i++) {
            for (int j = 0; j < gridSize; j++) {
                window.draw(cells[i][j]);
            }
        }

        window.display();
    }

    return 0;
}
