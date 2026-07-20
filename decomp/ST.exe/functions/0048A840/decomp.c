
void __fastcall FUN_0048a840(AnonShape_0048A840_34A87A21 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1->field_06F7;
  param_1->field_079A = *(undefined4 *)(&DAT_007a8b18 + iVar3 * 4);
  uVar1 = *(undefined4 *)(&DAT_007a8bb8 + iVar3 * 4);
  param_1->field_079E = uVar1;
  param_1->field_07A2 = uVar1;
  iVar2 = *(int *)(&DAT_007a8c58 + iVar3 * 4);
  param_1->field_07AA = iVar2;
  param_1->field_07A6 = iVar2;
  param_1->field_07B2 = iVar2 * 2;
  param_1->field_07AE = iVar2 * 2 * param_1->field_079E;
  param_1->field_07B6 = *(undefined4 *)(&DAT_007a8cf8 + iVar3 * 4);
  uVar1 = *(undefined4 *)(&DAT_007a8d98 + iVar3 * 4);
  param_1->field_07BA = uVar1;
  param_1->field_07BE = uVar1;
  if (iVar3 == 0x21) {
    iVar3 = thunk_FUN_004e60d0(param_1->field_0024,0x74);
    if (iVar3 == 0) {
      param_1->field_07BE = 0;
    }
  }
  return;
}

