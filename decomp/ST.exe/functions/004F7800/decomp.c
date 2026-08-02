#include "../../pseudocode_runtime.h"


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
  ushort **ppuVar6;
  uint *puVar7;
  void **ppvVar8;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 == 0) {
    puVar1 = &local_c->field_0x18;
    local_c->field_0028 = 0x4404;
    FUN_006e6000(local_c,0xf,0,(undefined4 *)puVar1);
    ppvVar8 = (void **)&this_00->field_0x217;
    local_8 = 4;
    do {
      if (*ppvVar8 != nullptr) {
        FreeAndNull(ppvVar8);
      }
      ppvVar8 = ppvVar8 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x14;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    if (this_00->field_095C != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_095C);
    }
    this_00->field_095C = 0;
    puVar7 = this_00->field_0308;
    iVar3 = 2;
    do {
      if (*(uint *)((int)puVar7 + -10) != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*(uint *)((int)puVar7 + -10));
      }
      *(undefined4 *)((int)puVar7 + -10) = 0;
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
      }
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar7 = this_00->field_0310;
    iVar3 = 3;
    do {
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
      }
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (this_00->field_09D0 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_09D0);
    }
    this_00->field_09D0 = 0;
    puVar7 = this_00->field_09A4;
    iVar3 = 7;
    do {
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar7 = this_00->field_09C0;
    iVar3 = 2;
    do {
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar7 = this_00->field_0A15;
    iVar3 = 6;
    do {
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar7 = this_00->field_0B1F;
    iVar3 = 6;
    do {
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (this_00->field_0B37 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0B37);
    }
    this_00->field_0B37 = 0;
    puVar7 = this_00->field_0960;
    iVar3 = 4;
    do {
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (this_00->field_0970 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0970);
    }
    ppuVar6 = this_00->field_0148;
    this_00->field_0970 = 0;
    g_cPanel_00801688 = nullptr;
    iVar3 = 0xb;
    do {
      if (-1 < (int)*ppuVar6) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,(uint)*ppuVar6);
      }
      *ppuVar6 = (ushort *)0xffffffff;
      ppuVar6 = ppuVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (-1 < (int)this_00->field_0174) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,this_00->field_0174);
    }
    this_00->field_0174 = 0xffffffff;
    if (-1 < (int)this_00->field_0178) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,this_00->field_0178);
    }
    this_00->field_0178 = 0xffffffff;
    if (-1 < (int)this_00->field_017C) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,this_00->field_017C);
    }
    this_00->field_017C = 0xffffffff;
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&this_00->field_0B43);
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&this_00->field_0B47);
    puVar7 = this_00->field_09D9;
    iVar3 = 0xf;
    do {
      cMf32::RecMemFree(g_cMf32_00806790,puVar7);
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((g_sT3DSMAPContext_00807598 != nullptr) &&
       (this_00->field_0DB3 != nullptr)) {
      FUN_006e6580(g_sT3DSMAPContext_00807598,this_00->field_0DB3);
    }
    this_00->field_0DB3 = nullptr;
    if (g_sT3DSMAPContext_00807598 != nullptr) {
      ST3DSMAPContext::sub_006E6500(g_sT3DSMAPContext_00807598,nullptr);
    }
    puVar7 = this_00->field_0227;
    iVar3 = 4;
    do {
      if (*puVar7 != 0) {
        FreeAndNull((void **)puVar7);
      }
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&this_00->field_0994);
    puVar7 = this_00->field_0DBF;
    iVar3 = 2;
    do {
      *(undefined4 *)((int)puVar7 + -0x3f7) = 0;
      *puVar7 = 0;
      cMf32::RecMemFree(g_cMf32_00806780,puVar7 + -2);
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar7 = this_00->field_0974;
    iVar3 = 8;
    do {
      cMf32::RecMemFree(g_cMf32_00806790,puVar7);
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&this_00->field_0954);
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&this_00->field_0958);
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&this_00->field_0286);
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&this_00->field_028A);
    this_00->field_077C = nullptr;
    this_00->field_02DE = nullptr;
    this_00->field_02DA = nullptr;
    this_00->field_0B1B = nullptr;
    this_00->field_09D5 = nullptr;
    this_00->field_0B17 = nullptr;
    this_00->field_02D6 = nullptr;
    this_00->field_02D2 = nullptr;
    this_00->field_02CE = nullptr;
    this_00->field_02CA = nullptr;
    this_00->field_02C6 = nullptr;
    this_00->field_02C2 = nullptr;
    this_00->field_02BE = nullptr;
    this_00->field_02BA = nullptr;
    this_00->field_02B2 = nullptr;
    this_00->field_02B6 = nullptr;
    this_00->field_02A2 = nullptr;
    this_00->field_029E = nullptr;
    this_00->field_029A = nullptr;
    this_00->field_0296 = nullptr;
    this_00->field_0292 = nullptr;
    this_00->field_028E = nullptr;
    if (this_00->field_024B != nullptr) {
      DArrayDestroy(this_00->field_024B);
    }
    this_00->field_024B = nullptr;
    if (this_00->field_0B4B != nullptr) {
      DArrayDestroy(this_00->field_0B4B);
    }
    this_00->field_0B4B = nullptr;
    if (this_00->field_0B95 != nullptr) {
      DArrayDestroy(this_00->field_0B95);
    }
    this_00->field_0B95 = nullptr;
    if (this_00->field_01CC != nullptr) {
      ccFntTy::operator_delete((uint *)this_00->field_01CC);
      this_00->field_01CC = nullptr;
    }
    if (this_00->field_01D0 != nullptr) {
      ccFntTy::operator_delete((uint *)this_00->field_01D0);
      this_00->field_01D0 = nullptr;
    }
    if (this_00->field_01D4 != nullptr) {
      ccFntTy::operator_delete((uint *)this_00->field_01D4);
      this_00->field_01D4 = nullptr;
    }
    if (this_00->field_01C8 != nullptr) {
      ccFntTy::operator_delete((uint *)this_00->field_01C8);
      this_00->field_01C8 = nullptr;
    }
    if (this_00->field_01C4 != nullptr) {
      ccFntTy::operator_delete((uint *)this_00->field_01C4);
      this_00->field_01C4 = nullptr;
    }
    if (this_00->field_01C0 != nullptr) {
      ccFntTy::operator_delete(this_00->field_01C0);
      this_00->field_01C0 = nullptr;
    }
    if (this_00->field_01BC != nullptr) {
      ccFntTy::operator_delete((uint *)this_00->field_01BC);
      this_00->field_01BC = nullptr;
    }
    if (this_00->field_01B8 != nullptr) {
      ccFntTy::operator_delete((uint *)this_00->field_01B8);
      this_00->field_01B8 = nullptr;
    }
    if (this_00->field_01AC != nullptr) {
      FreeAndNull(&this_00->field_01AC);
    }
    if (this_00->field_01B0 != nullptr) {
      FreeAndNull(&this_00->field_01B0);
    }
    if (this_00->field_01B4 != nullptr) {
      FreeAndNull(&this_00->field_01B4);
    }
    ppvVar8 = &this_00->field_0180;
    local_8 = 0xb;
    do {
      if (*ppvVar8 != nullptr) {
        FreeAndNull(ppvVar8);
      }
      ppvVar8 = ppvVar8 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (this_00->field_01D8 != nullptr) {
      FUN_00714060((int *)this_00->field_01D8);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_01D8);
      this_00->field_01D8 = nullptr;
    }
    if (this_00->field_025B != nullptr) {
      FUN_0070b600((int *)&this_00->field_025B);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x213,0,iVar3,"%s",
                             "CPanelTy::DoneCPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x213);
  return;
}

