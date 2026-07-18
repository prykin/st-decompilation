
ushort * __cdecl FUN_0067bd00(int param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 0xc);
  if (0 < (int)uVar1) {
    bVar4 = uVar1 != 0;
    do {
      if (((bVar4) &&
          (puVar2 = (ushort *)(*(int *)(param_1 + 8) * uVar3 + *(int *)(param_1 + 0x1c)),
          puVar2 != (ushort *)0x0)) && (*puVar2 == param_2)) {
        return puVar2;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return (ushort *)0x0;
}

