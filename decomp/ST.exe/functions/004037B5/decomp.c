
undefined4 __thiscall
thunk_FUN_004934b0(void *this,short *param_1,short *param_2,short *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uStack_14;
  int *piStack_10;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  uVar4 = 0;
  iVar5 = 1000000;
  iVar1 = *(int *)(&DAT_007f57fa + *(int *)((int)this + 0x24) * 0xa62);
  *param_3 = -1;
  *param_2 = -1;
  *param_1 = -1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    uStack_14 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(iVar1,uStack_14,&piStack_10);
        if ((piStack_10 != (int *)0x0) && (iVar3 = (**(code **)(*piStack_10 + 0xf8))(), iVar3 == 1))
        {
          thunk_FUN_004162b0(piStack_10,&sStack_6,&sStack_8,&sStack_a);
          iVar3 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                               (int)*(short *)((int)this + 0x4b),(int)sStack_6,(int)sStack_8,
                               (int)sStack_a);
          if (iVar3 < iVar5) {
            *param_1 = sStack_6;
            uVar4 = 1;
            *param_2 = sStack_8;
            *param_3 = sStack_a;
            *param_4 = piStack_10[6];
            iVar5 = iVar3;
          }
        }
        uStack_14 = uStack_14 + 1;
      } while ((int)uStack_14 < iVar2);
    }
  }
  return uVar4;
}

