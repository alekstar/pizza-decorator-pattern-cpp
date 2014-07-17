#ifndef CHEESE_H
#define	CHEESE_H
#include "PizzaBase.h"
#include <string>
#include <memory>

namespace Pizza
{
    class Cheese : public PizzaBase
    {
        std::shared_ptr<PizzaBase> pizza_base_;
    public:
        Cheese(const std::shared_ptr<PizzaBase> pizza_base)
            :pizza_base_(pizza_base)
        {
        }
        std::string getDescription() const
        {
            return pizza_base_->getDescription() + std::string(" + cheese");
        }
        
        double getCost() const
        {
            return pizza_base_->getCost() + 1.21;
        }
    };
}

#endif	/* CHEESE_H */

