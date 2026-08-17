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
  STPlaySystemCVTable *pSVar2;
  cMf32 *this_00;
  int *piVar4;
  int local_EAX_19;
  int iVar5;
  int local_EAX_308;
  undefined4 *puVar5;
  char *pcVar11;
  char *local_EAX_530;
  DWORD DVar7;
  DWORD DVar6;
  int local_EAX_854;
  uint uVar7;
  int iVar8;
  uint uVar9;
  STPlaySystemC *pSVar10;
  char *pcVar12;
  char *pcVar13;
  DWORD *pDVar14;
  undefined1 local_2b8;
  char local_2b7 [515];
  InternalExceptionFrame local_b4;
  InternalExceptionFrame local_70;
  undefined4 local_2c [8];
  STPlaySystemC *local_c;
  int local_8;

  local_c = this;
  local_EAX_19 = SystemClassTy::GetMessage((SystemClassTy *)this,message);
  if (local_EAX_19 != 0xffff) {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    iVar5 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
    pSVar10 = local_c;
    if (iVar5 == 0) {
      if (message->id == MESS_SHARED_0008) {
        local_b4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_b4;
        local_EAX_308 = Library::MSVCRT::__setjmp3(local_b4.jumpBuffer,0);
        this_00 = g_cMf32_00806754;
        if (local_EAX_308 == 0) {
          if (g_cLoading_00802A58 != nullptr) {
            uVar9 = 0xffffffff;
            pcVar12 = PTR_DAT_007c83b0;
            do {
              pcVar13 = pcVar12;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            local_2b8 = 0xc;
            pcVar12 = pcVar13 + -uVar9;
            pcVar13 = local_2b7;
            for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar13 = pcVar13 + 4;
            }
            local_8 = 0;
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar13 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            }
            cMf32::ToBeg(g_cMf32_00806754,FUN_006f2d10,&local_2b8);
            puVar5 = cMf32::RecNameGetNext(this_00);
            iVar8 = local_8;
            while (puVar5 != nullptr) {
              local_8 = iVar8 + 1;
              puVar5 = cMf32::RecNameGetNext(this_00);
              iVar8 = local_8;
            }
            local_8 = iVar8;
            pcVar11 = LoadResourceString(19000,g_hINSTANCE_00807618);
            /* ST_CALLSITE[0054E6CA]: CALL 0x00404d8b; direct=00404D8B cLoadingTy::SetProcess */
            cLoadingTy::SetProcess(g_cLoading_00802A58,0,pcVar11,iVar8);
          }
          pSVar10 = local_c;
          DAT_00802a3c = 0;
          Library::Ourlib::MFAOBJ::mfAObjEnum
                    (g_cMf32_00806754,PTR_DAT_007c83b0,thunk_FUN_0054ca10,local_c,0);
          local_EAX_530 = LoadResourceString(0x4a39,g_hINSTANCE_00807618);
          /* ST_CALLSITE[0054E719]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)&DAT_0080f33a,"%d %s",DAT_00802a3c,local_EAX_530);
          if (g_cLoading_00802A58 != nullptr) {
            /* ST_CALLSITE[0054E734]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
            cLoadingTy::SetState(g_cLoading_00802A58,CASE_2,0,(char *)&DAT_0080f33a);
          }
          g_currentExceptionFrame = local_b4.previous;
        }
        else {
          g_currentExceptionFrame = local_b4.previous;
          RaiseInternalException(local_EAX_308,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x42f);
          pSVar10 = local_c;
        }
        uVar9 = 0;
        pSVar2 = pSVar10->vtable;
        memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
        local_2c[3] = 0xf;
        local_2c[4] = 0x111;
        /* ST_CALLSITE[0054E789]: CALL dword ptr [EDX + 0x18] */
        (*pSVar2->SendMessage)((SystemWithNamedObjClassTy *)pSVar10,(int)local_2c);
        if (DAT_00808783 == '\x03') {
          pSVar10->field_0038 = 1;
          if (g_int_00811764 != nullptr) {
            FUN_006b6500(g_int_00811764,DAT_0080733c);
          }
          if (DAT_0080877e == '\0') {
            FUN_00715360(g_int_00811764,1,'.',nullptr,0,0,0xffffffff);
          }
          else if (DAT_00808aaf != 0) {
            pDVar14 = &DAT_00808af8;
            do {
              DVar7 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
              *pDVar14 = DVar7;
              uVar9 = uVar9 + 1;
              pDVar14 = pDVar14 + 0x27;
            } while (uVar9 < DAT_00808aaf);
          }
        }
        /* ST_CALLSITE[0054E7FF]: CALL dword ptr [0x0085bedc] */
        DVar6 = timeGetTime();
        pSVar10->field_00BC = DVar6;
        pSVar10->field_007F = DVar6;
        pSVar10->field_0083 = DVar6;
      }
      else if (message->id == MESS_STPLAYSYSTEMC_44FF) {
        uVar9 = 0;
        DAT_00808788 = 0;
        if (DAT_00808aaf != 0) {
          pcVar12 = &DAT_00808af6;
          do {
            piVar4 = g_int_00811764;
            if ((*(int *)(pcVar12 + -6) == pSVar10->field_00F4) && (*pcVar12 != '\0')) {
              *pcVar12 = '\0';
              FUN_006b6500(piVar4,1);
              FUN_00715360(g_int_00811764,pSVar10->field_00F4,'7',nullptr,0,0,0xffffffff);
              FUN_006b6500(g_int_00811764,DAT_0080733c);
              thunk_FUN_005508f0(pSVar10,pSVar10->field_00F4);
              pSVar10->field_00F4 = 0;
            }
            uVar9 = uVar9 + 1;
            pcVar12 = pcVar12 + 0x9c;
          } while (uVar9 < DAT_00808aaf);
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
      }
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    g_currentExceptionFrame = local_70.previous;
    local_EAX_854 =
         ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x463,0,iVar5,"%s",
                            "STPlaySystemC::GetMessage error !");
    if (local_EAX_854 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return 0xffff;
}

