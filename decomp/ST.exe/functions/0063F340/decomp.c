
void __fastcall FUN_0063f340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(param_1 + 0x347);
  if (puVar3 == (ushort *)0x0) {
    puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_nb0_007d1f50,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)(param_1 + 0x347) = puVar3;
    *(int *)(param_1 + 0x33e) = *(int *)puVar3 + -7;
    if (puVar3 == (ushort *)0x0) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x33e);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x342) = **(undefined4 **)(*(int *)((int)puVar3 + 0x21) + iVar1 * 4);
    return;
  }
  uVar2 = **(undefined4 **)(*(int *)((int)puVar3 + 0x21) + 4 + (iVar1 + -1) * 4);
  *(int *)(param_1 + 0x33e) = iVar1 + -1;
  *(undefined4 *)(param_1 + 0x342) = uVar2;
  return;
}

