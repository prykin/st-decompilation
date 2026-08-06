#include "../../pseudocode_runtime.h"


int FUN_006b7190(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  byte *puVar4;
  uint uVar6;
  AnonShape_006B7190_816EEFBC *pAVar7;
  undefined1 local_14 [4];
  int local_10;
  uint local_c;
  AnonShape_006B7190_816EEFBC *local_8;

  piVar1 = param_1;
LAB_006b719c:
  while( true ) {
    while( true ) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)*piVar1 + 100))((int *)*piVar1,&local_10,local_14,0,0,&local_c);
      if (iVar2 != -0x7788ffe2) {
        if (iVar2 == -0x7788ff42) {
          return 0;
        }
        return iVar2;
      }
      local_8 = Library::DKW::LIB::MemAlloc(local_c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)*piVar1 + 100))
                        ((int *)*piVar1,&local_10,local_14,0,local_8,&local_c);
      if (iVar2 == -0x7788ff42) {
        FUN_006a5e90((short *)local_8);
        return 0;
      }
      if (local_10 != 0) break;
      FreeAndNull(&local_8);
    }
    if (*(char *)local_8 != '\x05') break;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int *)FUN_006b73e0(piVar1[0x14],local_10);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == nullptr) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = Library::DKW::LIB::MemAlloc(0x18);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == nullptr) {
        return -2;
      }
      FUN_006b9910(piVar1 + 0x14,(int)param_1);
    }
    else {
      FUN_006a5e90((short *)param_1[5]);
    }
    param_1[1] = local_10;
    param_1[2] = (uint)(byte)local_8->field_0001;
    param_1[3] = (int)(short)local_8->field_0002;
    param_1[4] = local_c - 8;
    pvVar3 = Library::DKW::LIB::MemAlloc(*(uint *)((int)&local_8->field_0002 + 2));
    param_1[5] = (int)pvVar3;
    uVar6 = param_1[4];
    pAVar7 = local_8 + 1;
    puVar4 = (byte *)param_1[5];
    memmove(puVar4, pAVar7, uVar6); /* compiler REP MOVS byte copy */
    uVar6 = 0;
  }
  if (*(char *)local_8 == '\x06') goto code_r0x006b72b1;
  goto LAB_006b7373;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
code_r0x006b72b1:
  param_1 = (int *)FUN_006b73e0(piVar1[0x14],local_10);
  if (param_1 != nullptr) {
    if (((char)param_1[2] == local_8->field_0001) &&
       ((int)(short)local_8->field_0002 == param_1[3] + -1)) {
      param_1[3] = param_1[3] + -1;
      pAVar7 = local_8 + 1;
      puVar4 = (byte *)(param_1[5] + param_1[4]);
      for (uVar6 = local_c - 8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *(undefined4 *)pAVar7;
        pAVar7 = (AnonShape_006B7190_816EEFBC *)((int)&pAVar7->field_0002 + 2);
        puVar4 = (byte *)(puVar4 + 1);
      }
      for (uVar6 = local_c - 8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)pAVar7;
        pAVar7 = (AnonShape_006B7190_816EEFBC *)&pAVar7->field_0001;
        puVar4 = (byte *)((int)puVar4 + 1);
      }
      param_1[4] = param_1[4] + (local_c - 8);
      if (param_1[3] == 0) {
        FreeAndNull(&local_8);
        local_8 = (AnonShape_006B7190_816EEFBC *)param_1[5];
        local_c = param_1[4];
        FUN_006b98c0(piVar1 + 0x14,param_1);
        FreeAndNull(&param_1);
LAB_006b7373:
        puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(0x14));
        if (puVar4 == nullptr) {
          return -2;
        }
        puVar4[2] = local_10;
        puVar4[4] = local_8;
        puVar4[3] = local_c;
        FUN_006d2530(piVar1 + 0x11,puVar4);
      }
    }
    else {
      FreeAndNull(param_1 + 5);
      FUN_006b98c0(piVar1 + 0x14,param_1);
      FreeAndNull(&param_1);
    }
  }
  goto LAB_006b719c;
}

