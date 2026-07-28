
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_004e75f0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;

  iVar2 = param_1;
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar3 = GetPlayerRaceId((char)param_1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    iVar4 = (uVar3 & 0xff) - 1;
    if (0 < *(int *)(&DAT_007995bc + iVar4 * 0x4bf)) {
      puVar5 = (uint *)(&DAT_007995bc + iVar4 * 0x4bf);
      do {
        if (0x50 < param_1) {
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

