#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004e4e90(void *this,int param_1,int param_2)

{
  int iVar1;

  if ((g_visibleClass_00802A88 != nullptr) && (0x27 < STField<int>(this,0x4d4))) {
    /* ST_CALLSITE[004E4EBB]: CALL 0x004040a7; direct=004040A7 VisibleClassTy::sub_0055AD00 */
    iVar1 = VisibleClassTy::sub_0055AD00
                      (g_visibleClass_00802A88,param_1,param_2,2,STField<uint>(this,0x24),7);
    if (iVar1 == 0) {
      /* ST_CALLSITE[004E4ED9]: CALL 0x00401fd2; direct=00401FD2 VisibleClassTy::VisHoleCreate */
      VisibleClassTy::VisHoleCreate
                (g_visibleClass_00802A88,param_1,param_2,(undefined *)0x2,
                 STField<uint>(this,0x24),(undefined *)0x7,500);
      STField<undefined4>(this,0x4d4) = 0;
      STField<uint>(this,0x4d8) = g_playSystem_00802A38->field_00E4;
    }
  }
  return 0;
}

