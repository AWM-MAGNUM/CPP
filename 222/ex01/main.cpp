#include "Span.hpp"
#include <iostream>
#include <array>

int main() {
    try {
        Span span(100);

        // Ajout de nombres à la classe Span
        for (int i = 1; i <= 10; ++i)
            span.addNumber(i);

        // Affichage des nombres ajoutés
        std::cout << "Nombres ajoutés à Span : " << std::endl;
        span.display();

        // Ajout de nombres à l'aide d'un tableau
        std::array<int, 10> numbersToAdd = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        span.addAllNumber(numbersToAdd.begin(), numbersToAdd.end());

        // Affichage des nombres ajoutés
        std::cout << "Nouveaux nombres ajoutés à Span : " << std::endl;
        span.display();

        // Affichage des écarts les plus courts et les plus longs
        std::cout << "Plus court écart : " << span.shortestSpan() << std::endl;
        std::cout << "Plus long écart : " << span.longestSpan() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception : " << e.what() << std::endl;
    }
}