
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
  char *pcVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
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
    iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar10 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_8 = Library::DKW::LIB::FUN_006aac10(~uVar10 + 4);
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
            pcVar6 = (char *)0x0;
            goto LAB_0052d48d;
          }
          do {
            pcVar6 = *(char **)(pAVar5->field_0014 + iVar3 * 4);
LAB_0052d48d:
            iVar7 = Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0098,pcVar6);
            if ((byte)this_00->field_009C < DAT_00807346) {
              this_00->field_009C = this_00->field_009C + 1;
            }
            if (((byte)this_00->field_009C <= DAT_00807346) &&
               (OutStr(this_00,CONCAT31((int3)((uint)iVar7 >> 8),this_00->field_009C - 1)),
               DAT_00807342 != 0)) {
              if ((int)((byte)this_00->field_009C - 1) < *(int *)(this_00->field_0098 + 8)) {
                puVar8 = *(uint **)(*(int *)(this_00->field_0098 + 0x14) + -4 +
                                   (uint)(byte)this_00->field_009C * 4);
              }
              else {
                puVar8 = (uint *)0x0;
              }
              uVar9 = FUN_00711110(this_00->field_0094,puVar8);
              uVar10 = this_00->field_0090->field_0004;
              if ((int)uVar10 <= (int)uVar9) {
                uVar9 = uVar10;
              }
              *(uint *)(&this_00->field_0x50 + (uint)(byte)this_00->field_009C * 4) = uVar9;
              FUN_006b2800((int)DAT_008075a8,
                           *(uint *)(&this_00->field_0x14 + (uint)(byte)this_00->field_009C * 4),
                           uVar9,0x13);
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
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x61,0,iVar3,&DAT_007a4ccc,
                               s_PopUpTy__AddStr_007c6fd0);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x61);
  }
  return;
}

