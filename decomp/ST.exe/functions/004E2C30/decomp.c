#include "../../pseudocode_runtime.h"


undefined4 __thiscall TLOBaseTy::FUN_004e2c30(TLOBaseTy *this,uint param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar3;
  undefined4 uVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int local_EAX_634;
  int uVar5;
  uint uVar6;
  int local_EAX_741;
  int local_EAX_816;
  int local_EAX_884;
  TLOBaseTyVTable *pTVar7;
  byte *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
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

  uVar2 = thunk_FUN_004e6140((int)this->field_0024,param_1);
  iVar3 = thunk_FUN_004e60d0((int)this->field_0024,param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT31(extraout_var,uVar2) <= iVar3) goto cf_common_exit_004E2FE4;
  iVar3 = thunk_FUN_004ac910(&this->field_01D5,'\f');
  if (iVar3 != this->field_01F5->field_01C4) {
    return 0;
  }
  local_10 = thunk_FUN_004e60d0((int)this->field_0024,param_1);
  pbVar1 = this->field_0024;
  puVar8 = (byte *)(&g_playerRuntime[(int)pbVar1].field480_0x2eb);
  puVar9 = local_2c;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    puVar9 = puVar9 + 1;
  }
  puVar8 = (byte *)(&g_playerRuntime[(int)pbVar1].field494_0x2ff);
  pbVar10 = local_40;
  memmove(pbVar10, puVar8, 0x14); /* compiler REP MOVS byte copy */
  thunk_FUN_004e6310(pbVar1,param_1,local_10 + 1);
  thunk_FUN_004e5f20(this->field_0024,param_1);
  if (DAT_008117bc != (undefined4 *)0x0) {
    pbVar1 = this->field_0024;
    memset(local_60, 0, 0x20); /* compiler bulk-zero initialization */
    iVar3 = 0;
    local_4a = this->field_0032;
    local_4c = *(undefined2 *)&this->field_0024;
    local_50 = 0x5de7;
    local_48 = (undefined2)param_1;
    uVar4 = thunk_FUN_004e60d0((int)pbVar1,param_1);
    local_46 = (short)uVar4;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_60);
    memset(local_60, 0, 0x20); /* compiler bulk-zero initialization */
    local_4c = *(undefined2 *)&this->field_0024;
    local_14 = local_2c;
    local_50 = 0x5dea;
    local_10 = 0;
    do {
      uVar6 = local_10;
      if (((((*(byte *)((int)local_14 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) !=
             0) && (local_18 = local_40,
                   (local_18[(int)(local_10 ^ 7) >> 3] >> ((local_10 ^ 7) & 7) & 1) == 0)) &&
          (local_18 = (byte *)&g_playerRuntime[(int)this->field_0024].field480_0x2eb,
          (*(byte *)((int)local_18 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) != 0))
         && (local_18 = (byte *)&g_playerRuntime[(int)this->field_0024].field494_0x2ff,
            (*(byte *)((int)local_18 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) != 0
            )) {
        uVar2 = thunk_FUN_004e6140((int)this->field_0024,local_10);
        iVar3 = thunk_FUN_004e60d0((int)this->field_0024,uVar6);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (iVar3 < CONCAT31(extraout_var_00,uVar2)) {
          local_48 = (undefined2)uVar6;
          uVar4 = thunk_FUN_004e60d0((int)this->field_0024,uVar6);
          local_46 = (short)uVar4 + 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(local_60);
        }
      }
      local_10 = uVar6 + 1;
    } while ((int)local_10 < 0x9b);
  }
  if (this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D)
  goto cf_common_exit_004E2FE4;
  thunk_FUN_0052af50(0,(float)this->field_01F9,(float)this->field_01FD);
  piVar12 = &local_c;
  piVar11 = &local_8;
  local_8 = 0;
  local_c = 0;
  local_EAX_634 = GetPlayerRaceId(*(char *)&this->field_0024);
  thunk_FUN_004e6e10(local_EAX_634 & 0xff,param_1,piVar11,piVar12);
  if (local_8 != 0) {
    uVar5 = GetPlayerRaceId(*(char *)&this->field_0024);
    uVar6 = uVar5 & 0xff;
    if (uVar6 == 1) {
      pTVar7 = this->vtable;
      uVar4 = 0x5f;
LAB_004e2efc:
      (*pTVar7->vfunc_90)(this,6,uVar4);
    }
    else if (uVar6 == 2) {
      this->vfunc_90(6,0x60);
    }
    else if (uVar6 == 3) {
      pTVar7 = this->vtable;
      uVar4 = 0x61;
      goto LAB_004e2efc;
    }
  }
  if (local_c != 0) {
    local_EAX_741 = GetPlayerRaceId(*(char *)&this->field_0024);
    uVar6 = local_EAX_741 & 0xff;
    if (uVar6 == 1) {
      pTVar7 = this->vtable;
      uVar4 = 0x5c;
LAB_004e2f42:
      (*pTVar7->vfunc_90)(this,6,uVar4);
    }
    else if (uVar6 == 2) {
      this->vfunc_90(6,0x5d);
    }
    else if (uVar6 == 3) {
      pTVar7 = this->vtable;
      uVar4 = 0x5e;
      goto LAB_004e2f42;
    }
  }
  if ((local_8 == 0) && (local_c == 0)) {
    local_EAX_816 = GetPlayerRaceId(*(char *)&this->field_0024);
    uVar6 = local_EAX_816 & 0xff;
    if (uVar6 == 1) {
      pTVar7 = this->vtable;
      uVar4 = 0x59;
LAB_004e2f8d:
      (*pTVar7->vfunc_90)(this,6,uVar4);
    }
    else if (uVar6 == 2) {
      this->vfunc_90(6,0x5a);
    }
    else if (uVar6 == 3) {
      pTVar7 = this->vtable;
      uVar4 = 0x5b;
      goto LAB_004e2f8d;
    }
  }
  local_EAX_884 = GetPlayerRaceId(*(char *)&this->field_023D);
  uVar6 = local_EAX_884 & 0xff;
  if (uVar6 == 1) {
    pTVar7 = this->vtable;
    uVar4 = 0x20d;
  }
  else {
    if (uVar6 == 2) {
      this->vfunc_90(4,0x2d5);
      goto cf_common_exit_004E2FE4;
    }
    if (uVar6 != 3) goto cf_common_exit_004E2FE4;
    pTVar7 = this->vtable;
    uVar4 = 0x390;
  }
  (*pTVar7->vfunc_90)(this,4,uVar4);
cf_common_exit_004E2FE4:
  this->field_04D0 = CASE_0;
  RotateSpr(this,1);
  return 1;
}

