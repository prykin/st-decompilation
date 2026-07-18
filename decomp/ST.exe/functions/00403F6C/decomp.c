
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_00660620(int param_1,undefined4 param_2,uint param_3)

{
  STGroupC *this;
  uint *puVar1;
  uint uVar2;
  int *piVar4;
  int unaff_EDI;
  undefined4 uStack_18;
  uint *puStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint *puVar3;
  
  uStack_18 = 0;
  puStack_14 = (uint *)0x0;
  uStack_10 = 0;
  uStack_c = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  uStack_8 = 0;
  this = (STGroupC *)
         thunk_FUN_0042b760(CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)(param_1 + 0x24)),
                            param_3);
  if (this != (STGroupC *)0x0) {
    puVar1 = STGroupC::GetGroupContent(this,unaff_EDI);
    puVar3 = puVar1;
    if ((puVar1 != (uint *)0x0) || (puVar3 = _DAT_0000000c, _DAT_0000000c != (uint *)0x0)) {
      uVar2 = CONCAT22((short)((uint)puVar3 >> 0x10),*(short *)(param_1 + 0x7d));
      uStack_18 = 0;
      puStack_14 = puVar1;
      if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31((int3)(uVar2 >> 8),
                                                    *(undefined1 *)(param_1 + 0x24)),uVar2);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(5,&uStack_18);
          if (puVar1 != (uint *)0x0) {
            FUN_006ae110((byte *)puVar1);
          }
          return 0;
        }
      }
      if (puVar1 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar1);
      }
    }
  }
  return 0xffffffff;
}

