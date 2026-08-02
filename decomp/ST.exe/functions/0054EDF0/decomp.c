
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00503BB0 -> 0054EDF0 @ 00503E68; address of zeroed full register at 00503E53 | 0052F2B0
   -> 0054EDF0 @ 0052F54F; address of zeroed full register at 0052F51C | 0053CA80 -> 0054EDF0 @
   0053CC2B; address of zeroed full register at 0053CBFD */

void FUN_0054edf0(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STPlaySystemC *in_ECX;
  char cVar2;

  cVar2 = (char)param_1;
  if ((((*(char *)(g_bulkInitializedRecords_008087C7 + DAT_0080874d) == '\0') &&
       (DAT_0080874f == '\0')) || (cVar2 == '\x05')) && (DAT_008087a5 == 0)) {
    if (param_3 != 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      STPlaySystemC::SetCtrlCmd(in_ECX,DAT_0080874d,0,cVar2,param_2,param_4,nullptr,0);
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
    uVar1 = STAllPlayersC::PrepareToCmd(g_allPlayers_007FA174,&param_1,&param_3);
    if (uVar1 != 0xffffffff) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      STPlaySystemC::SetCtrlCmd(in_ECX,DAT_0080874d,uVar1,cVar2,param_2,param_4,param_1,param_3);
    }
    if (param_1 != nullptr) {
      FreeAndNull(&param_1);
    }
  }
  return;
}

