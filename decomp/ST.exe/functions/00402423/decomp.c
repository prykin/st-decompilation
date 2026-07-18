
int __thiscall thunk_FUN_00423220(void *this,int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (param_2 != 1) {
    piVar1 = param_1;
    iVar5 = param_2;
    if (0 < param_2) {
      do {
        iVar4 = iVar4 + *piVar1;
        iVar5 = iVar5 + -1;
        piVar1 = piVar1 + 0xb;
      } while (iVar5 != 0);
    }
    uVar2 = *(int *)this * 0x41c64e6d + 0x3039;
    *(uint *)this = uVar2;
    iVar3 = 0;
    iVar5 = 0;
    if (0 < param_2) {
      do {
        iVar3 = iVar3 + *param_1;
        if ((int)((uVar2 >> 0x10) % (iVar4 + 1U)) <= iVar3) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 0xb;
      } while (iVar5 < param_2);
    }
  }
  return 0;
}

