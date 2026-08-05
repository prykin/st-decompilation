#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::AddStr
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0052D3DB MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

void __thiscall PopUpTy::AddStr(PopUpTy *this,char *param_1,byte param_2)

{
  char cVar1;
  PopUpTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  DArrayTy *pDVar5;
  char *pcVar6;
  int uVar8;
  int iVar7;
  uint uVar9;
  InternalExceptionFrame local_58;
  PopUpTy *local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  uint *local_8;

  local_c = nullptr;
  local_10 = nullptr;
  local_8 = nullptr;
  if (param_1 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (iVar3 == 0) {
      uVar9 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_8 = Library::DKW::LIB::MemAllocClear(~uVar9 + 4);
      this_00 = local_14;
      pDVar4 = local_c;
      if (local_8 != nullptr) {
        wsprintfA((LPSTR)local_8,"%s%1d%s",&DAT_007c6ff0,param_2,param_1);
        pDVar4 = (DArrayTy *)ccFntTy::_TxtToSarr(this_00->field_0094,local_8);
        local_c = pDVar4;
        FreeAndNull(&local_8);
      }
      pDVar5 = local_10;
      if (pDVar4 != nullptr) {
        pDVar5 = (DArrayTy *)
                 ccFntTy::FormSarr(this_00->field_0094,&pDVar4->flags," ,.;:!?/\\()[]{}",
                                   (&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0,0xffffffff,1);
        local_10 = pDVar5;
        ccFntTy::SepColorStrInSarr(this_00->field_0094,(uint *)pDVar5,(uint *)pDVar5);
        FUN_006b5570(pDVar4);
      }
      if (pDVar5 != nullptr) {
        iVar3 = 0;
        if (0 < (int)pDVar5->elementSize) {
          if ((int)pDVar5->elementSize < 1) {
            pcVar6 = nullptr;
            goto LAB_0052d48d;
          }
          do {
            pcVar6 = *(char **)(pDVar5->growCapacity + iVar3 * 4);
LAB_0052d48d:
            Library::DKW::TBL::FUN_006b5aa0(this_00->field_0098,pcVar6);
            if ((byte)this_00->field_009C < DAT_00807346) {
              this_00->field_009C = this_00->field_009C + 1;
            }
            if (((byte)this_00->field_009C <= DAT_00807346) &&
               (OutStr(this_00,this_00->field_009C - 1), DAT_00807342 != 0)) {
              if ((int)((byte)this_00->field_009C - 1) < (int)this_00->field_0098[2]) {
                pcVar6 = *(char **)((this_00->field_0098[5] - 4) +
                                   (uint)(byte)this_00->field_009C * 4);
              }
              else {
                pcVar6 = nullptr;
              }
              uVar8 = FUN_00711110(this_00->field_0094,pcVar6);
              if ((int)*(uint *)(this_00->field_0090 + 2) <= uVar8) {
                uVar8 = *(uint *)(this_00->field_0090 + 2);
              }
              this_00->field_0018[(byte)this_00->field_009C + 0xe] = uVar8;
              FUN_006b2800(g_ddxContext_008075A8,this_00->field_0018[(byte)this_00->field_009C - 1],
                           uVar8,0x13);
              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,
                         this_00->field_0018[(byte)this_00->field_009C - 1],0xffffffff,0xd,
                         (uint)(byte)this_00->field_009C * 0x13 + 0xb);
              Library::DKW::DDX::FUN_006b3430
                        ((int *)g_ddxContext_008075A8,
                         this_00->field_0018[(byte)this_00->field_009C - 1]);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)pDVar5->elementSize);
        }
        FUN_006b5570(pDVar5);
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x61,0,iVar3,"%s",
                               "PopUpTy::AddStr");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x61);
  }
  return;
}

