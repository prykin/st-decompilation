
void __cdecl FUN_00691480(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = param_1;
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (*(char *)(param_1 + 0x18) == '\x02') {
      iVar1 = *(int *)(param_1 + 0x85);
      uVar2 = 0;
      if (0 < *(int *)(iVar1 + 0xc)) {
        bVar5 = *(int *)(iVar1 + 0xc) != 0;
        do {
          if (bVar5) {
            iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
          }
          else {
            iVar1 = 0;
          }
          if (*(int *)(iVar1 + 4) == 0) {
            param_1 = 0;
          }
          else {
            param_1 = *(int *)(iVar1 + 4) + 0x20;
          }
          thunk_FUN_006686c0(&param_1);
          iVar1 = *(int *)(iVar4 + 0x85);
          uVar2 = uVar2 + 1;
          bVar5 = uVar2 < *(uint *)(iVar1 + 0xc);
        } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
      }
    }
    puVar3 = (undefined4 *)(iVar4 + 0x85);
    iVar4 = 8;
    do {
      if ((byte *)*puVar3 != (byte *)0x0) {
        FUN_006ae110((byte *)*puVar3);
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

