#include "../../pseudocode_runtime.h"


undefined4 __thiscall TLOBaseTy::FUN_004e2ad0(TLOBaseTy *this,int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  AnonPointee_TLOBaseTy_0000 *pAVar4;
  undefined4 uVar6;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;

  if (param_1 != 2) {
    return 0;
  }
  this->field_04D0 = CASE_1;
  RotateSpr(this,1);
  thunk_FUN_004e5eb0(this->field_0024,param_2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (this->field_0024 != (uint)*(byte *)(this->field_0010 + 0x112d)) goto cf_common_exit_004E2B69;
  uVar2 = GetPlayerRaceId(*(char *)&this->field_023D);
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    pAVar4 = this->vtable;
    uVar6 = 0x20c;
  }
  else {
    if (uVar2 == 2) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this->vtable->field_0090)(4,0x2d4);
      goto cf_common_exit_004E2B69;
    }
    if (uVar2 != 3) goto cf_common_exit_004E2B69;
    pAVar4 = this->vtable;
    uVar6 = 0x38f;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)pAVar4->field_0090)(4,uVar6);
cf_common_exit_004E2B69:
  if (DAT_008117bc == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = this->field_0024;
  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  local_e = this->field_0032;
  local_10 = *(undefined2 *)&this->field_0024;
  local_14 = 0x5de6;
  local_c = (undefined2)param_2;
  uVar6 = thunk_FUN_004e60d0(iVar1,param_2);
  local_a = (short)uVar6 + 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)*DAT_008117bc)(local_24);
  return 0;
}

