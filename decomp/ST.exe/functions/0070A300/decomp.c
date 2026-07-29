
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __cdecl FUN_0070a300(int *param_1)

{
  int iVar1;
  undefined4 local_34 [10];
  uint local_b;

  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 4);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      iVar1 = DArrayGetNext(*(DArrayTy **)(*param_1 + 4),(byte *)local_34);
      while (-1 < iVar1) {
        if (local_b != 0) {
          FUN_00709a10((void *)*param_1,(Global_sub_00709A10_param_2Enum)local_34[0],&local_b);
        }
        iVar1 = DArrayGetNext(*(DArrayTy **)(*param_1 + 4),(byte *)local_34);
      }
      DArrayDestroy(*(DArrayTy **)(*param_1 + 4));
    }
    FreeAndNull((void **)param_1);
  }
  return;
}

