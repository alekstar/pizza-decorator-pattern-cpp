#ifndef PIZZABASE_H
#define	PIZZABASE_H

#include <string>

namespace Pizza
{
    class PizzaBase
    {
    public:
        
        
        virtual std::string getDescription() const
        {
            return std::string("Pizza");
        }
        
        virtual double getCost() const
        {
            return 3.0;
        }
        
        virtual ~PizzaBase(){};
    };
}

#endif	/* PIZZABASE_H */

