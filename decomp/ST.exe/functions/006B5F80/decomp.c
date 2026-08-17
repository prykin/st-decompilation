
/* [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 00554660 -> 006B5F80 @ 005546D6 | 00554800 -> 006B5F80 @ 0055494B | 0056CBD0 ->
   006B5F80 @ 0056CCA4 | 0056CBD0 -> 006B5F80 @ 0056CFD8 | 0056FA60 -> 006B5F80 @ 0057048B |
   00590580 -> 006B5F80 @ 005905C9 | 00591940 -> 006B5F80 @ 0059198B | 00593040 -> 006B5F80 @
   0059313C | 00596CC0 -> 006B5F80 @ 00596D11 | 005AD050 -> 006B5F80 @ 005AD09A | 005B3160 ->
   006B5F80 @ 005B31AB | 005B3D60 -> 006B5F80 @ 005B43FD | 005BA8B0 -> 006B5F80 @ 005BA8FA |
   005BE5B0 -> 006B5F80 @ 005BE5FE | 005BF860 -> 006B5F80 @ 005BFA14 | 005BF860 -> 006B5F80 @
   005BFB6D | 005C05F0 -> 006B5F80 @ 005C0685 | 005C2760 -> 006B5F80 @ 005C27A7 | 005C4E20 ->
   006B5F80 @ 005C4E6A | 005C7800 -> 006B5F80 @ 005C78F9 | 005E09E0 -> 006B5F80 @ 005E0A25 |
   005E5D50 -> 006B5F80 @ 005E5D95 | 005E79B0 -> 006B5F80 @ 005E79FA

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=88, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=96, unknown=1 */

void FUN_006b5f80(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;

  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    /* ST_CALLSITE[006B5F98]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  param_1[0x6d] = 1;
  if (param_1[0x6e] == 0) {
    iVar1 = FUN_006d1ad0((int *)param_1[0x6f],100,param_2 + param_1[0x5b],param_3 + param_1[0x5c],
                         param_4,param_5,param_1[3],param_1[4],1);
    if (iVar1 == -1) {
      param_1[0x6e] = 1;
    }
  }
  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    /* ST_CALLSITE[006B600B]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  return;
}

