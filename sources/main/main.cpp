#include "PizzaBase.h"
#include "Cheese.h"
#include "Tomato.h"
#include "Chicken.h"
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
    std::shared_ptr<Pizza::Cheese> pizza_with_cheese(
        new Pizza::Cheese(PointerToPizza(new Pizza::PizzaBase)));
    pizzas.push_back(pizza_with_cheese);
    
    std::shared_ptr<Pizza::Cheese> pizza_with_cheese_and_tomato(
        new Pizza::Cheese(std::shared_ptr<Pizza::Tomato>(
        new Pizza::Tomato(PointerToPizza(new Pizza::PizzaBase)))));
    pizzas.push_back(pizza_with_cheese_and_tomato);
    
    std::shared_ptr<Pizza::Cheese> pizza_with_cheese_and_chicken(
        new Pizza::Cheese(std::shared_ptr<Pizza::Chicken>(
        new Pizza::Chicken(PointerToPizza(new Pizza::PizzaBase)))));
    pizzas.push_back(pizza_with_cheese_and_chicken);
    
    std::shared_ptr<Pizza::Cheese> pizza_with_double_cheese_tomato_and_chicken(
        new Pizza::Cheese(std::shared_ptr<Pizza::Cheese>(
        new Pizza::Cheese(std::shared_ptr<Pizza::Tomato>(
        new Pizza::Tomato(std::shared_ptr<Pizza::Chicken>(
        new Pizza::Chicken(PointerToPizza(new Pizza::PizzaBase)))))))));
    pizzas.push_back(pizza_with_double_cheese_tomato_and_chicken);
    
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

