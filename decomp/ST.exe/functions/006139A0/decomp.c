#include "../../pseudocode_runtime.h"


int __thiscall FUN_006139a0(void *this,int *param_1,int *param_2,int *param_3)

{
  short *psVar1;
  short sVar2;
  Global_sub_006141B0_param_2Enum GVar3;
  int iVar4;
  int iVar6;
  int local_EAX_841;
  uint uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_8 = 0;
  local_18 = 0;
  local_10 = 0;
  if (STField<int>(this,0x256) != 1) {
    if (STField<int>(this,0x256) != 2) {
      return 0;
    }
    iVar7 = STField<int>(this,0x298);
    uVar5 = g_playSystem_00802A38->field_00E4;
    STField<uint>(this,0x298) = uVar5;
    iVar7 = (uVar5 - iVar7) * STField<int>(this,0x288);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    iVar9 = STField<int>(this,0x280);
    sVar2 = STField<short>(this,0x25c);
    iVar8 = (STField<int>(this,0x284) * iVar7) / 10000 + (int)STField<short>(this,0x25e);
    if ((STField<int>(this,0x20c) == 4) && (STField<short>(this,0x270) != 0)) {
      iVar8 = iVar8 + STField<short>(this,0x270);
    }
    *param_1 = (STField<int>(this,0x27c) * iVar7) / 10000 + (int)STField<short>(this,0x25a);
    *param_2 = (iVar9 * iVar7) / 10000 + (int)sVar2;
    *param_3 = iVar8;
    return 1;
  }
  iVar7 = STField<int>(this,0x298);
  uVar5 = g_playSystem_00802A38->field_00E4;
  STField<uint>(this,0x298) = uVar5;
  local_14 = (uVar5 - iVar7) * STField<int>(this,0x288);
  iVar9 = STField<int>(this,0x28c) + local_14;
  STField<int>(this,0x28c) = iVar9;
  iVar8 = iVar9 - STField<int>(this,0x290);
  iVar7 = STField<int>(this,0x2dd) + STField<int>(this,0x2d9) * 0x1c;
  if (STField<int>(iVar7,0x8) < iVar8) {
    iVar8 = iVar8 - STField<int>(iVar7,0x8);
    local_c = (undefined4 *)(STField<int>(this,0x2d9) + 1);
    STField<int>(this,0x290) = iVar9 - iVar8;
    STField<undefined4 *>(this,0x2d9) = local_c;
    if ((2 < STField<int>(this,0x2d5)) && (STField<int>(this,0x2d5) + -3 <= (int)local_c)) {
      if (STField<char>(this,0x2ea) != '\0') {
        iVar7 = thunk_FUN_00616280(this,&local_24,&local_20,&local_1c);
        if ((-1 < iVar7) &&
           (local_EAX_841 =
                 thunk_FUN_00616a80(this,local_24,local_20,local_1c,param_1,param_2,param_3),
           local_EAX_841 != 0)) {
          return 1;
        }
        STField<undefined4>(this,0x256) = 2;
        STField<undefined4>(this,0x20c) = 4;
        STField<undefined2>(this,0x270) = 0xffff;
        uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar5;
        STField<uint>(this,0x294) =
             (uVar5 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
        STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
        goto LAB_00613c8b;
      }
      if (STField<int>(this,0x2d1) != 0) {
        sVar2 = STField<short>(this,0x25e);
        iVar7 = STBiasedDiv16(sVar2, 200); /* exact signed 16-bit grid-index division */
        sVar2 = STField<short>(this,0x25c);
        iVar9 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
        sVar2 = STField<short>(this,0x25a);
        iVar4 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
        iVar6 = thunk_FUN_006151e0(this,local_c,iVar4,iVar9,iVar7);
        if ((iVar6 != 0) && (STField<char>(this,0x2ea) == '\0')) {
          return local_8;
        }
      }
    }
    iVar9 = STField<int>(this,0x2d9);
    if (STField<int>(this,0x2d5) + -1 <= iVar9) {
      STField<undefined4>(this,0x20c) = 4;
      STField<undefined2>(this,0x270) = 0xffff;
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      STField<uint>(this,0x294) = (uVar5 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
      STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
      STField<undefined4>(this,0x256) = 2;
LAB_00613c8b:
      iVar7 = thunk_FUN_006173a0(this,local_14,param_1,param_2,param_3);
      if (0 < iVar7) {
        return iVar7;
      }
      thunk_FUN_0060ec00(this);
      STField<undefined4>(this,0x20c) = 9;
      return iVar7;
    }
    iVar7 = STField<int>(this,0x2dd) + iVar9 * 0x1c;
    if (*(int *)(STField<int>(this,0x2dd) + 0x18 + iVar9 * 0x1c) != 8) {
      STField<int>(this,0x27c) =
           ((&SHORT_007ed570)[STField<short>(iVar7,0x6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + STField<short>(iVar7,0x6) * 4);
      STField<int>(this,0x280) =
           ((&SHORT_007ed572)[STField<short>(iVar7,0x6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + STField<short>(iVar7,0x6) * 4);
      STField<int>(this,0x284) =
           ((&SHORT_007ed574)[STField<short>(iVar7,0x6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + STField<short>(iVar7,0x6) * 4);
    }
  }
  GVar3 = STField<Global_sub_006141B0_param_2Enum>(iVar7,0x18);
  if (GVar3 == 0) {
    local_14 = (iVar8 * 51000) / (*(int *)(&DAT_007cfe74 + STField<short>(iVar7,0x6) * 4) * 0xc9);
  }
  else {
    if (GVar3 == CASE_8) {
      local_14 = (STField<int>(this,0x2e1) * iVar8) / STField<int>(iVar7,0x8);
    }
    else {
      local_14 = (iVar8 * 51000) / (*(int *)(&DAT_007cfe74 + STField<short>(iVar7,0x6) * 4) * 0xc9);
    }
    local_18 = thunk_FUN_006141b0(this,local_14,GVar3,&local_28,&local_10);
  }
  psVar1 = (short *)(STField<int>(this,0x2dd) + STField<int>(this,0x2d9) * 0x1c);
  local_8 = (STField<int>(this,0x27c) * iVar8) / 10000 + (int)*psVar1;
  local_c = (undefined4 *)((STField<int>(this,0x280) * iVar8) / 10000 + (int)psVar1[1]);
  iVar7 = (STField<int>(this,0x284) * iVar8) / 10000 + (int)psVar1[2];
  if (local_18 != 0) {
    local_8 = local_8 + (*(int *)(psVar1 + 6) * local_10) / 10000;
    local_c = (undefined4 *)((int)local_c + (*(int *)(psVar1 + 8) * local_10) / 10000);
    iVar7 = iVar7 + (*(int *)(psVar1 + 10) * local_10) / 10000;
  }
  if (((STField<int>(this,0x2d9) == 0) && (STField<int>(this,0x278) != 0)) && (local_14 != 0))
  {
    local_8 = local_8 + (STField<short>(this,0x26c) * local_14) / 0x33;
    int scalar_local_c = (int)local_c + (STField<short>(this,0x26e) * local_14) / 0x33; /* split integer lifetime from pointer-typed SSA storage */
    iVar7 = iVar7 + (STField<short>(this,0x270) * local_14) / 0x33;
  }
  *param_1 = local_8;
  *param_2 = scalar_local_c;
  *param_3 = iVar7;
  return 1;
}

