
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E51B0 -> 004E4D60 @ 004E5702 */

undefined4 __fastcall FUN_004e4d60(AnonShape_004E4D60_C16F78E8 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;

  if ((param_1->field_0245 == 0) &&
     ((*(int *)&param_1[2].field_0x11a == 0x36 || (*(int *)&param_1[2].field_0x11a == 0x5d)))) {
    if (*(int *)&param_1[2].field_0x4a != 0) {
      thunk_FUN_0041cf50((AnonShape_0041CF50_01071190 *)param_1);
      *(undefined4 *)&param_1[2].field_0x4a = 0;
    }
    if (*(int *)&param_1->field_0x24 != param_1->field_023D) {
      uVar1 = LookupRecordByte((char)param_1->field_023D);
      iVar3 = param_1->field_0235;
      uVar2 = LookupRecordByte(param_1->field_0x24);
      if ((&DAT_007e1984)[(uVar2 & 0xff) + ((uVar1 & 0xff) + iVar3 * 3) * 3] == '\0') {
        return 0;
      }
    }
    iVar3 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x24,
                               *(int *)(&DAT_00798fb0 + param_1->field_0239 * 4));
    iVar3 = *(int *)(&DAT_00798f98 + (iVar3 + param_1->field_0239 * 2) * 4);
    *(int *)&param_1[2].field_0x3e = iVar3;
    thunk_FUN_0041ce40(param_1,iVar3);
    *(undefined4 *)&param_1[2].field_0x4a = 1;
  }
  return 0;
}

