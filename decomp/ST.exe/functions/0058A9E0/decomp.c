
void __fastcall FUN_0058a9e0(AnonShape_0058A9E0_DB5690D0 *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int local_c;
  
  sVar7 = param_1->field_0041;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar7;
  param_1->field_005B = sVar7;
  sVar7 = param_1->field_0043;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar7;
  param_1->field_005D = sVar7;
  sVar7 = param_1->field_0045;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 200 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 200 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar7;
  param_1->field_005F = sVar7;
  iVar3 = thunk_FUN_0041c710((int)param_1);
  puVar1 = &param_1->field_0x1d5;
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0(param_1->field_0211,uVar4,iVar3);
    bVar2 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (CONCAT31(extraout_var,bVar2) == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    uVar4 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0(param_1->field_0211,uVar4,iVar3);
    iVar3 = 1;
  }
  iVar5 = thunk_FUN_004ad650((int)puVar1);
  FUN_006e6870(param_1->field_0211,iVar5,iVar3);
  iVar3 = param_1->field_02A5;
  if ((iVar3 == 0xf8) || (iVar3 == 0xf9)) {
    local_c = 8;
    iVar5 = 8;
  }
  else {
    iVar5 = 6;
    local_c = 6;
  }
  if (2 < (uint)(PTR_00802a38->field_00E4 - param_1->field_0245)) {
    param_1->field_0245 = PTR_00802a38->field_00E4;
    param_1->field_0235 = 0;
    iVar8 = (param_1->field_0231 + 1) % iVar5;
    param_1->field_0231 = iVar8;
    if (iVar8 != 0) {
      param_1->field_0235 = ((iVar5 - iVar8) * 0x6a0) / iVar5;
    }
  }
  if (param_1->field_0249 == 1) {
    if (param_1->field_0281 == 0) {
      iVar3 = (int)param_1->field_0041 - (int)param_1->field_004E;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x15) {
        iVar3 = (int)param_1->field_0043 - (int)*(short *)&param_1->field_0x50;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar3 < 0x15) {
          uVar6 = thunk_FUN_0058b190(param_1,&param_1->field_004E,(short *)&param_1->field_0x50,
                                     &param_1->field_0052,(short *)&param_1->field_0x6c);
          param_1->field_0249 = uVar6;
          param_1->field_024D = 0;
        }
      }
      iVar3 = param_1->field_02A5;
      param_1->field_025D = param_1->field_025D + param_1->field_0251;
      param_1->field_0261 = param_1->field_0261 + param_1->field_0255;
      if ((iVar3 == 0xf8) || (iVar3 == 0xf9)) {
        param_1->field_025D =
             (param_1->field_0269 * param_1->field_0235) / param_1->field_0239 + param_1->field_025D
        ;
        param_1->field_0261 =
             (param_1->field_026D * param_1->field_0235) / param_1->field_0239 + param_1->field_0261
        ;
        iVar5 = local_c;
      }
      param_1->field_0041 =
           (short)(param_1->field_025D + (param_1->field_025D >> 0x1f & 0xffU) >> 8) +
           param_1->field_0275;
      param_1->field_0043 =
           (short)(param_1->field_0261 + (param_1->field_0261 >> 0x1f & 0xffU) >> 8) +
           param_1->field_0279;
    }
    iVar8 = param_1->field_0265 + param_1->field_0259;
    param_1->field_0265 = iVar8;
    if ((iVar3 == 0xf8) || (iVar3 == 0xf9)) {
      param_1->field_0265 =
           (param_1->field_0271 * param_1->field_0235) / param_1->field_0239 + iVar8;
    }
    sVar7 = (short)(param_1->field_0265 + (param_1->field_0265 >> 0x1f & 0xffU) >> 8) +
            param_1->field_027D;
    param_1->field_0045 = sVar7;
    if (param_1->field_0281 != 0) {
      iVar3 = (int)sVar7 - (int)param_1->field_0052;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 10) {
        param_1->field_0259 = 0;
        param_1->field_0281 = 0;
      }
    }
  }
  else if (0xc < (uint)param_1->field_024D) {
    uVar6 = thunk_FUN_0058b190(param_1,&param_1->field_004E,(short *)&param_1->field_0x50,
                               &param_1->field_0052,(short *)&param_1->field_0x6c);
    param_1->field_0249 = uVar6;
    param_1->field_024D = 0;
  }
  sVar7 = *(short *)&param_1->field_0x6c * 0x2d;
  *(short *)&param_1->field_0x6c = sVar7;
  if (param_1->field_0281 == 0) {
    iVar3 = (0x18 - (int)sVar7 / 0xf) % 0x18;
    uVar4 = (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * local_c + param_1->field_0231;
    uVar9 = (iVar3 / 3) * local_c + param_1->field_0231;
  }
  else {
    uVar4 = param_1->field_0231 + iVar5 * 8;
    uVar9 = uVar4;
  }
  puVar1 = &param_1->field_0x1d5;
  *(short *)&param_1->field_0x6c = sVar7 / 0x2d - (short)((int)sVar7 / -0x4c000000);
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',uVar4);
  STT3DSprC::SetCurShad((STT3DSprC *)puVar1,'\x0e',uVar9);
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x0e');
  param_1->field_024D = param_1->field_024D + 1;
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

