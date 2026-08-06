#include "../../pseudocode_runtime.h"


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
  char *pcVar3_mg2;
  char *pcVar4_mg5;
  char *pcVar4_mg6;
  char *pcVar4_mgB;
  char *pcVar4_mgA;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  CHAR local_688 [512];
  char local_488 [63];
  undefined1 local_449;
  char local_448 [259];
  undefined1 local_345;
  byte local_34 [15];
  undefined1 local_25;
  byte *local_f;
  undefined4 local_b;
  byte *pbVar9_mg0;
  byte *pbVar8_mg0;
  byte *pbVar8_mg1;
  byte *pbVar6_mg1;

  pbVar8_mg0 = param_4;
  if (STField<char>(this,8) != '\0') {
    switch(param_1) {
    case CASE_1:
    case CASE_2:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        Library::MSVCRT::_strncpy((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        Library::MSVCRT::FUN_0072ee80(param_5,(byte *)"%4s%d%d%d%d");
        local_f = param_2;
        local_b = param_3;
        FSGSTy::AddPlayer(g_fSGS_0081174C,(undefined4 *)local_34);
        uVar4 = 0xffffffff;
        pbVar6 = pbVar8_mg0;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
        if (((~uVar4 < 100) && (DAT_00807360 != '\0')) && (param_1 == CASE_2)) {
          pcVar4_mgB = LoadResourceString(0x259a,g_hINSTANCE_00807618);
          wsprintfA(local_688,"%s %s",pbVar8_mg0,pcVar4_mgB);
LAB_0055cf74:
          FSGSTy::AddMessage(g_fSGS_0081174C,1,&DAT_008016a0,local_688,5);
          return;
        }
      }
      break;
    case CASE_3:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        Library::MSVCRT::_strncpy((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        FSGSTy::DelPlayer(g_fSGS_0081174C,local_34);
        uVar4 = 0xffffffff;
        pbVar6 = pbVar8_mg0;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
        if ((~uVar4 < 100) && (DAT_00807360 != '\0')) {
          pcVar4_mgA = LoadResourceString(0x259b,g_hINSTANCE_00807618);
          wsprintfA(local_688,"%s %s",pbVar8_mg0,pcVar4_mgA);
          goto LAB_0055cf74;
        }
      }
      break;
    case CASE_4:
    case CASE_A:
      pcVar3_mg2 = LoadResourceString((-(uint)(param_1 != CASE_4) & 2) + 0x2575,g_hINSTANCE_00807618
                                     );
      uVar4 = 0xffffffff;
      pcVar7 = pcVar3_mg2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar5 = 0xffffffff;
      pbVar6_mg1 = param_4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar1 = *pbVar6_mg1;
        pbVar6_mg1 = pbVar6_mg1 + 1;
      } while (bVar1 != 0);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = Library::DKW::LIB::MemAlloc(~uVar4 + ~uVar5 + 4);
      if (param_2 != nullptr) {
        wsprintfA((LPSTR)param_2,"%s %s",pcVar3_mg2,param_4);
        if (STField<char>(this,9) != '\0') {
          thunk_FUN_0055bdd0((char *)param_2,param_5);
          FreeAndNull(&param_2);
          return;
        }
        if (g_fSGS_0081174C != nullptr) {
          FSGSTy::AddMessage(g_fSGS_0081174C,9,param_2,param_5,0);
          FreeAndNull(&param_2);
          return;
        }
        if (g_startSystem_0081176C != nullptr) {
          pcVar7 = local_488;
          for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
            pcVar7[0] = '\0';
            pcVar7[1] = '\0';
            pcVar7[2] = '\0';
            pcVar7[3] = '\0';
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = '\0';
          Library::MSVCRT::_strncpy(local_488,(char *)param_2,0x40);
          local_449 = 0;
          Library::MSVCRT::_strncpy(local_448,param_5,0x410);
          local_345 = 0;
          StartSystemTy::AddToChat(g_startSystem_0081176C,(int)local_488);
        }
        FreeAndNull(&param_2);
        return;
      }
      break;
    case CASE_5:
      pbVar6 = (byte *)((int)this + 0x2c);
      pbVar8 = param_4;
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_0055c9c0:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0055c9c5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_0055c9c0;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0055c9c5:
      if (iVar3 != 0) {
        Library::MSVCRT::_strncpy((char *)((int)this + 0x2c),(char *)param_4,0x10);
        STField<undefined1>(this,0x3b) = 0;
        STField<char>(this,0x2b) = (STField<char>(this,0x2b) == '\a') + '\a';
      }
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        FSGSTy::AddMessage(g_fSGS_0081174C,STField<byte>(this,0x2b),param_4,param_5,5);
        return;
      }
      break;
    case CASE_6:
      pcVar4_mg5 = LoadResourceString(0x2576,g_hINSTANCE_00807618);
      pbVar8_mg1 = param_4;
      uVar4 = 0xffffffff;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar4_mg5;
        pcVar4_mg5 = pcVar4_mg5 + 1;
      } while (cVar2 != '\0');
      uVar5 = 0xffffffff;
      pbVar9_mg0 = param_4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar1 = *pbVar9_mg0;
        pbVar9_mg0 = pbVar9_mg0 + 1;
      } while (bVar1 != 0);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = Library::DKW::LIB::MemAlloc(~uVar4 + ~uVar5 + 4);
      if (param_2 != nullptr) {
        pcVar4_mg6 = LoadResourceString(0x2576,g_hINSTANCE_00807618);
        wsprintfA((LPSTR)param_2,"%s %s",pcVar4_mg6,pbVar8_mg1);
        if (STField<char>(this,9) != '\0') {
          thunk_FUN_0055bdd0((char *)param_2,param_5);
          FreeAndNull(&param_2);
          return;
        }
        if (g_fSGS_0081174C != nullptr) {
          FSGSTy::AddMessage(g_fSGS_0081174C,4,param_2,param_5,5);
          FreeAndNull(&param_2);
          return;
        }
        if (g_startSystem_0081176C != nullptr) {
          pcVar7 = local_488;
          for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
            pcVar7[0] = '\0';
            pcVar7[1] = '\0';
            pcVar7[2] = '\0';
            pcVar7[3] = '\0';
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = '\0';
          Library::MSVCRT::_strncpy(local_488,(char *)param_2,0x40);
          local_449 = 0;
          Library::MSVCRT::_strncpy(local_448,param_5,0x410);
          local_345 = 0;
          StartSystemTy::AddToChat(g_startSystem_0081176C,(int)local_488);
        }
        FreeAndNull(&param_2);
        return;
      }
      break;
    case CASE_7:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        FSGSTy::AddMessage(g_fSGS_0081174C,1,&DAT_008016a0,param_5,5);
        FSGSTy::JoinChannel(g_fSGS_0081174C);
        return;
      }
      break;
    case CASE_9:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
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
      if (g_fSGS_0081174C != nullptr) {
        STField<undefined4>(this,0x1b) = 0x6156;
        STField<Global_sub_0055C830_param_1Enum>(this,0x1f) = param_1;
        g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
      }
      break;
    case CASE_10:
      if (STField<char>(this,9) != '\0') {
        thunk_FUN_0055bdd0((char *)param_4,param_5);
        return;
      }
      if (g_fSGS_0081174C != nullptr) {
        FSGSTy::AddMessage(g_fSGS_0081174C,6,param_4,param_5,5);
        return;
      }
      if (g_startSystem_0081176C != nullptr) {
        pcVar7 = local_488;
        for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = '\0';
        Library::MSVCRT::_strncpy(local_488,(char *)param_4,0x40);
        local_449 = 0;
        Library::MSVCRT::_strncpy(local_448,param_5,0x410);
        local_345 = 0;
        StartSystemTy::AddToChat(g_startSystem_0081176C,(int)local_488);
        return;
      }
      break;
    case CASE_12:
      if (STField<char>(this,9) != '\0') {
        thunk_FUN_0055bdd0((char *)param_4,param_5);
        return;
      }
      if (g_fSGS_0081174C != nullptr) {
        FSGSTy::AddMessage(g_fSGS_0081174C,2,param_4,param_5,5);
        return;
      }
      if (g_startSystem_0081176C != nullptr) {
        pcVar7 = local_488;
        for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = '\0';
        Library::MSVCRT::_strncpy(local_488,(char *)param_4,0x40);
        local_449 = 0;
        Library::MSVCRT::_strncpy(local_448,param_5,0x410);
        local_345 = 0;
        StartSystemTy::AddToChat(g_startSystem_0081176C,(int)local_488);
        return;
      }
      break;
    case CASE_13:
      if (STField<char>(this,9) != '\0') {
        thunk_FUN_0055bdd0(nullptr,param_5);
        return;
      }
      if (g_fSGS_0081174C != nullptr) {
        FSGSTy::AddMessage(g_fSGS_0081174C,3,&DAT_008016a0,param_5,5);
        return;
      }
      if (g_startSystem_0081176C != nullptr) {
        pcVar7 = local_488;
        for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = '\0';
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_008016a0;
        do {
          pcVar9 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar9 + -uVar4;
        pcVar9 = local_488;
        memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
        Library::MSVCRT::_strncpy(local_448,param_5,0x410);
        local_345 = 0;
        StartSystemTy::AddToChat(g_startSystem_0081176C,(int)local_488);
        return;
      }
      break;
    case CASE_17:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        FSGSTy::AddMessage(g_fSGS_0081174C,7,param_4,param_5,5);
        return;
      }
      break;
    case CASE_FF:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        FSGSTy::AddMessage(g_fSGS_0081174C,4,param_4,param_5,5);
        return;
      }
    }
  }
  return;
}

