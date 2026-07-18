
void thunk_FUN_0041dc40(undefined4 *param_1,undefined4 param_2,undefined2 param_3,short param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_c;
  
  iVar3 = (int)param_4;
  iVar1 = FUN_006aff50(iVar3);
  iVar2 = FUN_006aff5b(iVar3);
  iVar1 = (iVar1 * (short)param_2 - iVar2 * param_2._2_2_) / DAT_007eda8c;
  iVar2 = FUN_006aff5b(iVar3);
  iVar3 = FUN_006aff50(iVar3);
  uStack_c = CONCAT22((short)((iVar3 * param_2._2_2_ + iVar2 * (short)param_2) / DAT_007eda8c),
                      (short)iVar1);
  *param_1 = uStack_c;
  *(undefined2 *)(param_1 + 1) = param_3;
  return;
}

