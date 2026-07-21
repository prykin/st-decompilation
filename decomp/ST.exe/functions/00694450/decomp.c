#include "../../pseudocode_runtime.h"


void __thiscall FUN_00694450(void *this,int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar6;

  iVar2 = thunk_FUN_00693e60(this,param_1);
  if (iVar2 != 0) {
    pbVar3 = (byte *)(iVar2 + 1);
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *param_2;
      if (bVar1 != *param_2) {
LAB_00694491:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00694496;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < param_2[1];
      if (bVar1 != param_2[1]) goto LAB_00694491;
      pbVar3 = pbVar3 + 2;
      param_2 = param_2 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00694496:
    if (iVar4 == 0) {
      *(char *)((int)this + 0x2f9) = *(char *)((int)this + 0x2f9) + -1;
      memset((void *)((int)this + (uint)*(byte *)(iVar2 + 0x39) * 0x9c + 0x2fa), 0, 0x9c); /* compiler bulk-zero initialization */
      iVar4 = 0;
      memset((void *)(iVar2 + 1), 0, 0x20); /* compiler bulk-zero initialization */
      *(undefined1 *)(iVar2 + 0x39) = 0xff;
    }
  }
  return;
}

