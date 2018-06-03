#ifndef DNA_H
#define DNA_H
#include <iostream>
#include <conio.h>
class DNA
{

    private:
       std::string genes;
       int fitness = 0;
    public:
        DNA(int num);
        char newChar();
        DNA* mating(DNA *);
        void calculateFitness(std::string target );
        std::string getGenes()
        {
            return this->genes;

        }


        friend class Population;
        int getFitness(){
        return this->fitness;
        }



};

#endif // DNA_H
