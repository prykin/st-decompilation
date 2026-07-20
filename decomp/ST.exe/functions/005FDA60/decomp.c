
void __fastcall FUN_005fda60(int param_1)

{
  LPVOID *ppvVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  ppvVar1 = (LPVOID *)(param_1 + 0x233);
  iVar3 = 0;
  if (*(int *)(param_1 + 0x233) != 0) {
    if ((*(int *)(param_1 + 0x226) != 0) && (local_8 = 0, 0 < *(int *)(param_1 + 0x226))) {
      do {
        if (*(int *)(iVar3 + 0x4e + (int)*ppvVar1) != 0) {
          FUN_006ab060((LPVOID *)(iVar3 + 0x4e + (int)*ppvVar1));
        }
        iVar2 = *(int *)(iVar3 + 0x42 + (int)*ppvVar1);
        if (iVar2 != 0) {
          thunk_FUN_004ad310(iVar2);
          Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)(iVar3 + 0x42 + (int)*ppvVar1));
          *(undefined4 *)(iVar3 + 0x42 + (int)*ppvVar1) = 0;
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 0x52;
      } while (local_8 < *(int *)(param_1 + 0x226));
    }
    FUN_006ab060(ppvVar1);
  }
  if (*(int *)(param_1 + 0x23b) != 0) {
    FUN_006ab060((LPVOID *)(param_1 + 0x23b));
  }
  if (*(int *)(param_1 + 0x23f) != 0) {
    FUN_006ab060((LPVOID *)(param_1 + 0x23f));
  }
  return;
}

