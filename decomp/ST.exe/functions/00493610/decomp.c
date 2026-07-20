
undefined4 __thiscall FUN_00493610(void *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  undefined4 local_14;
  int local_c;
  int local_8;
  
  local_8 = (int)*(short *)((int)this + 0x621);
  uVar2 = 0;
  iVar5 = local_8 + -1;
  local_c = 1000000;
  local_14 = 0;
  if (local_8 + 1 < iVar5) {
    return 0;
  }
  local_8 = local_8 + -2;
  do {
    if (((-2 < local_8) && (iVar5 <= SHORT_007fb244 + -1)) &&
       (iVar9 = *(short *)((int)this + 0x61f) + -1, iVar9 <= *(short *)((int)this + 0x61f) + 2)) {
      do {
        if (((-1 < iVar9) && (iVar9 <= SHORT_007fb242 + -1)) &&
           (iVar7 = *(short *)((int)this + 0x61d) + -1, iVar7 <= *(short *)((int)this + 0x61d) + 2))
        {
          do {
            if (((-1 < iVar7) && (iVar3 = (int)SHORT_007fb240, iVar7 <= iVar3 + -1)) &&
               (*(short *)(DAT_007fb280 +
                          (SHORT_007fb27e * iVar5 + SHORT_007fb278 * iVar9 + iVar7) * 2) == 0)) {
              sVar6 = (short)iVar7;
              sVar8 = (short)iVar9;
              sVar4 = (short)iVar5;
              if ((((sVar6 < 0) ||
                   ((((((SHORT_007fb240 <= sVar6 || (sVar8 < 0)) || (SHORT_007fb242 <= sVar8)) ||
                      ((sVar4 < 0 || (SHORT_007fb244 <= sVar4)))) ||
                     (*(int *)(DAT_007fb248 +
                              ((int)sVar4 * (int)SHORT_007fb246 + sVar8 * iVar3 + (int)sVar6) * 8)
                      == 0)) &&
                    (((sVar6 < 0 || (SHORT_007fb240 <= sVar6)) ||
                     (((sVar8 < 0 ||
                       (((SHORT_007fb242 <= sVar8 || (sVar4 < 0)) || (SHORT_007fb244 <= sVar4)))) ||
                      (*(int *)(DAT_007fb248 + 4 +
                               ((int)sVar4 * (int)SHORT_007fb246 + sVar8 * iVar3 + (int)sVar6) * 8)
                       == 0)))))))) &&
                  ((sVar1 = sVar4 + -1, sVar6 < 0 ||
                   ((((((SHORT_007fb240 <= sVar6 || (sVar8 < 0)) ||
                       ((SHORT_007fb242 <= sVar8 || ((sVar1 < 0 || (SHORT_007fb244 <= sVar1)))))) ||
                      (*(int *)(DAT_007fb248 +
                               ((int)SHORT_007fb246 * (int)sVar1 + sVar8 * iVar3 + (int)sVar6) * 8)
                       == 0)) ||
                     (*(short *)(DAT_007fb280 +
                                (local_8 * SHORT_007fb27e + SHORT_007fb278 * iVar9 + iVar7) * 2) ==
                      0)) && (((((sVar6 < 0 || (SHORT_007fb240 <= sVar6)) || (sVar8 < 0)) ||
                               ((SHORT_007fb242 <= sVar8 || (sVar1 = sVar4 + -1, sVar1 < 0)))) ||
                              ((SHORT_007fb244 <= sVar1 ||
                               (*(int *)(DAT_007fb248 + 4 +
                                        ((int)SHORT_007fb246 * (int)sVar1 + sVar8 * iVar3 +
                                        (int)sVar6) * 8) == 0)))))))))) &&
                 (iVar3 = FUN_006aadd0((int)*(short *)((int)this + 0x47),
                                       (int)*(short *)((int)this + 0x49),
                                       (int)*(short *)((int)this + 0x4b),iVar7,iVar9,iVar5),
                 iVar3 < local_c)) {
                *param_1 = sVar6;
                *param_2 = sVar8;
                local_14 = 1;
                *param_3 = sVar4;
                local_c = iVar3;
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 <= *(short *)((int)this + 0x61d) + 2);
        }
        iVar9 = iVar9 + 1;
        uVar2 = local_14;
      } while (iVar9 <= *(short *)((int)this + 0x61f) + 2);
    }
    iVar5 = iVar5 + 1;
    local_8 = local_8 + 1;
  } while (iVar5 <= *(short *)((int)this + 0x621) + 1);
  return uVar2;
}

