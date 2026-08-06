#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006164e0(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  int iVar4;
  int iVar5;
  int iVar2;
  int iVar3;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float10 fVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = thunk_FUN_00616280(this,&local_10,&local_14,&local_18);
  if (iVar4 < 0) {
    return 0xffffffff;
  }
  iVar7 = STField<int>(this,0x298);
  uVar9 = g_playSystem_00802A38->field_00E4;
  local_8 = (int)STField<short>(this,0x25a);
  local_c = (int)STField<short>(this,0x25c);
  STField<uint>(this,0x298) = uVar9;
  iVar4 = (int)STField<short>(this,0x25e);
  iVar5 = local_10 - STField<short>(this,0x2cb);
  iVar6 = local_14 - STField<short>(this,0x2cd);
  iVar8 = (uVar9 - iVar7) * STField<int>(this,0x288);
  iVar7 = local_18 - STField<short>(this,0x2cf);
  if (0xe1 < iVar7 * iVar7 + iVar6 * iVar6 + iVar5 * iVar5) {
    if ((local_18 - iVar4) * STField<int>(this,0x284) +
        (local_14 - local_c) * STField<int>(this,0x280) +
        (local_10 - local_8) * STField<int>(this,0x27c) < 0) {
      iVar7 = thunk_FUN_006173a0(this,iVar8,param_1,param_2,param_3);
      if (iVar7 < 1) {
        thunk_FUN_0060ec00(this);
        STField<undefined4>(this,0x20c) = 9;
      }
      else {
        STField<undefined4>(this,0x256) = 2;
        STField<undefined4>(this,0x20c) = 4;
        STField<undefined2>(this,0x270) = 0xffff;
        uVar9 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar9;
        STField<uint>(this,0x294) =
             (uVar9 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
        STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
      }
    }
    else {
      fVar10 = thunk_FUN_00616400(this,local_10,local_14,local_18);
      if (fVar10 != (float10)_DAT_0079034c) {
        sVar1 = STField<short>(this,0x25a);
        lVar11 = Library::MSVCRT::__ftol();
        local_8 = (int)STField<short>(this,0x25c);
        lVar12 = Library::MSVCRT::__ftol();
        local_c = (int)STField<short>(this,0x25e);
        lVar13 = Library::MSVCRT::__ftol();
        iVar2 = FUN_006acf0d((int)sVar1,local_8,local_c,local_10,local_14,local_18);
        iVar4 = (iVar2 << 3) / STField<int>(this,0x288);
        if (iVar4 != 0) {
          STField<short>(this,0x26c) = (short)(((local_10 - (int)lVar11) * 8) / iVar4);
          STField<short>(this,0x26e) = (short)(((local_14 - (int)lVar12) * 8) / iVar4);
          STField<short>(this,0x270) = (short)(((local_18 - (int)lVar13) * 8) / iVar4);
        }
      }
      STField<undefined1>(this,0x29c) = 0;
      local_8 = (STField<int>(this,0x27c) * iVar8) / 10000 + (int)STField<short>(this,0x25a);
      local_c = (STField<int>(this,0x280) * iVar8) / 10000 + (int)STField<short>(this,0x25c);
      sVar1 = STField<short>(this,0x26c);
      iVar4 = (STField<int>(this,0x284) * iVar8) / 10000 + (int)STField<short>(this,0x25e);
      if (((sVar1 != 0) || (STField<short>(this,0x26e) != 0)) ||
         (STField<short>(this,0x270) != 0)) {
        uVar9 = (uint)sVar1;
        if (10 < (int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f))) {
          if (sVar1 < 1) {
            iVar7 = -(uint)(sVar1 != 0);
          }
          else {
            iVar7 = 1;
          }
          STField<undefined1>(this,0x29c) = 1;
          uVar9 = iVar7 * 10;
        }
        local_8 = local_8 + uVar9;
        sVar1 = STField<short>(this,0x26e);
        uVar9 = (uint)sVar1;
        if (10 < (int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f))) {
          if (sVar1 < 1) {
            iVar7 = -(uint)(sVar1 != 0);
          }
          else {
            iVar7 = 1;
          }
          STField<undefined1>(this,0x29c) = 1;
          uVar9 = iVar7 * 10;
        }
        local_c = local_c + uVar9;
        iVar7 = local_c;
        sVar1 = STField<short>(this,0x270);
        uVar9 = (uint)sVar1;
        if ((int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) < 0xb) {
          iVar4 = iVar4 + uVar9;
        }
        else if (sVar1 < 1) {
          STField<undefined1>(this,0x29c) = 1;
          iVar4 = iVar4 + (uint)(sVar1 != 0) * -10;
        }
        else {
          STField<undefined1>(this,0x29c) = 1;
          iVar4 = iVar4 + 10;
        }
        iVar3 = FUN_006acf0d((int)STField<short>(this,0x25a),(int)STField<short>(this,0x25c),
                             (int)STField<short>(this,0x25e),local_8,local_c,iVar4);
        if (iVar3 != 0) {
          STField<int>(this,0x27c) = ((local_8 - STField<short>(this,0x25a)) * 10000) / iVar3;
          STField<int>(this,0x280) = ((iVar7 - STField<short>(this,0x25c)) * 10000) / iVar3;
          STField<int>(this,0x284) = ((iVar4 - STField<short>(this,0x25e)) * 10000) / iVar3;
        }
      }
    }
  }
  *param_1 = local_8;
  *param_2 = local_c;
  *param_3 = iVar4;
  return 1;
}

