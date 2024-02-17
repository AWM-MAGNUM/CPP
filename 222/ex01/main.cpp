#include "Span.hpp"
#include <iostream>

#include "Span.hpp"
#include <iostream>
#include <vector>

#include "Span.hpp"
#include <iostream>
#include <vector>

int main() {
    try {
        Span span(1000);

        // Initialisation par liste des nombres à ajouter
        const int initValues[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        // Ajout de chaque nombre à l'objet Span avec addNumber()
        for (size_t i = 0; i < sizeof(initValues) / sizeof(initValues[0]); ++i) {
            span.addNumber(initValues[i]);
        }

        // Affichage pour vérifier que les valeurs ont été ajoutées
        std::cout << "Contenu complet du vecteur :" << std::endl;
        const std::vector<int>& data = span.getData();
        for (size_t i = 0; i < data.size(); ++i) {
            std::cout << "Position " << i << " : " << data[i] << std::endl;
        }
    } 
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}



// int main() {
//     try {
//         Span span(1000);

//         // Remplissons les 1000 cases avec des valeurs de 1 à 1000
//         for (int i = 1; i <= 1000; ++i) {
//             span.addNumber(i);
//         }

//         // Affichons les valeurs pour vérifier qu'elles ont été correctement ajoutées
//         std::cout << "Contenu complet du vecteur :" << std::endl;
//         const std::vector<int>& data = span.getData();
//         for (size_t i = 0; i < data.size(); ++i) {
//             std::cout << "Position " << i << " : " << data[i] << std::endl;
//         }
//     } 
//     catch (const std::exception& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }

//     return 0;
// }





// int main() {
//     try {
//         Span span(1000);

//         std::vector<int> numbersToAdd;
//         numbersToAdd.push_back(6);
//         numbersToAdd.push_back(3);
//         numbersToAdd.push_back(17);
//         numbersToAdd.push_back(9);
//         numbersToAdd.push_back(11);
        
//         span.addAllNumbers(numbersToAdd.begin(), numbersToAdd.end()); 
//         std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
//         std::cout << "Longest span: " << span.longestSpan() << std::endl;
//     } 
//     catch (const std::exception& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }

//     return 0;
// }


// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }