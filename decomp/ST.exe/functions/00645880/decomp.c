#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl FUN_00645880(RecoveredRecord_STBoatC_00645880 *param_1)

{
  ushort uVar1;
  int local_EAX_69;
  int uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  Global_sub_00645D30_param_2Enum GVar7;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  ushort local_b0;
  short local_ae;
  short local_ac;
  uint local_aa;
  ushort local_a6;
  uint local_a4;
  uint local_a0;
  uint local_98 [5];
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  ushort local_60;
  uint local_5c [5];
  ushort local_48;
  ushort local_46;
  ushort local_44;
  ushort local_42;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  short local_3a;
  short local_38;
  ushort local_36;
  uint local_34;
  byte local_30;
  uint local_2f;
  ushort local_2b;
  uint local_29;
  byte local_6;
  uVar6 = param_1->field_0004;
  memset(local_5c, 0, 0x58); /* compiler bulk-zero initialization */
  iVar4 = 0;
  switch(uVar6) {
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
    local_c0 = param_1->field_0000;
    local_b0 = param_1->field_0014;
    local_a6 = param_1->field_0020;
    local_ac = param_1->field_0018;
    local_aa = param_1->field_001C;
    local_c4 = 0x82;
    local_b8 = 1;
    local_bc = 1;
    local_a4 = 5;
    local_a0 = 0x32;
    /* ST_CALLSITE[00645AA8]: CALL dword ptr [EDX + 0x8] */
    g_playSystem_00802A38->vfunc_8(0x10a,nullptr,nullptr,(short)&local_c4,0);
    return;
  case 0xb0:
  case 0xbb:
    memset(local_5c, 0, 0x58); /* compiler bulk-zero initialization */
    local_5c[1] = param_1->field_0000;
    local_48 = param_1->field_0008;
    local_46 = param_1->field_000A;
    local_42 = param_1->field_000E;
    local_3e = param_1->field_0012;
    local_44 = param_1->field_000C;
    local_3a = param_1->field_0016;
    local_40 = param_1->field_0010;
    local_36 = param_1->field_001A;
    local_3c = param_1->field_0014;
    local_34 = (uint)(uVar6 != 0xb0);
    local_38 = param_1->field_0018;
    local_5c[0] = 0x15e;
    local_5c[3] = 1;
    local_5c[2] = 1;
    /* ST_CALLSITE[00645B4A]: CALL dword ptr [EAX + 0x8] */
    g_playSystem_00802A38->vfunc_8(0x147,nullptr,nullptr,(short)local_5c,0);
    return;
  case 0xb5:
    uVar1 = param_1->field_0020;
    puVar5 = local_98;
    memset(puVar5, 0, 0x3a); /* compiler bulk-zero initialization */
    puVar5 = (undefined4 *)((byte *)puVar5 + 0x38);
    uVar6 = param_1->field_001C;
    local_98[1] = param_1->field_0000;
    local_7c = (short)param_1->field_0012;
    local_80 = (short)param_1->field_0010;
    local_84 = (short)param_1->field_000E;
    local_70 = (int)param_1->field_0018;
    local_74 = (int)param_1->field_0016;
    local_78 = (short)param_1->field_0014;
    local_98[0] = 0x17c;
    local_98[2] = 1;
    local_98[3] = 1;
    local_68 = 300;
    local_6c = 4;
    local_64 = uVar6;
    local_60 = uVar1;
    /* ST_CALLSITE[00645BE8]: CALL dword ptr [EAX + 0x8] */
    g_playSystem_00802A38->vfunc_8(0x150,nullptr,nullptr,(short)local_98,0);
    return;
  }
  /* ST_CALLSITE[006458C5]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  local_EAX_69 = LookupRecordByte((char)param_1->field_0000);
  local_EAX_69 = (int)(byte)local_EAX_69;
  if (local_EAX_69 == 1) {
    iVar4 = thunk_FUN_004e60d0(param_1->field_0000,0x3c);
    if ((0 < iVar4) || (iVar4 = thunk_FUN_004e60d0(param_1->field_0000,0x9a), 0 < iVar4))
    goto LAB_00645950;
  }
  else {
    if (local_EAX_69 == 2) {
      iVar4 = thunk_FUN_004e60d0(param_1->field_0000,0x91);
      if (iVar4 < 1) {
        uVar6 = param_1->field_0000;
        iVar4 = 0x41;
LAB_00645914:
        iVar4 = thunk_FUN_004e60d0(uVar6,iVar4);
        if (iVar4 < 1) goto cf_common_exit_00645953;
      }
    }
    else {
      if (local_EAX_69 != 3) goto cf_common_exit_00645953;
      iVar4 = thunk_FUN_004e60d0(param_1->field_0000,0x4b);
      if (iVar4 < 1) {
        uVar6 = param_1->field_0000;
        iVar4 = 0x4c;
        goto LAB_00645914;
      }
    }
LAB_00645950:
    local_6 = 1;
  }
cf_common_exit_00645953:
  local_48 = param_1->field_0008;
  local_46 = param_1->field_000A;
  local_44 = param_1->field_000C;
  local_5c[1] = param_1->field_0000;
  local_40 = param_1->field_0010;
  local_42 = param_1->field_000E;
  local_3c = param_1->field_0014;
  local_3e = param_1->field_0012;
  local_38 = param_1->field_0018;
  local_3a = param_1->field_0016;
  local_5c[0] = 0x28;
  local_5c[3] = 1;
  local_5c[2] = 1;
  /* ST_CALLSITE[006459B4]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  uVar2 = LookupRecordByte((char)local_5c[1]);
  uVar2 = (int)(byte)uVar2;
  if (uVar2 == 1) {
    GVar7 = param_1->field_0004;
    uVar6 = param_1->field_0000;
  }
  else {
    if (uVar2 != 2) goto LAB_006459df;
    GVar7 = param_1->field_0004;
    uVar6 = param_1->field_0000;
  }
  uVar3 = thunk_FUN_00645d30(uVar6,GVar7);
  local_30 = (undefined1)uVar3;
LAB_006459df:
  local_2f = param_1->field_001C;
  local_2b = param_1->field_0020;
  local_29 = param_1->field_0022;
  local_34 = param_1->field_0004;
  local_36 = param_1->field_001A;
  /* ST_CALLSITE[00645A18]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x106,nullptr,nullptr,(short)local_5c,0);
  return;
}

