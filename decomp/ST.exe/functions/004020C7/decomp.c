
undefined4 __thiscall
thunk_FUN_005fa360(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5,
                  int *param_6,int *param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iStack_14;
  int iStack_10;
  int iStack_8;
  
  iStack_14 = param_4;
  iVar3 = FUN_006acf90(*(int *)((int)this + 0x27d),*(int *)((int)this + 0x281),param_2,param_3);
  if (iVar3 < 7) {
    *param_5 = *(int *)((int)this + 0x27d);
    *param_6 = *(int *)((int)this + 0x281);
    *param_7 = *(int *)((int)this + 0x285);
    *param_1 = 0;
    return 1;
  }
  iVar4 = thunk_FUN_005fa5e0(param_2,param_3,*(int *)((int)this + 0x27d),*(int *)((int)this + 0x281)
                            );
  iStack_8 = 0;
  bVar1 = false;
  iVar3 = param_2;
  iVar6 = param_3;
  do {
    if (bVar1) goto LAB_005fa524;
    do {
      iStack_10 = 0;
      iVar5 = param_4;
      do {
        iStack_14 = iVar5;
        if (4 < iVar5) {
          iStack_14 = 0;
        }
        iVar3 = *(short *)(&DAT_007ce7b0 + (iVar4 + iStack_8) * 4) + param_2;
        iVar6 = *(short *)(&DAT_007ce7b2 + (iVar4 + iStack_8) * 4) + param_3;
        if ((((-1 < iVar3) && (iVar3 < DAT_007fb240)) && (-1 < iVar6)) &&
           (((iVar6 < DAT_007fb242 && (-1 < iStack_14)) && (iStack_14 < DAT_007fb244)))) {
          sVar7 = (short)iVar3;
          sVar8 = (short)iVar6;
          sVar9 = (short)iStack_14;
          bVar2 = thunk_FUN_004961b0(sVar7,sVar8,sVar9);
          if ((CONCAT31(extraout_var,bVar2) != 0) &&
             (((sVar7 < 0 || (DAT_007fb240 <= sVar7)) ||
              ((sVar8 < 0 ||
               ((((DAT_007fb242 <= sVar8 || (sVar9 < 0)) || (DAT_007fb244 <= sVar9)) ||
                (*(int *)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar9 + (int)DAT_007fb240 * (int)sVar8 +
                         (int)sVar7) * 8) == 0)))))))) {
            bVar1 = true;
            break;
          }
        }
        iVar5 = iStack_14 + 1;
        iStack_10 = iStack_10 + 1;
      } while (iStack_10 < 5);
    } while ((iStack_8 != 0) && (iStack_8 = -iStack_8, iStack_8 < 0));
    iStack_8 = iStack_8 + 1;
  } while (iStack_8 < 8);
  if (!bVar1) {
    return 0;
  }
LAB_005fa524:
  *param_5 = iVar3;
  *param_6 = iVar6;
  *param_7 = iStack_14;
  *param_1 = 1;
  return 1;
}

