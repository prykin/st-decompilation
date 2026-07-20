
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::DoneCPanel */

void __thiscall CPanelTy::DoneCPanel(CPanelTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  CPanelTy *this_00;
  int iVar3;
  int iVar4;
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
  uint *puVar5;
  undefined4 *puVar6;
  ushort **ppuVar7;
  LPVOID *ppvVar8;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 == 0) {
    puVar1 = &local_c->field_0x18;
    local_c->field_0028 = 0x4404;
    FUN_006e6000(local_c,0xf,0,(undefined4 *)puVar1);
    ppvVar8 = (LPVOID *)&this_00->field_0x217;
    local_8 = 4;
    do {
      if (*ppvVar8 != (LPVOID)0x0) {
        FUN_006ab060(ppvVar8);
      }
      ppvVar8 = ppvVar8 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    puVar6 = (undefined4 *)puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    this_00->field_0028 = 0x14;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    if (this_00->field_095C != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_095C);
    }
    this_00->field_095C = 0;
    puVar5 = &this_00->field_0308;
    iVar3 = 2;
    do {
      if (*(uint *)((int)puVar5 + -10) != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*(uint *)((int)puVar5 + -10));
      }
      *(undefined4 *)((int)puVar5 + -10) = 0;
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar5);
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = &this_00->field_0310;
    iVar3 = 3;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar5);
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (this_00->field_09D0 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_09D0);
    }
    this_00->field_09D0 = 0;
    puVar5 = &this_00->field_09A4;
    iVar3 = 7;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = &this_00->field_09C0;
    iVar3 = 2;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = &this_00->field_0A15;
    iVar3 = 6;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = &this_00->field_0B1F;
    iVar3 = 6;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (this_00->field_0B37 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0B37);
    }
    this_00->field_0B37 = 0;
    puVar5 = &this_00->field_0960;
    iVar3 = 4;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (this_00->field_0970 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0970);
    }
    puVar5 = &this_00->field_0148;
    this_00->field_0970 = 0;
    g_cPanel_00801688 = (CPanelTy *)0x0;
    iVar3 = 0xb;
    do {
      if (-1 < (int)*puVar5) {
        FUN_006b3bb0(DAT_008075a8,*puVar5);
      }
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (-1 < (int)this_00->field_0174) {
      FUN_006b3bb0(DAT_008075a8,this_00->field_0174);
    }
    this_00->field_0174 = 0xffffffff;
    if (-1 < (int)this_00->field_0178) {
      FUN_006b3bb0(DAT_008075a8,this_00->field_0178);
    }
    this_00->field_0178 = 0xffffffff;
    if (-1 < (int)this_00->field_017C) {
      FUN_006b3bb0(DAT_008075a8,this_00->field_017C);
    }
    this_00->field_017C = 0xffffffff;
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0B43);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0B47);
    ppuVar7 = &this_00->field_09D9;
    iVar3 = 0xf;
    do {
      cMf32::RecMemFree(DAT_00806790,(uint *)ppuVar7);
      ppuVar7 = ppuVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((DAT_00807598 != (void *)0x0) && ((int *)this_00->field_0DB3 != (int *)0x0)) {
      FUN_006e6580(DAT_00807598,(int *)this_00->field_0DB3);
    }
    this_00->field_0DB3 = 0;
    if (DAT_00807598 != (void *)0x0) {
      FUN_006e6500(DAT_00807598,(undefined4 *)0x0);
    }
    ppvVar8 = (LPVOID *)&this_00->field_0227;
    iVar3 = 4;
    do {
      if (*ppvVar8 != (LPVOID)0x0) {
        FUN_006ab060(ppvVar8);
      }
      ppvVar8 = ppvVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0994);
    puVar6 = &this_00->field_0DBF;
    iVar3 = 2;
    do {
      *(undefined4 *)((int)puVar6 + -0x3f7) = 0;
      *puVar6 = 0;
      cMf32::RecMemFree(g_cMf32_00806780,puVar6 + -2);
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    ppuVar7 = &this_00->field_0974;
    iVar3 = 8;
    do {
      cMf32::RecMemFree(DAT_00806790,(uint *)ppuVar7);
      ppuVar7 = ppuVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0954);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0958);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_0286);
    cMf32::RecMemFree(DAT_00806790,(uint *)&this_00->field_028A);
    this_00->field_077C = 0;
    this_00->field_02DE = 0;
    this_00->field_02DA = 0;
    this_00->field_0B1B = 0;
    this_00->field_09D5 = 0;
    this_00->field_0B17 = 0;
    this_00->field_02D6 = 0;
    this_00->field_02D2 = 0;
    this_00->field_02CE = 0;
    this_00->field_02CA = 0;
    this_00->field_02C6 = 0;
    this_00->field_02C2 = 0;
    this_00->field_02BE = 0;
    this_00->field_02BA = 0;
    this_00->field_02B2 = 0;
    this_00->field_02B6 = 0;
    this_00->field_02A2 = 0;
    this_00->field_029E = 0;
    this_00->field_029A = 0;
    this_00->field_0296 = 0;
    this_00->field_0292 = 0;
    this_00->field_028E = 0;
    this_01 = extraout_ECX;
    if ((byte *)this_00->field_024B != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_024B);
      this_01 = extraout_ECX_00;
    }
    this_00->field_024B = 0;
    if ((byte *)this_00->field_0B4B != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_0B4B);
      this_01 = extraout_ECX_01;
    }
    this_00->field_0B4B = 0;
    if ((byte *)this_00->field_0B95 != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_0B95);
      this_01 = extraout_ECX_02;
    }
    this_00->field_0B95 = 0;
    if (this_00->field_01CC != (ccFntTy *)0x0) {
      ccFntTy::operator(this_01,(uint *)this_00->field_01CC);
      this_00->field_01CC = (ccFntTy *)0x0;
      this_01 = extraout_ECX_03;
    }
    if (this_00->field_01D0 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_01,(uint *)this_00->field_01D0);
      this_00->field_01D0 = (ccFntTy *)0x0;
      this_01 = extraout_ECX_04;
    }
    if (this_00->field_01D4 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_01,(uint *)this_00->field_01D4);
      this_00->field_01D4 = (ccFntTy *)0x0;
      this_01 = extraout_ECX_05;
    }
    if (this_00->field_01C8 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_01,(uint *)this_00->field_01C8);
      this_00->field_01C8 = (ccFntTy *)0x0;
      this_01 = extraout_ECX_06;
    }
    if (this_00->field_01C4 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_01,(uint *)this_00->field_01C4);
      this_00->field_01C4 = (ccFntTy *)0x0;
      this_01 = extraout_ECX_07;
    }
    if ((uint *)this_00->field_01C0 != (uint *)0x0) {
      ccFntTy::operator(this_01,(uint *)this_00->field_01C0);
      this_00->field_01C0 = 0;
      this_01 = extraout_ECX_08;
    }
    if (this_00->field_01BC != (ccFntTy *)0x0) {
      ccFntTy::operator(this_01,(uint *)this_00->field_01BC);
      this_00->field_01BC = (ccFntTy *)0x0;
      this_01 = extraout_ECX_09;
    }
    if (this_00->field_01B8 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_01,(uint *)this_00->field_01B8);
      this_00->field_01B8 = (ccFntTy *)0x0;
    }
    if (this_00->field_01AC != 0) {
      FUN_006ab060((LPVOID *)&this_00->field_01AC);
    }
    if (this_00->field_01B0 != 0) {
      FUN_006ab060((LPVOID *)&this_00->field_01B0);
    }
    if (this_00->field_01B4 != 0) {
      FUN_006ab060((LPVOID *)&this_00->field_01B4);
    }
    ppvVar8 = (LPVOID *)&this_00->field_0180;
    local_8 = 0xb;
    do {
      if (*ppvVar8 != (LPVOID)0x0) {
        FUN_006ab060(ppvVar8);
      }
      ppvVar8 = ppvVar8 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if ((int *)this_00->field_01D8 != (int *)0x0) {
      FUN_00714060((int *)this_00->field_01D8);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00->field_01D8);
      this_00->field_01D8 = 0;
    }
    if (this_00->field_025B != 0) {
      FUN_0070b600(&this_00->field_025B);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x213,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__DoneCPanel_007c2138);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x213);
  return;
}

