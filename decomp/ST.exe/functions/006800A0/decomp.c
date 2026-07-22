
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=006829B0 @ 006829BF
   -> MOV MOV ESI,EAX */

int __cdecl FUN_006800a0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;

  iVar2 = thunk_FUN_0067ff00((char *)param_1);
  if (-1 < iVar2) {
    return 5;
  }
  iVar2 = thunk_FUN_0067ff50((char *)param_1);
  if (-1 < iVar2) {
    return 6;
  }
  iVar2 = thunk_FUN_0067ffa0((char *)param_1);
  if (-1 < iVar2) {
    return 7;
  }
  iVar2 = thunk_FUN_0067fff0((char *)param_1);
  if (-1 < iVar2) {
    return 8;
  }
  pcVar3 = thunk_FUN_0067eea0(param_1);
  if (pcVar3 != (char *)0x0) {
    return 1;
  }
  iVar7 = 0;
  iVar2 = PTR_00848a2c->field_0008;
  if (0 < iVar2) {
    do {
      pbVar5 = param_1;
      if (iVar7 < iVar2) {
        pbVar6 = *(byte **)(PTR_00848a2c->field_0014 + iVar7 * 4);
      }
      else {
        pbVar6 = (byte *)0x0;
      }
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00680161:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00680166;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00680161;
        pbVar6 = pbVar6 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00680166:
      if (iVar4 == 0) {
        if (-1 < iVar7) {
          return 2;
        }
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  iVar7 = 0;
  iVar2 = PTR_00848a34->field_0008;
  if (0 < iVar2) {
    do {
      pbVar5 = param_1;
      if (iVar7 < iVar2) {
        pbVar6 = *(byte **)(PTR_00848a34->field_0014 + iVar7 * 4);
      }
      else {
        pbVar6 = (byte *)0x0;
      }
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_006801cd:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006801d2;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_006801cd;
        pbVar6 = pbVar6 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006801d2:
      if (iVar4 == 0) {
        if (-1 < iVar7) {
          return 3;
        }
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  iVar2 = thunk_FUN_0067fc10(param_1);
  return (iVar2 < 0) - 1 & 4;
}

