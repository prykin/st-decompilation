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
  AnonShape_006B5570_4D68B99C *pAVar4;
  AnonShape_006B5570_4D68B99C *pAVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_58;
  PopUpTy *local_14;
  AnonShape_006B5570_4D68B99C *local_10;
  AnonShape_006B5570_4D68B99C *local_c;
  uint *local_8;

  local_c = (AnonShape_006B5570_4D68B99C *)0x0;
  local_10 = (AnonShape_006B5570_4D68B99C *)0x0;
  local_8 = (uint *)0x0;
  if (param_1 != (char *)0x0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (iVar3 == 0) {
      uVar9 = 0xffffffff;
      pcVar7 = param_1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_8 = Library::DKW::LIB::FUN_006aac10(~uVar9 + 4);
      this_00 = local_14;
      pAVar4 = local_c;
      if (local_8 != (uint *)0x0) {
        wsprintfA((LPSTR)local_8,s__s_1d_s_007c6fe4,&DAT_007c6ff0,param_2 & 0xff,param_1);
        pAVar4 = (AnonShape_006B5570_4D68B99C *)ccFntTy::_TxtToSarr(this_00->field_0094,local_8);
        local_c = pAVar4;
        FreeAndNull(&local_8);
      }
      pAVar5 = local_10;
      if (pAVar4 != (AnonShape_006B5570_4D68B99C *)0x0) {
        pAVar5 = (AnonShape_006B5570_4D68B99C *)
                 ccFntTy::FormSarr(this_00->field_0094,(uint *)pAVar4,s________________007c21d8,
                                   (&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0,0xffffffff,1);
        local_10 = pAVar5;
        ccFntTy::SepColorStrInSarr(this_00->field_0094,(uint *)pAVar5,(uint *)pAVar5);
        FUN_006b5570(pAVar4);
      }
      if (pAVar5 != (AnonShape_006B5570_4D68B99C *)0x0) {
        iVar3 = 0;
        if (0 < (int)pAVar5->field_0008) {
          if ((int)pAVar5->field_0008 < 1) {
            pcVar7 = (char *)0x0;
            goto LAB_0052d48d;
          }
          do {
            pcVar7 = *(char **)(pAVar5->field_0014 + iVar3 * 4);
LAB_0052d48d:
            iVar6 = Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0098,pcVar7);
            if ((byte)this_00->field_009C < DAT_00807346) {
              this_00->field_009C = this_00->field_009C + 1;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if (((byte)this_00->field_009C <= DAT_00807346) &&
               (OutStr(this_00,CONCAT31((int3)((uint)iVar6 >> 8),this_00->field_009C - 1)),
               DAT_00807342 != 0)) {
              if ((int)((byte)this_00->field_009C - 1) < *(int *)(this_00->field_0098 + 8)) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                pcVar7 = *(char **)(*(int *)(this_00->field_0098 + 0x14) + -4 +
                                   (uint)(byte)this_00->field_009C * 4);
              }
              else {
                pcVar7 = (char *)0x0;
              }
              uVar8 = FUN_00711110(this_00->field_0094,pcVar7);
              uVar9 = this_00->field_0090->field_0004;
              if ((int)uVar9 <= (int)uVar8) {
                uVar8 = uVar9;
              }
              *(uint *)(&this_00->field_0x50 + (uint)(byte)this_00->field_009C * 4) = uVar8;
              FUN_006b2800((int)DAT_008075a8,
                           *(uint *)(&this_00->field_0x14 + (uint)(byte)this_00->field_009C * 4),
                           uVar8,0x13);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              Library::DKW::DDX::FUN_006b3640
                        (DAT_008075a8,
                         *(uint *)(&this_00->field_0x14 + (uint)(byte)this_00->field_009C * 4),
                         0xffffffff,0xd,(uint)(byte)this_00->field_009C * 0x13 + 0xb);
              Library::DKW::DDX::FUN_006b3430
                        (DAT_008075a8,
                         *(uint *)(&this_00->field_0x14 + (uint)(byte)this_00->field_009C * 4));
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)pAVar5->field_0008);
        }
        FUN_006b5570(pAVar5);
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x61,0,iVar3,&DAT_007a4ccc,
                               s_PopUpTy__AddStr_007c6fd0);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x61);
  }
  return;
}

