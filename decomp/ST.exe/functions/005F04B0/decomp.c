#include "../../pseudocode_runtime.h"


void __thiscall FUN_005f04b0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  piVar1 = param_1;
  iVar3 = STPlaySystemC::sub_006E62D0
                    (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1,(int *)&param_1);
  piVar2 = param_1;
  if (iVar3 != -4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    if (((iVar3 == 0x1b) || (iVar3 == 7)) || (iVar3 == 0x13)) {
      STField<undefined1>(this,0x24e) = 1;
      STField<int>(this,0x2a3) = piVar2[9];
      STField<undefined2>(this,0x2ab) = STField<undefined2>(piVar2,0x32);
      STField<int *>(this,0x2a7) = piVar1;
      iVar3 = thunk_FUN_00495ff0(STField<short>(this,0x242),STField<short>(this,0x244),
                                 STField<short>(this,0x246),0,this);
      if (iVar3 == 0) {
        STField<char>(this,0x252) = STField<char>(this,0x252) + -1;
      }
      STField<undefined4>(this,0x23a) = 4;
      if (piVar1 != STField<int *>(this,0x18)) {
        STField<undefined1>(this,0x24f) = 1;
      }
    }
  }
  return;
}

