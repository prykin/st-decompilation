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
  float fVar3;
  int iVar4;
  int iVar6;
  int iVar5;
  int *piVar7;
  int iVar8;
  InternalExceptionFrame local_50;
  float local_c;
  SndUnderAttMenegC *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
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
    iVar8 = 0xafffff5;
    piVar7 = &local_8->field_0031;
    do {
      if (*(char *)((int)piVar7 + -0x11) != '\0') {
        ST3DSMAPContext::sub_006E6780(g_sT3DSMAPContext_00807598,iVar8);
        iVar6 = g_playSystem_00802A38->field_00E4 - piVar7[2];
        fVar3 = (float)iVar6;
        local_c = fVar3 * (float)piVar7[1] * fVar3 * _DAT_00790784 +
                  ((float)(piVar7[-1] - iVar6 * *piVar7) * _DAT_007904f8 + _DAT_007904f4) *
                  _DAT_0079070c;
        if (local_c <= _DAT_007904f8) {
          ST3DSMAPContext::sub_006E6780(g_sT3DSMAPContext_00807598,iVar8);
          *(undefined1 *)((int)piVar7 + -0x11) = 0;
        }
        else {
          ST3DSMAPContext::sub_006E6710
                    (g_sT3DSMAPContext_00807598,(float)piVar7[-4] * _DAT_007904f8 + _DAT_007904f4,
                     (float)piVar7[-3] * _DAT_007904f8 + _DAT_007904f4,(uint)local_c,piVar7[-2],
                     iVar8);
        }
      }
      iVar8 = iVar8 + 0xffffff;
      piVar7 = (int *)((int)piVar7 + 0x1d);
    } while (iVar8 < 0xffffff0);
  }
  else if (SVar1 == MESS_ID_CREATE) {
    if (g_dumpClass_007FB284 != nullptr) {
      local_8->field_001C = (int)g_worldGrid.sizeX / 2;
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_0003) {
    sub_0061FCC0(local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

