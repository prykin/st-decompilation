
bool __thiscall FUN_004939b0(void *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 1000000;
  local_8 = 0;
  do {
    iVar7 = 0;
    do {
      iVar4 = *(short *)((int)this + 0x639) + local_8;
      sVar6 = (short)iVar7;
      sVar2 = (short)local_8;
      if (((iVar4 == *(short *)((int)this + 0x5b)) &&
          (*(short *)((int)this + 0x63b) + iVar7 == (int)*(short *)((int)this + 0x5d))) &&
         (*(short *)((int)this + 0x63d) + 1 == (int)*(short *)((int)this + 0x5f))) {
        *param_1 = *(short *)((int)this + 0x639) + sVar2;
        *param_2 = *(short *)((int)this + 0x63b) + sVar6;
        *param_3 = *(short *)((int)this + 0x63d) + 1;
        return true;
      }
      sVar1 = *(short *)((int)this + 0x63d) + 1;
      sVar5 = sVar6 + *(short *)((int)this + 0x63b);
      sVar3 = sVar2 + *(short *)((int)this + 0x639);
      if (((((sVar3 < 0) || (DAT_007fb240 <= sVar3)) ||
           ((sVar5 < 0 || ((DAT_007fb242 <= sVar5 || (sVar1 < 0)))))) || (DAT_007fb244 <= sVar1)) ||
         (*(int *)(DAT_007fb248 +
                  ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar5 + (int)sVar3) * 8
                  ) == 0)) {
        iVar4 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                             (int)*(short *)((int)this + 0x4b),iVar4,
                             *(short *)((int)this + 0x63b) + iVar7,*(short *)((int)this + 0x63d) + 1
                            );
        if (iVar4 < local_c) {
          *param_1 = *(short *)((int)this + 0x639) + sVar2;
          *param_2 = sVar6 + *(short *)((int)this + 0x63b);
          *param_3 = *(short *)((int)this + 0x63d) + 1;
          local_c = iVar4;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return local_c != 1000000;
    }
  } while( true );
}

