
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00553C20 -> 00553A70 @ 00553CC2 */

void __cdecl
FUN_00553c20(int param_1,int param_2,byte *param_3,uint param_4,int param_5,undefined *param_6)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (param_3 != nullptr) {
    pbVar3 = thunk_FUN_005532f0((Global_sub_005532F0_param_1Enum)param_6);
    iVar2 = (int)param_6 * 2 + 1;
    iVar5 = param_1 - (int)param_6;
    iVar4 = param_2 - (int)param_6;
    if (0 < iVar2) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int)(param_3 + iVar4 * param_4 + iVar5);
      iVar6 = 0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = iVar2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = pbVar3;
      while( true ) {
        do {
          iVar1 = iVar6 + iVar5;
          if (((((iVar1 < 0) || ((int)param_4 <= iVar1)) || (iVar4 < 0)) ||
              ((param_5 <= iVar4 || (*(char *)(param_1 + iVar6) != '\0')))) &&
             ((pbVar3 == nullptr || (param_6[iVar6] != '\0')))) {
            thunk_FUN_00553a70(iVar1,iVar4,(int)param_3,param_4,param_5);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + iVar2;
        iVar4 = iVar4 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + param_4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_2 == 0) break;
        iVar6 = 0;
      }
    }
  }
  return;
}

