
undefined4 FUN_006c7240(AnonShape_006C7240_F2C56622 *param_1,int param_2,int param_3)

{
  AnonShape_006B84D0_7C7D97C6 *pAVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pAVar1 = (AnonShape_006B84D0_7C7D97C6 *)param_1->field_003A;
  iVar2 = pAVar1->field_0008;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar4 = param_3 + param_1->field_001E + *(int *)&param_1->field_0x4;
  if (iVar4 < iVar2) {
    iVar3 = param_1->field_001A + *(int *)param_1;
    iVar2 = param_1->field_0022;
    if (pAVar1->field_0004 < iVar2 + iVar3) {
      iVar2 = pAVar1->field_0004 - iVar3;
    }
    if ((param_1->field_005E & 1) == 0) {
      Library::DKW::WGR::FUN_006b55f0
                (pAVar1,param_1->field_003E,iVar3,iVar4,(byte *)param_1->field_002E,param_2,0,0,
                 iVar2,1);
      return 0;
    }
    Library::DKW::WGR::FUN_006b5110
              ((int)pAVar1,param_1->field_003E,iVar3,iVar4,param_1->field_002E,param_2,0,0,iVar2,1,
               param_1->field_0061);
  }
  else if ((param_1->field_0016 != '\0') && (param_1->field_0x18 == '\0')) {
    return 0xffffffff;
  }
  return 0;
}

