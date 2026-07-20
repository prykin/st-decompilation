
void __fastcall FUN_0048df40(AnonShape_0048DF40_8D46D7E8 *param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CONCAT22((short)((uint)param_1 >> 0x10),param_1->field_04DF);
  iVar3 = CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_04DD);
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_04E1 + 1);
  iVar2 = thunk_FUN_0048dfd0(iVar3,iVar2,uVar1,iVar3,iVar2,(int *)uVar1,2,&param_1->field_04FC,
                             &param_1->field_04FE,&param_1->field_0500);
  if (iVar2 == 0) {
    param_1->field_04FC = param_1->field_04DD;
    param_1->field_04FE = param_1->field_04DF;
    param_1->field_0500 = param_1->field_04E1 + 1;
  }
  return;
}

