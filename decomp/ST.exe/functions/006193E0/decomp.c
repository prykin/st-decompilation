
undefined4 __fastcall FUN_006193e0(AnonShape_006193E0_B2745ECE *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  iVar1 = param_1->field_0061;
  iVar2 = param_1->field_0065;
  iVar3 = param_1->field_0069;
  param_1->field_009F = iVar1;
  param_1->field_00A3 = iVar2;
  param_1->field_00A7 = iVar3;
  param_1->field_00DB = iVar1;
  param_1->field_00DF = iVar2;
  param_1->field_00E3 = iVar3;
  sVar4 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    sVar4 = (((short)(iVar1 / 0xc9) + sVar4) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar4 = ((short)(iVar1 / 0xc9) + sVar4) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f);
  }
  param_1->field_00C9 = sVar4;
  sVar5 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    sVar5 = (((short)(iVar2 / 0xc9) + sVar5) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar5 = ((short)(iVar2 / 0xc9) + sVar5) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
  }
  param_1->field_00CB = sVar5;
  sVar6 = (short)(iVar3 >> 0x1f);
  if (iVar3 < 0) {
    sVar6 = (((short)(iVar3 / 200) + sVar6) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    sVar6 = ((short)(iVar3 / 200) + sVar6) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f);
  }
  param_1->field_00CD = sVar6;
  if ((((-1 < sVar4) && (-1 < sVar5)) && (-1 < sVar6)) &&
     (((sVar4 < SHORT_007fb240 && (sVar5 < SHORT_007fb242)) && (sVar6 < 5)))) {
    param_1->field_00E7 = param_1->field_006D;
    param_1->field_00EB = param_1->field_0071;
    param_1->field_00EF = param_1->field_0075;
    return 1;
  }
  return 0;
}

