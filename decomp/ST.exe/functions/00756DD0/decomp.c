
void FUN_00756dd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x192);
  if (*(int *)(param_1 + 0xc) != 0xcf) {
    FUN_006a5e40(0x12,DAT_007ed77c,0x7f2d68,0x209);
  }
  if (((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(param_1 + 0x60) != 0)) &&
     (*(int *)(param_1 + 0x80) != 0)) {
    iVar2 = *(int *)(iVar1 + 0x18);
    *(int *)(param_1 + 0x1ba) = iVar2;
    (**(code **)(iVar2 + 0xc))(param_1);
    *(undefined4 *)(iVar1 + 8) = 0;
    return;
  }
  FUN_006a5e40(0x2d,DAT_007ed77c,0x7f2d68,0x213);
  return;
}

