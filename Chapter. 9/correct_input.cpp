#include <ios>
#include <limits>
#include <iostream>
namespace correct_input
{
    // clean extra input
    void ignoreLine()
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
//if (!std::cin) // Has a previous extraction failed or overflowed?
//{
  //  if (std::cin.eof()) // If the stream was closed
    //{
      //  exit(0); // Shut down the program now
    //}

    // Yep, so let's handle the failure
    //std::cin.clear(); // Put us back in 'normal' operation mode
    //ignoreLine();
}
    
