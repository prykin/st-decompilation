
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00678E00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=7; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=6; single_call_corroborated_by_receiver_family */

uint __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00678E00::FUN_00679120
          (AnonReceiver_00678E00 *this,byte *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  AnonShape_00679120_6A32469C *pAVar2;
  uint uVar3;
  void **value;
  InternalExceptionFrame local_68;
  undefined1 local_24 [4];
  uint local_20;
  short local_1c [4];
  AnonShape_00679120_6A32469C *local_14;
  void *local_10;
  int local_c;
  int local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = (AnonShape_00679120_6A32469C *)this;
  uVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pAVar2 = local_14;
  if (uVar3 == 0) {
    local_20 = thunk_FUN_00678e00(local_14,param_1);
    if (-1 < (int)local_20) {
      iVar1 = pAVar2->field_0695;
      if (local_20 < *(uint *)(iVar1 + 0xc)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        value = (void **)(*(int *)(iVar1 + 8) * local_20 + *(int *)(iVar1 + 0x1c));
      }
      else {
        value = (void **)0x0;
      }
      if ((value[1] == (void *)0x0) && (*value != (void *)0x0)) {
        local_10 = (void *)0x0;
        if ((param_2 < 0) || ((param_3 < 0 || (param_4 < 0)))) {
          param_2 = (int)pAVar2->field_063A;
          param_3 = (int)pAVar2->field_063C;
          param_4 = (int)pAVar2->field_063E;
        }
        local_c = param_3 + -2;
        local_8 = param_2 + -2;
        local_1c[2] = 5;
        local_1c[3] = 0;
        local_1c[0] = 5;
        local_1c[1] = 0;
        thunk_FUN_006756d0((short *)&local_8,(short *)&local_c,local_1c,local_1c + 2);
        *(undefined4 *)((int)*value + 4) = pAVar2->field_05D7;
        *(undefined4 *)((int)*value + 0x7d) = pAVar2->field_0640;
        *(short *)((int)*value + 0x62) = (short)local_8 + 2;
        *(short *)((int)*value + 100) = (short)local_c + 2;
        *(short *)((int)*value + 0x66) = (short)param_4;
        *(undefined1 *)((int)*value + 0x68) = pAVar2->field_064F;
        STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x38e,local_24,&local_10,*value,0);
        FreeAndNull(value);
        *value = local_10;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        value[1] = *(void **)((int)local_10 + 0x18);
      }
    }
    g_currentExceptionFrame = local_68.previous;
    return local_20;
  }
  g_currentExceptionFrame = local_68.previous;
  if (-1 < (int)uVar3) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

