
int FUN_006c7d20(int param_1,int param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = Library::DKW::GPC::FUN_006d80c0(param_1);
  if ((uVar2 != 0) && (uVar2 != 0xffffffff)) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x19);
  iVar6 = *(int *)(param_1 + 0x2a);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_1 + 0x10);
    iVar6 = *(int *)(param_1 + 0x12);
  }
  iVar5 = 1 << (cVar1 + 1U & 0x1f);
  if (param_2 == 0) {
    param_2 = Library::DKW::LIB::FUN_006aac70(iVar5 * 4);
    if (param_2 == 0) {
      return 0;
    }
  }
  if (0 < iVar5) {
    puVar3 = (undefined1 *)(param_2 + 2);
    puVar4 = (undefined1 *)(iVar6 + 2);
    iVar6 = iVar5;
    do {
      puVar3[-2] = puVar4[-2];
      puVar3[-1] = puVar4[-1];
      *puVar3 = *puVar4;
      puVar3[1] = 0;
      puVar3 = puVar3 + 4;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 3;
    } while (iVar6 != 0);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar5;
  }
  return param_2;
}

