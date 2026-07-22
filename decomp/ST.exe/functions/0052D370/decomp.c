#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::AddStr */

void __thiscall PopUpTy::AddStr(PopUpTy *this,char *param_1,uint param_2)

{
  char cVar1;
  code *pcVar2;
  PopUpTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  DArrayTy *pDVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  InternalExceptionFrame local_58;
  PopUpTy *local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  uint *local_8;

  local_c = (DArrayTy *)0x0;
  local_10 = (DArrayTy *)0x0;
  local_8 = (uint *)0x0;
  if (param_1 != (char *)0x0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (iVar3 == 0) {
      uVar8 = 0xffffffff;
      pcVar7 = param_1;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_8 = Library::DKW::LIB::FUN_006aac10(~uVar8 + 4);
      this_00 = local_14;
      pDVar4 = local_c;
      if (local_8 != (uint *)0x0) {
        wsprintfA((LPSTR)local_8,"%s%1d%s",&DAT_007c6ff0,param_2 & 0xff,param_1);
        pDVar4 = (DArrayTy *)ccFntTy::_TxtToSarr(this_00->field_0094,local_8);
        local_c = pDVar4;
        FreeAndNull(&local_8);
      }
      pDVar5 = local_10;
      if (pDVar4 != (DArrayTy *)0x0) {
        pDVar5 = (DArrayTy *)
                 ccFntTy::FormSarr(this_00->field_0094,&pDVar4->flags," ,.;:!?/\\()[]{}",
                                   (&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0,0xffffffff,1);
        local_10 = pDVar5;
        ccFntTy::SepColorStrInSarr(this_00->field_0094,(uint *)pDVar5,(uint *)pDVar5);
        FUN_006b5570(pDVar4);
      }
      if (pDVar5 != (DArrayTy *)0x0) {
        iVar3 = 0;
        if (0 < (int)pDVar5->elementSize) {
          if ((int)pDVar5->elementSize < 1) {
            pcVar7 = (char *)0x0;
            goto LAB_0052d48d;
          }
          do {
            pcVar7 = *(char **)(pDVar5->growCapacity + iVar3 * 4);
LAB_0052d48d:
            iVar6 = Library::DKW::TBL::FUN_006b5aa0(this_00->field_0098,pcVar7);
            if ((byte)this_00->field_009C < DAT_00807346) {
              this_00->field_009C = this_00->field_009C + 1;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if (((byte)this_00->field_009C <= DAT_00807346) &&
               (OutStr(this_00,CONCAT31((int3)((uint)iVar6 >> 8),this_00->field_009C - 1)),
               DAT_00807342 != 0)) {
              if ((int)((byte)this_00->field_009C - 1) < (int)this_00->field_0098[2]) {
                pcVar7 = *(char **)((this_00->field_0098[5] - 4) +
                                   (uint)(byte)this_00->field_009C * 4);
              }
              else {
                pcVar7 = (char *)0x0;
              }
              uVar8 = FUN_00711110(this_00->field_0094,pcVar7);
              if ((int)*(uint *)(this_00->field_0090 + 2) <= (int)uVar8) {
                uVar8 = *(uint *)(this_00->field_0090 + 2);
              }
              *(uint *)(&this_00->field_0x50 + (uint)(byte)this_00->field_009C * 4) = uVar8;
              FUN_006b2800(PTR_008075a8,
                           *(uint *)(&this_00->field_0x14 + (uint)(byte)this_00->field_009C * 4),
                           uVar8,0x13);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              Library::DKW::DDX::FUN_006b3640
                        ((int *)PTR_008075a8,
                         *(uint *)(&this_00->field_0x14 + (uint)(byte)this_00->field_009C * 4),
                         0xffffffff,0xd,(uint)(byte)this_00->field_009C * 0x13 + 0xb);
              Library::DKW::DDX::FUN_006b3430
                        ((int *)PTR_008075a8,
                         *(uint *)(&this_00->field_0x14 + (uint)(byte)this_00->field_009C * 4));
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
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x61,0,iVar3,"%s",
                               "PopUpTy::AddStr");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x61);
  }
  return;
}

