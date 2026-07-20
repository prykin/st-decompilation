
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005D4850 -> 006B7070 @ 005D488F */

void FUN_006b7070(int *param_1)

{
  int iVar1;
  uint uVar2;
  int **ppiVar3;
  int *piStack_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_28 [2];
  undefined1 *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d908;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffcc;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    piStack_40 = (int *)*param_1;
    puStack_38 = local_28;
    uStack_3c = 0;
    ExceptionList = &local_14;
    iVar1 = (**(code **)(*piStack_40 + 0x58))();
    if (iVar1 == -0x7788ffe2) {
      local_8 = 0;
      Library::MSVCRT::FUN_0072da40();
      ppiVar3 = &piStack_40;
      local_20 = (undefined1 *)&piStack_40;
      local_1c = (undefined1 *)&piStack_40;
      for (uVar2 = local_28[0] >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *ppiVar3 = (int *)0x0;
        ppiVar3 = ppiVar3 + 1;
      }
      for (uVar2 = local_28[0] & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)ppiVar3 = 0;
        ppiVar3 = (int **)((int)ppiVar3 + 1);
      }
      iVar1 = (**(code **)(*(int *)*param_1 + 0x58))((int *)*param_1,&piStack_40,local_28);
      if (iVar1 == 0) {
        uStack_3c = uStack_3c | 0x20;
        (**(code **)(*(int *)*param_1 + 0x7c))((int *)*param_1,&piStack_40,0);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

