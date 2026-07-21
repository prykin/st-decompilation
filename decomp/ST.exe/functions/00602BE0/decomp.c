
void __fastcall FUN_00602be0(AnonShape_00602BE0_B1CC517D *param_1)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;

  if (((int)param_1->field_039B < 0) && (iVar2 = thunk_FUN_006029c0(), iVar2 == 0)) {
    return;
  }
  if (param_1->field_036E == 2) {
    if (param_1->field_037A == '\x01') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      FUN_006e9350(param_1->field_0211,param_1->field_01ED,
                   *(uint *)(DAT_00806724 + 0x30 + param_1->field_0397 * 4),
                   (int)*(short *)(DAT_00806724 + 0x2c));
    }
    if ((*(byte *)&PTR_00802a38->field_00E4 & 3) == 0) {
      param_1->field_0397 = param_1->field_0397 + (int)param_1->field_039F;
    }
    if (param_1->field_039F < '\x01') {
      if (param_1->field_0397 < 0) {
        FUN_006e9350(param_1->field_0211,param_1->field_01ED,0,0);
        param_1->field_036E = 1;
      }
    }
    else if (((int)*(short *)(DAT_00806724 + 0x23) <= param_1->field_0397) &&
            (param_1->field_036E = 0, param_1->field_037A == '\x01')) {
      thunk_FUN_004ad430((int)&param_1->field_0x1d5);
      param_1->field_037A = 0;
    }
  }
  else if (param_1->field_036E != 4) {
    puVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00602E90::thunk_FUN_00602e90
                       ((AnonReceiver_00602E90 *)param_1);
    param_1->field_03AB = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      thunk_FUN_004ad310((STT3DSprC *)&param_1->field_0x1d5);
      param_1->field_039B = 0xffffffff;
      param_1->field_036E = 4;
    }
  }
  pVVar1 = g_visibleClass_00802A88;
  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) && (-1 < (int)param_1->field_039B)) {
    iVar2 = (int)param_1->field_0259;
    if (((DAT_0080874d != -1) &&
        ((((g_visibleClass_00802A88->field_00F8 != 0 &&
           (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                               (int)param_1->field_0255,(int)param_1->field_0257,&local_8,&local_c),
           -1 < iVar2)) && (iVar2 < 5)) && ((-1 < local_8 && (local_8 < (int)pVVar1->field_0030)))))
        ) && ((local_c = (&DAT_0079aed0)[iVar2] + local_c, -1 < local_c &&
              (((local_c < (int)pVVar1->field_0034 && (pVVar1->field_004C != 0)) &&
               (*(char *)(local_c * pVVar1->field_0030 + pVVar1->field_004C + local_8) == '\0'))))))
    {
      if (param_1->field_037A == '\0') {
        return;
      }
      thunk_FUN_004ad430((int)&param_1->field_0x1d5);
      param_1->field_037A = 0;
      return;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0xd8))();
    if (param_1->field_037A == '\0') {
      thunk_FUN_004ad460(&param_1->field_0x1d5,0);
      param_1->field_037A = 1;
      return;
    }
  }
  return;
}

