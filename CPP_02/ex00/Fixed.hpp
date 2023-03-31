class	Fixed 
{
	 public:
		Fixed();
		~Fixed();
		Fixed (const Fixed &copy);
		Fixed &operator=(const Fixed&);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );		
	 private:
		int					_value;
		static int const	_frabBitsNb = 0;
};
