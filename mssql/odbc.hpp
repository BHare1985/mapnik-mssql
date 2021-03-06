#ifndef ODBC_HPP
#define ODBC_HPP

#include <sqlext.h>
#include <string>

class Odbc
{
  public:
    static void InitOdbc();
    static void FreeOdbc();
    static SQLHANDLE GetEnvHandle();

  private:
    static SQLHANDLE sqlenvhandle_;
};

std::string getOdbcError(unsigned int handletype, const SQLHANDLE& handle);

#endif // ODBC_HPP