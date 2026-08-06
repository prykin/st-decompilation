#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0074A143 -> 00749D5F @ 0074A16E; CBaseRenderer::BeginFlush this; stable alias ESI */

void __fastcall FUN_00749d5f(CBaseRenderer *param_1)

{
  DWORD DVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagMSG local_1c;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  while (*(int *)(param_1 + 0xb4) != 0) {
    PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    Sleep(1);
  }
  DVar1 = GetQueueStatus(8);
  if ((DVar1 >> 0x10 & 8) != 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0;
    DVar1 = GetCurrentThreadId();
    PostThreadMessageA(DVar1,Msg,wParam,lParam);
  }
  return;
}

