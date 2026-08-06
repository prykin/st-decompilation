#include "../../pseudocode_runtime.h"


void __thiscall FUN_00567c10(void *this,int *param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
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
    iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
    pvVar2 = local_1c;
    if (iVar3 == 0) {
      local_8 = 2;
      piVar11 = (int *)((int)local_1c + 0xe23);
      do {
        iVar5 = local_8;
        local_18 = piVar11;
        FUN_006c1f00(local_8,&local_20,nullptr);
        if (((local_20 == 1) &&
            ((((3 < iVar5 && (iVar5 < 0xb)) || ((0x11 < iVar5 && (iVar5 < 0x15)))) ||
             ((10 < iVar5 && (iVar5 < 0x12)))))) && (piVar11[2] == param_1[2])) {
          *piVar11 = *param_1;
          local_14 = param_1[1];
          piVar11[1] = local_14;
          if (DAT_00807363 == '\0') {
            iVar6 = STField<int>(pvVar2,0x10e1) * 0x10;
            local_28 = *piVar11;
            local_c = (*(int *)(&DAT_007c9794 + iVar6) * (DAT_0080730e + 4000)) / 100 + -4000;
            uVar3 = STField<int>(pvVar2,0x10d9) - local_28;
            uVar8 = (int)uVar3 >> 0x1f;
            uVar4 = STField<int>(pvVar2,0x10dd) - local_14;
            iVar10 = (uVar3 ^ uVar8) - uVar8;
            uVar3 = (int)uVar4 >> 0x1f;
            iVar5 = (uVar4 ^ uVar3) - uVar3;
            iVar9 = iVar10;
            if (iVar10 <= iVar5) {
              iVar9 = iVar5;
            }
            iVar9 = iVar9 + 1;
            STField<int>(pvVar2,0x10f1) = iVar9;
            if (*(int *)(&DAT_007c9788 + iVar6) < iVar9) {
              iVar9 = *(int *)(&DAT_007c9788 + iVar6);
            }
            iVar7 = local_c;
            if (*(int *)(&DAT_007c9790 + iVar6) < iVar9) {
              iVar9 = iVar10;
              if (iVar10 <= iVar5) {
                iVar9 = iVar5;
              }
              iVar9 = iVar9 + 1;
              STField<int>(pvVar2,0x10f1) = iVar9;
              if (*(int *)(&DAT_007c9788 + iVar6) < iVar9) {
                iVar9 = *(int *)(&DAT_007c9788 + iVar6);
              }
              if (*(int *)(&DAT_007c978c + iVar6) < iVar9) {
                uVar3 = local_c * 2 - 8000;
                uVar4 = (int)uVar3 / 3 + ((int)uVar3 >> 0x1f);
                uVar3 = uVar3 >> 0x1f;
              }
              else {
                if (iVar5 < iVar10) {
                  iVar5 = iVar10;
                }
                iVar5 = iVar5 + 1;
                STField<int>(pvVar2,0x10f1) = iVar5;
                local_10 = *(int *)(&DAT_007c9788 + iVar6);
                if (iVar5 <= *(int *)(&DAT_007c9788 + iVar6)) {
                  local_10 = iVar5;
                }
                iVar5 = (4000U - local_c) * 2;
                local_24 = (4000U - local_c & 0x7fffffff) >> 0x1e;
                uVar3 = local_c * 2 - 8000;
                uVar4 = uVar3 >> 0x1f;
                uVar3 = (int)uVar3 / 3 + ((int)uVar3 >> 0x1f) +
                        (int)((iVar5 / 3 + (iVar5 >> 0x1f) + local_24 + local_c) *
                             (*(int *)(&DAT_007c978c + iVar6) - local_10)) /
                        (*(int *)(&DAT_007c978c + iVar6) - *(int *)(&DAT_007c9790 + iVar6));
              }
              iVar7 = uVar4 + uVar3;
            }
            Library::DKW::SND::FUN_006c1ce0(local_8,iVar7);
            iVar6 = local_14;
            iVar5 = STField<int>(pvVar2,0x10e9) * local_28 + STField<int>(pvVar2,0x10ed);
            uVar3 = iVar5 - local_14 >> 0x1f;
            iVar9 = (int)(((iVar5 - local_14 ^ uVar3) - uVar3) * 7) / 10;
            iVar7 = STField<int>(pvVar2,0x10e1) * 0x10;
            STField<int>(pvVar2,0x10f1) = iVar9;
            iVar10 = *(int *)(&DAT_007c9788 + iVar7);
            if (iVar9 <= *(int *)(&DAT_007c9788 + iVar7)) {
              iVar10 = iVar9;
            }
            if (iVar10 < *(int *)(&DAT_007c9790 + iVar7)) {
              STField<int>(pvVar2,0x10f1) = iVar9;
              local_14 = *(int *)(&DAT_007c9788 + iVar7);
              if (iVar9 <= *(int *)(&DAT_007c9788 + iVar7)) {
                local_14 = iVar9;
              }
              iVar9 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar7)) * local_14;
            }
            else {
              iVar9 = 1000;
            }
            STField<int>(pvVar2,0x10f1) = iVar5;
            if (iVar5 == iVar6) {
              iVar5 = 0;
            }
            else {
              if ((STField<int>(pvVar2,0x10e5) == 0) || (STField<int>(pvVar2,0x10e5) == 3)) {
                bVar1 = iVar5 <= iVar6;
              }
              else {
                bVar1 = iVar6 <= iVar5;
              }
              iVar5 = (bVar1 - 1 & 2) - 1;
            }
            Library::DKW::SND::FUN_006c1d80(local_8,iVar5 * iVar9);
            iVar5 = local_8;
            piVar11 = local_18;
          }
          else {
            Library::DKW::SND::FUN_006c2220(local_8,(float)*piVar11,(float)local_14,0,-1.0,-1.0);
            iVar5 = local_8;
          }
        }
        local_8 = iVar5 + 1;
        piVar11 = piVar11 + 3;
      } while (local_8 < 0x20);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
  }
  return;
}

