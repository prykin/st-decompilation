
uint FUN_00423520(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  uVar5 = 0;
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    local_8 = 0;
    local_14 = *(int *)(*(int *)(local_10 + 0x29) + 0xc);
    if (0 < local_14) {
      do {
        FUN_006acc70(*(int *)(local_10 + 0x29),uVar5,&local_c);
        if ((short)local_c != -1) {
          piVar3 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                      *(undefined1 *)(local_10 + 0x24)),local_c,1);
          if (piVar3 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a50a4,0x66);
          }
          iVar2 = (**(code **)(*piVar3 + 0x2c))();
          if (iVar2 == param_1) {
            local_8 = local_8 + 1;
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < local_14);
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return CONCAT22((short)((uint)local_58 >> 0x10),(undefined2)local_8);
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x6b,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar2,0,0x7a50a4,0x6c);
  return CONCAT22(extraout_var,(undefined2)local_8);
}

