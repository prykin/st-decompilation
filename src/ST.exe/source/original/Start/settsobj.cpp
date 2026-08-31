#include "st/generated.hpp"
// Generated translation unit: source/original/Start/settsobj.cpp

// 005D4E90 SettMapSTy::SetListCtrls
#line 4 "decomp/ST.exe/functions/005D4E90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::SetListCtrls */

void __thiscall st::fn_005D4E90(SettMapSTy *this)

{
  DArrayTy *pDVar1;
  AnonPointee_SettMapSTy_0000 *pAVar2;
  char cVar4;
  SettMapSTy *pSVar5;
  int iVar6;
  uint *puVar6;
  int iVar8;
  int iVar7;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  InternalExceptionFrame local_58;
  SettMapSTy *local_14;
  int local_10;
  int local_c;
  cMf32 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar6 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pSVar5 = local_14;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\settsobj.cpp"),0x3b,0,iVar6,st::mutable_c_string("%s"),
                               "SettMapSTy::SetListCtrls");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Start\\settsobj.cpp"),0x3b);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_14->field_1E26 == '\x02') {
    local_8 = (cMf32 *)local_14->field_1F3F;
  }
  else {
    local_8 = local_14->field_1F43;
  }
  local_14->field_0029 = 2;
  local_14->field_002D = 0x20;
  local_c = 0;
  local_10 = 0x7e3;
  do {
    iVar10 = 0;
    iVar8 = local_10;
    do {
      if ((&pSVar5->field_0000)[iVar8 + iVar10] != nullptr) {
        pDVar1 = pSVar5->field_1F84;
        if ((pDVar1 == nullptr) ||
           (uVar9 = pSVar5->field_1F88 + local_c, pDVar1->count <= uVar9)) {
          pcVar11 = nullptr;
        }
        else {
          pcVar11 = DArrayAt<char>(pDVar1, uVar9);
        }
        pAVar2 = (&pSVar5->field_0000)[iVar8 + iVar10];
        pSVar5->field_0031 = 0;
        pSVar5->field_0025 = st::machine_word_boundary_cast<undefined4>(pAVar2);
        if (pcVar11 != nullptr) {
          switch(iVar10) {
          case 0:
            if (*(DArrayTy **)(pcVar11 + 0x50) != nullptr) {
              st::fn_006AE110(*(DArrayTy **)(pcVar11 + 0x50));
            }
            if (pSVar5->field_1E26 == '\x02') {
              /* ST_CALLSITE[005D4F81]: CALL 0x0040466a; direct=0040466A CreateStrategList */
              puVar6 = st::fn_0040466A((int)local_8,(uint)(byte)pcVar11[2],0xffffffff);
            }
            else {
              /* ST_CALLSITE[005D4F99]: CALL 0x00403f44; direct=00403F44 CreateOpponentList */
              puVar6 = st::fn_00403F44(local_8,(uint)(byte)pcVar11[3],DAT_0080995c);
            }
            *(uint **)(pcVar11 + 0x50) = puVar6;
            if (puVar6[3] <= (uint)(byte)pcVar11[5]) {
              pcVar11[5] = (char)puVar6[3];
            }
            if ((puVar6[3] == 0) && (pcVar11[4] == '\x04')) {
              pcVar11[4] = '\x01';
            }
            break;
          case 1:
          case 2:
            if ((pSVar5->field_1E26 != '\x02') && (*pcVar11 != '\0')) {
              cVar4 = pcVar11[4];
joined_r0x005d502e:
              if (cVar4 != '\0') goto LAB_005d5030;
            }
            break;
          case 3:
            if (((pSVar5->field_1E26 != '\x02') || (pcVar11[4] != '\x02')) &&
               (*(int *)(*(int *)(pcVar11 + 0x50) + 0xc) != 0)) {
LAB_005d5030:
              pSVar5->field_0031 = 1;
            }
            break;
          case 5:
            if ((((DAT_0080874d != -1) && (*pcVar11 != '\0')) && (pcVar11[4] != '\0')) &&
               (pSVar5->field_1E26 != '\x02')) {
              if ((pcVar11[4] == '\x02') &&
                 (cVar4 = DAT_00808a8f, *(int *)(pcVar11 + 6) == DAT_0080877f))
              goto joined_r0x005d502e;
              goto LAB_005d5030;
            }
          }
        }
        /* ST_CALLSITE[005D5040]: CALL dword ptr [EDX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
        STStructuralVirtualCall<void>(STField<int *>(pSVar5,0xC), 0x18, &pSVar5->field_0x1d);
        iVar8 = local_10;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 8);
    local_10 = iVar8 + 8;
    local_c = local_c + 1;
    if (0x832 < local_10) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }
  } while( true );
}

// 005D5160 SettMapSTy::PrepPlList
#line 4 "decomp/ST.exe/functions/005D5160/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::PrepPlList
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PrepPlList(SettMapSTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005D5445 RET | 005D548E RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005D5160(SettMapSTy *this)

{
  char cVar1;
  byte bVar2;
  int iVar4;
  void *pvVar4;
  DArrayTy *pDVar6;
  int iVar6;
  byte *pbVar7;
  int iVar5;
  DArrayTy *pDVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  SettMapTy *this_00;
  bool bVar14;
  InternalExceptionFrame local_b8;
  byte local_74;
  byte local_73;
  byte local_72;
  byte bStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  uint local_6e;
  char local_6a [64];
  byte local_2a;
  uint local_29;
  byte local_25;
  uint *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  byte *local_14;
  cMf32 *local_10;
  byte *local_c;
  SettMapSTy *local_8;

  this->field_211C = DAT_008087c6;
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_8 = this;

  iVar4 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  this_00 = reinterpret_cast<SettMapTy *>(local_8);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_b8.previous;

    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\settsobj.cpp"),0x86,0,iVar4,st::mutable_c_string("%s"),
                               "SettMapSTy::PrepPlList");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\settsobj.cpp"),0x86);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_8->field_1E26 == '\x02') {
    local_10 = (cMf32 *)local_8->field_1F3F;
  }
  else {
    local_10 = local_8->field_1F43;
  }
  pDVar8 = local_8->field_1F84;
  if (pDVar8 != nullptr) {
    uVar10 = 0;
    if (0 < (int)pDVar8->count) {
      bVar14 = pDVar8->count != 0;
      do {
        if (bVar14) {
          pvVar4 = DArrayAt<void>(pDVar8, uVar10);
        }
        else {
          pvVar4 = nullptr;
        }
        if ((pvVar4 != nullptr) && (STField<DArrayTy *>(pvVar4,0x50) != nullptr)) {
          st::fn_006AE110(STField<DArrayTy *>(pvVar4,0x50));
        }
        pDVar8 = ((SettMapSTy *)this_00)->field_1F84;
        uVar10 = uVar10 + 1;
        bVar14 = uVar10 < pDVar8->count;
      } while ((int)uVar10 < (int)pDVar8->count);
    }
    st::fn_006AE110(((SettMapSTy *)this_00)->field_1F84);
  }
  pDVar6 = st::fn_006AE290(nullptr,8,0x60,8);
  ((SettMapSTy *)this_00)->field_1F84 = pDVar6;
  local_c = &g_bulkInitializedRecords_008087C7[0].field_0021;
  do {
    pbVar11 = local_c;
    bVar2 = local_c[1];
    if (bVar2 != 0xff) {
      local_74 = 1;
      local_73 = 1;
      if (((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (*local_c == 3)) {
        bStack_71 = 1;
      }
      else {
        bStack_71 = *local_c;
      }
      local_72 = bVar2;
      if (this_00->field_1E26 == CASE_2) {
        /* ST_CALLSITE[005D528B]: CALL 0x0040466a; direct=0040466A CreateStrategList */
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_24 = st::fn_0040466A((int)local_10,
                                     CONCAT12(uStack_70,CONCAT11(bStack_71,bVar2)) & 0xff,0xffffffff
                                    );
      }
      else {
        /* ST_CALLSITE[005D52A6]: CALL 0x00403f44; direct=00403F44 CreateOpponentList */
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_24 = st::fn_00403F44(local_10,CONCAT12(uStack_6f,CONCAT11(uStack_70,bStack_71)) &
                                               0xff,DAT_0080995c);
      }
      uVar10 = 0xffffffff;
      pcVar12 = &CHAR_00h_00807ddd;
      do {
        pcVar13 = pcVar12;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar12 = pcVar13 + -uVar10;
      pcVar13 = local_6a;
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      cVar1 = *(char *)(pbVar11 + -0x21);
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (cVar1 == '\0') {
        uStack_70 = 1;
      }
      else {
        uStack_70 = 4;
        uStack_6f = 0;
        if (local_8->field_1E26 == '\x02') {
          uVar9 = 0;
          uVar10 = local_24[3];
          if (0 < (int)uVar10) {
            local_14 = pbVar11 + -0x20;
            do {
              if (uVar9 < uVar10) {
                iVar6 = local_24[2] * uVar9 + local_24[7];
              }
              else {
                iVar6 = 0;
              }
              pbVar7 = (byte *)(iVar6 + 0x4c);
              pbVar11 = local_14;
              do {
                bVar2 = *pbVar7;
                bVar14 = bVar2 < *pbVar11;
                if (bVar2 != *pbVar11) {
LAB_005d534b:
                  iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_005d5350;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar14 = bVar2 < pbVar11[1];
                if (bVar2 != pbVar11[1]) goto LAB_005d534b;
                pbVar7 = pbVar7 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar2 != 0);
              iVar6 = 0;
LAB_005d5350:
              pbVar11 = local_c;
              if (iVar6 == 0) {
                uStack_6f = (undefined1)uVar9;
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar10);
          }
        }
      }
      local_2a = pbVar11[2];
      local_20 = *(uint *)(pbVar11 + 3);
      local_6e = DAT_0080877f;
      local_1c = *(uint *)(pbVar11 + 7);
      local_18 = *(uint *)(pbVar11 + 0xb);
      local_29 = 0;
      local_25 = 1;

      st::fn_006AE1C0(local_8->field_1F84,&local_74);
      this_00 = reinterpret_cast<SettMapTy *>(local_8);
    }
    local_c = pbVar11 + 0x51;
  } while ((int)local_c < 0x808a70);
  pDVar8 = this_00->field_1F84;
  uVar9 = 0;
  uVar10 = pDVar8->count;
  if (0 < (int)uVar10) {
    bVar14 = uVar10 != 0;
    do {
      if (bVar14) {
        pvVar4 = DArrayAt<void>(pDVar8, uVar9);
      }
      else {
        pvVar4 = nullptr;
      }
      if ((pvVar4 != nullptr) && (STField<char>(pvVar4,4) == '\x01')) {
        DAT_0080874d = STField<undefined1>(pvVar4,2);
        STField<undefined1>(pvVar4,4) = 2;
        DAT_0080874e = STField<undefined1>(pvVar4,3);
        uVar10 = 0xffffffff;
        pcVar12 = &CHAR_00h_00807ddd;
        goto code_r0x005d540b;
      }
      uVar9 = uVar9 + 1;
      bVar14 = uVar9 < uVar10;
    } while ((int)uVar9 < (int)uVar10);
  }
  goto LAB_005d5426;
  while( true ) {
    uVar10 = uVar10 - 1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
    if (cVar1 == '\0') break;
code_r0x005d540b:
    pcVar13 = pcVar12;
    if (uVar10 == 0) break;
  }
  uVar10 = ~uVar10;
  pcVar12 = pcVar13 + -uVar10;
  pcVar13 = (char *)((int)pvVar4 + 10);
  for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar10 = uVar10 & 3; this_00 = reinterpret_cast<SettMapTy *>(local_8), uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
LAB_005d5426:
  /* ST_CALLSITE[005D5428]: CALL 0x00402a9a; direct=00402A9A SettMapTy::PaintSC */
  st::fn_00402A9A(this_00);
  /* ST_CALLSITE[005D5431]: CALL dword ptr [EDX + 0x20]; [STIndirectCallsiteApplier] exact slot 0x20; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/SettMapTy */
  this_00->vfunc_20();
  g_currentExceptionFrame = local_b8.previous;
  return;
}

// 005D5560 SettMapSTy::GetMessage
#line 4 "decomp/ST.exe/functions/005D5560/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404D7C|005D5560; family_names=SettMapSTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:10,18:9,1c:28} */

int __thiscall st::fn_005D5560(SettMapSTy *this,STMessage *message)

{
  alignas(4) byte st_stack_frame[368];

  SettMapTy_field_1E26State SVar1;
  byte bVar2;
  STMessageId SVar4;
  DArrayTy *pDVar5;
  MMsgTy *pMVar6;
  MMMObjTy *pMVar7;
  dword dVar8;
  int *piVar9;
  StartSystemTy *pSVar11;
  SettMapTy *this_00;
  int iVar12;
  int iVar13;
  void *pvVar13;
  char *pcVar14;
  byte *pbVar15;
  DArrayTy *pDVar16;
  void *pvVar17;
  char *local_EAX_3231;
  uint *puVar18_mg0;
  char *local_EAX_3347;
  uint *puVar18_mg1;
  char *local_EAX_3503;
  uint *puVar18_mg2;
  char *local_EAX_3868;
  char *local_EAX_3994;
  AnonNested_005D5560_0050_EBFA0A51 *pAVar18;
  char *pcVar15;
  uint uVar19;
  ccFntTy *pcVar20;
  char *local_EAX_6384;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar21;
  int iVar22;
  byte bVar22;
  int iVar23;
  byte *puVar24;
  char cVar25;
  SettMapTy_field_2179State SVar26;
  uint uVar27;
  uint uVar28;
  byte *puVar29;
  BulkInitializedRecord_008087C7 *pBVar30;
  char *pcVar31;
  char *pcVar32;
  AnonShape_005CBBE0_2D1CAA09 *pAVar33;
  uint *puVar34;
  bool bVar35;
  int iVar36;
  InternalExceptionFrame local_c8;
  uint local_84 [2];
  uint local_7c;
  undefined1 uStack_79;
  uint local_78;
  uint local_74;
  uint local_64 [8];
  SettMapTy *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  byte *local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  AnonShape_005D5560_9031BF1B *local_14;
  byte local_d;
  uint local_c;
  char *local_8;
  uint SVar3;
  uint temp_5fb73ea9b4;

  local_44 = reinterpret_cast<SettMapTy *>(this);

  iVar12 = st::fn_006E51B0(this->field_0010);
  this->field_0061 = iVar12;
  local_c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c8;

  iVar13 = st::fn_0072D7F0(local_c8.jumpBuffer,0);
  this_00 = local_44;
  if (iVar13 != 0) {
    g_currentExceptionFrame = local_c8.previous;

    iVar22 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\settsobj.cpp"),0x27d,0,iVar13,
                                st::mutable_c_string("%s"),"SettMapSTy::GetMessage");
    if (iVar22 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar13,0,st::mutable_c_string("E:\\__titans\\Start\\settsobj.cpp"),0x27d);
    return 0xffff;
  }
  /* ST_CALLSITE[005D55B7]: CALL 0x0040327e; direct=0040327E SettMapTy::GetMessage */
  st::fn_0040327E(local_44,message);
  SVar4 = message->id;
  if (SVar4 < MESS_SETTMAPSTY_6505) {
    if (SVar4 == MESS_SHARED_6504) {
      uVar28 = (message->arg0).u32;
      if ((uVar28 != 0xffffffff) && (pDVar16 = this_00->field_1F84, pDVar16 != nullptr)) {
        pDVar5 = this_00->field_1E2F;
        if (uVar28 < pDVar5->count) {
          pvVar13 = DArrayAt<void>(pDVar5, uVar28);
        }
        else {
          pvVar13 = nullptr;
        }
        cVar25 = STField<char>(pvVar13,0x104);
        if ((message->arg1).u32 < pDVar16->count) {
          pvVar13 = DArrayAt<void>(pDVar16, (message->arg1).u32);
        }
        else {
          pvVar13 = nullptr;
        }
        if (pvVar13 != nullptr) {
          STField<char>(pvVar13,3) = cVar25;
        }
        pDVar16 = this_00->field_1F84;
        uVar28 = (message->arg1).u32 + 1;
        bVar35 = uVar28 < pDVar16->count;
        if ((int)uVar28 < (int)pDVar16->count) {
          do {
            if (bVar35) {
              pcVar14 = DArrayAt<char>(pDVar16, uVar28);
            }
            else {
              pcVar14 = nullptr;
            }
            if ((pcVar14 == nullptr) || (*pcVar14 != '\0')) break;
            pcVar14[3] = cVar25;
            pDVar16 = this_00->field_1F84;
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < pDVar16->count;
          } while ((int)uVar28 < (int)pDVar16->count);
        }
        /* ST_CALLSITE[005D57EF]: CALL dword ptr [EDX + 0x2c] */
        (*this_00->vtable->SetListCtrls)(reinterpret_cast<SettMapSTy *>(this_00));
      }
    }
    else if (SVar4 == MESS_SHARED_6501) {
      uVar28 = (message->arg0).u32;
      if ((uVar28 != 0xffffffff) && (pDVar16 = this_00->field_1F84, pDVar16 != nullptr)) {
        pDVar5 = this_00->field_1E2F;
        if (uVar28 < pDVar5->count) {
          pvVar13 = DArrayAt<void>(pDVar5, uVar28);
        }
        else {
          pvVar13 = nullptr;
        }
        cVar25 = STField<char>(pvVar13,0x104);
        if ((message->arg1).u32 < pDVar16->count) {
          pvVar13 = DArrayAt<void>(pDVar16, (message->arg1).u32);
        }
        else {
          pvVar13 = nullptr;
        }
        if (pvVar13 != nullptr) {
          STField<char>(pvVar13,0x4a) = cVar25;
        }
        pDVar16 = this_00->field_1F84;
        uVar28 = (message->arg1).u32 + 1;
        bVar35 = uVar28 < pDVar16->count;
        if ((int)uVar28 < (int)pDVar16->count) {
          do {
            if (bVar35) {
              pcVar14 = DArrayAt<char>(pDVar16, uVar28);
            }
            else {
              pcVar14 = nullptr;
            }
            if ((pcVar14 == nullptr) || (*pcVar14 != '\0')) break;
            pcVar14[0x4a] = cVar25;
            pDVar16 = this_00->field_1F84;
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < pDVar16->count;
          } while ((int)uVar28 < (int)pDVar16->count);
        }
        /* ST_CALLSITE[005D574C]: CALL dword ptr [EAX + 0x2c] */
        (*this_00->vtable->SetListCtrls)(reinterpret_cast<SettMapSTy *>(this_00));
      }
    }
    else if (((SVar4 == MESS_PRIVIDERTY_6502) &&
             (uVar28 = (message->arg0).u32, uVar28 != 0xffffffff)) &&
            (pDVar16 = this_00->field_1F84, pDVar16 != nullptr)) {
      pDVar5 = this_00->field_1E2F;
      if (uVar28 < pDVar5->count) {
        pvVar13 = DArrayAt<void>(pDVar5, uVar28);
      }
      else {
        pvVar13 = nullptr;
      }
      local_d = STField<byte>(pvVar13,0x104);
      if ((message->arg1).u32 < pDVar16->count) {
        pvVar13 = DArrayAt<void>(pDVar16, (message->arg1).u32);
      }
      else {
        pvVar13 = nullptr;
      }
      if (pvVar13 != nullptr) {
        if (STField<byte>(pvVar13,2) != 0xff) {
          st::fn_00403F67(&DAT_00807620,STField<byte>(pvVar13,2));
        }
        STField<byte>(pvVar13,2) = local_d;
        if (STField<char>(pvVar13,4) == '\x02') {
          DAT_0080874d = local_d;
        }
        pDVar16 = this_00->field_1F84;
        uVar28 = (message->arg1).u32 + 1;
        bVar35 = uVar28 < pDVar16->count;
        if ((int)uVar28 < (int)pDVar16->count) {
          do {
            if (bVar35) {
              pcVar14 = DArrayAt<char>(pDVar16, uVar28);
            }
            else {
              pcVar14 = nullptr;
            }
            if ((pcVar14 == nullptr) || (*pcVar14 != '\0')) break;
            pcVar14[2] = local_d;
            pDVar16 = this_00->field_1F84;
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < pDVar16->count;
          } while ((int)uVar28 < (int)pDVar16->count);
        }
        /* ST_CALLSITE[005D56A9]: CALL dword ptr [EDX + 0x2c] */
        (*this_00->vtable->SetListCtrls)(reinterpret_cast<SettMapSTy *>(this_00));
        goto LAB_005d5ff8;
      }
    }
  }
  else if (SVar4 == MESS_SETTMAPSTY_6505) {
    uVar28 = (message->arg0).u32;
    if ((uVar28 != 0xffffffff) && (pDVar16 = this_00->field_1F84, pDVar16 != nullptr)) {
      pDVar5 = this_00->field_1E2F;
      if (uVar28 < pDVar5->count) {
        pvVar13 = DArrayAt<void>(pDVar5, uVar28);
      }
      else {
        pvVar13 = nullptr;
      }
      uVar28 = pDVar16->count;
      if ((message->arg1).u32 < uVar28) {
        pvVar17 = DArrayAt<void>(pDVar16, (message->arg1).u32);
      }
      else {
        pvVar17 = nullptr;
      }
      if (pvVar17 != nullptr) {
        if ((STField<int>(pvVar13,0x104) == 2) && (uVar27 = 0, 0 < (int)uVar28)) {
          bVar35 = uVar28 != 0;
          do {
            if (bVar35) {
              pvVar17 = DArrayAt<void>(pDVar16, uVar27);
            }
            else {
              pvVar17 = nullptr;
            }
            if ((pvVar17 != nullptr) && (STField<char>(pvVar17,4) == '\x02')) {
              SVar1 = this_00->field_1E26;
              if ((SVar1 == CASE_6) || ((SVar1 == CASE_1 || (SVar1 == CASE_2)))) {
                STField<undefined1>(pvVar17,4) = 4;
                STField<undefined1>(pvVar17,5) = 0;
              }
              else {
                STField<undefined1>(pvVar17,4) = 1;
              }
              break;
            }
            uVar27 = uVar27 + 1;
            bVar35 = uVar27 < uVar28;
          } while ((int)uVar27 < (int)uVar28);
        }
        pDVar16 = this_00->field_1F84;
        if ((message->arg1).u32 < pDVar16->count) {
          pvVar17 = DArrayAt<void>(pDVar16, (message->arg1).u32);
        }
        else {
          pvVar17 = nullptr;
        }
        cVar25 = STField<char>(pvVar13,0x104);
        STField<char>(pvVar17,4) = cVar25;
        STField<undefined1>(pvVar17,5) = STField<undefined1>(pvVar13,0x108);
        if (cVar25 == '\0') {
          if (STField<byte>(pvVar17,2) != 0xff) {
            st::fn_00403F67(&DAT_00807620,STField<byte>(pvVar17,2));
          }
          STField<undefined1>(pvVar17,2) = 0xff;
        }
        DAT_0080874d = 0xff;
        pDVar16 = this_00->field_1F84;
        uVar27 = 0;
        uVar28 = pDVar16->count;
        if (0 < (int)uVar28) {
          bVar35 = uVar28 != 0;
          do {
            if (bVar35) {
              pvVar13 = DArrayAt<void>(pDVar16, uVar27);
            }
            else {
              pvVar13 = nullptr;
            }
            if (((pvVar13 != nullptr) && (STField<char>(pvVar13,4) == '\x02')) &&
               (STField<int>(pvVar13,6) == DAT_0080877f)) {
              DAT_0080874d = STField<byte>(pvVar13,2);
              break;
            }
            uVar27 = uVar27 + 1;
            bVar35 = uVar27 < uVar28;
          } while ((int)uVar27 < (int)uVar28);
        }
        /* ST_CALLSITE[005D5FF5]: CALL dword ptr [EAX + 0x2c] */
        (*this_00->vtable->SetListCtrls)(reinterpret_cast<SettMapSTy *>(this_00));
LAB_005d5ff8:
        /* ST_CALLSITE[005D5FFA]: CALL 0x00402a9a; direct=00402A9A SettMapTy::PaintSC */
        st::fn_00402A9A(this_00);
      }
    }
  }
  else if (SVar4 == MESS_FSGSTY_694A) {
    local_30 = 0x1010101;
    local_2c = (undefined1 *)0x1010101;
    if (this_00->field_1F84 != nullptr) {
      DAT_00808aa9 = 1;
      DAT_008087c6 = '\0';
      DAT_0080874f = 0;
      pBVar30 = g_bulkInitializedRecords_008087C7;
      for (iVar12 = 0xa2; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined4 *)pBVar30 = 0;
        pBVar30 = reinterpret_cast<BulkInitializedRecord_008087C7 *>(reinterpret_cast<byte *>(pBVar30) + 0x4);
      }
      pbVar15 = &g_bulkInitializedRecords_008087C7[0].field_0022;
      do {
        pbVar15[-1] = 0;
        *pbVar15 = 0xff;
        pbVar15 = pbVar15 + 0x51;
      } while ((int)pbVar15 < 0x808a71);
      pDVar16 = this_00->field_1F84;
      uVar27 = 0;
      uVar28 = pDVar16->count;
      if (0 < (int)uVar28) {
        bVar35 = uVar28 != 0;
        do {
          if (bVar35) {
            pcVar14 = DArrayAt<char>(pDVar16, uVar27);
          }
          else {
            pcVar14 = nullptr;
          }
          if (((pcVar14 != nullptr) && (*pcVar14 != '\0')) && (pcVar14[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar14[2]) = 0;
          }
          uVar27 = uVar27 + 1;
          bVar35 = uVar27 < uVar28;
        } while ((int)uVar27 < (int)uVar28);
      }
      local_c = 0;
      if (0 < (int)uVar28) {
        bVar35 = uVar28 != 0;
        do {
          if (bVar35) {
            pcVar14 = DArrayAt<char>(pDVar16, local_c);
          }
          else {
            pcVar14 = nullptr;
          }
          if (((pcVar14 != nullptr) && (*pcVar14 != '\0')) &&
             ((pcVar14[4] != '\0' && ((pcVar14[4] != '\x01' || (this_00->field_1E26 == CASE_2))))))
          {
            iVar12 = *(int *)(pcVar14 + 0x50);
            if ((uint)(byte)pcVar14[5] < STField<uint>(iVar12,0xC)) {
              local_8 = (char *)(STField<int>(iVar12,0x8) * (uint)(byte)pcVar14[5] +
                                STField<int>(iVar12,0x1C));
            }
            else {
              local_8 = nullptr;
            }
            DAT_008087c6 = DAT_008087c6 + '\x01';
            if (pcVar14[2] == -1) {
              iVar12 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar12) != '\0') {
                  pcVar14[2] = (char)iVar12;
                  *(undefined1 *)((int)&local_30 + iVar12) = 0;
                  break;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < 8);
            }
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0022 = pcVar14[2];
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0021 = pcVar14[3];
            uVar28 = 0xffffffff;
            pcVar32 = &CHAR_00h_008016a0;
            do {
              pcVar31 = pcVar32;
              if (uVar28 == 0) break;
              uVar28 = uVar28 - 1;
              pcVar31 = pcVar32 + 1;
              cVar25 = *pcVar32;
              pcVar32 = pcVar31;
            } while (cVar25 != '\0');
            uVar28 = ~uVar28;
            local_14 = reinterpret_cast<AnonShape_005D5560_9031BF1B *>(&g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0x1);
            pcVar32 = pcVar31 + -uVar28;
            pcVar31 = (char *)&g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0x1;
            memmove(pcVar31, pcVar32, uVar28); /* compiler REP MOVS byte copy */
            uVar27 = 0;
            if (pcVar14[4] == '\x02') {
              if (*pcVar14 != '\0') {
                *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)pcVar14[2]) = 0;
                DAT_0080874d = pcVar14[2];
                DAT_0080874e = pcVar14[3];
              }
            }
            else if (pcVar14[4] == '\x04') {
              *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)pcVar14[2]) = 1;
              if (local_8 == nullptr) {
                uVar28 = 0xffffffff;
                local_8 = (char *)&g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0x1;
                pcVar32 = &CHAR_00h_008016a0;
                do {
                  pcVar31 = pcVar32;
                  if (uVar28 == 0) break;
                  uVar28 = uVar28 - 1;
                  pcVar31 = pcVar32 + 1;
                  cVar25 = *pcVar32;
                  pcVar32 = pcVar31;
                } while (cVar25 != '\0');
                uVar28 = ~uVar28;
                pcVar32 = pcVar31 + -uVar28;
                pcVar31 = local_8;
                memmove(pcVar31, pcVar32, uVar28); /* compiler REP MOVS byte copy */
                uVar27 = 0;
              }
              else {
                pcVar32 = local_8 + 0x4c;
                uVar28 = 0xffffffff;
                local_8 = (char *)&g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0x1;
                do {
                  pcVar31 = pcVar32;
                  if (uVar28 == 0) break;
                  uVar28 = uVar28 - 1;
                  pcVar31 = pcVar32 + 1;
                  cVar25 = *pcVar32;
                  pcVar32 = pcVar31;
                } while (cVar25 != '\0');
                uVar28 = ~uVar28;
                pcVar32 = pcVar31 + -uVar28;
                pcVar31 = local_8;
                memmove(pcVar31, pcVar32, uVar28); /* compiler REP MOVS byte copy */
                uVar27 = 0;
              }
            }
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0023 = pcVar14[0x4a];
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0024 =
                 *(uint *)(pcVar14 + 0x54);
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0028 =
                 *(uint *)(pcVar14 + 0x58);
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_002C =
                 *(uint *)(pcVar14 + 0x5c);
          }
          pDVar16 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar35 = local_c < pDVar16->count;
        } while ((int)local_c < (int)pDVar16->count);
      }
      /* ST_CALLSITE[005D5AC0]: CALL 0x0040591b; direct=0040591B STAppC::sub_0056EE90 */
      st::fn_0040591B(reinterpret_cast<STAppC *>(&DAT_00807620));
      pcVar14 = &CHAR_00h_00808ab0;
      for (iVar12 = 0x3a8; iVar12 != 0; iVar12 = iVar12 + -1) {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14[2] = '\0';
        pcVar14[3] = '\0';
        pcVar14 = pcVar14 + 4;
      }
      DAT_00808aaf = 0;
      pDVar16 = this_00->field_1F84;
      local_c = 0;
      if (0 < (int)pDVar16->count) {
        bVar35 = pDVar16->count != 0;
        do {
          if (bVar35) {
            pvVar13 = DArrayAt<void>(pDVar16, local_c);
          }
          else {
            pvVar13 = nullptr;
          }
          if (pvVar13 != nullptr) {
            local_d = STField<byte>(pvVar13,4);
            if ((local_d != 1) && (local_d != 0)) {
              if (local_d == 4) {
                iVar12 = STField<int>(pvVar13,0x50);
                if ((uint)STField<byte>(pvVar13,5) < STField<uint>(iVar12,0xC)) {
                  pcVar14 = (char *)(STField<int>(iVar12,0x8) * (uint)STField<byte>(pvVar13,5) +
                                    STField<int>(iVar12,0x1C));
                }
                else {
                  pcVar14 = nullptr;
                }
                if (pcVar14 != nullptr) {
                  uVar28 = 0xffffffff;
                  do {
                    pcVar32 = pcVar14;
                    if (uVar28 == 0) break;
                    uVar28 = uVar28 - 1;
                    pcVar32 = pcVar14 + 1;
                    cVar25 = *pcVar14;
                    pcVar14 = pcVar32;
                  } while (cVar25 != '\0');
                  uVar28 = ~uVar28;
                  pcVar32 = pcVar32 + -uVar28;
                  local_8 = reinterpret_cast<char *>((st_stack_frame + 8));
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar28 = 0xffffffff;
                pcVar14 = (char *)((int)pvVar13 + 10);
                do {
                  pcVar32 = pcVar14;
                  if (uVar28 == 0) break;
                  uVar28 = uVar28 - 1;
                  pcVar32 = pcVar14 + 1;
                  cVar25 = *pcVar14;
                  pcVar14 = pcVar32;
                } while (cVar25 != '\0');
                uVar28 = ~uVar28;
                pcVar32 = pcVar32 + -uVar28;
                local_8 = reinterpret_cast<char *>((st_stack_frame + 8));
LAB_005d5b7e:
                pcVar14 = reinterpret_cast<char *>((st_stack_frame + 8));
                for (uVar27 = uVar28 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar32;
                  pcVar32 = pcVar32 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar28 = uVar28 & 3; local_8 = reinterpret_cast<char *>((st_stack_frame + 8)), uVar28 != 0;
                    uVar28 = uVar28 - 1) {
                  *pcVar14 = *pcVar32;
                  pcVar32 = pcVar32 + 1;
                  pcVar14 = pcVar14 + 1;
                }
              }
              bVar22 = STField<byte>(pvVar13,2);
              puVar29 = reinterpret_cast<byte *>((st_stack_frame + 8));
              pcVar14 = &CHAR_00h_00808ab0 + (uint)DAT_00808aaf * 0x9c;
              memmove(pcVar14, puVar29, 0x9c); /* compiler REP MOVS byte copy */
              if (bVar22 < 8) {
                iVar23 = 0;
                iVar12 = (uint)bVar22 * 0x51 + 0x808800;
                do {
                  if (*(char *)(iVar12 + iVar23) == '\0') {
                    *(byte *)(iVar12 + iVar23) = DAT_00808aaf;
                    break;
                  }
                  iVar23 = iVar23 + 1;
                } while (iVar23 < 0x18);
              }
              DAT_00808aaf = DAT_00808aaf + 1;
            }
          }
          pDVar16 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar35 = local_c < pDVar16->count;
        } while ((int)local_c < (int)pDVar16->count);
      }
      if (this_00->field_1E26 == CASE_6) {
        if ((this_00->field_1F47 == 0) && ((message->arg0).u32 == 0)) {
          pMVar7 = this_00->array_00BC[0xc].field_01DB;
          if (*(int *)(pMVar7 + 0x2e6) != 0) {
            memset(local_64, 0, 0x20); /* compiler bulk-zero initialization */
            iVar12 = 0;
            memset(local_84, 0, 0x20); /* compiler bulk-zero initialization */
            local_7c = this_00->field_0008;
            local_64[3] = 2;
            local_78 = 2;
            local_64[4] = 0x694a;
            local_64[5] = 1;
            local_74 = 0x693f;
            local_64[2] = local_7c;
            /* ST_CALLSITE[005D5DAD]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
            iVar12 = st::fn_00403FA8(*(MMsgTy **)(pMVar7 + 0x2e6),0x251f,'\x01',local_64,local_84
                                        ,nullptr,0,0);
            if (iVar12 != 0) {
              /* ST_CALLSITE[005D5DBE]: CALL dword ptr [EDX + 0x24]; [STIndirectCallsiteApplier] exact slot 0x24; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/SettMapTy */
              this_00->vfunc_24();
            }
          }
        }
        else {
          uVar28 = 0xffffffff;
          STPiece<0,1>(DAT_008087a0) = CASE_6;
          pcVar14 = &CHAR_00h_00853de4;
          do {
            pcVar32 = pcVar14;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar32 = pcVar14 + 1;
            cVar25 = *pcVar14;
            pcVar14 = pcVar32;
          } while (cVar25 != '\0');
          uVar28 = ~uVar28;
          DAT_00808783 = 2;
          pcVar14 = pcVar32 + -uVar28;
          pcVar32 = &CHAR_00h_0080ed16;
          memmove(pcVar32, pcVar14, uVar28); /* compiler REP MOVS byte copy */
          uVar27 = 0;
          uVar28 = 0xffffffff;
          pcVar14 = &CHAR_00h_0080ed16;
          do {
            pcVar32 = pcVar14;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar32 = pcVar14 + 1;
            cVar25 = *pcVar14;
            pcVar14 = pcVar32;
          } while (cVar25 != '\0');
          uVar28 = ~uVar28;
          pcVar14 = pcVar32 + -uVar28;
          pcVar32 = reinterpret_cast<char *>(&DAT_0080ee1a);
          memmove(pcVar32, pcVar14, uVar28); /* compiler REP MOVS byte copy */
          uVar28 = 0xffffffff;
          pcVar14 = &CHAR_00h_00807680;
          do {
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            cVar25 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar25 != '\0');
          uVar27 = 0xffffffff;
          pcVar14 = (char *)((int)&DAT_0080ed12 + ~uVar28 + 3);
          do {
            pcVar32 = pcVar14;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar32 = pcVar14 + 1;
            cVar25 = *pcVar14;
            pcVar14 = pcVar32;
          } while (cVar25 != '\0');
          uVar27 = ~uVar27;
          pcVar14 = pcVar32 + -uVar27;
          pcVar32 = &CHAR_00h_0080ef1e;
          memmove(pcVar32, pcVar14, uVar27); /* compiler REP MOVS byte copy */
          uVar27 = 0;
          st::fn_004036C0(this_00,0x6948,0,0);
          this_00->field_21E5 = 1;
          this_00->field_21E4 = 1;
          this_00->field_21E7 = 1;
          this_00->field_21E3 = 1;
          this_00->field_21E1 = 1;
          /* ST_CALLSITE[005D5E88]: CALL dword ptr [EDX + 0x8] */
          this_00->CloseButtons();
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pMVar6 = *(MMsgTy **)(this_00->array_00BC[0xc].field_01DB + 0x2e6);
          if (pMVar6 != nullptr) {
            /* ST_CALLSITE[005D5EA5]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
            st::fn_00401FA5(pMVar6,1,0,1);
          }
        }
      }
      else {
        uVar28 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar14 = &CHAR_00h_0080ed16;
        do {
          pcVar32 = pcVar14;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar32 = pcVar14 + 1;
          cVar25 = *pcVar14;
          pcVar14 = pcVar32;
        } while (cVar25 != '\0');
        uVar28 = ~uVar28;
        pcVar14 = pcVar32 + -uVar28;
        pcVar32 = reinterpret_cast<char *>(&DAT_0080ee1a);
        STPiece<0,1>(DAT_008087a0) = this_00->field_1E26;
        memmove(pcVar32, pcVar14, uVar28); /* compiler REP MOVS byte copy */
        uVar28 = 0xffffffff;
        pcVar14 = &CHAR_00h_00807680;
        do {
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          cVar25 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar25 != '\0');
        uVar27 = 0xffffffff;
        pcVar14 = (char *)((int)&DAT_0080ed12 + ~uVar28 + 3);
        do {
          pcVar32 = pcVar14;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar32 = pcVar14 + 1;
          cVar25 = *pcVar14;
          pcVar14 = pcVar32;
        } while (cVar25 != '\0');
        uVar27 = ~uVar27;
        pcVar14 = pcVar32 + -uVar27;
        pcVar32 = &CHAR_00h_0080ef1e;
        memmove(pcVar32, pcVar14, uVar27); /* compiler REP MOVS byte copy */
        uVar28 = 0;
        st::fn_004036C0(this_00,0x6948,0,0);
        this_00->field_21E5 = 1;
        this_00->field_21E4 = 1;
        this_00->field_21E7 = 1;
        this_00->field_21E2 = 1;
        this_00->field_21E1 = 1;
        /* ST_CALLSITE[005D5CFC]: CALL dword ptr [EDX + 0x8] */
        this_00->CloseButtons();
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pMVar6 = *(MMsgTy **)(this_00->array_00BC[0xc].field_01DB + 0x2e6);
        if (pMVar6 != nullptr) {
          /* ST_CALLSITE[005D5D19]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
          st::fn_00401FA5(pMVar6,1,0,1);
        }
      }
    }
  }
  SVar3 = message->id;
  if (((0x69fe < SVar3) && (SVar3 < 0x6a7f)) && (this_00->field_0065 == '\x01')) {
    pDVar16 = this_00->field_1F84;
    local_c = SVar3 - 0x69ff >> 3;
    if ((pDVar16 == nullptr) ||
       (uVar28 = this_00->field_1F88 + local_c, pDVar16->count <= uVar28)) {
      local_14 = nullptr;
    }
    else {
      local_14 = DArrayAt<AnonShape_005D5560_9031BF1B>(pDVar16, uVar28);
    }
    uVar28 = 0;
    if (local_14 != nullptr) {
      switch(SVar3 + 1 & 7) {
      case 1:
        uVar27 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar28 = pDVar16->count;
        if (0 < (int)uVar28) {
          bVar35 = uVar28 != 0;
          do {
            if (bVar35) {
              pcVar14 = DArrayAt<char>(pDVar16, uVar27);
            }
            else {
              pcVar14 = nullptr;
            }
            if ((*pcVar14 != '\0') && (pcVar14[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar14[2]) = 0;
            }
            uVar27 = uVar27 + 1;
            bVar35 = uVar27 < uVar28;
          } while ((int)uVar27 < (int)uVar28);
        }
        bVar22 = local_14->field_0x2;
        SVar26 = this_00->field_1F88 + local_c;
        uVar28 = 0;
        this_00->field_2171 = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar22) = 1;
        this_00->field_2179 = SVar26;
        this_00->field_2191 = 0x6503;
        this_00->field_21A1 = 0;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0xff;

        st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
        local_8 = (char *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
        do {
          if (*(char *)((int)&local_40 + uVar28) != '\0') {
            this_00->field_1F37 = uVar28;

            st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
            if ((byte)local_14->field_0x2 == uVar28) {
              this_00->field_21A1 = (uint)local_8 & 0xff;
            }
            local_8 = (char *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)((char)local_8 + '\x01'));
          }
          uVar28 = uVar28 + 1;
        } while ((int)uVar28 < 8);
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21C5 = 0x124;
        this_00->field_21CD = 0x1e;
        this_00->field_21A5 = 0x12;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
LAB_005d619b:
        /* ST_CALLSITE[005D61B2]: CALL dword ptr [EAX + 0x8] */
        (*this_00->field_000C->vtable->CreateObject)
                  (reinterpret_cast<SystemClassTy *>(this_00->field_000C),0x100ef,nullptr,nullptr,
                   st::machine_word_boundary_cast<undefined4>(&this_00->field_0x2161),0);
        break;
      case 2:
        this_00->field_2171 = 0x6504;
        this_00->field_2179 = this_00->field_1F88 + local_c;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        local_28 = 1;
        local_EAX_3231 = st::fn_006B0140(0x23f1,g_hINSTANCE_00807618);
        uVar28 = 0xffffffff;
        do {
          pcVar14 = local_EAX_3231;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar14 = local_EAX_3231 + 1;
          cVar25 = *local_EAX_3231;
          local_EAX_3231 = pcVar14;
        } while (cVar25 != '\0');
        uVar28 = ~uVar28;
        pcVar14 = pcVar14 + -uVar28;
        pcVar32 = &this_00->field_1E33;
        memmove(pcVar32, pcVar14, uVar28); /* compiler REP MOVS byte copy */
        uVar27 = 0;
        for (puVar18_mg0 = st::fn_0072E560(reinterpret_cast<uint *>(&this_00->field_1E33),'\n');
            puVar18_mg0 != nullptr;
            puVar18_mg0 = st::fn_0072E560(puVar18_mg0,'\n')) {
          *(undefined1 *)puVar18_mg0 = 0x20;
        }
        this_00->field_1F37 = 1;

        st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
        local_EAX_3347 = st::fn_006B0140(0x23f0,g_hINSTANCE_00807618);
        uVar28 = 0xffffffff;
        do {
          pcVar14 = local_EAX_3347;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar14 = local_EAX_3347 + 1;
          cVar25 = *local_EAX_3347;
          local_EAX_3347 = pcVar14;
        } while (cVar25 != '\0');
        uVar28 = ~uVar28;
        pcVar14 = pcVar14 + -uVar28;
        pcVar32 = &this_00->field_1E33;
        memmove(pcVar32, pcVar14, uVar28); /* compiler REP MOVS byte copy */
        uVar27 = 0;
        for (puVar18_mg1 = st::fn_0072E560(reinterpret_cast<uint *>(&this_00->field_1E33),'\n');
            puVar18_mg1 != nullptr;
            puVar18_mg1 = st::fn_0072E560(puVar18_mg1,'\n')) {
          *(undefined1 *)puVar18_mg1 = 0x20;
        }
        this_00->field_1F37 = 2;

        st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
        uVar28 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar28 = (uint)(local_14->field_0x4 != '\x02');
        }
        if (uVar28 != 0) {
          local_EAX_3503 = st::fn_006B0140(0x23f2,g_hINSTANCE_00807618);
          uVar28 = 0xffffffff;
          do {
            pcVar14 = local_EAX_3503;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar14 = local_EAX_3503 + 1;
            cVar25 = *local_EAX_3503;
            local_EAX_3503 = pcVar14;
          } while (cVar25 != '\0');
          uVar28 = ~uVar28;
          pcVar14 = pcVar14 + -uVar28;
          pcVar32 = &this_00->field_1E33;
          memmove(pcVar32, pcVar14, uVar28); /* compiler REP MOVS byte copy */
          for (puVar18_mg2 = st::fn_0072E560(reinterpret_cast<uint *>(&this_00->field_1E33),'\n');
              puVar18_mg2 != nullptr;
              puVar18_mg2 = st::fn_0072E560(puVar18_mg2,'\n')) {
            *(undefined1 *)puVar18_mg2 = 0x20;
          }
          this_00->field_1F37 = 3;

          st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        bVar22 = local_14->field_0x3;
        this_00->field_21C5 = 0x143;
        this_00->field_21CD = 0x78;
        this_00->field_21A1 = bVar22 - 1;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar20 = g_startSystem_0081176C->field_0034;
        if (pcVar20->field_00A0 != 0) {
          st::fn_00710790(reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(pcVar20));
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar20->field_0x8a;
LAB_005d6676:
        /* ST_CALLSITE[005D668D]: CALL dword ptr [EDX + 0x8] */
        (*this_00->field_000C->vtable->CreateObject)
                  (reinterpret_cast<SystemClassTy *>(this_00->field_000C),0x100ef,nullptr,nullptr,
                   st::machine_word_boundary_cast<undefined4>(&this_00->field_0x2161),0);
        break;
      case 3:
        this_00->field_2171 = 0x6505;
        this_00->field_2179 = this_00->field_1F88 + local_c;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        if (*(char *)local_14 != '\0') {
          uVar28 = 0;
          local_8 = nullptr;
          if ((this_00->field_1E26 == CASE_2) && (local_14->field_0x4 == '\x02')) break;
          pDVar16 = this_00->field_1F84;
          uVar27 = pDVar16->count;
          bVar35 = uVar27 != 0;
          if (0 < (int)uVar27) {
            do {
              if (bVar35) {
                pcVar14 = DArrayAt<char>(pDVar16, uVar28);
              }
              else {
                pcVar14 = nullptr;
              }
              if ((*pcVar14 != '\0') && (pcVar14[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar28 = uVar28 + 1;
              bVar35 = uVar28 < uVar27;
            } while ((int)uVar28 < (int)uVar27);
          }
          if ((this_00->field_1E26 != CASE_2) && (2 < (int)local_8)) {
            local_EAX_3868 = st::fn_006B0140(8000,g_hINSTANCE_00807618);
            uVar28 = 0xffffffff;
            do {
              pcVar14 = local_EAX_3868;
              if (uVar28 == 0) break;
              uVar28 = uVar28 - 1;
              pcVar14 = local_EAX_3868 + 1;
              cVar25 = *local_EAX_3868;
              local_EAX_3868 = pcVar14;
            } while (cVar25 != '\0');
            uVar28 = ~uVar28;
            pcVar14 = pcVar14 + -uVar28;
            pcVar32 = &this_00->field_1E33;
            memmove(pcVar32, pcVar14, uVar28); /* compiler REP MOVS byte copy */
            uVar27 = 0;
            this_00->field_1F37 = 0;

            st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
          }
          if (this_00->field_1E26 != CASE_2) {
            bVar35 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar35 = local_14->field_0x3 != '\x03';
            }
            if (bVar35) {
              local_EAX_3994 = st::fn_006B0140(0x1f42,g_hINSTANCE_00807618);
              uVar28 = 0xffffffff;
              do {
                pcVar14 = local_EAX_3994;
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                pcVar14 = local_EAX_3994 + 1;
                cVar25 = *local_EAX_3994;
                local_EAX_3994 = pcVar14;
              } while (cVar25 != '\0');
              uVar28 = ~uVar28;
              pcVar14 = pcVar14 + -uVar28;
              pcVar32 = &this_00->field_1E33;
              memmove(pcVar32, pcVar14, uVar28); /* compiler REP MOVS byte copy */
              uVar27 = 0;
              this_00->field_1F37 = 2;

              st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
            }
          }
          local_8 = nullptr;
          pAVar18 = local_14->field_0050;
          pcVar14 = (char *)pAVar18->field_000C;
          if (0 < (int)pcVar14) {
            do {
              if (local_8 < pcVar14) {
                iVar12 = pAVar18->field_0008 * (int)local_8 + pAVar18->field_001C;
              }
              else {
                iVar12 = 0;
              }
              uVar28 = 0xffffffff;
              pcVar14 = (char *)(iVar12 + 0x40);
              do {
                pcVar32 = pcVar14;
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                pcVar32 = pcVar14 + 1;
                cVar25 = *pcVar14;
                pcVar14 = pcVar32;
              } while (cVar25 != '\0');
              uVar28 = ~uVar28;
              pcVar14 = pcVar32 + -uVar28;
              pcVar32 = &this_00->field_1E33;
              memmove(pcVar32, pcVar14, uVar28); /* compiler REP MOVS byte copy */
              this_00->field_1F37 = 4;
              *(char **)&this_00->field_0x1f3b = local_8;

              st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
              local_8 = local_8 + 1;
              pAVar18 = local_14->field_0050;
              pcVar14 = (char *)pAVar18->field_000C;
            } while ((int)local_8 < (int)pcVar14);
          }
        }
        pDVar16 = this_00->field_1E2F;
        uVar28 = 0;
        if (0 < (int)pDVar16->count) {
          bVar35 = pDVar16->count != 0;
          local_28 = (uint)(byte)local_14->field_0x4;
          do {
            if (bVar35) {
              pvVar13 = DArrayAt<void>(pDVar16, uVar28);
            }
            else {
              pvVar13 = nullptr;
            }
            if ((STField<uint>(pvVar13,0x104) == local_28) &&
               (STField<uint>(pvVar13,0x108) == (uint)(byte)local_14->field_0x5)) {
              this_00->field_21A1 = uVar28;
              break;
            }
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < pDVar16->count;
          } while ((int)uVar28 < (int)pDVar16->count);
        }
        dVar8 = pDVar16->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar8;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar20 = g_startSystem_0081176C->field_0034;
        if (pcVar20->field_00A0 != 0) {
          st::fn_00710790(reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(pcVar20));
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar20->field_0x8a;
        if (1 < (int)this_00->field_21A9) goto LAB_005d6676;
        break;
      case 5:
        if (DAT_00808a8f != '\0') {
          local_8 = (char *)0x1;
          local_38 = 0;
          local_34 = 0;
          uVar27 = pDVar16->count;
          if (0 < (int)uVar27) {
            bVar35 = uVar27 != 0;
            do {
              if (bVar35) {
                pvVar13 = DArrayAt<void>(pDVar16, uVar28);
              }
              else {
                pvVar13 = nullptr;
              }
              if ((pvVar13 != nullptr) && (STField<byte>(pvVar13,0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)STField<byte>(pvVar13,0x4a)) = 1;
              }
              uVar28 = uVar28 + 1;
              bVar35 = uVar28 < uVar27;
            } while ((int)uVar28 < (int)uVar27);
          }
          bVar22 = 0;
          iVar12 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar12) != '\0') {
              bVar22 = bVar22 + 1;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < 8);
          bVar2 = this_00->field_0x211c;
joined_r0x005d6701:
          if (bVar22 < bVar2) {
            iVar12 = 0;
            do {
              if (*(char *)((int)&local_38 + iVar12) == '\0') {
                *(undefined1 *)((int)&local_38 + iVar12) = 1;
                bVar22 = bVar22 + 1;
                break;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < 8);
            goto joined_r0x005d6701;
          }
          uVar28 = 0;
          cVar25 = (char)local_28;
          if (0 < (int)pDVar16->count) {
            local_2c = (undefined1 *)(this_00->field_1F88 + local_c);
            bVar35 = pDVar16->count != 0;
            do {
              if (bVar35) {
                pcVar14 = DArrayAt<char>(pDVar16, uVar28);
              }
              else {
                pcVar14 = nullptr;
              }
              if (local_2c == (undefined1 *)uVar28) {
LAB_005d6784:
                if ((*pcVar14 != '\0') && ((pcVar14[4] == '\0' || (pcVar14[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar14[0x4a]) = 0;
                }
              }
              else if (*pcVar14 != '\0') {
                if ((pcVar14[4] != '\0') && (pcVar14[4] != '\x01')) {
                  if (local_8 == nullptr) {
                    if (cVar25 != pcVar14[0x4a]) {
                      cVar25 = -1;
                    }
                  }
                  else {
                    cVar25 = pcVar14[0x4a];
                    local_8 = nullptr;
                  }
                }
                goto LAB_005d6784;
              }
              uVar28 = uVar28 + 1;
              bVar35 = uVar28 < pDVar16->count;
            } while ((int)uVar28 < (int)pDVar16->count);
            local_28 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_28)), (uint8_t)(cVar25));
          }
          if (cVar25 != -1) {
            *(undefined1 *)((int)&local_38 + (local_28 & 0xff)) = 0;
          }
          uVar28 = 0;
          this_00->field_2171 = 0x6501;
          this_00->field_2179 = this_00->field_1F88 + local_c;
          this_00->field_2191 = 0x6500;
          this_00->field_21A1 = 0;
          this_00->field_1E2F->count = 0;
          local_8 = (char *)((uint)local_8 & 0xffffff00);
          puVar24 = &uStack_79;
          local_2c = puVar24;
          do {
            iVar12 = uVar28 + 0x41;
            if (puVar24[uVar28 + 0x41] != '\0') {
              pcVar15 = st::fn_006B0140(0x1f4a,g_hINSTANCE_00807618);
              /* ST_CALLSITE[005D682A]: CALL dword ptr [0x0085bde8] */
              st::external_00000080(reinterpret_cast<LPSTR>(&this_00->field_1E33),st::mutable_c_string("%s%c"),pcVar15,iVar12);
              this_00->field_1F37 = uVar28;

              st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
              if ((byte)local_14->field_0x4a == uVar28) {
                this_00->field_21A1 = (uint)local_8 & 0xff;
              }
              local_8 = (char *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)((char)local_8 + '\x01'));
              puVar24 = local_2c;
            }
            uVar28 = uVar28 + 1;
          } while ((int)uVar28 < 8);
          SVar1 = this_00->field_1E26;
          this_00->field_21A9 = this_00->field_1E2F->count;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) || (uVar19 = 0x26b, SVar1 == CASE_2)) {
            uVar19 = 0x2ab;
          }
          this_00->field_21C5 = uVar19;
          this_00->field_21CD = 0x46;
          this_00->field_21C9 = local_c * 0x19 + 0x41;
          pcVar20 = g_startSystem_0081176C->field_0034;
          if (pcVar20->field_00A0 != 0) {
            st::fn_00710790(reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(pcVar20));
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar20->field_0x8a;
          goto LAB_005d619b;
        }
        if (DAT_0080874d != 0xff) {
          bVar22 = local_14->field_0x2;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT31((uint3)(SVar3 - 0x69ff >> 0xb),bVar22);
          if ((bVar22 != 0xff) && (DAT_0080874d != bVar22)) {
            if (local_14->field_0x4 == '\x04') {
              local_2c = (undefined1 *)STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(bVar22));
              if (DAT_0080874d == bVar22) {
                uVar19 = 0;
                uVar28 = (uint)bVar22;
              }
              else {
                uVar27 = (uint)DAT_0080874d;
                bVar2 = g_playerRelationMatrix[uVar27][bVar22];
                uVar28 = local_c;
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar22][uVar27] == 0)) {
                  uVar19 = 0xfffffffe;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar22][uVar27] == 0)) {
                  uVar19 = 0xffffffff;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar22][uVar27] == 1)) {
                  uVar19 = 1;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar22][uVar27] == 1)) {
                  uVar19 = 2;
                }
                else {
                  uVar19 = 0;
                }
              }
              bVar22 = (byte)uVar28;
              switch(uVar19) {
              case 1:
                st::fn_00401212(&DAT_00807620,bVar22,DAT_0080874d,'\0');
                break;
              case 2:
                st::fn_00401212(&DAT_00807620,DAT_0080874d,bVar22,'\0');
                break;
              case 0xfffffffe:
                st::fn_00401212(&DAT_00807620,DAT_0080874d,bVar22,'\x01');
                break;
              case 0xffffffff:
                st::fn_00401212(&DAT_00807620,bVar22,DAT_0080874d,'\x01');
              }
            }
            else {
              st::fn_004033A0(&DAT_00807620,DAT_0080874d,bVar22);
            }
            /* ST_CALLSITE[005D69FA]: CALL dword ptr [EDX + 0x2c] */
            (*this_00->vtable->SetListCtrls)(reinterpret_cast<SettMapSTy *>(this_00));
          }
        }
      }
    }
  }
  temp_5fb73ea9b4 = message->id;
  if (temp_5fb73ea9b4 < 0x6a7f) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  if (0x6afe < temp_5fb73ea9b4) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  uVar28 = temp_5fb73ea9b4 - 0x6a7f >> 3;
  local_2c = (undefined1 *)(temp_5fb73ea9b4 + 1 & 7);
  piVar9 = static_cast<int *>((message->arg1).ptr);
  local_1c = piVar9[2];
  local_18 = piVar9[3];
  pDVar16 = this_00->field_1F84;
  local_24 = *piVar9 + -0x113;
  local_20 = 0;
  if ((pDVar16 == nullptr) ||
     (uVar27 = this_00->field_1F88 + uVar28, pDVar16->count <= uVar27)) {
    pAVar33 = nullptr;
  }
  else {
    pAVar33 = DArrayAt<AnonShape_005CBBE0_2D1CAA09>(pDVar16, uVar27);
  }
  local_28 = uVar28;
  st::fn_006B4170(static_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_20F4[uVar28]),0,*piVar9 + -0x113,0,piVar9[2],piVar9[3],0xff);
  if (pAVar33 == nullptr) goto switchD_005d6abd_default;
  switch(static_cast<uint32_t>(STRawWord(local_2c))) {
  case 0x1:
    if (*(char *)pAVar33 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      /* ST_CALLSITE[005D6B15]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
      st::fn_00404C5F
                (reinterpret_cast<MMObjTy *>(this_00),(int)this_00->field_20F4[uVar28],&local_24,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar33->field_0x2 != -1) {
        switch(pAVar33->field_0x2) {
        case 0:
          bVar22 = 0xfc;
          break;
        case 1:
          bVar22 = 0xfa;
          break;
        case 2:
          bVar22 = 0xfb;
          break;
        case 3:
          bVar22 = 0xf9;
          break;
        case 4:
          bVar22 = 0xfd;
          break;
        case 5:
          bVar22 = 0xfe;
          break;
        case 6:
          bVar22 = 0xf3;
          break;
        case 7:
          bVar22 = 7;
          break;
        default:
          bVar22 = 0xff;
        }
        st::fn_006B4170(static_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_20F4[uVar28]),0,local_24 + 2,local_20 + 2,local_1c + -4,
                     local_18 + -4,bVar22);
      }
    }
    break;
  case 0x2:
    if (*(char *)pAVar33 == '\0') break;
    /* ST_CALLSITE[005D6BD2]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    st::fn_00404C5F
              (reinterpret_cast<MMObjTy *>(this_00),(int)this_00->field_20F4[uVar28],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);

    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar28],0,local_24,
                     local_20,local_1c,local_18);
    if (pAVar33->field_0x3 == '\x01') {
      pcVar14 = &CHAR_W_007ca250;
LAB_005d6c37:
      uVar28 = 0xffffffff;
      do {
        pcVar32 = pcVar14;
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        pcVar32 = pcVar14 + 1;
        cVar25 = *pcVar14;
        pcVar14 = pcVar32;
      } while (cVar25 != '\0');
      uVar28 = ~uVar28;
      pcVar14 = pcVar32 + -uVar28;
      pcVar32 = reinterpret_cast<char *>(&DAT_0080f33a);
      for (uVar27 = uVar28 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
        *(undefined4 *)pcVar32 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar32 = pcVar32 + 4;
      }
    }
    else {
      if (pAVar33->field_0x3 != '\x02') {
        pcVar14 = &CHAR_S_007ca24c;
        goto LAB_005d6c37;
      }
      uVar28 = 0xffffffff;
      pcVar14 = &CHAR_B_007ca248;
      do {
        pcVar32 = pcVar14;
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        pcVar32 = pcVar14 + 1;
        cVar25 = *pcVar14;
        pcVar14 = pcVar32;
      } while (cVar25 != '\0');
      uVar28 = ~uVar28;
      pcVar14 = pcVar32 + -uVar28;
      pcVar32 = reinterpret_cast<char *>(&DAT_0080f33a);
      for (uVar27 = uVar28 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
        *(undefined4 *)pcVar32 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar32 = pcVar32 + 4;
      }
    }
    pSVar11 = g_startSystem_0081176C;
    for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
      *pcVar32 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar32 = pcVar32 + 1;
    }

    st::fn_007119C0(pSVar11->field_0034,reinterpret_cast<char *>(&DAT_0080f33a),-1,-1,2);
    uVar28 = local_28;
    break;
  case 0x3:
    /* ST_CALLSITE[005D6C9C]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    st::fn_00404C5F
              (reinterpret_cast<MMObjTy *>(this_00),(int)this_00->field_20F4[uVar28],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);

    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar28],0,local_24,
                     local_20,local_1c,local_18);
    uVar27 = 2;
    iVar36 = -1;
    iVar23 = -1;
    pcVar14 = (char *)&DAT_007c2310;
    iVar12 = local_1c;

    puVar34 = STPointerBoundaryCast<uint *>(st::fn_00401C0D(this_00,pAVar33));
    goto LAB_005d6d70;
  case 0x4:
    /* ST_CALLSITE[005D6CFA]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    st::fn_00404C5F(reinterpret_cast<MMObjTy *>(this_00),(int)this_00->field_20F4[uVar28],&local_24,2,0x67,0x67);
    if (pAVar33->field_0x4 == '\x02') {

      st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar28],0,
                       local_24,local_20,local_1c,local_18);
      uVar27 = 2;
      iVar23 = -1;
      iVar12 = -1;
      /* ST_CALLSITE[005D6DDA]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00540C40_D825DD02;pointer:/uint;pointer:/uint;/int */
      pcVar20 = st::pointer_boundary_cast<ccFntTy *>(st::fn_0040326F(reinterpret_cast<RecoveredRecord_00540C40_D825DD02 *>(g_startSystem_0081176C->field_0034),reinterpret_cast<uint *>(&pAVar33->field_0xa),
                                   reinterpret_cast<uint *>(&st_global_007C7274),local_1c));

      st::fn_007119C0(g_startSystem_0081176C->field_0034,reinterpret_cast<char *>(pcVar20),iVar12,iVar23,uVar27);
      break;
    }
    if (pAVar33->field_0x4 != '\x04') break;
    pDVar16 = pAVar33->field_0050;
    if ((uint)(byte)pAVar33->field_0x5 < pDVar16->count) {
      puVar34 = DArrayAt<uint>(pDVar16, (uint)(byte)pAVar33->field_0x5);
    }
    else {
      puVar34 = nullptr;
    }
    if (puVar34 == nullptr) break;

    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar28],0,local_24,
                     local_20,local_1c,local_18);
    uVar27 = 2;
    iVar36 = -1;
    iVar23 = -1;
    pcVar14 = &st_global_007C7274;
    iVar12 = local_1c;
LAB_005d6d70:
    /* ST_CALLSITE[005D6D79]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00540C40_D825DD02;pointer:/uint;pointer:/uint;/int */
    pcVar20 = st::pointer_boundary_cast<ccFntTy *>(st::fn_0040326F(reinterpret_cast<RecoveredRecord_00540C40_D825DD02 *>(g_startSystem_0081176C->field_0034),puVar34,reinterpret_cast<uint *>(pcVar14),iVar12));

    st::fn_007119C0(g_startSystem_0081176C->field_0034,reinterpret_cast<char *>(pcVar20),iVar23,iVar36,uVar27);
    break;
  case 0x5:
    if ((*(char *)pAVar33 != '\0') &&
       /* ST_CALLSITE[005D6E23]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
       (st::fn_00404C5F
                  (reinterpret_cast<MMObjTy *>(this_00),(int)this_00->field_20F4[uVar28],&local_24,2,
                   (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar33->field_0x4 != '\0')) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar22 = pAVar33->field_0x2, bVar22 != 0xff)) &&
           (DAT_0080874d != bVar22)) {
          local_28 = 0xffffffff;
          local_2c = (undefined1 *)STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(bVar22));
          uVar27 = (uint)DAT_0080874d;
          bVar2 = g_playerRelationMatrix[uVar27][bVar22];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar22][uVar27] == 0)) {
            uVar19 = 0xfffffffe;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar22][uVar27] == 0)) {
            uVar19 = 0xffffffff;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar22][uVar27] == 1)) {
            uVar19 = 1;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar22][uVar27] == 1)) {
            uVar19 = 2;
          }
          else {
            uVar19 = 0;
          }
          switch(uVar19) {
          default:
            iVar12 = -1;
            break;
          case 1:
            iVar12 = 1;
            break;
          case 2:
            iVar12 = 3;
            break;
          case 0xfffffffe:
            iVar12 = 0;
            break;
          case 0xffffffff:
            iVar12 = 2;
          }
          if (-1 < iVar12 + -1) {
            /* ST_CALLSITE[005D6F7E]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredGlobalRecordView_0081175C;/int */
            pRVar21 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_1F4B,
                                   iVar12 + -1));
            /* ST_CALLSITE[005D6FB6]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229(static_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_20F4[uVar28]),
                   (local_1c - *(int *)&pRVar21->field_0x4) / 2 + local_24,
                   (local_18 - *(int *)&pRVar21->field_0x8) / 2 + 1 + local_20,'\x06',pRVar21);
          }
        }
      }
      else {
        local_EAX_6384 = st::fn_006B0140(0x1f4a,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005D6E60]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%c"),local_EAX_6384);

        st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar28],0,
                         local_24,local_20,local_1c,local_18);

        st::fn_007119C0(g_startSystem_0081176C->field_0034,reinterpret_cast<char *>(&DAT_0080f33a),-1,-1,2);
      }
    }
  }
switchD_005d6abd_default:

  st::fn_006B35D0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_20CC[uVar28]);
  if ((message->arg0).words.low == 3) {
    st::fn_00404BF1(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_c8.previous;
  return 0;
}
