#include "../../pseudocode_runtime.h"


/* [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=forwarded:006E5FD0;
   family_names=AiBossClassTy::GetMessage|AiFltClassTy::GetMessage|AiPlrClassTy::GetMessage|AiTactClassTy::GetMessage|CPanelTy::GetMessage|ComboTy::GetMessage|ControlClassTy::GetMessage|CursorClassTy::GetMessage|DumpClassC::GetMessage|HelpStringTy::GetMessage|InputClassTy::GetMessage|MAdvTy::GetMessage|MMObjTy::GetMessage|MReportTy::GetMessage|MTaskTy::GetMessage|MTestTy::GetMessage|MoneyTy::GetMessage|OpticClassC::GetMessage|PanelTy::GetMessage|PopUpTy::GetMessage|RadioClassTy::GetMessage|STAlgaC::GetMessage|STAllPlayersC::GetMessage|STGameObjC::GetMessage|STGroupC::GetMessage|SliderClassTy::GetMessage|SoundManagerTy::GetMessage|TabClassTy::GetMessage|TraksClassTy::GetMessage|VisibleClassTy::GetMessage;
   ret4=4; direct_offsets={10:3,14:0,18:1,1c:3}; forwarded_envelope=true */

int __thiscall FUN_00495750(void *this,STMessage *message)

{
  STMessageId SVar1;
  STMessage *pSVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  longlong lVar6;
  CHAR local_6c [100];
  float local_8;

  pSVar2 = message;

  FUN_006e5fd0(this,message);
  SVar1 = pSVar2->id;
  if (SVar1 < MESS_SHARED_0061) {
    if (SVar1 == MESS_SHARED_0060) {
      STField<uint>(this,0x1c) = (uint)(pSVar2->arg1).words.low;
      STField<uint>(this,0x20) = (uint)(pSVar2->arg1).words.high;
      return 0;
    }
    switch(SVar1) {
    case MESS_ID_CREATE:

      iVar3 = FUN_006e4d40(STField<void *>(this,0x10),
                           STField<RecoveredRecord_006E4D40_7C2E54EF *>(this,0xc));
      if (iVar3 == 1) {
        /* ST_CALLSITE[00495792]: CALL dword ptr [0x0085bedc] */
        DVar4 = timeGetTime();
        STField<DWORD>(this,0x24) = DVar4;
        return 0;
      }
      break;
    case MESS_SHARED_0003:

      FUN_006e4d40(STField<void *>(this,0x10),
                   STField<RecoveredRecord_006E4D40_7C2E54EF *>(this,0xc));
      return 0;
    }
  }
  else if ((SVar1 != MESS_SHARED_0061) && (SVar1 == 0x8102)) {

    ST3DSMAPContext::sub_006E1C20
              (g_sT3DSMAPContext_00807598,STField<float>(this,0x1c),STField<int>(this,0x20),
               0.0,&local_8,(float *)&message);
    lVar6 = Library::MSVCRT::__ftol();
    uVar5 = (undefined4)lVar6;
    lVar6 = Library::MSVCRT::__ftol();
    /* ST_CALLSITE[0049582F]: CALL dword ptr [0x0085bde8] */
    wsprintfA(local_6c,"\n X = %d\n Y = %d\n Xc = %d\n Yc = %d",STField<undefined4>(this,0x1c),
              STField<undefined4>(this,0x20),(int)lVar6,uVar5);
    /* ST_CALLSITE[00495849]: CALL dword ptr [0x0085bdec] */
    MessageBoxA(g_hWnd_00806748,local_6c,"Coordinates of Mouse",0x40);
  }
  return 0;
}

