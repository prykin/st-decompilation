
undefined4 __thiscall FUN_0062ef00(void *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar4 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if (iVar4 != 0) {
    *(uint *)(iVar4 + 0x14) = (uint)*(ushort *)(param_2 + 0x28);
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x20) =
         *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x24) =
         *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x28) =
         *(undefined4 *)(param_2 + 0x1c);
    **(undefined4 **)((int)this + param_1 * 4 + 0x1e5) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x35) = PTR_00802a38->field_00E4;
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x39) = 3000;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    *(uint *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x1c) = (uVar1 >> 0x10) % 5;
    iVar4 = *(int *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x1c);
    iVar3 = thunk_FUN_004ab050();
    iVar4 = thunk_FUN_0062ffd0(iVar3,iVar4);
    *(int *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x2c) = iVar4;
    *(uint *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 4) = *(uint *)(param_2 + 0x28) >> 0x10;
    *(uint *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0xc) = (uint)*(ushort *)(param_2 + 0x24);
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 8) = *(undefined4 *)(param_2 + 0x2c)
    ;
    iVar4 = *(int *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 4);
    if ((iVar4 == 3) || (iVar4 == 6)) {
      thunk_FUN_00630260(this,param_1,1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

