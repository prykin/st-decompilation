
void __fastcall thunk_FUN_005fda60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  
  piVar1 = (int *)(param_1 + 0x233);
  iVar3 = 0;
  if (*(int *)(param_1 + 0x233) != 0) {
    if ((*(int *)(param_1 + 0x226) != 0) && (uStack_8 = 0, 0 < *(int *)(param_1 + 0x226))) {
      do {
        if (*(int *)(iVar3 + 0x4e + *piVar1) != 0) {
          FUN_006ab060((undefined4 *)(iVar3 + 0x4e + *piVar1));
        }
        iVar2 = *(int *)(iVar3 + 0x42 + *piVar1);
        if (iVar2 != 0) {
          thunk_FUN_004ad310(iVar2);
          FUN_0072e2b0(*(undefined4 **)(iVar3 + 0x42 + *piVar1));
          *(undefined4 *)(iVar3 + 0x42 + *piVar1) = 0;
        }
        uStack_8 = uStack_8 + 1;
        iVar3 = iVar3 + 0x52;
      } while (uStack_8 < *(int *)(param_1 + 0x226));
    }
    FUN_006ab060(piVar1);
  }
  if (*(int *)(param_1 + 0x23b) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x23b));
  }
  if (*(int *)(param_1 + 0x23f) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x23f));
  }
  return;
}

