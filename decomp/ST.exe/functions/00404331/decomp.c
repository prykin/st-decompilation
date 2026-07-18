
int __fastcall thunk_FUN_0065e3b0(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iStack_8;
  
  uVar6 = 0;
  iStack_8 = 0;
  puVar1 = thunk_FUN_0065da10(param_1,param_2);
  if (puVar1 != (uint *)0x0) {
    if (0 < (int)puVar1[3]) {
      bVar7 = puVar1[3] != 0;
      uVar5 = extraout_ECX;
      do {
        if (bVar7) {
          uVar5 = puVar1[7];
          puVar2 = (undefined2 *)(puVar1[2] * uVar6 + uVar5);
        }
        else {
          puVar2 = (undefined2 *)0x0;
        }
        piVar3 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uVar5 >> 8),
                                                    *(undefined1 *)(param_1 + 0x24)),
                                           CONCAT22((short)((uint)puVar2 >> 0x10),*puVar2),1);
        uVar5 = extraout_ECX_00;
        if (piVar3 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar3 + 0xd4))();
          iStack_8 = iStack_8 + iVar4;
          uVar5 = extraout_ECX_01;
        }
        uVar6 = uVar6 + 1;
        bVar7 = uVar6 < puVar1[3];
      } while ((int)uVar6 < (int)puVar1[3]);
    }
    FUN_006ae110((byte *)puVar1);
    return iStack_8;
  }
  return 0;
}

