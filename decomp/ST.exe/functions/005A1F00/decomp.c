#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::AddMessage
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005A1FC7 MOV ECX,dword ptr [EBP + 0x8];
   first-use mask | 005A1FF1 MOV EAX,dword ptr [EBP + 0x8]; first-use mask | 005A2048 MOV EDX,dword
   ptr [EBP + 0x8]; first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:4: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005A1FF7 MOV ECX,dword ptr [EBP + 0x14];
   first-use mask */

void __thiscall
FSGSTy::AddMessage(FSGSTy *this,byte param_1,byte *param_2,char *param_3,byte param_4)

{
  byte bVar1;
  char cVar2;
  AnonShape_006B7830_769CA2DF *pAVar3;
  FSGSTy *this_00;
  short sVar5;
  int iVar6;
  uint *puVar6;
  DArrayTy *pDVar7;
  DArrayTy *pDVar8;
  int iVar10;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  InternalExceptionFrame local_5c;
  DArrayTy *local_18;
  FSGSTy *local_14;
  uint local_10;
  uint *local_c;
  char local_5;
  char *pcVar13_mg1;
  char *pcVar13_mg0;

  local_c = nullptr;
  if ((param_3 == nullptr) || (param_2 == nullptr)) {
    return;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x9ec,0,iVar6,
                                "%s","FSGSTy::AddMessage");
    if (iVar10 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x9ec);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar9 = -1;
  pbVar12 = param_2;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    bVar1 = *pbVar12;
    pbVar12 = pbVar12 + 1;
  } while (bVar1 != 0);
  if (iVar9 == -2) {
    uVar10 = 0xffffffff;
    pcVar13_mg0 = param_3;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar13_mg0;
      pcVar13_mg0 = pcVar13_mg0 + 1;
    } while (cVar2 != '\0');
    local_c = Library::DKW::LIB::MemAllocClear(~uVar10 + 4);
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    wsprintfA((LPSTR)local_c,"%s%1d%s",&DAT_007c6ff0,param_1,param_3);
  }
  else {
    uVar10 = 0xffffffff;
    pbVar12 = param_2;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar1 != 0);
    uVar11 = 0xffffffff;
    pcVar13_mg1 = param_3;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar13_mg1;
      pcVar13_mg1 = pcVar13_mg1 + 1;
    } while (cVar2 != '\0');
    local_c = Library::DKW::LIB::MemAllocClear(~uVar10 + ~uVar11 + 0xc);
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    pcVar13 = &CHAR_00h_00807e1d;
    pbVar12 = param_2;
    do {
      bVar1 = *pbVar12;
      bVar14 = bVar1 < (byte)*pcVar13;
      if (bVar1 != *pcVar13) {
LAB_005a1fbe:
        iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_005a1fc3;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar12[1];
      bVar14 = bVar1 < (byte)pcVar13[1];
      if (bVar1 != pcVar13[1]) goto LAB_005a1fbe;
      pbVar12 = pbVar12 + 2;
      pcVar13 = pcVar13 + 2;
    } while (bVar1 != 0);
    iVar9 = 0;
LAB_005a1fc3:
    if (iVar9 == 0) {
      wsprintfA((LPSTR)local_c,s__s2_s>__s_1d_s_007cc4a0,&DAT_007c6ff0,param_2,&DAT_007c6ff0,param_1
                ,param_3);
    }
    else {
      wsprintfA((LPSTR)local_c,s__s_1d_s>__s_1d_s_007cc48c,&DAT_007c6ff0,param_4,param_2,
                &DAT_007c6ff0,param_1,param_3);
    }
  }
  if (local_c != nullptr) {
    for (puVar6 = Library::MSVCRT::FUN_0072e560(local_c,'\n'); puVar6 != nullptr;
        puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
      *(undefined1 *)puVar6 = 0x20;
    }
    pDVar7 = Library::DKW::TBL::SArrayCreate(nullptr,1,10);
    local_18 = pDVar7;
    if (pDVar7 != nullptr) {
      local_10 = 0;
      local_5 = '\0';
      Library::DKW::TBL::FUN_006b5aa0(pDVar7,(char *)local_c);
      this_00 = local_14;
      pDVar8 = (DArrayTy *)
               ccFntTy::FormSarr(local_14->array_00BC[0xc].field_01F7,&pDVar7->flags,
                                 " ,.;:!?/\\()[]{}",0x1a6 - local_14->field_1B4C,0,0xffffffff
                                 ,1);
      if (this_00->array_00BC[0xc].field_01DF == '\x06') {
        this_00->field_002D = 0x26;
        FUN_006e6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
        local_10 = (uint)*(ushort *)&this_00->field_0x33;
        if ((int)(this_00->field_1E9E[2] - 0x19) <= (int)local_10) {
          local_5 = '\x01';
        }
      }
      if (pDVar8 != nullptr) {
        ccFntTy::SepColorStrInSarr
                  (this_00->array_00BC[0xc].field_01F7,(uint *)pDVar8,(uint *)pDVar8);
        pAVar3 = (AnonShape_006B7830_769CA2DF *)this_00->field_1E9E;
        iVar9 = pAVar3->field_0008 + pDVar8->elementSize;
        while (499 < iVar9) {
          FUN_006b7830(pAVar3,0);
          pAVar3 = (AnonShape_006B7830_769CA2DF *)this_00->field_1E9E;
          iVar9 = pAVar3->field_0008 + pDVar8->elementSize;
        }
        iVar9 = 0;
        if (0 < (int)pDVar8->elementSize) {
          if ((int)pDVar8->elementSize < 1) {
            pcVar13 = nullptr;
            goto LAB_005a2188;
          }
          do {
            pcVar13 = *(char **)(pDVar8->growCapacity + iVar9 * 4);
LAB_005a2188:
            Library::DKW::TBL::FUN_006b5aa0((DArrayTy *)this_00->field_1E9E,pcVar13);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)pDVar8->elementSize);
        }
        FUN_006b5570(pDVar8);
        pDVar7 = local_18;
      }
      FUN_006b5570(pDVar7);
      if (this_00->array_00BC[0xc].field_01DF == '\x06') {
        this_00->field_002D = 0x28;
        *(undefined2 *)&this_00->field_0x31 = 1;
        *(short *)&this_00->field_0x33 = (short)this_00->field_1E9E[2];
        FUN_006e6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
        this_00->field_002D = 0x22;
        *(undefined2 *)&this_00->field_0x31 = 0;
        if (local_5 == '\0') {
          sVar5 = (short)local_10;
        }
        else if ((int)this_00->field_1E9E[2] < 0x19) {
          sVar5 = 0;
        }
        else {
          sVar5 = (short)this_00->field_1E9E[2] + -0x19;
        }
        *(short *)&this_00->field_0x33 = sVar5;
        FUN_006e6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
      }
    }
    FreeAndNull(&local_c);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

