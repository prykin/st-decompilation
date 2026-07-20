
void FUN_00757670(AnonShape_00757670_86D3B9A7 *param_1,int param_2)

{
  undefined1 *puVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  
  DVar2 = Library::DKW::FMM::FUN_006d4c50
                    ((int)param_1->field_0008,param_2,(int)param_1->field_0008->field_0016);
  if (DVar2 == 0) {
    piVar3 = (int *)(param_1->field_0008->field_0034 + param_2);
    iVar4 = *piVar3;
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    *piVar3 = param_1->field_0008->field_001C;
    param_1->field_0008->field_001C = iVar4;
    piVar3[1] = -2;
    puVar1 = &param_1->field_0008->field_0x8;
    *(uint *)puVar1 = *(uint *)puVar1 | 0x10;
  }
  return;
}

