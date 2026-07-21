
int FUN_00753b40(AnonShape_00753B40_7E7955C3 *param_1)

{
  AnonNested_00753B40_0008_62BB8A2C *pAVar1;
  int iVar2;
  AnonShape_00753B40_7E7955C3 *pAVar3;
  int iVar4;

  pAVar3 = param_1;
  pAVar1 = param_1->field_0008;
  iVar2 = pAVar1->field_001C;
  if (iVar2 == -1) {
    iVar4 = pAVar1->field_0018;
  }
  else {
    iVar4 = Library::DKW::FMM::FUN_006d4a40((int)pAVar1,iVar2,&param_1);
    if (iVar4 == 0) {
      pAVar3->field_0008->field_001C = (int)param_1;
      return iVar2;
    }
  }
  return iVar4;
}

