
void __thiscall FUN_004f17d0(void *this,int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;

  if (param_2 < 6) {
    piVar5 = (int *)((int)this + 0xb99);
    if (param_1 == 0) {
      piVar5 = (int *)((int)this + 0xbf5);
    }
    uVar2 = (uint)param_2;
    iVar1 = uVar2 + (uint)(param_1 == 0) * 6;
    *(undefined1 *)((int)this + iVar1 * 0x27 + 0x780) = 1;
    iVar3 = thunk_FUN_00525390(*(Global_sub_00525390_param_1Enum *)(uVar2 + 9 + (int)piVar5),*piVar5
                              );
    *(int *)((int)this + iVar1 * 0x27 + 0x781) = iVar3;
    uVar4 = thunk_FUN_005272b0(*(Global_sub_005272B0_param_1Enum *)(uVar2 + 9 + (int)piVar5));
    *(undefined4 *)((int)this + iVar1 * 0x27 + 0x789) = uVar4;
    *(undefined1 *)((int)this + iVar1 * 0x27 + 0x78d) = 3;
  }
  return;
}

