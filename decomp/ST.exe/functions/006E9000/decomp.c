
undefined4 * __thiscall
FUN_006e9000(void *this,int param_1,short param_2,short param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  AnonShape_006E8EA0_96B71903 *pAVar1;
  int iVar2;
  longlong lVar3;

  pAVar1 = (AnonShape_006E8EA0_96B71903 *)Library::DKW::LIB::FUN_006aac10(0x2c);
  pAVar1->field_0008 = param_4;
  pAVar1->field_000C = param_5;
  pAVar1->field_0010 = param_6;
  lVar3 = Library::MSVCRT::__ftol();
  *(int *)&pAVar1->field_0x18 = (int)lVar3;
  pAVar1->field_001E = param_3;
  pAVar1->field_001C = param_2;
  pAVar1->field_0020 = param_1;
  pAVar1->field_0024 = param_7;
  FUN_006b9910((undefined4 *)((int)this + 0x294),(int)pAVar1);
  iVar2 = FUN_006e8ea0(this,pAVar1);
  if (iVar2 != 0) {
    *(undefined4 *)((int)this + 0x134) = 1;
  }
  return (undefined4 *)pAVar1;
}

