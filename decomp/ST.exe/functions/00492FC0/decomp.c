
void __fastcall FUN_00492fc0(int param_1)

{
  undefined4 in_EAX;
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x45d) == 9) && (*(int *)(param_1 + 0x611) == 3)) {
    piVar1 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)param_1 >> 8),
                                                *(undefined1 *)(param_1 + 0x5fc)),
                                       CONCAT22((short)((uint)in_EAX >> 0x10),
                                                *(undefined2 *)(param_1 + 0x5fd)),1);
    if ((piVar1 != (int *)0x0) && (piVar1[6] == *(int *)(param_1 + 0x5ff))) {
      iVar2 = (**(code **)(*piVar1 + 0x108))(*(undefined4 *)(param_1 + 0x24));
      if (iVar2 != 0) {
        thunk_FUN_004cd450((int)piVar1);
      }
    }
  }
  return;
}

