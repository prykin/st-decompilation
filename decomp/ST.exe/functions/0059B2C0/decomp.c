#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintLadder
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PaintLadder(FSGSTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0059B5FE RET | 0059B647 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FSGSTy::PaintLadder(FSGSTy *this)

{
  int iVar2;
  FSGSTy *pFVar3;
  StartServTy *pSVar4;
  int iVar4;
  uint uVar5;
  tm *ptVar6;
  int iVar6;
  int iVar7;
  StartServTy *this_00;
  uint uVar8;
  StartServTy *this_01;
  int *piVar9;
  int *piVar10;
  InternalExceptionFrame local_8c;
  StartServTy local_48 [52];
  void *local_14;
  FSGSTy *local_10;
  uint local_c;
  StartServTy *local_8;

  local_14 = this->field_1EDB;
  if (((this->field_1E8E != 0) && (this->field_1E92 != nullptr)) &&
     (local_14 != nullptr)) {
    local_8c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_8c;
    local_10 = this;

    iVar4 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
    if (iVar4 == 0) {
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
      pFVar3 = local_10;
      /* ST_CALLSITE[0059B368]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(0x18a,0x90,0x168,0x32,100,(byte *)0x19,'\x01',local_10->field_1E92);
      /* ST_CALLSITE[0059B388]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)local_48,"%6d_:_%6d",pFVar3->field_1EDF,
                (pFVar3->field_1EE3 - 1) + pFVar3->field_1EDF);
      /* ST_CALLSITE[0059B3AD]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      StartServTy::WrTextDDX
                (local_48,0,0x18b,0x91,0x62,0x17,(char *)local_48,0xffffffff,0xffffffff,
                 (ccFntTy *)pFVar3->field_1A7F,0);
      /* ST_CALLSITE[0059B3D2]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(0x22,0xd6,0,0x78,0x2e1,(byte *)0xfd,'\x01',pFVar3->field_1E92);
      if (pFVar3->field_1EE3 != 0) {
        local_8 = (StartServTy *)0xdb;
        piVar9 = (int *)((int)local_14 + 0xc);
        local_c = 0;
        do {
          /* ST_CALLSITE[0059B40D]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)local_48,"%6d",pFVar3->field_1EDF + local_c);
          /* ST_CALLSITE[0059B430]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
          StartServTy::WrTextDDX
                    (local_48,0,0x23,(int)local_8,0x2b,0x10,(char *)local_48,0xffffffff,0xffffffff,
                     (ccFntTy *)pFVar3->field_1A7F,0);
          /* ST_CALLSITE[0059B455]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
          StartServTy::WrTextDDX
                    (local_8,0,0x50,(int)local_8,0xe9,0x10,(char *)(piVar9 + 2),0,0xffffffff,
                     pFVar3->array_00BC[0xc].field_01F3,2);
          iVar7 = -1;
          piVar10 = piVar9 + 2;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            iVar2 = *piVar10;
            piVar10 = (int *)((int)piVar10 + 1);
          } while ((char)iVar2 != '\0');
          if (iVar7 != -2) {
            /* ST_CALLSITE[0059B47A]: CALL dword ptr [0x0085bde8] */
            wsprintfA((LPSTR)local_48,"%6d",piVar9[1]);
            pSVar4 = local_8;
            /* ST_CALLSITE[0059B4A0]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
            StartServTy::WrTextDDX
                      (pFVar3->field_1A7F,0,0x13b,(int)local_8,0x44,0x10,(char *)local_48,0xffffffff
                       ,0xffffffff,(ccFntTy *)pFVar3->field_1A7F,0);
            /* ST_CALLSITE[0059B4B9]: CALL dword ptr [0x0085bde8] */
            wsprintfA((LPSTR)local_48,"%6d_:_%6d_:_%6d",piVar9[-2],piVar9[-1],*piVar9);
            /* ST_CALLSITE[0059B4E2]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
            StartServTy::WrTextDDX
                      (pFVar3->field_1A7F,0,0x181,(int)pSVar4,0x8f,0x10,(char *)local_48,0xffffffff,
                       0xffffffff,(ccFntTy *)pFVar3->field_1A7F,0);
            /* ST_CALLSITE[0059B4FD]: CALL dword ptr [0x0085bde8] */
            wsprintfA((LPSTR)local_48,"%6d",*piVar9 + piVar9[-1] + piVar9[-2]);
            /* ST_CALLSITE[0059B520]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
            StartServTy::WrTextDDX
                      (this_00,0,0x212,(int)pSVar4,0x44,0x10,(char *)local_48,0xffffffff,0xffffffff,
                       (ccFntTy *)pFVar3->field_1A7F,0);
            uVar8 = *piVar9 + piVar9[-2] + piVar9[-1];
            uVar5 = 0;
            if (uVar8 != 0) {
              uVar5 = (uint)(piVar9[-2] * 100) / uVar8;
            }
            /* ST_CALLSITE[0059B54F]: CALL dword ptr [0x0085bde8] */
            wsprintfA((LPSTR)local_48,"%3d",uVar5);
            /* ST_CALLSITE[0059B572]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
            StartServTy::WrTextDDX
                      (this_01,0,600,(int)pSVar4,0x30,0x10,(char *)local_48,0xffffffff,0xffffffff,
                       (ccFntTy *)pFVar3->field_1A7F,0);
            ptVar6 = Library::MSVCRT::_gmtime((time_t *)(piVar9 + -3));
            /* ST_CALLSITE[0059B59C]: CALL dword ptr [0x0085bde8] */
            wsprintfA((LPSTR)local_48,"%2d_:_%2d_:_%4d",ptVar6->tm_mday,ptVar6->tm_mon + 1,
                      ptVar6->tm_year + 0x76c);
            /* ST_CALLSITE[0059B5C2]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
            StartServTy::WrTextDDX
                      (pFVar3->field_1A7F,0,0x28a,(int)pSVar4,0x76,0x10,(char *)local_48,0xffffffff,
                       0xffffffff,(ccFntTy *)pFVar3->field_1A7F,0);
            local_8 = pSVar4;
          }
          local_c = local_c + 1;
          piVar9 = piVar9 + 9;
          local_8 = local_8 + 0x10;
        } while (local_c < pFVar3->field_1EE3);
      }
      g_currentExceptionFrame = local_8c.previous;
      return;
    }
    g_currentExceptionFrame = local_8c.previous;

    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x49b,0,iVar4,"%s"
                               ,"FSGSTy::PaintLadder");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x49b);
  }
  return;
}

