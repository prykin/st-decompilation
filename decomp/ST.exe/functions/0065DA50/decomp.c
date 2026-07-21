
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0065DA50.
   Evidence: incoming_receiver_captures=1; receiver_accesses=5; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=1; adopt_untyped_existing_thiscall */

uint __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065DA50::FUN_0065da50
          (AnonReceiver_0065DA50 *this,int param_1,char param_2)

{
  ushort uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  STGroupBoatC *this_00;
  uint uVar2;
  DArrayTy *array;
  dword dVar3;
  undefined2 *puVar4;
  STGameObjC *pSVar5;
  int iVar6;
  void *pvVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  void *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  void *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  void *extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  void *extraout_ECX_02;
  void *pvVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 uVar9;
  char cVar10;
  uint local_8;

  local_8 = 0;
  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  if ((((*(short *)&this->field_0x7d != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) &&
      (this_00 = thunk_FUN_0042b760(this->field_0x24,
                                    CONCAT22((short)((uint)in_EAX >> 0x10),
                                             *(short *)&this->field_0x7d)),
      this_00 != (STGroupBoatC *)0x0)) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    cVar10 = this->field_0x81;
    if ((cVar10 < '\0') || ('\a' < cVar10)) {
      cVar10 = (char)*(undefined4 *)&this->field_0x24;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (((param_2 != '\b') && ((param_2 < '\0' || (cVar10 = param_2, '\b' < param_2)))) ||
       (param_2 = cVar10, uVar9 = CONCAT31((int3)((uint)extraout_EDX >> 8),param_2), param_2 < '\0')
       ) {
      if (param_1 != 0) {
        uVar2 = STGroupC::GetTOBJQty((STGroupC *)this_00,param_1);
        return uVar2 & 0xffff;
      }
      uVar1 = thunk_FUN_004233c0((int)this_00);
      return (uint)uVar1;
    }
    if (param_1 == 0) {
      array = (DArrayTy *)thunk_FUN_0065da10((AnonShape_0065DA10_8B0AA883 *)this,uVar9);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pvVar8 = extraout_ECX;
    }
    else {
      array = (DArrayTy *)thunk_FUN_0065e360((AnonShape_0065E360_B94C37CB *)this,uVar9,param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pvVar8 = extraout_ECX_00;
    }
    if (array != (DArrayTy *)0x0) {
      dVar3 = array->count;
      uVar2 = 0;
      if (0 < (int)dVar3) {
        do {
          if (uVar2 < dVar3) {
            pvVar8 = array->data;
            puVar4 = (undefined2 *)(array->elementSize * uVar2 + (int)pvVar8);
          }
          else {
            puVar4 = (undefined2 *)0x0;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar5 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this->field_0x24,
                              CONCAT22((short)((uint)pvVar8 >> 0x10),*puVar4),CASE_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          pvVar8 = extraout_ECX_01;
          /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable/callback call with explicit __thiscall receiver */
          if ((pSVar5 != (STGameObjC *)0x0) &&
             (iVar6 = (**(code **)&pSVar5->vtable[1].field_0x28)(), pvVar8 = extraout_ECX_02,
             iVar6 != 0)) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            pvVar7 = (void *)(**(code **)&pSVar5->vtable->field_0x6c)();
            pvVar8 = (void *)(int)param_2;
            if (pvVar8 == pvVar7) {
              local_8 = local_8 + 1;
            }
          }
          dVar3 = array->count;
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < (int)dVar3);
      }
      DArrayDestroy(array);
    }
  }
  return local_8;
}

