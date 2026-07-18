
bool __thiscall thunk_FUN_004908a0(void *this,void *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iStack_10;
  undefined2 auStack_c [2];
  undefined2 auStack_8 [2];
  
  iStack_10 = 1000000;
  thunk_FUN_004162b0(param_1,(undefined2 *)&param_1,auStack_8,auStack_c);
  iVar6 = 0;
  iVar5 = param_2;
  do {
    sVar4 = auStack_8[0] + (short)iVar6;
    sVar3 = auStack_c[0] + 1;
    sVar1 = (short)param_1 + (short)iVar5;
    if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar4 < 0)) ||
       (((DAT_007fb242 <= sVar4 || (sVar3 < 0)) ||
        ((DAT_007fb244 <= sVar3 ||
         (iVar5 = param_2,
         *(int *)(DAT_007fb248 +
                 ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4 + (int)sVar1) * 8)
         == 0)))))) {
      iVar2 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                           (int)*(short *)((int)this + 0x4b),(short)param_1 + iVar5,
                           auStack_8[0] + iVar6,auStack_c[0] + 1);
      if (iVar2 < iStack_10) {
        *(short *)((int)this + 0x56c) = (short)iVar5 + (short)param_1;
        *(short *)((int)this + 0x56e) = (short)iVar6 + auStack_8[0];
        *(short *)((int)this + 0x570) = auStack_c[0] + 1;
        iStack_10 = iVar2;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  return iStack_10 != 1000000;
}

