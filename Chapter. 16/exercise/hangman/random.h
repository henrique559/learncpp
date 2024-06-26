#ifndef RANDOM_H
#define RANDOM_H

#include <chrono>
#include <random>

class Random 
{
    private:

        static inline std::mt19937 generate()
        {
            std::random_device rd{};

		// Create seed_seq with high-res clock and 7 random numbers from std::random_device
		std::seed_seq ss
        {
			static_cast<std::seed_seq::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()),
				rd(), rd(), rd(), rd(), rd(), rd(), rd() };

            return std::mt19937{ ss };
        };

        static inline std::mt19937 mt { generate() };
        
    public:
        static inline int get(int min, int max)
        {
            return std::uniform_int_distribution{min, max}(mt);
        }

};

#endif 
