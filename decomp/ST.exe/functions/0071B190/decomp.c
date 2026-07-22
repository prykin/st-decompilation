
/* [STObjectFactoryApplier] Central object factory for 0x0001 (ST_OBJECT_TYPE_0001).
   Evidence: exact registry pointer; create function first */

void * __cdecl FUN_0071b190(void)

{
  undefined4 *this;

  this = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x90);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    *this = &VTable_0079E284;
    this[6] = 0;
    this[8] = 0;
    this[7] = 0;
    this[9] = 0;
    this[10] = 0;
    this[0x19] = 0;
    this[0x18] = 0;
    this[0x14] = 0;
    this[0x13] = 0;
    this[0x12] = 0;
    this[0x15] = 0;
    this[0x16] = 0;
    this[0x17] = 0;
    this[0x1d] = 0;
    this[0x11] = 0xffffffff;
    InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x1e));
    return this;
  }
  return (void *)0x0;
}

