#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	// std::cout << "Bureaucrat default constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
	// std::cout << "Bureaucrat name constructor called!" << std::endl;
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat name destructor is called!" << std::endl;
}


Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
	// std::cout << "Bureaucrat copy constructor called!" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::increaseGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decreaseGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs ) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}