
undefined4 __fastcall FUN_004c3020(AnonShape_004C3020_45D93566 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  param_1->field_0219 = *(undefined4 *)(&DAT_007942fc + param_1->field_0235 * 4);
  param_1->field_025D = 1;
  param_1->field_0261 = *(undefined4 *)(&DAT_00792778 + param_1->field_0235 * 4);
  param_1->field_0265 = (uint)(*(int *)(&DAT_00792880 + param_1->field_0235 * 8) != 0);
  param_1->field_0269 = (uint)((&DAT_00792ca0)[param_1->field_0235 * 6] == 0x9a);
  param_1->field_0279 = ((&DAT_00792ca0)[param_1->field_0235 * 6] != 0xb0) - 1 & 4;
  param_1->field_027D = (-(uint)((&DAT_00792ca0)[param_1->field_0235 * 6] != 0xb0) & 0x10) + 8;
  param_1->field_0281 = (-(uint)(param_1->field_05AC != 0x66) & 0xfffffffd) + 6;
  param_1->field_026D = 0;
  iVar2 = param_1->field_0235;
  if ((*(int *)(&DAT_00792778 + iVar2 * 4) == 0) || (*(int *)(&DAT_00792880 + iVar2 * 8) == 0)) {
    uVar4 = PTR_00802a38->field_00E4;
  }
  else {
    iVar2 = thunk_FUN_004e8230(param_1->field_0024,iVar2,0);
    uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
    param_1->field_001C = uVar4;
    uVar4 = (uVar4 >> 0x10) % (iVar2 + 1U);
  }
  param_1->field_0271 = uVar4;
  param_1->field_0285 = 0;
  iVar2 = *(int *)(&DAT_00792040 + param_1->field_0235 * 4);
  uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar4;
  iVar1 = PTR_00802a38->field_00E4;
  param_1->field_028D = 0;
  param_1->field_0291 = 0;
  param_1->field_0289 = (uVar4 >> 0x10) % (iVar2 * 10 + 1U) + iVar1;
  uVar3 = PTR_00802a38->field_00E4;
  param_1->field_02B1 = 0;
  param_1->field_0295 = uVar3;
  param_1->field_02B5 = 0;
  uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar4;
  param_1->field_02B9 = (uVar4 >> 0x10) % 0x4c + 0x19;
  if (((param_1->field_0255 == 0) && (param_1->field_05AC != 0x6a)) && (param_1->field_05AC != 0x68)
     ) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  param_1->field_0299 = uVar3;
  iVar2 = param_1->field_0235 * 8;
  param_1->field_02A1 = *(undefined4 *)(&DAT_00791800 + iVar2);
  if (*(int *)(&DAT_00793e28 + iVar2) != 0) {
    param_1->field_02C5 = *(undefined4 *)(&DAT_00794038 + iVar2);
  }
  if (param_1->field_05AC == 0x47) {
    param_1->field_025D = 2;
    iVar2 = param_1->field_0235;
    param_1->field_02E1 = *(undefined4 *)(&DAT_00792778 + iVar2 * 4);
    param_1->field_02E5 = (uint)(*(int *)(&DAT_00792884 + iVar2 * 8) != 0);
    param_1->field_02E9 = 1;
    param_1->field_02F5 = 0;
    param_1->field_02F9 = 6;
    param_1->field_02FD = 0x18;
    param_1->field_0301 = 3;
    param_1->field_02ED = 0;
    iVar2 = thunk_FUN_004e8230(param_1->field_0024,iVar2,1);
    uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
    param_1->field_001C = uVar4;
    param_1->field_0305 = 0;
    param_1->field_02F1 = (uVar4 >> 0x10) % (iVar2 + 1U);
    iVar2 = *(int *)(&DAT_00792040 + param_1->field_0235 * 4);
    uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
    param_1->field_001C = uVar4;
    iVar1 = PTR_00802a38->field_00E4;
    param_1->field_030D = 0;
    param_1->field_0311 = 0;
    param_1->field_0309 = (uVar4 >> 0x10) % (iVar2 * 10 + 1U) + iVar1;
    uVar3 = PTR_00802a38->field_00E4;
    param_1->field_0331 = 0;
    param_1->field_0315 = uVar3;
    param_1->field_0335 = 0;
    uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
    param_1->field_001C = uVar4;
    param_1->field_0341 = 0;
    iVar2 = param_1->field_0235 * 8;
    param_1->field_0339 = (uVar4 >> 0x10) % 0x4c + 0x19;
    if (*(int *)(&DAT_00793e2c + iVar2) != 0) {
      param_1->field_0345 = *(undefined4 *)(&DAT_0079403c + iVar2);
    }
  }
  return 0;
}

