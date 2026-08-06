#include "../../pseudocode_runtime.h"


uint __thiscall
FUN_00617b10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  DArrayTy *pDVar1;
  uint uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined4 local_28;
  undefined2 local_24;
  uint local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  int local_8;

  if (STField<int>(this,0x5e) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,7,0x24,10);
    STField<DArrayTy *>(this,0x5e) = pDVar1;
    if (pDVar1 == nullptr) {
      return 0xffffffff;
    }
  }
  local_8 = STField<int>(this,0x5a) + 1;
  STField<int>(this,0x5a) = local_8;
  memset(&local_28, 0, 0x24); /* compiler bulk-zero initialization */
  local_14 = STField<undefined4>(this,0x50);
  local_24 = (undefined2)param_3;
  local_18 = STField<undefined4>(this,0x4c);
  STPiece<0,2>(local_28) = (undefined2)param_1;
  STPiece<2,2>(local_28) = (undefined2)param_2;
  local_22 = g_playSystem_00802A38->field_00E4;
  local_1e = (undefined2)local_28;
  local_1c = STPiece<2,2>(local_28);
  local_1a = local_24;
  uVar2 = Library::DKW::TBL::DArrayAppend(STField<DArrayTy *>(this,0x5e),&local_28);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  thunk_FUN_0061d0c0(param_1,param_2,param_3,param_4,param_5,param_6,
                     STField<undefined4>(this,0x20),STField<undefined4>(this,0x54),
                     CONCAT22(extraout_var,STField<undefined2>(this,0x58)),
                     STField<undefined4>(this,0x18),STField<undefined4>(this,0x5a),this);
  return uVar2;
}

