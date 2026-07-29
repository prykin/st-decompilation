#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007479CD -> 00747F3B @ 007479EC */

uint FUN_007479cd(AnonShape_00747AA5_87CB4B56 *param_1,uint param_2,undefined4 *param_3,int *param_4
                 )

{
  AnonShape_00747AA5_87CB4B56 *pAVar1;
  uint uVar2;
  int iVar3;
  byte *puVar4;
  byte *puVar5;
  undefined4 local_4c [15];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  pAVar1 = param_1;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    iVar3 = FUN_00747f3b(param_1);
    if (iVar3 == 1) {
      uVar2 = 0x80040203;
    }
    else {
      if (param_4 == (int *)0x0) {
        if (1 < param_2) {
          return 0x80070057;
        }
      }
      else {
        *param_4 = 0;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_00747AA5_87CB4B56 *)0x0;
      while (param_2 != 0) {
        FUN_0074b91d(local_4c);
        iVar3 = pAVar1->field_0004;
        pAVar1->field_0004 = iVar3 + 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar3 = (**(code **)(*pAVar1->field_0008 + 0x34))(iVar3,local_4c);
        if (iVar3 != 0) {
LAB_00747a71:
          FUN_0074b916((int)local_4c);
          break;
        }
        puVar4 = (byte *)(CoTaskMemAlloc(0x48));
        *param_3 = puVar4;
        if (puVar4 == (undefined4 *)0x0) goto LAB_00747a71;
        param_3 = param_3 + 1;
        puVar5 = (byte *)(local_4c);
        memmove(puVar4, puVar5, 0x48); /* compiler REP MOVS byte copy */
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_00747AA5_87CB4B56 *)&param_1->field_0x1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 - 1;
        local_8 = 0;
        local_c = 0;
        local_10 = 0;
        FUN_0074b916((int)local_4c);
      }
      if (param_4 != (int *)0x0) {
        *param_4 = (int)param_1;
      }
      uVar2 = (uint)(param_2 != 0);
    }
  }
  return uVar2;
}

