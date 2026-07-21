
void __cdecl
FUN_006757c0(short *param_1,short *param_2,short *param_3,short *param_4,short *param_5,
            short *param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  sVar2 = g_worldGrid.sizeZ;
  sVar1 = g_worldGrid.sizeY;
  sVar4 = g_worldGrid.sizeX;
  iVar7 = (int)g_worldGrid.sizeZ;
  iVar5 = (int)g_worldGrid.sizeY;
  iVar8 = (int)g_worldGrid.sizeX;
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  if (*param_4 < 0) {
    *param_4 = 0;
  }
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  if (*param_5 < 0) {
    *param_5 = 0;
  }
  if (*param_3 < 0) {
    *param_3 = 0;
  }
  if (*param_6 < 0) {
    *param_6 = 0;
  }
  iVar6 = (int)*param_1 + (int)*param_4;
  while ((iVar8 < iVar6 && (0 < *param_1))) {
    sVar3 = *param_1 + -1;
    *param_1 = sVar3;
    iVar6 = (int)*param_4 + (int)sVar3;
  }
  if (iVar8 < (int)*param_4 + (int)*param_1) {
    *param_4 = sVar4 - *param_1;
  }
  iVar8 = (int)*param_2 + (int)*param_5;
  while ((iVar5 < iVar8 && (0 < *param_2))) {
    sVar4 = *param_2 + -1;
    *param_2 = sVar4;
    iVar8 = (int)sVar4 + (int)*param_5;
  }
  if (iVar5 < (int)*param_5 + (int)*param_2) {
    *param_5 = sVar1 - *param_2;
  }
  iVar5 = (int)*param_3 + (int)*param_6;
  while ((iVar7 < iVar5 && (0 < *param_3))) {
    sVar4 = *param_3 + -1;
    *param_3 = sVar4;
    iVar5 = (int)sVar4 + (int)*param_6;
  }
  if (iVar7 < (int)*param_3 + (int)*param_6) {
    *param_6 = sVar2 - *param_3;
  }
  return;
}

