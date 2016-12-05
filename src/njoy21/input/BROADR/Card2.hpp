class Card2 {
public:
  #include "njoy21/input/BROADR/Card2/Mat1.hpp"
  #include "njoy21/input/BROADR/Card2/Ntemp2.hpp"
  #include "njoy21/input/BROADR/Card2/Istart.hpp"
  #include "njoy21/input/BROADR/Card2/Istrap.hpp"
  #include "njoy21/input/BROADR/Card2/Temp1.hpp"
  
  Argument< Mat1 > mat1;
  Argument< Ntemp2 > ntemp2;
  Argument< Istart > istart;
  Argument< Istrap > istrap;
  Argument< Temp1 > temp1;

private:
  template< typename Char >
  Card2( std::basic_istringstream< Char >&& is, const long& lineNumber )
    try:
      mat1( argument::extract< Mat1 >( is, lineNumber ) ),
      ntemp2( argument::extract< Ntemp2 >( is, lineNumber ) ),
      istart( argument::extract< Istart >( is, lineNumber ) ),
      istrap( argument::extract< Istrap >( is, lineNumber ) ),
      temp1( argument::extract< Temp1 >( is, lineNumber ) ){}
    catch( std::exception& e ){
      Log::info("Trouble while validating Card 2");
      throw e;
    }
  
public:
  template< typename Istream >
  Card2( Istream& is, long& lineNumber ) :
    Card2( Card::extract( is, lineNumber ), lineNumber ){ ++lineNumber; }
};
