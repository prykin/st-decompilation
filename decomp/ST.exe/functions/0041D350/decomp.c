#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (5), none consume AL/AX, and every RET path defines full EAX; sites=00480600 @ 004808D4
   -> CMP CMP EAX,0x1 | 004845E0 @ 00484A2E -> DEC DEC EAX | 004845E0 @ 004858A0 -> DEC DEC EAX |
   004945C0 @ 0049477F -> CMP CMP EAX,0x1 | 00494870 @ 00494A30 -> XOR XOR EAX,EAX */

int __thiscall FUN_0041d350(void *this,uint param_1)

{
  int iVar1;
  int iVar2;

  if (g_visibleClass_00802A88 == nullptr) {
    return 0;
  }
  iVar1 = (int)STField<short>(this,0x5b);
  iVar2 = (int)STField<short>(this,0x5d);
  if ((((-1 < iVar1) && (iVar1 < g_visibleClass_00802A88->field_0020)) && (-1 < iVar2)) &&
     (((iVar2 < g_visibleClass_00802A88->field_0024 && (param_1 < 8)) &&
      (g_visibleClass_00802A88->field_0074[param_1] != nullptr)))) {
    return (uint)(g_visibleClass_00802A88->field_0074[param_1]
                  [iVar1 + g_visibleClass_00802A88->field_0020 * iVar2] != 0);
  }
  return 0;
}

