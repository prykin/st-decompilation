
int __fastcall FUN_005fd850(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar6 = 0;
  iVar3 = -1;
  local_8 = -1;
  if (*(int *)(param_1 + 0x226) != 0) {
    puVar1 = (undefined4 *)FUN_006aac70(*(int *)(param_1 + 0x226) * 0x52);
    *(undefined4 **)(param_1 + 0x233) = puVar1;
    local_8 = 0;
    uVar4 = *(int *)(param_1 + 0x226) * 0x52;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    iVar3 = 0;
  }
  if (((*(int *)(param_1 + 0x233) != 0) && (*(char *)(param_1 + 0x232) != '\0')) &&
     (iVar7 = 0, 0 < *(int *)(param_1 + 0x226))) {
    do {
      puVar1 = (undefined4 *)FUN_0072e530(0x40);
      if (puVar1 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = thunk_FUN_004ab810(puVar1);
      }
      iVar6 = iVar6 + 0x52;
      *(undefined4 *)(*(int *)(param_1 + 0x233) + -0x10 + iVar6) = uVar2;
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x226));
    return local_8;
  }
  return iVar3;
}

