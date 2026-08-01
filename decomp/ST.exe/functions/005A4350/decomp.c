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
  FSGSTy_field_1A5FState FVar3;
  ushort uVar4;
  word wVar5;
  STMessageId SVar6;
  ushort *puVar7;
  FSGSTy_field_1EBEDArray *pFVar8;
  FSGSTy_field_1FB3DArray *pFVar9;
  FSGSTy_field_1FB3Element *pFVar10;
  dword dVar11;
  ccFntTy *pcVar12;
  StartSystemTy *pSVar13;
  LPCSTR pCVar14;
  LPCSTR pCVar15;
  LPCSTR pCVar16;
  int *piVar17;
  AnonShape_006B5B10_E0D06CF1 *pAVar18;
  code *pcVar19;
  DWORD DVar20;
  int iVar21;
  UINT UVar22;
  undefined4 *puVar23;
  uint *puVar24;
  FSGSTy_field_1FB3Element *element_1fb3;
  DArrayTy *pDVar25;
  undefined4 uVar26;
  char *pcVar27;
  ulong uVar28;
  LPCSTR pCVar29;
  HINSTANCE pHVar30;
  uint *puVar31;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  uint uVar32;
  MMsgTy *pMVar33;
  byte bVar34;
  FSGSTy *this_00;
  uint uVar35;
  byte *pbVar36;
  CursorClassTy *pCVar37;
  void *pvVar38;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  char *pcVar39;
  byte *pbVar40;
  LPCSTR pCVar41;
  AnonShape_005A4350_59BACD18 *pAVar42;
  bool bVar43;
  BITMAPINFO *pBVar44;
  int iVar45;
  DWORD DVar46;
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
  undefined4 local_19c [8];
  undefined4 local_17c [2];
  undefined2 local_172;
  undefined2 local_170;
  undefined4 local_160 [8];
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

  local_20 = this;
  DVar20 = STAppC::sub_006E51B0(this->field_0010);
  pcVar39 = (char *)0x0;
  this->field_0061 = DVar20;
  local_21c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_21c;
  iVar21 = Library::MSVCRT::__setjmp3(local_21c.jumpBuffer,0);
  this_00 = local_20;
  if (iVar21 != 0) {
    g_currentExceptionFrame = local_21c.previous;
    iVar45 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x1048,0,iVar21,
                                "%s","FSGSTy::GetMessage");
    if (iVar45 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar21,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x1048);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_20,message);
  pCVar37 = g_cursorClass_00802A30;
  SVar6 = message->id;
  if (MESS_FSGSTY_6949 < SVar6) {
    if (SVar6 < MESS_SHARED_6980) {
      if (SVar6 == MESS_SHARED_697F) {
        dVar11 = (message->arg2).u32;
        local_60 = *(int *)(dVar11 + 0x24) + -0xb4;
        local_58 = *(int *)(dVar11 + 0x2c);
        local_54 = *(int *)(dVar11 + 0x30);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar35 = *(int *)(dVar11 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
        local_5c = uVar35;
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1AC0,0,
                     *(int *)(dVar11 + 0x24) + -0xb5,uVar35,local_58 + 2,local_54,0xff);
        ccFntTy::SetSurf(this_00->field_1A73,(int)this_00->field_1AC0,0,local_60,uVar35,local_58,
                         local_54);
        if ((message->arg0).ptr != (undefined4 *)0x0) {
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)(message->arg0).ptr,0,-1,0);
        }
        uVar4 = (message->arg1).words.low;
        if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar21 = (uint)uVar4 + local_60;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1AC0,0,iVar21,uVar35 + 1,iVar21
                       ,local_54 + -2 + uVar35,9,0xd);
        }
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
        goto cf_common_exit_005A8CA7;
      }
      switch(SVar6) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      case MESS_FSGSTY_694A:
      case 0x694e:
        (*(code *)this_00->field_0000->field_0008)();
        this_00->field_1A61 = (message->id != MESS_FSGSTY_694A) + '\a';
        pSVar13 = this_00->field_1A5B;
        if (pSVar13->field_02E6 == (MMsgTy *)0x0) break;
        puVar23 = local_31c;
        for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar23 = 0xffffffff;
          puVar23 = puVar23 + 1;
        }
        *(undefined2 *)puVar23 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        MMsgTy::StatePanel(pSVar13->field_02E6,(int)local_31c);
        puVar23 = &local_a0;
        goto cf_common_exit_005A7F3B;
      case 0x694b:
        if (this_00->field_1A5F == CASE_2) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_0008)();
          this_00->field_1A61 = 5;
          if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            local_90 = 0x10101;
            MMsgTy::thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_90);
          }
        }
        else if (this_00->field_1A5F == CASE_5) {
          if (0 < (int)this_00->field_1AF4->elementSize) {
            pcVar39 = *(char **)this_00->field_1AF4->growCapacity;
          }
          iVar21 = -1;
          do {
            if (iVar21 == 0) break;
            iVar21 = iVar21 + -1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar39 + 1;
          } while (cVar2 != '\0');
          if (iVar21 == -2) {
            pMVar33 = this_00->field_1A5B->field_02E6;
            if (pMVar33 != (MMsgTy *)0x0) {
              MMsgTy::SetMessage(pMVar33,0x2592,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                 (undefined4 *)0x0,0,0);
            }
          }
          else {
            puVar23 = local_1d8;
            for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
              *puVar23 = 0xffffffff;
              puVar23 = puVar23 + 1;
            }
            *(undefined2 *)puVar23 = 0xffff;
            local_1cc = 1;
            local_1ce = 1;
            pMVar33 = this_00->field_1A5B->field_02E6;
            if (pMVar33 != (MMsgTy *)0x0) {
              MMsgTy::StatePanel(pMVar33,(int)local_1d8);
            }
            pCVar37 = g_cursorClass_00802A30;
            if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
              iVar21 = g_cursorClass_00802A30->field_00C9;
              iVar45 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar37->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
              CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
              pCVar37->field_00D2 = 0;
              pCVar37->field_04DF = -1;
            }
            if ((int)this_00->field_1AF4->elementSize < 1) {
              pcVar39 = (char *)0x0;
            }
            else {
              pcVar39 = *(char **)this_00->field_1AF4->growCapacity;
            }
            if ((int)this_00->field_1AEC->elementSize < 1) {
              pcVar27 = (char *)0x0;
            }
            else {
              pcVar27 = *(char **)this_00->field_1AEC->growCapacity;
            }
            if ((int)this_00->field_1AE8->elementSize < 1) {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,(char *)0x0,pcVar27,pcVar39);
            }
            else {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,
                         *(char **)this_00->field_1AE8->growCapacity,pcVar27,pcVar39);
            }
          }
        }
        break;
      case 0x694c:
        if ((this_00->field_1AAB != (LPCSTR)0x0) &&
           (pHVar30 = ShellExecuteA(HWND_00856d78,&DAT_007cc624,this_00->field_1AAB,(LPCSTR)0x0,
                                    (LPCSTR)0x0,1), 0x20 < (int)pHVar30)) {
          CFsgsConnection::BannerClick((CFsgsConnection *)&DAT_00802a90,this_00->field_1AAF);
        }
        break;
      case MESS_PRIVIDERTY_6952:
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        switch(this_00->field_1A5F) {
        case CASE_6:
          local_30 = 0x10000;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case CASE_3:
          local_30 = CONCAT31(local_30._1_3_,1);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case CASE_5:
          local_30._0_2_ = CONCAT11(1,(undefined1)local_30);
        case CASE_4:
          local_2c = 0x10100;
          this_00->field_1A61 = 2;
          break;
        case CASE_7:
        case CASE_8:
          local_30 = 0x100;
        case CASE_9:
          this_00->field_1A61 = 6;
          break;
        case CASE_A:
          pbVar40 = this_00->field_1B0C;
          if (pbVar40 != (byte *)0x0) {
            pbVar36 = &DAT_00807e1d;
            do {
              bVar34 = *pbVar40;
              bVar43 = bVar34 < *pbVar36;
              if (bVar34 != *pbVar36) {
LAB_005a63e7:
                iVar21 = (1 - (uint)bVar43) - (uint)(bVar43 != 0);
                goto LAB_005a63ec;
              }
              if (bVar34 == 0) break;
              bVar34 = pbVar40[1];
              bVar43 = bVar34 < pbVar36[1];
              if (bVar34 != pbVar36[1]) goto LAB_005a63e7;
              pbVar40 = pbVar40 + 2;
              pbVar36 = pbVar36 + 2;
            } while (bVar34 != 0);
            iVar21 = 0;
LAB_005a63ec:
            if (iVar21 == 0) {
              if ((int)this_00->field_1B00->elementSize < 1) {
                pcVar39 = (char *)0x0;
              }
              else {
                pcVar39 = *(char **)this_00->field_1B00->growCapacity;
              }
              if ((int)this_00->field_1AFC->elementSize < 1) {
                pcVar27 = (char *)0x0;
              }
              else {
                pcVar27 = *(char **)this_00->field_1AFC->growCapacity;
              }
              if ((int)this_00->field_1AF8->elementSize < 1) {
                pbVar40 = (byte *)0x0;
              }
              else {
                pbVar40 = *(byte **)this_00->field_1AF8->growCapacity;
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar40,pcVar27,pcVar39,
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
          this_00->field_1A61 = this_00->field_1ED2;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_0008)();
        pSVar13 = this_00->field_1A5B;
        if (pSVar13->field_02E6 != (MMsgTy *)0x0) {
          puVar23 = local_2e4;
          for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
            *puVar23 = 0xffffffff;
            puVar23 = puVar23 + 1;
          }
          *(undefined2 *)puVar23 = 0xffff;
          MMsgTy::StatePanel(pSVar13->field_02E6,(int)local_2e4);
          MMsgTy::thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_30);
        }
        break;
      case 0x6953:
        puVar23 = local_17c;
        for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar23 = 0xffffffff;
          puVar23 = puVar23 + 1;
        }
        *(undefined2 *)puVar23 = 0xffff;
        local_170 = 1;
        local_172 = 1;
        if ((int)this_00->field_1AE8->elementSize < 1) {
          pcVar39 = (char *)0x0;
        }
        else {
          pcVar39 = *(char **)this_00->field_1AE8->growCapacity;
        }
        Library::MSVCRT::_strncpy(&DAT_00807e1d,pcVar39,0x40);
        DAT_00807e5c = 0;
        if ((int)this_00->field_1AEC->elementSize < 1) {
          pcVar39 = (char *)0x0;
        }
        else {
          pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
        }
        uVar35 = 0xffffffff;
        do {
          pcVar27 = pcVar39;
          if (uVar35 == 0) break;
          uVar35 = uVar35 - 1;
          pcVar27 = pcVar39 + 1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar27;
        } while (cVar2 != '\0');
        uVar35 = ~uVar35;
        pcVar39 = pcVar27 + -uVar35;
        pcVar27 = (char *)&DAT_00807e5d;
        memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        iVar21 = -1;
        pcVar39 = (char *)&DAT_00807e5d;
        do {
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar39 + 1;
        } while (cVar2 != '\0');
        if (iVar21 == -2) {
          pMVar33 = this_00->field_1A5B->field_02E6;
          if (pMVar33 != (MMsgTy *)0x0) {
            MMsgTy::SetMessage(pMVar33,0x2592,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                               (undefined4 *)0x0,0,0);
          }
          break;
        }
        if (this_00->field_1A5F != CASE_2) {
          if (this_00->field_1A5F == CASE_4) {
            if ((int)this_00->field_1AF0->elementSize < 1) {
              pbVar40 = (byte *)0x0;
            }
            else {
              pbVar40 = *(byte **)this_00->field_1AF0->growCapacity;
            }
            pbVar36 = (byte *)&DAT_00807e5d;
            do {
              bVar34 = *pbVar36;
              bVar43 = bVar34 < *pbVar40;
              if (bVar34 != *pbVar40) {
LAB_005a6653:
                iVar21 = (1 - (uint)bVar43) - (uint)(bVar43 != 0);
                goto LAB_005a6658;
              }
              if (bVar34 == 0) break;
              bVar34 = pbVar36[1];
              bVar43 = bVar34 < pbVar40[1];
              if (bVar34 != pbVar40[1]) goto LAB_005a6653;
              pbVar36 = pbVar36 + 2;
              pbVar40 = pbVar40 + 2;
            } while (bVar34 != 0);
            iVar21 = 0;
LAB_005a6658:
            if (iVar21 == 0) {
              pMVar33 = this_00->field_1A5B->field_02E6;
              if (pMVar33 != (MMsgTy *)0x0) {
                MMsgTy::StatePanel(pMVar33,(int)local_17c);
              }
              pCVar37 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
                iVar21 = g_cursorClass_00802A30->field_00C9;
                iVar45 = g_cursorClass_00802A30->field_00C5;
                g_cursorClass_00802A30->field_0493 = CASE_5;
                pCVar37->field_0494 = 0xffff;
                CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
                CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
                pCVar37->field_00D2 = 0;
                pCVar37->field_04DF = -1;
              }
              if ((int)this_00->field_1B00->elementSize < 1) {
                pcVar39 = (char *)0x0;
              }
              else {
                pcVar39 = *(char **)this_00->field_1B00->growCapacity;
              }
              if ((int)this_00->field_1AFC->elementSize < 1) {
                pcVar27 = (char *)0x0;
              }
              else {
                pcVar27 = *(char **)this_00->field_1AFC->growCapacity;
              }
              if ((int)this_00->field_1AF8->elementSize < 1) {
                pbVar40 = (byte *)0x0;
              }
              else {
                pbVar40 = *(byte **)this_00->field_1AF8->growCapacity;
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar40,pcVar27,pcVar39,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              CFsgsConnection::CreateNewAccount
                        ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
            }
            else {
              pMVar33 = this_00->field_1A5B->field_02E6;
              if (pMVar33 != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(pMVar33,0x258a,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
          }
          break;
        }
        pMVar33 = this_00->field_1A5B->field_02E6;
        if (pMVar33 != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(pMVar33,(int)local_17c);
        }
        pCVar37 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
          iVar21 = g_cursorClass_00802A30->field_00C9;
          iVar45 = g_cursorClass_00802A30->field_00C5;
          g_cursorClass_00802A30->field_0493 = CASE_5;
          pCVar37->field_0494 = 0xffff;
          CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
          CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
          pCVar37->field_00D2 = 0;
          pCVar37->field_04DF = -1;
        }
LAB_005a67e1:
        uVar28 = CFsgsConnection::Login
                           ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
        if (uVar28 == 0) {
          DVar20 = GetLastError();
          thunk_FUN_0055beb0(&DAT_00802a90,DVar20);
        }
        DAT_00802a9a = 0;
        break;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      case 0x6954:
        (*(code *)this_00->field_0000->field_0008)();
        this_00->field_1A61 = 4;
        if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_c0 = 0x10101;
          MMsgTy::thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_c0);
        }
        break;
      case 0x6955:
        pCVar14 = (LPCSTR)this_00->field_1AB7;
        pCVar29 = (LPCSTR)0x0;
        pCVar41 = (LPCSTR)0x0;
        if (pCVar14 != (LPCSTR)0x0) {
          if ((message->arg0).u32 == 0) {
            switch(this_00->field_1A5F) {
            case CASE_2:
            case CASE_6:
            case CASE_7:
              goto switchD_005a6a92_caseD_2;
            case CASE_4:
              pCVar41 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar41) {
                pCVar29 = pCVar41;
                pCVar41 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AC8) {
                pCVar29 = (LPCSTR)this_00->field_1AC8;
                pCVar41 = (LPCSTR)this_00->field_1ACC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ACC) {
                pCVar29 = (LPCSTR)this_00->field_1ACC;
                pCVar41 = (LPCSTR)this_00->field_1AD8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AD8) {
                pCVar29 = (LPCSTR)this_00->field_1AD8;
                pCVar41 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ADC) {
                pCVar29 = (LPCSTR)this_00->field_1ADC;
                pCVar41 = (LPCSTR)this_00->field_1AE0;
              }
              else {
                if (pCVar14 != (LPCSTR)this_00->field_1AE0) goto LAB_005a6cc4;
                pCVar29 = (LPCSTR)this_00->field_1AE0;
                pCVar41 = this_00->field_1AE4;
              }
              break;
            case CASE_5:
              pCVar41 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar41) {
                pCVar29 = pCVar41;
                pCVar41 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AC8) {
                pCVar29 = (LPCSTR)this_00->field_1AC8;
                pCVar41 = (LPCSTR)this_00->field_1AD4;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AD4) {
                pCVar29 = (LPCSTR)this_00->field_1AD4;
                pCVar41 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar29 = (LPCSTR)this_00->field_1ACC;
              }
              break;
            case CASE_A:
              pCVar41 = (LPCSTR)this_00->field_1AD8;
              if (pCVar14 == pCVar41) {
                pCVar29 = pCVar41;
                pCVar41 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ADC) {
                pCVar29 = (LPCSTR)this_00->field_1ADC;
                pCVar41 = (LPCSTR)this_00->field_1AE0;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AE0) {
                pCVar29 = (LPCSTR)this_00->field_1AE0;
                pCVar41 = this_00->field_1AE4;
              }
              else {
LAB_005a6cc4:
                pCVar29 = this_00->field_1AE4;
              }
            }
          }
          else {
            switch(this_00->field_1A5F) {
            case CASE_2:
            case CASE_6:
            case CASE_7:
switchD_005a6a92_caseD_2:
              pCVar41 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar41) {
                pCVar29 = pCVar41;
                pCVar41 = (LPCSTR)this_00->field_1AC8;
              }
              else {
                pCVar29 = (LPCSTR)this_00->field_1AC8;
              }
              break;
            case CASE_4:
              pCVar41 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar41) {
                pCVar29 = pCVar41;
                pCVar41 = this_00->field_1AE4;
              }
              else {
                pCVar15 = (LPCSTR)this_00->field_1AC8;
                pCVar29 = pCVar15;
                if (((pCVar14 != pCVar15) &&
                    (pCVar16 = (LPCSTR)this_00->field_1ACC, pCVar29 = pCVar16, pCVar41 = pCVar15,
                    pCVar14 != pCVar16)) &&
                   (pCVar15 = (LPCSTR)this_00->field_1AD8, pCVar29 = pCVar15, pCVar41 = pCVar16,
                   pCVar14 != pCVar15)) {
                  pCVar16 = (LPCSTR)this_00->field_1ADC;
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case CASE_5:
              pCVar41 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar41) {
                pCVar29 = pCVar41;
                pCVar41 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar15 = (LPCSTR)this_00->field_1AC8;
                pCVar29 = pCVar15;
                if ((pCVar14 != pCVar15) &&
                   (pCVar16 = (LPCSTR)this_00->field_1AD4, pCVar29 = pCVar16, pCVar41 = pCVar15,
                   pCVar14 != pCVar16)) {
                  pCVar29 = (LPCSTR)this_00->field_1ACC;
                  pCVar41 = pCVar16;
                }
              }
              break;
            case CASE_A:
              pCVar15 = (LPCSTR)this_00->field_1AD8;
              if (pCVar14 == pCVar15) {
                pCVar29 = pCVar15;
                pCVar41 = this_00->field_1AE4;
              }
              else {
                pCVar16 = (LPCSTR)this_00->field_1ADC;
joined_r0x005a6ba3:
                pCVar29 = pCVar16;
                pCVar41 = pCVar15;
                if ((pCVar14 != pCVar16) &&
                   (pCVar15 = (LPCSTR)this_00->field_1AE0, pCVar29 = pCVar15, pCVar41 = pCVar16,
                   pCVar14 != pCVar15)) {
                  pCVar29 = this_00->field_1AE4;
                  pCVar41 = pCVar15;
                }
              }
            }
          }
        }
        this_00->field_002D = 0x20;
        if (pCVar29 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 0;
          FUN_006e6080(this_00,2,pCVar29,(undefined4 *)&this_00->field_0x1d);
        }
        if (pCVar41 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 1;
          FUN_006e6080(this_00,2,pCVar41,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_CHOOSEMAPTY_6956:
        this_00->field_1ED2 = 1;
LAB_005a6d57:
        DoLogon(this_00);
        break;
      case MESS_FSGSTY_6957:
        puVar7 = this_00->field_1AC0;
        uVar35 = *(uint *)(puVar7 + 10);
        if (uVar35 == 0) {
          uVar35 = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(puVar7 + 4);
        }
        puVar23 = (undefined4 *)FUN_006b4fa0((int *)puVar7);
        for (uVar32 = uVar35 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
          *puVar23 = 0xffffffff;
          puVar23 = puVar23 + 1;
        }
        for (uVar35 = uVar35 & 3; uVar35 != 0; uVar35 = uVar35 - 1) {
          *(undefined1 *)puVar23 = 0xff;
          puVar23 = (undefined4 *)((int)puVar23 + 1);
        }
        ccFntTy::SetSurf(this_00->field_1A73,(int)this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
        iVar48 = -1;
        iVar47 = -1;
        uVar35 = 2;
        iVar45 = -1;
        iVar21 = -2;
        puVar24 = (uint *)LoadResourceString(0x25be,g_module_00807618);
        ccFntTy::WrTxt(this_00->field_1A73,puVar24,iVar21,iVar45,uVar35,iVar47,iVar48);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_UPDATES__0079c020,
                  &DAT_0080f126);
        wsprintfA(local_4b8,"subtitans/%s",&DAT_0080f126);
        CFsgsConnection::DownloadFile
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pCVar37 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
          g_cursorClass_00802A30->field_0493 = CASE_5;
          pCVar37->field_0494 = 0xffff;
          CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
          CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
          pCVar37->field_00D2 = 0;
          pCVar37->field_04DF = -1;
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (MESS_SHARED_8160 < SVar6) {
      if (SVar6 < MESS_SHARED_C0A2) {
        if (SVar6 == MESS_FSGSTY_C0A1) {
          if ((this_00->field_1A6B != 0) && (this_00->field_1B10 != 0)) {
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 1;
            FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)&this_00->field_0x1d);
          }
          goto cf_common_exit_005A8CA7;
        }
        switch(SVar6) {
        case MESS_SIDTY_8161:
          if ((this_00->field_1E8E == 0) || (this_00->field_1E9A == (tagBITMAPINFO *)0x0)) break;
          pAVar42 = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
          local_1c = pAVar42;
          FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)&pAVar42->field_0x24,
                       (uint)(message->arg1).words.high + *(int *)&pAVar42->field_0x28,
                       pAVar42->field_002C,0x11);
          if (this_00->field_1A5F == CASE_6) {
            iVar21 = (uint)(message->arg1).words.high + *(int *)&pAVar42->field_0x28;
            PutDDXClip(*(int *)&pAVar42->field_0x24,iVar21,*(int *)&pAVar42->field_0x24 + -0x1e9,
                       iVar21 + -0x5e,pAVar42->field_002C,(byte *)0x11,'\x01',this_00->field_1E9A);
            FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,
                         pAVar42->field_002C,0x11,0xff);
            if (this_00->field_1A60 == '\0') {
              pDVar25 = this_00->field_1EA6;
              if (pDVar25 != (DArrayTy *)0x0) {
                uVar35 = (uint)(message->arg0).words.low;
                if (uVar35 < pDVar25->count) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar25, uVar35) (runtime stride) */
                  local_8 = (uint *)(pDVar25->elementSize * uVar35 + (int)pDVar25->data);
                }
                else {
                  local_8 = (uint *)0x0;
                }
                if (local_8 != (uint *)0x0) {
                  ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                   pAVar42->field_002C + -0x46,0x11);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  if (*(undefined1 *)((int)local_8 + 0x2d) == '\0') {
                    local_c = (AnonShape_005A4350_59BACD18 *)
                              thunk_FUN_0055c050(&DAT_00802a90,(int)local_8);
                    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,3,1,'\x01',
                           (byte *)local_c);
                    if (local_c != (AnonShape_005A4350_59BACD18 *)0x0) {
                      FreeAndNull(&local_c);
                    }
                    ccFntTy::WrStr(this_00->field_1A73,local_8,0,-1,
                                   (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2);
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    if ((*(undefined1 *)((int)local_8 + 0x25) & 0x10) != 0) {
                      uVar35 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                            this_00->field_1A8B,3);
                      FUN_006b5440((ushort *)this_00->field_1E8E,0,pAVar42->field_002C + -0x1d,
                                   (0x11 - *(int *)(uVar35 + 8)) / 2,uVar35,0,0xff);
                    }
                  }
                  else {
                    pbVar40 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                                   this_00->field_1A87,1);
                    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,3,
                           (0x11 - *(int *)(pbVar40 + 8)) / 2,'\x06',pbVar40);
                    uVar35 = (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2;
                    iVar45 = -1;
                    iVar21 = 0;
                    puVar24 = (uint *)LoadResourceString(0x2567,g_module_00807618);
                    ccFntTy::WrStr(this_00->field_1A73,puVar24,iVar21,iVar45,uVar35);
                  }
                }
              }
            }
            else {
              pDVar25 = this_00->field_1EAA;
              if (pDVar25 != (DArrayTy *)0x0) {
                uVar35 = (uint)(message->arg0).words.low;
                if (uVar35 < pDVar25->count) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar25, uVar35) (runtime stride) */
                  local_c = (AnonShape_005A4350_59BACD18 *)
                            (pDVar25->elementSize * uVar35 + (int)pDVar25->data);
                }
                else {
                  local_c = (AnonShape_005A4350_59BACD18 *)0x0;
                }
                if (local_c != (AnonShape_005A4350_59BACD18 *)0x0) {
                  uVar35 = *(uint *)(local_c + 2);
                  if ((uVar35 & 0x40) == 0) {
                    if ((uVar35 & 0x18) == 0) {
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_10 = (uint *)(CONCAT31(local_10._1_3_,-((uVar35 & 2) != 0)) & 0xffffff05
                                         );
                    }
                    else {
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_10 = (uint *)CONCAT31(local_10._1_3_,3);
                    }
                  }
                  else {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_10 = (uint *)CONCAT31(local_10._1_3_,4);
                  }
                  pbVar40 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                                 this_00->field_1A87,(uint)local_10 & 0xff);
                  DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,3,
                         (0x11 - *(int *)(pbVar40 + 8)) / 2,'\x06',pbVar40);
                  ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                   pAVar42->field_002C + -0x46,0x11);
                  iVar21 = (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2;
                  wsprintfA((LPSTR)&DAT_0080f33a,"&%d%s (&0%d&%d)",iVar21,local_c,
                            *(undefined4 *)&local_c[2].field_0x4,iVar21);
                  ccFntTy::WrStr(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar21 = (uint)(message->arg1).words.high + *(int *)&pAVar42->field_0x28;
            PutDDXClip(*(int *)&pAVar42->field_0x24,iVar21,*(int *)&pAVar42->field_0x24 + -0x13,
                       iVar21 + -0x5e,pAVar42->field_002C,(byte *)0x11,'\x01',this_00->field_1E9A);
            FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,
                         pAVar42->field_002C,0x11,0xff);
            pFVar8 = this_00->field_1EBE;
            if (pFVar8 != (FSGSTy_field_1EBEDArray *)0x0) {
              uVar35 = (uint)(message->arg0).words.low;
              if (uVar35 < pFVar8->count) {
                element_1ebe = DArrayAt<FSGSTy_field_1EBEElement>(pFVar8, uVar35);
              }
              else {
                element_1ebe = (FSGSTy_field_1EBEElement *)0x0;
              }
              if (element_1ebe != (FSGSTy_field_1EBEElement *)0x0) {
                iVar21 = -1;
                pcVar39 = (char *)(element_1ebe + 0x13);
                do {
                  if (iVar21 == 0) break;
                  iVar21 = iVar21 + -1;
                  cVar2 = *pcVar39;
                  pcVar39 = pcVar39 + 1;
                } while (cVar2 != '\0');
                pbVar40 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                               this_00->field_1A87,-(uint)(iVar21 != -2) & 4);
                DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,3,
                       (0x11 - *(int *)(pbVar40 + 8)) / 2,'\x06',pbVar40);
                ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                 local_1c->field_002C + -0x40,0x11);
                ccFntTy::WrStr(this_00->field_1A73,element_1ebe + 0xb,0,-1,
                               (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2);
                pAVar42 = local_1c;
              }
            }
          }
          DVar46 = pAVar42->field_002C;
          pBVar44 = (BITMAPINFO *)this_00->field_1E8E;
          DVar20 = 0x11;
          iVar21 = (uint)(message->arg1).words.high + *(int *)&pAVar42->field_0x28;
          goto LAB_005a89f6;
        case MESS_OPTPANELTY_8162:
          if ((g_cursorClass_00802A30 != (CursorClassTy *)0x0) &&
             (g_cursorClass_00802A30->field_0493 == CASE_5)) break;
          if (this_00->field_1A60 != '\0') {
            pDVar25 = this_00->field_1EAA;
            if (pDVar25 != (DArrayTy *)0x0) {
              if ((message->arg0).u32 < pDVar25->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar25, (message->arg0).u32) (runtime stride) */
                pcVar39 = (char *)(pDVar25->elementSize * (message->arg0).u32 + (int)pDVar25->data);
              }
              else {
                pcVar39 = (char *)0x0;
              }
              if (pcVar39 != (char *)0x0) {
                if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
                  iVar21 = g_cursorClass_00802A30->field_00C9;
                  iVar45 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = CASE_5;
                  pCVar37->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
                  CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
                  pCVar37->field_00D2 = 0;
                  pCVar37->field_04DF = -1;
                }
                iVar21 = -1;
                pcVar27 = pcVar39 + 0x40;
                do {
                  if (iVar21 == 0) break;
                  iVar21 = iVar21 + -1;
                  cVar2 = *pcVar27;
                  pcVar27 = pcVar27 + 1;
                } while (cVar2 != '\0');
                if (iVar21 == -2) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar39,pcVar39 + 0x40,1);
                }
                else if ((int)this_00->field_1AEC->elementSize < 1) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar39,(char *)0x0,1);
                }
                else {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar39,
                                     *(char **)this_00->field_1AEC->growCapacity,1);
                }
              }
            }
            break;
          }
          uVar35 = (message->arg0).u32;
          if (uVar35 == 0) {
            if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
              iVar21 = g_cursorClass_00802A30->field_00C9;
              iVar45 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar37->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
              CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
              pCVar37->field_00D2 = 0;
              pCVar37->field_04DF = -1;
            }
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_00->field_1A60 = 1;
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 0;
            if (this_00->field_1B18 != 0) {
              FUN_006e6080(this_00,2,this_00->field_1B18,(undefined4 *)&this_00->field_0x1d);
            }
            *(undefined4 *)&this_00->field_0x31 = 1;
            if (this_00->field_1B24 != 0) {
              FUN_006e6080(this_00,2,this_00->field_1B24,(undefined4 *)&this_00->field_0x1d);
            }
            break;
          }
          pDVar25 = this_00->field_1EA6;
          if (uVar35 < pDVar25->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar25, uVar35) (runtime stride) */
            pcVar39 = (char *)(pDVar25->elementSize * uVar35 + (int)pDVar25->data);
          }
          else {
            pcVar39 = (char *)0x0;
          }
          if (pcVar39 == (char *)0x0) break;
          if (this_00->field_1B0C != (byte *)0x0) {
            FreeAndNull(&this_00->field_1B0C);
          }
          uVar35 = 0xffffffff;
          pcVar27 = pcVar39;
          do {
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            cVar2 = *pcVar27;
            pcVar27 = pcVar27 + 1;
          } while (cVar2 != '\0');
          pbVar40 = Library::DKW::LIB::MemAlloc(~uVar35);
          uVar35 = 0xffffffff;
          this_00->field_1B0C = pbVar40;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pbVar36 = (byte *)(pcVar27 + -uVar35);
          memmove(pbVar40, pbVar36, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_0008)();
          this_00->field_1A61 = 10;
          this_00->field_1ED2 = 6;
          pSVar13 = this_00->field_1A5B;
          if (pSVar13->field_02E6 == (MMsgTy *)0x0) break;
          puVar23 = local_370;
          for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
            *puVar23 = 0xffffffff;
            puVar23 = puVar23 + 1;
          }
          *(undefined2 *)puVar23 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          MMsgTy::StatePanel(pSVar13->field_02E6,(int)local_370);
          puVar23 = &local_80;
          goto cf_common_exit_005A7F3B;
        case MESS_SIDTY_8163:
          if (this_00->field_1A5F == CASE_6) {
            if (this_00->field_1A60 == '\0') {
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
          else if (this_00->field_1A5F == CASE_8) {
            pFVar8 = this_00->field_1EBE;
            bVar43 = true;
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (((pFVar8 != (FSGSTy_field_1EBEDArray *)0x0) && ((message->arg0).u32 < pFVar8->count)
                ) && (puVar24 = (uint *)((int)&pFVar8->data->field_0000 +
                                        pFVar8->elementSize * (message->arg0).u32),
                     puVar24 != (uint *)0x0)) {
              bVar43 = false;
              Library::DKW::TBL::FUN_006b6020(&this_00->field_1AE8->flags,0,(char *)(puVar24 + 0xb));
              this_00->field_002D = 0x33;
              *(DArrayTy **)&this_00->field_0x31 = this_00->field_1AE8;
              FUN_006e6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              FUN_006b5f80((int *)g_ddxContext_008075A8,0x1a4,0x7d,0x15e,0x8c);
              PutDDXClip(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',this_00->field_1E92);
              FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,0x15e,0x11);
              uVar35 = 2;
              iVar45 = -1;
              iVar21 = -1;
              puVar31 = (uint *)LoadResourceString(0x2572,g_module_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar31,iVar21,iVar45,uVar35);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x11,0x14a,0x11);
              ccFntTy::WrStr(this_00->field_1A73,puVar24 + 7,0,-1,0);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x22,0x15e,0x11);
              uVar35 = 2;
              iVar45 = -1;
              iVar21 = -1;
              puVar31 = (uint *)LoadResourceString(0x2347,g_module_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar31,iVar21,iVar45,uVar35);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x33,0x14a,0x11);
              uVar35 = 0;
              iVar45 = -1;
              iVar21 = 0;
              if (*(char *)(puVar24 + 0x1f) == '\0') {
                puVar31 = (uint *)LoadResourceString(0x2573,g_module_00807618);
              }
              else {
                puVar31 = (uint *)((int)puVar24 + 0x83);
              }
              ccFntTy::WrStr(this_00->field_1A73,puVar31,iVar21,iVar45,uVar35);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x44,0x15e,0x11);
              uVar35 = 2;
              iVar45 = -1;
              iVar21 = -1;
              puVar31 = (uint *)LoadResourceString(0x2344,g_module_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar31,iVar21,iVar45,uVar35);
              if (*(char *)(puVar24 + 0x1f) != '\0') {
                ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x55,0x14a,0x11);
                iVar21 = (int)(char)*(undefined1 *)((int)puVar24 + 0x7e) << 1;
                wsprintfA((LPSTR)&DAT_0080f33a,"%dx%d",iVar21,iVar21);
                ccFntTy::WrStr(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
              }
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x66,0x15e,0x11);
              uVar35 = 2;
              iVar45 = -1;
              iVar21 = -1;
              puVar31 = (uint *)LoadResourceString(0x2345,g_module_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar31,iVar21,iVar45,uVar35);
              if (*(char *)(puVar24 + 0x1f) != '\0') {
                ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x77,0x14a,0x11);
                pcVar39 = LoadResourceString(0x2574,g_module_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,"%d %s",
                          (int)(char)*(undefined1 *)((int)puVar24 + 0x7d),pcVar39);
                ccFntTy::WrStr(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
              }
              Library::DKW::DDX::FUN_006b4680
                        ((int *)g_dDXContext_0080759C,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,
                         (uint *)0x0,0,0,0x15e,0x8c,0x10000ff);
            }
            if (bVar43) {
              Library::DKW::TBL::FUN_006b6020(&this_00->field_1AE8->flags,0,&DAT_008016a0);
              this_00->field_002D = 0x33;
              *(DArrayTy **)&this_00->field_0x31 = this_00->field_1AE8;
              FUN_006e6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              FUN_006b5f80((int *)g_ddxContext_008075A8,0x1a4,0x7d,0x15e,0x8c);
              PutDDXClip(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',this_00->field_1E92);
              FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,0x15e,0x11);
              uVar35 = 2;
              iVar45 = -1;
              iVar21 = -1;
              puVar24 = (uint *)LoadResourceString(0x2572,g_module_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar24,iVar21,iVar45,uVar35);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x22,0x15e,0x11);
              uVar35 = 2;
              iVar45 = -1;
              iVar21 = -1;
              puVar24 = (uint *)LoadResourceString(0x2347,g_module_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar24,iVar21,iVar45,uVar35);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x44,0x15e,0x11);
              uVar35 = 2;
              iVar45 = -1;
              iVar21 = -1;
              puVar24 = (uint *)LoadResourceString(0x2344,g_module_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar24,iVar21,iVar45,uVar35);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x66,0x15e,0x11);
              uVar35 = 2;
              iVar45 = -1;
              iVar21 = -1;
              puVar24 = (uint *)LoadResourceString(0x2345,g_module_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar24,iVar21,iVar45,uVar35);
              Library::DKW::DDX::FUN_006b4680
                        ((int *)g_dDXContext_0080759C,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,
                         (uint *)0x0,0,0,0x15e,0x8c,0x10000ff);
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
          uVar35 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          this_00->field_1E1D = uVar35;
          if (this_00->field_1E01 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1E45,this_00->field_1E01,this_00->field_1E05,
                       this_00->field_1E19,uVar35);
          }
        }
        goto cf_common_exit_005A8CA7;
      }
      switch(SVar6) {
      case MESS_SHARED_C0A2:
        if ((int)this_00->field_1EA2->field_0008 < 1) {
          pcVar39 = (char *)0x0;
        }
        else {
          pcVar39 = *(char **)this_00->field_1EA2->field_0014;
        }
        bVar43 = thunk_FUN_00571810(pcVar39);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,bVar43) == 0) {
          if ((int)this_00->field_1EA2->field_0008 < 1) {
            pcVar39 = (char *)0x0;
          }
          else {
            pcVar39 = *(char **)this_00->field_1EA2->field_0014;
          }
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,pcVar39);
        }
        else {
          iVar21 = 0;
          pDVar25 = this_00->field_1A5B->field_0696;
          if (0 < (int)pDVar25->elementSize) {
            if ((int)pDVar25->elementSize < 1) {
              pcVar39 = (char *)0x0;
              goto LAB_005a8b12;
            }
            do {
              pcVar39 = *(char **)(pDVar25->growCapacity + iVar21 * 4);
LAB_005a8b12:
              AddMessage(this_00,8,&DAT_008016a0,pcVar39,8);
              iVar21 = iVar21 + 1;
              pDVar25 = this_00->field_1A5B->field_0696;
            } while (iVar21 < (int)pDVar25->elementSize);
          }
        }
        Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_1EA2,0,&DAT_008016a0);
        this_00->field_002D = 0x33;
        *(AnonPointee_FSGSTy_1EA2 **)&this_00->field_0x31 = this_00->field_1EA2;
        goto LAB_005a8c85;
      case MESS_SHARED_C0A3:
        pDVar25 = this_00->field_1AE8;
        dVar11 = pDVar25->elementSize;
joined_r0x005a8b8f:
        if (0 < (int)dVar11) {
          pcVar39 = *(char **)pDVar25->growCapacity;
        }
        iVar21 = -1;
        do {
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar39 + 1;
        } while (cVar2 != '\0');
        if (iVar21 != -2) {
          if ((int)this_00->field_1AEC->elementSize < 1) {
            pcVar39 = (char *)0x0;
          }
          else {
            pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
          }
          if ((int)dVar11 < 1) {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)0x0,pcVar39,1);
          }
          else {
            thunk_FUN_0055d390(&DAT_00802a90,*(char **)pDVar25->growCapacity,pcVar39,1);
          }
        }
        break;
      case MESS_BLDLABPANELTY_C0A4:
        if (this_00->field_1A60 != '\0') break;
        this_00->field_002D = 0x26;
        FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
        uVar35 = *(uint *)&this_00->field_0x31;
        if (uVar35 == 0) break;
        pDVar25 = this_00->field_1EA6;
        if (uVar35 < pDVar25->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar25, uVar35) (runtime stride) */
          pvVar38 = (void *)(pDVar25->elementSize * uVar35 + (int)pDVar25->data);
        }
        else {
          pvVar38 = (void *)0x0;
        }
        if ((int)this_00->field_1EA2->field_0008 < 1) {
          uVar26 = 0;
        }
        else {
          uVar26 = *(undefined4 *)this_00->field_1EA2->field_0014;
        }
        wsprintfA((LPSTR)&DAT_0080f33a,"%s %s ",uVar26,pvVar38);
        Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_1EA2,0,(char *)&DAT_0080f33a);
        this_00->field_002D = 0x33;
        *(AnonPointee_FSGSTy_1EA2 **)&this_00->field_0x31 = this_00->field_1EA2;
LAB_005a8c85:
        FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)&this_00->field_0x1d);
        break;
      case MESS_FRMPANELTY_C0A5:
        DAT_00807360 = DAT_00807360 == '\0';
      }
      goto cf_common_exit_005A8CA7;
    }
    if (SVar6 == MESS_SHARED_8160) {
      (message->arg1).u32 = 0x11;
      goto cf_common_exit_005A8CA7;
    }
    switch(SVar6) {
    case MESS_SHARED_6980:
      piVar17 = (message->arg1).ptr;
      iVar21 = *piVar17;
      local_140 = iVar21 + -0xb4;
      iVar45 = piVar17[1];
      local_13c = iVar45 + -0xaa;
      local_138 = piVar17[2];
      local_134 = piVar17[3];
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1AC0,0,iVar21 + -0xb3,
                   iVar45 + -0xa9,local_138 + -2,local_134 + -2,0xff);
      if (DAT_0080735f != '\0') {
        pbVar40 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A83,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1AC0,iVar21 + -0xb2,iVar45 + -0xa8,
               '\x06',pbVar40);
      }
      break;
    case MESS_SIDTY_6981:
      pcVar12 = this_00->field_1A73;
      local_14 = (tagBITMAPINFO *)0x0;
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
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1AC0,0,
                   *(int *)(dVar11 + 0x24) + -0xb5,local_4c,local_48 + 2,local_44,0xff);
      pvVar38 = (message->arg0).ptr;
      if (pvVar38 != (void *)0x0) {
        local_8 = (uint *)0x0;
        do {
          if (*(char **)((int)pvVar38 + (int)local_8) == (char *)0x0) break;
          iVar21 = FUN_007111c0(this_00->field_1A73,*(char **)((int)pvVar38 + (int)local_8));
          ccFntTy::SetSurf(this_00->field_1A73,(int)this_00->field_1AC0,0,local_50,
                           (int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize
                           + local_4c,local_48,iVar21);
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)((int)(message->arg0).ptr + (int)local_8),0,
                         -1,0);
          local_14 = (tagBITMAPINFO *)
                     ((int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     this_00->field_1A73->field_005C + iVar21);
          pvVar38 = (message->arg0).ptr;
          local_8 = local_8 + 1;
        } while (pvVar38 != (void *)0x0);
      }
      uVar4 = (message->arg1).words.low;
      if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        iVar47 = (uint)(message->arg1).words.high + local_4c;
        iVar45 = (uint)uVar4 + local_50;
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1AC0,0,iVar45,iVar47,iVar45,
                     iVar47 + iVar21,9,0xd);
      }
      goto LAB_005a7c92;
    case MESS_SHARED_6980|MESS_ID_CREATE:
      if (((this_00->field_1E8E != 0) && (this_00->field_1E92 != (tagBITMAPINFO *)0x0)) &&
         (local_8 = (uint *)(message->arg2).u32, local_8 != (uint *)0x0)) {
        if (this_00->field_1A5F == CASE_3) {
          pcVar12 = this_00->field_1A73;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1B08;
        }
        else {
          pcVar12 = this_00->field_1A77;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1E9E;
        }
        FUN_006b5f80((int *)g_ddxContext_008075A8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
        PutDDXClip(local_8[9],local_8[10],6,1,local_8[0xb],(byte *)local_8[0xc],'\x01',
                   this_00->field_1E92);
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,local_8[0xb],
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
              local_10 = (uint *)0x0;
            }
            if (local_10 != (uint *)0x0) {
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
              ccFntTy::WrStr(pcVar12,local_10,0,-1,2);
            }
            local_14 = (tagBITMAPINFO *)((int)&(local_14->bmiHeader).biSize + 1);
          } while ((int)local_14 < (int)((uint)(message->arg0).words.high + local_8[0x78]));
        }
        Library::DKW::DDX::FUN_006b4680
                  ((int *)g_dDXContext_0080759C,local_8[9],local_8[10],
                   (BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,local_8[0xb],local_8[0xc],
                   0x10000ff);
      }
      break;
    case MESS_MAINMENUTY_6983:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != (tagBITMAPINFO *)0x0)) {
        dVar11 = (message->arg2).u32;
        FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30));
        PutDDXClip(*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),6,0x15f,*(uint *)(dVar11 + 0x2c),
                   *(byte **)(dVar11 + 0x30),'\x01',this_00->field_1E92);
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          ccFntTy::SetSurf(this_00->field_1A77,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x14);
          ccFntTy::WrStr(this_00->field_1A77,*(uint **)(message->arg0).ptr,0,-1,5);
        }
        uVar4 = (message->arg1).words.low;
        if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,(uint)uVar4,2,
                       (uint)uVar4,0x11,9,0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::DKW::DDX::FUN_006b4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(dVar11 + 0x2c),
                   *(DWORD *)(dVar11 + 0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((this_00->field_1E8E == 0) || (this_00->field_1E92 == (tagBITMAPINFO *)0x0)) break;
      pAVar42 = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
      FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)&pAVar42->field_0x24,
                   *(int *)&pAVar42->field_0x28,pAVar42->field_002C,*(int *)(pAVar42 + 1));
      PutDDXClip(*(int *)&pAVar42->field_0x24,*(int *)&pAVar42->field_0x28,
                 *(int *)&pAVar42->field_0x24 + -0x13,0x160,pAVar42->field_002C,
                 *(byte **)(pAVar42 + 1),'\x01',this_00->field_1E92);
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,pAVar42->field_002C,
                   *(int *)(pAVar42 + 1),0xff);
      ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,pAVar42->field_002C,
                       *(int *)(pAVar42 + 1));
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 1) {
        uVar35 = 2;
      }
      else {
        uVar35 = (-(uint)(wVar5 != 0) & 2) + 1;
      }
      iVar45 = -1;
      iVar21 = -1;
      puVar24 = (uint *)LoadResourceString(0x2565,g_module_00807618);
      ccFntTy::WrStr(this_00->field_1A73,puVar24,iVar21,iVar45,uVar35);
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
      local_14 = (tagBITMAPINFO *)0x0;
      switch(SVar6) {
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
      if (local_14 == (tagBITMAPINFO *)0x0) break;
      local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
      switch(SVar6 - (MESS_SHARED_6980|MESS_SHARED_0005)) {
      case MESS_ID_NONE:
        local_8 = (uint *)0x2566;
        break;
      case 1:
      case MESS_SHARED_0008:
        local_8 = (uint *)0x2616;
        break;
      case 4:
        uVar35 = this_00->field_1EC2;
        if (uVar35 < 0x401) {
          if (uVar35 == 0x400) {
            local_8 = (uint *)0x235b;
          }
          else if (uVar35 == 0x100) {
            local_8 = (uint *)0x2341;
          }
          else {
            if (uVar35 != 0x200) goto LAB_005a7656;
            local_8 = (uint *)0x235a;
          }
        }
        else if (uVar35 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar35 == 0x502) {
          local_8 = (uint *)0x235d;
        }
        else {
LAB_005a7656:
          local_8 = (uint *)0x235c;
        }
        break;
      case MESS_SHARED_0005:
        if (this_00->field_1EC6 == -1) {
          pcVar39 = LoadResourceString(0x235c,g_module_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = (char *)&DAT_0080f33a;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
        }
        else {
          if (this_00->field_1ECA < PTR_0080c502->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_0080c502, this_00->field_1ECA) (runtime stride) */
            pcVar39 = (char *)(PTR_0080c502->elementSize * this_00->field_1ECA +
                              (int)PTR_0080c502->data);
          }
          else {
            pcVar39 = (char *)0x0;
          }
          if (pcVar39 == (char *)0x0) {
            pcVar39 = &DAT_008016a0;
          }
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = (char *)&DAT_0080f33a;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
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
      pAVar42 = local_c;
      FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)&local_c->field_0x24,
                   *(int *)&local_c->field_0x28,local_c->field_002C,*(int *)(local_c + 1));
      PutDDXClip(*(int *)&pAVar42->field_0x24,*(int *)&pAVar42->field_0x28,
                 *(int *)&pAVar42->field_0x24 - (int)local_10,
                 *(int *)&pAVar42->field_0x28 - (int)local_1c,pAVar42->field_002C,
                 *(byte **)(pAVar42 + 1),'\x01',local_14);
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,pAVar42->field_002C,
                   *(int *)(pAVar42 + 1),0xff);
      ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,pAVar42->field_002C,
                       *(int *)(pAVar42 + 1));
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 1) {
        local_c = (AnonShape_005A4350_59BACD18 *)0x2;
      }
      else {
        local_c = (AnonShape_005A4350_59BACD18 *)((-(uint)(wVar5 != 0) & 2) + 1);
      }
      if (message->id == MESS_FSGSTY_698A) {
        puVar24 = &DAT_0080f33a;
      }
      else {
        puVar24 = (uint *)LoadResourceString((UINT)local_8,g_module_00807618);
      }
      ccFntTy::WrStr(this_00->field_1A73,puVar24,-1,-1,(uint)local_c);
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 0) {
        bVar34 = 0xd;
      }
      else {
        bVar34 = (-(wVar5 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,
                   (undefined4 *)pAVar42->field_002C,*(int *)(pAVar42 + 1),4,bVar34);
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 0) {
        bVar34 = 0xd;
      }
      else {
        bVar34 = (-(wVar5 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,2,2,
                   (undefined4 *)(pAVar42->field_002C + -4),*(int *)(pAVar42 + 1) + -4,4,bVar34);
LAB_005a754e:
      DVar20 = *(DWORD *)(pAVar42 + 1);
      DVar46 = pAVar42->field_002C;
      pBVar44 = (BITMAPINFO *)this_00->field_1E8E;
      iVar21 = *(int *)&pAVar42->field_0x28;
LAB_005a89f6:
      Library::DKW::DDX::FUN_006b4680
                ((int *)g_dDXContext_0080759C,*(int *)&pAVar42->field_0x24,iVar21,pBVar44,
                 (uint *)0x0,0,0,DVar46,DVar20,0x10000ff);
      break;
    case 0x6987:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E9A != (tagBITMAPINFO *)0x0)) {
        dVar11 = (message->arg2).u32;
        FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30));
        PutDDXClip(*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),*(int *)(dVar11 + 0x24) + -0x1e9,
                   *(int *)(dVar11 + 0x28) + -0x5e,*(uint *)(dVar11 + 0x2c),
                   *(byte **)(dVar11 + 0x30),'\x01',this_00->field_1E9A);
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)(message->arg0).ptr,3,-1,5);
        }
        uVar4 = (message->arg1).words.low;
        if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar21 = uVar4 + 3;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,iVar21,4,iVar21,0x11,9,
                       0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::DKW::DDX::FUN_006b4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(dVar11 + 0x2c),
                   *(DWORD *)(dVar11 + 0x30),0x10000ff);
      }
      break;
    case MESS_SHARED_6980|MESS_SHARED_0008:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != (tagBITMAPINFO *)0x0)) {
        dVar11 = (message->arg2).u32;
        FUN_006b5f80((int *)g_ddxContext_008075A8,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        PutDDXClip(*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   *(int *)(dVar11 + 0x24) -
                   ((-(uint)(this_00->field_1A5F != CASE_9) & 0x177) + 0x22),
                   *(int *)(dVar11 + 0x28) + -0x5e,*(uint *)(dVar11 + 0x2c),
                   *(byte **)(dVar11 + 0x30),'\x01',this_00->field_1E92);
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)(message->arg0).ptr,3,-1,5);
        }
        uVar4 = (message->arg1).words.low;
        if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar21 = uVar4 + 3;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,iVar21,3,iVar21,0x11,9,
                       0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::DKW::DDX::FUN_006b4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(dVar11 + 0x2c),
                   *(DWORD *)(dVar11 + 0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar17 = (message->arg1).ptr;
      iVar21 = *piVar17;
      iVar45 = iVar21 + -0xb4;
      local_3c = piVar17[1] - 0xaa;
      local_38 = (undefined4 *)piVar17[2];
      local_34 = piVar17[3];
      local_40 = iVar45;
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1AC0,0,iVar45,local_3c,
                   (int)local_38,local_34,0xff);
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 0) {
        bVar34 = 0xd;
      }
      else {
        bVar34 = (-(wVar5 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1AC0,0,iVar45,local_3c,local_38,
                   local_34,4,bVar34);
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 0) {
        bVar34 = 0xd;
      }
      else {
        bVar34 = (-(wVar5 != 2) & 0x10U) - 2;
      }
      FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1AC0,0,iVar21 + -0xb2,local_3c + 2,
                   local_38 + -1,local_34 + -4,4,bVar34);
      uVar35 = this_00->field_1EC2;
      if (uVar35 < 0x502) {
        if (uVar35 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar35 == 0x200) {
          local_8 = (uint *)0x235a;
        }
        else {
          if (uVar35 != 0x400) goto LAB_005a7c26;
          local_8 = (uint *)0x235b;
        }
      }
      else if (uVar35 == 0x502) {
        local_8 = (uint *)0x235d;
      }
      else {
LAB_005a7c26:
        local_8 = (uint *)0x2341;
      }
      ccFntTy::SetSurf(this_00->field_1A73,(int)this_00->field_1AC0,0,iVar45,local_3c,(int)local_38,
                       local_34);
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 1) {
        uVar35 = 2;
      }
      else {
        uVar35 = (-(uint)(wVar5 != 0) & 2) + 1;
      }
      iVar45 = -1;
      iVar21 = -1;
      puVar24 = (uint *)LoadResourceString((UINT)local_8,g_module_00807618);
      ccFntTy::WrStr(this_00->field_1A73,puVar24,iVar21,iVar45,uVar35);
LAB_005a7c92:
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      break;
    case 0x698c:
      ccFntTy::SetSurf(this_00->field_1A73,(message->arg1).i32,0,0,0,0,0);
      pFVar9 = this_00->field_1FB3;
      uVar35 = (uint)(message->arg0).words.low;
      if (uVar35 < pFVar9->count) {
        element_1fb3 = DArrayAt<FSGSTy_field_1FB3Element>(pFVar9, uVar35);
      }
      else {
        element_1fb3 = (FSGSTy_field_1FB3Element *)0x0;
      }
      ccFntTy::WrStr(this_00->field_1A73,element_1fb3,-1,-1,3 - ((message->arg0).words.high != 1));
      if ((message->arg0).words.high == 1) {
        pAVar18 = (message->arg1).ptr;
        FUN_006b5ee0(pAVar18,0,0,0,pAVar18->field_0004,pAVar18->field_0008,0xf,0xd);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar6 == MESS_FSGSTY_6949) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_00->field_0000->field_0008)();
    this_00->field_1A61 = 9;
    pSVar13 = this_00->field_1A5B;
    if (pSVar13->field_02E6 == (MMsgTy *)0x0) goto cf_common_exit_005A8CA7;
    puVar23 = local_2ac;
    for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar23 = 0xffffffff;
      puVar23 = puVar23 + 1;
    }
    *(undefined2 *)puVar23 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    MMsgTy::StatePanel(pSVar13->field_02E6,(int)local_2ac);
    puVar23 = &local_d0;
cf_common_exit_005A7F3B:
    MMsgTy::thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,puVar23);
    goto cf_common_exit_005A8CA7;
  }
  if (MESS_ID_MSGOK < SVar6) {
    if (SVar6 < 0x6907) {
      if (SVar6 == MESS_FSGSTY_6906) {
        if (g_cursorClass_00802A30->field_0493 == CASE_5) goto cf_common_exit_005A8CA7;
        local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
        this_00->field_1F43 = 0x6506;
        iVar21 = local_c->field_0008;
        this_00->field_1F63 = 0x698c;
        this_00->field_1F4B = iVar21;
        this_00->field_1FB3->count = 0;
        this_00->field_20BB = 1;
        pcVar39 = LoadResourceString(0x25b4,g_module_00807618);
        uVar35 = 0xffffffff;
        do {
          pcVar27 = pcVar39;
          if (uVar35 == 0) break;
          uVar35 = uVar35 - 1;
          pcVar27 = pcVar39 + 1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar27;
        } while (cVar2 != '\0');
        uVar35 = ~uVar35;
        pcVar39 = pcVar27 + -uVar35;
        pcVar27 = &this_00->field_0x1fb7;
        memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
        this_00->field_20BB = 2;
        pcVar39 = LoadResourceString(0x25b5,g_module_00807618);
        uVar35 = 0xffffffff;
        do {
          pcVar27 = pcVar39;
          if (uVar35 == 0) break;
          uVar35 = uVar35 - 1;
          pcVar27 = pcVar39 + 1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar27;
        } while (cVar2 != '\0');
        uVar35 = ~uVar35;
        pcVar39 = pcVar27 + -uVar35;
        pcVar27 = &this_00->field_0x1fb7;
        memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
        pFVar9 = this_00->field_1FB3;
        this_00->field_1F7B = pFVar9->count;
        uVar35 = 0;
        this_00->field_1F73 = 0;
        if (pFVar9->count != 0) {
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (DAT_00803140 == *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35))
            {
              this_00->field_1F73 = uVar35;
              break;
            }
            uVar35 = uVar35 + 1;
          } while (uVar35 < pFVar9->count);
        }
      }
      else {
        if (SVar6 < MESS_FSGSTY_6903) {
          if (SVar6 == MESS_MAINMENUTY_6902) {
            pDVar25 = this_00->field_1AE8;
            dVar11 = pDVar25->elementSize;
            goto joined_r0x005a8b8f;
          }
          if (MESS_SHARED_6900 < SVar6) {
            if ((SVar6 == MESS_FSGSTY_6901) && (this_00->field_1A60 == '\0')) {
              this_00->field_002D = 0x26;
              puVar1 = &this_00->field_0x1d;
              FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)puVar1);
              pDVar25 = this_00->field_1EA6;
              if ((uint)*(ushort *)&this_00->field_0x31 < pDVar25->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar25, (uint)*(ushort *)&this_00->field_0x31) (runtime stride) */
                pvVar38 = (void *)(pDVar25->elementSize * (uint)*(ushort *)&this_00->field_0x31 +
                                  (int)pDVar25->data);
              }
              else {
                pvVar38 = (void *)0x0;
              }
              if (pvVar38 != (void *)0x0) {
                this_00->field_002D = 0x32;
                FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                iVar21 = *(int *)&this_00->field_0x31;
                if (iVar21 != 0) {
                  if (*(int *)(iVar21 + 8) < 1) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = **(undefined4 **)(iVar21 + 0x14);
                  }
                  pcVar39 = LoadResourceString(0x2568,g_module_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,"%s %s %s",pcVar39,pvVar38,uVar26);
                  CFsgsConnection::SendChatMessage
                            ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a);
                  Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_1EA2,0,&DAT_008016a0);
                  this_00->field_002D = 0x33;
                  *(AnonPointee_FSGSTy_1EA2 **)&this_00->field_0x31 = this_00->field_1EA2;
                  FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                }
              }
            }
            goto cf_common_exit_005A8CA7;
          }
          if (SVar6 == MESS_SHARED_6900) {
            DAT_0080735f = DAT_0080735f == '\0';
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_1AD0,(undefined4 *)&this_00->field_0x1d);
            goto cf_common_exit_005A8CA7;
          }
          if (SVar6 != MESS_FSGSTY_6506) {
            if (SVar6 == MESS_MMSGTY_68FF) {
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
          uVar35 = (message->arg0).u32;
          if (pFVar9->count <= uVar35) goto cf_common_exit_005A8CA7;
          if (this_00->field_1A5F == CASE_9) {
            if ((message->arg1).u32 == this_00->field_1EB6) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              DAT_00803140 = *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35);
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar37 = g_cursorClass_00802A30;
joined_r0x005a55e5:
              g_cursorClass_00802A30 = pCVar37;
              if (pCVar37 == (CursorClassTy *)0x0) goto cf_common_exit_005A5634;
              pCVar37->field_0493 = CASE_5;
              pCVar37->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
              iVar21 = pCVar37->field_00C9;
              iVar45 = pCVar37->field_00C5;
            }
            else {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              DAT_00803144 = *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35);
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar37 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 == (CursorClassTy *)0x0) goto cf_common_exit_005A5634;
              iVar21 = g_cursorClass_00802A30->field_00C9;
              iVar45 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar37->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
              iVar21 = pCVar37->field_00C9;
              iVar45 = pCVar37->field_00C5;
            }
LAB_005a561c:
            CursorClassTy::DrawSprite(pCVar37,iVar45,iVar21);
            pCVar37->field_00D2 = 0;
            pCVar37->field_04DF = -1;
          }
          else {
            if ((message->arg1).u32 != this_00->field_1EB6) {
              iVar21 = pFVar9->elementSize * uVar35;
              pFVar10 = pFVar9->data;
              this_00->field_1EC6 = *(undefined4 *)(&pFVar10->field_0x104 + iVar21);
              this_00->field_1ECA = *(uint *)(&pFVar10->field_0x108 + iVar21);
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,(char *)0x0);
              DVar20 = timeGetTime();
              this_00->field_1A63 = DVar20;
              pCVar37 = g_cursorClass_00802A30;
              goto joined_r0x005a55e5;
            }
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            this_00->field_1EC2 =
                 *(uint *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35);
            if (this_00->field_1A5F == CASE_8) {
              uVar35 = this_00->field_1EC2;
              memset(local_24c, 0, 0x20); /* compiler bulk-zero initialization */
              this_00->field_1EC6 = 0xffffffff;
              local_238 = (uint)(uVar35 == 0x100);
              this_00->field_1ECA = 0;
              local_23c = 0x20;
              if (this_00->field_1EBA != 0) {
                FUN_006e6080(this_00,2,this_00->field_1EBA,local_24c);
              }
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,(char *)0x0);
              DVar20 = timeGetTime();
              this_00->field_1A63 = DVar20;
              pCVar37 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
                iVar21 = g_cursorClass_00802A30->field_00C9;
                iVar45 = g_cursorClass_00802A30->field_00C5;
                g_cursorClass_00802A30->field_0493 = CASE_5;
                pCVar37->field_0494 = 0xffff;
                CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
                iVar21 = pCVar37->field_00C9;
                iVar45 = pCVar37->field_00C5;
                goto LAB_005a561c;
              }
            }
          }
cf_common_exit_005A5634:
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,message->arg1,(undefined4 *)&this_00->field_0x1d);
          goto cf_common_exit_005A8CA7;
        }
        if (SVar6 == MESS_FSGSTY_6903) {
          if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
            iVar21 = g_cursorClass_00802A30->field_00C9;
            iVar45 = g_cursorClass_00802A30->field_00C5;
            g_cursorClass_00802A30->field_0493 = CASE_5;
            pCVar37->field_0494 = 0xffff;
            CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
            CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
            pCVar37->field_00D2 = 0;
            pCVar37->field_04DF = -1;
          }
          if (this_00->field_1A5F == CASE_6) {
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_00->field_1A60 = 1;
          }
          if (this_00->field_1A5F == CASE_8) {
            CFsgsConnection::RequestGameList
                      ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,(char *)0x0);
            DVar20 = timeGetTime();
            this_00->field_1A63 = DVar20;
          }
          goto cf_common_exit_005A8CA7;
        }
        if (SVar6 == MESS_FSGSTY_6904) {
          local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
          this_00->field_1F43 = 0x6506;
          iVar21 = local_c->field_0008;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = iVar21;
          this_00->field_1FB3->count = 0;
          if (this_00->field_1A5F == CASE_8) {
            this_00->field_20BB = 0;
            pcVar39 = LoadResourceString(0x235c,g_module_00807618);
            uVar35 = 0xffffffff;
            do {
              pcVar27 = pcVar39;
              if (uVar35 == 0) break;
              uVar35 = uVar35 - 1;
              pcVar27 = pcVar39 + 1;
              cVar2 = *pcVar39;
              pcVar39 = pcVar27;
            } while (cVar2 != '\0');
            uVar35 = ~uVar35;
            pcVar39 = pcVar27 + -uVar35;
            pcVar27 = &this_00->field_0x1fb7;
            memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
            uVar32 = 0;
            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          }
          this_00->field_20BB = 0x100;
          pcVar39 = LoadResourceString(0x2341,g_module_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x501;
          pcVar39 = LoadResourceString(0x2342,g_module_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x200;
          pcVar39 = LoadResourceString(0x235a,g_module_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x400;
          pcVar39 = LoadResourceString(0x235b,g_module_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x502;
          pcVar39 = LoadResourceString(0x235d,g_module_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          pFVar9 = this_00->field_1FB3;
          this_00->field_1F7B = pFVar9->count;
          uVar35 = 0;
          this_00->field_1F73 = 0;
          if (pFVar9->count != 0) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              if (this_00->field_1EC2 ==
                  *(uint *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35)) {
                this_00->field_1F73 = uVar35;
                break;
              }
              uVar35 = uVar35 + 1;
            } while (uVar35 < pFVar9->count);
          }
        }
        else {
          if (SVar6 != MESS_FSGSTY_6905) goto cf_common_exit_005A8CA7;
          local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
          this_00->field_1F43 = 0x6506;
          iVar21 = local_c->field_0008;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = iVar21;
          this_00->field_1FB3->count = 0;
          this_00->field_20BB = 0xffffffff;
          pcVar39 = LoadResourceString(0x235c,g_module_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          this_00->field_20BF = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          local_8 = (uint *)0x0;
          if (PTR_0080c502->count != 0) {
            pDVar25 = PTR_0080c502;
            if (PTR_0080c502->count == 0) {
              pcVar39 = (char *)0x0;
              goto LAB_005a5859;
            }
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar25, (int)local_8) (runtime stride) */
              pcVar39 = (char *)(pDVar25->elementSize * (int)local_8 + (int)pDVar25->data);
LAB_005a5859:
              if (pcVar39 != (char *)0x0) {
                this_00->field_20BB = *(undefined4 *)(pcVar39 + 0x90);
                uVar35 = 0xffffffff;
                do {
                  pcVar27 = pcVar39;
                  if (uVar35 == 0) break;
                  uVar35 = uVar35 - 1;
                  pcVar27 = pcVar39 + 1;
                  cVar2 = *pcVar39;
                  pcVar39 = pcVar27;
                } while (cVar2 != '\0');
                uVar35 = ~uVar35;
                pcVar39 = pcVar27 + -uVar35;
                pcVar27 = &this_00->field_0x1fb7;
                memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
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
          uVar35 = 0;
          dVar11 = pFVar9->count;
          this_00->field_1F73 = 0;
          this_00->field_1F7B = dVar11;
          if (pFVar9->count != 0) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              if (this_00->field_1EC6 ==
                  *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35)) {
                this_00->field_1F73 = uVar35;
                break;
              }
              uVar35 = uVar35 + 1;
            } while (uVar35 < pFVar9->count);
          }
        }
      }
      pcVar12 = this_00->field_1A73;
      this_00->field_1F97 = *(undefined4 *)&local_c->field_0x24;
      this_00->field_1F9F = local_c->field_002C + 10;
      this_00->field_1F9B = *(int *)(local_c + 1) + *(int *)&local_c->field_0x28;
      iVar21 = pcVar12->field_00A0;
joined_r0x005a5b89:
      if (iVar21 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
      }
      this_00->field_1F77 = *(undefined4 *)&pcVar12->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &this_00->field_0x1f33,0);
      goto cf_common_exit_005A8CA7;
    }
    switch(SVar6) {
    case 0x6907:
      if (g_cursorClass_00802A30->field_0493 == CASE_5) break;
      local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
      this_00->field_1F43 = 0x6506;
      iVar21 = local_c->field_0008;
      this_00->field_1F63 = 0x698c;
      this_00->field_1F4B = iVar21;
      this_00->field_1FB3->count = 0;
      this_00->field_20BB = 0;
      pcVar39 = LoadResourceString(0x25bf,g_module_00807618);
      uVar35 = 0xffffffff;
      do {
        pcVar27 = pcVar39;
        if (uVar35 == 0) break;
        uVar35 = uVar35 - 1;
        pcVar27 = pcVar39 + 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar27;
      } while (cVar2 != '\0');
      uVar35 = ~uVar35;
      pcVar39 = pcVar27 + -uVar35;
      pcVar27 = &this_00->field_0x1fb7;
      memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      this_00->field_20BB = 1;
      pcVar39 = LoadResourceString(0x25c0,g_module_00807618);
      uVar35 = 0xffffffff;
      do {
        pcVar27 = pcVar39;
        if (uVar35 == 0) break;
        uVar35 = uVar35 - 1;
        pcVar27 = pcVar39 + 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar27;
      } while (cVar2 != '\0');
      uVar35 = ~uVar35;
      pcVar39 = pcVar27 + -uVar35;
      pcVar27 = &this_00->field_0x1fb7;
      memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      this_00->field_20BB = 2;
      pcVar39 = LoadResourceString(0x25c1,g_module_00807618);
      uVar35 = 0xffffffff;
      do {
        pcVar27 = pcVar39;
        if (uVar35 == 0) break;
        uVar35 = uVar35 - 1;
        pcVar27 = pcVar39 + 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar27;
      } while (cVar2 != '\0');
      uVar35 = ~uVar35;
      pcVar39 = pcVar27 + -uVar35;
      pcVar27 = &this_00->field_0x1fb7;
      memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      pFVar9 = this_00->field_1FB3;
      this_00->field_1F7B = pFVar9->count;
      uVar35 = 0;
      this_00->field_1F73 = 0;
      if (pFVar9->count != 0) {
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          if (DAT_00803144 == *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35)) {
            this_00->field_1F73 = uVar35;
            break;
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 < pFVar9->count);
      }
      pcVar12 = this_00->field_1A73;
      this_00->field_1F97 = *(undefined4 *)&local_c->field_0x24;
      this_00->field_1F9F = local_c->field_002C + 10;
      this_00->field_1F9B = *(int *)(local_c + 1) + *(int *)&local_c->field_0x28;
      iVar21 = pcVar12->field_00A0;
      goto joined_r0x005a5b89;
    case MESS_SHARED_6900|MESS_SHARED_0008:
      if (g_cursorClass_00802A30->field_0493 == CASE_5) break;
      bVar43 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar43 = true;
      }
      if ((!bVar43) ||
         (CFsgsConnection::RequestLadderList
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pCVar37 = g_cursorClass_00802A30, g_cursorClass_00802A30 == (CursorClassTy *)0x0)) break;
      iVar21 = g_cursorClass_00802A30->field_00C9;
      iVar45 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar37->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
      iVar21 = pCVar37->field_00C9;
      iVar45 = pCVar37->field_00C5;
      goto cf_common_exit_005A52AA;
    case MESS_SHARED_6900|MESS_CURSORCLASSTY_0009:
      if ((g_cursorClass_00802A30->field_0493 == CASE_5) || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar37 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 == (CursorClassTy *)0x0) break;
      iVar21 = g_cursorClass_00802A30->field_00C9;
      iVar45 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar37->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
      iVar21 = pCVar37->field_00C9;
      iVar45 = pCVar37->field_00C5;
cf_common_exit_005A52AA:
      CursorClassTy::DrawSprite(pCVar37,iVar45,iVar21);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
      break;
    case MESS_SHARED_6900|MESS_SYSTEMCLASSTY_000A:
      if ((g_cursorClass_00802A30->field_0493 == CASE_5) ||
         (pDVar25 = this_00->field_1AE8, pDVar25 == (DArrayTy *)0x0)) break;
      if (0 < (int)pDVar25->elementSize) {
        pcVar39 = *(char **)pDVar25->growCapacity;
      }
      iVar21 = -1;
      do {
        if (iVar21 == 0) break;
        iVar21 = iVar21 + -1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      if (iVar21 == -2) break;
      if ((int)pDVar25->elementSize < 1) {
        pcVar39 = (char *)0x0;
      }
      else {
        pcVar39 = *(char **)pDVar25->growCapacity;
      }
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
      bVar34 = (char)message->id - 0x13;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = (AnonShape_005A4350_59BACD18 *)CONCAT31(local_c._1_3_,bVar34);
      if ((this_00->field_1EE3 <= (uint)bVar34) || (this_00->field_1EDB == (void *)0x0)) break;
      iVar45 = (uint)bVar34 * 0x24;
      iVar21 = -1;
      pcVar39 = (char *)(iVar45 + 0x14 + (int)this_00->field_1EDB);
      do {
        if (iVar21 == 0) break;
        iVar21 = iVar21 + -1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      if (iVar21 == -2) break;
      if (this_00->field_1B0C != (byte *)0x0) {
        FreeAndNull(&this_00->field_1B0C);
      }
      uVar35 = 0xffffffff;
      pcVar39 = (char *)(iVar45 + 0x14 + (int)this_00->field_1EDB);
      do {
        if (uVar35 == 0) break;
        uVar35 = uVar35 - 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      pbVar40 = Library::DKW::LIB::MemAlloc(~uVar35);
      this_00->field_1B0C = pbVar40;
      uVar35 = 0xffffffff;
      pcVar39 = (char *)(iVar45 + 0x14 + (int)this_00->field_1EDB);
      do {
        pcVar27 = pcVar39;
        if (uVar35 == 0) break;
        uVar35 = uVar35 - 1;
        pcVar27 = pcVar39 + 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar27;
      } while (cVar2 != '\0');
      uVar35 = ~uVar35;
      pbVar36 = (byte *)(pcVar27 + -uVar35);
      memmove(pbVar40, pbVar36, uVar35); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_0008)();
      this_00->field_1A61 = 10;
      this_00->field_1ED2 = 9;
      pSVar13 = this_00->field_1A5B;
      if (pSVar13->field_02E6 == (MMsgTy *)0x0) break;
      puVar23 = local_338;
      for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
        *puVar23 = 0xffffffff;
        puVar23 = puVar23 + 1;
      }
      *(undefined2 *)puVar23 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      MMsgTy::StatePanel(pSVar13->field_02E6,(int)local_338);
      puVar23 = &local_70;
      goto cf_common_exit_005A7F3B;
    case MESS_PRIVIDERTY_693F:
      sub_0059B820(this_00);
      break;
    case MESS_SHARED_6940:
      sub_0059BE50(this_00);
      break;
    case MESS_FSGSTY_6941:
      thunk_FUN_005b6350(this_00,0x6105,0,1);
      this_00->field_1A61 = 0;
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_0008)();
      pMVar33 = this_00->field_1A5B->field_02E6;
      if (pMVar33 != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(pMVar33,1,0,1);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar6 == MESS_ID_MSGOK) {
    FVar3 = this_00->field_1A5F;
    if (FVar3 == CASE_3) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_0008)();
      this_00->field_1A61 = 4;
      if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
        local_dc = 0;
        local_d8 = 0;
        local_e0 = 0x101;
        local_d4 = 0;
        MMsgTy::thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_e0);
      }
      goto cf_common_exit_005A8CA7;
    }
    if (FVar3 == CASE_7) {
      if ((g_cursorClass_00802A30 != (CursorClassTy *)0x0) &&
         (g_cursorClass_00802A30->field_0493 == CASE_5)) goto cf_common_exit_005A8CA7;
      thunk_FUN_005daa60();
      local_290.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_290;
      iVar21 = Library::MSVCRT::__setjmp3(local_290.jumpBuffer,0);
      this_00 = local_20;
      if (iVar21 == 0) {
        FUN_006b6150((uint)DAT_00807362);
        if ((int)this_00->field_1AE8->elementSize < 1) {
          uVar26 = 0;
        }
        else {
          uVar26 = *(undefined4 *)this_00->field_1AE8->growCapacity;
        }
        Library::DKW::DDX::FUN_006b69b0((int *)&g_int_00811764,(int *)&DAT_007cd6f0,0,uVar26,0x20);
        g_currentExceptionFrame = local_290.previous;
      }
      else {
        g_currentExceptionFrame = local_290.previous;
        iVar21 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xc08,0,iVar21,
                                    "%s","FSGSTy::GetMessage(MESS_ID_MSGOK, New Game)");
        if (iVar21 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      if (g_int_00811764 == (int *)0x0) {
        pMVar33 = this_00->field_1A5B->field_02E6;
        if (pMVar33 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar33,0x2594,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
        goto cf_common_exit_005A8CA7;
      }
      FUN_006b6160(local_6b8,(int)(g_int_00811764 + 6));
      local_698 = 0;
      if ((int)this_00->field_1AEC->elementSize < 1) {
        pcVar39 = (char *)0x0;
      }
      else {
        pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
      }
      if ((int)this_00->field_1AE8->elementSize < 1) {
        pcVar27 = (char *)0x0;
      }
      else {
        pcVar27 = *(char **)this_00->field_1AE8->growCapacity;
      }
      CFsgsConnection::CreateGame
                ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,0x17e0,pcVar27,pcVar39,
                 local_6b8);
      pCVar37 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 == (CursorClassTy *)0x0) goto cf_common_exit_005A8CA7;
      iVar21 = g_cursorClass_00802A30->field_00C9;
      iVar45 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar37->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
      iVar21 = pCVar37->field_00C9;
      iVar45 = pCVar37->field_00C5;
      goto cf_common_exit_005A52AA;
    }
    if ((FVar3 != CASE_8) ||
       (((g_cursorClass_00802A30 != (CursorClassTy *)0x0 &&
         (g_cursorClass_00802A30->field_0493 == CASE_5)) ||
        (this_00->field_1EBE == (FSGSTy_field_1EBEDArray *)0x0)))) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar37->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
      CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
    }
    this_00->field_002D = 0x26;
    FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
    pCVar37 = g_cursorClass_00802A30;
    pFVar8 = this_00->field_1EBE;
    if (pFVar8->count <= *(uint *)&this_00->field_0x31) goto cf_common_exit_005A8CA7;
    local_15 = '\x01';
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    local_8 = (uint *)((int)&pFVar8->data->field_0000 +
                      pFVar8->elementSize * *(uint *)&this_00->field_0x31);
    if (local_8 == (uint *)0x0) goto cf_common_exit_005A8CA7;
    pbVar40 = (byte *)(local_8 + 0x13);
    iVar21 = -1;
    pcVar39 = (char *)pbVar40;
    do {
      if (iVar21 == 0) break;
      iVar21 = iVar21 + -1;
      cVar2 = *pcVar39;
      pcVar39 = pcVar39 + 1;
    } while (cVar2 != '\0');
    if (iVar21 != -2) {
      if ((int)this_00->field_1AEC->elementSize < 1) {
        pbVar36 = (byte *)0x0;
      }
      else {
        pbVar36 = *(byte **)this_00->field_1AEC->growCapacity;
      }
      do {
        bVar34 = *pbVar40;
        bVar43 = bVar34 < *pbVar36;
        if (bVar34 != *pbVar36) {
LAB_005a4eca:
          iVar21 = (1 - (uint)bVar43) - (uint)(bVar43 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar34 == 0) break;
        bVar34 = pbVar40[1];
        bVar43 = bVar34 < pbVar36[1];
        if (bVar34 != pbVar36[1]) goto LAB_005a4eca;
        pbVar40 = pbVar40 + 2;
        pbVar36 = pbVar36 + 2;
      } while (bVar34 != 0);
      iVar21 = 0;
LAB_005a4ecf:
      if (iVar21 != 0) {
        local_15 = '\0';
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar37->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
        CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
        pCVar37->field_00D2 = 0;
        pCVar37->field_04DF = -1;
        pMVar33 = this_00->field_1A5B->field_02E6;
        if (pMVar33 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar33,0x258b,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
      }
    }
    puVar24 = local_8;
    if (local_15 == '\0') goto cf_common_exit_005A8CA7;
    thunk_FUN_005daa60();
    FUN_006b61a0(local_22c,(byte *)(puVar24 + 0x17));
    local_3b4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_3b4;
    iVar21 = Library::MSVCRT::__setjmp3(local_3b4.jumpBuffer,0);
    puVar24 = local_8;
    if (iVar21 == 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      Library::DKW::DDX::FUN_006b6a50
                ((int *)&g_int_00811764,(undefined4 *)&DAT_007cd6f0,
                 (in_addr)(((in_addr *)(local_8 + 4))->S_un).S_un_b,local_22c);
    }
    pCVar37 = g_cursorClass_00802A30;
    g_currentExceptionFrame = local_3b4.previous;
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      iVar21 = g_cursorClass_00802A30->field_00C9;
      iVar45 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar37->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar37,CASE_0,iVar45,iVar21);
      CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
    }
    this_00 = local_20;
    if (g_int_00811764 == (int *)0x0) {
      pMVar33 = local_20->field_1A5B->field_02E6;
      if (pMVar33 != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(pMVar33,0x2595,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0
                           ,0,0);
      }
      goto cf_common_exit_005A8CA7;
    }
    CFsgsConnection::JoinGame((CFsgsConnection *)&DAT_00802a90,puVar24[1]);
    this_00 = local_20;
    DAT_0080877f = g_int_00811764[0xe];
    DAT_0080877e = 0;
    DAT_008087be = 0;
    local_20->field_1A61 = 0;
    DAT_008067a0 = 1;
    uVar35 = local_20->field_1EC2;
    if (uVar35 < 0x502) {
      if (uVar35 == 0x501) {
        DAT_00803400 = 5;
      }
      else if (uVar35 == 0x200) {
        DAT_00803400 = 0x14;
      }
      else {
        if (uVar35 != 0x400) goto LAB_005a50be;
        DAT_00803400 = 0x15;
      }
    }
    else if (uVar35 == 0x502) {
      DAT_00803400 = 0xc;
    }
    else {
LAB_005a50be:
      DAT_00803400 = 4;
    }
    thunk_FUN_005b6350(local_20,0x6109,0,1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_00->field_0000->field_0008)((MMObjTy *)this_00);
    pMVar33 = this_00->field_1A5B->field_02E6;
    if (pMVar33 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar33,1,0,1);
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar6 < (MESS_FSGSTY_6150|MESS_ID_CREATE)) {
    if (SVar6 != MESS_FSGSTY_6151) {
      if (SVar6 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
        if (SVar6 == MESS_SHARED_6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;
          thunk_FUN_005b66e0((MTaskTy *)this_00);
        }
        else {
          switch(SVar6) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case MESS_ID_NONE:
            NoneFSGS(this_00,unaff_EDI);
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
        switch(SVar6) {
        case MESS_SHARED_6109:
        case MESS_SHARED_611F:
          StartSystemTy::InitChat(this_00->field_1A5B);
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;
          thunk_FUN_005b66e0((MTaskTy *)this_00);
          break;
        case 0x614f:
          if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
            g_cursorClass_00802A30->field_0493 = CASE_1;
            pCVar37->field_0494 = 0xffff;
            CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
            CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
            pCVar37->field_00D2 = 0;
            pCVar37->field_04DF = -1;
          }
          pSVar13 = this_00->field_1A5B;
          memset(local_19c, 0, 0x20); /* compiler bulk-zero initialization */
          local_19c[2] = this_00->field_0008;
          local_19c[3] = 2;
          local_19c[4] = 0x6941;
          pMVar33 = pSVar13->field_02E6;
          if (pMVar33 == (MMsgTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_00->field_0000->field_0000)(local_19c);
          }
          else {
            MMsgTy::SetMessage(pMVar33,0x2593,'\0',local_19c,(undefined4 *)0x0,(undefined4 *)0x0,
                               (message->arg0).i32,0x2599);
          }
          break;
        case MESS_FSGSTY_6150:
          if (this_00->field_1A5F == CASE_1) {
            if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
              g_cursorClass_00802A30->field_0493 = CASE_1;
              pCVar37->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
              CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
              pCVar37->field_00D2 = 0;
              pCVar37->field_04DF = -1;
            }
            iVar21 = (message->arg0).i32;
            memset(local_160, 0, 0x20); /* compiler bulk-zero initialization */
            local_160[2] = this_00->field_0008;
            local_160[3] = 2;
            local_160[4] = 0x6941;
            switch(iVar21) {
            case 1:
              UVar22 = 0x2580;
              break;
            case 2:
              UVar22 = 0x2581;
              break;
            case 3:
              UVar22 = 0x2582;
              break;
            case 4:
              UVar22 = 0x2583;
              break;
            default:
              UVar22 = 0x2584;
            }
            if ((UVar22 == 0) ||
               (pMVar33 = this_00->field_1A5B->field_02E6, pMVar33 == (MMsgTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)this_00->field_0000->field_0000)(local_160);
            }
            else if (UVar22 == 0x2584) {
              MMsgTy::SetMessage(pMVar33,0x2584,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,
                                 iVar21,0x2599);
            }
            else {
              MMsgTy::SetMessage(pMVar33,UVar22,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,0
                                 ,0);
            }
          }
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (this_00->field_1A5F != CASE_1) goto cf_common_exit_005A8CA7;
    CFsgsConnection::StartBanners((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      puVar7 = this_00->field_1AC0;
      uVar35 = *(uint *)(puVar7 + 10);
      if (uVar35 == 0) {
        uVar35 = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar7 + 4);
      }
      puVar23 = (undefined4 *)FUN_006b4fa0((int *)puVar7);
      for (uVar32 = uVar35 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
        *puVar23 = 0xffffffff;
        puVar23 = puVar23 + 1;
      }
      for (uVar35 = uVar35 & 3; uVar35 != 0; uVar35 = uVar35 - 1) {
        *(undefined1 *)puVar23 = 0xff;
        puVar23 = (undefined4 *)((int)puVar23 + 1);
      }
      ccFntTy::SetSurf(this_00->field_1A73,(int)this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar48 = -1;
      iVar47 = -1;
      uVar35 = 2;
      iVar45 = -1;
      iVar21 = -1;
      puVar24 = (uint *)LoadResourceString(0x25b6,g_module_00807618);
      ccFntTy::WrTxt(this_00->field_1A73,puVar24,iVar21,iVar45,uVar35,iVar47,iVar48);
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      CFsgsConnection::RequestDatafile((CFsgsConnection *)&DAT_00802a90,"st.inf");
      goto cf_common_exit_005A8CA7;
    }
    goto LAB_005a6d57;
  }
  if (MESS_WAITTY_6333 < SVar6) {
    if (SVar6 == MESS_SHARED_6334) {
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1BB9,
                 (int)message,0);
    }
    else if (SVar6 == MESS_WAITTY_6335) {
      this_00->field_1C6A = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
      if (this_00->field_1C4E != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,this_00->field_1C52,
                   this_00->field_1C66,this_00->field_1C6A);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar6 == MESS_WAITTY_6333) {
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B28,
               (int)message,0);
    goto cf_common_exit_005A8CA7;
  }
  switch(SVar6) {
  case MESS_FSGSTY_6150|MESS_ID_CREATE:
    if (this_00->field_1A5F != CASE_2) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar37->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
      CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
    }
    pSVar13 = this_00->field_1A5B;
    puVar23 = local_2c8;
    for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar23 = 0x10001;
      puVar23 = puVar23 + 1;
    }
    *(undefined2 *)puVar23 = 1;
    pMVar33 = pSVar13->field_02E6;
    if (pMVar33 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(pMVar33,(int)local_2c8);
    }
    switch((message->arg0).i32) {
    case 2:
      UVar22 = 0x258b;
      break;
    case 3:
      UVar22 = 0x258c;
      break;
    case 4:
      UVar22 = 0x258d;
      break;
    default:
      UVar22 = 0x2589;
      break;
    case 7:
      UVar22 = 0x25c2;
    }
    if ((UVar22 == 0) || (pMVar33 = this_00->field_1A5B->field_02E6, pMVar33 == (MMsgTy *)0x0))
    goto cf_common_exit_005A8CA7;
    if (UVar22 == 0x2589) {
      MMsgTy::SetMessage(pMVar33,0x2589,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,
                         (message->arg0).i32,0x2599);
      goto cf_common_exit_005A8CA7;
    }
    break;
  case MESS_FSGSTY_6150|MESS_SHARED_0003:
    if ((this_00->field_1A5F == CASE_2) || (this_00->field_1A5F == CASE_4)) {
      if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar37->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
        CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
        pCVar37->field_00D2 = 0;
        pCVar37->field_04DF = -1;
      }
      local_100 = "Profile\\Age";
      local_fc = "Profile\\Sex";
      local_f8 = "Profile\\Location";
      local_f4 = "Profile\\Description";
      if (this_00->field_1A5F == CASE_2) {
        CFsgsConnection::RequestInfo((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,4,&local_100);
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
      thunk_FUN_0055bf20(&DAT_00802a90,this_00->field_1A67);
      if ((DArrayTy *)this_00->field_1E9E != (DArrayTy *)0x0) {
        FUN_006b5570((DArrayTy *)this_00->field_1E9E);
      }
      pDVar25 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,100,100);
      this_00->field_1E9E = &pDVar25->flags;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_0008)();
      this_00->field_1A61 = 6;
      if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
        local_ac = 0;
        local_a8 = 0;
        local_b0 = 0x10101;
        local_a4 = 0;
        MMsgTy::thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_b0);
      }
    }
    goto cf_common_exit_005A8CA7;
  case 0x6154:
    if (this_00->field_1A5F == CASE_5) {
      if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar37->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
        CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
        pCVar37->field_00D2 = 0;
        pCVar37->field_04DF = -1;
      }
      uVar35 = (message->arg0).u32;
      if (uVar35 == 0) {
        this_00->field_002D = 0x6952;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_0000)(&this_00->field_0x1d);
      }
      else if ((uVar35 != 0) && (uVar35 < 3)) {
        puVar23 = local_300;
        for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar23 = 0x10001;
          puVar23 = puVar23 + 1;
        }
        pSVar13 = this_00->field_1A5B;
        *(undefined2 *)puVar23 = 1;
        pMVar33 = pSVar13->field_02E6;
        if (pMVar33 != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(pMVar33,(int)local_300);
        }
        pMVar33 = this_00->field_1A5B->field_02E6;
        if (pMVar33 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar33,(-(uint)((message->arg0).u32 != 1) & 10) + 0x258e,'\0',
                             (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
      }
    }
    goto cf_common_exit_005A8CA7;
  case MESS_FSGSTY_6150|MESS_SHARED_0005:
    if (this_00->field_1A5F != CASE_4) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar37->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
      CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
    }
    if ((message->arg0).u32 == 0) goto LAB_005a67e1;
    if (6 < (message->arg0).u32) goto cf_common_exit_005A8CA7;
    puVar23 = local_354;
    for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar23 = 0x10001;
      puVar23 = puVar23 + 1;
    }
    *(undefined2 *)puVar23 = 1;
    pMVar33 = this_00->field_1A5B->field_02E6;
    if (pMVar33 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(pMVar33,(int)local_354);
    }
    pMVar33 = this_00->field_1A5B->field_02E6;
    if (pMVar33 == (MMsgTy *)0x0) goto cf_common_exit_005A8CA7;
    switch((message->arg0).u32) {
    case 2:
      UVar22 = 0x2597;
      break;
    case 3:
      UVar22 = 0x2596;
      break;
    case 4:
      UVar22 = 0x25c3;
      break;
    case 5:
      UVar22 = 0x25c4;
      break;
    case 6:
      UVar22 = 0x25c5;
      break;
    default:
      UVar22 = 0x258f;
    }
    break;
  case MESS_FSGSTY_6156:
    if (this_00->field_1A5F != CASE_6) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar37->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
      CursorClassTy::DrawSprite(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
    }
    UVar22 = 0;
    if ((message->arg0).u32 == 0xd) {
      UVar22 = 0x2590;
    }
    else if ((message->arg0).u32 == 0xf) {
      UVar22 = 0x2591;
    }
    if ((UVar22 == 0) || (pMVar33 = this_00->field_1A5B->field_02E6, pMVar33 == (MMsgTy *)0x0))
    goto cf_common_exit_005A8CA7;
    break;
  default:
    goto cf_common_exit_005A8CA7;
  }
  MMsgTy::SetMessage(pMVar33,UVar22,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
cf_common_exit_005A8CA7:
  g_currentExceptionFrame = local_21c.previous;
  iVar21 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar21;
}

