
void __fastcall FUN_00492f30(AnonShape_00492F30_E8F69762 *param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = CONCAT22((short)((uint)param_1 >> 0x10),param_1->field_0605);
  iVar3 = CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_0603);
  iVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_0607 + 1);
  iVar1 = thunk_FUN_0048dfd0(param_1,iVar3,uVar2,iVar1,iVar3,(int *)uVar2,iVar1,(short *)0x2,
                             &param_1->field_0609,&param_1->field_060B);
  if (iVar1 == 0) {
    param_1->field_0609 = param_1->field_0603;
    param_1->field_060B = param_1->field_0605;
    param_1->field_060D = param_1->field_0607;
  }
  return;
}

