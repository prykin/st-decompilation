
void __fastcall FUN_00558140(int param_1)

{
  int iVar1;
  LPVOID *ppvVar2;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_006ab060((LPVOID *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_006ab060((LPVOID *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_006ab060((LPVOID *)(param_1 + 0x50));
  }
  ppvVar2 = (LPVOID *)(param_1 + 0x54);
  iVar1 = 8;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (LPVOID *)(param_1 + 0x74);
  iVar1 = 8;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (LPVOID *)(param_1 + 0x94);
  iVar1 = 8;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (LPVOID *)(param_1 + 0xb4);
  iVar1 = 8;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (LPVOID *)(param_1 + 0xd4);
  iVar1 = 8;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (LPVOID *)(param_1 + 0x3c);
  iVar1 = 4;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(byte **)(param_1 + 0xf4) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(param_1 + 0xf4));
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  if (*(byte **)(param_1 + 0x110) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(param_1 + 0x110));
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return;
}

