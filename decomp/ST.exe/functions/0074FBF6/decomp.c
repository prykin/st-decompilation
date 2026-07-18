
void __fastcall FUN_0074fbf6(int *param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1[2] != 0) {
    iVar4 = 0;
    do {
      psVar2 = (short *)(*param_1 + iVar4);
      sVar1 = *psVar2;
      if (sVar1 == 8) {
        if (*(int *)(psVar2 + 4) != 0) {
          FUN_0072e2b0((undefined4 *)(*(int *)(psVar2 + 4) + -2));
        }
      }
      else if ((sVar1 == 9) || (sVar1 == 0xd)) {
        (**(code **)(**(int **)(psVar2 + 4) + 8))(*(int **)(psVar2 + 4));
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar3 < (uint)param_1[2]);
  }
  FUN_0072e2b0((undefined4 *)*param_1);
  return;
}

