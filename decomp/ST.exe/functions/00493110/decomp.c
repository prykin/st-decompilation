#include "../../pseudocode_runtime.h"


void __thiscall FUN_00493110(void *this,AnonShape_00493110_B173055C *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar2 = STPlaySystemC::sub_006E62D0
                    (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1,(int *)&param_1);
  if (iVar2 != -4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*(int *)param_1 + 0x2c))();
    iVar2 = STField<int>(this,0x6f7);
    if (((iVar2 == 7) || (iVar2 == 0x13)) || (iVar2 == 0x1b)) {
      if ((STField<int>(this,0x7ca) == 0) &&
         (((iVar3 == 0xfd || (iVar3 == 0xfe)) ||
          ((((0 < iVar3 && ((iVar3 < 0x29 && (iVar3 != 7)))) && (iVar3 != 0x13)) && (iVar3 != 0x1b))
          )))) {
        STField<undefined4>(this,0x7ca) = param_1->field_0018;
        Library::Ourlib::ST3DSMAP::SprSetLevAfter
                  (STField<void *>(this,0x211),STField<uint>(this,0x1ed),param_1->field_01ED);
      }
    }
    else if (((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) {
      STField<undefined2>(this,0x5a0) = STField<undefined2>(this,0x30);
      STField<undefined4>(this,0x45d) = 0x14;
      STField<undefined4>(this,0x7c2) = 1;
      uVar1 = param_1->field_0018;
      STField<undefined4>(this,0x5a6) = 0;
      STField<undefined4>(this,0x76) = 0;
      STField<undefined4>(this,0x5a2) = uVar1;
      STField<undefined4>(this,0x5c4) = 7;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0xb4))();
      return;
    }
  }
  return;
}

