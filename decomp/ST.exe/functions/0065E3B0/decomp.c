
int __fastcall FUN_0065e3b0(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  uint *groupContent;
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  groupContent = thunk_FUN_0065da10(param_1,param_2);
  if (groupContent != (uint *)0x0) {
    if (0 < (int)groupContent[3]) {
      bVar6 = groupContent[3] != 0;
      uVar4 = extraout_ECX;
      do {
        if (bVar6) {
          uVar4 = groupContent[7];
          puVar1 = (undefined2 *)(groupContent[2] * uVar5 + uVar4);
        }
        else {
          puVar1 = (undefined2 *)0x0;
        }
        piVar2 = (int *)STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,
                                   CONCAT31((int3)(uVar4 >> 8),param_1->field_0024),
                                   CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),CASE_1);
        uVar4 = extraout_ECX_00;
        if (piVar2 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar2 + 0xd4))();
          local_8 = local_8 + iVar3;
          uVar4 = extraout_ECX_01;
        }
        uVar5 = uVar5 + 1;
        bVar6 = uVar5 < groupContent[3];
      } while ((int)uVar5 < (int)groupContent[3]);
    }
    FUN_006ae110((byte *)groupContent);
    return local_8;
  }
  return 0;
}

