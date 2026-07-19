
void __thiscall
FUN_00559110(void *this,int param_1,undefined *param_2,int param_3,uint param_4,int param_5,
            int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  short *psVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined *local_c;
  
  iVar10 = param_5;
  uVar7 = param_4;
  bVar8 = false;
  if ((((*(int *)((int)this + 0x114) != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8)))) {
    if ((param_7 & 0x1000) != 0) {
      thunk_FUN_0055bbc0(this,0,(short)param_1,(short)param_2,(char)param_3,param_4,(char)param_5,
                         param_6);
    }
    if (*(char *)(uVar7 + 0xfc + (int)this) != '\0') {
      iVar11 = iVar10 * 2 + 1;
      param_4 = param_1 - iVar10;
      param_6 = (int)param_2 - iVar10;
      puVar9 = thunk_FUN_005532f0(iVar10);
      if (puVar9 != (undefined *)0x0) {
        iVar12 = iVar10;
        if (((*(int *)((int)this + 0x38) != 0) && ((param_7 & 1) != 0)) &&
           (iVar13 = 0, iVar12 = param_5, local_c = puVar9, 0 < iVar11)) {
          do {
            iVar14 = 0;
            do {
              if (local_c[iVar14] != '\0') {
                iVar1 = iVar13 + param_6;
                iVar2 = iVar14 + param_4;
                if ((((-1 < iVar2) && (iVar2 < *(int *)((int)this + 0x20))) && (-1 < iVar1)) &&
                   (iVar1 < *(int *)((int)this + 0x24))) {
                  pcVar3 = (char *)(*(int *)((int)this + 0x38) +
                                   (*(int *)((int)this + 0x20) * iVar1 + iVar2) * 2);
                  cVar5 = *pcVar3;
                  if (cVar5 != '\0') {
                    *pcVar3 = cVar5 + -1;
                  }
                }
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar11);
            iVar13 = iVar13 + 1;
            local_c = local_c + iVar11;
          } while (iVar13 < iVar11);
        }
        if (((*(int *)((int)this + 0x4c) != 0) && (*(int *)((int)this + 0x50) != 0)) &&
           ((param_7 & 0x4000) != 0)) {
          thunk_FUN_00558c00(this,*(Global_sub_00558C00_param_1Enum *)((int)this + 0x10c),param_1,
                             (int)param_2,(int *)&param_4,&param_6);
          param_5 = 0;
          param_4 = param_4 - iVar12;
          param_6 = param_6 + ((&DAT_0079aed0)[param_3] - iVar12);
          param_2 = puVar9;
          if (0 < iVar11) {
            do {
              param_7 = 0;
              do {
                if (param_2[param_7] != '\0') {
                  iVar12 = param_7 + param_4;
                  iVar13 = param_5 + param_6;
                  if (((-1 < iVar12) && (uVar7 = *(uint *)((int)this + 0x30), iVar12 < (int)uVar7))
                     && ((-1 < iVar13 &&
                         ((iVar13 < *(int *)((int)this + 0x34) &&
                          (iVar14 = uVar7 * iVar13 + iVar12, -1 < iVar14)))))) {
                    if (*(short *)(*(int *)((int)this + 0x50) + iVar14 * 2) == 1) {
                      thunk_FUN_00553a70(iVar12,iVar13,*(int *)((int)this + 0x4c),uVar7,
                                         *(int *)((int)this + 0x34));
                      bVar8 = true;
                    }
                    psVar4 = (short *)(*(int *)((int)this + 0x50) + iVar14 * 2);
                    sVar6 = *psVar4;
                    if (sVar6 != 0) {
                      *psVar4 = sVar6 + -1;
                    }
                  }
                }
                param_7 = param_7 + 1;
              } while ((int)param_7 < iVar11);
              param_5 = param_5 + 1;
              param_2 = param_2 + iVar11;
            } while (param_5 < iVar11);
            if (bVar8) {
              param_4 = param_4 - 1;
              iVar10 = iVar10 * 2 + 3;
              param_6 = param_6 + -1;
              param_5 = 0;
              if (0 < iVar10) {
                do {
                  param_7 = 0;
                  do {
                    iVar11 = param_7 + param_4;
                    iVar12 = param_5 + param_6;
                    if ((((-1 < iVar11) &&
                         (uVar7 = *(uint *)((int)this + 0x30), iVar11 < (int)uVar7)) &&
                        (-1 < iVar12)) &&
                       (((iVar12 < *(int *)((int)this + 0x34) &&
                         (iVar13 = uVar7 * iVar12 + iVar11, -1 < iVar13)) &&
                        (*(short *)(*(int *)((int)this + 0x50) + iVar13 * 2) != 0)))) {
                      thunk_FUN_00553990(iVar11,iVar12,*(int *)((int)this + 0x4c),uVar7,
                                         *(int *)((int)this + 0x34));
                    }
                    param_7 = param_7 + 1;
                  } while ((int)param_7 < iVar10);
                  param_5 = param_5 + 1;
                } while (param_5 < iVar10);
              }
            }
          }
        }
      }
    }
  }
  return;
}

