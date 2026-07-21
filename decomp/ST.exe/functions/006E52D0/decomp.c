
void __fastcall FUN_006e52d0(AnonShape_006E52D0_AF06BCD2 *param_1)

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
      (**(code **)*puVar2)(local_24);
      FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_1->field_0010,0);
      AppClassTy::DeleteObject(param_1->field_0018,puVar2[2]);
      iVar3 = param_1->field_0010;
      iVar1 = *(int *)(iVar3 + 0xc);
    }
    param_1->field_000C = 0;
    DArrayDestroy((DArrayTy *)param_1->field_0010);
    param_1->field_0010 = 0;
  }
  if ((DArrayTy *)param_1->field_0004 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)param_1->field_0004);
    param_1->field_0004 = 0;
  }
  if ((DArrayTy *)param_1->field_0008 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)param_1->field_0008);
    param_1->field_0008 = 0;
  }
  return;
}

