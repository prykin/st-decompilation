
void __fastcall FUN_00579350(AnonShape_00579350_2E014C47 *param_1)

{
  undefined1 *this;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;

  sVar5 = param_1->field_0041;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar5;
  param_1->field_005B = sVar5;
  sVar5 = param_1->field_0043;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar5;
  param_1->field_005D = sVar5;
  sVar5 = param_1->field_0045;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar5;
  param_1->field_005F = sVar5;
  iVar1 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)param_1);
  this = &param_1->field_0x1d5;
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar2 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(param_1->field_0211,uVar2,iVar1);
    iVar1 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar1 == 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1;
    uVar2 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(param_1->field_0211,uVar2,iVar1);
    iVar1 = 1;
  }
  iVar3 = thunk_FUN_004ad650((int)this);
  FUN_006e6870(param_1->field_0211,iVar3,iVar1);
  if ((param_1->field_0279 == 0xf6) || (param_1->field_0279 == 0xf7)) {
    uVar2 = thunk_FUN_00496250((int)param_1->field_0041,(int)param_1->field_0043,
                               (int)param_1->field_0045);
    if ((int)uVar2 < 0) {
      if (0x81 < param_1->field_0045) {
        param_1->field_0045 = param_1->field_0045 + -1;
      }
    }
    else {
      param_1->field_0045 = param_1->field_0045 + 1;
    }
  }
  else {
    uVar2 = thunk_FUN_00496250((int)param_1->field_0041,(int)param_1->field_0043,
                               (int)param_1->field_0045);
    if ((int)uVar2 < 0) {
      if (0x27 < param_1->field_0045) {
        param_1->field_0045 = param_1->field_0045 + -2;
      }
    }
    else {
      param_1->field_0045 = param_1->field_0045 + 2;
    }
  }
  if (param_1->field_0239 == 1) {
    iVar1 = (int)param_1->field_0041 - (int)param_1->field_004E;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 8) {
      iVar1 = (int)param_1->field_0043 - (int)*(short *)&param_1->field_0x50;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < 8) goto LAB_00579591;
    }
    iVar3 = param_1->field_0241 + param_1->field_0245;
    param_1->field_0241 = iVar3;
    iVar1 = param_1->field_0249 + param_1->field_024D;
    param_1->field_0249 = iVar1;
    param_1->field_0041 = (short)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + param_1->field_0251;
    param_1->field_0043 = (short)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + param_1->field_0255;
  }
  else {
    if ((uint)param_1->field_023D < 0x10) goto LAB_005795a9;
LAB_00579591:
    uVar4 = thunk_FUN_005797b0(param_1,&param_1->field_004E,(undefined2 *)&param_1->field_0x50,
                               (undefined2 *)&param_1->field_0x6c);
    param_1->field_0239 = uVar4;
    param_1->field_023D = 0;
  }
LAB_005795a9:
  if (2 < PTR_00802a38->field_00E4 - param_1->field_0235) {
    param_1->field_0235 = PTR_00802a38->field_00E4;
    if ((*(short *)&param_1->field_0x6c == 7) || (*(short *)&param_1->field_0x6c < 3)) {
      param_1->field_0231 = (param_1->field_0231 + 1) % 6;
    }
    else {
      iVar1 = param_1->field_0231 + -1;
      param_1->field_0231 = iVar1;
      if (iVar1 < 0) {
        param_1->field_0231 = 5;
      }
    }
  }
  uVar2 = (uint)*(short *)&param_1->field_0x6c;
  if (((param_1->field_0279 == 0xf7) || (param_1->field_0279 == 0xf6)) &&
     (uVar2 = uVar2 + 4 & 0x80000007, (int)uVar2 < 0)) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  uVar2 = (((0x18 - (int)(uVar2 * 0x2d) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 3;
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\r',uVar2);
  STT3DSprC::ShowCurFase((STT3DSprC *)this,'\r');
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\x0e',param_1->field_0231 + uVar2 * 6);
  STT3DSprC::ShowCurFase((STT3DSprC *)this,'\x0e');
  param_1->field_023D = param_1->field_023D + 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

