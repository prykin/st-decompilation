
undefined4 FUN_006c7b20(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x2e);
  iVar3 = puVar1[2];
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (param_3 + param_1[1] < iVar3) {
    iVar3 = param_1[2];
    iVar2 = *param_1;
    if ((int)puVar1[1] < iVar3 + iVar2) {
      iVar3 = puVar1[1] - iVar2;
    }
    Library::DKW::WGR::FUN_006b55f0
              (puVar1,*(int *)((int)param_1 + 0x32),iVar2,param_3 + param_1[1],
               *(byte **)((int)param_1 + 0x22),param_2,0,0,iVar3,1);
    return 0;
  }
  return 0xffffffff;
}

