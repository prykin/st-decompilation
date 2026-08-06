#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00639C90 @ 0063A462
   -> TEST TEST EAX,EAX */

int __thiscall FUN_0063c4a0(void *this,int param_1)

{
  int iVar1;

  STField<undefined4>(this,0x27a) = STField<undefined4>(this,0x26e);
  iVar1 = (int)STField<short>(this,0x251) -
          (param_1 - STField<int>(this,0x28e)) * STField<int>(this,0x292);
  STField<int>(this,0x26e) = iVar1;
  return (uint)(iVar1 < 0x3e9);
}

