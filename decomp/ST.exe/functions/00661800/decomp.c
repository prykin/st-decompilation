
int __fastcall FUN_00661800(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  int *this;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_8;
  
  local_8 = 0;
  puVar1 = thunk_FUN_0065da10(param_1,param_2);
  if (puVar1 != (uint *)0x0) {
    uVar5 = 0;
    iVar3 = 0;
    if (0 < (int)puVar1[3]) {
      bVar6 = puVar1[3] != 0;
      uVar4 = extraout_EDX;
      do {
        if (bVar6) {
          puVar2 = (undefined2 *)(puVar1[2] * uVar5 + puVar1[7]);
        }
        else {
          puVar2 = (undefined2 *)0x0;
        }
        this = (int *)STAllPlayersC::GetObjPtr
                                (DAT_007fa174,
                                 CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)(param_1 + 0x24)),
                                 CONCAT22((short)((uint)puVar2 >> 0x10),*puVar2),CASE_1);
        uVar4 = extraout_EDX_00;
        if (this != (int *)0x0) {
          uVar7 = (**(code **)(*this + 0x2c))();
          uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if ((((0x31 < (int)uVar7) && ((int)uVar7 < 0x74)) && (*(short *)(param_1 + 0x39) != 3)) &&
             ((*(int *)((int)this + 0x361) == 5 ||
              (iVar3 = thunk_FUN_004c93e0(this,5), uVar4 = extraout_EDX_01, 0 < iVar3)))) {
            local_8 = local_8 + 1;
          }
        }
        uVar5 = uVar5 + 1;
        bVar6 = uVar5 < puVar1[3];
        iVar3 = local_8;
      } while ((int)uVar5 < (int)puVar1[3]);
    }
    FUN_006ae110((byte *)puVar1);
    return iVar3;
  }
  return 0;
}

