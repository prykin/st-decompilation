#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_manag.Cpp
   SndUnderAttMenegC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0061F660; family_names=SndUnderAttMenegC::GetMessage; ret4=4;
   direct_offsets={10:1,14:0,18:0,1c:1} */

int __thiscall SndUnderAttMenegC::GetMessage(SndUnderAttMenegC *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  InternalExceptionFrame local_50;
  float local_c;
  AnonShape_0061FCC0_94F6689F *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = (AnonShape_0061FCC0_94F6689F *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_manag.Cpp",0x6e,0,iVar4,"%s",
                               "SndUnderAttMenegC::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\nick\\to_manag.Cpp",0x70);
    return 0xffff;
  }
  SVar1 = message->id;
  if (SVar1 == MESS_ID_NONE) {
    iVar4 = 0xafffff5;
    piVar6 = (int *)&local_8->field_0x31;
    do {
      if (*(char *)((int)piVar6 + -0x11) != '\0') {
        FUN_006e6780(PTR_00807598,iVar4);
        iVar5 = g_playSystem_00802A38->field_00E4 - piVar6[2];
        fVar3 = (float)iVar5;
        local_c = fVar3 * (float)piVar6[1] * fVar3 * _DAT_00790784 +
                  ((float)(piVar6[-1] - iVar5 * *piVar6) * _DAT_007904f8 + _DAT_007904f4) *
                  _DAT_0079070c;
        if (local_c <= _DAT_007904f8) {
          FUN_006e6780(PTR_00807598,iVar4);
          *(undefined1 *)((int)piVar6 + -0x11) = 0;
        }
        else {
          FUN_006e6710(PTR_00807598,(float)piVar6[-4] * _DAT_007904f8 + _DAT_007904f4,
                       (float)piVar6[-3] * _DAT_007904f8 + _DAT_007904f4,(uint)local_c,piVar6[-2],
                       iVar4);
        }
      }
      iVar4 = iVar4 + 0xffffff;
      piVar6 = (int *)((int)piVar6 + 0x1d);
    } while (iVar4 < 0xffffff0);
  }
  else if (SVar1 == MESS_ID_CREATE) {
    if (g_dumpClass_007FB284 != (DumpClassC *)0x0) {
      *(int *)&local_8->field_0x1c = (int)g_worldGrid.sizeX / 2;
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_0003) {
    sub_0061FCC0((SndUnderAttMenegC *)local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

