#include "../../pseudocode_runtime.h"


uint FUN_00757530(AnonShape_00757530_EEED7D69 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  AnonNested_00757530_000C_743CE253 *pAVar4;
  AnonShape_00757530_EEED7D69 *pAVar6;
  AnonNested_00757530_000C_743CE253 **ppAVar7;

  if (param_2 == 0) {
    ppAVar7 = (AnonNested_00757530_000C_743CE253 **)&param_1[1].field_0x8;
    pAVar6 = param_1 + 2;
  }
  else {
    ppAVar7 = &param_1[1].field_000C;
    pAVar6 = (AnonShape_00757530_EEED7D69 *)&param_1[2].field_0x4;
  }
  sVar2 = param_1->field_000C->field_0034;
  if (sVar2 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (*(code *)param_1->field_000C->field_0008)(param_3 + 2);
  }
  else {
    iVar3 = (int)sVar2;
  }
  uVar1 = iVar3 + 8;
  if ((int)*(uint *)pAVar6 < (int)uVar1) {
    pAVar4 = (AnonNested_00757530_000C_743CE253 *)FUN_006bfb50((undefined4 *)*ppAVar7,uVar1);
    *ppAVar7 = pAVar4;
    if (pAVar4 == nullptr) {
      return 0;
    }
    *(uint *)pAVar6 = uVar1;
  }
  if (uVar1 != 0) {
    pAVar4 = *ppAVar7;
    memmove(pAVar4, param_3, uVar1); /* compiler REP MOVS byte copy */
  }
  return uVar1;
}

