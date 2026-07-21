
void __thiscall FUN_00567c10(void *this,int *param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
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

  if (*(int *)((int)this + 0xf8b) != 0) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_1c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
    pvVar2 = local_1c;
    if (iVar3 == 0) {
      local_8 = 2;
      piVar11 = (int *)((int)local_1c + 0xe23);
      do {
        iVar3 = local_8;
        local_18 = piVar11;
        FUN_006c1f00(local_8,&local_20,(uint *)0x0);
        if (((local_20 == 1) &&
            ((((3 < iVar3 && (iVar3 < 0xb)) || ((0x11 < iVar3 && (iVar3 < 0x15)))) ||
             ((10 < iVar3 && (iVar3 < 0x12)))))) && (piVar11[2] == param_1[2])) {
          *piVar11 = *param_1;
          local_14 = param_1[1];
          piVar11[1] = local_14;
          if (DAT_00807363 == '\0') {
            iVar6 = *(int *)((int)pvVar2 + 0x10e1) * 0x10;
            local_28 = *piVar11;
            local_c = (*(int *)(&DAT_007c9794 + iVar6) * (DAT_0080730e + 4000)) / 100 + -4000;
            uVar4 = *(int *)((int)pvVar2 + 0x10d9) - local_28;
            uVar8 = (int)uVar4 >> 0x1f;
            uVar5 = *(int *)((int)pvVar2 + 0x10dd) - local_14;
            iVar10 = (uVar4 ^ uVar8) - uVar8;
            uVar4 = (int)uVar5 >> 0x1f;
            iVar3 = (uVar5 ^ uVar4) - uVar4;
            iVar9 = iVar10;
            if (iVar10 <= iVar3) {
              iVar9 = iVar3;
            }
            iVar9 = iVar9 + 1;
            *(int *)((int)pvVar2 + 0x10f1) = iVar9;
            if (*(int *)(&DAT_007c9788 + iVar6) < iVar9) {
              iVar9 = *(int *)(&DAT_007c9788 + iVar6);
            }
            iVar7 = local_c;
            if (*(int *)(&DAT_007c9790 + iVar6) < iVar9) {
              iVar9 = iVar10;
              if (iVar10 <= iVar3) {
                iVar9 = iVar3;
              }
              iVar9 = iVar9 + 1;
              *(int *)((int)pvVar2 + 0x10f1) = iVar9;
              if (*(int *)(&DAT_007c9788 + iVar6) < iVar9) {
                iVar9 = *(int *)(&DAT_007c9788 + iVar6);
              }
              if (*(int *)(&DAT_007c978c + iVar6) < iVar9) {
                uVar4 = local_c * 2 - 8000;
                uVar5 = (int)uVar4 / 3 + ((int)uVar4 >> 0x1f);
                uVar4 = uVar4 >> 0x1f;
              }
              else {
                if (iVar3 < iVar10) {
                  iVar3 = iVar10;
                }
                iVar3 = iVar3 + 1;
                *(int *)((int)pvVar2 + 0x10f1) = iVar3;
                local_10 = *(int *)(&DAT_007c9788 + iVar6);
                if (iVar3 <= *(int *)(&DAT_007c9788 + iVar6)) {
                  local_10 = iVar3;
                }
                iVar3 = (4000U - local_c) * 2;
                local_24 = (4000U - local_c & 0x7fffffff) >> 0x1e;
                uVar4 = local_c * 2 - 8000;
                uVar5 = uVar4 >> 0x1f;
                uVar4 = (int)uVar4 / 3 + ((int)uVar4 >> 0x1f) +
                        (int)((iVar3 / 3 + (iVar3 >> 0x1f) + local_24 + local_c) *
                             (*(int *)(&DAT_007c978c + iVar6) - local_10)) /
                        (*(int *)(&DAT_007c978c + iVar6) - *(int *)(&DAT_007c9790 + iVar6));
              }
              iVar7 = uVar5 + uVar4;
            }
            Library::DKW::SND::FUN_006c1ce0(local_8,iVar7);
            iVar6 = local_14;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar3 = *(int *)((int)pvVar2 + 0x10e9) * local_28 + *(int *)((int)pvVar2 + 0x10ed);
            uVar4 = iVar3 - local_14 >> 0x1f;
            iVar9 = (int)(((iVar3 - local_14 ^ uVar4) - uVar4) * 7) / 10;
            iVar7 = *(int *)((int)pvVar2 + 0x10e1) * 0x10;
            *(int *)((int)pvVar2 + 0x10f1) = iVar9;
            iVar10 = *(int *)(&DAT_007c9788 + iVar7);
            if (iVar9 <= *(int *)(&DAT_007c9788 + iVar7)) {
              iVar10 = iVar9;
            }
            if (iVar10 < *(int *)(&DAT_007c9790 + iVar7)) {
              *(int *)((int)pvVar2 + 0x10f1) = iVar9;
              local_14 = *(int *)(&DAT_007c9788 + iVar7);
              if (iVar9 <= *(int *)(&DAT_007c9788 + iVar7)) {
                local_14 = iVar9;
              }
              iVar9 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar7)) * local_14;
            }
            else {
              iVar9 = 1000;
            }
            *(int *)((int)pvVar2 + 0x10f1) = iVar3;
            if (iVar3 == iVar6) {
              iVar3 = 0;
            }
            else {
              if ((*(int *)((int)pvVar2 + 0x10e5) == 0) || (*(int *)((int)pvVar2 + 0x10e5) == 3)) {
                bVar1 = iVar3 <= iVar6;
              }
              else {
                bVar1 = iVar6 <= iVar3;
              }
              iVar3 = (bVar1 - 1 & 2) - 1;
            }
            Library::DKW::SND::FUN_006c1d80(local_8,iVar3 * iVar9);
            iVar3 = local_8;
            piVar11 = local_18;
          }
          else {
            Library::DKW::SND::FUN_006c2220(local_8,(float)*piVar11,(float)local_14,0,-1.0,-1.0);
            iVar3 = local_8;
          }
        }
        local_8 = iVar3 + 1;
        piVar11 = piVar11 + 3;
      } while (local_8 < 0x20);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
  }
  return;
}

