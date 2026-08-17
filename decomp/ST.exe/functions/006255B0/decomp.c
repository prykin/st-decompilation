#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 006255B0 -> 00624140 @ 00625685 */

undefined4 __thiscall
FUN_006255b0(void *this,int param_1,undefined4 param_2,int param_3,int param_4,
            Global_sub_0061BDB0_param_1Enum *param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;

  iVar1 = param_7;
  iVar2 = param_6;
  local_8 = 0;
  if (param_1 == 1) {
    iVar3 = thunk_FUN_00624140(this,param_3,param_4,param_5,param_6,param_7,param_8,&param_6,0);
    if (iVar3 != 0) {
      STField<undefined4>(this,0x2c2) = STField<undefined4>(this,0x251);
      STField<undefined4>(this,0x2c6) = STField<undefined4>(this,0x255);
      STField<int>(this,0x2ca) = param_6;
      return param_2;
    }
    STField<int>(this,0x2c2) = iVar2;
    STField<int>(this,0x2c6) = iVar1;
    STField<int>(this,0x2ca) = param_6;
  }
  else if (((1 < param_1) && (param_1 < 4)) && (STField<int *>(this,0x245) != nullptr)) {
    /* ST_CALLSITE[00625602]: CALL dword ptr [EAX + 0xe0] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*STField<int *>(this,0x245) + 0xe0))
                      (STField<undefined4>(this,0x249),(int)&param_1 + 2,(int)&param_8 + 2,
                       (int)&param_7 + 2,&local_8);
    if (iVar2 == 0) {
      STField<int>(this,0x255) = (int)STPiece<2,2>(param_8);
      STField<int>(this,0x2c6) = (int)STPiece<2,2>(param_8);
      STField<int>(this,0x251) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x259) = (int)STPiece<2,2>(param_7);
      STField<undefined4>(this,0x24d) = local_8;
      STField<int>(this,0x2c2) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x2ca) = (int)STPiece<2,2>(param_7);
      thunk_FUN_00624000(this);
      /* ST_CALLSITE[00625654]: CALL 0x004012c6; direct=004012C6 STMineSetC::LoadImagMineSet */
      STMineSetC::LoadImagMineSet(this,1);
      return param_2;
    }
  }
  return param_2;
}

