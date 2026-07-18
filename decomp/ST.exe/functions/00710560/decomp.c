
void __cdecl FUN_00710560(uint *param_1)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  uint *local_8;
  
  local_8 = param_1;
  iVar5 = 0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  puVar2 = local_8;
  if (iVar3 == 0) {
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
        puVar4 = puVar2;
        if (0 < **(short **)((int)puVar2 + 0x9a)) {
          do {
            puVar4 = puVar4 + 1;
            if (*puVar4 != 0) {
              if (*puVar2 == 0) {
                FUN_006ab060(puVar4);
              }
              else {
                FUN_006f20e0(puVar4);
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < **(short **)((int)puVar2 + 0x9a));
        }
        puVar4 = (uint *)((int)puVar2 + 0x9a);
        if (*puVar4 != 0) {
          if (*puVar2 == 0) {
            FUN_006ab060(puVar4);
          }
          else {
            FUN_006f20e0(puVar4);
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
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar5 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x400,0,iVar3,&DAT_007a4ccc);
  if (iVar5 == 0) {
    FUN_006a5e40(iVar3,0,0x7f0190,0x402);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

