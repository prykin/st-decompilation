
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005f35f0(int param_1)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined **local_c;
  AnonShape_005F35F0_EF2A6FDB *local_8;
  
  local_10 = 0;
  local_c = &PTR_s_adcbo_007ce5a0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == 1) {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,local_c[local_8->field_0087],0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      puVar1 = &local_8->field_008F;
      FUN_006e8660(PTR_00807598,(int *)puVar1,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(PTR_00807598,*puVar1,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar1,0,local_8->field_00AB);
      local_8->field_0171 = puVar3;
      if (DAT_00807326 != '\0') {
        FUN_006e9520(PTR_00807598,*puVar1,0,0x403170,(uint)local_8);
      }
    }
    else {
      puVar1 = &local_8->field_008F;
      if (-1 < (int)local_8->field_008F) {
        FUN_006e9520(PTR_00807598,local_8->field_008F,0,0,(uint)local_8);
        FUN_006e8ba0(PTR_00807598,*puVar1);
      }
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,s_expl_i13_007ce618,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      FUN_006e8660(PTR_00807598,(int *)puVar1,3,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(PTR_00807598,*puVar1,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar1,0,local_8->field_00AB);
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,s_expl_s0_007ce610,0xffffffff,0,1,0,(undefined4 *)0x0
                         );
      FUN_006e98e0(PTR_00807598,*puVar1,2,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar1,2,local_8->field_00C0);
      FUN_006e9d40(PTR_00807598,(uint *)*puVar1,2);
    }
    FUN_006ea960(PTR_00807598,local_8->field_008F,
                 (float)local_8->field_0093 * _DAT_007904f8 * _DAT_007904f0,
                 (float)local_8->field_0097 * _DAT_007904f8 * _DAT_007904f0,
                 (float)local_8->field_009B * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(PTR_00807598,local_8->field_008F,0);
    local_8->field_00C4 = 1;
    g_currentExceptionFrame = local_54.previous;
    return 1;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_10;
}

