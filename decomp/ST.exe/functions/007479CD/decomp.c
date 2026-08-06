#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007479CD -> 00747F3B @ 007479EC

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00747A44 exact 4-byte output store from return of OLE32.DLL::CoTaskMemAlloc */

uint FUN_007479cd(AnonShape_00747AA5_87CB4B56 *param_1,uint param_2,LPVOID *param_3,int *param_4)

{
  AnonShape_00747AA5_87CB4B56 *pAVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  byte *puVar6;
  undefined4 local_4c [15];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  pAVar1 = param_1;
  if (param_3 == nullptr) {
    uVar2 = 0x80004003;
  }
  else {
    iVar3 = FUN_00747f3b(param_1);
    if (iVar3 == 1) {
      uVar2 = 0x80040203;
    }
    else {
      if (param_4 == nullptr) {
        if (1 < param_2) {
          return 0x80070057;
        }
      }
      else {
        *param_4 = 0;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
      while (param_2 != 0) {
        FUN_0074b91d(local_4c);
        iVar4 = pAVar1->field_0004;
        pAVar1->field_0004 = iVar4 + 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*pAVar1->field_0008 + 0x34))(iVar4,local_4c);
        if (iVar4 != 0) {
LAB_00747a71:
          FUN_0074b916((int)local_4c);
          break;
        }
        puVar5 = (byte *)(CoTaskMemAlloc(0x48));
        *param_3 = puVar5;
        if (puVar5 == nullptr) goto LAB_00747a71;
        param_3 = param_3 + 1;
        puVar6 = (byte *)(local_4c);
        memmove(puVar5, puVar6, 0x48); /* compiler REP MOVS byte copy */
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_00747AA5_87CB4B56 *)&param_1->field_0x1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 - 1;
        local_8 = 0;
        local_c = 0;
        local_10 = 0;
        FUN_0074b916((int)local_4c);
      }
      if (param_4 != nullptr) {
        *param_4 = (int)param_1;
      }
      uVar2 = (uint)(param_2 != 0);
    }
  }
  return uVar2;
}

