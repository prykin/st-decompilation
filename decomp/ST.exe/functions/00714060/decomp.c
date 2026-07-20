
void __fastcall FUN_00714060(int *param_1)

{
  undefined4 local_4c [18];
  
  if ((param_1[0x16] != 0) && ((ccFntTy *)*param_1 != (ccFntTy *)0x0)) {
    ccFntTy::Save((ccFntTy *)*param_1,local_4c);
    FUN_007109f0((void *)*param_1,param_1 + 4);
    ccFntTy::EraseSufr((ccFntTy *)*param_1);
    if (param_1[0x22] != 0) {
      FUN_006ab060((LPVOID *)(param_1 + 0x22));
    }
    if (param_1[0x2a] != 0) {
      FUN_006ab060((LPVOID *)(param_1 + 0x2a));
    }
    if ((LPVOID)param_1[0x16] != (LPVOID)0x0) {
      FUN_006ab060((LPVOID *)(param_1 + 0x16));
    }
    FUN_007109f0((void *)*param_1,local_4c);
  }
  return;
}

