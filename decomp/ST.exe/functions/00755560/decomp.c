
uint FUN_00755560(AnonShape_00755560_6DE97093 *param_1,ushort *param_2,undefined4 param_3,
                 undefined4 param_4)

{
  AnonShape_00755560_6DE97093 *pAVar1;
  int *piVar2;
  bool bVar3;
  AnonShape_00755560_6DE97093 *pAVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  uint *puVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  
  pAVar4 = param_1;
  bVar3 = false;
  iVar5 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar5;
  if (*(short *)(iVar5 + 0x34) == 0) {
    uVar11 = (**(code **)(iVar5 + 8))(param_2);
  }
  else {
    uVar11 = (uint)*(short *)(iVar5 + 0x34);
  }
  pAVar1 = (AnonShape_00755560_6DE97093 *)(uVar11 + 8);
  if ((int)param_1->field_0024 < (int)pAVar1) {
    iVar5 = FUN_006bfb50((undefined4 *)param_1->field_001C,(uint)pAVar1);
    param_1->field_001C = iVar5;
    if (iVar5 == 0) {
      return 0xfffffffe;
    }
    param_1->field_0024 = pAVar1;
  }
  *(undefined4 *)param_1->field_001C = param_4;
  *(undefined4 *)(param_1->field_001C + 4) = param_3;
  puVar10 = param_2;
  puVar12 = (undefined4 *)(param_1->field_001C + 8);
  for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar12 = *(undefined4 *)puVar10;
    puVar10 = puVar10 + 2;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(char *)puVar12 = (char)*puVar10;
    puVar10 = (ushort *)((int)puVar10 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  puVar8 = (uint *)(param_1->field_0008 + 8);
  *puVar8 = *puVar8 | 0x10;
  param_1 = pAVar1;
  while( true ) {
    iVar13 = *(int *)(pAVar4->field_0008 + 0x34) + *(int *)&pAVar4->field_0x10;
    iVar5 = pAVar4->field_000C;
    iVar6 = *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8);
    if (iVar6 < 0) {
      *(undefined4 *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) = 0;
    }
    else {
      if (*(short *)(iVar5 + 0x34) == 0) {
        iVar5 = (**(code **)(iVar5 + 8))(iVar6 + 0x18 + iVar13);
      }
      else {
        iVar5 = (int)*(short *)(iVar5 + 0x34);
      }
      piVar2 = (int *)(pAVar4->field_000C + 0x44 + *(int *)(pAVar4->field_000C + 0x1c) * 8);
      *piVar2 = *piVar2 + iVar5 + 8;
    }
    if ((int)(&param_1->field_0x0 + *(short *)(iVar13 + 8)) <=
        *(short *)(pAVar4->field_0008 + 0x16) + -0x10) {
      uVar11 = FUN_00755830((AnonShape_00755830_DE41EB2A *)pAVar4,(uint *)pAVar4->field_001C,
                            *(int *)(pAVar4->field_000C + 0x1c));
      if (uVar11 != 0) {
        return uVar11;
      }
      if (bVar3) goto LAB_007557fa;
      goto LAB_0075580a;
    }
    bVar3 = true;
    iVar5 = *(int *)(pAVar4->field_000C + 0x44 + *(int *)(pAVar4->field_000C + 0x1c) * 8);
    iVar6 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)pAVar4,(*(short *)(iVar13 + 8) >> 1) + 4);
    if (iVar5 == iVar6) {
      param_1 = (AnonShape_00755560_6DE97093 *)
                FUN_00757530((int)pAVar4,0,(undefined4 *)pAVar4->field_001C);
      if (param_1 == (AnonShape_00755560_6DE97093 *)0x0) {
        return 0xfffffffe;
      }
    }
    else {
      param_1 = (AnonShape_00755560_6DE97093 *)
                FUN_00757530((int)pAVar4,0,(undefined4 *)(iVar6 + 0x10 + iVar13));
      if (param_1 == (AnonShape_00755560_6DE97093 *)0x0) {
        return 0xfffffffe;
      }
      Library::MSVCRT::FUN_0072da70
                ((undefined4 *)(iVar6 + 0x10 + iVar13),
                 (undefined4 *)(&param_1->field_0x10 + iVar13 + iVar6),
                 ((int)*(short *)(iVar13 + 8) - (int)param_1) - iVar6);
      *(short *)(iVar13 + 8) = *(short *)(iVar13 + 8) - (short)param_1;
    }
    uVar11 = FUN_00753b40((int)pAVar4);
    if ((int)uVar11 < 0) {
      return uVar11;
    }
    DVar7 = Library::DKW::FMM::FUN_006d4c50
                      (pAVar4->field_0008,uVar11,(int)*(short *)(pAVar4->field_0008 + 0x16));
    if (DVar7 != 0) {
      return DVar7;
    }
    iVar13 = *(int *)(pAVar4->field_0008 + 0x34);
    iVar14 = *(int *)&pAVar4->field_0x10 + iVar13;
    puVar8 = (uint *)(iVar13 + uVar11);
    Library::MSVCRT::FUN_0072da70
              (puVar8 + 4,(undefined4 *)(iVar6 + 0x10 + iVar14),*(short *)(iVar14 + 8) - iVar6);
    *puVar8 = uVar11;
    *(short *)(puVar8 + 2) = *(short *)(iVar14 + 8) - (short)iVar6;
    puVar8[1] = **(uint **)&pAVar4->field_0x18;
    *(short *)(iVar14 + 8) = (short)iVar6;
    **(uint **)&pAVar4->field_0x18 = *puVar8;
    if (iVar5 < iVar6) {
      FUN_007574c0((int)pAVar4,iVar14,(uint *)pAVar4->field_001C,iVar5);
    }
    else if (iVar6 < iVar5) {
      FUN_007574c0((int)pAVar4,(int)puVar8,(uint *)pAVar4->field_001C,(iVar5 - (int)param_1) - iVar6
                  );
      *(undefined4 *)(pAVar4->field_000C + 0x40 + *(int *)(pAVar4->field_000C + 0x1c) * 8) =
           **(undefined4 **)&pAVar4->field_0x18;
      iVar5 = pAVar4->field_000C;
      *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) =
           *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) - iVar6;
    }
    param_1 = (AnonShape_00755560_6DE97093 *)
              FUN_00757530((int)pAVar4,1,*(undefined4 **)&pAVar4->field_0x18);
    if (param_1 == (AnonShape_00755560_6DE97093 *)0x0) {
      return 0xfffffffe;
    }
    *(int *)(pAVar4->field_000C + 0x1c) = *(int *)(pAVar4->field_000C + 0x1c) + -1;
    iVar5 = *(int *)(pAVar4->field_000C + 0x1c);
    if (iVar5 < 0) break;
    FUN_00753b80((AnonShape_00753B80_E259A731 *)pAVar4,
                 *(undefined4 *)(pAVar4->field_000C + 0x40 + iVar5 * 8),iVar5);
  }
  uVar11 = FUN_00755830((AnonShape_00755830_DE41EB2A *)pAVar4,*(uint **)&pAVar4->field_0x18,
                        *(int *)(pAVar4->field_000C + 0x1c));
  if (uVar11 == 0) {
LAB_007557fa:
    uVar11 = FUN_00755970((int)pAVar4,param_2,0);
    if (-1 < (int)uVar11) {
LAB_0075580a:
      uVar11 = 0;
    }
  }
  return uVar11;
}

