
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::DoneCPanel */

void __thiscall CPanelTy::DoneCPanel(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *this_00;
  int iVar2;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *extraout_ECX_03;
  ccFntTy *extraout_ECX_04;
  ccFntTy *extraout_ECX_05;
  ccFntTy *extraout_ECX_06;
  ccFntTy *extraout_ECX_07;
  ccFntTy *extraout_ECX_08;
  ccFntTy *extraout_ECX_09;
  ccFntTy *this_01;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  CPanelTy *pCVar4;
  CPanelTy *pCVar5;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 == 0) {
    pCVar5 = local_c + 0x18;
    *(undefined4 *)(local_c + 0x28) = 0x4404;
    FUN_006e6000(local_c,0xf,0,(undefined4 *)pCVar5);
    pCVar4 = this_00 + 0x217;
    local_8 = 4;
    do {
      if (*(int *)pCVar4 != 0) {
        FUN_006ab060((undefined4 *)pCVar4);
      }
      pCVar4 = pCVar4 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    pCVar4 = pCVar5;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar4 = 0;
      pCVar4 = pCVar4 + 4;
    }
    *(undefined4 *)(this_00 + 0x28) = 0x14;
    *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this_00 + 8);
    FUN_006e6000(this_00,3,1,(undefined4 *)pCVar5);
    if (*(uint *)(this_00 + 0x95c) != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x95c));
    }
    *(undefined4 *)(this_00 + 0x95c) = 0;
    pCVar5 = this_00 + 0x308;
    iVar2 = 2;
    do {
      if (*(uint *)(pCVar5 + -10) != 0) {
        FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(pCVar5 + -10));
      }
      *(undefined4 *)(pCVar5 + -10) = 0;
      if (*(uint *)pCVar5 != 0) {
        FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar5);
      }
      *(uint *)pCVar5 = 0;
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pCVar5 = this_00 + 0x310;
    iVar2 = 3;
    do {
      if (*(uint *)pCVar5 != 0) {
        FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar5);
      }
      *(uint *)pCVar5 = 0;
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(uint *)(this_00 + 0x9d0) != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x9d0));
    }
    *(undefined4 *)(this_00 + 0x9d0) = 0;
    pCVar5 = this_00 + 0x9a4;
    iVar2 = 7;
    do {
      if (*(uint *)pCVar5 != 0) {
        FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar5);
        *(uint *)pCVar5 = 0;
      }
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pCVar5 = this_00 + 0x9c0;
    iVar2 = 2;
    do {
      if (*(uint *)pCVar5 != 0) {
        FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar5);
        *(uint *)pCVar5 = 0;
      }
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pCVar5 = this_00 + 0xa15;
    iVar2 = 6;
    do {
      if (*(uint *)pCVar5 != 0) {
        FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar5);
        *(uint *)pCVar5 = 0;
      }
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pCVar5 = this_00 + 0xb1f;
    iVar2 = 6;
    do {
      if (*(uint *)pCVar5 != 0) {
        FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar5);
        *(uint *)pCVar5 = 0;
      }
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(uint *)(this_00 + 0xb37) != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0xb37));
    }
    *(undefined4 *)(this_00 + 0xb37) = 0;
    pCVar5 = this_00 + 0x960;
    iVar2 = 4;
    do {
      if (*(uint *)pCVar5 != 0) {
        FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar5);
        *(uint *)pCVar5 = 0;
      }
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(uint *)(this_00 + 0x970) != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x970));
    }
    pCVar5 = this_00 + 0x148;
    *(undefined4 *)(this_00 + 0x970) = 0;
    DAT_00801688 = 0;
    iVar2 = 0xb;
    do {
      if (-1 < (int)*(uint *)pCVar5) {
        FUN_006b3bb0(DAT_008075a8,*(uint *)pCVar5);
      }
      *(uint *)pCVar5 = 0xffffffff;
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (-1 < (int)*(uint *)(this_00 + 0x174)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(this_00 + 0x174));
    }
    *(undefined4 *)(this_00 + 0x174) = 0xffffffff;
    if (-1 < (int)*(uint *)(this_00 + 0x178)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(this_00 + 0x178));
    }
    *(undefined4 *)(this_00 + 0x178) = 0xffffffff;
    if (-1 < (int)*(uint *)(this_00 + 0x17c)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(this_00 + 0x17c));
    }
    *(undefined4 *)(this_00 + 0x17c) = 0xffffffff;
    cMf32::RecMemFree(DAT_00806790,(uint *)(this_00 + 0xb43));
    cMf32::RecMemFree(DAT_00806790,(uint *)(this_00 + 0xb47));
    pCVar5 = this_00 + 0x9d9;
    iVar2 = 0xf;
    do {
      cMf32::RecMemFree(DAT_00806790,(uint *)pCVar5);
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((DAT_00807598 != (void *)0x0) && (*(int **)(this_00 + 0xdb3) != (int *)0x0)) {
      FUN_006e6580(DAT_00807598,*(int **)(this_00 + 0xdb3));
    }
    *(undefined4 *)(this_00 + 0xdb3) = 0;
    if (DAT_00807598 != (void *)0x0) {
      FUN_006e6500(DAT_00807598,(undefined4 *)0x0);
    }
    pCVar5 = this_00 + 0x227;
    iVar2 = 4;
    do {
      if (*(int *)pCVar5 != 0) {
        FUN_006ab060((undefined4 *)pCVar5);
      }
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    cMf32::RecMemFree(DAT_00806790,(uint *)(this_00 + 0x994));
    pCVar5 = this_00 + 0xdbf;
    iVar2 = 2;
    do {
      *(undefined4 *)(pCVar5 + -0x3f7) = 0;
      *(undefined4 *)pCVar5 = 0;
      cMf32::RecMemFree(DAT_00806780,(uint *)(pCVar5 + -8));
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pCVar5 = this_00 + 0x974;
    iVar2 = 8;
    do {
      cMf32::RecMemFree(DAT_00806790,(uint *)pCVar5);
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    cMf32::RecMemFree(DAT_00806790,(uint *)(this_00 + 0x954));
    cMf32::RecMemFree(DAT_00806790,(uint *)(this_00 + 0x958));
    cMf32::RecMemFree(DAT_00806790,(uint *)(this_00 + 0x286));
    cMf32::RecMemFree(DAT_00806790,(uint *)(this_00 + 0x28a));
    *(undefined4 *)(this_00 + 0x77c) = 0;
    *(undefined4 *)(this_00 + 0x2de) = 0;
    *(undefined4 *)(this_00 + 0x2da) = 0;
    *(undefined4 *)(this_00 + 0xb1b) = 0;
    *(undefined4 *)(this_00 + 0x9d5) = 0;
    *(undefined4 *)(this_00 + 0xb17) = 0;
    *(undefined4 *)(this_00 + 0x2d6) = 0;
    *(undefined4 *)(this_00 + 0x2d2) = 0;
    *(undefined4 *)(this_00 + 0x2ce) = 0;
    *(undefined4 *)(this_00 + 0x2ca) = 0;
    *(undefined4 *)(this_00 + 0x2c6) = 0;
    *(undefined4 *)(this_00 + 0x2c2) = 0;
    *(undefined4 *)(this_00 + 0x2be) = 0;
    *(undefined4 *)(this_00 + 0x2ba) = 0;
    *(undefined4 *)(this_00 + 0x2b2) = 0;
    *(undefined4 *)(this_00 + 0x2b6) = 0;
    *(undefined4 *)(this_00 + 0x2a2) = 0;
    *(undefined4 *)(this_00 + 0x29e) = 0;
    *(undefined4 *)(this_00 + 0x29a) = 0;
    *(undefined4 *)(this_00 + 0x296) = 0;
    *(undefined4 *)(this_00 + 0x292) = 0;
    *(undefined4 *)(this_00 + 0x28e) = 0;
    this_01 = extraout_ECX;
    if (*(byte **)(this_00 + 0x24b) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x24b));
      this_01 = extraout_ECX_00;
    }
    *(undefined4 *)(this_00 + 0x24b) = 0;
    if (*(byte **)(this_00 + 0xb4b) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0xb4b));
      this_01 = extraout_ECX_01;
    }
    *(undefined4 *)(this_00 + 0xb4b) = 0;
    if (*(byte **)(this_00 + 0xb95) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0xb95));
      this_01 = extraout_ECX_02;
    }
    *(undefined4 *)(this_00 + 0xb95) = 0;
    if (*(uint **)(this_00 + 0x1cc) != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)(this_00 + 0x1cc));
      *(undefined4 *)(this_00 + 0x1cc) = 0;
      this_01 = extraout_ECX_03;
    }
    if (*(uint **)(this_00 + 0x1d0) != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)(this_00 + 0x1d0));
      *(undefined4 *)(this_00 + 0x1d0) = 0;
      this_01 = extraout_ECX_04;
    }
    if (*(uint **)(this_00 + 0x1d4) != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)(this_00 + 0x1d4));
      *(undefined4 *)(this_00 + 0x1d4) = 0;
      this_01 = extraout_ECX_05;
    }
    if (*(uint **)(this_00 + 0x1c8) != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)(this_00 + 0x1c8));
      *(undefined4 *)(this_00 + 0x1c8) = 0;
      this_01 = extraout_ECX_06;
    }
    if (*(uint **)(this_00 + 0x1c4) != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)(this_00 + 0x1c4));
      *(undefined4 *)(this_00 + 0x1c4) = 0;
      this_01 = extraout_ECX_07;
    }
    if (*(uint **)(this_00 + 0x1c0) != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)(this_00 + 0x1c0));
      *(undefined4 *)(this_00 + 0x1c0) = 0;
      this_01 = extraout_ECX_08;
    }
    if (*(uint **)(this_00 + 0x1bc) != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)(this_00 + 0x1bc));
      *(undefined4 *)(this_00 + 0x1bc) = 0;
      this_01 = extraout_ECX_09;
    }
    if (*(uint **)(this_00 + 0x1b8) != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)(this_00 + 0x1b8));
      *(undefined4 *)(this_00 + 0x1b8) = 0;
    }
    if (*(int *)(this_00 + 0x1ac) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x1ac));
    }
    if (*(int *)(this_00 + 0x1b0) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x1b0));
    }
    if (*(int *)(this_00 + 0x1b4) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x1b4));
    }
    pCVar5 = this_00 + 0x180;
    local_8 = 0xb;
    do {
      if (*(int *)pCVar5 != 0) {
        FUN_006ab060((undefined4 *)pCVar5);
      }
      pCVar5 = pCVar5 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(int **)(this_00 + 0x1d8) != (int *)0x0) {
      FUN_00714060(*(int **)(this_00 + 0x1d8));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_00 + 0x1d8));
      *(undefined4 *)(this_00 + 0x1d8) = 0;
    }
    if (*(int *)(this_00 + 0x25b) != 0) {
      FUN_0070b600((int *)(this_00 + 0x25b));
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x213,0,iVar2,&DAT_007a4ccc,
                             s_CPanelTy__DoneCPanel_007c2138);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x213);
  return;
}

