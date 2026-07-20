
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0055C830_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_D=13;CASE_F=15;CASE_10=16;CASE_12=18;CASE_13=19;CASE_17=23;CASE_FF=255
    */

void __thiscall
FUN_0055c830(void *this,Global_sub_0055C830_param_1Enum param_1,byte *param_2,undefined4 param_3,
            byte *param_4,char *param_5)

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
  void *unaff_EDI;
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
    case CASE_1:
    case CASE_2:
      if ((*(char *)((int)this + 9) == '\0') && (g_fSGS_0081174C != (FSGSTy *)0x0)) {
        Library::MSVCRT::_strncpy((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        Library::MSVCRT::FUN_0072ee80(param_5,(byte *)s__4s_d_d_d_d_007c94d0);
        local_f = param_2;
        local_b = param_3;
        FSGSTy::AddPlayer(g_fSGS_0081174C,(undefined4 *)local_34);
        uVar7 = 0xffffffff;
        pbVar10 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar1 != 0);
        if (((~uVar7 < 100) && (DAT_00807360 != '\0')) && (param_1 == CASE_2)) {
          uVar5 = FUN_006b0140(0x259a,HINSTANCE_00807618);
          wsprintfA(local_688,s__s__s_007c411c,pbVar9,uVar5);
LAB_0055cf74:
          FSGSTy::AddMessage(g_fSGS_0081174C,1,&DAT_008016a0,local_688,5);
          return;
        }
      }
      break;
    case CASE_3:
      if ((*(char *)((int)this + 9) == '\0') && (g_fSGS_0081174C != (FSGSTy *)0x0)) {
        Library::MSVCRT::_strncpy((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        FSGSTy::DelPlayer(g_fSGS_0081174C,local_34);
        uVar7 = 0xffffffff;
        pbVar10 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar1 != 0);
        if ((~uVar7 < 100) && (DAT_00807360 != '\0')) {
          uVar5 = FUN_006b0140(0x259b,HINSTANCE_00807618);
          wsprintfA(local_688,s__s__s_007c411c,pbVar9,uVar5);
          goto LAB_0055cf74;
        }
      }
      break;
    case CASE_4:
    case CASE_A:
      pcVar3 = (char *)FUN_006b0140((-(uint)(param_1 != CASE_4) & 2) + 0x2575,HINSTANCE_00807618);
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
      param_2 = (byte *)Library::DKW::LIB::FUN_006aac70(~uVar7 + ~uVar8 + 4);
      if (param_2 != (byte *)0x0) {
        wsprintfA((LPSTR)param_2,s__s__s_007c411c,pcVar3,param_4);
        if (*(char *)((int)this + 9) != '\0') {
          thunk_FUN_0055bdd0((char *)param_2,param_5);
          FUN_006ab060(&param_2);
          return;
        }
        if (g_fSGS_0081174C != (FSGSTy *)0x0) {
          FSGSTy::AddMessage(g_fSGS_0081174C,9,param_2,param_5,0);
          FUN_006ab060(&param_2);
          return;
        }
        if (PTR_0081176c != (StartSystemTy *)0x0) {
          pcVar4 = local_488;
          for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + 4;
          }
          *pcVar4 = '\0';
          Library::MSVCRT::_strncpy(local_488,(char *)param_2,0x40);
          local_449 = 0;
          Library::MSVCRT::_strncpy(local_448,param_5,0x410);
          local_345 = 0;
          StartSystemTy::AddToChat(PTR_0081176c,(int)local_488);
        }
        FUN_006ab060(&param_2);
        return;
      }
      break;
    case CASE_5:
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
        Library::MSVCRT::_strncpy((char *)((int)this + 0x2c),(char *)param_4,0x10);
        *(undefined1 *)((int)this + 0x3b) = 0;
        *(char *)((int)this + 0x2b) = (*(char *)((int)this + 0x2b) == '\a') + '\a';
      }
      if ((*(char *)((int)this + 9) == '\0') && (g_fSGS_0081174C != (FSGSTy *)0x0)) {
        FSGSTy::AddMessage(g_fSGS_0081174C,
                           CONCAT31((int3)((uint)param_5 >> 8),*(undefined1 *)((int)this + 0x2b)),
                           param_4,param_5,5);
        return;
      }
      break;
    case CASE_6:
      pcVar4 = (char *)FUN_006b0140(0x2576,HINSTANCE_00807618);
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
      param_2 = (byte *)Library::DKW::LIB::FUN_006aac70(~uVar7 + ~uVar8 + 4);
      if (param_2 != (byte *)0x0) {
        uVar5 = FUN_006b0140(0x2576,HINSTANCE_00807618);
        wsprintfA((LPSTR)param_2,s__s__s_007c411c,uVar5,pbVar9);
        if (*(char *)((int)this + 9) != '\0') {
          thunk_FUN_0055bdd0((char *)param_2,param_5);
          FUN_006ab060(&param_2);
          return;
        }
        if (g_fSGS_0081174C != (FSGSTy *)0x0) {
          FSGSTy::AddMessage(g_fSGS_0081174C,4,param_2,param_5,5);
          FUN_006ab060(&param_2);
          return;
        }
        if (PTR_0081176c != (StartSystemTy *)0x0) {
          pcVar4 = local_488;
          for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + 4;
          }
          *pcVar4 = '\0';
          Library::MSVCRT::_strncpy(local_488,(char *)param_2,0x40);
          local_449 = 0;
          Library::MSVCRT::_strncpy(local_448,param_5,0x410);
          local_345 = 0;
          StartSystemTy::AddToChat(PTR_0081176c,(int)local_488);
        }
        FUN_006ab060(&param_2);
        return;
      }
      break;
    case CASE_7:
      if ((*(char *)((int)this + 9) == '\0') && (g_fSGS_0081174C != (FSGSTy *)0x0)) {
        FSGSTy::AddMessage(g_fSGS_0081174C,1,&DAT_008016a0,param_5,5);
        FSGSTy::JoinChannel(g_fSGS_0081174C,unaff_EDI);
        return;
      }
      break;
    case CASE_9:
      if ((*(char *)((int)this + 9) == '\0') && (g_fSGS_0081174C != (FSGSTy *)0x0)) {
        Library::MSVCRT::_strncpy((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        local_f = param_2;
        local_b = param_3;
        FSGSTy::ChangePlayer(g_fSGS_0081174C,local_34);
        return;
      }
      break;
    case CASE_D:
    case CASE_F:
      if (g_fSGS_0081174C != (FSGSTy *)0x0) {
        *(undefined4 *)((int)this + 0x1b) = 0x6156;
        *(Global_sub_0055C830_param_1Enum *)((int)this + 0x1f) = param_1;
        (*(code *)g_fSGS_0081174C->field_0000->field_0000)((int)this + 0xb);
      }
      break;
    case CASE_10:
      if (*(char *)((int)this + 9) != '\0') {
        thunk_FUN_0055bdd0((char *)param_4,param_5);
        return;
      }
      if (g_fSGS_0081174C != (FSGSTy *)0x0) {
        FSGSTy::AddMessage(g_fSGS_0081174C,6,param_4,param_5,5);
        return;
      }
      if (PTR_0081176c != (StartSystemTy *)0x0) {
        pcVar4 = local_488;
        for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + 4;
        }
        *pcVar4 = '\0';
        Library::MSVCRT::_strncpy(local_488,(char *)param_4,0x40);
        local_449 = 0;
        Library::MSVCRT::_strncpy(local_448,param_5,0x410);
        local_345 = 0;
        StartSystemTy::AddToChat(PTR_0081176c,(int)local_488);
        return;
      }
      break;
    case CASE_12:
      if (*(char *)((int)this + 9) != '\0') {
        thunk_FUN_0055bdd0((char *)param_4,param_5);
        return;
      }
      if (g_fSGS_0081174C != (FSGSTy *)0x0) {
        FSGSTy::AddMessage(g_fSGS_0081174C,2,param_4,param_5,5);
        return;
      }
      if (PTR_0081176c != (StartSystemTy *)0x0) {
        pcVar4 = local_488;
        for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + 4;
        }
        *pcVar4 = '\0';
        Library::MSVCRT::_strncpy(local_488,(char *)param_4,0x40);
        local_449 = 0;
        Library::MSVCRT::_strncpy(local_448,param_5,0x410);
        local_345 = 0;
        StartSystemTy::AddToChat(PTR_0081176c,(int)local_488);
        return;
      }
      break;
    case CASE_13:
      if (*(char *)((int)this + 9) != '\0') {
        thunk_FUN_0055bdd0((char *)0x0,param_5);
        return;
      }
      if (g_fSGS_0081174C != (FSGSTy *)0x0) {
        FSGSTy::AddMessage(g_fSGS_0081174C,3,&DAT_008016a0,param_5,5);
        return;
      }
      if (PTR_0081176c != (StartSystemTy *)0x0) {
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
        Library::MSVCRT::_strncpy(local_448,param_5,0x410);
        local_345 = 0;
        StartSystemTy::AddToChat(PTR_0081176c,(int)local_488);
        return;
      }
      break;
    case CASE_17:
      if ((*(char *)((int)this + 9) == '\0') && (g_fSGS_0081174C != (FSGSTy *)0x0)) {
        FSGSTy::AddMessage(g_fSGS_0081174C,7,param_4,param_5,5);
        return;
      }
      break;
    case CASE_FF:
      if ((*(char *)((int)this + 9) == '\0') && (g_fSGS_0081174C != (FSGSTy *)0x0)) {
        FSGSTy::AddMessage(g_fSGS_0081174C,4,param_4,param_5,5);
        return;
      }
    }
  }
  return;
}

