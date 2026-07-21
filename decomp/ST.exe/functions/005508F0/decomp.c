
void __thiscall FUN_005508f0(void *this,int param_1)

{
  HINSTANCE module;
  uint uVar1;
  undefined4 extraout_EAX;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  uint local_c;
  byte local_5;
  
  cVar6 = -1;
  uVar2 = (uint)DAT_00808aaf;
  uVar1 = 0;
  local_c = CONCAT31(local_c._1_3_,0xff);
  local_5 = 0;
  if (uVar2 != 0) {
    pcVar4 = &DAT_00808af6;
    do {
      if ((*(int *)(pcVar4 + -6) == param_1) && (*pcVar4 == '\x01')) {
        cVar6 = pcVar4[-2];
        local_c = CONCAT31(local_c._1_3_,cVar6);
        break;
      }
      uVar1 = uVar1 + 1;
      pcVar4 = pcVar4 + 0x9c;
    } while (uVar1 < uVar2);
    if (uVar2 != 0) {
      pcVar4 = &DAT_00808af6;
      uVar1 = uVar2;
      do {
        if ((pcVar4[-2] == cVar6) && (*pcVar4 == '\x01')) {
          local_5 = local_5 + 1;
        }
        pcVar4 = pcVar4 + 0x9c;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  local_10 = this;
  if (((((DAT_0080877e != '\0') && (local_5 < 2)) && (cVar6 != -1)) &&
      (((DAT_008087a0 == '\x04' || (DAT_008087a0 == '\a')) ||
       ((DAT_008087a0 == '\x13' || ((DAT_008087a0 == '\r' || (DAT_008087a0 == '\x0e')))))))) &&
     (uVar1 = local_c & 0xff, (&DAT_00809950)[uVar1] == '\0')) {
    uVar7 = 0;
    if (uVar2 != 0) {
      pcVar4 = &DAT_00808af6;
      do {
        module = HINSTANCE_00807618;
        if ((*(int *)(pcVar4 + -6) == param_1) && (*pcVar4 == '\x01')) {
          pcVar10 = pcVar4 + -0x46;
          *pcVar4 = '\0';
          LoadResourceString(0x4273,module);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,extraout_EAX,pcVar10);
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
          }
        }
        uVar7 = uVar7 + 1;
        pcVar4 = pcVar4 + 0x9c;
      } while (uVar7 < DAT_00808aaf);
    }
    local_18 = (uint)(byte)(&DAT_008087e8)[uVar1 * 0x51];
    local_1c = 8;
    local_14 = uVar1;
    thunk_FUN_0054edf0((undefined4 *)0x5,&local_1c,1,0xffffffff);
  }
  if ((&DAT_00809950)[local_c & 0xff] == '\0') {
    uVar1 = 0;
    uVar2 = (uint)DAT_00808aaf;
    if (uVar2 != 0) {
      piVar5 = &DAT_00808af0;
      while (*piVar5 != param_1) {
        uVar1 = uVar1 + 1;
        piVar5 = piVar5 + 0x27;
        if (uVar2 <= uVar1) {
          return;
        }
      }
      if (uVar1 != uVar2 - 1) {
        puVar8 = &DAT_00808b4c + uVar1 * 0x27;
        puVar9 = &DAT_00808ab0 + uVar1 * 0x27;
        for (uVar2 = ((uVar2 - uVar1) + -1) * 0x27 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      puVar8 = (undefined4 *)(&DAT_00808a14 + (uint)DAT_00808aaf * 0x9c);
      for (iVar3 = 0x27; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      DAT_00808aaf = DAT_00808aaf - 1;
      if (g_playPanel_008016E4 != (PlayPanelTy *)0x0) {
        thunk_FUN_0053a540(g_playPanel_008016E4);
      }
    }
  }
  return;
}

