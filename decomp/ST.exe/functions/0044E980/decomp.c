
void __cdecl
FUN_0044e980(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,char *param_5,
            undefined1 *param_6,undefined4 *param_7)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  *param_4 = DAT_0080677c;
  *param_5 = '\0';
  *param_6 = 0x1d;
  *param_7 = 0;
  if ((param_3 != 0xe) && (param_3 != 0xc)) {
    if (param_3 == 0xd) {
      if (param_2 == 0xb) {
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_007a9e94;
        do {
          pcVar6 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar6 + -uVar4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)param_5 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          param_5 = param_5 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_5 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          param_5 = param_5 + 1;
        }
        return;
      }
      if (param_2 == 0x16) {
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_007a9e9c;
        do {
          pcVar6 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar6 + -uVar4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)param_5 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          param_5 = param_5 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_5 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          param_5 = param_5 + 1;
        }
        return;
      }
      if (param_2 == 0x23) {
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_007a9ea4;
        do {
          pcVar6 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar6 + -uVar4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)param_5 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          param_5 = param_5 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_5 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          param_5 = param_5 + 1;
        }
        return;
      }
    }
    *param_4 = 0;
    return;
  }
  switch(param_2) {
  case 1:
    pcVar7 = &DAT_007a9e8c;
    break;
  case 2:
    pcVar7 = &DAT_007a9e84;
    break;
  case 3:
    pcVar7 = &DAT_007a9e7c;
    break;
  case 4:
    pcVar7 = &DAT_007a9e74;
    break;
  case 5:
    pcVar7 = &DAT_007a9e6c;
    break;
  case 6:
    pcVar7 = &DAT_007a9e64;
    break;
  case 7:
    pcVar7 = &DAT_007a9e5c;
    break;
  case 8:
    pcVar7 = &DAT_007a9e54;
    break;
  case 9:
    pcVar7 = &DAT_007a9e50;
    break;
  case 10:
    pcVar7 = &DAT_007a9e48;
    break;
  case 0xb:
    pcVar7 = &DAT_007a9e40;
    break;
  case 0xc:
    pcVar7 = &DAT_007a9e38;
    break;
  case 0xd:
    pcVar7 = &DAT_007a9e30;
    break;
  case 0xe:
    pcVar7 = &DAT_007a9e28;
    break;
  case 0xf:
    pcVar7 = &DAT_007a9e20;
    break;
  case 0x10:
    pcVar7 = &DAT_007a9e18;
    break;
  case 0x11:
    pcVar7 = &DAT_007a9e10;
    break;
  case 0x12:
    pcVar7 = &DAT_007a9e08;
    break;
  case 0x13:
    pcVar7 = &DAT_007a9e00;
    break;
  case 0x14:
    pcVar7 = &DAT_007a9df8;
    break;
  case 0x15:
    pcVar7 = &DAT_007a9df4;
    break;
  case 0x16:
    pcVar7 = &DAT_007a9dec;
    break;
  case 0x17:
    pcVar7 = &DAT_007a9de4;
    break;
  case 0x18:
    pcVar7 = &DAT_007a9ddc;
    break;
  case 0x19:
    pcVar7 = &DAT_007a9dd8;
    break;
  case 0x1a:
    pcVar7 = &DAT_007a9dd4;
    break;
  case 0x1b:
    pcVar7 = &DAT_007a9dd0;
    break;
  case 0x1c:
    pcVar7 = &DAT_007a9dcc;
    break;
  case 0x1d:
    pcVar7 = &DAT_007a9dc8;
    break;
  case 0x1e:
    pcVar7 = &DAT_007a9dc4;
    break;
  case 0x1f:
    pcVar7 = &DAT_007a9dc0;
    break;
  case 0x20:
    pcVar7 = &DAT_007a9dbc;
    break;
  case 0x21:
    pcVar7 = &DAT_007a9db8;
    break;
  case 0x22:
    pcVar7 = &DAT_007a9db4;
    break;
  case 0x23:
    pcVar7 = &DAT_007a9db0;
    break;
  case 0x24:
    pcVar7 = &DAT_007a9dac;
    break;
  case 0x25:
    pcVar7 = &DAT_007a9da4;
    break;
  case 0x26:
    pcVar7 = &DAT_007a9d9c;
    break;
  case 0x27:
    pcVar7 = &DAT_007a9d94;
    break;
  case 0x28:
    pcVar7 = &DAT_007a9d8c;
    break;
  default:
    *param_4 = 0;
    iVar3 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x12e,0,0,&DAT_007a4ccc,
                               s_STBoatC__GetVisualInfo_BODY_LEVE_007a9d60);
    if (iVar3 == 0) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar6 + -uVar4;
  pcVar6 = param_5;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (param_3 != 0xc) {
    return;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_007a9d88;
  do {
    pcVar6 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  do {
    pcVar7 = param_5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar7 = param_5 + 1;
    cVar1 = *param_5;
    param_5 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}

