
int __fastcall FUN_00661800(int param_1,undefined4 param_2)

{
  uint *groupContent;
  undefined2 *puVar1;
  int *this;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  int local_8;
  
  local_8 = 0;
  groupContent = thunk_FUN_0065da10(param_1,param_2);
  if (groupContent != (uint *)0x0) {
    uVar4 = 0;
    iVar2 = 0;
    if (0 < (int)groupContent[3]) {
      bVar5 = groupContent[3] != 0;
      uVar3 = extraout_EDX;
      do {
        if (bVar5) {
          puVar1 = (undefined2 *)(groupContent[2] * uVar4 + groupContent[7]);
        }
        else {
          puVar1 = (undefined2 *)0x0;
        }
        this = (int *)STAllPlayersC::GetObjPtr
                                (g_sTAllPlayers_007FA174,
                                 CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)(param_1 + 0x24)),
                                 CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),CASE_1);
        uVar3 = extraout_EDX_00;
        if (this != (int *)0x0) {
          uVar6 = (**(code **)(*this + 0x2c))();
          uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if ((((0x31 < (int)uVar6) && ((int)uVar6 < 0x74)) && (*(short *)(param_1 + 0x39) != 3)) &&
             ((*(int *)((int)this + 0x361) == 5 ||
              (iVar2 = thunk_FUN_004c93e0(this,5), uVar3 = extraout_EDX_01, 0 < iVar2)))) {
            local_8 = local_8 + 1;
          }
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < groupContent[3];
        iVar2 = local_8;
      } while ((int)uVar4 < (int)groupContent[3]);
    }
    FUN_006ae110((byte *)groupContent);
    return iVar2;
  }
  return 0;
}

