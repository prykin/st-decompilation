
void __fastcall FUN_006e5740(AnonShape_006E5740_EEA77B11 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_24 [16];
  undefined4 local_14;

  iVar3 = param_1->field_0010;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
    while (iVar1 != 0) {
      local_14 = 3;
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x1c);
      }
      puVar2 = *(undefined4 **)(iVar3 + 4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*puVar2)(local_24);
      AppClassTy::DeleteObject(param_1->field_0018,puVar2[2]);
      FUN_006b0c70((DArrayTy *)param_1->field_0010,0);
      iVar3 = param_1->field_0010;
      iVar1 = *(int *)(iVar3 + 0xc);
    }
    param_1->field_000C = 0;
  }
  return;
}

