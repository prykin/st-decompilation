#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=005EE6E0 @ 005EE9BF
   -> TEST TEST EAX,EAX | 005EF7A0 @ 005EF8B6 -> TEST TEST EAX,EAX */

int __thiscall FUN_005ef4b0(void *this,int param_1)

{
  int iVar1;
  char local_8;

  if ((1 < STField<byte>(this,0x252)) &&
     (iVar1 = thunk_FUN_00495ff0(STField<short>(this,0x254),STField<short>(this,0x256),
                                 STField<short>(this,600),0,this), iVar1 == 0)) {
    STField<char>(this,0x252) = STField<char>(this,0x252) + -1;
  }
  iVar1 = (int)(short)(STField<short>(this,0x242) * 0xc9 + 100);
  if ((iVar1 != STField<int>(this,0x277)) ||
     (local_8 = '\0',
     (int)(short)(STField<short>(this,0x244) * 0xc9 + 100) != STField<int>(this,0x27b))) {
    local_8 = '\x01';
  }
  iVar1 = thunk_FUN_005ecd70(this,iVar1,(int)(short)(STField<short>(this,0x244) * 0xc9 + 100),
                             (int)(short)(STField<short>(this,0x246) * 200 + 100),param_1,local_8
                             ,0x1e);
  return (uint)(iVar1 != 0);
}

