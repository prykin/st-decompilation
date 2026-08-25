#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=006952B0 @ 006956B8
   -> TEST TEST EAX,EAX */

int FUN_00695180(AnonShape_0052EFB0_8161B92D *param_1,RecoveredRecord_CGenerate_00695180 *param_2,
                int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_8;

  iVar1 = STField<int>(param_3,0x10);
  uVar5 = 0;
  iVar6 = 0;
  iVar8 = 0;
  if (param_1->field_000C != iVar1) {
    return 0;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == 0) {
    return 1;
  }
  if ((param_1->field_0014 == 0) && (0 < iVar1)) {
    iVar2 = param_1->field_0018;
    iVar3 = param_2->field_0018;
    do {
      if (uVar5 < STField<uint>(iVar2,0xC)) {
        iVar7 = STField<int>(iVar2,0x8) * uVar5 + STField<int>(iVar2,0x1C);
      }
      else {
        iVar7 = 0;
      }
      if (uVar5 < STField<uint>(iVar3,0xC)) {
        iVar4 = STField<int>(iVar3,0x8) * uVar5 + STField<int>(iVar3,0x1C);
      }
      else {
        iVar4 = 0;
      }
      iVar8 = iVar8 + STField<int>(iVar7,0x2C);
      iVar6 = iVar6 + STField<int>(iVar4,0x2C);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar1);
  }
  local_8 = (uint)(param_2->field_0014 + param_2->field_0010 * 0x122 + iVar6 <
                  param_1->field_0014 + param_1->field_0010 * 0x122 + iVar8);
  return local_8;
}

