
/* Library Function - Single Match
    __set_errno
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

errno_t __cdecl __set_errno(int _Value)

{
  if (_Value == 1) {
    DAT_00857148 = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    DAT_00857148 = 0x22;
  }
  return _Value;
}

