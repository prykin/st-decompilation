
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007395f0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = (uint)DAT_0085726a;
  if (DAT_00857218 == 0) {
    thunk_FUN_006a49c0(DAT_00857238,2);
    thunk_FUN_006a49c0(DAT_0085723c,2);
    thunk_FUN_006a49c0((undefined4 *)DAT_00857240,2);
    DAT_00857238 = (undefined4 *)0x0;
    DAT_0085723c = (undefined4 *)0x0;
    DAT_00857240 = (char *)0x0;
    uVar5 = thunk_FUN_006a3c10(2,2,"initnum.c",0x88);
    *(undefined4 *)PTR_PTR_007f2730 = uVar5;
    if (*(int *)PTR_PTR_007f2730 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      FUN_0073a240(*(uint **)PTR_PTR_007f2730,(uint *)&DAT_007cc8b8);
      uVar5 = thunk_FUN_006a3c10(2,2,"initnum.c",0x8d);
      *(undefined4 *)(PTR_PTR_007f2730 + 4) = uVar5;
      if (*(int *)(PTR_PTR_007f2730 + 4) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_007f2730 + 4) = 0;
        uVar5 = thunk_FUN_006a3c10(2,2,"initnum.c",0x92);
        *(undefined4 *)(PTR_PTR_007f2730 + 8) = uVar5;
        if (*(int *)(PTR_PTR_007f2730 + 8) == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_007f2730 + 8) = 0;
          DAT_007f1490 = **(undefined1 **)PTR_PTR_007f2730;
          _DAT_007f1494 = 1;
          uVar5 = 0;
        }
      }
    }
  }
  else {
    iVar2 = FUN_00742790(1,uVar1,0xe,(int *)&DAT_00857238);
    iVar3 = FUN_00742790(1,uVar1,0xf,(int *)&DAT_0085723c);
    iVar4 = FUN_00742790(1,uVar1,0x10,(int *)&DAT_00857240);
    fix_grouping(DAT_00857240);
    if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) {
      if (*(undefined **)PTR_PTR_007f2730 != &DAT_007f26f8) {
        thunk_FUN_006a49c0(*(undefined4 **)PTR_PTR_007f2730,2);
        thunk_FUN_006a49c0(*(undefined4 **)(PTR_PTR_007f2730 + 4),2);
        thunk_FUN_006a49c0(*(undefined4 **)(PTR_PTR_007f2730 + 8),2);
      }
      *(undefined4 **)PTR_PTR_007f2730 = DAT_00857238;
      *(undefined4 **)(PTR_PTR_007f2730 + 4) = DAT_0085723c;
      *(char **)(PTR_PTR_007f2730 + 8) = DAT_00857240;
      DAT_007f1490 = **(undefined1 **)PTR_PTR_007f2730;
      _DAT_007f1494 = 1;
      uVar5 = 0;
    }
    else {
      thunk_FUN_006a49c0(DAT_00857238,2);
      thunk_FUN_006a49c0(DAT_0085723c,2);
      thunk_FUN_006a49c0((undefined4 *)DAT_00857240,2);
      DAT_00857238 = (undefined4 *)0x0;
      DAT_0085723c = (undefined4 *)0x0;
      DAT_00857240 = (char *)0x0;
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}

