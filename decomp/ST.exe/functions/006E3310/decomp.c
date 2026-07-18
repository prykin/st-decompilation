
int * __thiscall FUN_006e3310(void *this,int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  piVar4 = param_4;
  if ((-1 < param_1) && (piVar4 = param_2, -1 < (int)param_2)) {
    iVar2 = *(int *)((int)this + 0x380) * 2;
    iVar3 = param_1 / iVar2;
    piVar4 = (int *)(param_1 / iVar2);
    if ((-1 < iVar3) && (iVar1 = *(int *)((int)this + 0x284), iVar3 < iVar1)) {
      piVar4 = (int *)((int)param_2 / iVar2);
      if ((-1 < (int)piVar4) && ((int)piVar4 < iVar1)) {
        iVar6 = 5;
        piVar5 = (int *)(*(int *)((int)this + 0x280) + 0x459 +
                        (*(int *)((int)this + 0x288) * 5 + iVar3 + iVar1 * (int)piVar4) * 4);
        do {
          piVar4 = (int *)*piVar5;
          if (((piVar4 != (int *)0x0) &&
              (*(char *)(piVar4[0x10] + *(int *)((int)this + 0x380) * ((int)param_2 % iVar2) * 2 +
                        param_1 % iVar2) != '\0')) &&
             (piVar4 = (int *)(iVar6 - (uint)*(byte *)(piVar4 + 0x12)), (int)piVar4 <= param_3)) {
            if (iVar6 < 1) {
              return piVar4;
            }
            if (param_4 != (int *)0x0) {
              *param_4 = iVar6;
            }
            return this;
          }
          iVar6 = iVar6 + -1;
          piVar5 = piVar5 + -*(int *)((int)this + 0x288);
        } while (0 < iVar6);
      }
    }
  }
  return piVar4;
}

