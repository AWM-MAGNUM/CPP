#include <list>
#include <array>
#include "MutantStack.hpp"


// int main() 
// {
// 	MutantStack<int> stack;

// 	for (int i = 0; i < 20; i++)
// 		stack.push(i + 1);

// 	for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); it++)
// 		std::cout << *it << " ";
// 	std::cout << std::endl;

// 	return 0;
// }

// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top()<< std::endl;
//     mstack.pop();
//     std::cout << "size is : " << mstack.size() << std::endl;
//     std::cout << mstack.top()<< std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     std::cout << "------------list----------\n";
//     std::list<int> li;
//     li.push_back(5);
//     li.push_back(17);
//     std::cout << li.back() << std::endl;
//     li.pop_back();
//     std::cout << "size is : " << li.size() << std::endl;
//     std::cout << li.size() << std::endl;

//     li.push_back(3);
//     li.push_back(5);
//     li.push_back(737);
//     //[...]
//     li.push_back(0);
//     std::list<int>::iterator itt = li.begin();
//     std::list<int>::iterator itte = li.end();
//     ++itt;
//     --itt;
//     while (itt != itte)
//     {
//         std::cout << *itt << std::endl;
//         ++itt;
//     }
//     std::list<int> r(li);
//     return 0;
// }


int main() 
{
    MutantStack<int> originalStack;
    originalStack.push(1);
    originalStack.push(2);
    originalStack.push(3);

    // Utilisation du constructeur de copie
    MutantStack<int> copiedStack(originalStack);

    // Utilisation de l'opérateur d'affectation
    MutantStack<int> assignedStack;
    assignedStack = originalStack;

    // Affichage de la pile copiée
    std::cout << "Copied Stack:" << std::endl;
    for (MutantStack<int>::iterator it = copiedStack.begin(); it != copiedStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Affichage de la pile assignée
    std::cout << "Assigned Stack:" << std::endl;
    for (MutantStack<int>::iterator it = assignedStack.begin(); it != assignedStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
