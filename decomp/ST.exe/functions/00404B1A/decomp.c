
void __fastcall thunk_FUN_004a80a0(int param_1)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  undefined4 uStack_34;
  uint auStack_30 [3];
  undefined4 uStack_22;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  int iStack_c;
  uint *puStack_8;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x22e) + 0xc);
  iStack_c = iVar4;
  puStack_8 = FUN_006ae290((uint *)0x0,0,2,1);
  uVar5 = 0;
  if (0 < iVar4) {
    do {
      FUN_006acc70(*(int *)(param_1 + 0x22e),uVar5,&uStack_34);
      if ((short)auStack_30[0] != -1) {
        uStack_34 = 0;
        uStack_22 = 0;
        FUN_006ae140(*(uint **)(param_1 + 0x22e),uVar5,&uStack_34);
        uVar3 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                            *(undefined1 *)(param_1 + 0x24)),auStack_30[0],1);
        if (uVar3 == 0) {
          iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x16c9,0,0,&DAT_007a4ccc);
          if (iVar4 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x16ca);
        }
        FUN_006ae1c0(puStack_8,auStack_30);
        *(undefined4 *)(uVar3 + 0x493) = 1;
        iVar4 = iStack_c;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
  }
  FUN_006acc70(*(int *)(param_1 + 0x22a),*(uint *)(param_1 + 0x232),(undefined4 *)&sStack_1c);
  puVar2 = puStack_8;
  if (puStack_8[3] != 0) {
    thunk_FUN_00497cd0((int)puStack_8,(int)sStack_1c,(int)sStack_1a,(int)sStack_18);
  }
  FUN_006ae110((byte *)puVar2);
  return;
}

