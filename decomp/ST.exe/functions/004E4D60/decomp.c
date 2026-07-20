
undefined4 __fastcall FUN_004e4d60(AnonShape_004E4D60_97789D69 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1->field_0245 == 0) &&
     ((*(int *)&param_1[2].field_0x114 == 0x36 || (*(int *)&param_1[2].field_0x114 == 0x5d)))) {
    if (*(int *)&param_1[2].field_0x44 != 0) {
      thunk_FUN_0041cf50((AnonShape_0041CF50_01071190 *)param_1);
      *(undefined4 *)&param_1[2].field_0x44 = 0;
    }
    if (*(int *)&param_1->field_0x24 != param_1->field_023D) {
      uVar1 = thunk_FUN_004406c0((char)param_1->field_023D);
      iVar3 = param_1->field_0235;
      uVar2 = thunk_FUN_004406c0(param_1->field_0x24);
      if ((&DAT_007e1984)[(uVar2 & 0xff) + ((uVar1 & 0xff) + iVar3 * 3) * 3] == '\0') {
        return 0;
      }
    }
    iVar3 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x24,
                               *(int *)(&DAT_00798fb0 + param_1->field_0239 * 4));
    iVar3 = *(int *)(&DAT_00798f98 + (iVar3 + param_1->field_0239 * 2) * 4);
    *(int *)&param_1[2].field_0x38 = iVar3;
    thunk_FUN_0041ce40(param_1,iVar3);
    *(undefined4 *)&param_1[2].field_0x44 = 1;
  }
  return 0;
}

