
undefined4 __thiscall
FUN_006e6630(void *this,int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)((int)this + 0x41c) <= param_1) {
    iVar1 = FUN_006acf50(*(undefined4 **)((int)this + 0x420),(param_1 + 100) * 4);
    if (iVar1 == 0) {
      RaiseInternalException(-2,DAT_007ed77c,s_E__ourlib_St3dsmap_cpp_007eec34,0x79);
      return 0xfffffffe;
    }
    puVar4 = (undefined4 *)(iVar1 + *(int *)((int)this + 0x41c) * 4);
    for (uVar2 = (param_1 - *(int *)((int)this + 0x41c)) * 4 + 400U >> 2; uVar2 != 0;
        uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(int *)((int)this + 0x420) = iVar1;
    *(int *)((int)this + 0x41c) = param_1 + 100;
  }
  *(undefined1 *)(*(int *)((int)this + 0x420) + param_1 * 4) = param_2;
  *(undefined1 *)(*(int *)((int)this + 0x420) + 1 + param_1 * 4) = param_3;
  *(undefined1 *)(*(int *)((int)this + 0x420) + 2 + param_1 * 4) = param_4;
  *(undefined1 *)(*(int *)((int)this + 0x420) + 3 + param_1 * 4) = 1;
  return 0;
}

