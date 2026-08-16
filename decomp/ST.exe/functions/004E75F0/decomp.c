
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_004e75f0(int param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;

  iVar2 = param_1;
  if ((-1 < param_1) && (param_1 < 8)) {
    bVar3 = LookupRecordByte((char)param_1);
    auto param_1_after_write = 0; /* compiler stack-slot lifetime split */
    if (0 < *(int *)(&DAT_007995bc + (bVar3 - 1) * 0x4bf)) {
      puVar5 = (uint *)(&DAT_007995bc + (bVar3 - 1) * 0x4bf);
      do {
        if (0x50 < param_1_after_write) {
          return;
        }
        iVar4 = thunk_FUN_004e60d0(iVar2,*puVar5);
        if (((iVar4 < (int)(uint)(byte)puVar5[1]) &&
            (iVar4 = thunk_FUN_004e5910(iVar2,*puVar5), iVar4 != 0)) &&
           (iVar4 = thunk_FUN_004e5f90(iVar2,*puVar5), iVar4 == 0)) {
          thunk_FUN_004e6310((byte *)iVar2,*puVar5,(uint)(byte)puVar5[1]);
        }
        piVar1 = (int *)((int)puVar5 + 5);
        puVar5 = (uint *)((int)puVar5 + 5);
        param_1_after_write = param_1_after_write + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

