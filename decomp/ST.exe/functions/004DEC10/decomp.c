
/* [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92
    */

undefined4 __fastcall FUN_004dec10(TLOBaseTy *param_1)

{
  int iVar1;
  dword dVar2;
  int iVar3;

  switch(param_1->field_04D0) {
  case CASE_0:
    iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar1 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_1;
      TLOBaseTy::RotateSpr(param_1,0);
      thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
      (*param_1->vtable->vfunc_90)(4,0x340);
      return 0;
    }
    break;
  case CASE_1:
    if ((param_1->field_04D4 == 0) &&
       (iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e'),
       iVar1 == param_1->field_01F5->field_020C)) {
      param_1->field_04D0 = CASE_3;
      TLOBaseTy::RotateSpr(param_1,0);
      thunk_FUN_004c2d40((AnonShape_004C2D40_7C578146 *)param_1);
      (*param_1->vtable->vfunc_90)(4,0x341);
      return 0;
    }
    break;
  case CASE_2:
    iVar3 = 0x2d;
    iVar1 = thunk_FUN_004b79c0(*(char *)&param_1->field_0024,param_1->field_0018);
    if (iVar1 == 0) {
      iVar3 = 0xb4;
    }
    if ((uint)(param_1->field_04D8 + iVar3) <= g_playSystem_00802A38->field_00E4) {
      iVar1 = param_1->field_04D4 + 0x32;
      param_1->field_04D4 = iVar1;
      if (4999 < iVar1) {
        param_1->field_04D4 = 5000;
        param_1->field_04D0 = CASE_0;
        TLOBaseTy::RotateSpr(param_1,0);
        dVar2 = (*param_1->vtable->slot_2C)(param_1);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_004b7710(CONCAT31((int3)(dVar2 >> 8),*(undefined1 *)&param_1->field_0024),dVar2);
        if (param_1->field_0024 == (uint)(byte)param_1->field_0010->field_112D) {
          thunk_FUN_004d8b70((char)param_1->field_0024);
        }
      }
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      return 0;
    }
    break;
  case CASE_3:
    iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar1 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_2;
      TLOBaseTy::RotateSpr(param_1,0);
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      dVar2 = (*param_1->vtable->slot_2C)(param_1);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_004b76d0(CONCAT31((int3)(dVar2 >> 8),*(undefined1 *)&param_1->field_0024),dVar2);
      if (param_1->field_0024 == (uint)(byte)param_1->field_0010->field_112D) {
        thunk_FUN_004d8b70((char)param_1->field_0024);
      }
    }
  }
  return 0;
}

