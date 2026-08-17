#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00597120 -> 0055D390 @ 0059778F

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_0055d390(void *this,char *resourceString,char *param_2,ulong param_3)

{
  /* ST_CALLSITE[0055D3A4]: CALL dword ptr [0x0085c030] */
  CFsgsConnection::JoinChannel(this,resourceString,param_2,param_3);
  Library::MSVCRT::_strncpy((char *)((int)this + 0x648),resourceString,0x3f);
  STField<undefined1>(this,0x687) = 0;
  Library::MSVCRT::_strncpy((char *)((int)this + 0x688),param_2,0x1f);
  STField<ulong>(this,0x6a8) = param_3;
  STField<undefined1>(this,0x6a7) = 0;
  return;
}

