
undefined4 FUN_00693eb0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *this;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 local_19ac [4];
  undefined4 auStackY_199b [8];
  char acStackY_1979 [614];
  undefined4 auStackY_1713 [1470];
  undefined4 uStackY_18;

  iVar10 = param_2;
  Library::MSVCRT::FUN_0072da40();
  puVar8 = this;
  puVar9 = local_19ac;
  for (iVar6 = 0x666; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
  iVar6 = param_2 * 0x51;
  puVar8 = (undefined4 *)((int)this + param_1 * 0x51 + 0x11);
  puVar9 = (undefined4 *)(iVar6 + 0x11 + (int)this);
  for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
  *(char *)(iVar6 + 0x33 + (int)this) = (char)param_2;
  uStackY_18 = 0x693f0a;
  thunk_FUN_00693cb0(this,param_1);
  if (acStackY_1979[iVar6] != -1) {
    puVar8 = (undefined4 *)((int)auStackY_199b + iVar6);
    puVar9 = (undefined4 *)((int)this + param_1 * 0x51 + 0x11);
    for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
    *(char *)((int)this + param_1 * 0x51 + 0x33) = (char)param_1;
  }
  puVar8 = (undefined4 *)((int)this + param_1 * 8 + 0x299);
  iVar6 = 0;
  do {
    *(undefined1 *)((int)this + iVar6 + param_2 * 8 + 0x299) = *(undefined1 *)((int)puVar8 + iVar6);
    *(undefined1 *)((int)puVar8 + iVar6) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  iVar6 = param_2 + param_1 * 8;
  iVar7 = param_1 + param_2 * 8;
  param_2 = 8;
  uVar1 = *(undefined1 *)((int)auStackY_1713 + iVar6);
  *(undefined1 *)(iVar7 + 0x299 + (int)this) = uVar1;
  puVar5 = (undefined1 *)(param_1 + 0x299 + (int)this);
  puVar4 = puVar5;
  do {
    puVar4[iVar10 - param_1] = *puVar4;
    *puVar4 = 0;
    puVar4 = puVar4 + 8;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  uVar2 = *(undefined1 *)((int)auStackY_1713 + iVar7);
  uVar3 = auStackY_1713[iVar10 * 2];
  *(undefined1 *)(iVar6 + 0x299 + (int)this) = uVar2;
  *puVar8 = uVar3;
  puVar4 = (undefined1 *)((int)auStackY_1713 + iVar10);
  puVar8[1] = auStackY_1713[iVar10 * 2 + 1];
  *(undefined1 *)(iVar6 + 0x299 + (int)this) = uVar2;
  iVar10 = 8;
  do {
    uVar2 = *puVar4;
    puVar4 = puVar4 + 8;
    *puVar5 = uVar2;
    puVar5 = puVar5 + 8;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  *(undefined1 *)(iVar7 + 0x299 + (int)this) = uVar1;
  return 1;
}

