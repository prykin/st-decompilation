
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=2,
   ignored=5, unknown=0 */

void FUN_006d1610(undefined8 *param_1,undefined8 *param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  AnonPointee_TLOBaseTy_0607 *pAVar2;
  undefined8 *puVar3;

  if (param_1 <= param_2) {
    FUN_006cea60(param_1,param_3,param_2,param_3,param_4,param_5);
    return;
  }
  iVar1 = (param_5 + -1) * param_3;
  puVar3 = (undefined8 *)((int)param_1 + iVar1);
  pAVar2 = (AnonPointee_TLOBaseTy_0607 *)((int)param_2 + iVar1);
  if ((int)puVar3 - (int)pAVar2 < (int)param_4) {
    if ((0 < (int)param_4) && (0 < param_5)) {
      do {
        Library::MSVCRT::FUN_0072da70((undefined4 *)puVar3,pAVar2,param_4);
        pAVar2 = (AnonPointee_TLOBaseTy_0607 *)((int)pAVar2 - param_3);
        puVar3 = (undefined8 *)((int)puVar3 - param_3);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    return;
  }
  FUN_006cea60(puVar3,-param_3,(undefined8 *)pAVar2,-param_3,param_4,param_5);
  return;
}

