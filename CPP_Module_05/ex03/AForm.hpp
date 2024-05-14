#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
class Bureaucrat;
class AForm {
	private:
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _exeGrade;
		AForm();
	public:
		AForm(const std::string &name, int grade, int exeGrade);
		AForm(const AForm &other);
		virtual ~AForm();
		AForm &operator=(const AForm &rhs);

		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExeGrade() const;
		void beSigned(Bureaucrat& bur);
		virtual AForm* clone() = 0;
		virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw() { return ("Grade is too high!");} 
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw() { return ("Grade is too low!"); }
	};
	class NotSignedException : public std::exception {
	public:
		virtual const char* what() const throw() { return "Form not signed"; }
    };
};
std::ostream&   operator<<( std::ostream& o, const AForm& rhs );

#endif // !AFORM_HPP