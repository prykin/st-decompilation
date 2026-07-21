
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004dd070(AnonShape_004DD070_62E18556 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  if ((((param_1->field_04D0 == 1) && (1 < DAT_00798f84)) && (param_1->field_04D4 < DAT_00798f84))
     && ((uint)(param_1->field_04DC + param_1->field_04D8) <= (uint)PTR_00802a38->field_00E4)) {
    param_1->field_04D8 = PTR_00802a38->field_00E4;
    iVar1 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\x0e');
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = iVar1 - *(int *)(param_1->field_01F5 + 0x208);
    uVar5 = (int)uVar2 >> 0x1f;
    iVar4 = (uVar2 ^ uVar5) - uVar5;
    param_1->field_04D4 = iVar4;
    iVar3 = ((param_1->field_02AD - (int)param_1->field_0045) * iVar4) / DAT_00798f84;
    iVar1 = ((param_1->field_02A5 - (int)param_1->field_0041) * iVar4) / DAT_00798f84;
    iVar4 = (int)param_1->field_0043 +
            ((param_1->field_02A9 - (int)param_1->field_0043) * iVar4) / DAT_00798f84;
    param_1->field_04E4 = iVar4;
    param_1->field_04E0 = iVar1 + param_1->field_0041;
    iVar3 = param_1->field_0045 + iVar3;
    param_1->field_04E8 = iVar3;
    thunk_FUN_004ad3c0(param_1->field_05FF,
                       (float)param_1->field_04E0 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar4 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar3 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if ((*(int *)(&DAT_00798f80 + param_1->field_04D0 * 4) + -1 <= param_1->field_04D4) &&
       (param_1->field_04D0 == 1)) {
      thunk_FUN_004c4550(param_1,(int *)0x0);
    }
  }
  return 0;
}

