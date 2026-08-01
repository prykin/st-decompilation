#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 005F1FA0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005F1236

   [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall STManBasisC::sub_005F1FA0(STManBasisC *this,int *param_1)

{
  uint size;
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar4;
  uint *puVar5;
  ushort **ppuVar6;
  byte *pbVar7;
  uint *puVar8;
  byte *pbVar9;
  uint *local_14;
  byte *local_10;
  uint local_c;
  uint local_8;

  local_10 = (byte *)0x0;
  local_14 = (uint *)0x0;
  local_8 = 0;
  local_c = 0;
  if (this->field_0038 != (STManBasisC_field_0038DArray *)0x0) {
    local_10 = (byte *)FUN_006b0020(&this->field_0038->flags,(int *)&local_8);
    if (local_8 == 0) {
      DArrayDestroy((DArrayTy *)this->field_0038);
      this->field_0038 = (STManBasisC_field_0038DArray *)0x0;
    }
  }
  if (this->field_003C != (DArrayTy *)0x0) {
    local_14 = (uint *)FUN_006b0020(&this->field_003C->flags,(int *)&local_c);
    if (local_c == 0) {
      DArrayDestroy(this->field_003C);
      this->field_003C = (DArrayTy *)0x0;
    }
  }
  size = local_c + 0x30 + local_8;
  pbVar2 = Library::DKW::LIB::MemAlloc(size);
  uVar1 = DAT_00811788;
  this->field_002C = 2;
  this->field_0034 = uVar1;
  ppuVar6 = &this->field_0020;
  pbVar7 = pbVar2;
  memmove(pbVar7, ppuVar6, 0x28); /* compiler REP MOVS byte copy */
  puVar5 = (uint *)(pbVar2 + 0x28);
  if (local_8 != 0) {
    *puVar5 = local_8;
    pbVar7 = local_10;
    pbVar9 = pbVar2 + 0x2c;
    memmove(pbVar9, pbVar7, local_8); /* compiler REP MOVS byte copy */
    uVar4 = 0;
    FreeAndNull(&local_10);
    puVar5 = (uint *)(pbVar2 + 0x2c + local_8);
  }
  if (local_c != 0) {
    *puVar5 = local_c;
    puVar8 = local_14;
    for (uVar4 = local_c >> 2; puVar5 = puVar5 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = local_c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar5 = (byte)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar5 = (uint *)((int)puVar5 + 1);
    }
    FreeAndNull(&local_14);
    *param_1 = size;
    return pbVar2;
  }
  *param_1 = size;
  return pbVar2;
}

