
undefined4 FUN_006c7b20(AnonShape_006C7B20_5A99C851 *param_1,int param_2,int param_3)

{
  AnonShape_006B84D0_7C7D97C6 *pAVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pAVar1 = (AnonShape_006B84D0_7C7D97C6 *)param_1->field_002E;
  iVar3 = pAVar1->field_0008;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar4 = param_3 + *(int *)&param_1->field_0x4;
  if (iVar4 < iVar3) {
    iVar3 = *(int *)&param_1->field_0x8;
    iVar2 = *(int *)param_1;
    if (pAVar1->field_0004 < iVar3 + iVar2) {
      iVar3 = pAVar1->field_0004 - iVar2;
    }
    Library::DKW::WGR::FUN_006b55f0
              (pAVar1,param_1->field_0032,iVar2,iVar4,param_1->field_0022,param_2,0,0,iVar3,1);
    return 0;
  }
  return 0xffffffff;
}

