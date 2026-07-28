#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::PaintSC

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __thiscall SettMapTy::PaintSC(SettMapTy *this)

{
  code *pcVar1;
  SettMapTy *pSVar2;
  byte bVar3;
  int errorCode;
  DArrayTy *pDVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if ((DAT_008087b6 != 0) && (g_startSystem_0081176C->field_02F4 != (ushort *)0x0)) {
      FUN_006e83f0((AnonShape_006B5B10_E0D06CF1 *)g_startSystem_0081176C->field_02F0,0x14,0x14,0x8b,
                   (uint)DAT_008087c2);
      FUN_006b5440(g_startSystem_0081176C->field_02F0,0,0x14,0x14,
                   (uint)g_startSystem_0081176C->field_02F4,0,0);
      pSVar2 = local_8;
      if ((DAT_0080734b != '\0') &&
         ((pDVar4 = local_8->field_1F84, pDVar4 != (DArrayTy *)0x0 && (0 < (int)pDVar4->count)))) {
        bVar8 = pDVar4->count != 0;
        uVar7 = 0;
        do {
          if (bVar8) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar7) (runtime stride) */
            pcVar6 = (char *)(pDVar4->elementSize * uVar7 + (int)pDVar4->data);
          }
          else {
            pcVar6 = (char *)0x0;
          }
          if ((((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) && (pcVar6[4] != '\0')) &&
             (pcVar6[2] != -1)) {
            switch(pcVar6[2]) {
            case '\0':
              bVar3 = 0xfc;
              break;
            case '\x01':
              bVar3 = 0xfa;
              break;
            case '\x02':
              bVar3 = 0xfb;
              break;
            case '\x03':
              bVar3 = 0xf9;
              break;
            case '\x04':
              bVar3 = 0xfd;
              break;
            case '\x05':
              bVar3 = 0xfe;
              break;
            case '\x06':
              bVar3 = 0xf3;
              break;
            case '\a':
              bVar3 = 7;
              break;
            default:
              bVar3 = 0xff;
            }
            FUN_006e8460(*(undefined4 *)(pcVar6 + 0x54),*(undefined4 *)(pcVar6 + 0x58),4,bVar3);
          }
          pDVar4 = pSVar2->field_1F84;
          uVar7 = uVar7 + 1;
          bVar8 = uVar7 < pDVar4->count;
        } while ((int)uVar7 < (int)pDVar4->count);
      }
      if (-1 < g_startSystem_0081176C->field_02EC) {
        FUN_006b35d0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x4ac,0,errorCode,
                             "%s","SettMapTy::PaintSC");
  if (iVar5 == 0) {
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\sett_obj.cpp",0x4ac);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

