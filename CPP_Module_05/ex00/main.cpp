#include "Bureaucrat.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("Test", 150);

        std::cout << bureaucrat << std::endl;
		bureaucrat.decreaseGrade();
        bureaucrat.increaseGrade();
        bureaucrat.decreaseGrade();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat("Test2", 1);

        std::cout << bureaucrat << std::endl;
        bureaucrat.increaseGrade();
        bureaucrat.decreaseGrade();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat("Normal", 140);

        std::cout << bureaucrat << std::endl;
		bureaucrat.decreaseGrade();
        bureaucrat.increaseGrade();
        bureaucrat.decreaseGrade();
        std::cout << "New Grade : "<< bureaucrat.getGrade() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}