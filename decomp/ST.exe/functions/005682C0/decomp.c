
void __thiscall FUN_005682c0(void *this,int param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 unaff_ESI;
  int *piVar12;
  void *unaff_EDI;
  undefined4 local_6c;
  undefined4 local_68 [16];
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
    local_6c = DAT_00858df8;
    DAT_00858df8 = &local_6c;
    local_1c = this;
    iVar4 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
    pvVar2 = local_1c;
    if (iVar4 == 0) {
      if (DAT_00807363 == '\0') {
        local_14 = 2;
        piVar12 = (int *)((int)local_1c + 0xe27);
        do {
          iVar4 = local_14;
          local_18 = piVar12;
          FUN_006c1f00(local_14,&local_20,(uint *)0x0);
          iVar3 = local_14;
          if (local_20 == 1) {
            if ((((iVar4 < 4) || (10 < iVar4)) && ((iVar4 < 0x12 || (0x14 < iVar4)))) &&
               ((iVar4 < 0xb || (0x11 < iVar4)))) {
              FUN_006c1ce0(iVar4,param_1);
            }
            else {
              iVar9 = *(int *)((int)pvVar2 + 0x10e1) * 0x10;
              local_28 = piVar12[-1];
              local_10 = *piVar12;
              local_8 = (*(int *)(&DAT_007c9794 + iVar9) * (param_1 + 4000)) / 100 + -4000;
              uVar5 = *(int *)((int)pvVar2 + 0x10dd) - local_10;
              uVar10 = (int)uVar5 >> 0x1f;
              uVar6 = *(int *)((int)pvVar2 + 0x10d9) - local_28;
              iVar4 = (uVar5 ^ uVar10) - uVar10;
              uVar5 = (int)uVar6 >> 0x1f;
              iVar7 = (uVar6 ^ uVar5) - uVar5;
              iVar11 = iVar7;
              if (iVar7 <= iVar4) {
                iVar11 = iVar4;
              }
              iVar11 = iVar11 + 1;
              *(int *)((int)pvVar2 + 0x10f1) = iVar11;
              if (*(int *)(&DAT_007c9788 + iVar9) < iVar11) {
                iVar11 = *(int *)(&DAT_007c9788 + iVar9);
              }
              iVar8 = local_8;
              if (*(int *)(&DAT_007c9790 + iVar9) < iVar11) {
                iVar11 = iVar7;
                if (iVar7 <= iVar4) {
                  iVar11 = iVar4;
                }
                iVar11 = iVar11 + 1;
                *(int *)((int)pvVar2 + 0x10f1) = iVar11;
                if (*(int *)(&DAT_007c9788 + iVar9) < iVar11) {
                  iVar11 = *(int *)(&DAT_007c9788 + iVar9);
                }
                if (*(int *)(&DAT_007c978c + iVar9) < iVar11) {
                  uVar5 = local_8 * 2 - 8000;
                  uVar6 = (int)uVar5 / 3 + ((int)uVar5 >> 0x1f);
                  uVar5 = uVar5 >> 0x1f;
                }
                else {
                  if (iVar4 < iVar7) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                  *(int *)((int)pvVar2 + 0x10f1) = iVar4;
                  local_c = *(int *)(&DAT_007c9788 + iVar9);
                  if (iVar4 <= *(int *)(&DAT_007c9788 + iVar9)) {
                    local_c = iVar4;
                  }
                  iVar4 = (4000U - local_8) * 2;
                  local_24 = (4000U - local_8 & 0x7fffffff) >> 0x1e;
                  uVar5 = local_8 * 2 - 8000;
                  uVar6 = uVar5 >> 0x1f;
                  uVar5 = (int)uVar5 / 3 + ((int)uVar5 >> 0x1f) +
                          (int)((iVar4 / 3 + (iVar4 >> 0x1f) + local_24 + local_8) *
                               (*(int *)(&DAT_007c978c + iVar9) - local_c)) /
                          (*(int *)(&DAT_007c978c + iVar9) - *(int *)(&DAT_007c9790 + iVar9));
                }
                iVar8 = uVar6 + uVar5;
              }
              FUN_006c1ce0(local_14,iVar8);
              iVar11 = *(int *)((int)pvVar2 + 0x10e9) * local_28 + *(int *)((int)pvVar2 + 0x10ed);
              uVar5 = iVar11 - local_10 >> 0x1f;
              iVar4 = (int)(((iVar11 - local_10 ^ uVar5) - uVar5) * 7) / 10;
              iVar9 = *(int *)((int)pvVar2 + 0x10e1) * 0x10;
              *(int *)((int)pvVar2 + 0x10f1) = iVar4;
              iVar7 = *(int *)(&DAT_007c9788 + iVar9);
              if (iVar4 <= *(int *)(&DAT_007c9788 + iVar9)) {
                iVar7 = iVar4;
              }
              if (iVar7 < *(int *)(&DAT_007c9790 + iVar9)) {
                *(int *)((int)pvVar2 + 0x10f1) = iVar4;
                local_c = *(int *)(&DAT_007c9788 + iVar9);
                if (iVar4 <= *(int *)(&DAT_007c9788 + iVar9)) {
                  local_c = iVar4;
                }
                iVar7 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar9)) * local_c;
              }
              else {
                iVar7 = 1000;
              }
              *(int *)((int)pvVar2 + 0x10f1) = iVar11;
              iVar4 = iVar3;
              if (iVar11 == local_10) {
                FUN_006c1d80(iVar3,0);
                piVar12 = local_18;
              }
              else {
                if ((*(int *)((int)pvVar2 + 0x10e5) == 0) || (*(int *)((int)pvVar2 + 0x10e5) == 3))
                {
                  bVar1 = iVar11 <= local_10;
                }
                else {
                  bVar1 = local_10 <= iVar11;
                }
                FUN_006c1d80(iVar3,((bVar1 - 1 & 2) - 1) * iVar7);
                piVar12 = local_18;
              }
            }
          }
          local_14 = iVar4 + 1;
          piVar12 = piVar12 + 3;
        } while (local_14 < 0x20);
        DAT_00858df8 = (undefined4 *)local_6c;
        return;
      }
      iVar4 = 2;
      do {
        FUN_006c1ce0(iVar4,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x20);
      DAT_00858df8 = (undefined4 *)local_6c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_6c;
  }
  return;
}

