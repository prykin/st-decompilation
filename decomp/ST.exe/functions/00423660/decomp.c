
uint * FUN_00423660(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined4 extraout_EDX;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    local_c = FUN_006ae290((uint *)0x0,0,2,1);
    uVar6 = 0;
    local_14 = *(int *)(*(int *)(local_10 + 0x29) + 0xc);
    if (0 < local_14) {
      do {
        FUN_006acc70(*(int *)(local_10 + 0x29),uVar6,&local_8);
        if ((short)local_8 != -1) {
          piVar3 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                      *(undefined1 *)(local_10 + 0x24)),local_8,1);
          if (piVar3 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a50a4,0x81);
          }
          iVar2 = (**(code **)(*piVar3 + 0x2c))();
          if (iVar2 == param_1) {
            FUN_006ae1c0(local_c,&local_8);
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < local_14);
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return local_c;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x86,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (uint *)(*pcVar1)();
    return puVar5;
  }
  FUN_006a5e40(iVar2,0,0x7a50a4,0x87);
  return local_c;
}

