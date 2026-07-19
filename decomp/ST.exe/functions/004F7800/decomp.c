
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::DoneCPanel */

void __thiscall CPanelTy::DoneCPanel(CPanelTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
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
  undefined4 *puVar6;
  uint *puVar7;
  int *piVar8;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar4 == 0) {
    puVar1 = &local_c->field_0x18;
    local_c->field_0028 = 0x4404;
    FUN_006e6000(local_c,0xf,0,(undefined4 *)puVar1);
    piVar8 = (int *)&this_00->field_0x217;
    local_8 = 4;
    do {
      if (*piVar8 != 0) {
        FUN_006ab060(piVar8);
      }
      piVar8 = piVar8 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    puVar6 = (undefined4 *)puVar1;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    this_00->field_0028 = 0x14;
    uVar3 = *(undefined2 *)&this_00->field_0xa;
    *(undefined2 *)&this_00->field_0x2c = *(undefined2 *)&this_00->field_0x8;
    this_00->field_002E = uVar3;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    if (*(uint *)&this_00->field_0x95c != 0) {
      FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00->field_0x95c);
    }
    *(undefined4 *)&this_00->field_0x95c = 0;
    puVar7 = (uint *)&this_00->field_0x308;
    iVar4 = 2;
    do {
      if (*(uint *)((int)puVar7 + -10) != 0) {
        FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)((int)puVar7 + -10));
      }
      *(undefined4 *)((int)puVar7 + -10) = 0;
      if (*puVar7 != 0) {
        FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar7);
      }
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar7 = (uint *)&this_00->field_0x310;
    iVar4 = 3;
    do {
      if (*puVar7 != 0) {
        FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar7);
      }
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*(uint *)&this_00->field_0x9d0 != 0) {
      FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00->field_0x9d0);
    }
    *(undefined4 *)&this_00->field_0x9d0 = 0;
    puVar7 = (uint *)&this_00->field_0x9a4;
    iVar4 = 7;
    do {
      if (*puVar7 != 0) {
        FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar7 = (uint *)&this_00->field_0x9c0;
    iVar4 = 2;
    do {
      if (*puVar7 != 0) {
        FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar7 = (uint *)&this_00->field_0xa15;
    iVar4 = 6;
    do {
      if (*puVar7 != 0) {
        FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar7 = (uint *)&this_00->field_0xb1f;
    iVar4 = 6;
    do {
      if (*puVar7 != 0) {
        FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*(uint *)&this_00->field_0xb37 != 0) {
      FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00->field_0xb37);
    }
    *(undefined4 *)&this_00->field_0xb37 = 0;
    puVar7 = (uint *)&this_00->field_0x960;
    iVar4 = 4;
    do {
      if (*puVar7 != 0) {
        FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*(uint *)&this_00->field_0x970 != 0) {
      FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00->field_0x970);
    }
    puVar7 = (uint *)&this_00->field_0x148;
    *(undefined4 *)&this_00->field_0x970 = 0;
    DAT_00801688 = 0;
    iVar4 = 0xb;
    do {
      if (-1 < (int)*puVar7) {
        FUN_006b3bb0(DAT_008075a8,*puVar7);
      }
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (-1 < (int)*(uint *)&this_00->field_0x174) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)&this_00->field_0x174);
    }
    *(undefined4 *)&this_00->field_0x174 = 0xffffffff;
    if (-1 < (int)*(uint *)&this_00->field_0x178) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)&this_00->field_0x178);
    }
    *(undefined4 *)&this_00->field_0x178 = 0xffffffff;
    if (-1 < (int)*(uint *)&this_00->field_0x17c) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)&this_00->field_0x17c);
    }
    *(undefined4 *)&this_00->field_0x17c = 0xffffffff;
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0xb43);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0xb47);
    puVar7 = (uint *)&this_00->field_0x9d9;
    iVar4 = 0xf;
    do {
      cMf32::RecMemFree(DAT_00806790,puVar7);
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if ((DAT_00807598 != (void *)0x0) && (*(int **)&this_00->field_0xdb3 != (int *)0x0)) {
      FUN_006e6580(DAT_00807598,*(int **)&this_00->field_0xdb3);
    }
    *(undefined4 *)&this_00->field_0xdb3 = 0;
    if (DAT_00807598 != (void *)0x0) {
      FUN_006e6500(DAT_00807598,(undefined4 *)0x0);
    }
    piVar8 = (int *)&this_00->field_0x227;
    iVar4 = 4;
    do {
      if (*piVar8 != 0) {
        FUN_006ab060(piVar8);
      }
      piVar8 = piVar8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0x994);
    puVar6 = (undefined4 *)&this_00->field_0xdbf;
    iVar4 = 2;
    do {
      *(undefined4 *)((int)puVar6 + -0x3f7) = 0;
      *puVar6 = 0;
      cMf32::RecMemFree(DAT_00806780,puVar6 + -2);
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar7 = (uint *)&this_00->field_0x974;
    iVar4 = 8;
    do {
      cMf32::RecMemFree(DAT_00806790,puVar7);
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0x954);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0x958);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0x286);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0x28a);
    *(undefined4 *)&this_00->field_0x77c = 0;
    *(undefined4 *)&this_00->field_0x2de = 0;
    *(undefined4 *)&this_00->field_0x2da = 0;
    *(undefined4 *)&this_00->field_0xb1b = 0;
    *(undefined4 *)&this_00->field_0x9d5 = 0;
    *(undefined4 *)&this_00->field_0xb17 = 0;
    *(undefined4 *)&this_00->field_0x2d6 = 0;
    *(undefined4 *)&this_00->field_0x2d2 = 0;
    *(undefined4 *)&this_00->field_0x2ce = 0;
    *(undefined4 *)&this_00->field_0x2ca = 0;
    *(undefined4 *)&this_00->field_0x2c6 = 0;
    *(undefined4 *)&this_00->field_0x2c2 = 0;
    *(undefined4 *)&this_00->field_0x2be = 0;
    *(undefined4 *)&this_00->field_0x2ba = 0;
    *(undefined4 *)&this_00->field_0x2b2 = 0;
    *(undefined4 *)&this_00->field_0x2b6 = 0;
    *(undefined4 *)&this_00->field_0x2a2 = 0;
    *(undefined4 *)&this_00->field_0x29e = 0;
    *(undefined4 *)&this_00->field_0x29a = 0;
    *(undefined4 *)&this_00->field_0x296 = 0;
    *(undefined4 *)&this_00->field_0x292 = 0;
    *(undefined4 *)&this_00->field_0x28e = 0;
    this_01 = extraout_ECX;
    if ((byte *)this_00->field_024B != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_024B);
      this_01 = extraout_ECX_00;
    }
    this_00->field_024B = 0;
    if (*(byte **)&this_00->field_0xb4b != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0xb4b);
      this_01 = extraout_ECX_01;
    }
    *(undefined4 *)&this_00->field_0xb4b = 0;
    if (*(byte **)&this_00->field_0xb95 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0xb95);
      this_01 = extraout_ECX_02;
    }
    *(undefined4 *)&this_00->field_0xb95 = 0;
    if (*(uint **)&this_00->field_0x1cc != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&this_00->field_0x1cc);
      *(undefined4 *)&this_00->field_0x1cc = 0;
      this_01 = extraout_ECX_03;
    }
    if (*(uint **)&this_00->field_0x1d0 != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&this_00->field_0x1d0);
      *(undefined4 *)&this_00->field_0x1d0 = 0;
      this_01 = extraout_ECX_04;
    }
    if (*(uint **)&this_00->field_0x1d4 != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&this_00->field_0x1d4);
      *(undefined4 *)&this_00->field_0x1d4 = 0;
      this_01 = extraout_ECX_05;
    }
    if (*(uint **)&this_00->field_0x1c8 != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&this_00->field_0x1c8);
      *(undefined4 *)&this_00->field_0x1c8 = 0;
      this_01 = extraout_ECX_06;
    }
    if (*(uint **)&this_00->field_0x1c4 != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&this_00->field_0x1c4);
      *(undefined4 *)&this_00->field_0x1c4 = 0;
      this_01 = extraout_ECX_07;
    }
    if (*(uint **)&this_00->field_0x1c0 != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&this_00->field_0x1c0);
      *(undefined4 *)&this_00->field_0x1c0 = 0;
      this_01 = extraout_ECX_08;
    }
    if (*(uint **)&this_00->field_0x1bc != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&this_00->field_0x1bc);
      *(undefined4 *)&this_00->field_0x1bc = 0;
      this_01 = extraout_ECX_09;
    }
    if (*(uint **)&this_00->field_0x1b8 != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&this_00->field_0x1b8);
      *(undefined4 *)&this_00->field_0x1b8 = 0;
    }
    if (*(int *)&this_00->field_0x1ac != 0) {
      FUN_006ab060((undefined4 *)&this_00->field_0x1ac);
    }
    if (*(int *)&this_00->field_0x1b0 != 0) {
      FUN_006ab060((undefined4 *)&this_00->field_0x1b0);
    }
    if (*(int *)&this_00->field_0x1b4 != 0) {
      FUN_006ab060((undefined4 *)&this_00->field_0x1b4);
    }
    piVar8 = (int *)&this_00->field_0x180;
    local_8 = 0xb;
    do {
      if (*piVar8 != 0) {
        FUN_006ab060(piVar8);
      }
      piVar8 = piVar8 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(int **)&this_00->field_0x1d8 != (int *)0x0) {
      FUN_00714060(*(int **)&this_00->field_0x1d8);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00->field_0x1d8);
      *(undefined4 *)&this_00->field_0x1d8 = 0;
    }
    if (*(int *)&this_00->field_0x25b != 0) {
      FUN_0070b600((int *)&this_00->field_0x25b);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x213,0,iVar4,&DAT_007a4ccc,
                             s_CPanelTy__DoneCPanel_007c2138);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x213);
  return;
}

