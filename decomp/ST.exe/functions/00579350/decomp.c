
void __fastcall FUN_00579350(AnonShape_00579350_2E014C47 *param_1)

{
  undefined1 *this;
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  
  sVar6 = param_1->field_0041;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar6;
  param_1->field_005B = sVar6;
  sVar6 = param_1->field_0043;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar6;
  param_1->field_005D = sVar6;
  sVar6 = param_1->field_0045;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar6;
  param_1->field_005F = sVar6;
  iVar2 = thunk_FUN_0041c710((int)param_1);
  this = &param_1->field_0x1d5;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
    bVar1 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (CONCAT31(extraout_var,bVar1) == 1) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
    iVar2 = 1;
  }
  iVar4 = thunk_FUN_004ad650((int)this);
  FUN_006e6870(param_1->field_0211,iVar4,iVar2);
  if ((param_1->field_0279 == 0xf6) || (param_1->field_0279 == 0xf7)) {
    uVar3 = thunk_FUN_00496250((int)param_1->field_0041,(int)param_1->field_0043,
                               (int)param_1->field_0045);
    if ((int)uVar3 < 0) {
      if (0x81 < param_1->field_0045) {
        param_1->field_0045 = param_1->field_0045 + -1;
      }
    }
    else {
      param_1->field_0045 = param_1->field_0045 + 1;
    }
  }
  else {
    uVar3 = thunk_FUN_00496250((int)param_1->field_0041,(int)param_1->field_0043,
                               (int)param_1->field_0045);
    if ((int)uVar3 < 0) {
      if (0x27 < param_1->field_0045) {
        param_1->field_0045 = param_1->field_0045 + -2;
      }
    }
    else {
      param_1->field_0045 = param_1->field_0045 + 2;
    }
  }
  if (param_1->field_0239 == 1) {
    iVar2 = (int)param_1->field_0041 - (int)param_1->field_004E;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 8) {
      iVar2 = (int)param_1->field_0043 - (int)*(short *)&param_1->field_0x50;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 8) goto LAB_00579591;
    }
    iVar4 = param_1->field_0241 + param_1->field_0245;
    param_1->field_0241 = iVar4;
    iVar2 = param_1->field_0249 + param_1->field_024D;
    param_1->field_0249 = iVar2;
    param_1->field_0041 = (short)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + param_1->field_0251;
    param_1->field_0043 = (short)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + param_1->field_0255;
  }
  else {
    if ((uint)param_1->field_023D < 0x10) goto LAB_005795a9;
LAB_00579591:
    uVar5 = thunk_FUN_005797b0(param_1,&param_1->field_004E,(undefined2 *)&param_1->field_0x50,
                               (undefined2 *)&param_1->field_0x6c);
    param_1->field_0239 = uVar5;
    param_1->field_023D = 0;
  }
LAB_005795a9:
  if (2 < (uint)(PTR_00802a38->field_00E4 - param_1->field_0235)) {
    param_1->field_0235 = PTR_00802a38->field_00E4;
    if ((*(short *)&param_1->field_0x6c == 7) || (*(short *)&param_1->field_0x6c < 3)) {
      param_1->field_0231 = (param_1->field_0231 + 1) % 6;
    }
    else {
      iVar2 = param_1->field_0231 + -1;
      param_1->field_0231 = iVar2;
      if (iVar2 < 0) {
        param_1->field_0231 = 5;
      }
    }
  }
  uVar3 = (uint)*(short *)&param_1->field_0x6c;
  if (((param_1->field_0279 == 0xf7) || (param_1->field_0279 == 0xf6)) &&
     (uVar3 = uVar3 + 4 & 0x80000007, (int)uVar3 < 0)) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  uVar3 = (((0x18 - (int)(uVar3 * 0x2d) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 3;
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\r',uVar3);
  STT3DSprC::ShowCurFase((STT3DSprC *)this,'\r');
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\x0e',param_1->field_0231 + uVar3 * 6);
  STT3DSprC::ShowCurFase((STT3DSprC *)this,'\x0e');
  param_1->field_023D = param_1->field_023D + 1;
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

