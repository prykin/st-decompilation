
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005F35F0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=21; incoming_edx_uses=0; calls=4;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=4 */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005F35F0::FUN_005f35f0
          (AnonReceiver_005F35F0 *this,int param_1)

{
  uint *puVar1;
  AnonShape_005F35F0_EF2A6FDB *pAVar2;
  int iVar3;
  ushort *puVar4;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined **local_c;
  AnonShape_005F35F0_EF2A6FDB *local_8;

  local_10 = 0;
  local_c = &PTR_s_adcbo_007ce5a0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = (AnonShape_005F35F0_EF2A6FDB *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    if (param_1 == 1) {
      puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,local_c[local_8->field_0087],0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      puVar1 = &pAVar2->field_008F;
      FUN_006e8660(PTR_00807598,(int *)puVar1,1,0,*(uint *)((int)puVar4 + 9),
                   *(uint *)((int)puVar4 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(PTR_00807598,*puVar1,0,*(undefined4 *)puVar4,*(int *)((int)puVar4 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar1,0,pAVar2->field_00AB);
      pAVar2->field_0171 = puVar4;
      if (DAT_00807326 != '\0') {
        AnonReceiver_004248D0::FUN_006e9520
                  ((AnonReceiver_004248D0 *)PTR_00807598,*puVar1,0,0x403170,(uint)pAVar2);
      }
    }
    else {
      puVar1 = &local_8->field_008F;
      if (-1 < (int)local_8->field_008F) {
        AnonReceiver_004248D0::FUN_006e9520
                  ((AnonReceiver_004248D0 *)PTR_00807598,local_8->field_008F,0,0,(uint)local_8);
        FUN_006e8ba0(PTR_00807598,*puVar1);
      }
      puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,"expl_i13",0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      FUN_006e8660(PTR_00807598,(int *)puVar1,3,0,*(uint *)((int)puVar4 + 9),
                   *(uint *)((int)puVar4 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(PTR_00807598,*puVar1,0,*(undefined4 *)puVar4,*(int *)((int)puVar4 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar1,0,pAVar2->field_00AB);
      puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,"expl_s0",0xffffffff,0,1,0,(undefined4 *)0x0
                         );
      FUN_006e98e0(PTR_00807598,*puVar1,2,*(undefined4 *)puVar4,*(int *)((int)puVar4 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar1,2,pAVar2->field_00C0);
      FUN_006e9d40(PTR_00807598,(uint *)*puVar1,2);
    }
    FUN_006ea960(PTR_00807598,pAVar2->field_008F,
                 (float)pAVar2->field_0093 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pAVar2->field_0097 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pAVar2->field_009B * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(PTR_00807598,pAVar2->field_008F,0);
    pAVar2->field_00C4 = 1;
    g_currentExceptionFrame = local_54.previous;
    return 1;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_10;
}

