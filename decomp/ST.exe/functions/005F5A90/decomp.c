#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated return.
   Evidence: 005F5A90 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005F3098

   [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall STBHEShellC::sub_005F5A90(STBHEShellC *this,int *param_1)

{
  AnonPointee_TLOBaseTy_0607 *allocation;
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar4;
  byte *pbVar5;
  AnonPointee_TLOBaseTy_0607 *pAVar6;
  byte *pbVar7;
  byte *local_c;
  uint local_8;

  allocation = Library::DKW::LIB::MemAlloc(0x128);
  this->field_016D = this->field_001C;
  puVar4 = (undefined4 *)&this->field_0x4d;
  pAVar6 = allocation;
  for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
    pAVar6->field_0000 = *puVar4;
    puVar4 = puVar4 + 1;
    pAVar6 = (AnonPointee_TLOBaseTy_0607 *)&pAVar6->field_0004;
  }
  allocation->field_000C = 2;
  if (this->field_0169 != (STBHEShellC_field_0169DArray *)0x0) {
    local_c = (byte *)FUN_006b0020(&this->field_0169->flags,(int *)&local_8);
    pbVar1 = Library::DKW::LIB::MemRealloc(allocation,local_8 + 300);
    *(uint *)(pbVar1 + 0x128) = local_8;
    pbVar5 = local_c;
    pbVar7 = pbVar1 + 300;
    memmove(pbVar7, pbVar5, local_8); /* compiler REP MOVS byte copy */
    if (local_c != (byte *)0x0) {
      FreeAndNull(&local_c);
    }
    *param_1 = local_8 + 0x128;
    return pbVar1;
  }
  *param_1 = 0x128;
  return (byte *)allocation;
}

