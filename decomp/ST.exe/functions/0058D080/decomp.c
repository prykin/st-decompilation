#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0058d080(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  iVar5 = DAT_00811720 + -1;
  if (-1 < iVar5) {
    piVar2 = (int *)((int)PTR_00811718 + iVar5 * 4);
    iVar1 = iVar5;
    do {
      if (param_1 == *piVar2) {
        iVar3 = iVar5 - iVar1;
        DAT_00811720 = iVar5;
        if (0 < iVar3) {
          puVar6 = &PTR_00811718->field_0004 + iVar1;
          puVar7 = &PTR_00811718->field_0000 + iVar1;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar6 = &PTR_0081171c->field_0004 + iVar1;
          puVar7 = &PTR_0081171c->field_0000 + iVar1;
          for (uVar4 = DAT_00811720 - iVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        if (DAT_00811720 == 0) {
          FreeAndNull(&PTR_00811718);
          PTR_00811718 = nullptr;
          FreeAndNull(&PTR_0081171c);
          PTR_0081171c = nullptr;
        }
        return 1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

