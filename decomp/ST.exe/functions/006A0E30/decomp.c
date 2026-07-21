
void __thiscall FUN_006a0e30(void *this,uint param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  short sStack_a;

  piVar1 = *(int **)((int)this + 8);
  uVar2 = *(uint *)((int)piVar1 + ((piVar1[1] * param_3 + param_2) * *piVar1 + param_1) * 6 + 8);
  sStack_a = (short)(uVar2 >> 0x10);
  if ((-1 < param_3) && (param_3 < 6)) {
    if (param_4 == -1) {
      param_4 = 0xff;
      if ((uVar2 & 0x10000000) != 0) {
        param_4 = 1;
      }
      if ((sStack_a == 0) && ((uVar2 & 0x1000) != 0)) {
        param_4 = 0;
      }
    }
    thunk_FUN_006a2920(piVar1,param_1,param_2,param_3,param_4,(undefined *)0x0,0);
  }
  return;
}

