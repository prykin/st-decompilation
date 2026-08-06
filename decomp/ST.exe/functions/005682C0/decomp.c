#include "../../pseudocode_runtime.h"


void __thiscall FUN_005682c0(void *this,int param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  InternalExceptionFrame local_6c;
  int local_28;
  uint local_24;
  uint local_20;
  void *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (STField<int>(this,0xf8b) != 0) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_1c = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
    pvVar2 = local_1c;
    if (iVar4 == 0) {
      if (DAT_00807363 == '\0') {
        local_14 = 2;
        piVar12 = (int *)((int)local_1c + 0xe27);
        do {
          iVar11 = local_14;
          local_18 = piVar12;
          FUN_006c1f00(local_14,&local_20,nullptr);
          iVar3 = local_14;
          if (local_20 == 1) {
            if ((((iVar11 < 4) || (10 < iVar11)) && ((iVar11 < 0x12 || (0x14 < iVar11)))) &&
               ((iVar11 < 0xb || (0x11 < iVar11)))) {
              Library::DKW::SND::FUN_006c1ce0(iVar11,param_1);
            }
            else {
              iVar8 = STField<int>(pvVar2,0x10e1) * 0x10;
              local_28 = piVar12[-1];
              local_10 = *piVar12;
              local_8 = (*(int *)(&DAT_007c9794 + iVar8) * (param_1 + 4000)) / 100 + -4000;
              uVar4 = STField<int>(pvVar2,0x10dd) - local_10;
              uVar9 = (int)uVar4 >> 0x1f;
              uVar5 = STField<int>(pvVar2,0x10d9) - local_28;
              iVar11 = (uVar4 ^ uVar9) - uVar9;
              uVar4 = (int)uVar5 >> 0x1f;
              iVar6 = (uVar5 ^ uVar4) - uVar4;
              iVar10 = iVar6;
              if (iVar6 <= iVar11) {
                iVar10 = iVar11;
              }
              iVar10 = iVar10 + 1;
              STField<int>(pvVar2,0x10f1) = iVar10;
              if (*(int *)(&DAT_007c9788 + iVar8) < iVar10) {
                iVar10 = *(int *)(&DAT_007c9788 + iVar8);
              }
              iVar7 = local_8;
              if (*(int *)(&DAT_007c9790 + iVar8) < iVar10) {
                iVar10 = iVar6;
                if (iVar6 <= iVar11) {
                  iVar10 = iVar11;
                }
                iVar10 = iVar10 + 1;
                STField<int>(pvVar2,0x10f1) = iVar10;
                if (*(int *)(&DAT_007c9788 + iVar8) < iVar10) {
                  iVar10 = *(int *)(&DAT_007c9788 + iVar8);
                }
                if (*(int *)(&DAT_007c978c + iVar8) < iVar10) {
                  uVar4 = local_8 * 2 - 8000;
                  uVar5 = (int)uVar4 / 3 + ((int)uVar4 >> 0x1f);
                  uVar4 = uVar4 >> 0x1f;
                }
                else {
                  if (iVar11 < iVar6) {
                    iVar11 = iVar6;
                  }
                  iVar11 = iVar11 + 1;
                  STField<int>(pvVar2,0x10f1) = iVar11;
                  local_c = *(int *)(&DAT_007c9788 + iVar8);
                  if (iVar11 <= *(int *)(&DAT_007c9788 + iVar8)) {
                    local_c = iVar11;
                  }
                  iVar11 = (4000U - local_8) * 2;
                  local_24 = (4000U - local_8 & 0x7fffffff) >> 0x1e;
                  uVar4 = local_8 * 2 - 8000;
                  uVar5 = uVar4 >> 0x1f;
                  uVar4 = (int)uVar4 / 3 + ((int)uVar4 >> 0x1f) +
                          (int)((iVar11 / 3 + (iVar11 >> 0x1f) + local_24 + local_8) *
                               (*(int *)(&DAT_007c978c + iVar8) - local_c)) /
                          (*(int *)(&DAT_007c978c + iVar8) - *(int *)(&DAT_007c9790 + iVar8));
                }
                iVar7 = uVar5 + uVar4;
              }
              Library::DKW::SND::FUN_006c1ce0(local_14,iVar7);
              iVar10 = STField<int>(pvVar2,0x10e9) * local_28 + STField<int>(pvVar2,0x10ed);
              uVar4 = iVar10 - local_10 >> 0x1f;
              iVar11 = (int)(((iVar10 - local_10 ^ uVar4) - uVar4) * 7) / 10;
              iVar8 = STField<int>(pvVar2,0x10e1) * 0x10;
              STField<int>(pvVar2,0x10f1) = iVar11;
              iVar6 = *(int *)(&DAT_007c9788 + iVar8);
              if (iVar11 <= *(int *)(&DAT_007c9788 + iVar8)) {
                iVar6 = iVar11;
              }
              if (iVar6 < *(int *)(&DAT_007c9790 + iVar8)) {
                STField<int>(pvVar2,0x10f1) = iVar11;
                local_c = *(int *)(&DAT_007c9788 + iVar8);
                if (iVar11 <= *(int *)(&DAT_007c9788 + iVar8)) {
                  local_c = iVar11;
                }
                iVar6 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar8)) * local_c;
              }
              else {
                iVar6 = 1000;
              }
              STField<int>(pvVar2,0x10f1) = iVar10;
              iVar11 = iVar3;
              if (iVar10 == local_10) {
                Library::DKW::SND::FUN_006c1d80(iVar3,0);
                piVar12 = local_18;
              }
              else {
                if ((STField<int>(pvVar2,0x10e5) == 0) || (STField<int>(pvVar2,0x10e5) == 3))
                {
                  bVar1 = iVar10 <= local_10;
                }
                else {
                  bVar1 = local_10 <= iVar10;
                }
                Library::DKW::SND::FUN_006c1d80(iVar3,((bVar1 - 1 & 2) - 1) * iVar6);
                piVar12 = local_18;
              }
            }
          }
          local_14 = iVar11 + 1;
          piVar12 = piVar12 + 3;
        } while (local_14 < 0x20);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      iVar11 = 2;
      do {
        Library::DKW::SND::FUN_006c1ce0(iVar11,param_1);
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x20);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
  }
  return;
}

