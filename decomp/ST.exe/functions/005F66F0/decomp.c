
undefined4 * __thiscall FUN_005f66f0(void *this,uint *param_1)

{
  uint uVar1;
  STAllPlayersC *pSVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint *local_1c;
  undefined4 *local_18;
  STAllPlayersC *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = this;
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0xc2);
  pSVar2 = local_14;
  if (this == (void *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = (undefined4 *)((int)this + 0x231);
  }
  puVar4 = puVar3;
  for (iVar6 = 0x30; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar9;
  puVar3[3] = 2;
  local_18 = STT3DSprC::SaveSpr((STT3DSprC *)(local_14 + 0x1d5),&local_c);
  local_1c = STAllPlayersC::SaveGObjData(pSVar2,(int *)&local_10);
  local_8 = local_10 + 0xca + local_c;
  puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006acf50(puVar3,local_8);
  *(uint *)((int)puVar4 + 0xc2) = local_c;
  puVar3 = local_18;
  puVar9 = (undefined4 *)((int)puVar4 + 0xc6);
  for (uVar7 = local_c >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar7 = local_c & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  FUN_006ab060(&local_18);
  puVar8 = (uint *)((int)puVar4 + 0xc6 + local_c);
  *puVar8 = local_10;
  puVar10 = local_1c;
  for (uVar7 = local_10 >> 2; puVar8 = puVar8 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar8 = *puVar10;
    puVar10 = puVar10 + 1;
  }
  for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
    *(char *)puVar8 = (char)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  FUN_006ab060(&local_1c);
  pSVar2 = local_14;
  iVar6 = *(int *)(local_14 + 0x2e6);
  if (iVar6 != 0) {
    if (*(int *)(iVar6 + 0x58) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(int *)(iVar6 + 0x5c) << 2;
    }
    uVar1 = local_8 + 0x6c + uVar7;
    local_8 = uVar1;
    puVar5 = (undefined4 *)Library::DKW::LIB::FUN_006acf50(puVar4,uVar1);
    puVar3 = (undefined4 *)((uVar1 - uVar7) + -0x6c + (int)puVar5);
    puVar9 = *(undefined4 **)(pSVar2 + 0x2e6);
    puVar4 = puVar3;
    for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar4 = puVar4 + 1;
    }
    if (uVar7 != 0) {
      puVar9 = *(undefined4 **)(*(int *)(local_14 + 0x2e6) + 0x58);
      puVar3 = puVar3 + 0x1b;
      for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar3 = puVar3 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    *param_1 = local_8;
    return puVar5;
  }
  *param_1 = local_8;
  return puVar4;
}

