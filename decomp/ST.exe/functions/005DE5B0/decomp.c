#include "../../pseudocode_runtime.h"


void __cdecl FUN_005de5b0(UINT param_1,int param_2)

{
  char *pcVar1;
  UINT uType;
  CHAR local_108 [260];

  if (param_2 < 0) {
    pcVar1 = LoadResourceString(param_1,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005DE604]: CALL dword ptr [0x0085bde8] */
    wsprintfA(local_108,"%s",pcVar1);
  }
  else {
    pcVar1 = LoadResourceString(param_1,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005DE5DD]: CALL dword ptr [0x0085bde8] */
    wsprintfA(local_108,"%s\n%d",pcVar1,param_2);
  }
  uType = 0x10;
  /* ST_CALLSITE[005DE61A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=/winnt.h/LPCSTR; source view only; no Ghidra override */
  pcVar1 = LoadResourceString(0x2648,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005DE62E]: CALL dword ptr [0x0085bdec] */
  MessageBoxA(HWND_00856d78,local_108,pcVar1,uType);
  return;
}

