
void __thiscall FUN_004a0ee0(void *this,ushort param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_1c;
  ushort local_18;
  
  thunk_FUN_0040cdb0(this,(uint)param_1);
  if (((*(int *)((int)this + 0x1e6) == 6) && (iVar1 = *(int *)((int)this + 0x22e), iVar1 != 0)) &&
     (uVar2 = 0, 0 < *(int *)(iVar1 + 0xc))) {
    do {
      FUN_006acc70(iVar1,uVar2,&local_1c);
      if (local_18 == param_1) {
        local_18 = 0xffff;
        local_1c = 0;
        FUN_006ae140(*(uint **)((int)this + 0x22e),uVar2,&local_1c);
      }
      iVar1 = *(int *)((int)this + 0x22e);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(iVar1 + 0xc));
  }
  thunk_FUN_00423c70(this,param_1);
  return;
}

