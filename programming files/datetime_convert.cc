#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>
// Paul was here lmao
// what is this
int main()
{
   // store date in date_str and initialize objects
    std::string date_str = "2022-17-03 15:40:30";
    std::tm date_obj = {};
    std::istringstream ss(date_str);
    
    // store unformated date string in ss
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");
    std::stringstream formatted_date_ss
    
    # format date string
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");
    string formatted_date = formatted_date_ss.int();

    # print formatted date string
    std::cout << formatted_date << std::endl;

    
}
