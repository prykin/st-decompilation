#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x005a58e7) */
/* WARNING: Removing unreachable block (ram,0x005a5b40) */
/* WARNING: Removing unreachable block (ram,0x005a5f43) */
/* WARNING: Removing unreachable block (ram,0x005a5d46) */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404165|005A4350; family_names=FSGSTy::GetMessage; ret4=2;
   direct_offsets={10:8,14:74,18:16,1c:34}

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

int __thiscall FSGSTy::GetMessage(FSGSTy *this,STMessage *message)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  word wVar4;
  STMessageId SVar5;
  ushort *puVar6;
  FSGSTy_field_1EBEDArray *pFVar7;
  StartSystemTy *pSVar8;
  FSGSTy_field_1FB3DArray *pFVar9;
  FSGSTy_field_1FB3Element *pFVar10;
  dword dVar11;
  ccFntTy *pcVar12;
  LPCSTR pCVar13;
  LPCSTR pCVar14;
  LPCSTR pCVar15;
  int *piVar16;
  RecoveredSourceFamily_dibcopy *pRVar17;
  bool bVar44;
  DWORD DVar20;
  int local_EAX_61;
  UINT UVar19;
  undefined4 *puVar20;
  char *pcVar38_mg43;
  DArrayTy *local_EAX_1705;
  int local_EAX_3145;
  int local_EAX_3627;
  undefined4 uVar21;
  int local_EAX_3743;
  char *pcVar22;
  DWORD DVar23;
  char *pcVar38_mg26;
  char *pcVar38_mg33;
  char *pcVar38_mg27;
  char *pcVar38_mg29;
  char *pcVar38_mg2B;
  char *pcVar38_mg2D;
  char *pcVar38_mg2F;
  char *pcVar38_mg31;
  char *pcVar38_mg21;
  char *pcVar38_mg23;
  char *pcVar38_mg3B;
  char *pcVar38_mg3D;
  char *pcVar38_mg3F;
  ulong uVar24;
  LPCSTR pCVar25;
  HINSTANCE pHVar26;
  char *pcVar38_mg1;
  BITMAPINFO *pBVar27;
  int iVar21;
  char *pcVar38_mg20;
  char *pcVar38_mg1D;
  char *pcVar38_mg1F;
  char *pcVar38_mg1A;
  char *pcVar38_mg9;
  char *pcVar38_mgA;
  char *pcVar38_mgB;
  char *pcVar38_mgC;
  char *pcVar38_mgD;
  char *pcVar38_mgE;
  char *pcVar38_mgF;
  char *pcVar38_mg10;
  char *pcVar38_mg11;
  char *pcVar38_mg12;
  char *pcVar38_mg16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  DArrayTy *pDVar28;
  int local_EAX_18792;
  int iVar46;
  uint uVar29;
  MMsgTy *pMVar30;
  uint *puVar31;
  FSGSTy_field_1FB3Element *element_1fb3;
  byte bVar32;
  FSGSTy *this_00;
  uint uVar33;
  byte *pbVar34;
  CursorClassTy *pCVar35;
  void *pvVar36;
  char *pcVar37;
  STMessage *pSVar38;
  byte *pbVar39;
  LPCSTR pCVar40;
  AnonShape_005A4350_59BACD18 *pAVar41;
  bool bVar42;
  int iVar43;
  int iVar44;
  DWORD DVar45;
  int iVar47;
  int iVar48;
  char local_6b8 [32];
  undefined1 local_698;
  CHAR local_4b8 [260];
  InternalExceptionFrame local_3b4;
  undefined4 local_370 [7];
  undefined4 local_354 [7];
  undefined4 local_338 [7];
  undefined4 local_31c [7];
  undefined4 local_300 [7];
  undefined4 local_2e4 [7];
  undefined4 local_2c8 [7];
  undefined4 local_2ac [7];
  InternalExceptionFrame local_290;
  undefined4 local_24c [4];
  undefined4 local_23c;
  uint local_238;
  undefined4 local_22c [4];
  InternalExceptionFrame local_21c;
  undefined4 local_1d8 [2];
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined4 local_1bc [4];
  undefined4 local_1ac;
  undefined4 local_1a8;
  STMessage local_19c;
  undefined4 local_17c [2];
  undefined2 local_172;
  undefined2 local_170;
  STMessage local_160;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  char *local_130;
  undefined *local_12c;
  undefined *local_128;
  undefined4 local_124;
  char *local_120;
  char *local_11c;
  char *local_118;
  char *local_114;
  char *local_110;
  char *local_10c;
  char *local_108;
  char *local_104;
  char *local_100;
  char *local_fc;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  undefined *local_ec;
  undefined *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  FSGSTy *local_20;
  AnonShape_005A4350_59BACD18 *local_1c;
  char local_15;
  tagBITMAPINFO *local_14;
  uint *local_10;
  FSGSTy_field_1EBEElement *element_1ebe;
  AnonShape_005A4350_59BACD18 *local_c;
  uint *local_8;
  DArrayTy *pDVar25;

  local_20 = this;
  DVar20 = STAppC::sub_006E51B0(this->field_0010);
  pcVar37 = nullptr;
  this->field_0061 = DVar20;
  local_21c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_21c;
  local_EAX_61 = Library::MSVCRT::__setjmp3(local_21c.jumpBuffer,0);
  this_00 = local_20;
  if (local_EAX_61 != 0) {
    g_currentExceptionFrame = local_21c.previous;
    iVar46 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x1048,0,local_EAX_61,
                                "%s","FSGSTy::GetMessage");
    if (iVar46 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_61,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x1048);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_20,message);
  pCVar35 = g_cursorClass_00802A30;
  SVar5 = message->id;
  if (MESS_FSGSTY_6949 < SVar5) {
    if (SVar5 < MESS_SHARED_6980) {
      if (SVar5 == MESS_SHARED_697F) {
        dVar11 = (message->arg2).u32;
        local_60 = *(int *)(dVar11 + 0x24) + -0xb4;
        local_58 = *(int *)(dVar11 + 0x2c);
        local_54 = *(int *)(dVar11 + 0x30);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar33 = *(int *)(dVar11 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
        local_5c = uVar33;
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,
                     *(int *)(dVar11 + 0x24) + -0xb5,uVar33,local_58 + 2,local_54,0xff);
        ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,local_60,
                         uVar33,local_58,local_54);
        if ((message->arg0).ptr != nullptr) {
          ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,*(char **)(message->arg0).ptr,0,-1,0);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar43 = (uint)uVar3 + local_60;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1AC0,0,iVar43,uVar33 + 1,iVar43
                       ,local_54 + -2 + uVar33,9,0xd);
        }
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
        goto cf_common_exit_005A8CA7;
      }
      switch(SVar5) {
      case MESS_FSGSTY_694A:
      case 0x694e:
        this_00->CloseButtons();
        this_00->array_00BC[0xc].field_01E1 = (message->id != MESS_FSGSTY_694A) + '\a';
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        if (pSVar8->field_02E6 == nullptr) break;
        puVar20 = local_31c;
        for (iVar43 = 6; iVar43 != 0; iVar43 = iVar43 + -1) {
          *puVar20 = 0xffffffff;
          puVar20 = puVar20 + 1;
        }
        *(undefined2 *)puVar20 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        MMsgTy::StatePanel(pSVar8->field_02E6,(int)local_31c);
        puVar20 = &local_a0;
        goto cf_common_exit_005A7F3B;
      case 0x694b:
        cVar2 = this_00->array_00BC[0xc].field_01DF;
        if (cVar2 == '\x02') {
          this_00->CloseButtons();
          this_00->array_00BC[0xc].field_01E1 = 5;
          pSVar8 = this_00->array_00BC[0xc].field_01DB;
          if (pSVar8->field_02E6 != nullptr) {
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            local_90 = 0x10101;
            MMsgTy::thunk_FUN_005b8f40(pSVar8->field_02E6,&local_90);
          }
        }
        else if (cVar2 == '\x05') {
          if (0 < (int)this_00->field_1AF4->elementSize) {
            pcVar37 = *(char **)this_00->field_1AF4->growCapacity;
          }
          iVar43 = -1;
          do {
            if (iVar43 == 0) break;
            iVar43 = iVar43 + -1;
            cVar2 = *pcVar37;
            pcVar37 = pcVar37 + 1;
          } while (cVar2 != '\0');
          if (iVar43 == -2) {
            pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
            if (pMVar30 != nullptr) {
              MMsgTy::SetMessage(pMVar30,0x2592,'\0',nullptr,nullptr,
                                 nullptr,0,0);
            }
          }
          else {
            puVar20 = local_1d8;
            for (iVar43 = 6; iVar43 != 0; iVar43 = iVar43 + -1) {
              *puVar20 = 0xffffffff;
              puVar20 = puVar20 + 1;
            }
            *(undefined2 *)puVar20 = 0xffff;
            local_1cc = 1;
            local_1ce = 1;
            pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
            if (pMVar30 != nullptr) {
              MMsgTy::StatePanel(pMVar30,(int)local_1d8);
            }
            pCVar35 = g_cursorClass_00802A30;
            if (g_cursorClass_00802A30 != nullptr) {
              iVar43 = g_cursorClass_00802A30->field_00C9;
              iVar44 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar35->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
              CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
              pCVar35->field_00D2 = 0;
              pCVar35->field_04DF = -1;
            }
            if ((int)this_00->field_1AF4->elementSize < 1) {
              pcVar37 = nullptr;
            }
            else {
              pcVar37 = *(char **)this_00->field_1AF4->growCapacity;
            }
            if ((int)this_00->field_1AEC->elementSize < 1) {
              pcVar22 = nullptr;
            }
            else {
              pcVar22 = *(char **)this_00->field_1AEC->growCapacity;
            }
            if ((int)this_00->field_1AE8->elementSize < 1) {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,nullptr,pcVar22,pcVar37);
            }
            else {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,
                         *(char **)this_00->field_1AE8->growCapacity,pcVar22,pcVar37);
            }
          }
        }
        break;
      case 0x694c:
        if ((this_00->field_1AAB != (LPCSTR)0x0) &&
           (pHVar26 = ShellExecuteA(HWND_00856d78,&DAT_007cc624,this_00->field_1AAB,(LPCSTR)0x0,
                                    (LPCSTR)0x0,1), 0x20 < (int)pHVar26)) {
          CFsgsConnection::BannerClick((CFsgsConnection *)&DAT_00802a90,this_00->field_1AAF);
        }
        break;
      case MESS_PRIVIDERTY_6952:
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        switch(this_00->array_00BC[0xc].field_01DF) {
        case 6:
          local_30 = 0x10000;
        case 3:
          local_30 = STReplaceLowByte((uint32_t)(local_30), (uint8_t)(1));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case 5:
          STPiece<0,2>(local_30) = CONCAT11(1,(undefined1)local_30);
        case 4:
          local_2c = 0x10100;
          this_00->array_00BC[0xc].field_01E1 = 2;
          break;
        case 7:
        case 8:
          local_30 = 0x100;
        case 9:
          this_00->array_00BC[0xc].field_01E1 = 6;
          break;
        case 10:
          pbVar39 = this_00->field_1B0C;
          if (pbVar39 != nullptr) {
            pcVar37 = &CHAR_00h_00807e1d;
            do {
              bVar32 = *pbVar39;
              bVar42 = bVar32 < (byte)*pcVar37;
              if (bVar32 != *pcVar37) {
LAB_005a63e7:
                iVar43 = (1 - (uint)bVar42) - (uint)(bVar42 != 0);
                goto LAB_005a63ec;
              }
              if (bVar32 == 0) break;
              bVar32 = pbVar39[1];
              bVar42 = bVar32 < (byte)pcVar37[1];
              if (bVar32 != pcVar37[1]) goto LAB_005a63e7;
              pbVar39 = pbVar39 + 2;
              pcVar37 = pcVar37 + 2;
            } while (bVar32 != 0);
            iVar43 = 0;
LAB_005a63ec:
            if (iVar43 == 0) {
              if ((int)this_00->field_1B00->elementSize < 1) {
                pcVar37 = nullptr;
              }
              else {
                pcVar37 = *(char **)this_00->field_1B00->growCapacity;
              }
              if ((int)this_00->field_1AFC->elementSize < 1) {
                pcVar22 = nullptr;
              }
              else {
                pcVar22 = *(char **)this_00->field_1AFC->growCapacity;
              }
              if ((int)this_00->field_1AF8->elementSize < 1) {
                pbVar39 = nullptr;
              }
              else {
                pbVar39 = *(byte **)this_00->field_1AF8->growCapacity;
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar39,pcVar22,pcVar37,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              local_e4 = DAT_008030d4;
              local_110 = "Profile\\Age";
              local_f0 = &DAT_00802ad4;
              local_10c = "Profile\\Sex";
              local_ec = &DAT_00802cd4;
              local_108 = "Profile\\Location";
              local_e8 = &DAT_00802ed4;
              local_104 = "Profile\\Description";
              CFsgsConnection::UpdateInfo((CFsgsConnection *)&DAT_00802a90,4,&local_110,&local_f0);
            }
          }
          this_00->array_00BC[0xc].field_01E1 = this_00->field_1ED2;
        }
        this_00->CloseButtons();
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        if (pSVar8->field_02E6 != nullptr) {
          puVar20 = local_2e4;
          for (iVar43 = 6; iVar43 != 0; iVar43 = iVar43 + -1) {
            *puVar20 = 0xffffffff;
            puVar20 = puVar20 + 1;
          }
          *(undefined2 *)puVar20 = 0xffff;
          MMsgTy::StatePanel(pSVar8->field_02E6,(int)local_2e4);
          MMsgTy::thunk_FUN_005b8f40((this_00->array_00BC[0xc].field_01DB)->field_02E6,&local_30);
        }
        break;
      case 0x6953:
        puVar20 = local_17c;
        for (iVar43 = 6; iVar43 != 0; iVar43 = iVar43 + -1) {
          *puVar20 = 0xffffffff;
          puVar20 = puVar20 + 1;
        }
        *(undefined2 *)puVar20 = 0xffff;
        local_170 = 1;
        local_172 = 1;
        if ((int)this_00->field_1AE8->elementSize < 1) {
          pcVar37 = nullptr;
        }
        else {
          pcVar37 = *(char **)this_00->field_1AE8->growCapacity;
        }
        Library::MSVCRT::_strncpy(&CHAR_00h_00807e1d,pcVar37,0x40);
        DAT_00807e5c = 0;
        if ((int)this_00->field_1AEC->elementSize < 1) {
          pcVar37 = nullptr;
        }
        else {
          pcVar37 = *(char **)this_00->field_1AEC->growCapacity;
        }
        uVar33 = 0xffffffff;
        do {
          pcVar22 = pcVar37;
          if (uVar33 == 0) break;
          uVar33 = uVar33 - 1;
          pcVar22 = pcVar37 + 1;
          cVar2 = *pcVar37;
          pcVar37 = pcVar22;
        } while (cVar2 != '\0');
        uVar33 = ~uVar33;
        pcVar37 = pcVar22 + -uVar33;
        pcVar22 = &CHAR_00h_00807e5d;
        memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
        uVar29 = 0;
        iVar43 = -1;
        pcVar37 = &CHAR_00h_00807e5d;
        do {
          if (iVar43 == 0) break;
          iVar43 = iVar43 + -1;
          cVar2 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar2 != '\0');
        if (iVar43 == -2) {
          pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
          if (pMVar30 != nullptr) {
            MMsgTy::SetMessage(pMVar30,0x2592,'\0',nullptr,nullptr,
                               nullptr,0,0);
          }
          break;
        }
        cVar2 = this_00->array_00BC[0xc].field_01DF;
        if (cVar2 != '\x02') {
          if (cVar2 == '\x04') {
            if ((int)this_00->field_1AF0->elementSize < 1) {
              pbVar39 = nullptr;
            }
            else {
              pbVar39 = *(byte **)this_00->field_1AF0->growCapacity;
            }
            pcVar37 = &CHAR_00h_00807e5d;
            do {
              bVar32 = *pcVar37;
              bVar42 = bVar32 < *pbVar39;
              if (bVar32 != *pbVar39) {
LAB_005a6653:
                iVar43 = (1 - (uint)bVar42) - (uint)(bVar42 != 0);
                goto LAB_005a6658;
              }
              if (bVar32 == 0) break;
              bVar32 = pcVar37[1];
              bVar42 = bVar32 < pbVar39[1];
              if (bVar32 != pbVar39[1]) goto LAB_005a6653;
              pcVar37 = pcVar37 + 2;
              pbVar39 = pbVar39 + 2;
            } while (bVar32 != 0);
            iVar43 = 0;
LAB_005a6658:
            if (iVar43 == 0) {
              pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
              if (pMVar30 != nullptr) {
                MMsgTy::StatePanel(pMVar30,(int)local_17c);
              }
              pCVar35 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 != nullptr) {
                iVar43 = g_cursorClass_00802A30->field_00C9;
                iVar44 = g_cursorClass_00802A30->field_00C5;
                g_cursorClass_00802A30->field_0493 = CASE_5;
                pCVar35->field_0494 = 0xffff;
                CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
                CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
                pCVar35->field_00D2 = 0;
                pCVar35->field_04DF = -1;
              }
              if ((int)this_00->field_1B00->elementSize < 1) {
                pcVar37 = nullptr;
              }
              else {
                pcVar37 = *(char **)this_00->field_1B00->growCapacity;
              }
              if ((int)this_00->field_1AFC->elementSize < 1) {
                pcVar22 = nullptr;
              }
              else {
                pcVar22 = *(char **)this_00->field_1AFC->growCapacity;
              }
              if ((int)this_00->field_1AF8->elementSize < 1) {
                pbVar39 = nullptr;
              }
              else {
                pbVar39 = *(byte **)this_00->field_1AF8->growCapacity;
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar39,pcVar22,pcVar37,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              CFsgsConnection::CreateNewAccount
                        ((CFsgsConnection *)&DAT_00802a90,&CHAR_00h_00807e1d,&CHAR_00h_00807e5d);
            }
            else {
              pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
              if (pMVar30 != nullptr) {
                MMsgTy::SetMessage(pMVar30,0x258a,'\0',nullptr,nullptr,
                                   nullptr,0,0);
              }
            }
          }
          break;
        }
        pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar30 != nullptr) {
          MMsgTy::StatePanel(pMVar30,(int)local_17c);
        }
        pCVar35 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != nullptr) {
          iVar43 = g_cursorClass_00802A30->field_00C9;
          iVar44 = g_cursorClass_00802A30->field_00C5;
          g_cursorClass_00802A30->field_0493 = CASE_5;
          pCVar35->field_0494 = 0xffff;
          CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
          CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
          pCVar35->field_00D2 = 0;
          pCVar35->field_04DF = -1;
        }
LAB_005a67e1:
        uVar24 = CFsgsConnection::Login
                           ((CFsgsConnection *)&DAT_00802a90,&CHAR_00h_00807e1d,&CHAR_00h_00807e5d);
        if (uVar24 == 0) {
          DVar23 = GetLastError();
          thunk_FUN_0055beb0(&DAT_00802a90,DVar23);
        }
        DAT_00802a9a = 0;
        break;
      case 0x6954:
        this_00->CloseButtons();
        this_00->array_00BC[0xc].field_01E1 = 4;
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        if (pSVar8->field_02E6 != nullptr) {
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_c0 = 0x10101;
          MMsgTy::thunk_FUN_005b8f40(pSVar8->field_02E6,&local_c0);
        }
        break;
      case 0x6955:
        pCVar13 = (LPCSTR)this_00->field_1AB7;
        pCVar25 = (LPCSTR)0x0;
        pCVar40 = (LPCSTR)0x0;
        if (pCVar13 != (LPCSTR)0x0) {
          if ((message->arg0).u32 == 0) {
            switch(this_00->array_00BC[0xc].field_01DF) {
            case 2:
            case 6:
            case 7:
              goto switchD_005a6a92_caseD_2;
            case 4:
              pCVar40 = (LPCSTR)this_00->field_1AC4;
              if (pCVar13 == pCVar40) {
                pCVar25 = pCVar40;
                pCVar40 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar13 == (LPCSTR)this_00->field_1AC8) {
                pCVar25 = (LPCSTR)this_00->field_1AC8;
                pCVar40 = (LPCSTR)this_00->field_1ACC;
              }
              else if (pCVar13 == (LPCSTR)this_00->field_1ACC) {
                pCVar25 = (LPCSTR)this_00->field_1ACC;
                pCVar40 = (LPCSTR)this_00->field_1AD8;
              }
              else if (pCVar13 == (LPCSTR)this_00->field_1AD8) {
                pCVar25 = (LPCSTR)this_00->field_1AD8;
                pCVar40 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar13 == (LPCSTR)this_00->field_1ADC) {
                pCVar25 = (LPCSTR)this_00->field_1ADC;
                pCVar40 = (LPCSTR)this_00->field_1AE0;
              }
              else {
                if (pCVar13 != (LPCSTR)this_00->field_1AE0) goto LAB_005a6cc4;
                pCVar25 = (LPCSTR)this_00->field_1AE0;
                pCVar40 = this_00->field_1AE4;
              }
              break;
            case 5:
              pCVar40 = (LPCSTR)this_00->field_1AC4;
              if (pCVar13 == pCVar40) {
                pCVar25 = pCVar40;
                pCVar40 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar13 == (LPCSTR)this_00->field_1AC8) {
                pCVar25 = (LPCSTR)this_00->field_1AC8;
                pCVar40 = (LPCSTR)this_00->field_1AD4;
              }
              else if (pCVar13 == (LPCSTR)this_00->field_1AD4) {
                pCVar25 = (LPCSTR)this_00->field_1AD4;
                pCVar40 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar25 = (LPCSTR)this_00->field_1ACC;
              }
              break;
            case 10:
              pCVar40 = (LPCSTR)this_00->field_1AD8;
              if (pCVar13 == pCVar40) {
                pCVar25 = pCVar40;
                pCVar40 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar13 == (LPCSTR)this_00->field_1ADC) {
                pCVar25 = (LPCSTR)this_00->field_1ADC;
                pCVar40 = (LPCSTR)this_00->field_1AE0;
              }
              else if (pCVar13 == (LPCSTR)this_00->field_1AE0) {
                pCVar25 = (LPCSTR)this_00->field_1AE0;
                pCVar40 = this_00->field_1AE4;
              }
              else {
LAB_005a6cc4:
                pCVar25 = this_00->field_1AE4;
              }
            }
          }
          else {
            switch(this_00->array_00BC[0xc].field_01DF) {
            case 2:
            case 6:
            case 7:
switchD_005a6a92_caseD_2:
              pCVar40 = (LPCSTR)this_00->field_1AC4;
              if (pCVar13 == pCVar40) {
                pCVar25 = pCVar40;
                pCVar40 = (LPCSTR)this_00->field_1AC8;
              }
              else {
                pCVar25 = (LPCSTR)this_00->field_1AC8;
              }
              break;
            case 4:
              pCVar40 = (LPCSTR)this_00->field_1AC4;
              if (pCVar13 == pCVar40) {
                pCVar25 = pCVar40;
                pCVar40 = this_00->field_1AE4;
              }
              else {
                pCVar14 = (LPCSTR)this_00->field_1AC8;
                pCVar25 = pCVar14;
                if (((pCVar13 != pCVar14) &&
                    (pCVar15 = (LPCSTR)this_00->field_1ACC, pCVar25 = pCVar15, pCVar40 = pCVar14,
                    pCVar13 != pCVar15)) &&
                   (pCVar14 = (LPCSTR)this_00->field_1AD8, pCVar25 = pCVar14, pCVar40 = pCVar15,
                   pCVar13 != pCVar14)) {
                  pCVar15 = (LPCSTR)this_00->field_1ADC;
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case 5:
              pCVar40 = (LPCSTR)this_00->field_1AC4;
              if (pCVar13 == pCVar40) {
                pCVar25 = pCVar40;
                pCVar40 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar14 = (LPCSTR)this_00->field_1AC8;
                pCVar25 = pCVar14;
                if ((pCVar13 != pCVar14) &&
                   (pCVar15 = (LPCSTR)this_00->field_1AD4, pCVar25 = pCVar15, pCVar40 = pCVar14,
                   pCVar13 != pCVar15)) {
                  pCVar25 = (LPCSTR)this_00->field_1ACC;
                  pCVar40 = pCVar15;
                }
              }
              break;
            case 10:
              pCVar14 = (LPCSTR)this_00->field_1AD8;
              if (pCVar13 == pCVar14) {
                pCVar25 = pCVar14;
                pCVar40 = this_00->field_1AE4;
              }
              else {
                pCVar15 = (LPCSTR)this_00->field_1ADC;
joined_r0x005a6ba3:
                pCVar25 = pCVar15;
                pCVar40 = pCVar14;
                if ((pCVar13 != pCVar15) &&
                   (pCVar14 = (LPCSTR)this_00->field_1AE0, pCVar25 = pCVar14, pCVar40 = pCVar15,
                   pCVar13 != pCVar14)) {
                  pCVar25 = this_00->field_1AE4;
                  pCVar40 = pCVar14;
                }
              }
            }
          }
        }
        this_00->field_002D = 0x20;
        if (pCVar25 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 0;
          FUN_006e6080(this_00,2,pCVar25,(undefined4 *)&this_00->field_0x1d);
        }
        if (pCVar40 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 1;
          FUN_006e6080(this_00,2,pCVar40,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_CHOOSEMAPTY_6956:
        this_00->field_1ED2 = 1;
LAB_005a6d57:
        DoLogon(this_00);
        break;
      case MESS_FSGSTY_6957:
        puVar6 = this_00->field_1AC0;
        uVar33 = *(uint *)(puVar6 + 10);
        if (uVar33 == 0) {
          uVar33 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(puVar6 + 4);
        }
        puVar20 = (undefined4 *)FUN_006b4fa0((int *)puVar6);
        for (uVar29 = uVar33 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
          *puVar20 = 0xffffffff;
          puVar20 = puVar20 + 1;
        }
        for (uVar33 = uVar33 & 3; uVar33 != 0; uVar33 = uVar33 - 1) {
          *(undefined1 *)puVar20 = 0xff;
          puVar20 = (undefined4 *)((int)puVar20 + 1);
        }
        ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,0,0x16,0x1b8
                         ,0xf0);
        iVar48 = -1;
        iVar47 = -1;
        uVar33 = 2;
        iVar44 = -1;
        iVar43 = -2;
        pcVar38_mg1 = LoadResourceString(0x25be,g_hINSTANCE_00807618);
        ccFntTy::WrTxt(this_00->array_00BC[0xc].field_01F3,pcVar38_mg1,iVar43,iVar44,uVar33,iVar47,
                       iVar48);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,PTR_s_UPDATES__0079c020,
                  &DAT_0080f126);
        wsprintfA(local_4b8,"subtitans/%s",&DAT_0080f126);
        CFsgsConnection::DownloadFile
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pCVar35 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != nullptr) {
          g_cursorClass_00802A30->field_0493 = CASE_5;
          pCVar35->field_0494 = 0xffff;
          CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
          CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
          pCVar35->field_00D2 = 0;
          pCVar35->field_04DF = -1;
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (MESS_SHARED_8160 < SVar5) {
      if (SVar5 < MESS_SHARED_C0A2) {
        if (SVar5 == MESS_FSGSTY_C0A1) {
          if ((this_00->array_00BC[0xc].field_01EB != 0) && (this_00->field_1B10 != 0)) {
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 1;
            FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)&this_00->field_0x1d);
          }
          goto cf_common_exit_005A8CA7;
        }
        switch(SVar5) {
        case MESS_SIDTY_8161:
          if ((this_00->field_1E8E == 0) || (this_00->field_1E9A == nullptr)) break;
          pAVar41 = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
          local_1c = pAVar41;
          FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)&pAVar41->field_0x24,
                       (uint)(message->arg1).words.high + *(int *)&pAVar41->field_0x28,
                       pAVar41->field_002C,0x11);
          if (this_00->array_00BC[0xc].field_01DF == '\x06') {
            iVar43 = (uint)(message->arg1).words.high + *(int *)&pAVar41->field_0x28;
            PutDDXClip(*(int *)&pAVar41->field_0x24,iVar43,*(int *)&pAVar41->field_0x24 + -0x1e9,
                       iVar43 + -0x5e,pAVar41->field_002C,(byte *)0x11,'\x01',this_00->field_1E9A);
            FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                         pAVar41->field_002C,0x11,0xff);
            if (this_00->array_00BC[0xc].field_01E0 == '\0') {
              pDVar28 = this_00->field_1EA6;
              if (pDVar28 != nullptr) {
                uVar33 = (uint)(message->arg0).words.low;
                if (uVar33 < pDVar28->count) {
                  local_8 = DArrayAt<uint>(pDVar28, uVar33);
                }
                else {
                  local_8 = nullptr;
                }
                if (local_8 != nullptr) {
                  ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0x23,0,
                                   pAVar41->field_002C + -0x46,0x11);
                  if (STField<undefined1>(local_8,0x2d) == '\0') {
                    local_c = (AnonShape_005A4350_59BACD18 *)
                              thunk_FUN_0055c050(&DAT_00802a90,(int)local_8);
                    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,1,'\x01',
                           (byte *)local_c);
                    if (local_c != nullptr) {
                      FreeAndNull(&local_c);
                    }
                    ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)local_8,0,-1,
                                   (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2);
                    if ((STField<undefined1>(local_8,0x25) & 0x10) != 0) {
                      pBVar27 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                             this_00->field_1A8B,3);
                      FUN_006b5440((ushort *)this_00->field_1E8E,0,pAVar41->field_002C + -0x1d,
                                   (0x11 - (pBVar27->bmiHeader).biHeight) / 2,pBVar27,0,0xff);
                    }
                  }
                  else {
                    pBVar27 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A87
                                           ,1);
                    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                           (0x11 - (pBVar27->bmiHeader).biHeight) / 2,'\x06',(byte *)pBVar27);
                    uVar33 = (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2;
                    iVar44 = -1;
                    iVar43 = 0;
                    pcVar38_mg16 = LoadResourceString(0x2567,g_hINSTANCE_00807618);
                    ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg16,iVar43,iVar44,
                                   uVar33);
                  }
                }
              }
            }
            else {
              pDVar28 = this_00->field_1EAA;
              if (pDVar28 != nullptr) {
                uVar33 = (uint)(message->arg0).words.low;
                if (uVar33 < pDVar28->count) {
                  local_c = DArrayAt<AnonShape_005A4350_59BACD18>(pDVar28, uVar33);
                }
                else {
                  local_c = nullptr;
                }
                if (local_c != nullptr) {
                  uVar33 = *(uint *)(local_c + 2);
                  if ((uVar33 & 0x40) == 0) {
                    if ((uVar33 & 0x18) == 0) {
                      local_10 = (uint *)(STReplaceLowByte((uint32_t)(local_10), (uint8_t)(-((uVar33 & 2) != 0))) & 0xffffff05
                                         );
                    }
                    else {
                      local_10 = (uint *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(3));
                    }
                  }
                  else {
                    local_10 = (uint *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(4));
                  }
                  pBVar27 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A87,
                                         (uint)local_10 & 0xff);
                  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                         (0x11 - (pBVar27->bmiHeader).biHeight) / 2,'\x06',(byte *)pBVar27);
                  ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0x23,0,
                                   pAVar41->field_002C + -0x46,0x11);
                  iVar43 = (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2;
                  wsprintfA((LPSTR)&DAT_0080f33a,"&%d%s (&0%d&%d)",iVar43,local_c,
                            *(undefined4 *)&local_c[2].field_0x4,iVar43);
                  ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar43 = (uint)(message->arg1).words.high + *(int *)&pAVar41->field_0x28;
            PutDDXClip(*(int *)&pAVar41->field_0x24,iVar43,*(int *)&pAVar41->field_0x24 + -0x13,
                       iVar43 + -0x5e,pAVar41->field_002C,(byte *)0x11,'\x01',this_00->field_1E9A);
            FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                         pAVar41->field_002C,0x11,0xff);
            pFVar7 = this_00->field_1EBE;
            if (pFVar7 != nullptr) {
              uVar33 = (uint)(message->arg0).words.low;
              if (uVar33 < pFVar7->count) {
                element_1ebe = DArrayAt<FSGSTy_field_1EBEElement>(pFVar7, uVar33);
              }
              else {
                element_1ebe = nullptr;
              }
              if (element_1ebe != nullptr) {
                iVar43 = -1;
                pcVar37 = (char *)(element_1ebe + 0x13);
                do {
                  if (iVar43 == 0) break;
                  iVar43 = iVar43 + -1;
                  cVar2 = *pcVar37;
                  pcVar37 = pcVar37 + 1;
                } while (cVar2 != '\0');
                pBVar27 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A87,
                                       -(uint)(iVar43 != -2) & 4);
                DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                       (0x11 - (pBVar27->bmiHeader).biHeight) / 2,'\x06',(byte *)pBVar27);
                ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0x23,0,
                                 local_1c->field_002C + -0x40,0x11);
                ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)(element_1ebe + 0xb),0,-1,
                               (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2);
                pAVar41 = local_1c;
              }
            }
          }
          DVar45 = pAVar41->field_002C;
          pBVar27 = (BITMAPINFO *)this_00->field_1E8E;
          DVar23 = 0x11;
          iVar43 = (uint)(message->arg1).words.high + *(int *)&pAVar41->field_0x28;
          goto LAB_005a89f6;
        case MESS_OPTPANELTY_8162:
          if ((g_cursorClass_00802A30 != nullptr) &&
             (g_cursorClass_00802A30->field_0493 == CASE_5)) break;
          if (this_00->array_00BC[0xc].field_01E0 != '\0') {
            pDVar28 = this_00->field_1EAA;
            if (pDVar28 != nullptr) {
              if ((message->arg0).u32 < pDVar28->count) {
                pcVar37 = DArrayAt<char>(pDVar28, (message->arg0).u32);
              }
              else {
                pcVar37 = nullptr;
              }
              if (pcVar37 != nullptr) {
                if (g_cursorClass_00802A30 != nullptr) {
                  iVar43 = g_cursorClass_00802A30->field_00C9;
                  iVar44 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = CASE_5;
                  pCVar35->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
                  CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
                  pCVar35->field_00D2 = 0;
                  pCVar35->field_04DF = -1;
                }
                iVar43 = -1;
                pcVar22 = pcVar37 + 0x40;
                do {
                  if (iVar43 == 0) break;
                  iVar43 = iVar43 + -1;
                  cVar2 = *pcVar22;
                  pcVar22 = pcVar22 + 1;
                } while (cVar2 != '\0');
                if (iVar43 == -2) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar37,pcVar37 + 0x40,1);
                }
                else if ((int)this_00->field_1AEC->elementSize < 1) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar37,nullptr,1);
                }
                else {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar37,
                                     *(char **)this_00->field_1AEC->growCapacity,1);
                }
              }
            }
            break;
          }
          uVar33 = (message->arg0).u32;
          if (uVar33 == 0) {
            if (g_cursorClass_00802A30 != nullptr) {
              iVar43 = g_cursorClass_00802A30->field_00C9;
              iVar44 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar35->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
              CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
              pCVar35->field_00D2 = 0;
              pCVar35->field_04DF = -1;
            }
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            iVar43 = this_00->field_1B18;
            this_00->array_00BC[0xc].field_01E0 = 1;
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 0;
            if (iVar43 != 0) {
              FUN_006e6080(this_00,2,iVar43,(undefined4 *)&this_00->field_0x1d);
            }
            *(undefined4 *)&this_00->field_0x31 = 1;
            if (this_00->field_1B24 != 0) {
              FUN_006e6080(this_00,2,this_00->field_1B24,(undefined4 *)&this_00->field_0x1d);
            }
            break;
          }
          pDVar28 = this_00->field_1EA6;
          if (uVar33 < pDVar28->count) {
            pcVar37 = DArrayAt<char>(pDVar28, uVar33);
          }
          else {
            pcVar37 = nullptr;
          }
          if (pcVar37 == nullptr) break;
          if (this_00->field_1B0C != nullptr) {
            FreeAndNull(&this_00->field_1B0C);
          }
          uVar33 = 0xffffffff;
          pcVar22 = pcVar37;
          do {
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            cVar2 = *pcVar22;
            pcVar22 = pcVar22 + 1;
          } while (cVar2 != '\0');
          pbVar39 = Library::DKW::LIB::MemAlloc(~uVar33);
          uVar33 = 0xffffffff;
          this_00->field_1B0C = pbVar39;
          do {
            pcVar22 = pcVar37;
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            pcVar22 = pcVar37 + 1;
            cVar2 = *pcVar37;
            pcVar37 = pcVar22;
          } while (cVar2 != '\0');
          uVar33 = ~uVar33;
          pbVar34 = (byte *)(pcVar22 + -uVar33);
          memmove(pbVar39, pbVar34, uVar33); /* compiler REP MOVS byte copy */
          uVar29 = 0;
          this_00->CloseButtons();
          this_00->array_00BC[0xc].field_01E1 = 10;
          this_00->field_1ED2 = 6;
          pSVar8 = this_00->array_00BC[0xc].field_01DB;
          if (pSVar8->field_02E6 == nullptr) break;
          puVar20 = local_370;
          for (iVar43 = 6; iVar43 != 0; iVar43 = iVar43 + -1) {
            *puVar20 = 0xffffffff;
            puVar20 = puVar20 + 1;
          }
          *(undefined2 *)puVar20 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          MMsgTy::StatePanel(pSVar8->field_02E6,(int)local_370);
          puVar20 = &local_80;
          goto cf_common_exit_005A7F3B;
        case MESS_SIDTY_8163:
          cVar2 = this_00->array_00BC[0xc].field_01DF;
          if (cVar2 == '\x06') {
            if (this_00->array_00BC[0xc].field_01E0 == '\0') {
              local_1ac = 0x20;
              if ((message->arg0).u32 == 0) {
                local_1a8 = 0;
                if (this_00->field_1B18 != 0) {
                  FUN_006e6080(this_00,2,this_00->field_1B18,local_1bc);
                }
              }
              else {
                local_1a8 = 1;
                if (this_00->field_1B18 != 0) {
                  FUN_006e6080(this_00,2,this_00->field_1B18,local_1bc);
                }
              }
            }
          }
          else if (cVar2 == '\b') {
            pFVar7 = this_00->field_1EBE;
            bVar42 = true;
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (((pFVar7 != nullptr) && ((message->arg0).u32 < pFVar7->count)
                ) && (puVar31 = (uint *)((int)&pFVar7->data->field_0000 +
                                        pFVar7->elementSize * (message->arg0).u32),
                     puVar31 != nullptr)) {
              bVar42 = false;
              Library::DKW::TBL::FUN_006b6020(this_00->field_1AE8,0,(char *)(puVar31 + 0xb));
              this_00->field_002D = 0x33;
              *(DArrayTy **)&this_00->field_0x31 = this_00->field_1AE8;
              FUN_006e6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              FUN_006b5f80((int *)g_ddxContext_008075A8,0x1a4,0x7d,0x15e,0x8c);
              PutDDXClip(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',this_00->field_1E92);
              FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,0x15e,0x8c,
                           0xff);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,0x15e,
                               0x11);
              uVar33 = 2;
              iVar44 = -1;
              iVar43 = -1;
              pcVar38_mg9 = LoadResourceString(0x2572,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg9,iVar43,iVar44,uVar33);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x11,
                               0x14a,0x11);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)(puVar31 + 7),0,-1,0);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x22,
                               0x15e,0x11);
              uVar33 = 2;
              iVar44 = -1;
              iVar43 = -1;
              pcVar38_mgA = LoadResourceString(0x2347,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mgA,iVar43,iVar44,uVar33);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x33,
                               0x14a,0x11);
              uVar33 = 0;
              iVar44 = -1;
              iVar43 = 0;
              if (*(char *)(puVar31 + 0x1f) == '\0') {
                pcVar38_mgB = LoadResourceString(0x2573,g_hINSTANCE_00807618);
              }
              else {
                pcVar38_mgB = (char *)((int)puVar31 + 0x83);
              }
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mgB,iVar43,iVar44,uVar33);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x44,
                               0x15e,0x11);
              uVar33 = 2;
              iVar44 = -1;
              iVar43 = -1;
              pcVar38_mgC = LoadResourceString(0x2344,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mgC,iVar43,iVar44,uVar33);
              if (*(char *)(puVar31 + 0x1f) != '\0') {
                ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x55,
                                 0x14a,0x11);
                iVar43 = (int)(char)STField<undefined1>(puVar31,0x7e) << 1;
                wsprintfA((LPSTR)&DAT_0080f33a,"%dx%d",iVar43,iVar43);
                ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,0,-1,0);
              }
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x66,
                               0x15e,0x11);
              uVar33 = 2;
              iVar44 = -1;
              iVar43 = -1;
              pcVar38_mgD = LoadResourceString(0x2345,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mgD,iVar43,iVar44,uVar33);
              if (*(char *)(puVar31 + 0x1f) != '\0') {
                ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x77,
                                 0x14a,0x11);
                pcVar38_mgE = LoadResourceString(0x2574,g_hINSTANCE_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,"%d %s",
                          (int)(char)STField<undefined1>(puVar31,0x7d),pcVar38_mgE);
                ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,0,-1,0);
              }
              Library::DKW::DDX::FUN_006b4680
                        ((int *)g_dDXContext_0080759C,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,
                         nullptr,0,0,0x15e,0x8c,0x10000ff);
            }
            if (bVar42) {
              Library::DKW::TBL::FUN_006b6020(this_00->field_1AE8,0,&CHAR_00h_008016a0);
              this_00->field_002D = 0x33;
              *(DArrayTy **)&this_00->field_0x31 = this_00->field_1AE8;
              FUN_006e6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              FUN_006b5f80((int *)g_ddxContext_008075A8,0x1a4,0x7d,0x15e,0x8c);
              PutDDXClip(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',this_00->field_1E92);
              FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,0x15e,0x8c,
                           0xff);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,0x15e,
                               0x11);
              uVar33 = 2;
              iVar44 = -1;
              iVar43 = -1;
              pcVar38_mgF = LoadResourceString(0x2572,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mgF,iVar43,iVar44,uVar33);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x22,
                               0x15e,0x11);
              uVar33 = 2;
              iVar44 = -1;
              iVar43 = -1;
              pcVar38_mg10 = LoadResourceString(0x2347,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg10,iVar43,iVar44,uVar33);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x44,
                               0x15e,0x11);
              uVar33 = 2;
              iVar44 = -1;
              iVar43 = -1;
              pcVar38_mg11 = LoadResourceString(0x2344,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg11,iVar43,iVar44,uVar33);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x66,
                               0x15e,0x11);
              uVar33 = 2;
              iVar44 = -1;
              iVar43 = -1;
              pcVar38_mg12 = LoadResourceString(0x2345,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg12,iVar43,iVar44,uVar33);
              Library::DKW::DDX::FUN_006b4680
                        ((int *)g_dDXContext_0080759C,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,
                         nullptr,0,0,0x15e,0x8c,0x10000ff);
            }
          }
          break;
        case MESS_OPTPANELTY_8164:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1CDB,
                     (int)message,0);
          break;
        case MESS_OPTPANELTY_8165:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1D6C,
                     (int)message,0);
          break;
        case MESS_SHARED_8166:
          uVar33 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          this_00->field_1E1D = uVar33;
          if (this_00->field_1E01 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1E45,this_00->field_1E01,this_00->field_1E05,
                       this_00->field_1E19,uVar33);
          }
        }
        goto cf_common_exit_005A8CA7;
      }
      switch(SVar5) {
      case MESS_SHARED_C0A2:
        if ((int)this_00->field_1EA2->elementSize < 1) {
          pcVar37 = nullptr;
        }
        else {
          pcVar37 = *(char **)this_00->field_1EA2->growCapacity;
        }
        bVar44 = thunk_FUN_00571810(pcVar37);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,bVar44) == 0) {
          if ((int)this_00->field_1EA2->elementSize < 1) {
            pcVar37 = nullptr;
          }
          else {
            pcVar37 = *(char **)this_00->field_1EA2->growCapacity;
          }
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,pcVar37);
        }
        else {
          iVar43 = 0;
          pDVar28 = (this_00->array_00BC[0xc].field_01DB)->field_0696;
          if (0 < (int)pDVar28->elementSize) {
            if ((int)pDVar28->elementSize < 1) {
              pcVar37 = nullptr;
              goto LAB_005a8b12;
            }
            do {
              pcVar37 = *(char **)(pDVar28->growCapacity + iVar43 * 4);
LAB_005a8b12:
              AddMessage(this_00,8,(byte *)&CHAR_00h_008016a0,pcVar37,8);
              iVar43 = iVar43 + 1;
              pDVar28 = (this_00->array_00BC[0xc].field_01DB)->field_0696;
            } while (iVar43 < (int)pDVar28->elementSize);
          }
        }
        Library::DKW::TBL::FUN_006b6020(this_00->field_1EA2,0,&CHAR_00h_008016a0);
        this_00->field_002D = 0x33;
        *(DArrayTy **)&this_00->field_0x31 = this_00->field_1EA2;
        goto LAB_005a8c85;
      case MESS_SHARED_C0A3:
        pDVar28 = this_00->field_1AE8;
        dVar11 = pDVar28->elementSize;
joined_r0x005a8b8f:
        if (0 < (int)dVar11) {
          pcVar37 = *(char **)pDVar28->growCapacity;
        }
        iVar43 = -1;
        do {
          if (iVar43 == 0) break;
          iVar43 = iVar43 + -1;
          cVar2 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar2 != '\0');
        if (iVar43 != -2) {
          if ((int)this_00->field_1AEC->elementSize < 1) {
            pcVar37 = nullptr;
          }
          else {
            pcVar37 = *(char **)this_00->field_1AEC->growCapacity;
          }
          if ((int)dVar11 < 1) {
            thunk_FUN_0055d390(&DAT_00802a90,nullptr,pcVar37,1);
          }
          else {
            thunk_FUN_0055d390(&DAT_00802a90,*(char **)pDVar28->growCapacity,pcVar37,1);
          }
        }
        break;
      case MESS_BLDLABPANELTY_C0A4:
        if (this_00->array_00BC[0xc].field_01E0 != '\0') break;
        this_00->field_002D = 0x26;
        FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
        uVar33 = *(uint *)&this_00->field_0x31;
        if (uVar33 == 0) break;
        pDVar28 = this_00->field_1EA6;
        if (uVar33 < pDVar28->count) {
          pvVar36 = DArrayAt<void>(pDVar28, uVar33);
        }
        else {
          pvVar36 = nullptr;
        }
        if ((int)this_00->field_1EA2->elementSize < 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = *(undefined4 *)this_00->field_1EA2->growCapacity;
        }
        wsprintfA((LPSTR)&DAT_0080f33a,"%s %s ",uVar21,pvVar36);
        Library::DKW::TBL::FUN_006b6020(this_00->field_1EA2,0,(char *)&DAT_0080f33a);
        this_00->field_002D = 0x33;
        *(DArrayTy **)&this_00->field_0x31 = this_00->field_1EA2;
LAB_005a8c85:
        FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)&this_00->field_0x1d);
        break;
      case MESS_FRMPANELTY_C0A5:
        DAT_00807360 = DAT_00807360 == '\0';
      }
      goto cf_common_exit_005A8CA7;
    }
    if (SVar5 == MESS_SHARED_8160) {
      (message->arg1).u32 = 0x11;
      goto cf_common_exit_005A8CA7;
    }
    switch(SVar5) {
    case MESS_SHARED_6980:
      piVar16 = (message->arg1).ptr;
      iVar43 = *piVar16;
      local_140 = iVar43 + -0xb4;
      iVar44 = piVar16[1];
      local_13c = iVar44 + -0xaa;
      local_138 = piVar16[2];
      local_134 = piVar16[3];
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar43 + -0xb3,
                   iVar44 + -0xa9,local_138 + -2,local_134 + -2,0xff);
      if (DAT_0080735f != '\0') {
        pBVar27 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A83,0);
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,iVar43 + -0xb2,iVar44 + -0xa8,
               '\x06',(byte *)pBVar27);
      }
      break;
    case MESS_SIDTY_6981:
      pcVar12 = this_00->array_00BC[0xc].field_01F3;
      local_14 = nullptr;
      if (pcVar12->field_00A0 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
      }
      dVar11 = (message->arg2).u32;
      iVar21 = *(int *)&pcVar12->field_0x8a;
      local_50 = *(int *)(dVar11 + 0x24) + -0xb4;
      local_48 = *(int *)(dVar11 + 0x2c);
      local_44 = *(int *)(dVar11 + 0x30);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_4c = *(int *)(dVar11 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,
                   *(int *)(dVar11 + 0x24) + -0xb5,local_4c,local_48 + 2,local_44,0xff);
      pvVar36 = (message->arg0).ptr;
      if (pvVar36 != nullptr) {
        local_8 = nullptr;
        do {
          if (*(char **)((int)pvVar36 + (int)local_8) == nullptr) break;
          iVar21 = FUN_007111c0(this_00->array_00BC[0xc].field_01F3,
                                *(char **)((int)pvVar36 + (int)local_8));
          ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,local_50,
                           (int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize
                           + local_4c,local_48,iVar21);
          ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,
                         *(char **)((int)(message->arg0).ptr + (int)local_8),0,-1,0);
          local_14 = (tagBITMAPINFO *)
                     ((int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     (this_00->array_00BC[0xc].field_01F3)->field_005C + iVar21);
          pvVar36 = (message->arg0).ptr;
          local_8 = local_8 + 1;
        } while (pvVar36 != nullptr);
      }
      uVar3 = (message->arg1).words.low;
      if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        iVar44 = (uint)(message->arg1).words.high + local_4c;
        iVar43 = (uint)uVar3 + local_50;
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1AC0,0,iVar43,iVar44,iVar43,
                     iVar44 + iVar21,9,0xd);
      }
      goto LAB_005a7c92;
    case MESS_SHARED_6980|MESS_ID_CREATE:
      if (((this_00->field_1E8E != 0) && (this_00->field_1E92 != nullptr)) &&
         (local_8 = (uint *)(message->arg2).u32, local_8 != nullptr)) {
        if (this_00->array_00BC[0xc].field_01DF == '\x03') {
          pcVar12 = this_00->array_00BC[0xc].field_01F3;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1B08;
        }
        else {
          pcVar12 = this_00->array_00BC[0xc].field_01F7;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1E9E;
        }
        FUN_006b5f80((int *)g_ddxContext_008075A8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
        PutDDXClip(local_8[9],local_8[10],6,1,local_8[0xb],(byte *)local_8[0xc],'\x01',
                   this_00->field_1E92);
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,local_8[0xb],
                     local_8[0xc],0xff);
        local_14 = (tagBITMAPINFO *)(uint)(message->arg0).words.high;
        if ((int)local_14 <
            (int)((int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                 local_8[0x78])) {
          do {
            if ((int)local_14 < local_1c->field_0008) {
              local_10 = *(uint **)(local_1c->field_0014 + (int)local_14 * 4);
            }
            else {
              local_10 = nullptr;
            }
            if (local_10 != nullptr) {
              if (pcVar12->field_00A0 != 0) {
                FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
              }
              local_c = *(AnonShape_005A4350_59BACD18 **)&pcVar12->field_0x8a;
              if (pcVar12->field_00A0 != 0) {
                FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
              }
              ccFntTy::SetSurf(pcVar12,this_00->field_1E8E,0,0,
                               ((int)local_14 - (uint)(message->arg0).words.high) *
                               *(int *)&pcVar12->field_0x8a,*(int *)(this_00->field_1E8E + 4),
                               (int)local_c);
              ccFntTy::WrStr(pcVar12,(char *)local_10,0,-1,2);
            }
            local_14 = (tagBITMAPINFO *)((int)&(local_14->bmiHeader).biSize + 1);
          } while ((int)local_14 < (int)((uint)(message->arg0).words.high + local_8[0x78]));
        }
        Library::DKW::DDX::FUN_006b4680
                  ((int *)g_dDXContext_0080759C,local_8[9],local_8[10],
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,local_8[0xb],local_8[0xc],
                   0x10000ff);
      }
      break;
    case MESS_MAINMENUTY_6983:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != nullptr)) {
        dVar11 = (message->arg2).u32;
        FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30));
        PutDDXClip(*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),6,0x15f,*(uint *)(dVar11 + 0x2c),
                   *(byte **)(dVar11 + 0x30),'\x01',this_00->field_1E92);
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F7,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x14);
          ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F7,*(char **)(message->arg0).ptr,0,-1,5);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,(uint)uVar3,2,
                       (uint)uVar3,0x11,9,0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::DKW::DDX::FUN_006b4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,*(DWORD *)(dVar11 + 0x2c),
                   *(DWORD *)(dVar11 + 0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((this_00->field_1E8E == 0) || (this_00->field_1E92 == nullptr)) break;
      pAVar41 = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
      FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)&pAVar41->field_0x24,
                   *(int *)&pAVar41->field_0x28,pAVar41->field_002C,*(int *)(pAVar41 + 1));
      PutDDXClip(*(int *)&pAVar41->field_0x24,*(int *)&pAVar41->field_0x28,
                 *(int *)&pAVar41->field_0x24 + -0x13,0x160,pAVar41->field_002C,
                 *(byte **)(pAVar41 + 1),'\x01',this_00->field_1E92);
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,pAVar41->field_002C,
                   *(int *)(pAVar41 + 1),0xff);
      ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                       pAVar41->field_002C,*(int *)(pAVar41 + 1));
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 1) {
        uVar33 = 2;
      }
      else {
        uVar33 = (-(uint)(wVar4 != 0) & 2) + 1;
      }
      iVar44 = -1;
      iVar43 = -1;
      pcVar38_mg20 = LoadResourceString(0x2565,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg20,iVar43,iVar44,uVar33);
      goto LAB_005a754e;
    case MESS_SHARED_6980|MESS_SHARED_0005:
    case MESS_MMSGTY_6986:
    case MESS_SHARED_6980|MESS_CURSORCLASSTY_0009:
    case MESS_FSGSTY_698A:
    case MESS_SHARED_6980|MESS_SHARED_0008|MESS_SHARED_0005:
    case 0x698e:
    case 0x698f:
    case 0x6990:
    case 0x6991:
    case MESS_FSGSTY_6992:
      if (this_00->field_1E8E == 0) break;
      local_14 = nullptr;
      switch(SVar5) {
      case MESS_SHARED_6980|MESS_SHARED_0005:
      case MESS_MMSGTY_6986:
        local_14 = this_00->field_1E9A;
        local_10 = (uint *)0x1e9;
        break;
      default:
        goto switchD_005a7593_caseD_6987;
      case MESS_SHARED_6980|MESS_CURSORCLASSTY_0009:
      case MESS_FSGSTY_698A:
      case MESS_SHARED_6980|MESS_SHARED_0008|MESS_SHARED_0005:
        local_14 = this_00->field_1E92;
        local_10 = (uint *)0x199;
        break;
      case 0x698e:
      case 0x698f:
      case 0x6990:
      case 0x6991:
      case MESS_FSGSTY_6992:
        local_14 = this_00->field_1E92;
        local_10 = (uint *)0x22;
      }
      local_1c = (AnonShape_005A4350_59BACD18 *)0x5e;
switchD_005a7593_caseD_6987:
      if (local_14 == nullptr) break;
      local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
      switch(SVar5 - (MESS_SHARED_6980|MESS_SHARED_0005)) {
      case MESS_ID_NONE:
        local_8 = (uint *)0x2566;
        break;
      case 1:
      case MESS_SHARED_0008:
        local_8 = (uint *)0x2616;
        break;
      case 4:
        uVar33 = this_00->field_1EC2;
        if (uVar33 < 0x401) {
          if (uVar33 == 0x400) {
            local_8 = (uint *)0x235b;
          }
          else if (uVar33 == 0x100) {
            local_8 = (uint *)0x2341;
          }
          else {
            if (uVar33 != 0x200) goto LAB_005a7656;
            local_8 = (uint *)0x235a;
          }
        }
        else if (uVar33 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar33 == 0x502) {
          local_8 = (uint *)0x235d;
        }
        else {
LAB_005a7656:
          local_8 = (uint *)0x235c;
        }
        break;
      case MESS_SHARED_0005:
        if (this_00->field_1EC6 == -1) {
          pcVar38_mg1D = LoadResourceString(0x235c,g_hINSTANCE_00807618);
          uVar33 = 0xffffffff;
          do {
            pcVar37 = pcVar38_mg1D;
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            pcVar37 = pcVar38_mg1D + 1;
            cVar2 = *pcVar38_mg1D;
            pcVar38_mg1D = pcVar37;
          } while (cVar2 != '\0');
          uVar33 = ~uVar33;
          pcVar37 = pcVar37 + -uVar33;
          pcVar22 = (char *)&DAT_0080f33a;
          memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
          uVar29 = 0;
        }
        else {
          if (this_00->field_1ECA < PTR_0080c502->count) {
            pcVar37 = DArrayAt<char>(PTR_0080c502, this_00->field_1ECA);
          }
          else {
            pcVar37 = nullptr;
          }
          if (pcVar37 == nullptr) {
            pcVar37 = &CHAR_00h_008016a0;
          }
          uVar33 = 0xffffffff;
          do {
            pcVar22 = pcVar37;
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            pcVar22 = pcVar37 + 1;
            cVar2 = *pcVar37;
            pcVar37 = pcVar22;
          } while (cVar2 != '\0');
          uVar33 = ~uVar33;
          pcVar37 = pcVar22 + -uVar33;
          pcVar22 = (char *)&DAT_0080f33a;
          memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
          uVar29 = 0;
        }
        break;
      case MESS_CURSORCLASSTY_0009:
        if (DAT_00803140 == 2) {
          local_8 = (uint *)0x25b5;
        }
        else {
          local_8 = (uint *)0x25b4;
        }
        break;
      case MESS_SYSTEMCLASSTY_000A:
        if (DAT_00803144 == 1) {
          local_8 = (uint *)0x25c0;
        }
        else if (DAT_00803144 == 2) {
          local_8 = (uint *)0x25c1;
        }
        else {
          local_8 = (uint *)0x25bf;
        }
        break;
      case 0xb:
        local_8 = (uint *)0x25b2;
        break;
      case 0xc:
        local_8 = (uint *)0x25b3;
        break;
      case MESS_SHARED_0008|MESS_SHARED_0005:
        local_8 = (uint *)0x25b1;
      }
      pAVar41 = local_c;
      FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)&local_c->field_0x24,
                   *(int *)&local_c->field_0x28,local_c->field_002C,*(int *)(local_c + 1));
      PutDDXClip(*(int *)&pAVar41->field_0x24,*(int *)&pAVar41->field_0x28,
                 *(int *)&pAVar41->field_0x24 - (int)local_10,
                 *(int *)&pAVar41->field_0x28 - (int)local_1c,pAVar41->field_002C,
                 *(byte **)(pAVar41 + 1),'\x01',local_14);
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,pAVar41->field_002C,
                   *(int *)(pAVar41 + 1),0xff);
      ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                       pAVar41->field_002C,*(int *)(pAVar41 + 1));
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 1) {
        local_c = (AnonShape_005A4350_59BACD18 *)0x2;
      }
      else {
        local_c = (AnonShape_005A4350_59BACD18 *)((-(uint)(wVar4 != 0) & 2) + 1);
      }
      if (message->id == MESS_FSGSTY_698A) {
        pcVar38_mg1F = (char *)&DAT_0080f33a;
      }
      else {
        pcVar38_mg1F = LoadResourceString((UINT)local_8,g_hINSTANCE_00807618);
      }
      ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg1F,-1,-1,(uint)local_c);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar32 = 0xd;
      }
      else {
        bVar32 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                   (undefined4 *)pAVar41->field_002C,*(int *)(pAVar41 + 1),4,bVar32);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar32 = 0xd;
      }
      else {
        bVar32 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,2,2,
                   (undefined4 *)(pAVar41->field_002C + -4),*(int *)(pAVar41 + 1) + -4,4,bVar32);
LAB_005a754e:
      DVar23 = *(DWORD *)(pAVar41 + 1);
      DVar45 = pAVar41->field_002C;
      pBVar27 = (BITMAPINFO *)this_00->field_1E8E;
      iVar43 = *(int *)&pAVar41->field_0x28;
LAB_005a89f6:
      Library::DKW::DDX::FUN_006b4680
                ((int *)g_dDXContext_0080759C,*(int *)&pAVar41->field_0x24,iVar43,pBVar27,
                 nullptr,0,0,DVar45,DVar23,0x10000ff);
      break;
    case 0x6987:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E9A != nullptr)) {
        dVar11 = (message->arg2).u32;
        FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30));
        PutDDXClip(*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),*(int *)(dVar11 + 0x24) + -0x1e9,
                   *(int *)(dVar11 + 0x28) + -0x5e,*(uint *)(dVar11 + 0x2c),
                   *(byte **)(dVar11 + 0x30),'\x01',this_00->field_1E9A);
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,*(char **)(message->arg0).ptr,3,-1,5);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar43 = uVar3 + 3;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,iVar43,4,iVar43,0x11,9,
                       0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::DKW::DDX::FUN_006b4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,*(DWORD *)(dVar11 + 0x2c),
                   *(DWORD *)(dVar11 + 0x30),0x10000ff);
      }
      break;
    case MESS_SHARED_6980|MESS_SHARED_0008:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != nullptr)) {
        dVar11 = (message->arg2).u32;
        FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        PutDDXClip(*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   *(int *)(dVar11 + 0x24) -
                   ((-(uint)(this_00->array_00BC[0xc].field_01DF != '\t') & 0x177) + 0x22),
                   *(int *)(dVar11 + 0x28) + -0x5e,*(uint *)(dVar11 + 0x2c),
                   *(byte **)(dVar11 + 0x30),'\x01',this_00->field_1E92);
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,*(char **)(message->arg0).ptr,3,-1,5);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar43 = uVar3 + 3;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,iVar43,3,iVar43,0x11,9,
                       0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::DKW::DDX::FUN_006b4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,*(DWORD *)(dVar11 + 0x2c),
                   *(DWORD *)(dVar11 + 0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar16 = (message->arg1).ptr;
      iVar43 = *piVar16;
      iVar44 = iVar43 + -0xb4;
      local_3c = piVar16[1] - 0xaa;
      local_38 = (undefined4 *)piVar16[2];
      local_34 = piVar16[3];
      local_40 = iVar44;
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar44,local_3c,
                   (int)local_38,local_34,0xff);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar32 = 0xd;
      }
      else {
        bVar32 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar44,local_3c,local_38,
                   local_34,4,bVar32);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar32 = 0xd;
      }
      else {
        bVar32 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar43 + -0xb2,
                   local_3c + 2,local_38 + -1,local_34 + -4,4,bVar32);
      uVar33 = this_00->field_1EC2;
      if (uVar33 < 0x502) {
        if (uVar33 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar33 == 0x200) {
          local_8 = (uint *)0x235a;
        }
        else {
          if (uVar33 != 0x400) goto LAB_005a7c26;
          local_8 = (uint *)0x235b;
        }
      }
      else if (uVar33 == 0x502) {
        local_8 = (uint *)0x235d;
      }
      else {
LAB_005a7c26:
        local_8 = (uint *)0x2341;
      }
      ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,iVar44,
                       local_3c,(int)local_38,local_34);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 1) {
        uVar33 = 2;
      }
      else {
        uVar33 = (-(uint)(wVar4 != 0) & 2) + 1;
      }
      iVar44 = -1;
      iVar43 = -1;
      pcVar38_mg1A = LoadResourceString((UINT)local_8,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg1A,iVar43,iVar44,uVar33);
LAB_005a7c92:
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      break;
    case 0x698c:
      ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(message->arg1).i32,0,0,0,0,0);
      pFVar9 = this_00->field_1FB3;
      uVar33 = (uint)(message->arg0).words.low;
      if (uVar33 < pFVar9->count) {
        element_1fb3 = DArrayAt<FSGSTy_field_1FB3Element>(pFVar9, uVar33);
      }
      else {
        element_1fb3 = nullptr;
      }
      ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)element_1fb3,-1,-1,
                     3 - ((message->arg0).words.high != 1));
      if ((message->arg0).words.high == 1) {
        pRVar17 = (message->arg1).ptr;
        FUN_006b5ee0(pRVar17,0,0,0,pRVar17->field_0004,pRVar17->field_0008,0xf,0xd);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar5 == MESS_FSGSTY_6949) {
    this_00->CloseButtons();
    this_00->array_00BC[0xc].field_01E1 = 9;
    pSVar8 = this_00->array_00BC[0xc].field_01DB;
    if (pSVar8->field_02E6 == nullptr) goto cf_common_exit_005A8CA7;
    puVar20 = local_2ac;
    for (iVar43 = 6; iVar43 != 0; iVar43 = iVar43 + -1) {
      *puVar20 = 0xffffffff;
      puVar20 = puVar20 + 1;
    }
    *(undefined2 *)puVar20 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    MMsgTy::StatePanel(pSVar8->field_02E6,(int)local_2ac);
    puVar20 = &local_d0;
cf_common_exit_005A7F3B:
    MMsgTy::thunk_FUN_005b8f40((this_00->array_00BC[0xc].field_01DB)->field_02E6,puVar20);
    goto cf_common_exit_005A8CA7;
  }
  if (MESS_ID_MSGOK < SVar5) {
    if (SVar5 < 0x6907) {
      if (SVar5 == MESS_FSGSTY_6906) {
        if (g_cursorClass_00802A30->field_0493 == CASE_5) goto cf_common_exit_005A8CA7;
        local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
        this_00->field_1F43 = 0x6506;
        iVar43 = local_c->field_0008;
        this_00->field_1F63 = 0x698c;
        this_00->field_1F4B = iVar43;
        this_00->field_1FB3->count = 0;
        this_00->field_20BB = 1;
        pcVar38_mg21 = LoadResourceString(0x25b4,g_hINSTANCE_00807618);
        uVar33 = 0xffffffff;
        do {
          pcVar37 = pcVar38_mg21;
          if (uVar33 == 0) break;
          uVar33 = uVar33 - 1;
          pcVar37 = pcVar38_mg21 + 1;
          cVar2 = *pcVar38_mg21;
          pcVar38_mg21 = pcVar37;
        } while (cVar2 != '\0');
        uVar33 = ~uVar33;
        pcVar37 = pcVar37 + -uVar33;
        pcVar22 = &this_00->field_0x1fb7;
        memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
        uVar29 = 0;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
        this_00->field_20BB = 2;
        pcVar38_mg23 = LoadResourceString(0x25b5,g_hINSTANCE_00807618);
        uVar33 = 0xffffffff;
        do {
          pcVar37 = pcVar38_mg23;
          if (uVar33 == 0) break;
          uVar33 = uVar33 - 1;
          pcVar37 = pcVar38_mg23 + 1;
          cVar2 = *pcVar38_mg23;
          pcVar38_mg23 = pcVar37;
        } while (cVar2 != '\0');
        uVar33 = ~uVar33;
        pcVar37 = pcVar37 + -uVar33;
        pcVar22 = &this_00->field_0x1fb7;
        memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
        uVar29 = 0;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
        pFVar9 = this_00->field_1FB3;
        this_00->field_1F7B = pFVar9->count;
        uVar33 = 0;
        this_00->field_1F73 = 0;
        if (pFVar9->count != 0) {
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (DAT_00803140 == *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar33))
            {
              this_00->field_1F73 = uVar33;
              break;
            }
            uVar33 = uVar33 + 1;
          } while (uVar33 < pFVar9->count);
        }
      }
      else {
        if (SVar5 < MESS_FSGSTY_6903) {
          if (SVar5 == MESS_MAINMENUTY_6902) {
            pDVar28 = this_00->field_1AE8;
            dVar11 = pDVar28->elementSize;
            goto joined_r0x005a8b8f;
          }
          if (MESS_SHARED_6900 < SVar5) {
            if ((SVar5 == MESS_FSGSTY_6901) && (this_00->array_00BC[0xc].field_01E0 == '\0')) {
              this_00->field_002D = 0x26;
              puVar1 = &this_00->field_0x1d;
              FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)puVar1);
              pDVar28 = this_00->field_1EA6;
              if ((uint)*(ushort *)&this_00->field_0x31 < pDVar28->count) {
                pvVar36 = DArrayAt<void>(pDVar28, (uint)*(ushort *)&this_00->field_0x31);
              }
              else {
                pvVar36 = nullptr;
              }
              if (pvVar36 != nullptr) {
                this_00->field_002D = 0x32;
                FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                iVar43 = *(int *)&this_00->field_0x31;
                if (iVar43 != 0) {
                  if (*(int *)(iVar43 + 8) < 1) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = **(undefined4 **)(iVar43 + 0x14);
                  }
                  pcVar38_mg26 = LoadResourceString(0x2568,g_hINSTANCE_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,"%s %s %s",pcVar38_mg26,pvVar36,uVar21);
                  CFsgsConnection::SendChatMessage
                            ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a);
                  Library::DKW::TBL::FUN_006b6020(this_00->field_1EA2,0,&CHAR_00h_008016a0);
                  this_00->field_002D = 0x33;
                  *(DArrayTy **)&this_00->field_0x31 = this_00->field_1EA2;
                  FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                }
              }
            }
            goto cf_common_exit_005A8CA7;
          }
          if (SVar5 == MESS_SHARED_6900) {
            DAT_0080735f = DAT_0080735f == '\0';
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_1AD0,(undefined4 *)&this_00->field_0x1d);
            goto cf_common_exit_005A8CA7;
          }
          if (SVar5 != MESS_FSGSTY_6506) {
            if (SVar5 == MESS_MMSGTY_68FF) {
              if ((message->arg0).u32 == 0) {
                if (this_00->field_1AB7 == message->unknown_00) {
                  this_00->field_1AB7 = 0;
                }
              }
              else if ((message->arg0).u32 == 1) {
                this_00->field_1AB7 = message->unknown_00;
              }
            }
            goto cf_common_exit_005A8CA7;
          }
          pFVar9 = this_00->field_1FB3;
          uVar33 = (message->arg0).u32;
          if (pFVar9->count <= uVar33) goto cf_common_exit_005A8CA7;
          if (this_00->array_00BC[0xc].field_01DF == '\t') {
            if ((message->arg1).u32 == this_00->field_1EB6) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              DAT_00803140 = *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar33);
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar35 = g_cursorClass_00802A30;
joined_r0x005a55e5:
              g_cursorClass_00802A30 = pCVar35;
              if (pCVar35 == nullptr) goto cf_common_exit_005A5634;
              pCVar35->field_0493 = CASE_5;
              pCVar35->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
              iVar43 = pCVar35->field_00C9;
              iVar44 = pCVar35->field_00C5;
            }
            else {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              DAT_00803144 = *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar33);
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar35 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 == nullptr) goto cf_common_exit_005A5634;
              iVar43 = g_cursorClass_00802A30->field_00C9;
              iVar44 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar35->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
              iVar43 = pCVar35->field_00C9;
              iVar44 = pCVar35->field_00C5;
            }
LAB_005a561c:
            CursorClassTy::DrawSprite(pCVar35,iVar44,iVar43);
            pCVar35->field_00D2 = 0;
            pCVar35->field_04DF = -1;
          }
          else {
            if ((message->arg1).u32 != this_00->field_1EB6) {
              iVar43 = pFVar9->elementSize * uVar33;
              pFVar10 = pFVar9->data;
              this_00->field_1EC6 = *(undefined4 *)(&pFVar10->field_0x104 + iVar43);
              this_00->field_1ECA = *(uint *)(&pFVar10->field_0x108 + iVar43);
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
              DVar23 = timeGetTime();
              this_00->array_00BC[0xc].field_01E3 = DVar23;
              pCVar35 = g_cursorClass_00802A30;
              goto joined_r0x005a55e5;
            }
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            this_00->field_1EC2 =
                 *(uint *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar33);
            if (this_00->array_00BC[0xc].field_01DF == '\b') {
              uVar33 = this_00->field_1EC2;
              memset(local_24c, 0, 0x20); /* compiler bulk-zero initialization */
              this_00->field_1EC6 = 0xffffffff;
              local_238 = (uint)(uVar33 == 0x100);
              this_00->field_1ECA = 0;
              local_23c = 0x20;
              if (this_00->field_1EBA != 0) {
                FUN_006e6080(this_00,2,this_00->field_1EBA,local_24c);
              }
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
              DVar23 = timeGetTime();
              this_00->array_00BC[0xc].field_01E3 = DVar23;
              pCVar35 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 != nullptr) {
                iVar43 = g_cursorClass_00802A30->field_00C9;
                iVar44 = g_cursorClass_00802A30->field_00C5;
                g_cursorClass_00802A30->field_0493 = CASE_5;
                pCVar35->field_0494 = 0xffff;
                CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
                iVar43 = pCVar35->field_00C9;
                iVar44 = pCVar35->field_00C5;
                goto LAB_005a561c;
              }
            }
          }
cf_common_exit_005A5634:
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,message->arg1,(undefined4 *)&this_00->field_0x1d);
          goto cf_common_exit_005A8CA7;
        }
        if (SVar5 == MESS_FSGSTY_6903) {
          if (g_cursorClass_00802A30 != nullptr) {
            iVar43 = g_cursorClass_00802A30->field_00C9;
            iVar44 = g_cursorClass_00802A30->field_00C5;
            g_cursorClass_00802A30->field_0493 = CASE_5;
            pCVar35->field_0494 = 0xffff;
            CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
            CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
            pCVar35->field_00D2 = 0;
            pCVar35->field_04DF = -1;
          }
          if (this_00->array_00BC[0xc].field_01DF == '\x06') {
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_00->array_00BC[0xc].field_01E0 = 1;
          }
          if (this_00->array_00BC[0xc].field_01DF == '\b') {
            CFsgsConnection::RequestGameList
                      ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
            DVar23 = timeGetTime();
            this_00->array_00BC[0xc].field_01E3 = DVar23;
          }
          goto cf_common_exit_005A8CA7;
        }
        if (SVar5 == MESS_FSGSTY_6904) {
          local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
          this_00->field_1F43 = 0x6506;
          iVar43 = local_c->field_0008;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = iVar43;
          this_00->field_1FB3->count = 0;
          if (this_00->array_00BC[0xc].field_01DF == '\b') {
            this_00->field_20BB = 0;
            pcVar38_mg27 = LoadResourceString(0x235c,g_hINSTANCE_00807618);
            uVar33 = 0xffffffff;
            do {
              pcVar37 = pcVar38_mg27;
              if (uVar33 == 0) break;
              uVar33 = uVar33 - 1;
              pcVar37 = pcVar38_mg27 + 1;
              cVar2 = *pcVar38_mg27;
              pcVar38_mg27 = pcVar37;
            } while (cVar2 != '\0');
            uVar33 = ~uVar33;
            pcVar37 = pcVar37 + -uVar33;
            pcVar22 = &this_00->field_0x1fb7;
            memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
            uVar29 = 0;
            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          }
          this_00->field_20BB = 0x100;
          pcVar38_mg29 = LoadResourceString(0x2341,g_hINSTANCE_00807618);
          uVar33 = 0xffffffff;
          do {
            pcVar37 = pcVar38_mg29;
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            pcVar37 = pcVar38_mg29 + 1;
            cVar2 = *pcVar38_mg29;
            pcVar38_mg29 = pcVar37;
          } while (cVar2 != '\0');
          uVar33 = ~uVar33;
          pcVar37 = pcVar37 + -uVar33;
          pcVar22 = &this_00->field_0x1fb7;
          memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
          uVar29 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x501;
          pcVar38_mg2B = LoadResourceString(0x2342,g_hINSTANCE_00807618);
          uVar33 = 0xffffffff;
          do {
            pcVar37 = pcVar38_mg2B;
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            pcVar37 = pcVar38_mg2B + 1;
            cVar2 = *pcVar38_mg2B;
            pcVar38_mg2B = pcVar37;
          } while (cVar2 != '\0');
          uVar33 = ~uVar33;
          pcVar37 = pcVar37 + -uVar33;
          pcVar22 = &this_00->field_0x1fb7;
          memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
          uVar29 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x200;
          pcVar38_mg2D = LoadResourceString(0x235a,g_hINSTANCE_00807618);
          uVar33 = 0xffffffff;
          do {
            pcVar37 = pcVar38_mg2D;
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            pcVar37 = pcVar38_mg2D + 1;
            cVar2 = *pcVar38_mg2D;
            pcVar38_mg2D = pcVar37;
          } while (cVar2 != '\0');
          uVar33 = ~uVar33;
          pcVar37 = pcVar37 + -uVar33;
          pcVar22 = &this_00->field_0x1fb7;
          memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
          uVar29 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x400;
          pcVar38_mg2F = LoadResourceString(0x235b,g_hINSTANCE_00807618);
          uVar33 = 0xffffffff;
          do {
            pcVar37 = pcVar38_mg2F;
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            pcVar37 = pcVar38_mg2F + 1;
            cVar2 = *pcVar38_mg2F;
            pcVar38_mg2F = pcVar37;
          } while (cVar2 != '\0');
          uVar33 = ~uVar33;
          pcVar37 = pcVar37 + -uVar33;
          pcVar22 = &this_00->field_0x1fb7;
          memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
          uVar29 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x502;
          pcVar38_mg31 = LoadResourceString(0x235d,g_hINSTANCE_00807618);
          uVar33 = 0xffffffff;
          do {
            pcVar37 = pcVar38_mg31;
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            pcVar37 = pcVar38_mg31 + 1;
            cVar2 = *pcVar38_mg31;
            pcVar38_mg31 = pcVar37;
          } while (cVar2 != '\0');
          uVar33 = ~uVar33;
          pcVar37 = pcVar37 + -uVar33;
          pcVar22 = &this_00->field_0x1fb7;
          memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
          uVar29 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          pFVar9 = this_00->field_1FB3;
          this_00->field_1F7B = pFVar9->count;
          uVar33 = 0;
          this_00->field_1F73 = 0;
          if (pFVar9->count != 0) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              if (this_00->field_1EC2 ==
                  *(uint *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar33)) {
                this_00->field_1F73 = uVar33;
                break;
              }
              uVar33 = uVar33 + 1;
            } while (uVar33 < pFVar9->count);
          }
        }
        else {
          if (SVar5 != MESS_FSGSTY_6905) goto cf_common_exit_005A8CA7;
          local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
          this_00->field_1F43 = 0x6506;
          iVar43 = local_c->field_0008;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = iVar43;
          this_00->field_1FB3->count = 0;
          this_00->field_20BB = 0xffffffff;
          pcVar38_mg33 = LoadResourceString(0x235c,g_hINSTANCE_00807618);
          uVar33 = 0xffffffff;
          do {
            pcVar37 = pcVar38_mg33;
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            pcVar37 = pcVar38_mg33 + 1;
            cVar2 = *pcVar38_mg33;
            pcVar38_mg33 = pcVar37;
          } while (cVar2 != '\0');
          uVar33 = ~uVar33;
          pcVar37 = pcVar37 + -uVar33;
          pcVar22 = &this_00->field_0x1fb7;
          memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
          uVar29 = 0;
          this_00->field_20BF = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          local_8 = nullptr;
          if (PTR_0080c502->count != 0) {
            pDVar25 = PTR_0080c502;
            if (PTR_0080c502->count == 0) {
              pcVar37 = nullptr;
              goto LAB_005a5859;
            }
            do {
              pcVar37 = DArrayAt<char>(pDVar25, (int)local_8);
LAB_005a5859:
              if (pcVar37 != nullptr) {
                this_00->field_20BB = *(undefined4 *)(pcVar37 + 0x90);
                uVar33 = 0xffffffff;
                do {
                  pcVar22 = pcVar37;
                  if (uVar33 == 0) break;
                  uVar33 = uVar33 - 1;
                  pcVar22 = pcVar37 + 1;
                  cVar2 = *pcVar37;
                  pcVar37 = pcVar22;
                } while (cVar2 != '\0');
                uVar33 = ~uVar33;
                pcVar37 = pcVar22 + -uVar33;
                pcVar22 = &this_00->field_0x1fb7;
                memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
                uVar29 = 0;
                this_00->field_20BF = local_8;
                Library::DKW::TBL::DArrayAppend
                          ((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
                pDVar25 = PTR_0080c502;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < (undefined1 *)pDVar25->count);
          }
          pFVar9 = this_00->field_1FB3;
          uVar33 = 0;
          dVar11 = pFVar9->count;
          this_00->field_1F73 = 0;
          this_00->field_1F7B = dVar11;
          if (pFVar9->count != 0) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              if (this_00->field_1EC6 ==
                  *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar33)) {
                this_00->field_1F73 = uVar33;
                break;
              }
              uVar33 = uVar33 + 1;
            } while (uVar33 < pFVar9->count);
          }
        }
      }
      pcVar12 = this_00->array_00BC[0xc].field_01F3;
      this_00->field_1F97 = *(undefined4 *)&local_c->field_0x24;
      this_00->field_1F9F = local_c->field_002C + 10;
      this_00->field_1F9B = *(int *)(local_c + 1) + *(int *)&local_c->field_0x28;
      iVar43 = pcVar12->field_00A0;
joined_r0x005a5b89:
      if (iVar43 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
      }
      this_00->field_1F77 = *(undefined4 *)&pcVar12->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                 &this_00->field_0x1f33,0);
      goto cf_common_exit_005A8CA7;
    }
    switch(SVar5) {
    case 0x6907:
      if (g_cursorClass_00802A30->field_0493 == CASE_5) break;
      local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
      this_00->field_1F43 = 0x6506;
      iVar43 = local_c->field_0008;
      this_00->field_1F63 = 0x698c;
      this_00->field_1F4B = iVar43;
      this_00->field_1FB3->count = 0;
      this_00->field_20BB = 0;
      pcVar38_mg3B = LoadResourceString(0x25bf,g_hINSTANCE_00807618);
      uVar33 = 0xffffffff;
      do {
        pcVar37 = pcVar38_mg3B;
        if (uVar33 == 0) break;
        uVar33 = uVar33 - 1;
        pcVar37 = pcVar38_mg3B + 1;
        cVar2 = *pcVar38_mg3B;
        pcVar38_mg3B = pcVar37;
      } while (cVar2 != '\0');
      uVar33 = ~uVar33;
      pcVar37 = pcVar37 + -uVar33;
      pcVar22 = &this_00->field_0x1fb7;
      memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
      uVar29 = 0;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      this_00->field_20BB = 1;
      pcVar38_mg3D = LoadResourceString(0x25c0,g_hINSTANCE_00807618);
      uVar33 = 0xffffffff;
      do {
        pcVar37 = pcVar38_mg3D;
        if (uVar33 == 0) break;
        uVar33 = uVar33 - 1;
        pcVar37 = pcVar38_mg3D + 1;
        cVar2 = *pcVar38_mg3D;
        pcVar38_mg3D = pcVar37;
      } while (cVar2 != '\0');
      uVar33 = ~uVar33;
      pcVar37 = pcVar37 + -uVar33;
      pcVar22 = &this_00->field_0x1fb7;
      memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
      uVar29 = 0;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      this_00->field_20BB = 2;
      pcVar38_mg3F = LoadResourceString(0x25c1,g_hINSTANCE_00807618);
      uVar33 = 0xffffffff;
      do {
        pcVar37 = pcVar38_mg3F;
        if (uVar33 == 0) break;
        uVar33 = uVar33 - 1;
        pcVar37 = pcVar38_mg3F + 1;
        cVar2 = *pcVar38_mg3F;
        pcVar38_mg3F = pcVar37;
      } while (cVar2 != '\0');
      uVar33 = ~uVar33;
      pcVar37 = pcVar37 + -uVar33;
      pcVar22 = &this_00->field_0x1fb7;
      memmove(pcVar22, pcVar37, uVar33); /* compiler REP MOVS byte copy */
      uVar29 = 0;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      pFVar9 = this_00->field_1FB3;
      this_00->field_1F7B = pFVar9->count;
      uVar33 = 0;
      this_00->field_1F73 = 0;
      if (pFVar9->count != 0) {
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          if (DAT_00803144 == *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar33)) {
            this_00->field_1F73 = uVar33;
            break;
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 < pFVar9->count);
      }
      pcVar12 = this_00->array_00BC[0xc].field_01F3;
      this_00->field_1F97 = *(undefined4 *)&local_c->field_0x24;
      this_00->field_1F9F = local_c->field_002C + 10;
      this_00->field_1F9B = *(int *)(local_c + 1) + *(int *)&local_c->field_0x28;
      iVar43 = pcVar12->field_00A0;
      goto joined_r0x005a5b89;
    case MESS_SHARED_6900|MESS_SHARED_0008:
      if (g_cursorClass_00802A30->field_0493 == CASE_5) break;
      bVar42 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar42 = true;
      }
      if ((!bVar42) ||
         (CFsgsConnection::RequestLadderList
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pCVar35 = g_cursorClass_00802A30, g_cursorClass_00802A30 == nullptr)) break;
      iVar43 = g_cursorClass_00802A30->field_00C9;
      iVar44 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar35->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
      iVar43 = pCVar35->field_00C9;
      iVar44 = pCVar35->field_00C5;
      goto cf_common_exit_005A52AA;
    case MESS_SHARED_6900|MESS_CURSORCLASSTY_0009:
      if ((g_cursorClass_00802A30->field_0493 == CASE_5) || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar35 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 == nullptr) break;
      iVar43 = g_cursorClass_00802A30->field_00C9;
      iVar44 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar35->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
      iVar43 = pCVar35->field_00C9;
      iVar44 = pCVar35->field_00C5;
cf_common_exit_005A52AA:
      CursorClassTy::DrawSprite(pCVar35,iVar44,iVar43);
      pCVar35->field_00D2 = 0;
      pCVar35->field_04DF = -1;
      break;
    case MESS_SHARED_6900|MESS_SYSTEMCLASSTY_000A:
      if ((g_cursorClass_00802A30->field_0493 == CASE_5) ||
         (pDVar28 = this_00->field_1AE8, pDVar28 == nullptr)) break;
      if (0 < (int)pDVar28->elementSize) {
        pcVar37 = *(char **)pDVar28->growCapacity;
      }
      iVar43 = -1;
      do {
        if (iVar43 == 0) break;
        iVar43 = iVar43 + -1;
        cVar2 = *pcVar37;
        pcVar37 = pcVar37 + 1;
      } while (cVar2 != '\0');
      if (iVar43 == -2) break;
      if ((int)pDVar28->elementSize < 1) {
        pcVar37 = nullptr;
      }
      else {
        pcVar37 = *(char **)pDVar28->growCapacity;
      }
      CFsgsConnection::RequestLadderListByName
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,pcVar37,0xf);
      goto LAB_005a6e50;
    case 0x6913:
    case 0x6914:
    case 0x6915:
    case 0x6916:
    case 0x6917:
    case 0x6918:
    case 0x6919:
    case 0x691a:
    case 0x691b:
    case 0x691c:
    case 0x691d:
    case 0x691e:
    case 0x691f:
    case 0x6920:
    case 0x6921:
      bVar32 = (char)message->id - 0x13;
      local_c = (AnonShape_005A4350_59BACD18 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar32));
      if ((this_00->field_1EE3 <= (uint)bVar32) || (this_00->field_1EDB == nullptr)) break;
      iVar44 = (uint)bVar32 * 0x24;
      iVar43 = -1;
      pcVar37 = (char *)(iVar44 + 0x14 + (int)this_00->field_1EDB);
      do {
        if (iVar43 == 0) break;
        iVar43 = iVar43 + -1;
        cVar2 = *pcVar37;
        pcVar37 = pcVar37 + 1;
      } while (cVar2 != '\0');
      if (iVar43 == -2) break;
      if (this_00->field_1B0C != nullptr) {
        FreeAndNull(&this_00->field_1B0C);
      }
      uVar33 = 0xffffffff;
      pcVar37 = (char *)(iVar44 + 0x14 + (int)this_00->field_1EDB);
      do {
        if (uVar33 == 0) break;
        uVar33 = uVar33 - 1;
        cVar2 = *pcVar37;
        pcVar37 = pcVar37 + 1;
      } while (cVar2 != '\0');
      pbVar39 = Library::DKW::LIB::MemAlloc(~uVar33);
      this_00->field_1B0C = pbVar39;
      uVar33 = 0xffffffff;
      pcVar37 = (char *)(iVar44 + 0x14 + (int)this_00->field_1EDB);
      do {
        pcVar22 = pcVar37;
        if (uVar33 == 0) break;
        uVar33 = uVar33 - 1;
        pcVar22 = pcVar37 + 1;
        cVar2 = *pcVar37;
        pcVar37 = pcVar22;
      } while (cVar2 != '\0');
      uVar33 = ~uVar33;
      pbVar34 = (byte *)(pcVar22 + -uVar33);
      memmove(pbVar39, pbVar34, uVar33); /* compiler REP MOVS byte copy */
      uVar29 = 0;
      this_00->CloseButtons();
      this_00->array_00BC[0xc].field_01E1 = 10;
      this_00->field_1ED2 = 9;
      pSVar8 = this_00->array_00BC[0xc].field_01DB;
      if (pSVar8->field_02E6 == nullptr) break;
      puVar20 = local_338;
      for (iVar43 = 6; iVar43 != 0; iVar43 = iVar43 + -1) {
        *puVar20 = 0xffffffff;
        puVar20 = puVar20 + 1;
      }
      *(undefined2 *)puVar20 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      MMsgTy::StatePanel(pSVar8->field_02E6,(int)local_338);
      puVar20 = &local_70;
      goto cf_common_exit_005A7F3B;
    case MESS_PRIVIDERTY_693F:
      sub_0059B820(this_00);
      break;
    case MESS_SHARED_6940:
      sub_0059BE50(this_00);
      break;
    case MESS_FSGSTY_6941:
      thunk_FUN_005b6350(this_00,0x6105,0,1);
      this_00->array_00BC[0xc].field_01E1 = 0;
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      this_00->CloseButtons();
      pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
      if (pMVar30 != nullptr) {
        MMsgTy::HidePanel(pMVar30,1,0,1);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar5 == MESS_ID_MSGOK) {
    cVar2 = this_00->array_00BC[0xc].field_01DF;
    if (cVar2 == '\x03') {
      this_00->CloseButtons();
      this_00->array_00BC[0xc].field_01E1 = 4;
      pSVar8 = this_00->array_00BC[0xc].field_01DB;
      if (pSVar8->field_02E6 != nullptr) {
        local_dc = 0;
        local_d8 = 0;
        local_e0 = 0x101;
        local_d4 = 0;
        MMsgTy::thunk_FUN_005b8f40(pSVar8->field_02E6,&local_e0);
      }
      goto cf_common_exit_005A8CA7;
    }
    if (cVar2 == '\a') {
      if ((g_cursorClass_00802A30 != nullptr) &&
         (g_cursorClass_00802A30->field_0493 == CASE_5)) goto cf_common_exit_005A8CA7;
      thunk_FUN_005daa60();
      local_290.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_290;
      local_EAX_3627 = Library::MSVCRT::__setjmp3(local_290.jumpBuffer,0);
      this_00 = local_20;
      if (local_EAX_3627 == 0) {
        FUN_006b6150((uint)DAT_00807362);
        if ((int)this_00->field_1AE8->elementSize < 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = *(undefined4 *)this_00->field_1AE8->growCapacity;
        }
        Library::DKW::DDX::FUN_006b69b0((int *)&g_int_00811764,(int *)&DAT_007cd6f0,0,uVar21,0x20);
        g_currentExceptionFrame = local_290.previous;
      }
      else {
        g_currentExceptionFrame = local_290.previous;
        local_EAX_3743 =
             ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xc08,0,local_EAX_3627,
                                "%s","FSGSTy::GetMessage(MESS_ID_MSGOK, New Game)");
        if (local_EAX_3743 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      if (g_int_00811764 == nullptr) {
        pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar30 != nullptr) {
          MMsgTy::SetMessage(pMVar30,0x2594,'\0',nullptr,nullptr,
                             nullptr,0,0);
        }
        goto cf_common_exit_005A8CA7;
      }
      FUN_006b6160(local_6b8,(int)(g_int_00811764 + 6));
      local_698 = 0;
      if ((int)this_00->field_1AEC->elementSize < 1) {
        pcVar37 = nullptr;
      }
      else {
        pcVar37 = *(char **)this_00->field_1AEC->growCapacity;
      }
      if ((int)this_00->field_1AE8->elementSize < 1) {
        pcVar22 = nullptr;
      }
      else {
        pcVar22 = *(char **)this_00->field_1AE8->growCapacity;
      }
      CFsgsConnection::CreateGame
                ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,0x17e0,pcVar22,pcVar37,
                 local_6b8);
      pCVar35 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 == nullptr) goto cf_common_exit_005A8CA7;
      iVar43 = g_cursorClass_00802A30->field_00C9;
      iVar44 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar35->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
      iVar43 = pCVar35->field_00C9;
      iVar44 = pCVar35->field_00C5;
      goto cf_common_exit_005A52AA;
    }
    if ((cVar2 != '\b') ||
       (((g_cursorClass_00802A30 != nullptr &&
         (g_cursorClass_00802A30->field_0493 == CASE_5)) ||
        (this_00->field_1EBE == nullptr)))) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar35->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
      CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
      pCVar35->field_00D2 = 0;
      pCVar35->field_04DF = -1;
    }
    this_00->field_002D = 0x26;
    FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
    pCVar35 = g_cursorClass_00802A30;
    pFVar7 = this_00->field_1EBE;
    if (pFVar7->count <= *(uint *)&this_00->field_0x31) goto cf_common_exit_005A8CA7;
    local_15 = '\x01';
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    local_8 = (uint *)((int)&pFVar7->data->field_0000 +
                      pFVar7->elementSize * *(uint *)&this_00->field_0x31);
    if (local_8 == nullptr) goto cf_common_exit_005A8CA7;
    pbVar39 = (byte *)(local_8 + 0x13);
    iVar43 = -1;
    pcVar37 = (char *)pbVar39;
    do {
      if (iVar43 == 0) break;
      iVar43 = iVar43 + -1;
      cVar2 = *pcVar37;
      pcVar37 = pcVar37 + 1;
    } while (cVar2 != '\0');
    if (iVar43 != -2) {
      if ((int)this_00->field_1AEC->elementSize < 1) {
        pbVar34 = nullptr;
      }
      else {
        pbVar34 = *(byte **)this_00->field_1AEC->growCapacity;
      }
      do {
        bVar32 = *pbVar39;
        bVar42 = bVar32 < *pbVar34;
        if (bVar32 != *pbVar34) {
LAB_005a4eca:
          iVar43 = (1 - (uint)bVar42) - (uint)(bVar42 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar32 == 0) break;
        bVar32 = pbVar39[1];
        bVar42 = bVar32 < pbVar34[1];
        if (bVar32 != pbVar34[1]) goto LAB_005a4eca;
        pbVar39 = pbVar39 + 2;
        pbVar34 = pbVar34 + 2;
      } while (bVar32 != 0);
      iVar43 = 0;
LAB_005a4ecf:
      if (iVar43 != 0) {
        local_15 = '\0';
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar35->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
        CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
        pCVar35->field_00D2 = 0;
        pCVar35->field_04DF = -1;
        pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar30 != nullptr) {
          MMsgTy::SetMessage(pMVar30,0x258b,'\0',nullptr,nullptr,
                             nullptr,0,0);
        }
      }
    }
    puVar31 = local_8;
    if (local_15 == '\0') goto cf_common_exit_005A8CA7;
    thunk_FUN_005daa60();
    FUN_006b61a0(local_22c,(byte *)(puVar31 + 0x17));
    local_3b4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_3b4;
    local_EAX_3145 = Library::MSVCRT::__setjmp3(local_3b4.jumpBuffer,0);
    puVar31 = local_8;
    if (local_EAX_3145 == 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      Library::DKW::DDX::FUN_006b6a50
                ((int *)&g_int_00811764,(undefined4 *)&DAT_007cd6f0,
                 (in_addr)(((in_addr *)(local_8 + 4))->S_un).S_un_b,local_22c);
    }
    pCVar35 = g_cursorClass_00802A30;
    g_currentExceptionFrame = local_3b4.previous;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar43 = g_cursorClass_00802A30->field_00C9;
      iVar44 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar35->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar35,CASE_0,iVar44,iVar43);
      CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
      pCVar35->field_00D2 = 0;
      pCVar35->field_04DF = -1;
    }
    this_00 = local_20;
    if (g_int_00811764 == nullptr) {
      pMVar30 = (local_20->array_00BC[0xc].field_01DB)->field_02E6;
      if (pMVar30 != nullptr) {
        MMsgTy::SetMessage(pMVar30,0x2595,'\0',nullptr,nullptr,nullptr
                           ,0,0);
      }
      goto cf_common_exit_005A8CA7;
    }
    CFsgsConnection::JoinGame((CFsgsConnection *)&DAT_00802a90,puVar31[1]);
    this_00 = local_20;
    DAT_0080877f = g_int_00811764[0xe];
    DAT_0080877e = 0;
    DAT_008087be = 0;
    local_20->array_00BC[0xc].field_01E1 = 0;
    DAT_008067a0 = 1;
    uVar33 = local_20->field_1EC2;
    if (uVar33 < 0x502) {
      if (uVar33 == 0x501) {
        DAT_00803400 = 5;
      }
      else if (uVar33 == 0x200) {
        DAT_00803400 = 0x14;
      }
      else {
        if (uVar33 != 0x400) goto LAB_005a50be;
        DAT_00803400 = 0x15;
      }
    }
    else if (uVar33 == 0x502) {
      DAT_00803400 = 0xc;
    }
    else {
LAB_005a50be:
      DAT_00803400 = 4;
    }
    thunk_FUN_005b6350(local_20,0x6109,0,1);
    this_00->CloseButtons();
    pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar30 != nullptr) {
      MMsgTy::HidePanel(pMVar30,1,0,1);
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar5 < (MESS_FSGSTY_6150|MESS_ID_CREATE)) {
    if (SVar5 != MESS_FSGSTY_6151) {
      if (SVar5 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
        if (SVar5 == MESS_SHARED_6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;
          thunk_FUN_005b66e0((MTaskTy *)this_00);
        }
        else {
          switch(SVar5) {
          case MESS_ID_NONE:
            NoneFSGS(this_00);
            break;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          case MESS_ID_CREATE:
            InitFSGS(this_00,*(byte *)((message->arg0).u32 + 0x14));
            break;
          case MESS_SHARED_0003:
            DoneFSGS(this_00);
            break;
          case MESS_SHARED_0005:
            PaintFSGS(this_00,'\0');
          }
        }
      }
      else {
        switch(SVar5) {
        case MESS_SHARED_6109:
        case MESS_SHARED_611F:
          StartSystemTy::InitChat(this_00->array_00BC[0xc].field_01DB);
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;
          thunk_FUN_005b66e0((MTaskTy *)this_00);
          break;
        case 0x614f:
          if (g_cursorClass_00802A30 != nullptr) {
            g_cursorClass_00802A30->field_0493 = CASE_1;
            pCVar35->field_0494 = 0xffff;
            CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
            CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
            pCVar35->field_00D2 = 0;
            pCVar35->field_04DF = -1;
          }
          pSVar8 = this_00->array_00BC[0xc].field_01DB;
          pSVar38 = &local_19c;
          for (iVar43 = 8; iVar43 != 0; iVar43 = iVar43 + -1) {
            pSVar38->unknown_00 = 0;
            pSVar38 = (STMessage *)&pSVar38->unknown_04;
          }
          local_19c.unknown_08 = this_00->field_0008;
          local_19c.unknown_0c = 2;
          local_19c.id = MESS_FSGSTY_6941;
          pMVar30 = pSVar8->field_02E6;
          if (pMVar30 == nullptr) {
            this_00->GetMessage(&local_19c);
          }
          else {
            MMsgTy::SetMessage(pMVar30,0x2593,'\0',&local_19c.unknown_00,nullptr,
                               nullptr,(message->arg0).i32,0x2599);
          }
          break;
        case MESS_FSGSTY_6150:
          if (this_00->array_00BC[0xc].field_01DF == '\x01') {
            if (g_cursorClass_00802A30 != nullptr) {
              g_cursorClass_00802A30->field_0493 = CASE_1;
              pCVar35->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
              CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
              pCVar35->field_00D2 = 0;
              pCVar35->field_04DF = -1;
            }
            iVar43 = (message->arg0).i32;
            pSVar38 = &local_160;
            for (iVar44 = 8; iVar44 != 0; iVar44 = iVar44 + -1) {
              pSVar38->unknown_00 = 0;
              pSVar38 = (STMessage *)&pSVar38->unknown_04;
            }
            local_160.unknown_08 = this_00->field_0008;
            local_160.unknown_0c = 2;
            local_160.id = MESS_FSGSTY_6941;
            switch(iVar43) {
            case 1:
              UVar19 = 0x2580;
              break;
            case 2:
              UVar19 = 0x2581;
              break;
            case 3:
              UVar19 = 0x2582;
              break;
            case 4:
              UVar19 = 0x2583;
              break;
            default:
              UVar19 = 0x2584;
            }
            if ((UVar19 == 0) ||
               (pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6,
               pMVar30 == nullptr)) {
              this_00->GetMessage(&local_160);
            }
            else if (UVar19 == 0x2584) {
              MMsgTy::SetMessage(pMVar30,0x2584,'\0',&local_160.unknown_00,nullptr,
                                 nullptr,iVar43,0x2599);
            }
            else {
              MMsgTy::SetMessage(pMVar30,UVar19,'\0',&local_160.unknown_00,nullptr,
                                 nullptr,0,0);
            }
          }
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (this_00->array_00BC[0xc].field_01DF != '\x01') goto cf_common_exit_005A8CA7;
    CFsgsConnection::StartBanners((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      puVar6 = this_00->field_1AC0;
      uVar33 = *(uint *)(puVar6 + 10);
      if (uVar33 == 0) {
        uVar33 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar6 + 4);
      }
      puVar20 = (undefined4 *)FUN_006b4fa0((int *)puVar6);
      for (uVar29 = uVar33 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
        *puVar20 = 0xffffffff;
        puVar20 = puVar20 + 1;
      }
      for (uVar33 = uVar33 & 3; uVar33 != 0; uVar33 = uVar33 - 1) {
        *(undefined1 *)puVar20 = 0xff;
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      }
      ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,0,0x16,0x1b8,
                       0xf0);
      iVar48 = -1;
      iVar47 = -1;
      uVar33 = 2;
      iVar44 = -1;
      iVar43 = -1;
      pcVar38_mg43 = LoadResourceString(0x25b6,g_hINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->array_00BC[0xc].field_01F3,pcVar38_mg43,iVar43,iVar44,uVar33,iVar47,
                     iVar48);
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      CFsgsConnection::RequestDatafile((CFsgsConnection *)&DAT_00802a90,"st.inf");
      goto cf_common_exit_005A8CA7;
    }
    goto LAB_005a6d57;
  }
  if (MESS_WAITTY_6333 < SVar5) {
    if (SVar5 == MESS_SHARED_6334) {
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1BB9,
                 (int)message,0);
    }
    else if (SVar5 == MESS_WAITTY_6335) {
      this_00->field_1C6A = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
      if (this_00->field_1C4E != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,this_00->field_1C52,
                   this_00->field_1C66,this_00->field_1C6A);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar5 == MESS_WAITTY_6333) {
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B28,
               (int)message,0);
    goto cf_common_exit_005A8CA7;
  }
  switch(SVar5) {
  case MESS_FSGSTY_6150|MESS_ID_CREATE:
    if (this_00->array_00BC[0xc].field_01DF != '\x02') goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar35->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
      CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
      pCVar35->field_00D2 = 0;
      pCVar35->field_04DF = -1;
    }
    pSVar8 = this_00->array_00BC[0xc].field_01DB;
    puVar20 = local_2c8;
    for (iVar43 = 6; iVar43 != 0; iVar43 = iVar43 + -1) {
      *puVar20 = 0x10001;
      puVar20 = puVar20 + 1;
    }
    *(undefined2 *)puVar20 = 1;
    pMVar30 = pSVar8->field_02E6;
    if (pMVar30 != nullptr) {
      MMsgTy::StatePanel(pMVar30,(int)local_2c8);
    }
    switch((message->arg0).i32) {
    case 2:
      UVar19 = 0x258b;
      break;
    case 3:
      UVar19 = 0x258c;
      break;
    case 4:
      UVar19 = 0x258d;
      break;
    default:
      UVar19 = 0x2589;
      break;
    case 7:
      UVar19 = 0x25c2;
    }
    if ((UVar19 == 0) ||
       (pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6, pMVar30 == nullptr))
    goto cf_common_exit_005A8CA7;
    if (UVar19 == 0x2589) {
      MMsgTy::SetMessage(pMVar30,0x2589,'\0',nullptr,nullptr,nullptr,
                         (message->arg0).i32,0x2599);
      goto cf_common_exit_005A8CA7;
    }
    break;
  case MESS_FSGSTY_6150|MESS_SHARED_0003:
    cVar2 = this_00->array_00BC[0xc].field_01DF;
    if ((cVar2 == '\x02') || (cVar2 == '\x04')) {
      if (g_cursorClass_00802A30 != nullptr) {
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar35->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
        CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
        pCVar35->field_00D2 = 0;
        pCVar35->field_04DF = -1;
      }
      local_100 = "Profile\\Age";
      local_fc = "Profile\\Sex";
      local_f8 = "Profile\\Location";
      local_f4 = "Profile\\Description";
      if (this_00->array_00BC[0xc].field_01DF == '\x02') {
        CFsgsConnection::RequestInfo
                  ((CFsgsConnection *)&DAT_00802a90,&CHAR_00h_00807e1d,4,&local_100);
      }
      else {
        local_11c = "Profile\\Sex";
        local_118 = "Profile\\Location";
        local_114 = "Profile\\Description";
        local_124 = DAT_008030d4;
        local_120 = "Profile\\Age";
        local_130 = &DAT_00802ad4;
        local_12c = &DAT_00802cd4;
        local_128 = &DAT_00802ed4;
        CFsgsConnection::UpdateInfo((CFsgsConnection *)&DAT_00802a90,4,&local_120,&local_130);
      }
      thunk_FUN_0055bf20(&DAT_00802a90,this_00->array_00BC[0xc].field_01E7);
      if ((DArrayTy *)this_00->field_1E9E != nullptr) {
        FUN_006b5570((DArrayTy *)this_00->field_1E9E);
      }
      local_EAX_1705 = Library::DKW::TBL::SArrayCreate(nullptr,100,100);
      this_00->field_1E9E = &local_EAX_1705->flags;
      this_00->CloseButtons();
      this_00->array_00BC[0xc].field_01E1 = 6;
      pSVar8 = this_00->array_00BC[0xc].field_01DB;
      if (pSVar8->field_02E6 != nullptr) {
        local_ac = 0;
        local_a8 = 0;
        local_b0 = 0x10101;
        local_a4 = 0;
        MMsgTy::thunk_FUN_005b8f40(pSVar8->field_02E6,&local_b0);
      }
    }
    goto cf_common_exit_005A8CA7;
  case 0x6154:
    if (this_00->array_00BC[0xc].field_01DF == '\x05') {
      if (g_cursorClass_00802A30 != nullptr) {
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar35->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
        CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
        pCVar35->field_00D2 = 0;
        pCVar35->field_04DF = -1;
      }
      uVar33 = (message->arg0).u32;
      if (uVar33 == 0) {
        this_00->field_002D = 0x6952;
        this_00->GetMessage((STMessage *)&this_00->field_0x1d);
      }
      else if ((uVar33 != 0) && (uVar33 < 3)) {
        puVar20 = local_300;
        for (iVar43 = 6; iVar43 != 0; iVar43 = iVar43 + -1) {
          *puVar20 = 0x10001;
          puVar20 = puVar20 + 1;
        }
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        *(undefined2 *)puVar20 = 1;
        pMVar30 = pSVar8->field_02E6;
        if (pMVar30 != nullptr) {
          MMsgTy::StatePanel(pMVar30,(int)local_300);
        }
        pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar30 != nullptr) {
          MMsgTy::SetMessage(pMVar30,(-(uint)((message->arg0).u32 != 1) & 10) + 0x258e,'\0',
                             nullptr,nullptr,nullptr,0,0);
        }
      }
    }
    goto cf_common_exit_005A8CA7;
  case MESS_FSGSTY_6150|MESS_SHARED_0005:
    if (this_00->array_00BC[0xc].field_01DF != '\x04') goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar35->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
      CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
      pCVar35->field_00D2 = 0;
      pCVar35->field_04DF = -1;
    }
    if ((message->arg0).u32 == 0) goto LAB_005a67e1;
    if (6 < (message->arg0).u32) goto cf_common_exit_005A8CA7;
    puVar20 = local_354;
    for (iVar43 = 6; iVar43 != 0; iVar43 = iVar43 + -1) {
      *puVar20 = 0x10001;
      puVar20 = puVar20 + 1;
    }
    *(undefined2 *)puVar20 = 1;
    pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar30 != nullptr) {
      MMsgTy::StatePanel(pMVar30,(int)local_354);
    }
    pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar30 == nullptr) goto cf_common_exit_005A8CA7;
    switch((message->arg0).u32) {
    case 2:
      UVar19 = 0x2597;
      break;
    case 3:
      UVar19 = 0x2596;
      break;
    case 4:
      UVar19 = 0x25c3;
      break;
    case 5:
      UVar19 = 0x25c4;
      break;
    case 6:
      UVar19 = 0x25c5;
      break;
    default:
      UVar19 = 0x258f;
    }
    break;
  case MESS_FSGSTY_6156:
    if (this_00->array_00BC[0xc].field_01DF != '\x06') goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar35->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar35,CASE_0,pCVar35->field_00C5,pCVar35->field_00C9);
      CursorClassTy::DrawSprite(pCVar35,pCVar35->field_00C5,pCVar35->field_00C9);
      pCVar35->field_00D2 = 0;
      pCVar35->field_04DF = -1;
    }
    UVar19 = 0;
    if ((message->arg0).u32 == 0xd) {
      UVar19 = 0x2590;
    }
    else if ((message->arg0).u32 == 0xf) {
      UVar19 = 0x2591;
    }
    if ((UVar19 == 0) ||
       (pMVar30 = (this_00->array_00BC[0xc].field_01DB)->field_02E6, pMVar30 == nullptr))
    goto cf_common_exit_005A8CA7;
    break;
  default:
    goto cf_common_exit_005A8CA7;
  }
  MMsgTy::SetMessage(pMVar30,UVar19,'\0',nullptr,nullptr,nullptr,0,0);
cf_common_exit_005A8CA7:
  g_currentExceptionFrame = local_21c.previous;
  local_EAX_18792 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return local_EAX_18792;
}

