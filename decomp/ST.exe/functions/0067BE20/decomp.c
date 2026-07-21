
void __fastcall FUN_0067be20(int param_1,undefined4 param_2,DArrayTy *param_3)

{
  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  STFishC *objPtr;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined2 *puVar2;
  short local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  int local_8;

  uVar1 = param_3->count;
  local_8 = param_1;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_3, uVar1) (runtime stride) */
    if ((uVar1 < param_3->count) &&
       (puVar2 = (undefined2 *)(param_3->elementSize * uVar1 + (int)param_3->data),
       puVar2 != (undefined2 *)0x0)) {
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      objPtr = (STFishC *)
               STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,*(char *)(local_8 + 0x640),
                          CONCAT22((short)((uint)in_EAX >> 0x10),*puVar2),CASE_1);
      if (objPtr == (STFishC *)0x0) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_EAX = FUN_006b0c70(param_3,uVar1);
      }
      else {
        thunk_FUN_0067bda0(&local_14,objPtr);
        puVar2[2] = local_14;
        puVar2[3] = local_12;
        puVar2[4] = local_10;
        /* ST_PSEUDO[unresolved_register_input,return_width_artifact]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate call-output artifact: verify return width, clobbers, or x87 state */
        in_EAX = CONCAT22(extraout_var,local_a);
        puVar2[5] = local_e;
        puVar2[6] = local_c;
        puVar2[7] = local_a;
      }
    }
  }
  return;
}

