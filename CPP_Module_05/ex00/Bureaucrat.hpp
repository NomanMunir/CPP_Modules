#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>

class Bureaucrat
{
  private:
	const std::string _name;
	int _grade;
	Bureaucrat();

  public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &rhs);
	std::string getName() const;
	int getGrade() const;
	void increaseGrade();
	void decreaseGrade();

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
			 return ("Grade is too high!");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grade is too low!");
			}
	};

};
std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );

#endif // !BUREAUCRAT_HPP
