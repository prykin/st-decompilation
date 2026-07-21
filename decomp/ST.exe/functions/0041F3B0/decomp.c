
void __fastcall FUN_0041f3b0(STSprGameObjC *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  STSprGameObjC_field_0259State SVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;

  iVar2 = *(int *)&param_1->field_0x221;
  if (iVar2 == -1) {
    return;
  }
  if (iVar2 == 1) {
    *(undefined4 *)&param_1->field_0x221 = 0;
    return;
  }
  if (iVar2 == 2) {
    if ((*(byte *)&PTR_00802a38->field_00E4 & 1) != 0) {
      return;
    }
    if (*(int *)&param_1->field_0x225 == 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      STSprGameObjC::LoadLifeFrame(param_1,unaff_EDI);
      iVar2 = thunk_FUN_004acd30(&param_1->field_01D5,'\x01');
      *(int *)&param_1->field_0x225 = iVar2 + -1;
    }
    uVar3 = (*param_1->vtable->vfunc_7C)();
    if (1 < (int)uVar3) {
      uVar3 = (int)(uVar3 * *(int *)&param_1->field_0x225) / 100;
    }
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    puVar1 = &param_1->field_01D5;
    uVar4 = thunk_FUN_004ac910(puVar1,'\x01');
    if (uVar3 != uVar4) {
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',uVar3);
      STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
    }
    iVar2 = param_1->field_0020;
    if ((((iVar2 == 0x14) || (iVar2 == 1000)) || (iVar2 == 0x172)) || (iVar2 == 0x1a4)) {
      SVar5 = (*param_1->vtable->vfunc_2C)();
    }
    else {
      if (iVar2 != 0x3e9) goto LAB_0041f51a;
      SVar5 = param_1->field_0259;
    }
    if (((SVar5 != 0xffffffff) && (iVar2 = (*param_1->vtable->vfunc_0C)(), iVar2 == 3)) &&
       ((param_1->field_0020 != 0x172 && (param_1->field_0020 != 0x1a4)))) {
      uVar3 = (*param_1->vtable->vfunc_C4)();
      if (1 < (int)uVar3) {
        uVar3 = (int)(uVar3 * *(int *)&param_1->field_0x225) / 100;
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar4 = thunk_FUN_004ac910(puVar1,'\x02');
      if (uVar3 != uVar4) {
        STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x02',uVar3);
        STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x02');
      }
    }
LAB_0041f51a:
    *(int *)&param_1->field_0x221 = *(int *)&param_1->field_0x221 + -1;
    return;
  }
  if (iVar2 != 0) {
    return;
  }
  puVar1 = &param_1->field_01D5;
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',0);
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
  iVar2 = param_1->field_0020;
  if (((iVar2 == 0x14) || (iVar2 == 1000)) || ((iVar2 == 0x172 || (iVar2 == 0x1a4)))) {
    SVar5 = (*param_1->vtable->vfunc_2C)();
  }
  else {
    if (iVar2 != 0x3e9) goto LAB_0041f5a0;
    SVar5 = param_1->field_0259;
  }
  if ((SVar5 != 0xffffffff) && (iVar2 = (*param_1->vtable->vfunc_0C)(), iVar2 == 3)) {
    STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x02',0);
    STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x02');
  }
LAB_0041f5a0:
  *(int *)&param_1->field_0x221 = *(int *)&param_1->field_0x221 + -1;
  return;
}

