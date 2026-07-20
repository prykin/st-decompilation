
/* [STPrototypeApplier] Propagated return.
   Evidence: 0061D710 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0061D499 */

byte * __thiscall FUN_0061d710(void *this,int *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *local_14;
  uint local_10;
  byte *local_c;
  int local_8;
  
  iVar4 = 0;
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)this + 0xac);
  iVar8 = *(int *)((int)this + 0x93);
  iVar11 = 0x90;
  *(undefined4 *)((int)this + 0x28) = 2;
  if (iVar8 != 0) {
    iVar11 = iVar8 * 0x14;
    if (0 < iVar8) {
      piVar7 = *(int **)((int)this + 0x9b);
      do {
        iVar1 = *piVar7;
        piVar7 = piVar7 + 1;
        iVar8 = iVar8 + -1;
        iVar4 = iVar4 + iVar1 * 0x14;
      } while (iVar8 != 0);
    }
    iVar11 = iVar11 + 0x94 + iVar4;
  }
  iVar4 = iVar11 + 0x20 +
          *(int *)(*(int *)((int)this + 0xa3) + 0xc) * *(int *)(*(int *)((int)this + 0xa3) + 8);
  pbVar2 = (byte *)Library::DKW::LIB::FUN_006aac70(iVar4);
  if (this == (void *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = (undefined4 *)((int)this + 0x1c);
  }
  pbVar12 = pbVar2;
  for (iVar8 = 0x24; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pbVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    pbVar12 = pbVar12 + 4;
  }
  uVar6 = *(uint *)((int)this + 0x93);
  pbVar12 = *(byte **)((int)this + 0x9b);
  pbVar10 = pbVar2 + 0x90;
  for (uVar5 = uVar6 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar10 = pbVar10 + 4;
  }
  pbVar3 = pbVar2 + 0x90 + uVar6 * 4;
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pbVar10 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar10 = pbVar10 + 1;
  }
  local_c = (byte *)0x0;
  if (0 < *(int *)((int)this + 0x93)) {
    do {
      iVar8 = *(int *)(*(int *)((int)this + 0x9b) + (int)local_c * 4);
      pbVar12 = *(byte **)(*(int *)((int)this + 0x9f) + (int)local_c * 4);
      pbVar10 = pbVar3;
      for (uVar6 = iVar8 * 5 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar10 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar10 = pbVar10 + 4;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pbVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar10 = pbVar10 + 1;
      }
      pbVar3 = pbVar3 + iVar8 * 0x14;
      local_c = (byte *)((int)local_c + 1);
    } while ((int)local_c < *(int *)((int)this + 0x93));
  }
  uVar6 = *(uint *)((int)this + 0x93);
  local_8 = uVar6 * 0x10;
  *(int *)pbVar3 = local_8;
  local_c = pbVar3 + 4 + local_8;
  pbVar12 = *(byte **)((int)this + 0x57);
  pbVar10 = pbVar3 + 4;
  for (iVar8 = (uVar6 & 0xfffffff) << 2; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pbVar10 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar10 = pbVar10 + 1;
  }
  local_14 = (byte *)FUN_006b0020(*(uint **)((int)this + 0xa3),(int *)&local_10);
  *(uint *)local_c = local_10 + 4;
  pbVar10 = local_14;
  pbVar12 = local_c;
  for (uVar6 = local_10 >> 2; pbVar12 = pbVar12 + 4, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
    pbVar10 = pbVar10 + 4;
  }
  for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
    *pbVar12 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    pbVar12 = pbVar12 + 1;
  }
  FUN_006ab060(&local_14);
  *param_1 = iVar4;
  return pbVar2;
}

