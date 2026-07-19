
CFsgsConnection * __thiscall FUN_0055bd40(void *this,byte param_1)

{
  *(CFsgsConnectionVTable **)this = &CFsgsConnectionVTable;
  CFsgsConnection::~CFsgsConnection(this);
  if ((param_1 & 1) != 0) {
    Library::MSVCRT::FUN_0072e2b0(this);
  }
  return this;
}

