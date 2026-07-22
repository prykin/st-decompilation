#include "../../pseudocode_runtime.h"


undefined4 __thiscall TLOBaseTy::FUN_004e2c30(TLOBaseTy *this,uint param_1)

{
  undefined1 uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar2;
  undefined4 uVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  uint uVar4;
  int iVar5;
  TLOBaseTyVTable *pTVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int *piVar10;
  int *piVar11;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  short local_46;
  byte local_40 [20];
  undefined4 local_2c [5];
  byte *local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  int local_8;

  uVar1 = thunk_FUN_004e6140(this->field_0024,param_1);
  iVar2 = thunk_FUN_004e60d0(this->field_0024,param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT31(extraout_var,uVar1) <= iVar2) goto cf_common_exit_004E2FE4;
  iVar2 = thunk_FUN_004ac910(&this->field_01D5,'\f');
  if (iVar2 != this->field_01F5->field_01C4) {
    return 0;
  }
  local_10 = thunk_FUN_004e60d0(this->field_0024,param_1);
  iVar2 = this->field_0024;
  puVar7 = &g_playerRuntime[iVar2].field480_0x2eb;
  puVar8 = local_2c;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = &g_playerRuntime[iVar2].field494_0x2ff;
  pbVar9 = local_40;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pbVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    pbVar9 = pbVar9 + 4;
  }
  thunk_FUN_004e6310(iVar2,param_1,local_10 + 1);
  thunk_FUN_004e5f20(this->field_0024,param_1);
  if (DAT_008117bc != (undefined4 *)0x0) {
    iVar2 = this->field_0024;
    memset(local_60, 0, 0x20); /* compiler bulk-zero initialization */
    local_4a = this->field_0032;
    local_4c = *(undefined2 *)&this->field_0024;
    local_50 = 0x5de7;
    local_48 = (undefined2)param_1;
    uVar3 = thunk_FUN_004e60d0(iVar2,param_1);
    local_46 = (short)uVar3;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_60);
    memset(local_60, 0, 0x20); /* compiler bulk-zero initialization */
    local_4c = *(undefined2 *)&this->field_0024;
    local_14 = local_2c;
    local_50 = 0x5dea;
    local_10 = 0;
    do {
      uVar4 = local_10;
      if (((((*(byte *)((int)local_14 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) !=
             0) && (local_18 = local_40,
                   (local_18[(int)(local_10 ^ 7) >> 3] >> ((local_10 ^ 7) & 7) & 1) == 0)) &&
          (local_18 = (byte *)&g_playerRuntime[this->field_0024].field480_0x2eb,
          (*(byte *)((int)local_18 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) != 0))
         && (local_18 = (byte *)&g_playerRuntime[this->field_0024].field494_0x2ff,
            (*(byte *)((int)local_18 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) != 0
            )) {
        uVar1 = thunk_FUN_004e6140(this->field_0024,local_10);
        iVar2 = thunk_FUN_004e60d0(this->field_0024,uVar4);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (iVar2 < CONCAT31(extraout_var_00,uVar1)) {
          local_48 = (undefined2)uVar4;
          uVar3 = thunk_FUN_004e60d0(this->field_0024,uVar4);
          local_46 = (short)uVar3 + 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(local_60);
        }
      }
      local_10 = uVar4 + 1;
    } while ((int)local_10 < 0x9b);
  }
  if (this->field_0024 != (uint)(byte)this->field_0010->field_112D) goto cf_common_exit_004E2FE4;
  thunk_FUN_0052af50(0,(float)this->field_01F9,(float)this->field_01FD);
  piVar11 = &local_c;
  piVar10 = &local_8;
  local_8 = 0;
  local_c = 0;
  uVar4 = GetPlayerRaceId(*(char *)&this->field_0024);
  thunk_FUN_004e6e10(uVar4 & 0xff,param_1,piVar10,piVar11);
  if (local_8 != 0) {
    uVar4 = GetPlayerRaceId(*(char *)&this->field_0024);
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 1) {
      pTVar6 = this->vtable;
      uVar3 = 0x5f;
LAB_004e2efc:
      (*pTVar6->vfunc_90)(6,uVar3);
    }
    else if (uVar4 == 2) {
      (*this->vtable->vfunc_90)(6,0x60);
    }
    else if (uVar4 == 3) {
      pTVar6 = this->vtable;
      uVar3 = 0x61;
      goto LAB_004e2efc;
    }
  }
  if (local_c != 0) {
    uVar4 = GetPlayerRaceId(*(char *)&this->field_0024);
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 1) {
      pTVar6 = this->vtable;
      uVar3 = 0x5c;
LAB_004e2f42:
      (*pTVar6->vfunc_90)(6,uVar3);
    }
    else if (uVar4 == 2) {
      (*this->vtable->vfunc_90)(6,0x5d);
    }
    else if (uVar4 == 3) {
      pTVar6 = this->vtable;
      uVar3 = 0x5e;
      goto LAB_004e2f42;
    }
  }
  if ((local_8 == 0) && (local_c == 0)) {
    uVar4 = GetPlayerRaceId(*(char *)&this->field_0024);
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 1) {
      pTVar6 = this->vtable;
      uVar3 = 0x59;
LAB_004e2f8d:
      (*pTVar6->vfunc_90)(6,uVar3);
    }
    else if (uVar4 == 2) {
      (*this->vtable->vfunc_90)(6,0x5a);
    }
    else if (uVar4 == 3) {
      pTVar6 = this->vtable;
      uVar3 = 0x5b;
      goto LAB_004e2f8d;
    }
  }
  uVar4 = GetPlayerRaceId(*(char *)&this->field_023D);
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    pTVar6 = this->vtable;
    uVar3 = 0x20d;
  }
  else {
    if (uVar4 == 2) {
      (*this->vtable->vfunc_90)(4,0x2d5);
      goto cf_common_exit_004E2FE4;
    }
    if (uVar4 != 3) goto cf_common_exit_004E2FE4;
    pTVar6 = this->vtable;
    uVar3 = 0x390;
  }
  (*pTVar6->vfunc_90)(4,uVar3);
cf_common_exit_004E2FE4:
  this->field_04D0 = CASE_0;
  RotateSpr(this,1);
  return 1;
}

