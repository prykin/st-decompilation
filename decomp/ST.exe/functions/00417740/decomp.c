#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00418030 @ 00418780 -> killed on
   every CFG path | 004189D0 @ 00418C14 -> killed on every CFG path | 0045F6C0 @ 0045F8E1 -> killed
   on every CFG path | 0045F980 @ 0045FB19 -> killed on every CFG path | 00462180 @ 004624FE ->
   killed on every CFG path | 0057D5F0 @ 0057D69A -> read as EAX on every CFG path | 0058F1E0 @
   0058F37E -> read as EAX on every CFG path */

int __thiscall FUN_00417740(void *this,short param_1,short param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;

  uVar1 = STField<ushort>(this,0x86);
  iVar5 = (int)param_1;
  if (((int)(param_1 / (short)uVar1) * (short)uVar1 - iVar5 != 0) ||
     (iVar4 = (int)param_2, (int)(param_2 / (short)uVar1) * (short)uVar1 - iVar4 != 0)) {
    return -1;
  }
  STField<short>(this,0x82) = param_1;
  STField<short>(this,0x84) = param_2;
  uVar2 = (short)uVar1 >> 0xf;
  if (param_2 < param_1) {
    if (0xb3 < iVar5 - iVar4) {
      sVar3 = (uVar1 ^ uVar2) - uVar2;
      goto cf_common_exit_004177BE;
    }
  }
  else if (iVar4 - iVar5 < 0xb4) {
    sVar3 = (uVar1 ^ uVar2) - uVar2;
    goto cf_common_exit_004177BE;
  }
  sVar3 = -((uVar1 ^ uVar2) - uVar2);
cf_common_exit_004177BE:
  STField<short>(this,0x86) = sVar3;
  STField<undefined4>(this,0x88) = 1;
  STField<undefined4>(this,0xe8) = 1;
  STField<undefined4>(this,0xf0) = 0;
  return 0;
}

