
undefined4 FUN_006c7240(AnonShape_006C7240_F2C56622 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_1->field_003A;
  iVar2 = puVar1[2];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar4 = param_3 + param_1->field_001E + *(int *)&param_1->field_0x4;
  if (iVar4 < iVar2) {
    iVar3 = param_1->field_001A + *(int *)param_1;
    iVar2 = param_1->field_0022;
    if ((int)puVar1[1] < iVar2 + iVar3) {
      iVar2 = puVar1[1] - iVar3;
    }
    if ((param_1->field_005E & 1) == 0) {
      Library::DKW::WGR::FUN_006b55f0
                (puVar1,param_1->field_003E,iVar3,iVar4,(byte *)param_1->field_002E,param_2,0,0,
                 iVar2,1);
      return 0;
    }
    Library::DKW::WGR::FUN_006b5110
              ((int)puVar1,param_1->field_003E,iVar3,iVar4,param_1->field_002E,param_2,0,0,iVar2,1,
               param_1->field_0061);
  }
  else if ((param_1->field_0016 != '\0') && (param_1->field_0x18 == '\0')) {
    return 0xffffffff;
  }
  return 0;
}

