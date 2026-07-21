#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintLadder */

void __thiscall FSGSTy::PaintLadder(FSGSTy *this,int param_1)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  StartServTy *pSVar3;
  int iVar4;
  uint uVar5;
  tm *ptVar6;
  int iVar7;
  StartServTy *this_00;
  uint uVar8;
  StartServTy *this_01;
  int *piVar9;
  uint *puVar10;
  InternalExceptionFrame local_8c;
  StartServTy local_48 [52];
  int local_14;
  FSGSTy *local_10;
  uint local_c;
  StartServTy *local_8;

  local_14 = this->field_1EDB;
  if (((this->field_1E8E != 0) && (this->field_1E92 != 0)) && (local_14 != 0)) {
    local_8c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_8c;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
    if (iVar4 == 0) {
      FUN_006b5f80(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
      pFVar2 = local_10;
      PutDDXClip(0x18a,0x90,0x168,0x32,100,(byte *)0x19,'\x01',(BITMAPINFO *)local_10->field_1E92);
      wsprintfA((LPSTR)local_48,s__6d____6d_007cc2a4,pFVar2->field_1EDF,
                pFVar2->field_1EE3 + -1 + pFVar2->field_1EDF);
      StartServTy::WrTextDDX
                (local_48,0,0x18b,0x91,0x62,0x17,(uint *)local_48,0xffffffff,0xffffffff,
                 (ccFntTy *)pFVar2->field_1A7F,0);
      PutDDXClip(0x22,0xd6,0,0x78,0x2e1,(byte *)0xfd,'\x01',(BITMAPINFO *)pFVar2->field_1E92);
      if (pFVar2->field_1EE3 != 0) {
        local_8 = (StartServTy *)0xdb;
        piVar9 = (int *)(local_14 + 0xc);
        local_c = 0;
        do {
          wsprintfA((LPSTR)local_48,&DAT_007c28fc,pFVar2->field_1EDF + local_c);
          StartServTy::WrTextDDX
                    (local_48,0,0x23,(int)local_8,0x2b,0x10,(uint *)local_48,0xffffffff,0xffffffff,
                     (ccFntTy *)pFVar2->field_1A7F,0);
          StartServTy::WrTextDDX
                    (local_8,0,0x50,(int)local_8,0xe9,0x10,(uint *)(piVar9 + 2),0,0xffffffff,
                     pFVar2->field_1A73,2);
          iVar4 = -1;
          puVar10 = (uint *)(piVar9 + 2);
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            uVar5 = *puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
          } while ((char)uVar5 != '\0');
          if (iVar4 != -2) {
            wsprintfA((LPSTR)local_48,&DAT_007c28fc,piVar9[1]);
            pSVar3 = local_8;
            StartServTy::WrTextDDX
                      (pFVar2->field_1A7F,0,0x13b,(int)local_8,0x44,0x10,(uint *)local_48,0xffffffff
                       ,0xffffffff,(ccFntTy *)pFVar2->field_1A7F,0);
            wsprintfA((LPSTR)local_48,s__6d____6d____6d_007cc290,piVar9[-2],piVar9[-1],*piVar9);
            StartServTy::WrTextDDX
                      (pFVar2->field_1A7F,0,0x181,(int)pSVar3,0x8f,0x10,(uint *)local_48,0xffffffff,
                       0xffffffff,(ccFntTy *)pFVar2->field_1A7F,0);
            wsprintfA((LPSTR)local_48,&DAT_007c28fc,*piVar9 + piVar9[-1] + piVar9[-2]);
            StartServTy::WrTextDDX
                      (this_00,0,0x212,(int)pSVar3,0x44,0x10,(uint *)local_48,0xffffffff,0xffffffff,
                       (ccFntTy *)pFVar2->field_1A7F,0);
            uVar8 = *piVar9 + piVar9[-2] + piVar9[-1];
            uVar5 = 0;
            if (uVar8 != 0) {
              uVar5 = (uint)(piVar9[-2] * 100) / uVar8;
            }
            wsprintfA((LPSTR)local_48,&DAT_007c1aa4,uVar5);
            StartServTy::WrTextDDX
                      (this_01,0,600,(int)pSVar3,0x30,0x10,(uint *)local_48,0xffffffff,0xffffffff,
                       (ccFntTy *)pFVar2->field_1A7F,0);
            ptVar6 = Library::MSVCRT::_gmtime((time_t *)(piVar9 + -3));
            wsprintfA((LPSTR)local_48,s__2d____2d____4d_007cc27c,ptVar6->tm_mday,ptVar6->tm_mon + 1,
                      ptVar6->tm_year + 0x76c);
            StartServTy::WrTextDDX
                      (pFVar2->field_1A7F,0,0x28a,(int)pSVar3,0x76,0x10,(uint *)local_48,0xffffffff,
                       0xffffffff,(ccFntTy *)pFVar2->field_1A7F,0);
            local_8 = pSVar3;
          }
          local_c = local_c + 1;
          piVar9 = piVar9 + 9;
          local_8 = local_8 + 0x10;
        } while (local_c < (uint)pFVar2->field_1EE3);
      }
      g_currentExceptionFrame = local_8c.previous;
      return;
    }
    g_currentExceptionFrame = local_8c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x49b,0,iVar4,&DAT_007a4ccc
                               ,s_FSGSTy__PaintLadder_007cc264);
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x49b);
  }
  return;
}

