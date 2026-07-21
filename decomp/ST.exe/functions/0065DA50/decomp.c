
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
  undefined4 in_EAX;
  STGroupBoatC *this_00;
  uint uVar2;
  DArrayTy *array;
  dword dVar3;
  undefined2 *puVar4;
  STGameObjC *pSVar5;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *pvVar6;
  undefined4 extraout_EDX;
  undefined4 uVar7;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  char cVar8;
  undefined8 uVar9;
  uint local_8;
  
  local_8 = 0;
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)&this->field_0x7d);
  if ((((*(short *)&this->field_0x7d != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) &&
      (this_00 = thunk_FUN_0042b760(CONCAT31((int3)(uVar2 >> 8),this->field_0x24),uVar2),
      this_00 != (STGroupBoatC *)0x0)) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    cVar8 = this->field_0x81;
    if ((cVar8 < '\0') || ('\a' < cVar8)) {
      cVar8 = (char)*(undefined4 *)&this->field_0x24;
    }
    if (((param_2 != '\b') && ((param_2 < '\0' || (cVar8 = param_2, '\b' < param_2)))) ||
       (param_2 = cVar8, uVar7 = CONCAT31((int3)((uint)extraout_EDX >> 8),param_2), param_2 < '\0'))
    {
      if (param_1 != 0) {
        uVar2 = STGroupC::GetTOBJQty((STGroupC *)this_00,param_1);
        return uVar2 & 0xffff;
      }
      uVar1 = thunk_FUN_004233c0((int)this_00);
      return (uint)uVar1;
    }
    if (param_1 == 0) {
      array = (DArrayTy *)thunk_FUN_0065da10((AnonShape_0065DA10_8B0AA883 *)this,uVar7);
      pvVar6 = extraout_ECX;
      uVar7 = extraout_EDX_00;
    }
    else {
      array = (DArrayTy *)thunk_FUN_0065e360((AnonShape_0065E360_B94C37CB *)this,uVar7,param_1);
      pvVar6 = extraout_ECX_00;
      uVar7 = extraout_EDX_01;
    }
    if (array != (DArrayTy *)0x0) {
      dVar3 = array->count;
      uVar2 = 0;
      if (0 < (int)dVar3) {
        do {
          if (uVar2 < dVar3) {
            pvVar6 = array->data;
            puVar4 = (undefined2 *)(array->elementSize * uVar2 + (int)pvVar6);
          }
          else {
            puVar4 = (undefined2 *)0x0;
          }
          pSVar5 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)uVar7 >> 8),this->field_0x24),
                              CONCAT22((short)((uint)pvVar6 >> 0x10),*puVar4),CASE_1);
          pvVar6 = extraout_ECX_01;
          uVar7 = extraout_EDX_02;
          if (pSVar5 != (STGameObjC *)0x0) {
            uVar9 = (*pSVar5->vtable[1].vfunc_24)();
            uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
            pvVar6 = extraout_ECX_02;
            if ((int)uVar9 != 0) {
              uVar9 = (*pSVar5->vtable->vfunc_6C)();
              uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
              pvVar6 = (void *)(int)param_2;
              if (pvVar6 == (void *)uVar9) {
                local_8 = local_8 + 1;
              }
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

