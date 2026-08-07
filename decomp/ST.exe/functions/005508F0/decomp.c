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
  char *pcVar9;
  undefined4 *puVar10;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  uint local_c;
  byte local_5;

  cVar7 = -1;
  uVar3 = (uint)DAT_00808aaf;
  uVar1 = 0;
  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(0xff));
  local_5 = 0;
  if (uVar3 != 0) {
    pcVar5 = &DAT_00808af6;
    do {
      if ((*(int *)(pcVar5 + -6) == param_1) && (*pcVar5 == '\x01')) {
        cVar7 = pcVar5[-2];
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(cVar7));
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
        module = g_hINSTANCE_00807618;
        if ((*(int *)(pcVar5 + -6) == param_1) && (*pcVar5 == '\x01')) {
          pcVar9 = pcVar5 + -0x46;
          *pcVar5 = '\0';
          pcVar2 = LoadResourceString(0x4273,module);
          wsprintfA((LPSTR)&DAT_0080f33a,"%s %s",pcVar2,pcVar9);
          if (g_popUp_008016D8 != nullptr) {
            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
          }
        }
        uVar8 = uVar8 + 1;
        pcVar5 = pcVar5 + 0x9c;
      } while (uVar8 < DAT_00808aaf);
    }
    local_18 = (uint)g_bulkInitializedRecords_008087C7[uVar1].field_0021;
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
        pcVar5 = (char *)(&DAT_00808b4c + uVar1 * 0x27);
        pcVar9 = &CHAR_00h_00808ab0 + uVar1 * 0x9c;
        for (uVar3 = ((uVar3 - uVar1) + -1) * 0x27 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pcVar9 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      puVar10 = (undefined4 *)
                ((int)g_bulkInitializedRecords_008087C7 + (uint)DAT_00808aaf * 0x9c + 0x24d);
      for (iVar4 = 0x27; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      DAT_00808aaf = DAT_00808aaf - 1;
      if (g_playPanel_008016E4 != nullptr) {
        PlayPanelTy::sub_0053A540(g_playPanel_008016E4);
      }
    }
  }
  return;
}

