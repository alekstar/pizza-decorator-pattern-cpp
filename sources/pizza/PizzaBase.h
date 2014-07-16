#ifndef PIZZABASE_H
#define	PIZZABASE_H

#include <string>

namespace Pizza
{
    class PizzaBase
    {
    public:
        std::string getDescription() const
        {
            return std::string("Pizza");
        }
        
        double getCost() const
        {
            return 3.0;
        }
    };
}

#endif	/* PIZZABASE_H */

