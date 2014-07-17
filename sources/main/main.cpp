#include "PizzaBase.h"
#include <vector>
#include <memory>
#include <iostream>

typedef std::shared_ptr<Pizza::PizzaBase> PointerToPizza;
typedef std::vector<PointerToPizza> VectorOfPizzas;

int main() 
{
    VectorOfPizzas pizzas;
    PointerToPizza base_pizza(new Pizza::PizzaBase());
    pizzas.push_back(base_pizza);
    
    for(VectorOfPizzas::iterator pizza_iterator = pizzas.begin();
        pizza_iterator != pizzas.end();
        ++pizza_iterator)
    {
        std::cout << "Name: " << (*pizza_iterator)->getDescription() << std::endl;
        std::cout << "Cost: " << (*pizza_iterator)->getCost() << std::endl;
        std::cout << std::endl;
    }
    
    return 0;
}

