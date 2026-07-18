
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::DoneApp */

void __thiscall STAppC::DoneApp(STAppC *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  cMf32 *this_00;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *extraout_ECX_02;
  cMf32 *extraout_ECX_03;
  cMf32 *extraout_ECX_04;
  cMf32 *pcVar4;
  undefined4 unaff_ESI;
  STAppC *pSVar5;
  void *unaff_EDI;
  undefined4 *local_94;
  undefined4 local_90 [16];
  undefined4 local_50;
  undefined4 local_4c [16];
  STAppC *local_c;
  STAppC *local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = (undefined4 **)&local_50;
  local_8 = this;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pSVar5 = local_8;
  if (iVar2 == 0) {
    if (*(int *)(local_8 + 0x1189) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1189));
    }
    *(undefined4 *)(pSVar5 + 0x118d) = 0;
    if (DAT_00806740 != (byte *)0x0) {
      FUN_006ae110(DAT_00806740);
    }
    DAT_00806740 = (byte *)0x0;
    thunk_FUN_005711d0(pSVar5,&DAT_0081163c);
    thunk_FUN_005711d0(pSVar5,&DAT_0081176c);
    CloseGameDBs(pSVar5);
    thunk_FUN_00576ce0();
    if (*(byte **)(pSVar5 + 0x4ee2) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar5 + 0x4ee2));
    }
    *(undefined4 *)(pSVar5 + 0x4ee2) = 0;
    if (*(byte **)(pSVar5 + 0x4ee6) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar5 + 0x4ee6));
    }
    *(undefined4 *)(pSVar5 + 0x4ee6) = 0;
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
      cMf32::delete(this_00,DAT_00806758);
    }
    DAT_00806758 = (undefined4 *)0x0;
    pcVar4 = (cMf32 *)0x0;
    if (DAT_00806760 != (cMf32 *)0x0) {
      cMf32::RecMemFree(DAT_00806760,&DAT_0080679c);
      pcVar4 = extraout_ECX;
      if (DAT_00806764 != 0) {
        FUN_0070a300(&DAT_00806764);
        pcVar4 = extraout_ECX_00;
      }
      cMf32::delete(pcVar4,(undefined4 *)DAT_00806760);
      DAT_00806760 = (cMf32 *)0x0;
      pcVar4 = extraout_ECX_01;
    }
    if (DAT_00806784 != 0) {
      FUN_0070a300(&DAT_00806784);
      pcVar4 = extraout_ECX_02;
    }
    if (DAT_00806780 != (undefined4 *)0x0) {
      cMf32::delete(pcVar4,DAT_00806780);
      pcVar4 = extraout_ECX_03;
    }
    DAT_00806780 = (undefined4 *)0x0;
    if (DAT_00806798 != (undefined4 *)0x0) {
      cMf32::delete(pcVar4,DAT_00806798);
      pcVar4 = extraout_ECX_04;
    }
    DAT_00806798 = (undefined4 *)0x0;
    if (DAT_0080675c != (undefined4 *)0x0) {
      cMf32::delete(pcVar4,DAT_0080675c);
    }
    DAT_0080675c = (undefined4 *)0x0;
    if (*(byte **)(pSVar5 + 0x4ede) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar5 + 0x4ede));
    }
    *(undefined4 *)(pSVar5 + 0x4ede) = 0;
    if (*(byte **)(pSVar5 + 0x4ea7) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pSVar5 + 0x4ea7));
    }
    *(undefined4 *)(pSVar5 + 0x4ea7) = 0;
    if (*(byte **)(pSVar5 + 0x4eab) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pSVar5 + 0x4eab));
    }
    *(undefined4 *)(pSVar5 + 0x4eab) = 0;
    if (*(byte **)(pSVar5 + 0x4eda) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pSVar5 + 0x4eda));
    }
    *(undefined4 *)(pSVar5 + 0x4eda) = 0;
    if (*(int *)(pSVar5 + 0x7d12) != 0) {
      FUN_006ab060((undefined4 *)(pSVar5 + 0x7d12));
    }
    if (*(int *)(pSVar5 + 0x76f2) != 0) {
      FUN_006ab060((undefined4 *)(pSVar5 + 0x76f2));
    }
    thunk_FUN_005713b0((int)pSVar5);
    pSVar5 = pSVar5 + 0x38;
    thunk_FUN_00572920(pSVar5,1);
    thunk_FUN_005672e0((int)pSVar5);
    local_94 = DAT_00858df8;
    DAT_00858df8 = &local_94;
    local_c = pSVar5;
    iVar2 = __setjmp3(local_90,0,unaff_EDI,unaff_ESI);
    pSVar5 = local_c;
    if ((iVar2 == 0) && (*(int *)local_c != 0)) {
      FUN_006b81d0(*(undefined4 **)(local_c + 4));
      *(int *)(pSVar5 + 4) = 0;
    }
    DAT_00858df8 = (undefined4 **)local_94;
    DestroyWindow(DAT_00806748);
    DAT_00806748 = (HWND)0x0;
    UnregisterClassA(s_STWindowClass_007c9e3c,DAT_00856d70);
    if (*(int *)(local_8 + 0x115a) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x115a));
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

