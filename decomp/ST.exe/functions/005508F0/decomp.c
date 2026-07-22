#include "../../pseudocode_runtime.h"


void __thiscall FUN_005508f0(void *this,int param_1)

{
  HINSTANCE module;
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  uint local_c;
  byte local_5;

  cVar7 = -1;
  uVar3 = (uint)DAT_00808aaf;
  uVar1 = 0;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_c = CONCAT31(local_c._1_3_,0xff);
  local_5 = 0;
  if (uVar3 != 0) {
    pcVar5 = &DAT_00808af6;
    do {
      if ((*(int *)(pcVar5 + -6) == param_1) && (*pcVar5 == '\x01')) {
        cVar7 = pcVar5[-2];
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = CONCAT31(local_c._1_3_,cVar7);
        break;
      }
      uVar1 = uVar1 + 1;
      pcVar5 = pcVar5 + 0x9c;
    } while (uVar1 < uVar3);
    if (uVar3 != 0) {
      pcVar5 = &DAT_00808af6;
      uVar1 = uVar3;
      do {
        if ((pcVar5[-2] == cVar7) && (*pcVar5 == '\x01')) {
          local_5 = local_5 + 1;
        }
        pcVar5 = pcVar5 + 0x9c;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  local_10 = this;
  if (((((DAT_0080877e != '\0') && (local_5 < 2)) && (cVar7 != -1)) &&
      (((DAT_008087a0 == '\x04' || (DAT_008087a0 == '\a')) ||
       ((DAT_008087a0 == '\x13' || ((DAT_008087a0 == '\r' || (DAT_008087a0 == '\x0e')))))))) &&
     (uVar1 = local_c & 0xff, (&DAT_00809950)[uVar1] == '\0')) {
    uVar8 = 0;
    if (uVar3 != 0) {
      pcVar5 = &DAT_00808af6;
      do {
        module = g_module_00807618;
        if ((*(int *)(pcVar5 + -6) == param_1) && (*pcVar5 == '\x01')) {
          pcVar11 = pcVar5 + -0x46;
          *pcVar5 = '\0';
          pcVar2 = LoadResourceString(0x4273,module);
          wsprintfA((LPSTR)&DAT_0080f33a,"%s %s",pcVar2,pcVar11);
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
          }
        }
        uVar8 = uVar8 + 1;
        pcVar5 = pcVar5 + 0x9c;
      } while (uVar8 < DAT_00808aaf);
    }
    local_18 = (uint)(byte)(&DAT_008087e8)[uVar1 * 0x51];
    local_1c = 8;
    local_14 = uVar1;
    thunk_FUN_0054edf0((undefined4 *)0x5,&local_1c,1,0xffffffff);
  }
  if ((&DAT_00809950)[local_c & 0xff] == '\0') {
    uVar1 = 0;
    uVar3 = (uint)DAT_00808aaf;
    if (uVar3 != 0) {
      piVar6 = &DAT_00808af0;
      while (*piVar6 != param_1) {
        uVar1 = uVar1 + 1;
        piVar6 = piVar6 + 0x27;
        if (uVar3 <= uVar1) {
          return;
        }
      }
      if (uVar1 != uVar3 - 1) {
        puVar9 = &DAT_00808b4c + uVar1 * 0x27;
        puVar10 = &DAT_00808ab0 + uVar1 * 0x27;
        for (uVar3 = ((uVar3 - uVar1) + -1) * 0x27 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
      }
      memset((void *)(&DAT_00808a14 + (uint)DAT_00808aaf * 0x9c), 0, 0x9c); /* compiler bulk-zero initialization */
      DAT_00808aaf = DAT_00808aaf - 1;
      if (g_playPanel_008016E4 != (PlayPanelTy *)0x0) {
        thunk_FUN_0053a540(g_playPanel_008016E4);
      }
    }
  }
  return;
}

