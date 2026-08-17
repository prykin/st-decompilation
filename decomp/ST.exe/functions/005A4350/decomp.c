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
  FSGSTy_field_1EA6DArray *pFVar11;
  dword dVar12;
  ccFntTy *pcVar13;
  LPCSTR pCVar14;
  LPCSTR pCVar15;
  LPCSTR pCVar16;
  int *piVar17;
  RecoveredSourceFamily_dibcopy *pRVar18;
  FSGSTy_field_1EAADArray *pFVar19;
  bool bVar44;
  DWORD DVar20;
  int local_EAX_61;
  UINT UVar21;
  undefined4 *puVar22;
  char *pcVar38_mg43;
  DArrayTy *local_EAX_1705;
  int local_EAX_3145;
  int local_EAX_3627;
  undefined4 uVar23;
  int local_EAX_3743;
  char *pcVar24;
  DWORD DVar25;
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
  ulong uVar26;
  LPCSTR pCVar27;
  HINSTANCE pHVar28;
  char *pcVar38_mg1;
  BITMAPINFO *pBVar29;
  void *pvVar30;
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
  DArrayTy *pDVar31;
  int local_EAX_18792;
  int iVar46;
  uint uVar32;
  MMsgTy *pMVar33;
  uint *puVar34;
  FSGSTy_field_1FB3Element *element_1fb3;
  byte bVar35;
  FSGSTy *this_00;
  uint uVar36;
  byte *pbVar37;
  CursorClassTy *pCVar38;
  char *pcVar39;
  FSGSTy_field_1EA6Element *element_1ea6_2;
  FSGSTy_field_1EA6Element *element_1ea6_3;
  FSGSTy_field_1EA6Element *element_1ea6_4;
  FSGSTy_field_1EAAElement *element_1eaa;
  STMessage *pSVar40;
  byte *pbVar41;
  LPCSTR pCVar42;
  FSGSTy_field_1EAAElement *pFVar43;
  bool bVar45;
  int iVar47;
  int iVar48;
  DWORD DVar49;
  int iVar50;
  int iVar51;
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
  FSGSTy_field_1EAAElement *local_c;
  FSGSTy_field_1EAAElement *element_1eaa_2;
  uint *local_8;
  DArrayTy *pDVar25;

  local_20 = this;
  DVar20 = STAppC::sub_006E51B0(this->field_0010);
  pcVar39 = nullptr;
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
  pCVar38 = g_cursorClass_00802A30;
  SVar5 = message->id;
  if (MESS_FSGSTY_6949 < SVar5) {
    if (SVar5 < MESS_SHARED_6980) {
      if (SVar5 == MESS_SHARED_697F) {
        dVar12 = (message->arg2).u32;
        local_60 = *(int *)(dVar12 + 0x24) + -0xb4;
        local_58 = *(int *)(dVar12 + 0x2c);
        local_54 = *(int *)(dVar12 + 0x30);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar36 = *(int *)(dVar12 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
        local_5c = uVar36;
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,
                     *(int *)(dVar12 + 0x24) + -0xb5,uVar36,local_58 + 2,local_54,0xff);
        ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,local_60,
                         uVar36,local_58,local_54);
        if ((message->arg0).ptr != nullptr) {
          ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,*(char **)(message->arg0).ptr,0,-1,0);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar47 = (uint)uVar3 + local_60;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1AC0,0,iVar47,uVar36 + 1,iVar47
                       ,local_54 + -2 + uVar36,9,0xd);
        }
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
        goto cf_common_exit_005A8CA7;
      }
      switch(SVar5) {
      case MESS_FSGSTY_694A:
      case 0x694e:
        /* ST_CALLSITE[005A69DB]: CALL dword ptr [EAX + 0x8] */
        this_00->CloseButtons();
        this_00->array_00BC[0xc].field_01E1 = (message->id != MESS_FSGSTY_694A) + '\a';
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        if (pSVar8->field_02E6 == nullptr) break;
        puVar22 = local_31c;
        for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
          *puVar22 = 0xffffffff;
          puVar22 = puVar22 + 1;
        }
        *(undefined2 *)puVar22 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        /* ST_CALLSITE[005A6A51]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
        MMsgTy::StatePanel(pSVar8->field_02E6,(int)local_31c);
        puVar22 = &local_a0;
        goto cf_common_exit_005A7F3B;
      case 0x694b:
        cVar2 = this_00->array_00BC[0xc].field_01DF;
        if (cVar2 == '\x02') {
          /* ST_CALLSITE[005A6978]: CALL dword ptr [EDX + 0x8] */
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
            pcVar39 = *(char **)this_00->field_1AF4->growCapacity;
          }
          iVar47 = -1;
          do {
            if (iVar47 == 0) break;
            iVar47 = iVar47 + -1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar39 + 1;
          } while (cVar2 != '\0');
          if (iVar47 == -2) {
            pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
            if (pMVar33 != nullptr) {
              /* ST_CALLSITE[005A686C]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
              MMsgTy::SetMessage(pMVar33,0x2592,'\0',nullptr,nullptr,
                                 nullptr,0,0);
            }
          }
          else {
            puVar22 = local_1d8;
            for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
              *puVar22 = 0xffffffff;
              puVar22 = puVar22 + 1;
            }
            *(undefined2 *)puVar22 = 0xffff;
            local_1cc = 1;
            local_1ce = 1;
            pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
            if (pMVar33 != nullptr) {
              /* ST_CALLSITE[005A68B2]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
              MMsgTy::StatePanel(pMVar33,(int)local_1d8);
            }
            pCVar38 = g_cursorClass_00802A30;
            if (g_cursorClass_00802A30 != nullptr) {
              iVar47 = g_cursorClass_00802A30->field_00C9;
              iVar48 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar38->field_0494 = 0xffff;
              /* ST_CALLSITE[005A68E3]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
              /* ST_CALLSITE[005A68F8]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
              CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
              pCVar38->field_00D2 = 0;
              pCVar38->field_04DF = -1;
            }
            if ((int)this_00->field_1AF4->elementSize < 1) {
              pcVar39 = nullptr;
            }
            else {
              pcVar39 = *(char **)this_00->field_1AF4->growCapacity;
            }
            if ((int)this_00->field_1AEC->elementSize < 1) {
              pcVar24 = nullptr;
            }
            else {
              pcVar24 = *(char **)this_00->field_1AEC->growCapacity;
            }
            if ((int)this_00->field_1AE8->elementSize < 1) {
              /* ST_CALLSITE[005A6969]: CALL dword ptr [0x0085c07c] */
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,nullptr,pcVar24,pcVar39);
            }
            else {
              /* ST_CALLSITE[005A6954]: CALL dword ptr [0x0085c07c] */
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,
                         *(char **)this_00->field_1AE8->growCapacity,pcVar24,pcVar39);
            }
          }
        }
        break;
      case 0x694c:
        if ((this_00->field_1AAB != (LPCSTR)0x0) &&
           /* ST_CALLSITE[005A6D2A]: CALL dword ptr [0x0085bda4] */
           (pHVar28 = ShellExecuteA(HWND_00856d78,&DAT_007cc624,this_00->field_1AAB,(LPCSTR)0x0,
                                    (LPCSTR)0x0,1), 0x20 < (int)pHVar28)) {
          /* ST_CALLSITE[005A6D45]: CALL dword ptr [0x0085c080] */
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
          pbVar41 = this_00->field_1B0C;
          if (pbVar41 != nullptr) {
            pcVar39 = &CHAR_00h_00807e1d;
            do {
              bVar35 = *pbVar41;
              bVar45 = bVar35 < (byte)*pcVar39;
              if (bVar35 != *pcVar39) {
LAB_005a63e7:
                iVar47 = (1 - (uint)bVar45) - (uint)(bVar45 != 0);
                goto LAB_005a63ec;
              }
              if (bVar35 == 0) break;
              bVar35 = pbVar41[1];
              bVar45 = bVar35 < (byte)pcVar39[1];
              if (bVar35 != pcVar39[1]) goto LAB_005a63e7;
              pbVar41 = pbVar41 + 2;
              pcVar39 = pcVar39 + 2;
            } while (bVar35 != 0);
            iVar47 = 0;
LAB_005a63ec:
            if (iVar47 == 0) {
              if ((int)this_00->field_1B00->elementSize < 1) {
                pcVar39 = nullptr;
              }
              else {
                pcVar39 = *(char **)this_00->field_1B00->growCapacity;
              }
              if ((int)this_00->field_1AFC->elementSize < 1) {
                pcVar24 = nullptr;
              }
              else {
                pcVar24 = *(char **)this_00->field_1AFC->growCapacity;
              }
              if ((int)this_00->field_1AF8->elementSize < 1) {
                pbVar41 = nullptr;
              }
              else {
                pbVar41 = *(byte **)this_00->field_1AF8->growCapacity;
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar41,pcVar24,pcVar39,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              local_e4 = DAT_008030d4;
              local_110 = "Profile\\Age";
              local_f0 = &DAT_00802ad4;
              local_10c = "Profile\\Sex";
              local_ec = &DAT_00802cd4;
              local_108 = "Profile\\Location";
              local_e8 = &DAT_00802ed4;
              local_104 = "Profile\\Description";
              /* ST_CALLSITE[005A64B1]: CALL dword ptr [0x0085c028] */
              CFsgsConnection::UpdateInfo((CFsgsConnection *)&DAT_00802a90,4,&local_110,&local_f0);
            }
          }
          this_00->array_00BC[0xc].field_01E1 = this_00->field_1ED2;
        }
        /* ST_CALLSITE[005A6359]: CALL dword ptr [EDX + 0x8] */
        this_00->CloseButtons();
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        if (pSVar8->field_02E6 != nullptr) {
          puVar22 = local_2e4;
          for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
            *puVar22 = 0xffffffff;
            puVar22 = puVar22 + 1;
          }
          *(undefined2 *)puVar22 = 0xffff;
          /* ST_CALLSITE[005A638D]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
          MMsgTy::StatePanel(pSVar8->field_02E6,(int)local_2e4);
          MMsgTy::thunk_FUN_005b8f40((this_00->array_00BC[0xc].field_01DB)->field_02E6,&local_30);
        }
        break;
      case 0x6953:
        puVar22 = local_17c;
        for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
          *puVar22 = 0xffffffff;
          puVar22 = puVar22 + 1;
        }
        *(undefined2 *)puVar22 = 0xffff;
        local_170 = 1;
        local_172 = 1;
        if ((int)this_00->field_1AE8->elementSize < 1) {
          pcVar39 = nullptr;
        }
        else {
          pcVar39 = *(char **)this_00->field_1AE8->growCapacity;
        }
        Library::MSVCRT::_strncpy(&CHAR_00h_00807e1d,pcVar39,0x40);
        DAT_00807e5c = 0;
        if ((int)this_00->field_1AEC->elementSize < 1) {
          pcVar39 = nullptr;
        }
        else {
          pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
        }
        uVar36 = 0xffffffff;
        do {
          pcVar24 = pcVar39;
          if (uVar36 == 0) break;
          uVar36 = uVar36 - 1;
          pcVar24 = pcVar39 + 1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar24;
        } while (cVar2 != '\0');
        uVar36 = ~uVar36;
        pcVar39 = pcVar24 + -uVar36;
        pcVar24 = &CHAR_00h_00807e5d;
        memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        iVar47 = -1;
        pcVar39 = &CHAR_00h_00807e5d;
        do {
          if (iVar47 == 0) break;
          iVar47 = iVar47 + -1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar39 + 1;
        } while (cVar2 != '\0');
        if (iVar47 == -2) {
          pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
          if (pMVar33 != nullptr) {
            /* ST_CALLSITE[005A65EC]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
            MMsgTy::SetMessage(pMVar33,0x2592,'\0',nullptr,nullptr,
                               nullptr,0,0);
          }
          break;
        }
        cVar2 = this_00->array_00BC[0xc].field_01DF;
        if (cVar2 != '\x02') {
          if (cVar2 == '\x04') {
            if ((int)this_00->field_1AF0->elementSize < 1) {
              pbVar41 = nullptr;
            }
            else {
              pbVar41 = *(byte **)this_00->field_1AF0->growCapacity;
            }
            pcVar39 = &CHAR_00h_00807e5d;
            do {
              bVar35 = *pcVar39;
              bVar45 = bVar35 < *pbVar41;
              if (bVar35 != *pbVar41) {
LAB_005a6653:
                iVar47 = (1 - (uint)bVar45) - (uint)(bVar45 != 0);
                goto LAB_005a6658;
              }
              if (bVar35 == 0) break;
              bVar35 = pcVar39[1];
              bVar45 = bVar35 < pbVar41[1];
              if (bVar35 != pbVar41[1]) goto LAB_005a6653;
              pcVar39 = pcVar39 + 2;
              pbVar41 = pbVar41 + 2;
            } while (bVar35 != 0);
            iVar47 = 0;
LAB_005a6658:
            if (iVar47 == 0) {
              pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
              if (pMVar33 != nullptr) {
                /* ST_CALLSITE[005A66A2]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
                MMsgTy::StatePanel(pMVar33,(int)local_17c);
              }
              pCVar38 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 != nullptr) {
                iVar47 = g_cursorClass_00802A30->field_00C9;
                iVar48 = g_cursorClass_00802A30->field_00C5;
                g_cursorClass_00802A30->field_0493 = CASE_5;
                pCVar38->field_0494 = 0xffff;
                /* ST_CALLSITE[005A66D3]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
                CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
                /* ST_CALLSITE[005A66E8]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
                CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
                pCVar38->field_00D2 = 0;
                pCVar38->field_04DF = -1;
              }
              if ((int)this_00->field_1B00->elementSize < 1) {
                pcVar39 = nullptr;
              }
              else {
                pcVar39 = *(char **)this_00->field_1B00->growCapacity;
              }
              if ((int)this_00->field_1AFC->elementSize < 1) {
                pcVar24 = nullptr;
              }
              else {
                pcVar24 = *(char **)this_00->field_1AFC->growCapacity;
              }
              if ((int)this_00->field_1AF8->elementSize < 1) {
                pbVar41 = nullptr;
              }
              else {
                pbVar41 = *(byte **)this_00->field_1AF8->growCapacity;
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar41,pcVar24,pcVar39,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              /* ST_CALLSITE[005A6763]: CALL dword ptr [0x0085c004] */
              CFsgsConnection::CreateNewAccount
                        ((CFsgsConnection *)&DAT_00802a90,&CHAR_00h_00807e1d,&CHAR_00h_00807e5d);
            }
            else {
              pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
              if (pMVar33 != nullptr) {
                /* ST_CALLSITE[005A6681]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
                MMsgTy::SetMessage(pMVar33,0x258a,'\0',nullptr,nullptr,
                                   nullptr,0,0);
              }
            }
          }
          break;
        }
        pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar33 != nullptr) {
          /* ST_CALLSITE[005A6785]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
          MMsgTy::StatePanel(pMVar33,(int)local_17c);
        }
        pCVar38 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != nullptr) {
          iVar47 = g_cursorClass_00802A30->field_00C9;
          iVar48 = g_cursorClass_00802A30->field_00C5;
          g_cursorClass_00802A30->field_0493 = CASE_5;
          pCVar38->field_0494 = 0xffff;
          /* ST_CALLSITE[005A67B6]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
          CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
          /* ST_CALLSITE[005A67CB]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
          CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
          pCVar38->field_00D2 = 0;
          pCVar38->field_04DF = -1;
        }
LAB_005a67e1:
        /* ST_CALLSITE[005A67F0]: CALL dword ptr [0x0085c008] */
        uVar26 = CFsgsConnection::Login
                           ((CFsgsConnection *)&DAT_00802a90,&CHAR_00h_00807e1d,&CHAR_00h_00807e5d);
        if (uVar26 == 0) {
          /* ST_CALLSITE[005A67FA]: CALL dword ptr [0x0085bbcc] */
          DVar25 = GetLastError();
          thunk_FUN_0055beb0(&DAT_00802a90,DVar25);
        }
        DAT_00802a9a = 0;
        break;
      case 0x6954:
        /* ST_CALLSITE[005A64CE]: CALL dword ptr [EAX + 0x8] */
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
        pCVar14 = (LPCSTR)this_00->field_1AB7;
        pCVar27 = (LPCSTR)0x0;
        pCVar42 = (LPCSTR)0x0;
        if (pCVar14 != (LPCSTR)0x0) {
          if ((message->arg0).u32 == 0) {
            switch(this_00->array_00BC[0xc].field_01DF) {
            case 2:
            case 6:
            case 7:
              goto switchD_005a6a92_caseD_2;
            case 4:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AC8) {
                pCVar27 = (LPCSTR)this_00->field_1AC8;
                pCVar42 = (LPCSTR)this_00->field_1ACC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ACC) {
                pCVar27 = (LPCSTR)this_00->field_1ACC;
                pCVar42 = (LPCSTR)this_00->field_1AD8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AD8) {
                pCVar27 = (LPCSTR)this_00->field_1AD8;
                pCVar42 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ADC) {
                pCVar27 = (LPCSTR)this_00->field_1ADC;
                pCVar42 = (LPCSTR)this_00->field_1AE0;
              }
              else {
                if (pCVar14 != (LPCSTR)this_00->field_1AE0) goto LAB_005a6cc4;
                pCVar27 = (LPCSTR)this_00->field_1AE0;
                pCVar42 = this_00->field_1AE4;
              }
              break;
            case 5:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AC8) {
                pCVar27 = (LPCSTR)this_00->field_1AC8;
                pCVar42 = (LPCSTR)this_00->field_1AD4;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AD4) {
                pCVar27 = (LPCSTR)this_00->field_1AD4;
                pCVar42 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar27 = (LPCSTR)this_00->field_1ACC;
              }
              break;
            case 10:
              pCVar42 = (LPCSTR)this_00->field_1AD8;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ADC) {
                pCVar27 = (LPCSTR)this_00->field_1ADC;
                pCVar42 = (LPCSTR)this_00->field_1AE0;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AE0) {
                pCVar27 = (LPCSTR)this_00->field_1AE0;
                pCVar42 = this_00->field_1AE4;
              }
              else {
LAB_005a6cc4:
                pCVar27 = this_00->field_1AE4;
              }
            }
          }
          else {
            switch(this_00->array_00BC[0xc].field_01DF) {
            case 2:
            case 6:
            case 7:
switchD_005a6a92_caseD_2:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1AC8;
              }
              else {
                pCVar27 = (LPCSTR)this_00->field_1AC8;
              }
              break;
            case 4:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = this_00->field_1AE4;
              }
              else {
                pCVar15 = (LPCSTR)this_00->field_1AC8;
                pCVar27 = pCVar15;
                if (((pCVar14 != pCVar15) &&
                    (pCVar16 = (LPCSTR)this_00->field_1ACC, pCVar27 = pCVar16, pCVar42 = pCVar15,
                    pCVar14 != pCVar16)) &&
                   (pCVar15 = (LPCSTR)this_00->field_1AD8, pCVar27 = pCVar15, pCVar42 = pCVar16,
                   pCVar14 != pCVar15)) {
                  pCVar16 = (LPCSTR)this_00->field_1ADC;
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case 5:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar15 = (LPCSTR)this_00->field_1AC8;
                pCVar27 = pCVar15;
                if ((pCVar14 != pCVar15) &&
                   (pCVar16 = (LPCSTR)this_00->field_1AD4, pCVar27 = pCVar16, pCVar42 = pCVar15,
                   pCVar14 != pCVar16)) {
                  pCVar27 = (LPCSTR)this_00->field_1ACC;
                  pCVar42 = pCVar16;
                }
              }
              break;
            case 10:
              pCVar15 = (LPCSTR)this_00->field_1AD8;
              if (pCVar14 == pCVar15) {
                pCVar27 = pCVar15;
                pCVar42 = this_00->field_1AE4;
              }
              else {
                pCVar16 = (LPCSTR)this_00->field_1ADC;
joined_r0x005a6ba3:
                pCVar27 = pCVar16;
                pCVar42 = pCVar15;
                if ((pCVar14 != pCVar16) &&
                   (pCVar15 = (LPCSTR)this_00->field_1AE0, pCVar27 = pCVar15, pCVar42 = pCVar16,
                   pCVar14 != pCVar15)) {
                  pCVar27 = this_00->field_1AE4;
                  pCVar42 = pCVar15;
                }
              }
            }
          }
        }
        this_00->field_002D = 0x20;
        if (pCVar27 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 0;
          FUN_006e6080(this_00,2,pCVar27,(undefined4 *)&this_00->field_0x1d);
        }
        if (pCVar42 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 1;
          FUN_006e6080(this_00,2,pCVar42,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_CHOOSEMAPTY_6956:
        this_00->field_1ED2 = 1;
LAB_005a6d57:
        /* ST_CALLSITE[005A6D59]: CALL 0x00402ced; direct=00402CED FSGSTy::DoLogon */
        DoLogon(this_00);
        break;
      case MESS_FSGSTY_6957:
        puVar6 = this_00->field_1AC0;
        uVar36 = *(uint *)(puVar6 + 10);
        if (uVar36 == 0) {
          uVar36 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(puVar6 + 4);
        }
        puVar22 = (undefined4 *)FUN_006b4fa0((int *)puVar6);
        for (uVar32 = uVar36 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
          *puVar22 = 0xffffffff;
          puVar22 = puVar22 + 1;
        }
        for (uVar36 = uVar36 & 3; uVar36 != 0; uVar36 = uVar36 - 1) {
          *(undefined1 *)puVar22 = 0xff;
          puVar22 = (undefined4 *)((int)puVar22 + 1);
        }
        ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,0,0x16,0x1b8
                         ,0xf0);
        iVar51 = -1;
        iVar50 = -1;
        uVar36 = 2;
        iVar48 = -1;
        iVar47 = -2;
        pcVar38_mg1 = LoadResourceString(0x25be,g_hINSTANCE_00807618);
        ccFntTy::WrTxt(this_00->array_00BC[0xc].field_01F3,pcVar38_mg1,iVar47,iVar48,uVar36,iVar50,
                       iVar51);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
        /* ST_CALLSITE[005A6E21]: CALL ESI */
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,PTR_s_UPDATES__0079c020,
                  &DAT_0080f126);
        /* ST_CALLSITE[005A6E34]: CALL ESI */
        wsprintfA(local_4b8,"subtitans/%s",&DAT_0080f126);
        /* ST_CALLSITE[005A6E4A]: CALL dword ptr [0x0085c018] */
        CFsgsConnection::DownloadFile
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pCVar38 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != nullptr) {
          g_cursorClass_00802A30->field_0493 = CASE_5;
          pCVar38->field_0494 = 0xffff;
          /* ST_CALLSITE[005A6E80]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
          CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
          /* ST_CALLSITE[005A6E95]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
          CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
          pCVar38->field_00D2 = 0;
          pCVar38->field_04DF = -1;
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
          pFVar43 = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
          local_1c = (AnonShape_005A4350_59BACD18 *)pFVar43;
          FUN_006b5f80((int *)g_ddxContext_008075A8,pFVar43->field_0024,
                       (uint)(message->arg1).words.high + pFVar43->field_0028,pFVar43->field_002C,
                       0x11);
          if (this_00->array_00BC[0xc].field_01DF == '\x06') {
            iVar47 = (uint)(message->arg1).words.high + pFVar43->field_0028;
            /* ST_CALLSITE[005A861E]: CALL 0x00402298; direct=00402298 PutDDXClip */
            PutDDXClip(pFVar43->field_0024,iVar47,pFVar43->field_0024 + -0x1e9,iVar47 + -0x5e,
                       pFVar43->field_002C,(byte *)0x11,'\x01',this_00->field_1E9A);
            FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                         pFVar43->field_002C,0x11,0xff);
            if (this_00->array_00BC[0xc].field_01E0 == '\0') {
              pFVar11 = this_00->field_1EA6;
              if (pFVar11 != nullptr) {
                uVar36 = (uint)(message->arg0).words.low;
                if (uVar36 < pFVar11->count) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  local_8 = (uint *)(&pFVar11->data->field_0000 + pFVar11->elementSize * uVar36);
                }
                else {
                  local_8 = nullptr;
                }
                if (local_8 != nullptr) {
                  ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0x23,0,
                                   pFVar43->field_002C + -0x46,0x11);
                  if (STField<undefined1>(local_8,0x2d) == '\0') {
                    local_c = (FSGSTy_field_1EAAElement *)
                              thunk_FUN_0055c050(&DAT_00802a90,(int)local_8);
                    /* ST_CALLSITE[005A8830]: CALL 0x00403229; direct=00403229 DibPut */
                    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,1,'\x01',
                           (byte *)local_c);
                    if (local_c != nullptr) {
                      FreeAndNull(&local_c);
                    }
                    ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)local_8,0,-1,
                                   (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2);
                    if ((STField<undefined1>(local_8,0x25) & 0x10) != 0) {
                      pBVar29 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                             this_00->field_1A8B,3);
                      FUN_006b5440((ushort *)this_00->field_1E8E,0,pFVar43->field_002C + -0x1d,
                                   (0x11 - (pBVar29->bmiHeader).biHeight) / 2,pBVar29,0,0xff);
                    }
                  }
                  else {
                    pBVar29 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A87
                                           ,1);
                    /* ST_CALLSITE[005A87D4]: CALL 0x00403229; direct=00403229 DibPut */
                    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                           (0x11 - (pBVar29->bmiHeader).biHeight) / 2,'\x06',(byte *)pBVar29);
                    uVar36 = (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2;
                    iVar48 = -1;
                    iVar47 = 0;
                    pcVar38_mg16 = LoadResourceString(0x2567,g_hINSTANCE_00807618);
                    ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg16,iVar47,iVar48,
                                   uVar36);
                  }
                }
              }
            }
            else {
              pFVar19 = this_00->field_1EAA;
              if (pFVar19 != nullptr) {
                uVar36 = (uint)(message->arg0).words.low;
                if (uVar36 < pFVar19->count) {
                  element_1eaa_2 = DArrayAt<FSGSTy_field_1EAAElement>(pFVar19, uVar36);
                }
                else {
                  element_1eaa_2 = nullptr;
                }
                if (element_1eaa_2 != nullptr) {
                  uVar36 = element_1eaa_2->field_0060;
                  if ((uVar36 & 0x40) == 0) {
                    if ((uVar36 & 0x18) == 0) {
                      local_10 = (uint *)(STReplaceLowByte((uint32_t)(local_10), (uint8_t)(-((uVar36 & 2) != 0))) & 0xffffff05
                                         );
                    }
                    else {
                      local_10 = (uint *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(3));
                    }
                  }
                  else {
                    local_10 = (uint *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(4));
                  }
                  pBVar29 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A87,
                                         (uint)local_10 & 0xff);
                  /* ST_CALLSITE[005A86DB]: CALL 0x00403229; direct=00403229 DibPut */
                  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                         (0x11 - (pBVar29->bmiHeader).biHeight) / 2,'\x06',(byte *)pBVar29);
                  ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0x23,0,
                                   pFVar43->field_002C + -0x46,0x11);
                  iVar47 = (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2;
                  /* ST_CALLSITE[005A8726]: CALL dword ptr [0x0085bde8] */
                  wsprintfA((LPSTR)&DAT_0080f33a,"&%d%s (&0%d&%d)",iVar47,element_1eaa_2,
                            *(undefined4 *)&element_1eaa_2->field_0x64,iVar47);
                  ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar47 = (uint)(message->arg1).words.high + pFVar43->field_0028;
            /* ST_CALLSITE[005A88E5]: CALL 0x00402298; direct=00402298 PutDDXClip */
            PutDDXClip(pFVar43->field_0024,iVar47,pFVar43->field_0024 + -0x13,iVar47 + -0x5e,
                       pFVar43->field_002C,(byte *)0x11,'\x01',this_00->field_1E9A);
            FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                         pFVar43->field_002C,0x11,0xff);
            pFVar7 = this_00->field_1EBE;
            if (pFVar7 != nullptr) {
              uVar36 = (uint)(message->arg0).words.low;
              if (uVar36 < pFVar7->count) {
                element_1ebe = DArrayAt<FSGSTy_field_1EBEElement>(pFVar7, uVar36);
              }
              else {
                element_1ebe = nullptr;
              }
              if (element_1ebe != nullptr) {
                iVar47 = -1;
                pcVar39 = (char *)(element_1ebe + 0x13);
                do {
                  if (iVar47 == 0) break;
                  iVar47 = iVar47 + -1;
                  cVar2 = *pcVar39;
                  pcVar39 = pcVar39 + 1;
                } while (cVar2 != '\0');
                pBVar29 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A87,
                                       -(uint)(iVar47 != -2) & 4);
                /* ST_CALLSITE[005A897E]: CALL 0x00403229; direct=00403229 DibPut */
                DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                       (0x11 - (pBVar29->bmiHeader).biHeight) / 2,'\x06',(byte *)pBVar29);
                ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0x23,0,
                                 local_1c->field_002C + -0x40,0x11);
                ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)(element_1ebe + 0xb),0,-1,
                               (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2);
                pFVar43 = (FSGSTy_field_1EAAElement *)local_1c;
              }
            }
          }
          DVar49 = pFVar43->field_002C;
          pBVar29 = (BITMAPINFO *)this_00->field_1E8E;
          DVar25 = 0x11;
          iVar47 = (uint)(message->arg1).words.high + pFVar43->field_0028;
          goto LAB_005a89f6;
        case MESS_OPTPANELTY_8162:
          if ((g_cursorClass_00802A30 != nullptr) &&
             (g_cursorClass_00802A30->field_0493 == CASE_5)) break;
          if (this_00->array_00BC[0xc].field_01E0 != '\0') {
            pFVar19 = this_00->field_1EAA;
            if (pFVar19 != nullptr) {
              if ((message->arg0).u32 < pFVar19->count) {
                element_1eaa = DArrayAt<FSGSTy_field_1EAAElement>(pFVar19, (message->arg0).u32);
              }
              else {
                element_1eaa = nullptr;
              }
              if (element_1eaa != nullptr) {
                if (g_cursorClass_00802A30 != nullptr) {
                  iVar47 = g_cursorClass_00802A30->field_00C9;
                  iVar48 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = CASE_5;
                  pCVar38->field_0494 = 0xffff;
                  /* ST_CALLSITE[005A7DCD]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
                  CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
                  /* ST_CALLSITE[005A7DE2]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
                  CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
                  pCVar38->field_00D2 = 0;
                  pCVar38->field_04DF = -1;
                }
                iVar47 = -1;
                pcVar24 = element_1eaa + 0x40;
                do {
                  if (iVar47 == 0) break;
                  iVar47 = iVar47 + -1;
                  cVar2 = *pcVar24;
                  pcVar24 = pcVar24 + 1;
                } while (cVar2 != '\0');
                if (iVar47 == -2) {
                  thunk_FUN_0055d390(&DAT_00802a90,element_1eaa,element_1eaa + 0x40,1);
                }
                else if ((int)this_00->field_1AEC->elementSize < 1) {
                  thunk_FUN_0055d390(&DAT_00802a90,element_1eaa,nullptr,1);
                }
                else {
                  thunk_FUN_0055d390(&DAT_00802a90,element_1eaa,
                                     *(char **)this_00->field_1AEC->growCapacity,1);
                }
              }
            }
            break;
          }
          uVar36 = (message->arg0).u32;
          if (uVar36 == 0) {
            if (g_cursorClass_00802A30 != nullptr) {
              iVar47 = g_cursorClass_00802A30->field_00C9;
              iVar48 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar38->field_0494 = 0xffff;
              /* ST_CALLSITE[005A7F7A]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
              /* ST_CALLSITE[005A7F8F]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
              CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
              pCVar38->field_00D2 = 0;
              pCVar38->field_04DF = -1;
            }
            /* ST_CALLSITE[005A7FAA]: CALL dword ptr [0x0085c00c] */
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            iVar47 = this_00->field_1B18;
            this_00->array_00BC[0xc].field_01E0 = 1;
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 0;
            if (iVar47 != 0) {
              FUN_006e6080(this_00,2,iVar47,(undefined4 *)&this_00->field_0x1d);
            }
            *(undefined4 *)&this_00->field_0x31 = 1;
            if (this_00->field_1B24 != 0) {
              FUN_006e6080(this_00,2,this_00->field_1B24,(undefined4 *)&this_00->field_0x1d);
            }
            break;
          }
          pFVar11 = this_00->field_1EA6;
          if (uVar36 < pFVar11->count) {
            element_1ea6_2 = DArrayAt<FSGSTy_field_1EA6Element>(pFVar11, uVar36);
          }
          else {
            element_1ea6_2 = nullptr;
          }
          if (element_1ea6_2 == nullptr) break;
          if (this_00->field_1B0C != nullptr) {
            FreeAndNull(&this_00->field_1B0C);
          }
          uVar36 = 0xffffffff;
          pcVar24 = element_1ea6_2;
          do {
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            cVar2 = *pcVar24;
            pcVar24 = pcVar24 + 1;
          } while (cVar2 != '\0');
          pbVar41 = Library::DKW::LIB::MemAlloc(~uVar36);
          uVar36 = 0xffffffff;
          this_00->field_1B0C = pbVar41;
          do {
            pcVar24 = element_1ea6_2;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar24 = element_1ea6_2 + 1;
            cVar2 = element_1ea6_2->field_0000;
            pcVar39 = pcVar24;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar24 + -uVar36;
          memmove(pbVar41, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          /* ST_CALLSITE[005A7ED5]: CALL dword ptr [EDX + 0x8] */
          this_00->CloseButtons();
          this_00->array_00BC[0xc].field_01E1 = 10;
          this_00->field_1ED2 = 6;
          pSVar8 = this_00->array_00BC[0xc].field_01DB;
          if (pSVar8->field_02E6 == nullptr) break;
          puVar22 = local_370;
          for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
            *puVar22 = 0xffffffff;
            puVar22 = puVar22 + 1;
          }
          *(undefined2 *)puVar22 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          /* ST_CALLSITE[005A7F33]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
          MMsgTy::StatePanel(pSVar8->field_02E6,(int)local_370);
          puVar22 = &local_80;
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
            bVar45 = true;
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (((pFVar7 != nullptr) && ((message->arg0).u32 < pFVar7->count)
                ) && (puVar34 = (uint *)((int)&pFVar7->data->field_0000 +
                                        pFVar7->elementSize * (message->arg0).u32),
                     puVar34 != nullptr)) {
              bVar45 = false;
              Library::DKW::TBL::FUN_006b6020(this_00->field_1AE8,0,(char *)(puVar34 + 0xb));
              this_00->field_002D = 0x33;
              *(DArrayTy **)&this_00->field_0x31 = this_00->field_1AE8;
              FUN_006e6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              FUN_006b5f80((int *)g_ddxContext_008075A8,0x1a4,0x7d,0x15e,0x8c);
              /* ST_CALLSITE[005A80C1]: CALL 0x00402298; direct=00402298 PutDDXClip */
              PutDDXClip(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',this_00->field_1E92);
              FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,0x15e,0x8c,
                           0xff);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,0x15e,
                               0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mg9 = LoadResourceString(0x2572,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg9,iVar47,iVar48,uVar36);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x11,
                               0x14a,0x11);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)(puVar34 + 7),0,-1,0);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x22,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mgA = LoadResourceString(0x2347,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mgA,iVar47,iVar48,uVar36);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x33,
                               0x14a,0x11);
              uVar36 = 0;
              iVar48 = -1;
              iVar47 = 0;
              if (((char *)puVar34)[0x1f] == '\0') {
                pcVar38_mgB = LoadResourceString(0x2573,g_hINSTANCE_00807618);
              }
              else {
                pcVar38_mgB = (char *)((int)puVar34 + 0x83);
              }
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mgB,iVar47,iVar48,uVar36);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x44,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mgC = LoadResourceString(0x2344,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mgC,iVar47,iVar48,uVar36);
              if (((char *)puVar34)[0x1f] != '\0') {
                ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x55,
                                 0x14a,0x11);
                iVar47 = (int)(char)STField<undefined1>(puVar34,0x7e) << 1;
                /* ST_CALLSITE[005A825E]: CALL dword ptr [0x0085bde8] */
                wsprintfA((LPSTR)&DAT_0080f33a,"%dx%d",iVar47,iVar47);
                ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,0,-1,0);
              }
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x66,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mgD = LoadResourceString(0x2345,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mgD,iVar47,iVar48,uVar36);
              if (((char *)puVar34)[0x1f] != '\0') {
                ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x77,
                                 0x14a,0x11);
                pcVar38_mgE = LoadResourceString(0x2574,g_hINSTANCE_00807618);
                /* ST_CALLSITE[005A8306]: CALL dword ptr [0x0085bde8] */
                wsprintfA((LPSTR)&DAT_0080f33a,"%d %s",
                          (int)(char)STField<undefined1>(puVar34,0x7d),pcVar38_mgE);
                ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,0,-1,0);
              }
              Library::DKW::DDX::FUN_006b4680
                        ((int *)g_dDXContext_0080759C,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,
                         nullptr,0,0,0x15e,0x8c,0x10000ff);
            }
            if (bVar45) {
              Library::DKW::TBL::FUN_006b6020(this_00->field_1AE8,0,&CHAR_00h_008016a0);
              this_00->field_002D = 0x33;
              *(DArrayTy **)&this_00->field_0x31 = this_00->field_1AE8;
              FUN_006e6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              FUN_006b5f80((int *)g_ddxContext_008075A8,0x1a4,0x7d,0x15e,0x8c);
              /* ST_CALLSITE[005A83CD]: CALL 0x00402298; direct=00402298 PutDDXClip */
              PutDDXClip(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',this_00->field_1E92);
              FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,0x15e,0x8c,
                           0xff);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,0x15e,
                               0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mgF = LoadResourceString(0x2572,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mgF,iVar47,iVar48,uVar36);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x22,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mg10 = LoadResourceString(0x2347,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg10,iVar47,iVar48,uVar36);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x44,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mg11 = LoadResourceString(0x2344,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg11,iVar47,iVar48,uVar36);
              ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x66,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mg12 = LoadResourceString(0x2345,g_hINSTANCE_00807618);
              ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg12,iVar47,iVar48,uVar36);
              Library::DKW::DDX::FUN_006b4680
                        ((int *)g_dDXContext_0080759C,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,
                         nullptr,0,0,0x15e,0x8c,0x10000ff);
            }
          }
          break;
        case MESS_OPTPANELTY_8164:
          /* ST_CALLSITE[005A8A17]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1CDB,
                     (int)message,0);
          break;
        case MESS_OPTPANELTY_8165:
          /* ST_CALLSITE[005A8A2C]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1D6C,
                     (int)message,0);
          break;
        case MESS_SHARED_8166:
          uVar36 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          this_00->field_1E1D = uVar36;
          if (this_00->field_1E01 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1E45,this_00->field_1E01,this_00->field_1E05,
                       this_00->field_1E19,uVar36);
          }
        }
        goto cf_common_exit_005A8CA7;
      }
      switch(SVar5) {
      case MESS_SHARED_C0A2:
        if ((int)this_00->field_1EA2->elementSize < 1) {
          pcVar39 = nullptr;
        }
        else {
          pcVar39 = *(char **)this_00->field_1EA2->growCapacity;
        }
        bVar44 = thunk_FUN_00571810(pcVar39);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,bVar44) == 0) {
          if ((int)this_00->field_1EA2->elementSize < 1) {
            pcVar39 = nullptr;
          }
          else {
            pcVar39 = *(char **)this_00->field_1EA2->growCapacity;
          }
          /* ST_CALLSITE[005A8B53]: CALL dword ptr [0x0085c064] */
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,pcVar39);
        }
        else {
          iVar47 = 0;
          pDVar31 = (this_00->array_00BC[0xc].field_01DB)->field_0696;
          if (0 < (int)pDVar31->elementSize) {
            if ((int)pDVar31->elementSize < 1) {
              pcVar39 = nullptr;
              goto LAB_005a8b12;
            }
            do {
              pcVar39 = *(char **)(pDVar31->growCapacity + iVar47 * 4);
LAB_005a8b12:
              /* ST_CALLSITE[005A8B1E]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
              AddMessage(this_00,8,(byte *)&CHAR_00h_008016a0,pcVar39,8);
              iVar47 = iVar47 + 1;
              pDVar31 = (this_00->array_00BC[0xc].field_01DB)->field_0696;
            } while (iVar47 < (int)pDVar31->elementSize);
          }
        }
        Library::DKW::TBL::FUN_006b6020(this_00->field_1EA2,0,&CHAR_00h_008016a0);
        this_00->field_002D = 0x33;
        *(DArrayTy **)&this_00->field_0x31 = this_00->field_1EA2;
        goto LAB_005a8c85;
      case MESS_SHARED_C0A3:
        pDVar31 = this_00->field_1AE8;
        dVar12 = pDVar31->elementSize;
joined_r0x005a8b8f:
        if (0 < (int)dVar12) {
          pcVar39 = *(char **)pDVar31->growCapacity;
        }
        iVar47 = -1;
        do {
          if (iVar47 == 0) break;
          iVar47 = iVar47 + -1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar39 + 1;
        } while (cVar2 != '\0');
        if (iVar47 != -2) {
          if ((int)this_00->field_1AEC->elementSize < 1) {
            pcVar39 = nullptr;
          }
          else {
            pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
          }
          if ((int)dVar12 < 1) {
            thunk_FUN_0055d390(&DAT_00802a90,nullptr,pcVar39,1);
          }
          else {
            thunk_FUN_0055d390(&DAT_00802a90,*(char **)pDVar31->growCapacity,pcVar39,1);
          }
        }
        break;
      case MESS_BLDLABPANELTY_C0A4:
        if (this_00->array_00BC[0xc].field_01E0 != '\0') break;
        this_00->field_002D = 0x26;
        FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
        uVar36 = *(uint *)&this_00->field_0x31;
        if (uVar36 == 0) break;
        pFVar11 = this_00->field_1EA6;
        if (uVar36 < pFVar11->count) {
          element_1ea6_3 = DArrayAt<FSGSTy_field_1EA6Element>(pFVar11, uVar36);
        }
        else {
          element_1ea6_3 = nullptr;
        }
        if ((int)this_00->field_1EA2->elementSize < 1) {
          uVar23 = 0;
        }
        else {
          uVar23 = *(undefined4 *)this_00->field_1EA2->growCapacity;
        }
        /* ST_CALLSITE[005A8C59]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%s %s ",uVar23,element_1ea6_3);
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
      piVar17 = (message->arg1).ptr;
      iVar47 = *piVar17;
      local_140 = iVar47 + -0xb4;
      iVar48 = piVar17[1];
      local_13c = iVar48 + -0xaa;
      local_138 = piVar17[2];
      local_134 = piVar17[3];
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar47 + -0xb3,
                   iVar48 + -0xa9,local_138 + -2,local_134 + -2,0xff);
      if (DAT_0080735f != '\0') {
        pBVar29 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A83,0);
        /* ST_CALLSITE[005A703A]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,iVar47 + -0xb2,iVar48 + -0xa8,
               '\x06',(byte *)pBVar29);
      }
      break;
    case MESS_SIDTY_6981:
      pcVar13 = this_00->array_00BC[0xc].field_01F3;
      local_14 = nullptr;
      if (pcVar13->field_00A0 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar13);
      }
      dVar12 = (message->arg2).u32;
      iVar21 = *(int *)&pcVar13->field_0x8a;
      local_50 = *(int *)(dVar12 + 0x24) + -0xb4;
      local_48 = *(int *)(dVar12 + 0x2c);
      local_44 = *(int *)(dVar12 + 0x30);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_4c = *(int *)(dVar12 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,
                   *(int *)(dVar12 + 0x24) + -0xb5,local_4c,local_48 + 2,local_44,0xff);
      pvVar30 = (message->arg0).ptr;
      if (pvVar30 != nullptr) {
        local_8 = nullptr;
        do {
          if (*(char **)((int)pvVar30 + (int)local_8) == nullptr) break;
          iVar21 = FUN_007111c0(this_00->array_00BC[0xc].field_01F3,
                                *(char **)((int)pvVar30 + (int)local_8));
          ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,local_50,
                           (int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize
                           + local_4c,local_48,iVar21);
          ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,
                         *(char **)((int)(message->arg0).ptr + (int)local_8),0,-1,0);
          local_14 = (tagBITMAPINFO *)
                     ((int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     (this_00->array_00BC[0xc].field_01F3)->field_005C + iVar21);
          pvVar30 = (message->arg0).ptr;
          local_8 = local_8 + 1;
        } while (pvVar30 != nullptr);
      }
      uVar3 = (message->arg1).words.low;
      if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        iVar48 = (uint)(message->arg1).words.high + local_4c;
        iVar47 = (uint)uVar3 + local_50;
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1AC0,0,iVar47,iVar48,iVar47,
                     iVar48 + iVar21,9,0xd);
      }
      goto LAB_005a7c92;
    case MESS_SHARED_6980|MESS_ID_CREATE:
      if (((this_00->field_1E8E != 0) && (this_00->field_1E92 != nullptr)) &&
         (local_8 = (uint *)(message->arg2).u32, local_8 != nullptr)) {
        if (this_00->array_00BC[0xc].field_01DF == '\x03') {
          pcVar13 = this_00->array_00BC[0xc].field_01F3;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1B08;
        }
        else {
          pcVar13 = this_00->array_00BC[0xc].field_01F7;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1E9E;
        }
        FUN_006b5f80((int *)g_ddxContext_008075A8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
        /* ST_CALLSITE[005A7235]: CALL 0x00402298; direct=00402298 PutDDXClip */
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
              if (pcVar13->field_00A0 != 0) {
                FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar13);
              }
              local_c = *(FSGSTy_field_1EAAElement **)&pcVar13->field_0x8a;
              if (pcVar13->field_00A0 != 0) {
                FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar13);
              }
              ccFntTy::SetSurf(pcVar13,this_00->field_1E8E,0,0,
                               ((int)local_14 - (uint)(message->arg0).words.high) *
                               *(int *)&pcVar13->field_0x8a,*(int *)(this_00->field_1E8E + 4),
                               (int)local_c);
              ccFntTy::WrStr(pcVar13,(char *)local_10,0,-1,2);
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
        dVar12 = (message->arg2).u32;
        FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)(dVar12 + 0x24),*(int *)(dVar12 + 0x28),
                     *(int *)(dVar12 + 0x2c),*(int *)(dVar12 + 0x30));
        /* ST_CALLSITE[005A73B0]: CALL 0x00402298; direct=00402298 PutDDXClip */
        PutDDXClip(*(int *)(dVar12 + 0x24),*(int *)(dVar12 + 0x28),6,0x15f,*(uint *)(dVar12 + 0x2c),
                   *(byte **)(dVar12 + 0x30),'\x01',this_00->field_1E92);
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar12 + 0x2c),*(int *)(dVar12 + 0x30),0xff);
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
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar12 + 0x24),*(int *)(dVar12 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,*(DWORD *)(dVar12 + 0x2c),
                   *(DWORD *)(dVar12 + 0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((this_00->field_1E8E == 0) || (this_00->field_1E92 == nullptr)) break;
      pFVar43 = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
      FUN_006b5f80((int *)g_ddxContext_008075A8,pFVar43->field_0024,pFVar43->field_0028,
                   pFVar43->field_002C,pFVar43->field_0030);
      /* ST_CALLSITE[005A74CB]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(pFVar43->field_0024,pFVar43->field_0028,pFVar43->field_0024 + -0x13,0x160,
                 pFVar43->field_002C,(byte *)pFVar43->field_0030,'\x01',this_00->field_1E92);
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,pFVar43->field_002C,
                   pFVar43->field_0030,0xff);
      ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                       pFVar43->field_002C,pFVar43->field_0030);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 1) {
        uVar36 = 2;
      }
      else {
        uVar36 = (-(uint)(wVar4 != 0) & 2) + 1;
      }
      iVar48 = -1;
      iVar47 = -1;
      pcVar38_mg20 = LoadResourceString(0x2565,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg20,iVar47,iVar48,uVar36);
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
      local_c = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
      switch(SVar5 - (MESS_SHARED_6980|MESS_SHARED_0005)) {
      case MESS_ID_NONE:
        local_8 = (uint *)0x2566;
        break;
      case 1:
      case MESS_SHARED_0008:
        local_8 = (uint *)0x2616;
        break;
      case 4:
        uVar36 = this_00->field_1EC2;
        if (uVar36 < 0x401) {
          if (uVar36 == 0x400) {
            local_8 = (uint *)0x235b;
          }
          else if (uVar36 == 0x100) {
            local_8 = (uint *)0x2341;
          }
          else {
            if (uVar36 != 0x200) goto LAB_005a7656;
            local_8 = (uint *)0x235a;
          }
        }
        else if (uVar36 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar36 == 0x502) {
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
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg1D;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg1D + 1;
            cVar2 = *pcVar38_mg1D;
            pcVar38_mg1D = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = (char *)&DAT_0080f33a;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
        }
        else {
          if (this_00->field_1ECA < PTR_0080c502->count) {
            pcVar39 = DArrayAt<char>(PTR_0080c502, this_00->field_1ECA);
          }
          else {
            pcVar39 = nullptr;
          }
          if (pcVar39 == nullptr) {
            pcVar39 = &CHAR_00h_008016a0;
          }
          uVar36 = 0xffffffff;
          do {
            pcVar24 = pcVar39;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar24 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar24;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar24 + -uVar36;
          pcVar24 = (char *)&DAT_0080f33a;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
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
      pFVar43 = local_c;
      FUN_006b5f80((int *)g_ddxContext_008075A8,local_c->field_0024,local_c->field_0028,
                   local_c->field_002C,local_c->field_0030);
      /* ST_CALLSITE[005A77AA]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(pFVar43->field_0024,pFVar43->field_0028,pFVar43->field_0024 - (int)local_10,
                 pFVar43->field_0028 - (int)local_1c,pFVar43->field_002C,(byte *)pFVar43->field_0030
                 ,'\x01',local_14);
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,pFVar43->field_002C,
                   pFVar43->field_0030,0xff);
      ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                       pFVar43->field_002C,pFVar43->field_0030);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 1) {
        local_c = (FSGSTy_field_1EAAElement *)0x2;
      }
      else {
        local_c = (FSGSTy_field_1EAAElement *)((-(uint)(wVar4 != 0) & 2) + 1);
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
        bVar35 = 0xd;
      }
      else {
        bVar35 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                   (undefined4 *)pFVar43->field_002C,pFVar43->field_0030,4,bVar35);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar35 = 0xd;
      }
      else {
        bVar35 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,2,2,
                   (undefined4 *)(pFVar43->field_002C + -4),pFVar43->field_0030 + -4,4,bVar35);
LAB_005a754e:
      DVar25 = pFVar43->field_0030;
      DVar49 = pFVar43->field_002C;
      pBVar29 = (BITMAPINFO *)this_00->field_1E8E;
      iVar47 = pFVar43->field_0028;
LAB_005a89f6:
      Library::DKW::DDX::FUN_006b4680
                ((int *)g_dDXContext_0080759C,pFVar43->field_0024,iVar47,pBVar29,nullptr,0,0,
                 DVar49,DVar25,0x10000ff);
      break;
    case 0x6987:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E9A != nullptr)) {
        dVar12 = (message->arg2).u32;
        FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)(dVar12 + 0x24),*(int *)(dVar12 + 0x28),
                     *(int *)(dVar12 + 0x2c),*(int *)(dVar12 + 0x30));
        /* ST_CALLSITE[005A7928]: CALL 0x00402298; direct=00402298 PutDDXClip */
        PutDDXClip(*(int *)(dVar12 + 0x24),*(int *)(dVar12 + 0x28),*(int *)(dVar12 + 0x24) + -0x1e9,
                   *(int *)(dVar12 + 0x28) + -0x5e,*(uint *)(dVar12 + 0x2c),
                   *(byte **)(dVar12 + 0x30),'\x01',this_00->field_1E9A);
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar12 + 0x2c),*(int *)(dVar12 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,*(char **)(message->arg0).ptr,3,-1,5);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar47 = uVar3 + 3;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,iVar47,4,iVar47,0x11,9,
                       0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::DKW::DDX::FUN_006b4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar12 + 0x24),*(int *)(dVar12 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,*(DWORD *)(dVar12 + 0x2c),
                   *(DWORD *)(dVar12 + 0x30),0x10000ff);
      }
      break;
    case MESS_SHARED_6980|MESS_SHARED_0008:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != nullptr)) {
        dVar12 = (message->arg2).u32;
        FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)(dVar12 + 0x24),*(int *)(dVar12 + 0x28),
                     *(int *)(dVar12 + 0x2c),*(int *)(dVar12 + 0x30));
        /* ST_CALLSITE[005A7A5D]: CALL 0x00402298; direct=00402298 PutDDXClip */
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        PutDDXClip(*(int *)(dVar12 + 0x24),*(int *)(dVar12 + 0x28),
                   *(int *)(dVar12 + 0x24) -
                   ((-(uint)(this_00->array_00BC[0xc].field_01DF != '\t') & 0x177) + 0x22),
                   *(int *)(dVar12 + 0x28) + -0x5e,*(uint *)(dVar12 + 0x2c),
                   *(byte **)(dVar12 + 0x30),'\x01',this_00->field_1E92);
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar12 + 0x2c),*(int *)(dVar12 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,*(char **)(message->arg0).ptr,3,-1,5);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar47 = uVar3 + 3;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,iVar47,3,iVar47,0x11,9,
                       0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::DKW::DDX::FUN_006b4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar12 + 0x24),*(int *)(dVar12 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,*(DWORD *)(dVar12 + 0x2c),
                   *(DWORD *)(dVar12 + 0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar17 = (message->arg1).ptr;
      iVar47 = *piVar17;
      iVar48 = iVar47 + -0xb4;
      local_3c = piVar17[1] - 0xaa;
      local_38 = (undefined4 *)piVar17[2];
      local_34 = piVar17[3];
      local_40 = iVar48;
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar48,local_3c,
                   (int)local_38,local_34,0xff);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar35 = 0xd;
      }
      else {
        bVar35 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar48,local_3c,local_38,
                   local_34,4,bVar35);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar35 = 0xd;
      }
      else {
        bVar35 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar47 + -0xb2,
                   local_3c + 2,local_38 + -1,local_34 + -4,4,bVar35);
      uVar36 = this_00->field_1EC2;
      if (uVar36 < 0x502) {
        if (uVar36 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar36 == 0x200) {
          local_8 = (uint *)0x235a;
        }
        else {
          if (uVar36 != 0x400) goto LAB_005a7c26;
          local_8 = (uint *)0x235b;
        }
      }
      else if (uVar36 == 0x502) {
        local_8 = (uint *)0x235d;
      }
      else {
LAB_005a7c26:
        local_8 = (uint *)0x2341;
      }
      ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,iVar48,
                       local_3c,(int)local_38,local_34);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 1) {
        uVar36 = 2;
      }
      else {
        uVar36 = (-(uint)(wVar4 != 0) & 2) + 1;
      }
      iVar48 = -1;
      iVar47 = -1;
      pcVar38_mg1A = LoadResourceString((UINT)local_8,g_hINSTANCE_00807618);
      ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,pcVar38_mg1A,iVar47,iVar48,uVar36);
LAB_005a7c92:
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      break;
    case 0x698c:
      ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(message->arg1).i32,0,0,0,0,0);
      pFVar9 = this_00->field_1FB3;
      uVar36 = (uint)(message->arg0).words.low;
      if (uVar36 < pFVar9->count) {
        element_1fb3 = DArrayAt<FSGSTy_field_1FB3Element>(pFVar9, uVar36);
      }
      else {
        element_1fb3 = nullptr;
      }
      ccFntTy::WrStr(this_00->array_00BC[0xc].field_01F3,(char *)element_1fb3,-1,-1,
                     3 - ((message->arg0).words.high != 1));
      if ((message->arg0).words.high == 1) {
        pRVar18 = (message->arg1).ptr;
        FUN_006b5ee0(pRVar18,0,0,0,pRVar18->field_0004,pRVar18->field_0008,0xf,0xd);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar5 == MESS_FSGSTY_6949) {
    /* ST_CALLSITE[005A6268]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    this_00->array_00BC[0xc].field_01E1 = 9;
    pSVar8 = this_00->array_00BC[0xc].field_01DB;
    if (pSVar8->field_02E6 == nullptr) goto cf_common_exit_005A8CA7;
    puVar22 = local_2ac;
    for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
      *puVar22 = 0xffffffff;
      puVar22 = puVar22 + 1;
    }
    *(undefined2 *)puVar22 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    /* ST_CALLSITE[005A62D2]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
    MMsgTy::StatePanel(pSVar8->field_02E6,(int)local_2ac);
    puVar22 = &local_d0;
cf_common_exit_005A7F3B:
    MMsgTy::thunk_FUN_005b8f40((this_00->array_00BC[0xc].field_01DB)->field_02E6,puVar22);
    goto cf_common_exit_005A8CA7;
  }
  if (MESS_ID_MSGOK < SVar5) {
    if (SVar5 < 0x6907) {
      if (SVar5 == MESS_FSGSTY_6906) {
        if (g_cursorClass_00802A30->field_0493 == CASE_5) goto cf_common_exit_005A8CA7;
        local_c = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
        this_00->field_1F43 = 0x6506;
        uVar23 = *(undefined4 *)&local_c->field_0x8;
        this_00->field_1F63 = 0x698c;
        this_00->field_1F4B = uVar23;
        this_00->field_1FB3->count = 0;
        this_00->field_20BB = 1;
        pcVar38_mg21 = LoadResourceString(0x25b4,g_hINSTANCE_00807618);
        uVar36 = 0xffffffff;
        do {
          pcVar39 = pcVar38_mg21;
          if (uVar36 == 0) break;
          uVar36 = uVar36 - 1;
          pcVar39 = pcVar38_mg21 + 1;
          cVar2 = *pcVar38_mg21;
          pcVar38_mg21 = pcVar39;
        } while (cVar2 != '\0');
        uVar36 = ~uVar36;
        pcVar39 = pcVar39 + -uVar36;
        pcVar24 = &this_00->field_0x1fb7;
        memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
        this_00->field_20BB = 2;
        pcVar38_mg23 = LoadResourceString(0x25b5,g_hINSTANCE_00807618);
        uVar36 = 0xffffffff;
        do {
          pcVar39 = pcVar38_mg23;
          if (uVar36 == 0) break;
          uVar36 = uVar36 - 1;
          pcVar39 = pcVar38_mg23 + 1;
          cVar2 = *pcVar38_mg23;
          pcVar38_mg23 = pcVar39;
        } while (cVar2 != '\0');
        uVar36 = ~uVar36;
        pcVar39 = pcVar39 + -uVar36;
        pcVar24 = &this_00->field_0x1fb7;
        memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
        pFVar9 = this_00->field_1FB3;
        this_00->field_1F7B = pFVar9->count;
        uVar36 = 0;
        this_00->field_1F73 = 0;
        if (pFVar9->count != 0) {
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (DAT_00803140 == *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36))
            {
              this_00->field_1F73 = uVar36;
              break;
            }
            uVar36 = uVar36 + 1;
          } while (uVar36 < pFVar9->count);
        }
      }
      else {
        if (SVar5 < MESS_FSGSTY_6903) {
          if (SVar5 == MESS_MAINMENUTY_6902) {
            pDVar31 = this_00->field_1AE8;
            dVar12 = pDVar31->elementSize;
            goto joined_r0x005a8b8f;
          }
          if (MESS_SHARED_6900 < SVar5) {
            if ((SVar5 == MESS_FSGSTY_6901) && (this_00->array_00BC[0xc].field_01E0 == '\0')) {
              this_00->field_002D = 0x26;
              puVar1 = &this_00->field_0x1d;
              FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)puVar1);
              pFVar11 = this_00->field_1EA6;
              if ((uint)*(ushort *)&this_00->field_0x31 < pFVar11->count) {
                element_1ea6_4 = DArrayAt<FSGSTy_field_1EA6Element>(pFVar11, (uint)*(ushort *)&this_00->field_0x31);
              }
              else {
                element_1ea6_4 = nullptr;
              }
              if (element_1ea6_4 != nullptr) {
                this_00->field_002D = 0x32;
                FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                iVar47 = *(int *)&this_00->field_0x31;
                if (iVar47 != 0) {
                  if (*(int *)(iVar47 + 8) < 1) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = **(undefined4 **)(iVar47 + 0x14);
                  }
                  pcVar38_mg26 = LoadResourceString(0x2568,g_hINSTANCE_00807618);
                  /* ST_CALLSITE[005A572C]: CALL dword ptr [0x0085bde8] */
                  wsprintfA((LPSTR)&DAT_0080f33a,"%s %s %s",pcVar38_mg26,element_1ea6_4,uVar23);
                  /* ST_CALLSITE[005A573F]: CALL dword ptr [0x0085c064] */
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
          uVar36 = (message->arg0).u32;
          if (pFVar9->count <= uVar36) goto cf_common_exit_005A8CA7;
          if (this_00->array_00BC[0xc].field_01DF == '\t') {
            if ((message->arg1).u32 == this_00->field_1EB6) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              DAT_00803140 = *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36);
              /* ST_CALLSITE[005A541B]: CALL dword ptr [0x0085c024] */
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar38 = g_cursorClass_00802A30;
joined_r0x005a55e5:
              g_cursorClass_00802A30 = pCVar38;
              if (pCVar38 == nullptr) goto cf_common_exit_005A5634;
              pCVar38->field_0493 = CASE_5;
              pCVar38->field_0494 = 0xffff;
              /* ST_CALLSITE[005A5609]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
              iVar47 = pCVar38->field_00C9;
              iVar48 = pCVar38->field_00C5;
            }
            else {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              DAT_00803144 = *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36);
              /* ST_CALLSITE[005A545C]: CALL dword ptr [0x0085c024] */
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar38 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 == nullptr) goto cf_common_exit_005A5634;
              iVar47 = g_cursorClass_00802A30->field_00C9;
              iVar48 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar38->field_0494 = 0xffff;
              /* ST_CALLSITE[005A5492]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
              iVar47 = pCVar38->field_00C9;
              iVar48 = pCVar38->field_00C5;
            }
LAB_005a561c:
            /* ST_CALLSITE[005A561E]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
            CursorClassTy::DrawSprite(pCVar38,iVar48,iVar47);
            pCVar38->field_00D2 = 0;
            pCVar38->field_04DF = -1;
          }
          else {
            if ((message->arg1).u32 != this_00->field_1EB6) {
              iVar47 = pFVar9->elementSize * uVar36;
              pFVar10 = pFVar9->data;
              this_00->field_1EC6 = *(undefined4 *)(&pFVar10->field_0x104 + iVar47);
              this_00->field_1ECA = *(uint *)(&pFVar10->field_0x108 + iVar47);
              /* ST_CALLSITE[005A55CB]: CALL dword ptr [0x0085c01c] */
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
              /* ST_CALLSITE[005A55D1]: CALL dword ptr [0x0085bedc] */
              DVar25 = timeGetTime();
              this_00->array_00BC[0xc].field_01E3 = DVar25;
              pCVar38 = g_cursorClass_00802A30;
              goto joined_r0x005a55e5;
            }
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            this_00->field_1EC2 =
                 *(uint *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36);
            if (this_00->array_00BC[0xc].field_01DF == '\b') {
              uVar36 = this_00->field_1EC2;
              memset(local_24c, 0, 0x20); /* compiler bulk-zero initialization */
              this_00->field_1EC6 = 0xffffffff;
              local_238 = (uint)(uVar36 == 0x100);
              this_00->field_1ECA = 0;
              local_23c = 0x20;
              if (this_00->field_1EBA != 0) {
                FUN_006e6080(this_00,2,this_00->field_1EBA,local_24c);
              }
              /* ST_CALLSITE[005A5547]: CALL dword ptr [0x0085c01c] */
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
              /* ST_CALLSITE[005A554D]: CALL dword ptr [0x0085bedc] */
              DVar25 = timeGetTime();
              this_00->array_00BC[0xc].field_01E3 = DVar25;
              pCVar38 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 != nullptr) {
                iVar47 = g_cursorClass_00802A30->field_00C9;
                iVar48 = g_cursorClass_00802A30->field_00C5;
                g_cursorClass_00802A30->field_0493 = CASE_5;
                pCVar38->field_0494 = 0xffff;
                /* ST_CALLSITE[005A5589]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
                CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
                iVar47 = pCVar38->field_00C9;
                iVar48 = pCVar38->field_00C5;
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
            iVar47 = g_cursorClass_00802A30->field_00C9;
            iVar48 = g_cursorClass_00802A30->field_00C5;
            g_cursorClass_00802A30->field_0493 = CASE_5;
            pCVar38->field_0494 = 0xffff;
            /* ST_CALLSITE[005A5BBF]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
            CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
            /* ST_CALLSITE[005A5BD4]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
            CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
            pCVar38->field_00D2 = 0;
            pCVar38->field_04DF = -1;
          }
          if (this_00->array_00BC[0xc].field_01DF == '\x06') {
            /* ST_CALLSITE[005A5BF8]: CALL dword ptr [0x0085c00c] */
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_00->array_00BC[0xc].field_01E0 = 1;
          }
          if (this_00->array_00BC[0xc].field_01DF == '\b') {
            /* ST_CALLSITE[005A5C1F]: CALL dword ptr [0x0085c01c] */
            CFsgsConnection::RequestGameList
                      ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
            /* ST_CALLSITE[005A5C25]: CALL dword ptr [0x0085bedc] */
            DVar25 = timeGetTime();
            this_00->array_00BC[0xc].field_01E3 = DVar25;
          }
          goto cf_common_exit_005A8CA7;
        }
        if (SVar5 == MESS_FSGSTY_6904) {
          local_c = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
          this_00->field_1F43 = 0x6506;
          uVar23 = *(undefined4 *)&local_c->field_0x8;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = uVar23;
          this_00->field_1FB3->count = 0;
          if (this_00->array_00BC[0xc].field_01DF == '\b') {
            this_00->field_20BB = 0;
            pcVar38_mg27 = LoadResourceString(0x235c,g_hINSTANCE_00807618);
            uVar36 = 0xffffffff;
            do {
              pcVar39 = pcVar38_mg27;
              if (uVar36 == 0) break;
              uVar36 = uVar36 - 1;
              pcVar39 = pcVar38_mg27 + 1;
              cVar2 = *pcVar38_mg27;
              pcVar38_mg27 = pcVar39;
            } while (cVar2 != '\0');
            uVar36 = ~uVar36;
            pcVar39 = pcVar39 + -uVar36;
            pcVar24 = &this_00->field_0x1fb7;
            memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
            uVar32 = 0;
            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          }
          this_00->field_20BB = 0x100;
          pcVar38_mg29 = LoadResourceString(0x2341,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg29;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg29 + 1;
            cVar2 = *pcVar38_mg29;
            pcVar38_mg29 = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = &this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x501;
          pcVar38_mg2B = LoadResourceString(0x2342,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg2B;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg2B + 1;
            cVar2 = *pcVar38_mg2B;
            pcVar38_mg2B = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = &this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x200;
          pcVar38_mg2D = LoadResourceString(0x235a,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg2D;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg2D + 1;
            cVar2 = *pcVar38_mg2D;
            pcVar38_mg2D = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = &this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x400;
          pcVar38_mg2F = LoadResourceString(0x235b,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg2F;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg2F + 1;
            cVar2 = *pcVar38_mg2F;
            pcVar38_mg2F = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = &this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x502;
          pcVar38_mg31 = LoadResourceString(0x235d,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg31;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg31 + 1;
            cVar2 = *pcVar38_mg31;
            pcVar38_mg31 = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = &this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          pFVar9 = this_00->field_1FB3;
          this_00->field_1F7B = pFVar9->count;
          uVar36 = 0;
          this_00->field_1F73 = 0;
          if (pFVar9->count != 0) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              if (this_00->field_1EC2 ==
                  *(uint *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36)) {
                this_00->field_1F73 = uVar36;
                break;
              }
              uVar36 = uVar36 + 1;
            } while (uVar36 < pFVar9->count);
          }
        }
        else {
          if (SVar5 != MESS_FSGSTY_6905) goto cf_common_exit_005A8CA7;
          local_c = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
          this_00->field_1F43 = 0x6506;
          uVar23 = *(undefined4 *)&local_c->field_0x8;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = uVar23;
          this_00->field_1FB3->count = 0;
          this_00->field_20BB = 0xffffffff;
          pcVar38_mg33 = LoadResourceString(0x235c,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg33;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg33 + 1;
            cVar2 = *pcVar38_mg33;
            pcVar38_mg33 = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = &this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          this_00->field_20BF = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          local_8 = nullptr;
          if (PTR_0080c502->count != 0) {
            pDVar25 = PTR_0080c502;
            if (PTR_0080c502->count == 0) {
              pcVar39 = nullptr;
              goto LAB_005a5859;
            }
            do {
              pcVar39 = DArrayAt<char>(pDVar25, (int)local_8);
LAB_005a5859:
              if (pcVar39 != nullptr) {
                this_00->field_20BB = *(undefined4 *)(pcVar39 + 0x90);
                uVar36 = 0xffffffff;
                do {
                  pcVar24 = pcVar39;
                  if (uVar36 == 0) break;
                  uVar36 = uVar36 - 1;
                  pcVar24 = pcVar39 + 1;
                  cVar2 = *pcVar39;
                  pcVar39 = pcVar24;
                } while (cVar2 != '\0');
                uVar36 = ~uVar36;
                pcVar39 = pcVar24 + -uVar36;
                pcVar24 = &this_00->field_0x1fb7;
                memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
                uVar32 = 0;
                this_00->field_20BF = local_8;
                Library::DKW::TBL::DArrayAppend
                          ((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
                pDVar25 = PTR_0080c502;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < (undefined1 *)pDVar25->count);
          }
          pFVar9 = this_00->field_1FB3;
          uVar36 = 0;
          dVar12 = pFVar9->count;
          this_00->field_1F73 = 0;
          this_00->field_1F7B = dVar12;
          if (pFVar9->count != 0) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              if (this_00->field_1EC6 ==
                  *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36)) {
                this_00->field_1F73 = uVar36;
                break;
              }
              uVar36 = uVar36 + 1;
            } while (uVar36 < pFVar9->count);
          }
        }
      }
      pcVar13 = this_00->array_00BC[0xc].field_01F3;
      this_00->field_1F97 = local_c->field_0024;
      this_00->field_1F9F = local_c->field_002C + 10;
      this_00->field_1F9B = local_c->field_0030 + local_c->field_0028;
      iVar47 = pcVar13->field_00A0;
joined_r0x005a5b89:
      if (iVar47 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar13);
      }
      this_00->field_1F77 = *(undefined4 *)&pcVar13->field_0x8a;
      /* ST_CALLSITE[005A5FBA]: CALL dword ptr [EAX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                 &this_00->field_0x1f33,0);
      goto cf_common_exit_005A8CA7;
    }
    switch(SVar5) {
    case 0x6907:
      if (g_cursorClass_00802A30->field_0493 == CASE_5) break;
      local_c = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
      this_00->field_1F43 = 0x6506;
      uVar23 = *(undefined4 *)&local_c->field_0x8;
      this_00->field_1F63 = 0x698c;
      this_00->field_1F4B = uVar23;
      this_00->field_1FB3->count = 0;
      this_00->field_20BB = 0;
      pcVar38_mg3B = LoadResourceString(0x25bf,g_hINSTANCE_00807618);
      uVar36 = 0xffffffff;
      do {
        pcVar39 = pcVar38_mg3B;
        if (uVar36 == 0) break;
        uVar36 = uVar36 - 1;
        pcVar39 = pcVar38_mg3B + 1;
        cVar2 = *pcVar38_mg3B;
        pcVar38_mg3B = pcVar39;
      } while (cVar2 != '\0');
      uVar36 = ~uVar36;
      pcVar39 = pcVar39 + -uVar36;
      pcVar24 = &this_00->field_0x1fb7;
      memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      this_00->field_20BB = 1;
      pcVar38_mg3D = LoadResourceString(0x25c0,g_hINSTANCE_00807618);
      uVar36 = 0xffffffff;
      do {
        pcVar39 = pcVar38_mg3D;
        if (uVar36 == 0) break;
        uVar36 = uVar36 - 1;
        pcVar39 = pcVar38_mg3D + 1;
        cVar2 = *pcVar38_mg3D;
        pcVar38_mg3D = pcVar39;
      } while (cVar2 != '\0');
      uVar36 = ~uVar36;
      pcVar39 = pcVar39 + -uVar36;
      pcVar24 = &this_00->field_0x1fb7;
      memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      this_00->field_20BB = 2;
      pcVar38_mg3F = LoadResourceString(0x25c1,g_hINSTANCE_00807618);
      uVar36 = 0xffffffff;
      do {
        pcVar39 = pcVar38_mg3F;
        if (uVar36 == 0) break;
        uVar36 = uVar36 - 1;
        pcVar39 = pcVar38_mg3F + 1;
        cVar2 = *pcVar38_mg3F;
        pcVar38_mg3F = pcVar39;
      } while (cVar2 != '\0');
      uVar36 = ~uVar36;
      pcVar39 = pcVar39 + -uVar36;
      pcVar24 = &this_00->field_0x1fb7;
      memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      pFVar9 = this_00->field_1FB3;
      this_00->field_1F7B = pFVar9->count;
      uVar36 = 0;
      this_00->field_1F73 = 0;
      if (pFVar9->count != 0) {
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          if (DAT_00803144 == *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36)) {
            this_00->field_1F73 = uVar36;
            break;
          }
          uVar36 = uVar36 + 1;
        } while (uVar36 < pFVar9->count);
      }
      pcVar13 = this_00->array_00BC[0xc].field_01F3;
      this_00->field_1F97 = local_c->field_0024;
      this_00->field_1F9F = local_c->field_002C + 10;
      this_00->field_1F9B = local_c->field_0030 + local_c->field_0028;
      iVar47 = pcVar13->field_00A0;
      goto joined_r0x005a5b89;
    case MESS_SHARED_6900|MESS_SHARED_0008:
      if (g_cursorClass_00802A30->field_0493 == CASE_5) break;
      bVar45 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar45 = true;
      }
      if ((!bVar45) ||
         /* ST_CALLSITE[005A600D]: CALL dword ptr [0x0085c024] */
         (CFsgsConnection::RequestLadderList
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pCVar38 = g_cursorClass_00802A30, g_cursorClass_00802A30 == nullptr)) break;
      iVar47 = g_cursorClass_00802A30->field_00C9;
      iVar48 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A6042]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
      iVar47 = pCVar38->field_00C9;
      iVar48 = pCVar38->field_00C5;
      goto cf_common_exit_005A52AA;
    case MESS_SHARED_6900|MESS_CURSORCLASSTY_0009:
      if ((g_cursorClass_00802A30->field_0493 == CASE_5) || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      /* ST_CALLSITE[005A609F]: CALL dword ptr [0x0085c024] */
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar38 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 == nullptr) break;
      iVar47 = g_cursorClass_00802A30->field_00C9;
      iVar48 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A60D4]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
      iVar47 = pCVar38->field_00C9;
      iVar48 = pCVar38->field_00C5;
cf_common_exit_005A52AA:
      /* ST_CALLSITE[005A52AC]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(pCVar38,iVar48,iVar47);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
      break;
    case MESS_SHARED_6900|MESS_SYSTEMCLASSTY_000A:
      if ((g_cursorClass_00802A30->field_0493 == CASE_5) ||
         (pDVar31 = this_00->field_1AE8, pDVar31 == nullptr)) break;
      if (0 < (int)pDVar31->elementSize) {
        pcVar39 = *(char **)pDVar31->growCapacity;
      }
      iVar47 = -1;
      do {
        if (iVar47 == 0) break;
        iVar47 = iVar47 + -1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      if (iVar47 == -2) break;
      if ((int)pDVar31->elementSize < 1) {
        pcVar39 = nullptr;
      }
      else {
        pcVar39 = *(char **)pDVar31->growCapacity;
      }
      /* ST_CALLSITE[005A6145]: CALL dword ptr [0x0085c000] */
      CFsgsConnection::RequestLadderListByName
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,pcVar39,0xf);
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
      bVar35 = (char)message->id - 0x13;
      local_c = (FSGSTy_field_1EAAElement *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar35));
      if ((this_00->field_1EE3 <= (uint)bVar35) || (this_00->field_1EDB == nullptr)) break;
      iVar48 = (uint)bVar35 * 0x24;
      iVar47 = -1;
      pcVar39 = (char *)(iVar48 + 0x14 + (int)this_00->field_1EDB);
      do {
        if (iVar47 == 0) break;
        iVar47 = iVar47 + -1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      if (iVar47 == -2) break;
      if (this_00->field_1B0C != nullptr) {
        FreeAndNull(&this_00->field_1B0C);
      }
      uVar36 = 0xffffffff;
      pcVar39 = (char *)(iVar48 + 0x14 + (int)this_00->field_1EDB);
      do {
        if (uVar36 == 0) break;
        uVar36 = uVar36 - 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      pbVar41 = Library::DKW::LIB::MemAlloc(~uVar36);
      this_00->field_1B0C = pbVar41;
      uVar36 = 0xffffffff;
      pcVar39 = (char *)(iVar48 + 0x14 + (int)this_00->field_1EDB);
      do {
        pcVar24 = pcVar39;
        if (uVar36 == 0) break;
        uVar36 = uVar36 - 1;
        pcVar24 = pcVar39 + 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar24;
      } while (cVar2 != '\0');
      uVar36 = ~uVar36;
      pbVar37 = (byte *)(pcVar24 + -uVar36);
      memmove(pbVar41, pbVar37, uVar36); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      /* ST_CALLSITE[005A61F9]: CALL dword ptr [EDX + 0x8] */
      this_00->CloseButtons();
      this_00->array_00BC[0xc].field_01E1 = 10;
      this_00->field_1ED2 = 9;
      pSVar8 = this_00->array_00BC[0xc].field_01DB;
      if (pSVar8->field_02E6 == nullptr) break;
      puVar22 = local_338;
      for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
        *puVar22 = 0xffffffff;
        puVar22 = puVar22 + 1;
      }
      *(undefined2 *)puVar22 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      /* ST_CALLSITE[005A6257]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
      MMsgTy::StatePanel(pSVar8->field_02E6,(int)local_338);
      puVar22 = &local_70;
      goto cf_common_exit_005A7F3B;
    case MESS_PRIVIDERTY_693F:
      /* ST_CALLSITE[005A5D96]: CALL 0x00401ee2; direct=00401EE2 FSGSTy::sub_0059B820 */
      sub_0059B820(this_00);
      break;
    case MESS_SHARED_6940:
      /* ST_CALLSITE[005A5D8A]: CALL 0x004024d7; direct=004024D7 FSGSTy::sub_0059BE50 */
      sub_0059BE50(this_00);
      break;
    case MESS_FSGSTY_6941:
      thunk_FUN_005b6350(this_00,0x6105,0,1);
      this_00->array_00BC[0xc].field_01E1 = 0;
      /* ST_CALLSITE[005A5DBB]: CALL dword ptr [0x0085bffc] */
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      /* ST_CALLSITE[005A5DC5]: CALL dword ptr [EDX + 0x8] */
      this_00->CloseButtons();
      pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
      if (pMVar33 != nullptr) {
        /* ST_CALLSITE[005A5DE1]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
        MMsgTy::HidePanel(pMVar33,1,0,1);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar5 == MESS_ID_MSGOK) {
    cVar2 = this_00->array_00BC[0xc].field_01DF;
    if (cVar2 == '\x03') {
      /* ST_CALLSITE[005A52F4]: CALL dword ptr [EAX + 0x8] */
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
          uVar23 = 0;
        }
        else {
          uVar23 = *(undefined4 *)this_00->field_1AE8->growCapacity;
        }
        Library::DKW::DDX::FUN_006b69b0((int *)&g_int_00811764,(int *)&DAT_007cd6f0,0,uVar23,0x20);
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
        pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar33 != nullptr) {
          /* ST_CALLSITE[005A52E6]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
          MMsgTy::SetMessage(pMVar33,0x2594,'\0',nullptr,nullptr,
                             nullptr,0,0);
        }
        goto cf_common_exit_005A8CA7;
      }
      FUN_006b6160(local_6b8,(int)(g_int_00811764 + 6));
      local_698 = 0;
      if ((int)this_00->field_1AEC->elementSize < 1) {
        pcVar39 = nullptr;
      }
      else {
        pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
      }
      if ((int)this_00->field_1AE8->elementSize < 1) {
        pcVar24 = nullptr;
      }
      else {
        pcVar24 = *(char **)this_00->field_1AE8->growCapacity;
      }
      /* ST_CALLSITE[005A5262]: CALL dword ptr [0x0085c03c] */
      CFsgsConnection::CreateGame
                ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,0x17e0,pcVar24,pcVar39,
                 local_6b8);
      pCVar38 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 == nullptr) goto cf_common_exit_005A8CA7;
      iVar47 = g_cursorClass_00802A30->field_00C9;
      iVar48 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A5297]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
      iVar47 = pCVar38->field_00C9;
      iVar48 = pCVar38->field_00C5;
      goto cf_common_exit_005A52AA;
    }
    if ((cVar2 != '\b') ||
       (((g_cursorClass_00802A30 != nullptr &&
         (g_cursorClass_00802A30->field_0493 == CASE_5)) ||
        (this_00->field_1EBE == nullptr)))) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A4E07]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
      /* ST_CALLSITE[005A4E1C]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
    }
    this_00->field_002D = 0x26;
    FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
    pCVar38 = g_cursorClass_00802A30;
    pFVar7 = this_00->field_1EBE;
    if (pFVar7->count <= *(uint *)&this_00->field_0x31) goto cf_common_exit_005A8CA7;
    local_15 = '\x01';
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    local_8 = (uint *)((int)&pFVar7->data->field_0000 +
                      pFVar7->elementSize * *(uint *)&this_00->field_0x31);
    if (local_8 == nullptr) goto cf_common_exit_005A8CA7;
    pbVar41 = (byte *)(local_8 + 0x13);
    iVar47 = -1;
    pcVar39 = (char *)pbVar41;
    do {
      if (iVar47 == 0) break;
      iVar47 = iVar47 + -1;
      cVar2 = *pcVar39;
      pcVar39 = pcVar39 + 1;
    } while (cVar2 != '\0');
    if (iVar47 != -2) {
      if ((int)this_00->field_1AEC->elementSize < 1) {
        pbVar37 = nullptr;
      }
      else {
        pbVar37 = *(byte **)this_00->field_1AEC->growCapacity;
      }
      do {
        bVar35 = *pbVar41;
        bVar45 = bVar35 < *pbVar37;
        if (bVar35 != *pbVar37) {
LAB_005a4eca:
          iVar47 = (1 - (uint)bVar45) - (uint)(bVar45 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar35 == 0) break;
        bVar35 = pbVar41[1];
        bVar45 = bVar35 < pbVar37[1];
        if (bVar35 != pbVar37[1]) goto LAB_005a4eca;
        pbVar41 = pbVar41 + 2;
        pbVar37 = pbVar37 + 2;
      } while (bVar35 != 0);
      iVar47 = 0;
LAB_005a4ecf:
      if (iVar47 != 0) {
        local_15 = '\0';
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar38->field_0494 = 0xffff;
        /* ST_CALLSITE[005A4EFF]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
        /* ST_CALLSITE[005A4F14]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
        pCVar38->field_00D2 = 0;
        pCVar38->field_04DF = -1;
        pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar33 != nullptr) {
          /* ST_CALLSITE[005A4F4B]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
          MMsgTy::SetMessage(pMVar33,0x258b,'\0',nullptr,nullptr,
                             nullptr,0,0);
        }
      }
    }
    puVar34 = local_8;
    if (local_15 == '\0') goto cf_common_exit_005A8CA7;
    thunk_FUN_005daa60();
    FUN_006b61a0(local_22c,(byte *)(puVar34 + 0x17));
    local_3b4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_3b4;
    local_EAX_3145 = Library::MSVCRT::__setjmp3(local_3b4.jumpBuffer,0);
    puVar34 = local_8;
    if (local_EAX_3145 == 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      Library::DKW::DDX::FUN_006b6a50
                ((int *)&g_int_00811764,(undefined4 *)&DAT_007cd6f0,
                 (in_addr)(((in_addr *)(local_8 + 4))->S_un).S_un_b,local_22c);
    }
    pCVar38 = g_cursorClass_00802A30;
    g_currentExceptionFrame = local_3b4.previous;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar47 = g_cursorClass_00802A30->field_00C9;
      iVar48 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A5008]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(pCVar38,CASE_0,iVar48,iVar47);
      /* ST_CALLSITE[005A501D]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
    }
    this_00 = local_20;
    if (g_int_00811764 == nullptr) {
      pMVar33 = (local_20->array_00BC[0xc].field_01DB)->field_02E6;
      if (pMVar33 != nullptr) {
        /* ST_CALLSITE[005A5131]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
        MMsgTy::SetMessage(pMVar33,0x2595,'\0',nullptr,nullptr,nullptr
                           ,0,0);
      }
      goto cf_common_exit_005A8CA7;
    }
    /* ST_CALLSITE[005A5049]: CALL dword ptr [0x0085c014] */
    CFsgsConnection::JoinGame((CFsgsConnection *)&DAT_00802a90,puVar34[1]);
    this_00 = local_20;
    DAT_0080877f = g_int_00811764[0xe];
    DAT_0080877e = 0;
    DAT_008087be = 0;
    local_20->array_00BC[0xc].field_01E1 = 0;
    DAT_008067a0 = 1;
    uVar36 = local_20->field_1EC2;
    if (uVar36 < 0x502) {
      if (uVar36 == 0x501) {
        DAT_00803400 = 5;
      }
      else if (uVar36 == 0x200) {
        DAT_00803400 = 0x14;
      }
      else {
        if (uVar36 != 0x400) goto LAB_005a50be;
        DAT_00803400 = 0x15;
      }
    }
    else if (uVar36 == 0x502) {
      DAT_00803400 = 0xc;
    }
    else {
LAB_005a50be:
      DAT_00803400 = 4;
    }
    thunk_FUN_005b6350(local_20,0x6109,0,1);
    /* ST_CALLSITE[005A50E2]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar33 != nullptr) {
      /* ST_CALLSITE[005A50FF]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      MMsgTy::HidePanel(pMVar33,1,0,1);
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
            /* ST_CALLSITE[005A442A]: CALL 0x00404fc5; direct=00404FC5 FSGSTy::NoneFSGS */
            NoneFSGS(this_00);
            break;
          case MESS_ID_CREATE:
            /* ST_CALLSITE[005A4405]: CALL 0x0040454d; direct=0040454D FSGSTy::InitFSGS */
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            InitFSGS(this_00,*(byte *)((message->arg0).u32 + 0x14));
            break;
          case MESS_SHARED_0003:
            /* ST_CALLSITE[005A4411]: CALL 0x00401721; direct=00401721 FSGSTy::DoneFSGS */
            DoneFSGS(this_00);
            break;
          case MESS_SHARED_0005:
            /* ST_CALLSITE[005A441E]: CALL 0x00403b4d; direct=00403B4D FSGSTy::PaintFSGS */
            PaintFSGS(this_00,'\0');
          }
        }
      }
      else {
        switch(SVar5) {
        case MESS_SHARED_6109:
        case MESS_SHARED_611F:
          /* ST_CALLSITE[005A447F]: CALL 0x00405510; direct=00405510 StartSystemTy::InitChat */
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
            pCVar38->field_0494 = 0xffff;
            /* ST_CALLSITE[005A44D9]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
            CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
            /* ST_CALLSITE[005A44EE]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
            CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
            pCVar38->field_00D2 = 0;
            pCVar38->field_04DF = -1;
          }
          pSVar8 = this_00->array_00BC[0xc].field_01DB;
          pSVar40 = &local_19c;
          for (iVar47 = 8; iVar47 != 0; iVar47 = iVar47 + -1) {
            pSVar40->unknown_00 = 0;
            pSVar40 = (STMessage *)&pSVar40->unknown_04;
          }
          local_19c.unknown_08 = this_00->field_0008;
          local_19c.unknown_0c = 2;
          local_19c.id = MESS_FSGSTY_6941;
          pMVar33 = pSVar8->field_02E6;
          if (pMVar33 == nullptr) {
            /* ST_CALLSITE[005A4570]: CALL dword ptr [EAX] */
            this_00->GetMessage(&local_19c);
          }
          else {
            /* ST_CALLSITE[005A455B]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
            MMsgTy::SetMessage(pMVar33,0x2593,'\0',&local_19c.unknown_00,nullptr,
                               nullptr,(message->arg0).i32,0x2599);
          }
          break;
        case MESS_FSGSTY_6150:
          if (this_00->array_00BC[0xc].field_01DF == '\x01') {
            if (g_cursorClass_00802A30 != nullptr) {
              g_cursorClass_00802A30->field_0493 = CASE_1;
              pCVar38->field_0494 = 0xffff;
              /* ST_CALLSITE[005A45B0]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
              /* ST_CALLSITE[005A45C5]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
              CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
              pCVar38->field_00D2 = 0;
              pCVar38->field_04DF = -1;
            }
            iVar47 = (message->arg0).i32;
            pSVar40 = &local_160;
            for (iVar48 = 8; iVar48 != 0; iVar48 = iVar48 + -1) {
              pSVar40->unknown_00 = 0;
              pSVar40 = (STMessage *)&pSVar40->unknown_04;
            }
            local_160.unknown_08 = this_00->field_0008;
            local_160.unknown_0c = 2;
            local_160.id = MESS_FSGSTY_6941;
            switch(iVar47) {
            case 1:
              UVar21 = 0x2580;
              break;
            case 2:
              UVar21 = 0x2581;
              break;
            case 3:
              UVar21 = 0x2582;
              break;
            case 4:
              UVar21 = 0x2583;
              break;
            default:
              UVar21 = 0x2584;
            }
            if ((UVar21 == 0) ||
               (pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6,
               pMVar33 == nullptr)) {
              /* ST_CALLSITE[005A469A]: CALL dword ptr [EAX] */
              this_00->GetMessage(&local_160);
            }
            else if (UVar21 == 0x2584) {
              /* ST_CALLSITE[005A4669]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
              MMsgTy::SetMessage(pMVar33,0x2584,'\0',&local_160.unknown_00,nullptr,
                                 nullptr,iVar47,0x2599);
            }
            else {
              /* ST_CALLSITE[005A4685]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
              MMsgTy::SetMessage(pMVar33,UVar21,'\0',&local_160.unknown_00,nullptr,
                                 nullptr,0,0);
            }
          }
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (this_00->array_00BC[0xc].field_01DF != '\x01') goto cf_common_exit_005A8CA7;
    /* ST_CALLSITE[005A46B3]: CALL dword ptr [0x0085c06c] */
    CFsgsConnection::StartBanners((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      puVar6 = this_00->field_1AC0;
      uVar36 = *(uint *)(puVar6 + 10);
      if (uVar36 == 0) {
        uVar36 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar6 + 4);
      }
      puVar22 = (undefined4 *)FUN_006b4fa0((int *)puVar6);
      for (uVar32 = uVar36 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
        *puVar22 = 0xffffffff;
        puVar22 = puVar22 + 1;
      }
      for (uVar36 = uVar36 & 3; uVar36 != 0; uVar36 = uVar36 - 1) {
        *(undefined1 *)puVar22 = 0xff;
        puVar22 = (undefined4 *)((int)puVar22 + 1);
      }
      ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,0,0x16,0x1b8,
                       0xf0);
      iVar51 = -1;
      iVar50 = -1;
      uVar36 = 2;
      iVar48 = -1;
      iVar47 = -1;
      pcVar38_mg43 = LoadResourceString(0x25b6,g_hINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->array_00BC[0xc].field_01F3,pcVar38_mg43,iVar47,iVar48,uVar36,iVar50,
                     iVar51);
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      /* ST_CALLSITE[005A4785]: CALL dword ptr [0x0085c068] */
      CFsgsConnection::RequestDatafile((CFsgsConnection *)&DAT_00802a90,"st.inf");
      goto cf_common_exit_005A8CA7;
    }
    goto LAB_005a6d57;
  }
  if (MESS_WAITTY_6333 < SVar5) {
    if (SVar5 == MESS_SHARED_6334) {
      /* ST_CALLSITE[005A4D94]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
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
    /* ST_CALLSITE[005A4D27]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
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
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A47F0]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
      /* ST_CALLSITE[005A4805]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
    }
    pSVar8 = this_00->array_00BC[0xc].field_01DB;
    puVar22 = local_2c8;
    for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
      *puVar22 = 0x10001;
      puVar22 = puVar22 + 1;
    }
    *(undefined2 *)puVar22 = 1;
    pMVar33 = pSVar8->field_02E6;
    if (pMVar33 != nullptr) {
      /* ST_CALLSITE[005A4846]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
      MMsgTy::StatePanel(pMVar33,(int)local_2c8);
    }
    switch((message->arg0).i32) {
    case 2:
      UVar21 = 0x258b;
      break;
    case 3:
      UVar21 = 0x258c;
      break;
    case 4:
      UVar21 = 0x258d;
      break;
    default:
      UVar21 = 0x2589;
      break;
    case 7:
      UVar21 = 0x25c2;
    }
    if ((UVar21 == 0) ||
       (pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6, pMVar33 == nullptr))
    goto cf_common_exit_005A8CA7;
    if (UVar21 == 0x2589) {
      /* ST_CALLSITE[005A48B4]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
      MMsgTy::SetMessage(pMVar33,0x2589,'\0',nullptr,nullptr,nullptr,
                         (message->arg0).i32,0x2599);
      goto cf_common_exit_005A8CA7;
    }
    break;
  case MESS_FSGSTY_6150|MESS_SHARED_0003:
    cVar2 = this_00->array_00BC[0xc].field_01DF;
    if ((cVar2 == '\x02') || (cVar2 == '\x04')) {
      if (g_cursorClass_00802A30 != nullptr) {
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar38->field_0494 = 0xffff;
        /* ST_CALLSITE[005A48FB]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
        /* ST_CALLSITE[005A4910]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
        pCVar38->field_00D2 = 0;
        pCVar38->field_04DF = -1;
      }
      local_100 = "Profile\\Age";
      local_fc = "Profile\\Sex";
      local_f8 = "Profile\\Location";
      local_f4 = "Profile\\Description";
      if (this_00->array_00BC[0xc].field_01DF == '\x02') {
        /* ST_CALLSITE[005A496E]: CALL dword ptr [0x0085c020] */
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
        /* ST_CALLSITE[005A49CD]: CALL dword ptr [0x0085c028] */
        CFsgsConnection::UpdateInfo((CFsgsConnection *)&DAT_00802a90,4,&local_120,&local_130);
      }
      thunk_FUN_0055bf20(&DAT_00802a90,this_00->array_00BC[0xc].field_01E7);
      if ((DArrayTy *)this_00->field_1E9E != nullptr) {
        FUN_006b5570((DArrayTy *)this_00->field_1E9E);
      }
      local_EAX_1705 = Library::DKW::TBL::SArrayCreate(nullptr,100,100);
      this_00->field_1E9E = &local_EAX_1705->flags;
      /* ST_CALLSITE[005A4A08]: CALL dword ptr [EDX + 0x8] */
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
        pCVar38->field_0494 = 0xffff;
        /* ST_CALLSITE[005A4AA4]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
        /* ST_CALLSITE[005A4AB9]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
        pCVar38->field_00D2 = 0;
        pCVar38->field_04DF = -1;
      }
      uVar36 = (message->arg0).u32;
      if (uVar36 == 0) {
        this_00->field_002D = 0x6952;
        /* ST_CALLSITE[005A4B62]: CALL dword ptr [EAX] */
        this_00->GetMessage((STMessage *)&this_00->field_0x1d);
      }
      else if ((uVar36 != 0) && (uVar36 < 3)) {
        puVar22 = local_300;
        for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
          *puVar22 = 0x10001;
          puVar22 = puVar22 + 1;
        }
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        *(undefined2 *)puVar22 = 1;
        pMVar33 = pSVar8->field_02E6;
        if (pMVar33 != nullptr) {
          /* ST_CALLSITE[005A4B12]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
          MMsgTy::StatePanel(pMVar33,(int)local_300);
        }
        pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar33 != nullptr) {
          /* ST_CALLSITE[005A4B49]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
          MMsgTy::SetMessage(pMVar33,(-(uint)((message->arg0).u32 != 1) & 10) + 0x258e,'\0',
                             nullptr,nullptr,nullptr,0,0);
        }
      }
    }
    goto cf_common_exit_005A8CA7;
  case MESS_FSGSTY_6150|MESS_SHARED_0005:
    if (this_00->array_00BC[0xc].field_01DF != '\x04') goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A4BA2]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
      /* ST_CALLSITE[005A4BB7]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
    }
    if ((message->arg0).u32 == 0) goto LAB_005a67e1;
    if (6 < (message->arg0).u32) goto cf_common_exit_005A8CA7;
    puVar22 = local_354;
    for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
      *puVar22 = 0x10001;
      puVar22 = puVar22 + 1;
    }
    *(undefined2 *)puVar22 = 1;
    pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar33 != nullptr) {
      /* ST_CALLSITE[005A4C12]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
      MMsgTy::StatePanel(pMVar33,(int)local_354);
    }
    pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar33 == nullptr) goto cf_common_exit_005A8CA7;
    switch((message->arg0).u32) {
    case 2:
      UVar21 = 0x2597;
      break;
    case 3:
      UVar21 = 0x2596;
      break;
    case 4:
      UVar21 = 0x25c3;
      break;
    case 5:
      UVar21 = 0x25c4;
      break;
    case 6:
      UVar21 = 0x25c5;
      break;
    default:
      UVar21 = 0x258f;
    }
    break;
  case MESS_FSGSTY_6156:
    if (this_00->array_00BC[0xc].field_01DF != '\x06') goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A4CB5]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
      /* ST_CALLSITE[005A4CCA]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
    }
    UVar21 = 0;
    if ((message->arg0).u32 == 0xd) {
      UVar21 = 0x2590;
    }
    else if ((message->arg0).u32 == 0xf) {
      UVar21 = 0x2591;
    }
    if ((UVar21 == 0) ||
       (pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6, pMVar33 == nullptr))
    goto cf_common_exit_005A8CA7;
    break;
  default:
    goto cf_common_exit_005A8CA7;
  }
  /* ST_CALLSITE[005A4C72]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
  MMsgTy::SetMessage(pMVar33,UVar21,'\0',nullptr,nullptr,nullptr,0,0);
cf_common_exit_005A8CA7:
  g_currentExceptionFrame = local_21c.previous;
  /* ST_CALLSITE[005A8CB8]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  local_EAX_18792 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return local_EAX_18792;
}

