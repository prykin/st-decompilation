#include "../../pseudocode_runtime.h"


void __thiscall FUN_00493110(void *this,RecoveredRecordView_00493110_4613DF4C *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar2_mg0;
  int iVar3;


  iVar2_mg0 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,(RecoveredRecordView_005EFAE0_855D930D *)param_1,
                         (int *)&param_1);
  if (iVar2_mg0 != -4) {
    /* ST_CALLSITE[00493137]: CALL dword ptr [EDX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(param_1->field_0000 + 0x2c))();
    iVar1 = STField<int>(this,0x6f7);
    if (((iVar1 == 7) || (iVar1 == 0x13)) || (iVar1 == 0x1b)) {
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
      uVar2 = param_1->field_0018;
      STField<undefined4>(this,0x5a6) = 0;
      STField<undefined4>(this,0x76) = 0;
      STField<undefined4>(this,0x5a2) = uVar2;
      STField<undefined4>(this,0x5c4) = 7;
      /* ST_CALLSITE[004931A6]: CALL dword ptr [EAX + 0xb4]; [STIndirectCallsiteApplier] exact slot 0xB4; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      STStructuralVirtualCall<undefined4>(this, 0xB4);
      return;
    }
  }
  return;
}

