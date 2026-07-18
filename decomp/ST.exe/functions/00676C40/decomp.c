
void __cdecl FUN_00676c40(int param_1,undefined *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  if (1 < uVar3) {
    do {
      bVar2 = false;
      uVar6 = 0;
      if ((int)(uVar3 - 1) < 1) {
        return;
      }
      do {
        if (uVar6 < uVar3) {
          iVar5 = *(int *)(param_1 + 8) * uVar6 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar5 = 0;
        }
        uVar1 = uVar6 + 1;
        if (uVar1 < uVar3) {
          iVar4 = *(int *)(param_1 + 8) * uVar1 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar4 = 0;
        }
        iVar5 = (*(code *)param_2)(iVar4,iVar5);
        if (0 < iVar5) {
          FUN_006b0cd0(param_1,uVar6,uVar1);
          bVar2 = true;
        }
        uVar3 = *(uint *)(param_1 + 0xc);
        uVar6 = uVar1;
      } while ((int)uVar1 < (int)(uVar3 - 1));
    } while (bVar2);
  }
  return;
}

