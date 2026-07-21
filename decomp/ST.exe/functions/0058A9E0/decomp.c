
void __fastcall FUN_0058a9e0(AnonShape_0058A9E0_DB5690D0 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int local_c;

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
  puVar1 = &param_1->field_0x1d5;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
    iVar2 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar2 == 1) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
    iVar2 = 1;
  }
  iVar4 = thunk_FUN_004ad650((int)puVar1);
  FUN_006e6870(param_1->field_0211,iVar4,iVar2);
  iVar2 = param_1->field_02A5;
  if ((iVar2 == 0xf8) || (iVar2 == 0xf9)) {
    local_c = 8;
    iVar4 = 8;
  }
  else {
    iVar4 = 6;
    local_c = 6;
  }
  if (2 < (uint)(PTR_00802a38->field_00E4 - param_1->field_0245)) {
    param_1->field_0245 = PTR_00802a38->field_00E4;
    param_1->field_0235 = 0;
    iVar7 = (param_1->field_0231 + 1) % iVar4;
    param_1->field_0231 = iVar7;
    if (iVar7 != 0) {
      param_1->field_0235 = ((iVar4 - iVar7) * 0x6a0) / iVar4;
    }
  }
  if (param_1->field_0249 == 1) {
    if (param_1->field_0281 == 0) {
      iVar2 = (int)param_1->field_0041 - (int)param_1->field_004E;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 0x15) {
        iVar2 = (int)param_1->field_0043 - (int)*(short *)&param_1->field_0x50;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar2 < 0x15) {
          uVar5 = thunk_FUN_0058b190(param_1,&param_1->field_004E,(short *)&param_1->field_0x50,
                                     &param_1->field_0052,(short *)&param_1->field_0x6c);
          param_1->field_0249 = uVar5;
          param_1->field_024D = 0;
        }
      }
      iVar2 = param_1->field_02A5;
      param_1->field_025D = param_1->field_025D + param_1->field_0251;
      param_1->field_0261 = param_1->field_0261 + param_1->field_0255;
      if ((iVar2 == 0xf8) || (iVar2 == 0xf9)) {
        param_1->field_025D =
             (param_1->field_0269 * param_1->field_0235) / param_1->field_0239 + param_1->field_025D
        ;
        param_1->field_0261 =
             (param_1->field_026D * param_1->field_0235) / param_1->field_0239 + param_1->field_0261
        ;
        iVar4 = local_c;
      }
      param_1->field_0041 =
           (short)(param_1->field_025D + (param_1->field_025D >> 0x1f & 0xffU) >> 8) +
           param_1->field_0275;
      param_1->field_0043 =
           (short)(param_1->field_0261 + (param_1->field_0261 >> 0x1f & 0xffU) >> 8) +
           param_1->field_0279;
    }
    iVar7 = param_1->field_0265 + param_1->field_0259;
    param_1->field_0265 = iVar7;
    if ((iVar2 == 0xf8) || (iVar2 == 0xf9)) {
      param_1->field_0265 =
           (param_1->field_0271 * param_1->field_0235) / param_1->field_0239 + iVar7;
    }
    sVar6 = (short)(param_1->field_0265 + (param_1->field_0265 >> 0x1f & 0xffU) >> 8) +
            param_1->field_027D;
    param_1->field_0045 = sVar6;
    if (param_1->field_0281 != 0) {
      iVar2 = (int)sVar6 - (int)param_1->field_0052;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 10) {
        param_1->field_0259 = 0;
        param_1->field_0281 = 0;
      }
    }
  }
  else if (0xc < (uint)param_1->field_024D) {
    uVar5 = thunk_FUN_0058b190(param_1,&param_1->field_004E,(short *)&param_1->field_0x50,
                               &param_1->field_0052,(short *)&param_1->field_0x6c);
    param_1->field_0249 = uVar5;
    param_1->field_024D = 0;
  }
  sVar6 = *(short *)&param_1->field_0x6c * 0x2d;
  *(short *)&param_1->field_0x6c = sVar6;
  if (param_1->field_0281 == 0) {
    iVar2 = (0x18 - (int)sVar6 / 0xf) % 0x18;
    uVar3 = (((iVar2 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * local_c + param_1->field_0231;
    uVar8 = (iVar2 / 3) * local_c + param_1->field_0231;
  }
  else {
    uVar3 = param_1->field_0231 + iVar4 * 8;
    uVar8 = uVar3;
  }
  puVar1 = &param_1->field_0x1d5;
  *(short *)&param_1->field_0x6c = sVar6 / 0x2d - (short)((int)sVar6 / -0x4c000000);
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',uVar3);
  STT3DSprC::SetCurShad((STT3DSprC *)puVar1,'\x0e',uVar8);
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x0e');
  param_1->field_024D = param_1->field_024D + 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

