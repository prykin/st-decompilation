
void __thiscall STGroupC::SetAVPar(STGroupC *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  void *this_00;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar1 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  *(uint *)(this + 0x39) = param_1;
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      FUN_006acc70(*(int *)(this + 0x29),uVar4,&param_1);
      if ((short)param_1 != -1) {
        this_00 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),this[0x24]),
                                             param_1,1);
        if (this_00 == (void *)0x0) {
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x256,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a50a4,599);
        }
        if (*(int *)((int)this_00 + 0x20) == 0x14) {
          thunk_FUN_004956c0(this_00,*(undefined4 *)(this + 0x39));
        }
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < uVar1);
  }
  return;
}

