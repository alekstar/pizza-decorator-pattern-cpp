#ifndef CHICKEN_H
#define	CHICKEN_H

namespace Pizza
{
    class Chicken : public PizzaBase
    {
        std::shared_ptr<PizzaBase> pizza_base_;
    public:
        Chicken(const std::shared_ptr<PizzaBase> pizza_base)
            :pizza_base_(pizza_base)
        {
        }
        std::string getDescription() const
        {
            return pizza_base_->getDescription() + std::string(" + chicken");
        }
        
        double getCost() const
        {
            return pizza_base_->getCost() + 1.75;
        }
    };
}

#endif	/* CHICKEN_H */

