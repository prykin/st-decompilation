#include "../../pseudocode_runtime.h"


uint __thiscall FUN_006216e0(void *this,undefined4 param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_8;

  local_14 = 0;
  local_8 = (undefined1)((uint)param_1 >> 0x18);
  local_10 = g_playSystem_00802A38->field_00E4 << 8;
  STPiece<0,1>(local_c) = (undefined1)(g_playSystem_00802A38->field_00E4 >> 0x18);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_c = CONCAT31((int3)param_1,(undefined1)local_c);
  if (STField<int>(this,0x10a) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0xd,10);
    STField<DArrayTy *>(this,0x10a) = pDVar1;
  }
  if (STField<DArrayTy *>(this,0x10a) != nullptr) {
    uVar2 = Library::DKW::TBL::DArrayAppend(STField<DArrayTy *>(this,0x10a),&local_14);
    return uVar2;
  }
  return 0xffffffff;
}

