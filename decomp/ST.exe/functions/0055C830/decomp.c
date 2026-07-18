
void __thiscall
FUN_0055c830(void *this,int param_1,byte *param_2,undefined4 param_3,byte *param_4,char *param_5)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  CHAR local_688 [512];
  char local_488 [63];
  undefined1 local_449;
  char local_448 [259];
  undefined1 local_345;
  byte local_34 [15];
  undefined1 local_25;
  byte *local_f;
  undefined4 local_b;
  
  pbVar9 = param_4;
  if (*(char *)((int)this + 8) != '\0') {
    switch(param_1) {
    case 1:
    case 2:
      if ((*(char *)((int)this + 9) == '\0') && (DAT_0081174c != (undefined4 *)0x0)) {
        _strncpy((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        FUN_0072ee80(param_5,(byte *)s__4s_d_d_d_d_007c94d0);
        local_f = param_2;
        local_b = param_3;
        thunk_FUN_005a2380(DAT_0081174c,(undefined4 *)local_34);
        uVar7 = 0xffffffff;
        pbVar10 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar1 != 0);
        if (((~uVar7 < 100) && (DAT_00807360 != '\0')) && (param_1 == 2)) {
          uVar5 = FUN_006b0140(0x259a,DAT_00807618);
          wsprintfA(local_688,s__s__s_007c411c,pbVar9,uVar5);
LAB_0055cf74:
          thunk_FUN_005a1f00(1,&DAT_008016a0,local_688,5);
          return;
        }
      }
      break;
    case 3:
      if ((*(char *)((int)this + 9) == '\0') && (DAT_0081174c != (undefined4 *)0x0)) {
        _strncpy((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        thunk_FUN_005a26c0(DAT_0081174c,local_34);
        uVar7 = 0xffffffff;
        pbVar10 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar1 != 0);
        if ((~uVar7 < 100) && (DAT_00807360 != '\0')) {
          uVar5 = FUN_006b0140(0x259b,DAT_00807618);
          wsprintfA(local_688,s__s__s_007c411c,pbVar9,uVar5);
          goto LAB_0055cf74;
        }
      }
      break;
    case 4:
    case 10:
      pcVar3 = (char *)FUN_006b0140((-(uint)(param_1 != 4) & 2) + 0x2575,DAT_00807618);
      uVar7 = 0xffffffff;
      pcVar4 = pcVar3;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar8 = 0xffffffff;
      pbVar9 = param_4;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar1 != 0);
      param_2 = (byte *)FUN_006aac70(~uVar7 + ~uVar8 + 4);
      if (param_2 != (byte *)0x0) {
        wsprintfA((LPSTR)param_2,s__s__s_007c411c,pcVar3,param_4);
        if (*(char *)((int)this + 9) != '\0') {
          thunk_FUN_0055bdd0((char *)param_2,param_5);
          FUN_006ab060(&param_2);
          return;
        }
        if (DAT_0081174c != (undefined4 *)0x0) {
          thunk_FUN_005a1f00(9,param_2,param_5,0);
          FUN_006ab060(&param_2);
          return;
        }
        if (DAT_0081176c != 0) {
          pcVar4 = local_488;
          for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + 4;
          }
          *pcVar4 = '\0';
          _strncpy(local_488,(char *)param_2,0x40);
          local_449 = 0;
          _strncpy(local_448,param_5,0x410);
          local_345 = 0;
          thunk_FUN_005dd850((int)local_488);
        }
        FUN_006ab060(&param_2);
        return;
      }
      break;
    case 5:
      pbVar9 = (byte *)((int)this + 0x2c);
      pbVar10 = param_4;
      do {
        bVar1 = *pbVar9;
        bVar11 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_0055c9c0:
          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_0055c9c5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar11 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_0055c9c0;
        pbVar9 = pbVar9 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_0055c9c5:
      if (iVar6 != 0) {
        _strncpy((char *)((int)this + 0x2c),(char *)param_4,0x10);
        *(undefined1 *)((int)this + 0x3b) = 0;
        *(char *)((int)this + 0x2b) = (*(char *)((int)this + 0x2b) == '\a') + '\a';
      }
      if ((*(char *)((int)this + 9) == '\0') && (DAT_0081174c != (undefined4 *)0x0)) {
        thunk_FUN_005a1f00(CONCAT31((int3)((uint)param_5 >> 8),*(undefined1 *)((int)this + 0x2b)),
                           param_4,param_5,5);
        return;
      }
      break;
    case 6:
      pcVar4 = (char *)FUN_006b0140(0x2576,DAT_00807618);
      pbVar9 = param_4;
      uVar7 = 0xffffffff;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar8 = 0xffffffff;
      pbVar10 = param_4;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar1 != 0);
      param_2 = (byte *)FUN_006aac70(~uVar7 + ~uVar8 + 4);
      if (param_2 != (byte *)0x0) {
        uVar5 = FUN_006b0140(0x2576,DAT_00807618);
        wsprintfA((LPSTR)param_2,s__s__s_007c411c,uVar5,pbVar9);
        if (*(char *)((int)this + 9) != '\0') {
          thunk_FUN_0055bdd0((char *)param_2,param_5);
          FUN_006ab060(&param_2);
          return;
        }
        if (DAT_0081174c != (undefined4 *)0x0) {
          thunk_FUN_005a1f00(4,param_2,param_5,5);
          FUN_006ab060(&param_2);
          return;
        }
        if (DAT_0081176c != 0) {
          pcVar4 = local_488;
          for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + 4;
          }
          *pcVar4 = '\0';
          _strncpy(local_488,(char *)param_2,0x40);
          local_449 = 0;
          _strncpy(local_448,param_5,0x410);
          local_345 = 0;
          thunk_FUN_005dd850((int)local_488);
        }
        FUN_006ab060(&param_2);
        return;
      }
      break;
    case 7:
      if ((*(char *)((int)this + 9) == '\0') && (DAT_0081174c != (undefined4 *)0x0)) {
        thunk_FUN_005a1f00(1,&DAT_008016a0,param_5,5);
        thunk_FUN_005a2d70(DAT_0081174c);
        return;
      }
      break;
    case 9:
      if ((*(char *)((int)this + 9) == '\0') && (DAT_0081174c != (undefined4 *)0x0)) {
        _strncpy((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        local_f = param_2;
        local_b = param_3;
        thunk_FUN_005a2a60(DAT_0081174c,local_34);
        return;
      }
      break;
    case 0xd:
    case 0xf:
      if (DAT_0081174c != (undefined4 *)0x0) {
        *(undefined4 *)((int)this + 0x1b) = 0x6156;
        *(int *)((int)this + 0x1f) = param_1;
        (**(code **)*DAT_0081174c)((int)this + 0xb);
      }
      break;
    case 0x10:
      if (*(char *)((int)this + 9) != '\0') {
        thunk_FUN_0055bdd0((char *)param_4,param_5);
        return;
      }
      if (DAT_0081174c != (undefined4 *)0x0) {
        thunk_FUN_005a1f00(6,param_4,param_5,5);
        return;
      }
      if (DAT_0081176c != 0) {
        pcVar4 = local_488;
        for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + 4;
        }
        *pcVar4 = '\0';
        _strncpy(local_488,(char *)param_4,0x40);
        local_449 = 0;
        _strncpy(local_448,param_5,0x410);
        local_345 = 0;
        thunk_FUN_005dd850((int)local_488);
        return;
      }
      break;
    case 0x12:
      if (*(char *)((int)this + 9) != '\0') {
        thunk_FUN_0055bdd0((char *)param_4,param_5);
        return;
      }
      if (DAT_0081174c != (undefined4 *)0x0) {
        thunk_FUN_005a1f00(2,param_4,param_5,5);
        return;
      }
      if (DAT_0081176c != 0) {
        pcVar4 = local_488;
        for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + 4;
        }
        *pcVar4 = '\0';
        _strncpy(local_488,(char *)param_4,0x40);
        local_449 = 0;
        _strncpy(local_448,param_5,0x410);
        local_345 = 0;
        thunk_FUN_005dd850((int)local_488);
        return;
      }
      break;
    case 0x13:
      if (*(char *)((int)this + 9) != '\0') {
        thunk_FUN_0055bdd0((char *)0x0,param_5);
        return;
      }
      if (DAT_0081174c != (undefined4 *)0x0) {
        thunk_FUN_005a1f00(3,&DAT_008016a0,param_5,5);
        return;
      }
      if (DAT_0081176c != 0) {
        pcVar4 = local_488;
        for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + 4;
        }
        *pcVar4 = '\0';
        uVar7 = 0xffffffff;
        pcVar4 = &DAT_008016a0;
        do {
          pcVar3 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar3 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar3;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        pcVar4 = pcVar3 + -uVar7;
        pcVar3 = local_488;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        }
        _strncpy(local_448,param_5,0x410);
        local_345 = 0;
        thunk_FUN_005dd850((int)local_488);
        return;
      }
      break;
    case 0x17:
      if ((*(char *)((int)this + 9) == '\0') && (DAT_0081174c != (undefined4 *)0x0)) {
        thunk_FUN_005a1f00(7,param_4,param_5,5);
        return;
      }
      break;
    case 0xff:
      if ((*(char *)((int)this + 9) == '\0') && (DAT_0081174c != (undefined4 *)0x0)) {
        thunk_FUN_005a1f00(4,param_4,param_5,5);
        return;
      }
    }
  }
  return;
}

