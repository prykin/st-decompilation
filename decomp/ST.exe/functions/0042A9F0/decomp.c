
void FUN_0042a9f0(char param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  undefined4 *puVar2;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC::ResetActivityFromTmp(in_ECX,param_1,0,0,0);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC::ResetActivityFromTmp(in_ECX,param_1,1,0,0);
  iVar1 = (int)param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_1 = 5;
  puVar2 = &g_packedRecords_A62x8[iVar1].field335_0x16d;
  do {
    if ((DArrayTy *)*puVar2 != nullptr) {
      DArrayDestroy((DArrayTy *)*puVar2);
      *puVar2 = 0;
    }
    *(undefined4 *)((int)puVar2 + -10) = 0;
    if ((DArrayTy *)puVar2[0x14] != nullptr) {
      DArrayDestroy((DArrayTy *)puVar2[0x14]);
      puVar2[0x14] = 0;
    }
    *(undefined4 *)((int)puVar2 + 0x46) = 0;
    puVar2 = puVar2 + 4;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_1 = _param_1 + -1;
  } while (_param_1 != 0);
  puVar2 = &g_packedRecords_A62x8[iVar1].field452_0x211;
  iVar1 = 10;
  do {
    if ((DArrayTy *)*puVar2 != nullptr) {
      DArrayDestroy((DArrayTy *)*puVar2);
      *puVar2 = 0;
    }
    *(undefined4 *)((int)puVar2 + -10) = 0;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

