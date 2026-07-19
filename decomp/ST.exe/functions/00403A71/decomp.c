
void __fastcall thunk_FUN_004a85b0(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  uint uVar6;
  uint uStack_8;
  
  uVar6 = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x29) + 0xc);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      FUN_006acc70(*(int *)(param_1 + 0x29),uVar5,&uStack_8);
      if ((short)uStack_8 != -1) {
        piVar3 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                    *(undefined1 *)(param_1 + 0x24)),uStack_8,1);
        if (piVar3 == (int *)0x0) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x172d,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__StartReceiveOrderS_007ac50c);
          if (iVar4 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x172e);
        }
        thunk_FUN_00493d10(piVar3);
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar6 & 0xffff;
    } while (uVar5 < uVar1);
  }
  return;
}

