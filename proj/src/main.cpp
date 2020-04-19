#include <iostream>
#include "box.hpp"
#include "lib.hpp"
#include "boost/filesystem.hpp"

int main()
{
    for (boost::filesystem::directory_entry& e : boost::filesystem::directory_iterator("C:\\Boost\\boost_1_72_0"))
        std::cout << e.path() << '\n';

    std::cout << "Hello, World " << " lib(5) = " << lib::number(5) << " box(5) = " << box::number(5);
    return 0;
}