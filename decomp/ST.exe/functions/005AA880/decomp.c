#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::CalcHologram
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005AA8CD MOV EDI,dword ptr [EBP + 0x18];
   first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:6: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005AA918 MOV EDX,dword ptr [EBP + 0x1c];
   first-use mask */

undefined4 * __thiscall
HoloTy::CalcHologram
          (HoloTy *this,uint *param_1,uint param_2,int param_3,int param_4,byte param_5,byte param_6
          )

{
  int local_EAX_32;
  uint uVar2;
  int iVar3;
  int iVar2;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  InternalExceptionFrame local_78;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_EAX_32 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  if (local_EAX_32 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\Start\\hologram.cpp",99,0,local_EAX_32,
                               "%s","HoloTy::CalcHologram");
    if (iVar2 == 0) {
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar2 = param_3 / param_4 + (uint)(param_3 % param_4 != 0);
  uVar6 = (uint)param_5;
  *param_1 = uVar2;
  uVar7 = uVar2 + 1 >> 1;
  if (uVar7 < uVar6) {
    return nullptr;
  }
  local_34 = uVar7;
  local_2c = uVar6;
  local_1c = Library::DKW::LIB::MemAllocClear(uVar6 * uVar2 * 4);
  local_c = local_1c;
  if ((local_1c != nullptr) && (local_14 = 0, uVar7 != 0)) {
    local_30 = (uint)param_6;
    local_20 = 0;
    local_10 = 0;
    local_28 = uVar7;
    do {
      local_18 = local_28 - 1;
      iVar3 = 0;
      iVar5 = -1;
      if (local_30 == 0) {
        local_8 = 0;
        if (uVar7 != 0 && -1 < (int)(uVar7 * 2)) {
          local_24 = 0;
          do {
            iVar3 = (local_24 / 2) / (int)uVar7;
            if (iVar3 != iVar5) {
              local_28 = uVar7 * 2 - local_14;
              if (local_8 < (int)local_28) {
                fsin(((float10)local_8 * (float10)_DAT_0079c040) / (float10)(int)local_28);
              }
              lVar10 = Library::MSVCRT::__ftol();
              local_c[local_10 + iVar3] = (int)lVar10;
              iVar5 = iVar3;
            }
            local_24 = local_24 + uVar6;
            local_8 = local_8 + 1;
          } while (local_8 < (int)(uVar7 * 2));
        }
      }
      else if (local_30 == 1) {
        if (0 < (int)(uVar7 * 2)) {
          local_24 = 0;
          local_8 = iVar5;
          do {
            iVar5 = (local_24 / 2) / (int)uVar7;
            if (iVar5 != local_8) {
              local_28 = iVar3 - local_18;
              if ((iVar3 < (int)local_18) || ((int)(uVar7 + local_18) <= iVar3)) {
                local_28 = (iVar3 < (int)local_18) - 1 & param_2;
              }
              else {
                fsin(((float10)(int)local_28 * (float10)_DAT_0079c040) / (float10)(int)local_34);
              }
              local_8 = iVar5;
              lVar10 = Library::MSVCRT::__ftol();
              local_c[local_10 + local_8] = (int)lVar10;
            }
            iVar3 = iVar3 + 1;
            local_24 = local_24 + uVar6;
          } while (iVar3 < (int)(uVar7 * 2));
        }
      }
      else if (local_30 == 2) {
        local_8 = 0;
        local_28 = local_28 + 10;
        local_24 = 0;
        do {
          iVar3 = local_24 / (int)uVar7;
          if (iVar3 != iVar5) {
            if (local_8 < (int)local_28) {
              fsin(((float10)local_8 * (float10)_DAT_0079c040) / (float10)(int)local_28);
            }
            lVar10 = Library::MSVCRT::__ftol();
            local_c[local_10 + iVar3] = (int)lVar10;
            iVar5 = iVar3;
          }
          local_8 = local_8 + 1;
          local_24 = local_24 + uVar6;
        } while (local_8 < (int)uVar7);
      }
      uVar2 = *param_1;
      if ((uVar2 & 1) == 0) {
        iVar5 = (uVar2 - local_20) + -1;
LAB_005aab34:
        puVar4 = local_1c;
        puVar8 = local_c + iVar5 * uVar6;
        for (; uVar9 = local_2c, uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else {
        uVar9 = uVar6;
        if (local_14 < (int)(uVar7 - 1)) {
          iVar5 = (uVar2 - local_20) + -2;
          goto LAB_005aab34;
        }
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + uVar9 * 2;
      local_1c = local_1c + uVar9 * 2;
      local_20 = local_20 + 2;
      uVar6 = uVar9;
      local_28 = local_18;
    } while (local_14 < (int)uVar7);
  }
  g_currentExceptionFrame = local_78.previous;
  return local_c;
}

