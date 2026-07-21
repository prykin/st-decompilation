
void __fastcall FUN_00623600(AnonShape_00623600_61226D23 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  VisibleClassTy *pVVar5;
  int iVar6;
  int local_c;
  int local_8;

  pVVar5 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
    cVar2 = param_1->field_02E9;
  }
  else {
    iVar6 = (int)param_1->field_004B;
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                             (int)param_1->field_0047,(int)param_1->field_0049,&local_8,&local_c),
         iVar6 < 0)) ||
        ((((4 < iVar6 || (local_8 < 0)) ||
          (((int)pVVar5->field_0030 <= local_8 ||
           ((local_c = (&DAT_0079aed0)[iVar6] + local_c, local_c < 0 ||
            ((int)pVVar5->field_0034 <= local_c)))))) || (pVVar5->field_004C == 0)))) ||
       (*(char *)(local_c * pVVar5->field_0030 + pVVar5->field_004C + local_8) != '\0')) {
      bVar4 = false;
      if (param_1->field_02AE == 0) {
        cVar2 = param_1->field_02AD;
        if ((cVar2 == '\x03') || (cVar2 == '\x02')) {
          if (param_1->field_030E == '\0') {
            if ((param_1->field_030A == 0) || ((*(byte *)&PTR_00802a38->field_00E4 & 1) == 0))
            goto LAB_0062371f;
            iVar6 = param_1->field_030A + 1;
            param_1->field_030A = iVar6;
            if (iVar6 == 0x2f) {
              param_1->field_030A = 0;
            }
          }
          else if (((*(byte *)&PTR_00802a38->field_00E4 & 1) != 0) &&
                  (iVar6 = param_1->field_030A + 1, param_1->field_030A = iVar6, iVar6 == 0x2f)) {
            param_1->field_030A = 0;
          }
          bVar4 = true;
        }
LAB_0062371f:
        if (((DAT_0080732c != 0) || (param_1->field_02CE != 0)) || (bVar4)) {
          if (((cVar2 != '\x03') && (cVar2 != '\x02')) ||
             ((*(byte *)&PTR_00802a38->field_00E4 & 1) != 0)) {
            param_1->field_02CE = param_1->field_02CE + 1;
          }
          if (param_1->field_02D2 <= (int)param_1->field_02CE) {
            param_1->field_02CE = 0;
          }
          puVar1 = &param_1->field_0x1d5;
          STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',param_1->field_02CE);
          STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x0e');
          if (param_1->field_0352 != '\0') {
            STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\f',param_1->field_02CE);
            STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\f');
          }
          if (DAT_00807326 != '\0') {
            bVar3 = param_1->field_02D6;
            goto LAB_00623863;
          }
        }
      }
      else {
        if (((param_1->field_02AD != '\x03') && (param_1->field_02AD != '\x02')) ||
           ((*(byte *)&PTR_00802a38->field_00E4 & 1) != 0)) {
          param_1->field_02CE = param_1->field_02CE + 1;
        }
        if (param_1->field_02D2 <= (int)param_1->field_02CE) {
          param_1->field_02CE = 0;
        }
        puVar1 = &param_1->field_0x1d5;
        STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',param_1->field_02CE);
        STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x0e');
        if (param_1->field_0352 != '\0') {
          STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\f',param_1->field_02CE);
          STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\f');
        }
        if (DAT_00807326 != '\0') {
          bVar3 = param_1->field_02D6;
LAB_00623863:
          STT3DSprC::SetCurShad((STT3DSprC *)&param_1->field_0x1d5,'\x0e',(uint)bVar3);
        }
      }
      if (param_1->field_02E9 == '\0') {
        thunk_FUN_004ad460(&param_1->field_0x1d5,0);
        param_1->field_02E9 = 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)param_1 + 0xd8))();
        return;
      }
      goto LAB_006238c2;
    }
    cVar2 = param_1->field_02E9;
  }
  if (cVar2 != '\0') {
    thunk_FUN_004ad430((int)&param_1->field_0x1d5);
    param_1->field_02E9 = 0;
  }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_006238c2:
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

