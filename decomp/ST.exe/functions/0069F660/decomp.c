
void FUN_0069f660(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  
  uVar7 = param_4 - param_2 >> 0x1f;
  iVar11 = (param_4 - param_2 ^ uVar7) - uVar7;
  uVar7 = param_5 - param_3 >> 0x1f;
  iVar1 = (param_5 - param_3 ^ uVar7) - uVar7;
  iVar8 = ((param_4 <= param_2) - 1 & 2) - 1;
  iVar4 = ((param_5 <= param_3) - 1 & 2) - 1;
  puVar2 = (undefined2 *)Library::DKW::LIB::FUN_006aac70((iVar1 + iVar11) * 4 + 8);
  if (puVar2 == (undefined2 *)0x0) {
    return;
  }
  iVar10 = 0;
  if (iVar11 < iVar1) {
    iVar3 = -iVar1;
    puVar5 = puVar2;
    for (; (iVar3 = iVar11 * 2 + iVar3, param_2 != param_4 || (param_3 != param_5));
        param_3 = param_3 + iVar4) {
      *puVar5 = (short)param_2;
      puVar5[1] = (short)param_3;
      iVar9 = iVar10 + 1;
      puVar6 = puVar5 + 2;
      if (-1 < iVar3) {
        param_2 = param_2 + iVar8;
        iVar3 = iVar3 + iVar1 * -2;
        iVar9 = iVar10 + 2;
        *puVar6 = (short)param_2;
        puVar5[3] = (short)param_3;
        puVar6 = puVar5 + 4;
      }
      puVar5 = puVar6;
      iVar10 = iVar9;
    }
  }
  else {
    iVar3 = -iVar11;
    puVar5 = puVar2;
    while ((iVar3 = iVar1 * 2 + iVar3, param_2 != param_4 || (param_3 != param_5))) {
      *puVar5 = (short)param_2;
      puVar5[1] = (short)param_3;
      iVar9 = iVar10 + 1;
      puVar6 = puVar5 + 2;
      if (-1 < iVar3) {
        *puVar6 = (short)param_2;
        iVar3 = iVar3 + iVar11 * -2;
        param_3 = param_3 + iVar4;
        iVar9 = iVar10 + 2;
        puVar5[3] = (short)param_3;
        puVar6 = puVar5 + 4;
      }
      param_2 = param_2 + iVar8;
      puVar5 = puVar6;
      iVar10 = iVar9;
    }
  }
  puVar2[iVar10 * 2] = (short)param_2;
  puVar2[iVar10 * 2 + 1] = (short)param_3;
  uVar7 = iVar10 + 1;
  *param_6 = uVar7;
  if (uVar7 != 0) {
    uVar12 = uVar7 & 0x80000001;
    bVar13 = uVar12 == 0;
    if ((int)uVar12 < 0) {
      bVar13 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar13) {
      puVar2[uVar7 * 2] = (short)param_2;
      puVar2[*param_6 * 2 + 1] = (short)param_3;
      *param_6 = *param_6 + 1;
    }
  }
  return;
}

