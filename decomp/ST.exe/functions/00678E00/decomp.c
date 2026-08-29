#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00679120 @ 0067915C -> read as EAX on
   every CFG path | 00679300 @ 0067933E -> read as EAX on every CFG path | 00679FE0 @ 00679FEA ->
   read as EAX on every CFG path | 0067A180 @ 0067A18A -> read as EAX on every CFG path */

int __thiscall FUN_00678e00(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;

  iVar2 = STField<int>(this,0x695);
  uVar6 = STField<uint>(iVar2,0xC);
  uVar8 = 0;
  if (0 < (int)uVar6) {
    bVar9 = uVar6 != 0;
    do {
      if (bVar9) {
        piVar3 = (int *)(STField<int>(iVar2,0x8) * uVar8 + STField<int>(iVar2,0x1C));
      }
      else {
        piVar3 = nullptr;
      }
      if (*piVar3 != 0) {
        if (((iVar2 == 0) || ((int)uVar8 < 0)) || ((int)uVar6 <= (int)uVar8)) {
LAB_00678e60:
          iVar4 = 0;
        }
        else {
          if (uVar8 < uVar6) {
            piVar3 = (int *)(STField<int>(iVar2,0x8) * uVar8 + STField<int>(iVar2,0x1C));
          }
          else {
            piVar3 = nullptr;
          }
          iVar4 = *piVar3;
          if (piVar3[1] != 0) {
            if (iVar4 == 0) goto LAB_00678e60;
            iVar4 = iVar4 + 0x20;
          }
        }
        pbVar7 = (byte *)(iVar4 + 0x1b);
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00678e8c:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00678e91;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00678e8c;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00678e91:
        if (iVar4 == 0) {
          return uVar8;
        }
      }
      uVar6 = STField<uint>(iVar2,0xC);
      uVar8 = uVar8 + 1;
      bVar9 = uVar8 < uVar6;
    } while ((int)uVar8 < (int)uVar6);
  }
  return -1;
}

