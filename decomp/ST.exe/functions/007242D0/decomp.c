
/* [STObjectFactoryApplier] Central object factory for 0x0005 (ST_OBJECT_TYPE_0005).
   Evidence: exact registry pointer; create function first */

void * __cdecl FUN_007242d0(void)

{
  undefined4 *this;

  this = FUN_006b04d0(0x78);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    *this = 0x79e2c0;
    this[0x19] = 0;
    this[6] = 0;
    return this;
  }
  return (void *)0x0;
}

