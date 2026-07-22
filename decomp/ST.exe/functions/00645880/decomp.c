#include "../../pseudocode_runtime.h"


void __cdecl FUN_00645880(AnonShape_00645880_0D5933D4 *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  Global_sub_00645D30_param_2Enum GVar7;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined4 local_aa;
  undefined2 local_a6;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98 [5];
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined4 local_5c [5];
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  uint local_34;
  undefined1 local_30;
  undefined4 local_2f;
  undefined2 local_2b;
  undefined4 local_29;
  undefined1 local_6;

  iVar3 = *(int *)&param_1->field_0x4;
  memset(local_5c, 0, 0x58); /* compiler bulk-zero initialization */
  iVar5 = 0;
  switch(iVar3) {
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xb4:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbf:
    break;
  default:
    return;
  case 0xa9:
    local_ae = param_1->field_0016;
    local_c0 = *(undefined4 *)param_1;
    local_b0 = *(undefined2 *)&param_1->field_0x14;
    local_a6 = *(undefined2 *)&param_1->field_0x20;
    local_ac = *(undefined2 *)&param_1->field_0x18;
    local_aa = *(undefined4 *)&param_1->field_0x1c;
    local_c4 = 0x82;
    local_b8 = 1;
    local_bc = 1;
    local_a4 = 5;
    local_a0 = 0x32;
    (*g_playSystem_00802A38->vtable->vfunc_08)(0x10a,0,0,&local_c4,0);
    return;
  case 0xb0:
  case 0xbb:
    memset(local_5c, 0, 0x58); /* compiler bulk-zero initialization */
    local_5c[1] = *(undefined4 *)param_1;
    local_48 = *(undefined2 *)&param_1->field_0x8;
    local_46 = param_1->field_000A;
    local_42 = param_1->field_000E;
    local_3e = param_1->field_0012;
    local_44 = *(undefined2 *)&param_1->field_0xc;
    local_3a = param_1->field_0016;
    local_40 = *(undefined2 *)&param_1->field_0x10;
    local_36 = param_1->field_001A;
    local_3c = *(undefined2 *)&param_1->field_0x14;
    local_34 = (uint)(iVar3 != 0xb0);
    local_38 = *(undefined2 *)&param_1->field_0x18;
    local_5c[0] = 0x15e;
    local_5c[3] = 1;
    local_5c[2] = 1;
    (*g_playSystem_00802A38->vtable->vfunc_08)(0x147,0,0,local_5c,0);
    return;
  case 0xb5:
    uVar1 = *(undefined2 *)&param_1->field_0x20;
    puVar6 = local_98;
    memset(puVar6, 0, 0x38); /* compiler bulk-zero initialization */
    puVar6 = (undefined4 *)((byte *)puVar6 + 0x38);
    uVar4 = *(undefined4 *)&param_1->field_0x1c;
    *(undefined2 *)puVar6 = 0;
    local_98[1] = *(undefined4 *)param_1;
    local_7c = (int)(short)param_1->field_0012;
    local_80 = (int)*(short *)&param_1->field_0x10;
    local_84 = (int)(short)param_1->field_000E;
    local_70 = (int)*(short *)&param_1->field_0x18;
    local_74 = (int)(short)param_1->field_0016;
    local_78 = (int)*(short *)&param_1->field_0x14;
    local_98[0] = 0x17c;
    local_98[2] = 1;
    local_98[3] = 1;
    local_68 = 300;
    local_6c = 4;
    local_64 = uVar4;
    local_60 = uVar1;
    (*g_playSystem_00802A38->vtable->vfunc_08)(0x150,0,0,local_98,0);
    return;
  }
  uVar2 = GetPlayerRaceId(*(char *)param_1);
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    iVar3 = thunk_FUN_004e60d0(*(int *)param_1,0x3c);
    if ((0 < iVar3) || (iVar3 = thunk_FUN_004e60d0(*(int *)param_1,0x9a), 0 < iVar3))
    goto LAB_00645950;
  }
  else {
    if (uVar2 == 2) {
      iVar3 = thunk_FUN_004e60d0(*(int *)param_1,0x91);
      if (iVar3 < 1) {
        iVar3 = *(int *)param_1;
        iVar5 = 0x41;
LAB_00645914:
        iVar3 = thunk_FUN_004e60d0(iVar3,iVar5);
        if (iVar3 < 1) goto cf_common_exit_00645953;
      }
    }
    else {
      if (uVar2 != 3) goto cf_common_exit_00645953;
      iVar3 = thunk_FUN_004e60d0(*(int *)param_1,0x4b);
      if (iVar3 < 1) {
        iVar3 = *(int *)param_1;
        iVar5 = 0x4c;
        goto LAB_00645914;
      }
    }
LAB_00645950:
    local_6 = 1;
  }
cf_common_exit_00645953:
  local_48 = *(undefined2 *)&param_1->field_0x8;
  local_46 = param_1->field_000A;
  local_44 = *(undefined2 *)&param_1->field_0xc;
  local_5c[1] = *(undefined4 *)param_1;
  local_40 = *(undefined2 *)&param_1->field_0x10;
  local_42 = param_1->field_000E;
  local_3c = *(undefined2 *)&param_1->field_0x14;
  local_3e = param_1->field_0012;
  local_38 = *(undefined2 *)&param_1->field_0x18;
  local_3a = param_1->field_0016;
  local_5c[0] = 0x28;
  local_5c[3] = 1;
  local_5c[2] = 1;
  uVar2 = GetPlayerRaceId((char)local_5c[1]);
  if ((uVar2 & 0xff) == 1) {
    GVar7 = *(Global_sub_00645D30_param_2Enum *)&param_1->field_0x4;
    iVar3 = *(int *)param_1;
  }
  else {
    if ((uVar2 & 0xff) != 2) goto LAB_006459df;
    GVar7 = *(Global_sub_00645D30_param_2Enum *)&param_1->field_0x4;
    iVar3 = *(int *)param_1;
  }
  uVar4 = thunk_FUN_00645d30(iVar3,GVar7);
  local_30 = (undefined1)uVar4;
LAB_006459df:
  local_2f = *(undefined4 *)&param_1->field_0x1c;
  local_2b = *(undefined2 *)&param_1->field_0x20;
  local_29 = param_1->field_0022;
  local_34 = *(uint *)&param_1->field_0x4;
  local_36 = param_1->field_001A;
  (*g_playSystem_00802A38->vtable->vfunc_08)(0x106,0,0,local_5c,0);
  return;
}

