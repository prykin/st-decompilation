
bool __thiscall thunk_FUN_004950b0(void *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 1000000;
  uStack_8 = 0;
  do {
    iVar7 = 0;
    do {
      iVar4 = *(short *)((int)this + 0x66f) + uStack_8;
      sVar6 = (short)iVar7;
      sVar2 = (short)uStack_8;
      if (((iVar4 == *(short *)((int)this + 0x5b)) &&
          (*(short *)((int)this + 0x671) + iVar7 == (int)*(short *)((int)this + 0x5d))) &&
         (*(short *)((int)this + 0x673) + 1 == (int)*(short *)((int)this + 0x5f))) {
        *param_1 = *(short *)((int)this + 0x66f) + sVar2;
        *param_2 = *(short *)((int)this + 0x671) + sVar6;
        *param_3 = *(short *)((int)this + 0x673) + 1;
        return true;
      }
      sVar1 = *(short *)((int)this + 0x673) + 1;
      sVar5 = sVar6 + *(short *)((int)this + 0x671);
      sVar3 = sVar2 + *(short *)((int)this + 0x66f);
      if (((((sVar3 < 0) || (DAT_007fb240 <= sVar3)) ||
           ((sVar5 < 0 || ((DAT_007fb242 <= sVar5 || (sVar1 < 0)))))) || (DAT_007fb244 <= sVar1)) ||
         (*(int *)(DAT_007fb248 +
                  ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar5 + (int)sVar3) * 8
                  ) == 0)) {
        iVar4 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                             (int)*(short *)((int)this + 0x4b),iVar4,
                             *(short *)((int)this + 0x671) + iVar7,*(short *)((int)this + 0x673) + 1
                            );
        if (iVar4 < uStack_c) {
          *param_1 = *(short *)((int)this + 0x66f) + sVar2;
          *param_2 = sVar6 + *(short *)((int)this + 0x671);
          *param_3 = *(short *)((int)this + 0x673) + 1;
          uStack_c = iVar4;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    uStack_8 = uStack_8 + 1;
    if (1 < uStack_8) {
      return uStack_c != 1000000;
    }
  } while( true );
}

