
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00660620(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar5;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint *puVar4;
  
  local_18 = 0;
  local_14 = (uint *)0x0;
  local_10 = 0;
  local_c = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  local_8 = 0;
  iVar1 = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)(param_1 + 0x24)),
                             param_3);
  if (iVar1 != 0) {
    puVar2 = thunk_FUN_004233e0(iVar1);
    puVar4 = puVar2;
    if ((puVar2 != (uint *)0x0) || (puVar4 = _DAT_0000000c, _DAT_0000000c != (uint *)0x0)) {
      uVar3 = CONCAT22((short)((uint)puVar4 >> 0x10),*(short *)(param_1 + 0x7d));
      local_18 = 0;
      local_14 = puVar2;
      if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
        piVar5 = (int *)thunk_FUN_0042b760(CONCAT31((int3)(uVar3 >> 8),
                                                    *(undefined1 *)(param_1 + 0x24)),uVar3);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(5,&local_18);
          if (puVar2 != (uint *)0x0) {
            FUN_006ae110((byte *)puVar2);
          }
          return 0;
        }
      }
      if (puVar2 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar2);
      }
    }
  }
  return 0xffffffff;
}

