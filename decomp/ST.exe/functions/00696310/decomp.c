
void __thiscall FUN_00696310(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = param_1 / param_2;
  if (param_1 % param_2 == 0) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (-(uint)(iVar1 != *(int *)((int)this + 0x5833) + -1) & 4) + 3;
    }
  }
  else if (param_1 % param_2 == *(int *)((int)this + 0x5833) + -1) {
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (-(uint)(iVar1 != *(int *)((int)this + 0x5837) + -1) & 3) + 2;
    }
  }
  else if (iVar1 == *(int *)((int)this + 0x5837) + -1) {
    iVar1 = 6;
  }
  else {
    iVar1 = (-(uint)(iVar1 != 0) & 4) + 4;
  }
  uVar3 = (uint)(byte)(&DAT_0079d77c)[iVar1];
  if (param_4 != (int *)0x0) {
    *param_4 = iVar1;
  }
  if (uVar3 != 0) {
    piVar2 = (int *)(iVar1 * 0x20 + 0x570f + (int)this);
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      *param_3 = iVar1 + param_1;
      param_3 = param_3 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

