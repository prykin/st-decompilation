#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401244|0054E4F0; family_names=STPlaySystemC::GetMessage; ret4=3;
   direct_offsets={10:1,14:0,18:1,1c:0} */

int __thiscall STPlaySystemC::GetMessage(STPlaySystemC *this,STMessage *message)

{
  char cVar1;
  AnonPointee_STPlaySystemC_0000 *pAVar2;
  code *pcVar3;
  cMf32 *this_00;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  uint uVar8;
  uint uVar9;
  STPlaySystemC *pSVar10;
  char *pcVar11;
  char *pcVar12;
  DWORD *pDVar13;
  undefined1 local_2b8;
  char local_2b7 [515];
  InternalExceptionFrame local_b4;
  InternalExceptionFrame local_70;
  undefined4 local_2c [8];
  STPlaySystemC *local_c;
  int local_8;

  local_c = this;
  iVar5 = SystemClassTy::GetMessage((SystemClassTy *)this,message);
  if (iVar5 != 0xffff) {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    iVar5 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
    pSVar10 = local_c;
    if (iVar5 == 0) {
      if (message->id == MESS_SHARED_0008) {
        local_b4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_b4;
        iVar5 = Library::MSVCRT::__setjmp3(local_b4.jumpBuffer,0);
        this_00 = g_cMf32_00806754;
        if (iVar5 == 0) {
          if (PTR_00802a58 != (cLoadingTy *)0x0) {
            uVar9 = 0xffffffff;
            pcVar11 = PTR_DAT_007c83b0;
            do {
              pcVar12 = pcVar11;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar12 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar12;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            local_2b8 = 0xc;
            pcVar11 = pcVar12 + -uVar9;
            pcVar12 = local_2b7;
            for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar12 = pcVar12 + 4;
            }
            local_8 = 0;
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar12 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar12 = pcVar12 + 1;
            }
            cMf32::ToBeg(g_cMf32_00806754,FUN_006f2d10,&local_2b8);
            puVar6 = cMf32::RecNameGetNext(this_00);
            iVar5 = local_8;
            while (puVar6 != (undefined4 *)0x0) {
              local_8 = iVar5 + 1;
              puVar6 = cMf32::RecNameGetNext(this_00);
              iVar5 = local_8;
            }
            local_8 = iVar5;
            pcVar11 = LoadResourceString(19000,HINSTANCE_00807618);
            cLoadingTy::SetProcess(PTR_00802a58,0,pcVar11,iVar5);
          }
          pSVar10 = local_c;
          DAT_00802a3c = 0;
          Library::Ourlib::MFAOBJ::mfAObjEnum
                    (g_cMf32_00806754,PTR_DAT_007c83b0,&LAB_00403535,local_c,0);
          pcVar11 = LoadResourceString(0x4a39,HINSTANCE_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,"%d %s",DAT_00802a3c,pcVar11);
          if (PTR_00802a58 != (cLoadingTy *)0x0) {
            cLoadingTy::SetState(PTR_00802a58,CASE_2,0,(char *)&DAT_0080f33a);
          }
          g_currentExceptionFrame = local_b4.previous;
        }
        else {
          g_currentExceptionFrame = local_b4.previous;
          RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x42f);
          pSVar10 = local_c;
        }
        uVar9 = 0;
        pAVar2 = pSVar10->vtable;
        memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
        local_2c[3] = 0xf;
        local_2c[4] = 0x111;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)pAVar2->field_0018)(local_2c);
        if (DAT_00808783 == '\x03') {
          pSVar10->field_0038 = 1;
          if (g_int_00811764 != (int *)0x0) {
            FUN_006b6500(g_int_00811764,DAT_0080733c);
          }
          if (DAT_0080877e == '\0') {
            FUN_00715360(g_int_00811764,1,'.',(char *)0x0,0,0,0xffffffff);
          }
          else if (DAT_00808aaf != 0) {
            pDVar13 = &DAT_00808af8;
            do {
              DVar7 = FUN_006e51b0(0x807620);
              *pDVar13 = DVar7;
              uVar9 = uVar9 + 1;
              pDVar13 = pDVar13 + 0x27;
            } while (uVar9 < DAT_00808aaf);
          }
        }
        DVar7 = timeGetTime();
        pSVar10->field_00BC = DVar7;
        pSVar10->field_007F = DVar7;
        pSVar10->field_0083 = DVar7;
      }
      else if (message->id == MESS_STPLAYSYSTEMC_44FF) {
        uVar9 = 0;
        DAT_00808788 = 0;
        if (DAT_00808aaf != 0) {
          pcVar11 = &DAT_00808af6;
          do {
            piVar4 = g_int_00811764;
            if ((*(int *)(pcVar11 + -6) == pSVar10->field_00F4) && (*pcVar11 != '\0')) {
              *pcVar11 = '\0';
              FUN_006b6500(piVar4,1);
              FUN_00715360(g_int_00811764,pSVar10->field_00F4,'7',(char *)0x0,0,0,0xffffffff);
              FUN_006b6500(g_int_00811764,DAT_0080733c);
              thunk_FUN_005508f0(pSVar10,pSVar10->field_00F4);
              pSVar10->field_00F4 = 0;
            }
            uVar9 = uVar9 + 1;
            pcVar11 = pcVar11 + 0x9c;
          } while (uVar9 < DAT_00808aaf);
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
      }
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    g_currentExceptionFrame = local_70.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x463,0,iVar5,
                               "%s","STPlaySystemC::GetMessage error !");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return 0xffff;
}

