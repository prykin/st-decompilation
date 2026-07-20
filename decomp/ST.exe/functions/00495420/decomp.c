
bool __thiscall FUN_00495420(void *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  void *pvVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  local_c = 1000000;
  if (*(int *)((int)this + 0x6b9) != 1) {
    sVar6 = *(short *)((int)this + 0x6a9);
    sVar1 = *(short *)((int)this + 0x6ab);
    sVar4 = *(short *)((int)this + 0x6ad) + 1;
    if ((((-1 < sVar6) && (sVar6 < SHORT_007fb240)) && (-1 < sVar1)) &&
       (((sVar1 < SHORT_007fb242 && (-1 < sVar4)) &&
        ((sVar4 < SHORT_007fb244 &&
         ((pvVar2 = *(void **)(DAT_007fb248 +
                              ((int)SHORT_007fb246 * (int)sVar4 + (int)SHORT_007fb240 * (int)sVar1 +
                              (int)sVar6) * 8), pvVar2 != (void *)0x0 && (pvVar2 != this)))))))) {
      return false;
    }
    *param_1 = sVar6;
    sVar6 = *(short *)((int)this + 0x6ab);
LAB_00495607:
    *param_2 = sVar6;
    *param_3 = *(short *)((int)this + 0x6ad) + 1;
    return true;
  }
  local_8 = 0;
  do {
    iVar8 = 0;
    do {
      sVar1 = *(short *)((int)this + 0x6ad) + 1;
      sVar6 = (short)iVar8;
      sVar7 = sVar6 + *(short *)((int)this + 0x6ab);
      sVar4 = (short)local_8;
      sVar3 = *(short *)((int)this + 0x6a9) + sVar4;
      if (((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || (sVar7 < 0)) ||
          ((SHORT_007fb242 <= sVar7 || (sVar1 < 0)))) ||
         ((SHORT_007fb244 <= sVar1 ||
          (pvVar2 = *(void **)(DAT_007fb248 +
                              ((int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar7 +
                              (int)sVar3) * 8), pvVar2 == (void *)0x0)))) {
        iVar5 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                             (int)*(short *)((int)this + 0x4b),
                             *(short *)((int)this + 0x6a9) + local_8,
                             *(short *)((int)this + 0x6ab) + iVar8,*(short *)((int)this + 0x6ad) + 1
                            );
        if (iVar5 < local_c) {
          *param_1 = *(short *)((int)this + 0x6a9) + sVar4;
          *param_2 = *(short *)((int)this + 0x6ab) + sVar6;
          *param_3 = *(short *)((int)this + 0x6ad) + 1;
          local_c = iVar5;
        }
      }
      else if (pvVar2 == this) {
        *param_1 = *(short *)((int)this + 0x6a9) + sVar4;
        sVar6 = *(short *)((int)this + 0x6ab) + sVar6;
        goto LAB_00495607;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return local_c != 1000000;
    }
  } while( true );
}

