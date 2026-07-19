
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::operator */

void __thiscall ccFntTy::operator(ccFntTy *this,uint *param_1)

{
  code *pcVar1;
  uint *puVar2;
  int errorCode;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  uint *local_8;
  
  local_8 = param_1;
  iVar4 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  puVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 != (uint *)0x0) {
      if (local_8[0x28] == 0) {
        if (*(HGDIOBJ *)((int)local_8 + 0x111) != (HGDIOBJ)0x0) {
          DeleteObject(*(HGDIOBJ *)((int)local_8 + 0x111));
        }
        if (*(int *)((int)puVar2 + 0x12d) != 0) {
          FUN_006ab060((undefined4 *)((int)puVar2 + 0x12d));
        }
        if (*(HGDIOBJ *)((int)puVar2 + 0x109) != (HGDIOBJ)0x0) {
          DeleteObject(*(HGDIOBJ *)((int)puVar2 + 0x109));
        }
        if (*(int *)((int)puVar2 + 0x101) != 0) {
          if (*(HDC *)((int)puVar2 + 0xfd) != (HDC)0x0) {
            SelectObject(*(HDC *)((int)puVar2 + 0xfd),*(HGDIOBJ *)((int)puVar2 + 0x105));
          }
          DeleteObject(*(HGDIOBJ *)((int)puVar2 + 0x101));
          *(undefined4 *)((int)puVar2 + 0x101) = 0;
        }
        if (*(int *)((int)puVar2 + 0x115) != 0) {
          if (*(HDC *)((int)puVar2 + 0xfd) != (HDC)0x0) {
            SelectPalette(*(HDC *)((int)puVar2 + 0xfd),*(HPALETTE *)((int)puVar2 + 0x119),0);
          }
          DeleteObject(*(HGDIOBJ *)((int)puVar2 + 0x115));
          *(undefined4 *)((int)puVar2 + 0x115) = 0;
        }
        if (*(int *)((int)puVar2 + 0x11d) != 0) {
          if (*(HDC *)((int)puVar2 + 0xfd) != (HDC)0x0) {
            SelectObject(*(HDC *)((int)puVar2 + 0xfd),*(HGDIOBJ *)((int)puVar2 + 0x121));
          }
          DeleteObject(*(HGDIOBJ *)((int)puVar2 + 0x11d));
          *(undefined4 *)((int)puVar2 + 0x11d) = 0;
        }
        if (*(HDC *)((int)puVar2 + 0xfd) != (HDC)0x0) {
          ReleaseDC((HWND)0x0,*(HDC *)((int)puVar2 + 0xfd));
          *(undefined4 *)((int)puVar2 + 0xfd) = 0;
        }
        if (*(int *)((int)puVar2 + 0x125) != 0) {
          FUN_006ab060((undefined4 *)((int)puVar2 + 0x125));
        }
        puVar3 = puVar2;
        if (0 < **(short **)((int)puVar2 + 0x9a)) {
          do {
            puVar3 = puVar3 + 1;
            if (*puVar3 != 0) {
              if ((cMf32 *)*puVar2 == (cMf32 *)0x0) {
                FUN_006ab060(puVar3);
              }
              else {
                cMf32::RecMemFree((cMf32 *)*puVar2,puVar3);
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < **(short **)((int)puVar2 + 0x9a));
        }
        puVar3 = (uint *)((int)puVar2 + 0x9a);
        if (*puVar3 != 0) {
          if ((cMf32 *)*puVar2 == (cMf32 *)0x0) {
            FUN_006ab060(puVar3);
          }
          else {
            cMf32::RecMemFree((cMf32 *)*puVar2,puVar3);
          }
        }
        if ((*(undefined4 **)((int)puVar2 + 0x72) != (undefined4 *)0x0) &&
           (*(int *)((int)puVar2 + 0x7a) != 0)) {
          FUN_006a5e90(*(undefined4 **)((int)puVar2 + 0x72));
        }
        if (*(int *)((int)puVar2 + 0x185) != 0) {
          FUN_006ab060((undefined4 *)((int)puVar2 + 0x185));
        }
      }
      FUN_006a5e90(param_1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x400,0,errorCode,&DAT_007a4ccc,
                             s_ccFntTy__operator_delete_007f01f8);
  if (iVar4 == 0) {
    RaiseInternalException(errorCode,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x402);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

