#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0055C590 -> EXTERNAL:00000059 @ 0055C63C

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055C590 -> EXTERNAL:00000059 @ 0055C63C */

void FUN_0055c590(undefined4 param_1,LPCVOID lpBuffer,LPCVOID nNumberOfBytesToWrite)

{
  bool bVar1;
  LPCVOID pvVar2;
  HANDLE hFile;
  BOOL BVar3;

  if (g_fSGS_0081174C == nullptr) {
    return;
  }
  if (lpBuffer != (LPCVOID)0x0) {
    bVar1 = true;
    /* ST_CALLSITE[0055C5D5]: CALL ESI */
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,PTR_s_UPDATES__0079aef0);
    /* ST_CALLSITE[0055C5E1]: CALL dword ptr [0x0085bc7c] */
    CreateDirectoryA((LPCSTR)&DAT_0080f33a,(LPSECURITY_ATTRIBUTES)0x0);
    /* ST_CALLSITE[0055C604]: CALL ESI */
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,PTR_s_UPDATES__0079aef0,
              PTR_s_ST_INF_0079aef4);
    /* ST_CALLSITE[0055C61F]: CALL dword ptr [0x0085bc80] */
    hFile = CreateFileA((LPCSTR)&DAT_0080f33a,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                        (HANDLE)0x0);
    pvVar2 = nNumberOfBytesToWrite;
    if (hFile != (HANDLE)0xffffffff) {
      /* ST_CALLSITE[0055C63C]: CALL dword ptr [0x0085bc90] */
      BVar3 = WriteFile(hFile,lpBuffer,(DWORD)nNumberOfBytesToWrite,(LPDWORD)&lpBuffer,
                        (LPOVERLAPPED)0x0);
      if ((BVar3 != 0) && (pvVar2 == lpBuffer)) {
        bVar1 = false;
      }
      /* ST_CALLSITE[0055C64E]: CALL dword ptr [0x0085bbc8] */
      CloseHandle(hFile);
      if (!bVar1) {
        /* ST_CALLSITE[0055C670]: CALL 0x004050e2; direct=004050E2 FSGSTy::CheckUpdate */
        FSGSTy::CheckUpdate(g_fSGS_0081174C);
        return;
      }
    }
    /* ST_CALLSITE[0055C65F]: CALL 0x00402ced; direct=00402CED FSGSTy::DoLogon */
    FSGSTy::DoLogon(g_fSGS_0081174C);
    return;
  }
  /* ST_CALLSITE[0055C5AA]: CALL 0x00402ced; direct=00402CED FSGSTy::DoLogon */
  FSGSTy::DoLogon(g_fSGS_0081174C);
  return;
}

