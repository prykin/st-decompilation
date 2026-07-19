
int * FUN_006c81c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_5 < 1) {
    return (int *)0x0;
  }
  piVar3 = (int *)Library::DKW::LIB::FUN_006aac70(param_5 * 8);
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar3 = param_1;
  piVar3[1] = param_2;
  if (param_5 != 1) {
    iVar1 = param_5 + -1;
    if (1 < iVar1) {
      iVar6 = param_2 * 0x10000 + 0x8000;
      iVar5 = param_1 * 0x10000 + 0x8000;
      iVar4 = param_5 + -2;
      piVar2 = piVar3;
      do {
        iVar6 = iVar6 + ((param_4 - param_2) * 0x10000) / iVar1;
        iVar5 = iVar5 + ((param_3 - param_1) * 0x10000) / iVar1;
        piVar2[2] = iVar5 >> 0x10;
        piVar2[3] = iVar6 >> 0x10;
        iVar4 = iVar4 + -1;
        piVar2 = piVar2 + 2;
      } while (iVar4 != 0);
    }
    piVar3[param_5 * 2 + -2] = param_3;
    piVar3[param_5 * 2 + -1] = param_4;
  }
  return piVar3;
}

