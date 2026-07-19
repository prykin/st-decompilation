
undefined4 FUN_006c7240(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x3a);
  iVar2 = puVar1[2];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar4 = param_3 + *(int *)((int)param_1 + 0x1e) + param_1[1];
  if (iVar4 < iVar2) {
    iVar3 = *(int *)((int)param_1 + 0x1a) + *param_1;
    iVar2 = *(int *)((int)param_1 + 0x22);
    if ((int)puVar1[1] < iVar2 + iVar3) {
      iVar2 = puVar1[1] - iVar3;
    }
    if ((*(byte *)((int)param_1 + 0x5e) & 1) == 0) {
      Library::DKW::WGR::FUN_006b55f0
                (puVar1,*(int *)((int)param_1 + 0x3e),iVar3,iVar4,*(int *)((int)param_1 + 0x2e),
                 param_2,0,0,iVar2,1);
      return 0;
    }
    Library::DKW::WGR::FUN_006b5110
              ((int)puVar1,*(int *)((int)param_1 + 0x3e),iVar3,iVar4,*(int *)((int)param_1 + 0x2e),
               param_2,0,0,iVar2,1,*(byte *)((int)param_1 + 0x61));
  }
  else if ((*(char *)((int)param_1 + 0x16) != '\0') && ((char)param_1[6] == '\0')) {
    return 0xffffffff;
  }
  return 0;
}

