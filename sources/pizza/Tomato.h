#ifndef TOMATO_H
#define	TOMATO_H

#include "PizzaBase.h"
#include <string>
#include <memory>

namespace Pizza
{
    class Tomato : public PizzaBase
    {
        std::shared_ptr<PizzaBase> pizza_base_;
    public:
        Tomato(const std::shared_ptr<PizzaBase> pizza_base)
            :pizza_base_(pizza_base)
        {
        }
        std::string getDescription() const
        {
            return pizza_base_->getDescription() + std::string(" + tomato");
        }
        
        double getCost() const
        {
            return pizza_base_->getCost() + 0.93;
        }
    };
}

#endif	/* TOMATO_H */

