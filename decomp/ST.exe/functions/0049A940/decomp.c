
undefined4 __thiscall FUN_0049a940(void *this,int param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_58;
  undefined4 local_54 [16];
  void *local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  local_14 = this;
  iVar3 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  pvVar2 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar7 = (undefined4 *)((int)local_14 + 0x89);
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      uVar8 = 0;
      *(undefined4 *)((int)local_14 + 0x65) = 0;
      local_8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (local_10 != 0) {
        uVar6 = 0;
        do {
          FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar6,&local_c);
          if ((short)local_c != -1) {
            this_00 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                          *(undefined1 *)((int)pvVar2 + 0x24)),
                                                 local_c,1);
            if (this_00 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x65e);
            }
            thunk_FUN_0045ef00(this_00,3,&local_8);
          }
          uVar8 = uVar8 + 1;
          uVar6 = uVar8 & 0xffff;
        } while (uVar6 < local_10);
      }
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return 2;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x665,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar3,0,0x7abe3c,0x666);
  return 0xffffffff;
}

