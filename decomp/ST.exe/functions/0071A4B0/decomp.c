
void __cdecl FUN_0071a4b0(int *param_1)

{
  int iVar1;
  undefined4 local_208 [128];
  uint local_8;

  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 5);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      iVar1 = FUN_006b1190(*(AnonShape_006B1190_EDB2B5FD **)(*param_1 + 5),local_208);
      while (-1 < iVar1) {
        cMf32::RecMemFree(*(cMf32 **)(*param_1 + 1),&local_8);
        iVar1 = FUN_006b1190(*(AnonShape_006B1190_EDB2B5FD **)(*param_1 + 5),local_208);
      }
      DArrayDestroy(*(DArrayTy **)(*param_1 + 5));
      *(undefined4 *)(*param_1 + 5) = 0;
    }
    FreeAndNull((void **)param_1);
  }
  return;
}

