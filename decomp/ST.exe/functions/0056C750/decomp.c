
void FUN_0056c750(void)

{
  code *pcVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  undefined4 *local_94;
  undefined4 local_90 [16];
  undefined4 local_50;
  undefined4 local_4c [16];
  int *local_c;
  void *local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = (undefined4 **)&local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  this = local_8;
  if (iVar2 == 0) {
    if (*(int *)((int)local_8 + 0x1189) != 0) {
      FUN_006ab060((undefined4 *)((int)local_8 + 0x1189));
    }
    *(undefined4 *)((int)this + 0x118d) = 0;
    if (DAT_00806740 != (byte *)0x0) {
      FUN_006ae110(DAT_00806740);
    }
    DAT_00806740 = (byte *)0x0;
    thunk_FUN_005711d0(this,&DAT_0081163c);
    thunk_FUN_005711d0(this,&DAT_0081176c);
    thunk_FUN_0056d580();
    thunk_FUN_00576ce0();
    if (*(byte **)((int)this + 0x4ee2) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)this + 0x4ee2));
    }
    *(undefined4 *)((int)this + 0x4ee2) = 0;
    if (*(byte **)((int)this + 0x4ee6) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)this + 0x4ee6));
    }
    *(undefined4 *)((int)this + 0x4ee6) = 0;
    if (DAT_008075a0 != (int *)0x0) {
      FUN_006c3aa0(DAT_008075a0);
      DAT_008075a0 = (int *)0x0;
    }
    if (DAT_008075a4 != 0) {
      FUN_006c2ac0(DAT_008075a4);
      DAT_008075a4 = 0;
    }
    if (DAT_008075a8 != (int *)0x0) {
      FUN_006b3cc0(DAT_008075a8);
      DAT_008075a8 = (int *)0x0;
    }
    if (DAT_0080759c != (undefined4 *)0x0) {
      FUN_006ba600(DAT_0080759c);
      DAT_0080759c = (undefined4 *)0x0;
    }
    thunk_FUN_0055d910();
    if (DAT_00806758 != (undefined4 *)0x0) {
      FUN_006f1170(DAT_00806758);
    }
    DAT_00806758 = (undefined4 *)0x0;
    if (DAT_00806760 != (undefined4 *)0x0) {
      FUN_006f20e0(&DAT_0080679c);
      if (DAT_00806764 != 0) {
        FUN_0070a300(&DAT_00806764);
      }
      FUN_006f1170(DAT_00806760);
      DAT_00806760 = (undefined4 *)0x0;
    }
    if (DAT_00806784 != 0) {
      FUN_0070a300(&DAT_00806784);
    }
    if (DAT_00806780 != (undefined4 *)0x0) {
      FUN_006f1170(DAT_00806780);
    }
    DAT_00806780 = (undefined4 *)0x0;
    if (DAT_00806798 != (undefined4 *)0x0) {
      FUN_006f1170(DAT_00806798);
    }
    DAT_00806798 = (undefined4 *)0x0;
    if (DAT_0080675c != (undefined4 *)0x0) {
      FUN_006f1170(DAT_0080675c);
    }
    DAT_0080675c = (undefined4 *)0x0;
    if (*(byte **)((int)this + 0x4ede) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)this + 0x4ede));
    }
    *(undefined4 *)((int)this + 0x4ede) = 0;
    if (*(byte **)((int)this + 0x4ea7) != (byte *)0x0) {
      FUN_006b5570(*(byte **)((int)this + 0x4ea7));
    }
    *(undefined4 *)((int)this + 0x4ea7) = 0;
    if (*(byte **)((int)this + 0x4eab) != (byte *)0x0) {
      FUN_006b5570(*(byte **)((int)this + 0x4eab));
    }
    *(undefined4 *)((int)this + 0x4eab) = 0;
    if (*(byte **)((int)this + 0x4eda) != (byte *)0x0) {
      FUN_006b5570(*(byte **)((int)this + 0x4eda));
    }
    *(undefined4 *)((int)this + 0x4eda) = 0;
    if (*(int *)((int)this + 0x7d12) != 0) {
      FUN_006ab060((undefined4 *)((int)this + 0x7d12));
    }
    if (*(int *)((int)this + 0x76f2) != 0) {
      FUN_006ab060((undefined4 *)((int)this + 0x76f2));
    }
    thunk_FUN_005713b0((int)this);
    piVar4 = (int *)((int)this + 0x38);
    thunk_FUN_00572920(piVar4,1);
    thunk_FUN_005672e0((int)piVar4);
    local_94 = DAT_00858df8;
    DAT_00858df8 = &local_94;
    local_c = piVar4;
    iVar2 = __setjmp3(local_90,0,unaff_EDI,unaff_ESI);
    piVar4 = local_c;
    if ((iVar2 == 0) && (*local_c != 0)) {
      FUN_006b81d0((undefined4 *)local_c[1]);
      piVar4[1] = 0;
    }
    DAT_00858df8 = (undefined4 **)local_94;
    DestroyWindow(DAT_00806748);
    DAT_00806748 = (HWND)0x0;
    UnregisterClassA(s_STWindowClass_007c9e3c,DAT_00856d70);
    if (*(int *)((int)local_8 + 0x115a) != 0) {
      FUN_006ab060((undefined4 *)((int)local_8 + 0x115a));
    }
    FUN_006e36e0();
    if (DAT_008030d4 != 0) {
      FUN_006ab060(&DAT_008030d4);
    }
    if (DAT_00802ad0 != 0) {
      FUN_006ab060(&DAT_00802ad0);
    }
    InterlockedDecrement(&DAT_0085e000);
    DAT_00858df8 = (undefined4 **)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 **)local_50;
  iVar3 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x31c,0,iVar2,&DAT_007a4ccc);
  if (iVar3 == 0) {
    FUN_006a5e40(iVar2,0,0x7ca0c8,0x31d);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

