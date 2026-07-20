
void __fastcall FUN_0048df40(AnonShape_0048DF40_8D46D7E8 *param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = CONCAT22((short)((uint)param_1 >> 0x10),param_1->field_04DF);
  iVar3 = CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_04DD);
  iVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_04E1 + 1);
  iVar1 = thunk_FUN_0048dfd0(param_1,iVar3,uVar2,iVar1,iVar3,(int *)uVar2,iVar1,(short *)0x2,
                             &param_1->field_04FC,&param_1->field_04FE);
  if (iVar1 == 0) {
    param_1->field_04FC = param_1->field_04DD;
    param_1->field_04FE = param_1->field_04DF;
    param_1->field_0500 = param_1->field_04E1 + 1;
  }
  return;
}

