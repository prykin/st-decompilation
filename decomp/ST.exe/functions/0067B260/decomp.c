
void __fastcall FUN_0067b260(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(char *)(param_1 + 0x662) == '\x01') {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x6a1) + 0xc);
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      iVar2 = *(int *)(param_1 + 0x6a1);
      if ((((uVar1 < *(uint *)(iVar2 + 0xc)) &&
           (pcVar3 = (char *)(*(int *)(iVar2 + 8) * uVar1 + *(int *)(iVar2 + 0x1c)),
           pcVar3 != (char *)0x0)) && ((short)*pcVar3 == *(short *)(param_1 + 0x660))) &&
         (pcVar3[7] == '\0')) {
        FUN_006b0c70(iVar2,uVar1);
      }
    }
    *(undefined1 *)(param_1 + 0x662) = 0;
  }
  return;
}

