
void FUN_004353b0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = param_1;
  iVar2 = (uint)DAT_0080874d * 0xa62;
  if (((*(int *)((int)&DAT_007f5023 + iVar2) == 1) &&
      (*(int *)((int)&DAT_007f4fd3 + iVar2) == 0x19a)) &&
     (*(int *)((int)&DAT_007f4fd7 + iVar2) == (int)(char)param_1)) {
    FUN_006acc70(*(int *)((int)&DAT_007f4fdd + iVar2),0,(undefined4 *)((int)&param_1 + 2));
    if (param_1._2_2_ == (short)param_2) {
      piVar3 = (int *)thunk_FUN_0042b620(uVar1,param_2,1);
      (**(code **)(*piVar3 + 0xe8))(0);
      FUN_006ae140(*(uint **)((int)&DAT_007f4fdd + (uint)DAT_0080874d * 0xa62),0,&param_3);
      piVar3 = (int *)thunk_FUN_0042b620(uVar1,param_3,1);
      thunk_FUN_00419df0(piVar3);
      (**(code **)(*piVar3 + 0xe8))(1);
      thunk_FUN_0043fc50(4,0);
      thunk_FUN_0043fc50(5,0);
    }
  }
  return;
}

