#include "../../pseudocode_runtime.h"


undefined4 __thiscall TLOBaseTy::FUN_004e2c30(TLOBaseTy *this,uint param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar4;
  undefined4 uVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int local_EAX_634;
  int uVar5;
  int local_EAX_741;
  int local_EAX_816;
  int local_EAX_884;
  TLOBaseTyVTable *pTVar7;
  byte *puVar8;
  byte *puVar9;
  byte *pbVar10;
  int *piVar11;
  undefined2 uVar12;
  int *piVar13;
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

  uVar3 = thunk_FUN_004e6140((int)this->field_0024,param_1);
  iVar4 = thunk_FUN_004e60d0((int)this->field_0024,param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT31(extraout_var,uVar3) <= iVar4) goto cf_common_exit_004E2FE4;
  iVar4 = thunk_FUN_004ac910(&this->field_01D5,'\f');
  if (iVar4 != this->field_01F5->field_01C4) {
    return 0;
  }
  local_10 = thunk_FUN_004e60d0((int)this->field_0024,param_1);
  pbVar1 = this->field_0024;
  puVar8 = (byte *)&g_packedRecords_A62x8[(int)pbVar1].field_0x2eb;
  puVar9 = (byte *)(local_2c);
  memmove(puVar9, puVar8, 0x14); /* compiler REP MOVS byte copy */
  iVar4 = 0;
  puVar8 = (byte *)(&g_packedRecords_A62x8[(int)pbVar1].field376_0x2ff);
  pbVar10 = local_40;
  memmove(pbVar10, puVar8, 0x14); /* compiler REP MOVS byte copy */
  thunk_FUN_004e6310(pbVar1,param_1,local_10 + 1);
  thunk_FUN_004e5f20(this->field_0024,param_1);
  if (DAT_008117bc != nullptr) {
    pbVar1 = this->field_0024;
    memset(local_60, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    local_4a = this->field_0032;
    local_4c = *(undefined2 *)&this->field_0024;
    local_50 = 0x5de7;
    local_48 = (undefined2)param_1;
    uVar6 = thunk_FUN_004e60d0((int)pbVar1,param_1);
    local_46 = (short)uVar6;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_60);
    memset(local_60, 0, 0x20); /* compiler bulk-zero initialization */
    local_4c = *(undefined2 *)&this->field_0024;
    local_14 = local_2c;
    local_50 = 0x5dea;
    local_10 = 0;
    do {
      uVar2 = local_10;
      if (((((*(byte *)((int)local_14 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) !=
             0) && (local_18 = local_40,
                   (local_18[(int)(local_10 ^ 7) >> 3] >> ((local_10 ^ 7) & 7) & 1) == 0)) &&
          (local_18 = &g_packedRecords_A62x8[(int)this->field_0024].field_0x2eb,
          (local_18[(int)(local_10 ^ 7) >> 3] >> ((local_10 ^ 7) & 7) & 1) != 0)) &&
         (local_18 = (byte *)&g_packedRecords_A62x8[(int)this->field_0024].field376_0x2ff,
         (*(byte *)((int)local_18 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) != 0))
      {
        uVar3 = thunk_FUN_004e6140((int)this->field_0024,local_10);
        iVar4 = thunk_FUN_004e60d0((int)this->field_0024,uVar2);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (iVar4 < CONCAT31(extraout_var_00,uVar3)) {
          local_48 = (undefined2)uVar2;
          uVar6 = thunk_FUN_004e60d0((int)this->field_0024,uVar2);
          local_46 = (short)uVar6 + 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(local_60);
        }
      }
      local_10 = uVar2 + 1;
    } while ((int)local_10 < 0x9b);
  }
  if (this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D)
  goto cf_common_exit_004E2FE4;
  thunk_FUN_0052af50(0,(float)this->field_01F9,(float)this->field_01FD);
  piVar13 = &local_c;
  piVar11 = &local_8;
  local_8 = 0;
  local_c = 0;
  local_EAX_634 = LookupRecordByte(*(char *)&this->field_0024);
  local_EAX_634 = (int)(byte)local_EAX_634;
  thunk_FUN_004e6e10(local_EAX_634,param_1,piVar11,piVar13);
  if (local_8 != 0) {
    uVar5 = LookupRecordByte(*(char *)&this->field_0024);
    uVar5 = (int)(byte)uVar5;
    if (uVar5 == 1) {
      pTVar7 = this->vtable;
      uVar12 = 0x5f;
LAB_004e2efc:
      (*pTVar7->vfunc_90)(this,6,uVar12);
    }
    else if (uVar5 == 2) {
      this->vfunc_90(6,0x60);
    }
    else if (uVar5 == 3) {
      pTVar7 = this->vtable;
      uVar12 = 0x61;
      goto LAB_004e2efc;
    }
  }
  if (local_c != 0) {
    local_EAX_741 = LookupRecordByte(*(char *)&this->field_0024);
    local_EAX_741 = (int)(byte)local_EAX_741;
    if (local_EAX_741 == 1) {
      pTVar7 = this->vtable;
      uVar12 = 0x5c;
LAB_004e2f42:
      (*pTVar7->vfunc_90)(this,6,uVar12);
    }
    else if (local_EAX_741 == 2) {
      this->vfunc_90(6,0x5d);
    }
    else if (local_EAX_741 == 3) {
      pTVar7 = this->vtable;
      uVar12 = 0x5e;
      goto LAB_004e2f42;
    }
  }
  if ((local_8 == 0) && (local_c == 0)) {
    local_EAX_816 = LookupRecordByte(*(char *)&this->field_0024);
    local_EAX_816 = (int)(byte)local_EAX_816;
    if (local_EAX_816 == 1) {
      pTVar7 = this->vtable;
      uVar12 = 0x59;
LAB_004e2f8d:
      (*pTVar7->vfunc_90)(this,6,uVar12);
    }
    else if (local_EAX_816 == 2) {
      this->vfunc_90(6,0x5a);
    }
    else if (local_EAX_816 == 3) {
      pTVar7 = this->vtable;
      uVar12 = 0x5b;
      goto LAB_004e2f8d;
    }
  }
  local_EAX_884 = LookupRecordByte(*(char *)&this->field_023D);
  local_EAX_884 = (int)(byte)local_EAX_884;
  if (local_EAX_884 == 1) {
    pTVar7 = this->vtable;
    uVar12 = 0x20d;
  }
  else {
    if (local_EAX_884 == 2) {
      this->vfunc_90(4,0x2d5);
      goto cf_common_exit_004E2FE4;
    }
    if (local_EAX_884 != 3) goto cf_common_exit_004E2FE4;
    pTVar7 = this->vtable;
    uVar12 = 0x390;
  }
  (*pTVar7->vfunc_90)(this,4,uVar12);
cf_common_exit_004E2FE4:
  this->field_04D0 = CASE_0;
  RotateSpr(this,1);
  return 1;
}

