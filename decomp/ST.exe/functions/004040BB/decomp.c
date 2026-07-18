
void __thiscall thunk_FUN_004a8690(void *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  int *this_00;
  int iVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  uint uStack_8;
  
  uVar5 = 0;
  uVar1 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      FUN_006acc70(*(int *)((int)this + 0x29),uVar4,&uStack_8);
      if ((short)uStack_8 != -1) {
        this_00 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                     *(undefined1 *)((int)this + 0x24)),uStack_8,1);
        if (this_00 == (int *)0x0) {
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1742,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1743);
        }
        iVar3 = (**(code **)(*this_00 + 0x2c))();
        if ((iVar3 == 0x16) || (iVar3 = (**(code **)(*this_00 + 0x2c))(), iVar3 == 0x25)) {
          thunk_FUN_00494160(this_00,param_1);
        }
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < uVar1);
  }
  return;
}

