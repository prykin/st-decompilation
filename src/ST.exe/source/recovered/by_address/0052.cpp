#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0052.cpp

// 00521840 CreateIntercomPanel
#line 4 "decomp/ST.exe/functions/00521840/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8FC>00405457

   [STObjectFactoryApplier] Central object factory for 0x012B (ST_OBJECT_TYPE_012B).
   Evidence: registry[59] at 007CA8F8 stores type 0x012B and executable pointer 00405457; allocation
   size 421 has no unique current class-layout match */

IntercomPanelTy * __cdecl st::fn_00521840(void)

{
  IntercomPanelTy *this;


  this = STPointerBoundaryCast<IntercomPanelTy *>(st::fn_006B04D0(0x1a5));
  if (this != nullptr) {

    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = CASE_2;
    this->field_0178 = 0;
    this->vtable = &st_global_0079AC9C;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    this->field_0040 = 0x2f8;
    this->field_0048 = 0x1e;
    this->field_0180 = nullptr;
    this->field_0184 = nullptr;
    this->field_019C = nullptr;
    this->field_01A0 = 0;
    this->field_0198 = nullptr;
    this->field_01A4 = 0;
    this->field_017C = 0;
    return this;
  }
  return nullptr;
}

// 00521CF0 FUN_00521cf0
#line 4 "decomp/ST.exe/functions/00521CF0/decomp.c"
void __fastcall st::fn_00521CF0(AnonShape_00521CF0_154649D2 *param_1)

{
  byte *_Str1;
  char cVar1;
  byte bVar2;
  byte bVar3;
  AnonShape_00521CF0_4A42AA62 *pAVar4;
  bool bVar5;
  int local_EAX_69;
  int iVar6;
  char *pcVar6_mg2;
  char *pcVar7_mg2;
  int local_EAX_380;
  char *pcVar6_mg3;
  char *pcVar7_mg3;
  int local_EAX_521;
  char *pcVar6_mg4;
  char *pcVar7_mg4;
  int local_EAX_705;
  int local_EAX_729;
  int local_EAX_753;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  char local_4b4 [64];
  char local_474 [1040];
  byte local_64;
  InternalExceptionFrame local_60;
  uint local_1c;
  uint local_18;
  AnonShape_00521CF0_4A42AA62 *local_14;
  uint local_10;
  uint local_c;
  char local_5;

  if (param_1->field_0198->field_0008 < 1) {
    iVar10 = 0;
  }
  else {
    iVar10 = *param_1->field_0198->field_0014;
  }
  if (iVar10 != 0) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_14 = reinterpret_cast<AnonShape_00521CF0_4A42AA62 *>(param_1);
    local_EAX_69 = st::fn_0072D7F0(local_60.jumpBuffer,0);
    if (local_EAX_69 == 0) {
      if (DAT_00808783 == '\x03') {
        local_10 = 1;
        if (local_14->field_0198->field_0008 < 1) {
          pcVar13 = nullptr;
        }
        else {
          pcVar13 = (char *)*local_14->field_0198->field_0014;
        }
        uVar8 = 0xffffffff;
        _Str1 = &local_14->field_0x6c;
        do {
          pcVar14 = pcVar13;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar13 = pcVar14 + -uVar8;
        pcVar14 = reinterpret_cast<char *>(_Str1);
        memmove(pcVar14, pcVar13, uVar8); /* compiler REP MOVS byte copy */
        st::fn_006B77E0(reinterpret_cast<char *>(_Str1),_Str1);
        st::fn_006B7780(reinterpret_cast<char *>(_Str1),reinterpret_cast<char *>(_Str1));
        iVar6 = st::fn_0072E6F0(reinterpret_cast<char *>(_Str1),st::mutable_c_string("/WAITING"),8);
        uVar8 = local_10;
        if ((iVar6 == 0) && (uVar8 = 0, g_playSystem_00802A38 != nullptr)) {
          g_playSystem_00802A38->field_00F0 = (uint)(g_playSystem_00802A38->field_00F0 == 0);
          pcVar6_mg2 = st::fn_006B0140(0x2747 - (g_playSystem_00802A38->field_00F0 != 0),
                                          g_hINSTANCE_00807618);
          pcVar7_mg2 = st::fn_006B0140(0x42c3,g_hINSTANCE_00807618);
          /* ST_CALLSITE[00521E1C]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %s"),pcVar7_mg2,pcVar6_mg2);
          if (g_popUp_008016D8 != nullptr) {
            if (DAT_0080874d == 0xff) {
              /* ST_CALLSITE[00521E5A]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
              st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(&DAT_0080f33a),8);
            }
            else {
              /* ST_CALLSITE[00521E46]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
              st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(&DAT_0080f33a),(uint)DAT_0080874d);
            }
          }
        }
        local_EAX_380 = st::fn_0072E6F0(reinterpret_cast<char *>(_Str1),st::mutable_c_string("/FIXNETERRORS"),0xd);
        if (local_EAX_380 == 0) {
          DAT_0080735e = DAT_0080735e == '\0';
          uVar8 = 0;
          pcVar6_mg3 = st::fn_006B0140(0x2747 - (byte)DAT_0080735e,g_hINSTANCE_00807618);
          pcVar7_mg3 = st::fn_006B0140(0x42c5,g_hINSTANCE_00807618);
          /* ST_CALLSITE[00521EBB]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %s"),pcVar7_mg3,pcVar6_mg3);
          if (g_popUp_008016D8 != nullptr) {
            if (DAT_0080874d == 0xff) {
              uVar9 = 8;
            }
            else {
              uVar9 = (uint)DAT_0080874d;
            }
            /* ST_CALLSITE[00521EEC]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
            st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(&DAT_0080f33a),uVar9);
          }
        }
        local_EAX_521 = st::fn_0072E6F0(reinterpret_cast<char *>(_Str1),st::mutable_c_string("/NETGUARANTEE"),0xd);
        if (local_EAX_521 == 0) {
          DAT_0080733c = (uint)(DAT_0080733c == 0);
          uVar8 = 0;
          if (g_int_00811764 != nullptr) {
            st::fn_006B6500(g_int_00811764,DAT_0080733c);
          }
          pcVar6_mg4 = st::fn_006B0140(0x2747 - (DAT_0080733c != 0),g_hINSTANCE_00807618);
          pcVar7_mg4 = st::fn_006B0140(0x42c4,g_hINSTANCE_00807618);
          /* ST_CALLSITE[00521F63]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %s"),pcVar7_mg4,pcVar6_mg4);
          if (g_popUp_008016D8 != nullptr) {
            if (DAT_0080874d == 0xff) {
              uVar9 = 8;
            }
            else {
              uVar9 = (uint)DAT_0080874d;
            }
            /* ST_CALLSITE[00521F94]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
            st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(&DAT_0080f33a),uVar9);
          }
        }
        if (uVar8 != 0) {
          local_c = local_c & 0xffffff00;
          local_5 = '\0';
          local_EAX_705 = st::fn_0072E6F0(reinterpret_cast<char *>(_Str1),reinterpret_cast<char *>(&DAT_007c40f4),4);
          if (local_EAX_705 == 0) {
            local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(1));
          }
          local_EAX_729 = st::fn_0072E6F0(reinterpret_cast<char *>(_Str1),st::mutable_c_string("/EALL"),5);
          if (local_EAX_729 == 0) {
            local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(2));
          }
          local_EAX_753 = st::fn_0072E6F0(reinterpret_cast<char *>(_Str1),st::mutable_c_string("/AALL"),5);
          pAVar4 = local_14;
          if (local_EAX_753 == 0) {
            local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(3));
            bVar11 = 3;
          }
          else {
            bVar11 = (byte)local_c;
          }
          if ((DAT_008067a0 != '\0') && (bVar11 == 0)) {
            if (local_14->field_0198->field_0008 < 1) {
              pcVar13 = nullptr;
            }
            else {
              pcVar13 = (char *)*local_14->field_0198->field_0014;
            }
            bVar5 = st::fn_00401B1D(pcVar13);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var,bVar5) != 0) {
              if (0 < pAVar4->field_0198->field_0008) {
                /* ST_CALLSITE[00522044]: CALL dword ptr [0x0085c064] */
                st::external_00000107
                          (reinterpret_cast<CFsgsConnection *>(&DAT_00802a90),(char *)*pAVar4->field_0198->field_0014);
                g_currentExceptionFrame = local_60.previous;
                return;
              }
              /* ST_CALLSITE[00522062]: CALL dword ptr [0x0085c064] */
              st::external_00000107(reinterpret_cast<CFsgsConnection *>(&DAT_00802a90),nullptr);
              g_currentExceptionFrame = local_60.previous;
              return;
            }
          }
          pcVar13 = local_4b4;
          for (iVar10 = 0x114; iVar10 != 0; iVar10 = iVar10 + -1) {
            pcVar13[0] = '\0';
            pcVar13[1] = '\0';
            pcVar13[2] = '\0';
            pcVar13[3] = '\0';
            pcVar13 = pcVar13 + 4;
          }
          *pcVar13 = '\0';
          pAVar4 = local_14;
          pcVar13 = &CHAR_00h_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar13 = &CHAR_00h_00807ddd;
          }
          uVar8 = 0xffffffff;
          do {
            pcVar14 = pcVar13;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar14;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar13 = pcVar14 + -uVar8;
          pcVar14 = local_4b4;
          memmove(pcVar14, pcVar13, uVar8); /* compiler REP MOVS byte copy */
          uVar9 = 0;
          local_64 = DAT_0080874d;
          if ((bVar11 == 0) && (bVar2 = pAVar4[1].field_0x8, bVar2 != 0)) {
            local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(bVar2));
            local_5 = '\x01';
            bVar11 = bVar2;
          }
          if ((bVar11 == 0) || (3 < bVar11)) {
            if (pAVar4->field_0198->field_0008 < 1) {
              pcVar13 = nullptr;
            }
            else {
              pcVar13 = (char *)*pAVar4->field_0198->field_0014;
            }
            uVar8 = 0xffffffff;
            do {
              pcVar14 = pcVar13;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar14 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar14;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            bVar11 = 0;
            pcVar13 = pcVar14 + -uVar8;
            pcVar14 = local_474;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar14 = pcVar14 + 4;
            }
            local_10 = local_10 & 0xffffff00;
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar14 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar14 = pcVar14 + 1;
            }
            if (DAT_00808aaf != 0) {
              do {
                iVar10 = (local_10 & 0xff) * 0x9c;
                if ((((&DAT_00808af7)[iVar10] != '\0') &&
                    ((&DAT_00808af0)[(local_10 & 0xff) * 0x27] != DAT_0080877f)) &&
                   ((&DAT_00808af6)[iVar10] != '\0')) {
                  st::fn_00715360(g_int_00811764,(&DAT_00808af0)[(local_10 & 0xff) * 0x27],'3',
                               local_4b4,0x451,1,0xffffffff);
                }
                bVar11 = bVar11 + 1;
                local_10 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_10)), (uint8_t)(bVar11));
              } while (bVar11 < DAT_00808aaf);
            }
          }
          else {
            if (local_5 == '\0') {
              iVar10 = (bVar11 != 1) + 4;
            }
            else {
              iVar10 = 0;
            }
            if (pAVar4->field_0198->field_0008 < 1) {
              iVar12 = 0;
            }
            else {
              iVar12 = *pAVar4->field_0198->field_0014;
            }
            if ((char *)(iVar12 + iVar10) == nullptr) {
              uVar8 = 0xffffffff;
              pcVar13 = &CHAR_00h_008016a0;
              do {
                pcVar14 = pcVar13;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar14 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar13 = pcVar14 + -uVar8;
              pcVar14 = local_474;
              memmove(pcVar14, pcVar13, uVar8); /* compiler REP MOVS byte copy */
              uVar9 = 0;
            }
            else {
              uVar8 = 0xffffffff;
              pcVar13 = (char *)(iVar12 + iVar10);
              do {
                pcVar14 = pcVar13;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar14 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar13 = pcVar14 + -uVar8;
              pcVar14 = local_474;
              memmove(pcVar14, pcVar13, uVar8); /* compiler REP MOVS byte copy */
              st::fn_006B60B0(local_474,local_474);
            }
            bVar11 = 0;
            local_18 = local_18 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              local_1c = local_c & 0xff;
              do {
                if (local_1c == 1) {
                  iVar10 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                  if (iVar10 != DAT_0080877f) {
                    cVar1 = (&DAT_00808af6)[(local_18 & 0xff) * 0x9c];
joined_r0x0052240a:
                    if (cVar1 != '\0') {
                      st::fn_00715360(g_int_00811764,iVar10,'3',local_4b4,0x451,1,0xffffffff);
                    }
                  }
                }
                else if (local_1c == 2) {
                  if (DAT_0080874d < 8) {
                    iVar12 = (local_18 & 0xff) * 0x9c;
                    iVar10 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                    if (iVar10 != DAT_0080877f) {
                      bVar2 = (&DAT_00808af4)[iVar12];
                      local_10 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_10)), (uint8_t)(bVar2));
                      if (DAT_00808a8f == '\0') {
                        if (bVar2 == DAT_0080874d) {
LAB_005223b6:
                          iVar7 = 0;
                        }
                        else {
                          uVar8 = (uint)DAT_0080874d;
                          bVar3 = g_playerRelationMatrix[bVar2][uVar8];
                          if ((bVar3 == 0) && (g_playerRelationMatrix[uVar8][bVar2] == 0)) {
                            iVar7 = -2;
                          }
                          else if ((bVar3 == 1) && (g_playerRelationMatrix[uVar8][bVar2] == 0)) {
                            iVar7 = -1;
                          }
                          else if ((bVar3 == 0) && (g_playerRelationMatrix[uVar8][bVar2] == 1)) {
                            iVar7 = 1;
                          }
                          else {
                            if ((bVar3 != 1) || (g_playerRelationMatrix[uVar8][bVar2] != 1))
                            goto LAB_005223b6;
                            iVar7 = 2;
                          }
                        }
                        bVar5 = iVar7 < 0;
                      }
                      else {
                        bVar5 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                                g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                      }
                      if (bVar5) {
                        cVar1 = (&DAT_00808af6)[iVar12];
                        goto joined_r0x0052240a;
                      }
                    }
                  }
                }
                else if ((local_1c == 3) && (DAT_0080874d < 8)) {
                  iVar12 = (local_18 & 0xff) * 0x9c;
                  iVar10 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                  if (iVar10 != DAT_0080877f) {
                    bVar2 = (&DAT_00808af4)[iVar12];
                    local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(bVar2));
                    if (DAT_00808a8f == '\0') {
                      if (bVar2 == DAT_0080874d) {
LAB_00522294:
                        iVar7 = 0;
                      }
                      else {
                        uVar8 = (uint)DAT_0080874d;
                        bVar3 = g_playerRelationMatrix[bVar2][uVar8];
                        if ((bVar3 == 0) && (g_playerRelationMatrix[uVar8][bVar2] == 0)) {
                          iVar7 = -2;
                        }
                        else if ((bVar3 == 1) && (g_playerRelationMatrix[uVar8][bVar2] == 0)) {
                          iVar7 = -1;
                        }
                        else if ((bVar3 == 0) && (g_playerRelationMatrix[uVar8][bVar2] == 1)) {
                          iVar7 = 1;
                        }
                        else {
                          if ((bVar3 != 1) || (g_playerRelationMatrix[uVar8][bVar2] != 1))
                          goto LAB_00522294;
                          iVar7 = 2;
                        }
                      }
                      bVar5 = iVar7 < 0;
                    }
                    else {
                      bVar5 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                              g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                    }
                    if (!bVar5) {
                      cVar1 = (&DAT_00808af6)[iVar12];
                      goto joined_r0x0052240a;
                    }
                  }
                }
                bVar11 = bVar11 + 1;
                local_18 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_18)), (uint8_t)(bVar11));
              } while (bVar11 < DAT_00808aaf);
            }
          }
          /* ST_CALLSITE[0052250A]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s> %s"),local_4b4,local_474);
          if (g_popUp_008016D8 != nullptr) {
            if (DAT_0080874d != 0xff) {
              /* ST_CALLSITE[00522536]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
              st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(&DAT_0080f33a),(uint)DAT_0080874d);
              g_currentExceptionFrame = local_60.previous;
              return;
            }
            /* ST_CALLSITE[00522556]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
            st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(&DAT_0080f33a),8);
            g_currentExceptionFrame = local_60.previous;
            return;
          }
        }
      }
      else if (DAT_0080874e != '\0') {
        if (0 < local_14->field_0198->field_0008) {
          st::fn_00405344((char *)*local_14->field_0198->field_0014);
          g_currentExceptionFrame = local_60.previous;
          return;
        }
        st::fn_00405344(nullptr);
      }
      g_currentExceptionFrame = local_60.previous;
      return;
    }
    g_currentExceptionFrame = local_60.previous;
  }
  return;
}

// 00522810 FUN_00522810
#line 4 "decomp/ST.exe/functions/00522810/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00522810(char *param_1)

{
  char *_Str1;
  char cVar1;
  ST3DSMAPContext *pSVar2;
  int iVar3;
  uint uVar4;
  char *pcVar6;
  char *pcVar7;
  InternalExceptionFrame local_4c;
  int local_8;
  char *pcVar6_mg0;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  uVar4 = 0xffffffff;
  _Str1 = (char *)(local_8 + 0x6c);
  do {
    pcVar6_mg0 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6_mg0 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6_mg0;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6_mg0 + -uVar4;
  pcVar7 = _Str1;
  memmove(pcVar7, pcVar6, uVar4); /* compiler REP MOVS byte copy */
  st::fn_006B77E0(_Str1,reinterpret_cast<byte *>(_Str1));
  st::fn_006B7780(_Str1,_Str1);
  if (st_image_008087A1 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (DAT_008087a5 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (DAT_00808783 == '\x03') {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (DAT_0080874e == '\0') {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (DAT_0080874d == 0xff) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }

  iVar3 = st::fn_0072E6F0(_Str1,st::mutable_c_string("EXITON"),6);
  if ((iVar3 == 0) && (g_allPlayers_007FA174 != nullptr)) {

    st::fn_00404412(DAT_0080874d,5000);
    if (DAT_0080874e == '\x03') {

      st::fn_00405E6B((uint)DAT_0080874d,10000);
    }
    else {

      st::fn_00404336(DAT_0080874d,1000);

      st::fn_004055E7(DAT_0080874d,10000);
    }
    /* ST_CALLSITE[0052294D]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    st::fn_00404B8D(g_allPlayers_007FA174,DAT_0080874d);

    st::fn_004028F6(DAT_0080874d);
  }

  iVar3 = st::fn_0072E6F0(_Str1,st::mutable_c_string("CORIUM"),6);
  if ((iVar3 == 0) && (g_allPlayers_007FA174 != nullptr)) {

    st::fn_00404412(DAT_0080874d,5000);
    /* ST_CALLSITE[0052299F]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    st::fn_00404B8D(g_allPlayers_007FA174,DAT_0080874d);

    st::fn_004028F6(DAT_0080874d);
  }
  if (DAT_0080874e == '\x03') {
LAB_00522a79:

    iVar3 = st::fn_0072E6F0(_Str1,st::mutable_c_string("SILICON"),7);
    if ((iVar3 == 0) && (g_allPlayers_007FA174 != nullptr)) {

      st::fn_00405E6B((uint)DAT_0080874d,10000);
      /* ST_CALLSITE[00522AB4]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
      st::fn_00404B8D(g_allPlayers_007FA174,DAT_0080874d);

      st::fn_004028F6(DAT_0080874d);
    }
    if (DAT_0080874e != '\x03') goto LAB_00522ad4;
  }
  else {

    iVar3 = st::fn_0072E6F0(_Str1,reinterpret_cast<char *>(&DAT_007c415c),4);
    if ((iVar3 == 0) && (g_allPlayers_007FA174 != nullptr)) {

      st::fn_00404336(DAT_0080874d,1000);
      /* ST_CALLSITE[005229FE]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
      st::fn_00404B8D(g_allPlayers_007FA174,DAT_0080874d);

      st::fn_004028F6(DAT_0080874d);
    }
    if (DAT_0080874e == '\x03') goto LAB_00522a79;

    iVar3 = st::fn_0072E6F0(_Str1,st::mutable_c_string("METAL"),5);
    if ((iVar3 == 0) && (g_allPlayers_007FA174 != nullptr)) {

      st::fn_004055E7(DAT_0080874d,1000);
      /* ST_CALLSITE[00522A59]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
      st::fn_00404B8D(g_allPlayers_007FA174,DAT_0080874d);

      st::fn_004028F6(DAT_0080874d);
    }
    if (DAT_0080874e == '\x03') goto LAB_00522a79;
LAB_00522ad4:
    /* ST_CALLSITE[00522ADC]: CALL 0x0072e6f0; direct=0072E6F0 Library::MSVCRT::_strncmp; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
    iVar3 = st::fn_0072E6F0(_Str1,reinterpret_cast<char *>(&DAT_007c4144),3);
    if ((iVar3 == 0) && (g_allPlayers_007FA174 != nullptr)) {

      st::fn_00404106(g_allPlayers_007FA174,(uint)DAT_0080874d,100);
      /* ST_CALLSITE[00522B0C]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
      st::fn_00404B8D(g_allPlayers_007FA174,DAT_0080874d);
    }
    if (DAT_0080874e != '\x03') goto LAB_00522b59;
  }

  iVar3 = st::fn_0072E6F0(_Str1,st::mutable_c_string("ENERGY"),6);
  if ((iVar3 == 0) && (g_allPlayers_007FA174 != nullptr)) {
    /* ST_CALLSITE[00522B43]: CALL 0x004053f3; direct=004053F3 STAllPlayersC::sub_004E4270; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
    st::fn_004053F3(g_allPlayers_007FA174,(uint)DAT_0080874d,100);
    /* ST_CALLSITE[00522B54]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    st::fn_00404B8D(g_allPlayers_007FA174,DAT_0080874d);
  }
LAB_00522b59:

  iVar3 = st::fn_0072E6F0(_Str1,reinterpret_cast<char *>(&DAT_007c4134),4);
  if ((iVar3 == 0) && (g_allPlayers_007FA174 != nullptr)) {
    /* ST_CALLSITE[00522B80]: CALL 0x00404ec6; direct=00404EC6 STAllPlayersC::sub_004E75F0 */
    st::fn_00404EC6(g_allPlayers_007FA174,(uint)DAT_0080874d);
  }

  iVar3 = st::fn_0072E6F0(_Str1,reinterpret_cast<char *>(&DAT_007c4130),3);
  if ((iVar3 == 0) && (g_visibleClass_00802A88 != nullptr)) {
    if (g_visibleClass_00802A88->field_0114 == 0) {
      g_visibleClass_00802A88->field_00F8 = 0;
    }
    else {
      uVar4 = (uint)(g_visibleClass_00802A88->field_00F8 == 0);
      g_visibleClass_00802A88->field_00F8 = uVar4;
      pSVar2 = g_sT3DSMAPContext_00807598;
      if (uVar4 != 0) {
        g_sT3DSMAPContext_00807598->field_0466 = 1;
        pSVar2->field_02D8 = 1;
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
    }
    pSVar2 = g_sT3DSMAPContext_00807598;
    g_sT3DSMAPContext_00807598->field_0466 = 0;
    pSVar2->field_02D8 = 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00523410 FUN_00523410
#line 4 "decomp/ST.exe/functions/00523410/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00523410_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_2B=43;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_E6=230;CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235;CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247;CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251;CASE_FD=253;CASE_FE=254

   [STPrototypeApplier] Propagated return.
   Evidence: 00523410 returns used as parameter 2 of HelpPanelTy::DrawDescription @ 00519C5A |
   00523410 returns used as parameter 2 of HelpPanelTy::DrawDescription @ 0051B100 | 00523410
   returns used as parameter 2 of HelpPanelTy::DrawDescription @ 0051D0E7 | 00523410 returns used as
   parameter 2 of HelpPanelTy::DrawDescription @ 0051D46B | 00523410 returns used as parameter 3 of
   HelpPanelTy::DrawTitle @ 00518D43 | 00523410 returns used as parameter 3 of
   HelpPanelTy::DrawTitle @ 0051A20E | 00523410 returns used as parameter 3 of
   HelpPanelTy::DrawTitle @ 0051CA96 | 00523410 returns used as parameter 3 of
   HelpPanelTy::DrawTitle @ 0051D445
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (32), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004EF140 @ 004EF23B -> read as EAX on
   every CFG path | 004EFE20 @ 004EFF00 -> read as EAX on every CFG path | 004F0C80 @ 004F0D7B ->
   read as EAX on every CFG path | 004FE370 @ 004FE42B -> read as EAX on every CFG path | 005061C0 @
   00506801 -> read as EAX on every CFG path | 005061C0 @ 00506FE0 -> read as EAX on every CFG path
   | 0050A340 @ 0050A952 -> read as EAX on every CFG path | 0050A340 @ 0050AF10 -> read as EAX on
   every CFG path | 0050A340 @ 0050B1C4 -> read as EAX on every CFG path | 00516A40 @ 00517403 ->
   read as EAX on every CFG path | 00516A40 @ 00517564 -> read as EAX on every CFG path | 00517A50 @
   00517CDB -> read as EAX on every CFG path | 00517A50 @ 00517F25 -> read as EAX on every CFG path
   | 00517A50 @ 005180D4 -> read as EAX on every CFG path | 00517A50 @ 0051851E -> read as EAX on
   every CFG path | 00517A50 @ 005186D5 -> read as EAX on every CFG path | 00518C20 @ 00518D2F ->
   read as EAX on every CFG path | 00518C20 @ 00519C4B -> read as EAX on every CFG path | 0051A100 @
   0051A1FD -> read as EAX on every CFG path | 0051A100 @ 0051B0F1 -> read as EAX on every CFG path
   | 0051B5A0 @ 0051BE83 -> read as EAX on every CFG path | 0051B5A0 @ 0051C04B -> read as EAX on
   every CFG path | 0051B5A0 @ 0051C1EB -> read as EAX on every CFG path | 0051B5A0 @ 0051C391 ->
   read as EAX on every CFG path */

int __cdecl st::fn_00523410(Global_sub_00523410_param_1Enum param_1,char param_2,byte param_3)

{
  int iVar1;

  iVar1 = 10000;
  switch(param_1) {
  case CASE_1:
    if (param_3 == 1) {
      return 0x56b8;
    }
    if (param_3 == 2) {
      return 0x56dd;
    }
    return 0x2af9;
  case CASE_2:
    if (param_3 == 1) {
      return 0x56b9;
    }
    if (param_3 == 2) {
      return 0x56de;
    }
    return 0x2afa;
  case CASE_3:
    if (param_3 == 1) {
      return 0x56ba;
    }
    if (param_3 == 2) {
      return 0x56df;
    }
    return 0x2afb;
  case CASE_4:
    if (param_3 == 1) {
      return 0x56bb;
    }
    if (param_3 == 2) {
      return 0x56e0;
    }
    return 0x2afc;
  case CASE_5:
    if (param_3 == 1) {
      return 0x56bc;
    }
    if (param_3 == 2) {
      return 0x56e1;
    }
    return 0x2afd;
  case CASE_6:
    if (param_3 == 1) {
      return 0x56c3;
    }
    if (param_3 == 2) {
      return 0x56e8;
    }
    return 0x2b41;
  case CASE_7:
    if (param_3 == 1) {
      return 0x56bd;
    }
    if (param_3 == 2) {
      return 0x56e2;
    }
    return 0x2afe;
  case CASE_8:
    if (param_3 == 1) {
      return 0x56c2;
    }
    if (param_3 == 2) {
      return 0x56e7;
    }
    return 0x2b40;
  case CASE_9:
    if (param_3 == 1) {
      return 0x56be;
    }
    if (param_3 == 2) {
      return 0x56e3;
    }
    return 0x2aff;
  case CASE_A:
    if (param_3 == 1) {
      return 0x56bf;
    }
    if (param_3 == 2) {
      return 0x56e4;
    }
    return 0x2b01;
  case CASE_B:
    if (param_3 == 1) {
      return 0x56c0;
    }
    if (param_3 == 2) {
      return 0x56e5;
    }
    return 0x2b09;
  case CASE_C:
    if (param_3 == 1) {
      return 0x56cd;
    }
    if (param_3 == 2) {
      return 0x56f2;
    }
    return 0x2b0b;
  case CASE_D:
    if (param_3 == 1) {
      return 0x56c4;
    }
    if (param_3 == 2) {
      return 0x56e9;
    }
    return 0x2b02;
  case CASE_E:
    if (param_3 == 1) {
      return 0x56c5;
    }
    if (param_3 == 2) {
      return 0x56ea;
    }
    return 0x2b03;
  case CASE_F:
    if (param_3 == 1) {
      return 0x56c6;
    }
    if (param_3 == 2) {
      return 0x56eb;
    }
    return 0x2b04;
  case CASE_10:
    if (param_3 == 1) {
      return 0x56c7;
    }
    if (param_3 == 2) {
      return 0x56ec;
    }
    return 0x2b05;
  case CASE_11:
    if (param_3 == 1) {
      return 0x56c8;
    }
    if (param_3 == 2) {
      return 0x56ed;
    }
    return 0x2b06;
  case CASE_12:
    if (param_3 == 1) {
      return 0x56ce;
    }
    if (param_3 == 2) {
      return 0x56f3;
    }
    return 0x2b0c;
  case CASE_13:
    if (param_3 == 1) {
      return 0x56c9;
    }
    if (param_3 == 2) {
      return 0x56ee;
    }
    return 0x2b07;
  case CASE_14:
    if (param_3 == 1) {
      return 0x56cf;
    }
    if (param_3 == 2) {
      return 0x56f4;
    }
    return 0x2b0d;
  case CASE_15:
    if (param_3 == 1) {
      return 0x56cb;
    }
    if (param_3 == 2) {
      return 0x56f0;
    }
    return 0x2b08;
  case CASE_16:
    if (param_3 == 1) {
      return 0x56ca;
    }
    if (param_3 == 2) {
      return 0x56ef;
    }
    return 0x2b00;
  case CASE_17:
    if (param_3 == 1) {
      return 0x56cc;
    }
    if (param_3 == 2) {
      return 0x56f1;
    }
    return 0x2b0a;
  case CASE_18:
    if (param_3 == 1) {
      return 0x56c1;
    }
    if (param_3 == 2) {
      return 0x56e6;
    }
    return 0x2b3f;
  case CASE_19:
    if (param_3 == 1) {
      return 0x56d1;
    }
    if (param_3 == 2) {
      return 0x56f6;
    }
    return 0x2b66;
  case CASE_1A:
    if (param_3 == 1) {
      return 0x56d2;
    }
    if (param_3 == 2) {
      return 0x56f7;
    }
    return 0x2b67;
  case CASE_1B:
    if (param_3 == 1) {
      return 0x56d3;
    }
    if (param_3 == 2) {
      return 0x56f8;
    }
    return 0x2b68;
  case CASE_1C:
    if (param_3 == 1) {
      return 0x56d4;
    }
    if (param_3 == 2) {
      return 0x56f9;
    }
    return 0x2b69;
  case CASE_1D:
    if (param_3 == 1) {
      return 0x56d5;
    }
    if (param_3 == 2) {
      return 0x56fa;
    }
    return 0x2b6a;
  case CASE_1E:
    if (param_3 == 1) {
      return 0x56d6;
    }
    if (param_3 == 2) {
      return 0x56fb;
    }
    return 0x2b6b;
  case CASE_1F:
    if (param_3 == 1) {
      return 0x56d7;
    }
    if (param_3 == 2) {
      return 0x56fc;
    }
    return 0x2b6c;
  case CASE_20:
    if (param_3 == 1) {
      return 0x56d8;
    }
    if (param_3 == 2) {
      return 0x56fd;
    }
    return 0x2b6d;
  case CASE_21:
    if (param_3 == 1) {
      return 0x56d9;
    }
    if (param_3 == 2) {
      return 0x56fe;
    }
    return 0x2b6e;
  case CASE_22:
    if (param_3 == 1) {
      return 0x56da;
    }
    if (param_3 == 2) {
      return 0x56ff;
    }
    return 0x2b6f;
  case CASE_23:
    if (param_3 == 1) {
      return 0x56db;
    }
    if (param_3 == 2) {
      return 0x5700;
    }
    return 0x2b70;
  case CASE_24:
    if (param_3 == 1) {
      return 0x56dc;
    }
    if (param_3 == 2) {
      return 0x5701;
    }
    return 0x2b71;
  case CASE_25:
    if (param_3 == 1) {
      return 0x56d0;
    }
    if (param_3 == 2) {
      return 0x56f5;
    }
    return 0x2b2f;
  case CASE_26:
    if (param_3 == 1) {
      return 0x5704;
    }
    if (param_3 == 2) {
      return 0x5707;
    }
    return 0x2b7d;
  case CASE_27:
    if (param_3 == 1) {
      return 0x5705;
    }
    if (param_3 == 2) {
      return 0x5708;
    }
    return 0x2b7e;
  case CASE_28:
    if (param_3 == 1) {
      return 0x5706;
    }
    if (param_3 == 2) {
      return 0x5709;
    }
    return 0x2b7f;
  case CASE_2B:
    if (param_3 == 1) {
      return 0x5703;
    }
    if (param_3 == 2) {
      return 0x5702;
    }
    return 0x2b7a;
  case CASE_32:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x571c;
      }
      if (param_3 == 2) {
        return 0x5780;
      }
      return 0x2b30;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5734;
      }
      if (param_3 == 2) {
        return 0x5798;
      }
      return 0x2b0e;
    }
    break;
  case CASE_33:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x571d;
      }
      if (param_3 == 2) {
        return 0x5781;
      }
      return 0x2b31;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5735;
      }
      if (param_3 == 2) {
        return 0x5799;
      }
      return 0x2b0f;
    }
    break;
  case CASE_34:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x571f;
      }
      if (param_3 == 2) {
        return 0x5783;
      }
      return 0x2b3b;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5738;
      }
      if (param_3 == 2) {
        return 0x579c;
      }
      return 0x2b10;
    }
    break;
  case CASE_35:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x571e;
      }
      if (param_3 == 2) {
        return 0x5782;
      }
      return 0x2b32;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5736;
      }
      if (param_3 == 2) {
        return 0x579a;
      }
      return 0x2b11;
    }
    break;
  case CASE_36:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x5722;
      }
      if (param_3 == 2) {
        return 0x5786;
      }
      return 0x2b12;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x573a;
      }
      if (param_3 == 2) {
        return 0x579e;
      }
      return 0x2b3c;
    }
    break;
  case CASE_37:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x572e;
      }
      if (param_3 == 2) {
        return 0x5792;
      }
      return 0x2b36;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5747;
      }
      if (param_3 == 2) {
        return 0x57ab;
      }
      return 0x2b13;
    }
    break;
  case CASE_38:
    return 0x2b14;
  case CASE_39:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x5727;
      }
      if (param_3 == 2) {
        return 0x578b;
      }
      return 0x2b34;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5740;
      }
      if (param_3 == 2) {
        return 0x57a4;
      }
      return 0x2b15;
    }
    break;
  case CASE_3A:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x5729;
      }
      if (param_3 == 2) {
        return 0x578d;
      }
      return 0x2b39;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5742;
      }
      if (param_3 == 2) {
        return 0x57a6;
      }
      return 0x2b16;
    }
    break;
  case CASE_3B:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x572a;
      }
      if (param_3 == 2) {
        return 0x578e;
      }
      return 0x2b17;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5743;
      }
      if (param_3 == 2) {
        return 0x57a7;
      }
      return 0x2b3a;
    }
    break;
  case CASE_3C:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x5720;
      }
      if (param_3 == 2) {
        return 0x5784;
      }
      return 0x2b18;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5737;
      }
      if (param_3 == 2) {
        return 0x579b;
      }
      return 0x2b33;
    }
    break;
  case CASE_3D:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x572d;
      }
      if (param_3 == 2) {
        return 0x5791;
      }
      return 0x2b19;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5746;
      }
      if (param_3 == 2) {
        return 0x57aa;
      }
      return 0x2b3e;
    }
    break;
  case CASE_3E:
    if (param_3 == 1) {
      return 0x5724;
    }
    if (param_3 == 2) {
      return 0x5788;
    }
    return 0x2b1b;
  case CASE_3F:
    if (param_3 == 1) {
      return 0x5723;
    }
    if (param_3 == 2) {
      return 0x5787;
    }
    return 0x2b1c;
  case CASE_40:
  case CASE_49:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x5721;
      }
      if (param_3 == 2) {
        return 0x5785;
      }
      return 0x2b1a;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5739;
      }
      if (param_3 == 2) {
        return 0x579d;
      }
      return 0x2b37;
    }
    break;
  case CASE_41:
    if (param_3 == 1) {
      return 0x5733;
    }
    if (param_3 == 2) {
      return 0x5797;
    }
    return 0x2b1d;
  case CASE_42:
    if (param_3 == 1) {
      return 0x5725;
    }
    if (param_3 == 2) {
      return 0x5789;
    }
    return 0x2b1e;
  case CASE_43:
    if (param_3 == 1) {
      return 0x572f;
    }
    if (param_3 == 2) {
      return 0x5793;
    }
    return 0x2b1f;
  case CASE_44:
    if (param_3 == 1) {
      return 0x5730;
    }
    if (param_3 == 2) {
      return 0x5794;
    }
    return 0x2b20;
  case CASE_45:
    if (param_3 == 1) {
      return 0x5731;
    }
    if (param_3 == 2) {
      return 0x5795;
    }
    return 0x2b21;
  case CASE_46:
    if (param_3 == 1) {
      return 0x573c;
    }
    if (param_3 == 2) {
      return 0x57a0;
    }
    return 0x2b22;
  case CASE_47:
    if (param_3 == 1) {
      return 0x573e;
    }
    if (param_3 == 2) {
      return 0x57a2;
    }
    return 0x2b23;
  case CASE_48:
    if (param_3 == 1) {
      return 0x573b;
    }
    if (param_3 == 2) {
      return 0x579f;
    }
    return 0x2b24;
  case CASE_4A:
    if (param_3 == 1) {
      return 0x573d;
    }
    if (param_3 == 2) {
      return 0x57a1;
    }
    return 0x2b25;
  case CASE_4B:
    if (param_3 == 1) {
      return 0x573f;
    }
    if (param_3 == 2) {
      return 0x57a3;
    }
    return 0x2b26;
  case CASE_4C:
    if (param_3 == 1) {
      return 0x5748;
    }
    if (param_3 == 2) {
      return 0x57ac;
    }
    return 0x2b27;
  case CASE_4D:
    if (param_3 == 1) {
      return 0x5749;
    }
    if (param_3 == 2) {
      return 0x57ad;
    }
    return 0x2b28;
  case CASE_4E:
    if (param_3 == 1) {
      return 0x574a;
    }
    if (param_3 == 2) {
      return 0x57ae;
    }
    return 0x2b29;
  case CASE_4F:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x5728;
      }
      if (param_3 == 2) {
        return 0x578c;
      }
      return 0x2b35;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5741;
      }
      if (param_3 == 2) {
        return 0x57a5;
      }
      return 0x2b2a;
    }
    break;
  case CASE_50:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x572b;
      }
      if (param_3 == 2) {
        return 0x578f;
      }
      return 0x2b2b;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5744;
      }
      if (param_3 == 2) {
        return 0x57a8;
      }
      return 0x2b38;
    }
    break;
  case CASE_51:
    if (param_3 == 1) {
      return 0x5726;
    }
    if (param_3 == 2) {
      return 0x578a;
    }
    return 0x2b2d;
  case CASE_52:
    if (param_2 == '\x01') {
      if (param_3 == 1) {
        return 0x572c;
      }
      if (param_3 == 2) {
        return 0x5790;
      }
      return 0x2b2e;
    }
    if (param_2 == '\x02') {
      if (param_3 == 1) {
        return 0x5745;
      }
      if (param_3 == 2) {
        return 0x57a9;
      }
      return 0x2b3d;
    }
    break;
  case CASE_53:
    if (param_3 == 1) {
      return 0x574b;
    }
    if (param_3 == 2) {
      return 0x57af;
    }
    return 0x2b47;
  case CASE_54:
    if (param_3 == 1) {
      return 0x574c;
    }
    if (param_3 == 2) {
      return 0x57b0;
    }
    return 0x2b48;
  case CASE_55:
    if (param_3 == 1) {
      return 0x574d;
    }
    if (param_3 == 2) {
      return 0x57b1;
    }
    return 0x2b49;
  case CASE_56:
    if (param_3 == 1) {
      return 0x574e;
    }
    if (param_3 == 2) {
      return 0x57b2;
    }
    return 0x2b4a;
  case CASE_57:
    if (param_3 == 1) {
      return 0x574f;
    }
    if (param_3 == 2) {
      return 0x57b3;
    }
    return 0x2b4b;
  case CASE_58:
    if (param_3 == 1) {
      return 0x5750;
    }
    if (param_3 == 2) {
      return 0x57b4;
    }
    return 0x2b4c;
  case CASE_59:
    if (param_3 == 1) {
      return 0x5751;
    }
    if (param_3 == 2) {
      return 0x57b5;
    }
    return 0x2b4d;
  case CASE_5A:
    if (param_3 == 1) {
      return 0x5752;
    }
    if (param_3 == 2) {
      return 0x57b6;
    }
    return 0x2b4e;
  case CASE_5B:
    if (param_3 == 1) {
      return 0x5753;
    }
    if (param_3 == 2) {
      return 0x57b7;
    }
    return 0x2b4f;
  case CASE_5C:
    if (param_3 == 1) {
      return 0x5754;
    }
    if (param_3 == 2) {
      return 0x57b8;
    }
    return 0x2b50;
  case CASE_5D:
    if (param_3 == 1) {
      return 0x5756;
    }
    if (param_3 == 2) {
      return 0x57ba;
    }
    return 0x2b51;
  case CASE_5E:
    if (param_3 == 1) {
      return 0x5760;
    }
    if (param_3 == 2) {
      return 0x57c4;
    }
    return 0x2b52;
  case CASE_5F:
    if (param_3 == 1) {
      return 0x5764;
    }
    if (param_3 == 2) {
      return 0x57c8;
    }
    return 0x2b53;
  case CASE_60:
    if (param_3 == 1) {
      return 0x5761;
    }
    if (param_3 == 2) {
      return 0x57c5;
    }
    return 0x2b54;
  case CASE_61:
    if (param_3 == 1) {
      return 0x5762;
    }
    if (param_3 == 2) {
      return 0x57c6;
    }
    return 0x2b55;
  case CASE_62:
    if (param_3 == 1) {
      return 0x5755;
    }
    if (param_3 == 2) {
      return 0x57b9;
    }
    return 0x2b56;
  case CASE_63:
    if (param_3 == 1) {
      return 0x5763;
    }
    if (param_3 == 2) {
      return 0x57c7;
    }
    return 0x2b57;
  case CASE_64:
    if (param_3 == 1) {
      return 0x575f;
    }
    if (param_3 == 2) {
      return 0x57c3;
    }
    return 0x2b58;
  case CASE_65:
    if (param_3 == 1) {
      return 0x575c;
    }
    if (param_3 == 2) {
      return 0x57c0;
    }
    return 0x2b59;
  case CASE_66:
    if (param_3 == 1) {
      return 0x5759;
    }
    if (param_3 == 2) {
      return 0x57bd;
    }
    return 0x2b5a;
  case CASE_67:
    if (param_3 == 1) {
      return 0x5758;
    }
    if (param_3 == 2) {
      return 0x57bc;
    }
    return 0x2b5b;
  case CASE_68:
    if (param_3 == 1) {
      return 0x575d;
    }
    if (param_3 == 2) {
      return 0x57c1;
    }
    return 0x2b5c;
  case CASE_69:
    if (param_3 == 1) {
      return 0x575a;
    }
    if (param_3 == 2) {
      return 0x57be;
    }
    return 0x2b5d;
  case CASE_6A:
    if (param_3 == 1) {
      return 0x575b;
    }
    if (param_3 == 2) {
      return 0x57bf;
    }
    return 0x2b5e;
  case CASE_6B:
    if (param_3 == 1) {
      return 0x5757;
    }
    if (param_3 == 2) {
      return 0x57bb;
    }
    return 0x2b5f;
  case CASE_6C:
    if (param_3 == 1) {
      return 0x5765;
    }
    if (param_3 == 2) {
      return 0x57c9;
    }
    return 0x2b60;
  case CASE_6D:
    if (param_3 == 1) {
      return 0x5767;
    }
    if (param_3 == 2) {
      return 0x57cb;
    }
    return 0x2b62;
  case CASE_6E:
    if (param_3 == 1) {
      return 0x5768;
    }
    if (param_3 == 2) {
      return 0x57cc;
    }
    return 0x2b63;
  case CASE_6F:
    if (param_3 == 1) {
      return 0x5732;
    }
    if (param_3 == 2) {
      return 0x5796;
    }
    return 0x2b43;
  case CASE_70:
    if (param_3 == 1) {
      return 0x5769;
    }
    if (param_3 == 2) {
      return 0x57cd;
    }
    return 0x2b64;
  case CASE_71:
    if (param_3 == 1) {
      return 0x575e;
    }
    if (param_3 == 2) {
      return 0x57c2;
    }
    return 0x2b65;
  case CASE_72:
    if (param_3 == 1) {
      return 0x576a;
    }
    if (param_3 == 2) {
      return 0x57ce;
    }
    return 0x2b72;
  case CASE_73:
    if (param_3 == 1) {
      return 0x576b;
    }
    if (param_3 == 2) {
      return 0x57cf;
    }
    return 0x2b7c;
  case CASE_A6:
    return 0x2b73;
  case CASE_A7:
    return 0x2b74;
  case CASE_AF:
    return 0x2b76;
  case CASE_BD:
    return 0x2b75;
  case CASE_DD:
    return 0x2b77;
  case CASE_DE:
    return 0x2b78;
  case CASE_E0:
    return 0x2b79;
  case CASE_E6:
    if (param_3 != 1) {
      if (param_3 == 2) {
        return 0x5bfe;
      }
      return 0x2b8e;
    }
    break;
  case CASE_E7:
    if ((param_3 == 0) || (2 < param_3)) {
      return 0x2b8f;
    }
    break;
  case CASE_E8:
    if ((param_3 == 0) || (2 < param_3)) {
      return 0x2b90;
    }
    break;
  case CASE_E9:
    if ((param_3 == 0) || (2 < param_3)) {
      return 0x2b91;
    }
    break;
  case CASE_EA:
    if ((param_3 == 0) || (2 < param_3)) {
      return 0x2b92;
    }
    break;
  case CASE_EB:
    if ((param_3 == 0) || (2 < param_3)) {
      return 0x2b93;
    }
    break;
  case CASE_F2:
  case CASE_F3:
  case CASE_F4:
  case CASE_F5:
    if ((param_3 == 0) || (2 < param_3)) {
      return 0x2b94;
    }
    break;
  case CASE_F6:
  case CASE_F7:
    if ((param_3 == 0) || (2 < param_3)) {
      return 0x2b95;
    }
    break;
  case CASE_F8:
  case CASE_F9:
    if ((param_3 == 0) || (2 < param_3)) {
      return 0x2b96;
    }
    break;
  case CASE_FA:
  case CASE_FB:
    if ((param_3 == 0) || (2 < param_3)) {
      iVar1 = 0x2b97;
    }
    break;
  case CASE_FD:
    if (((param_2 != '\x01') && (param_2 != '\x02')) && (param_2 != '\x03')) {
      return 0x2b7b;
    }
    if (param_3 == 1) {
      return 0x57d1;
    }
    if (param_3 == 2) {
      return 0x57d3;
    }
    return 0x2b7b;
  case CASE_FE:
    if ((param_2 != '\x01') && (param_2 != '\x02')) {
      return 0x2b46;
    }
    if (param_3 == 1) {
      return 0x57d0;
    }
    if (param_3 == 2) {
      return 0x57d2;
    }
    return 0x2b46;
  }
  return iVar1;
}

// 00524FE0 FUN_00524fe0
#line 4 "decomp/ST.exe/functions/00524FE0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00524FE0_param_1Enum. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_9C=156;CASE_9D=157;CASE_9E=158;CASE_9F=159;CASE_A0=160;CASE_A1=161;CASE_A3=163;CASE_A4=164;CASE_A6=166;CASE_A7=167;CASE_A8=168;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_AF=175;CASE_B0=176;CASE_B2=178;CASE_B3=179;CASE_B5=181;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_BA=186;CASE_BC=188;CASE_BD=189;CASE_BE=190;CASE_BF=191;CASE_C0=192;CASE_C1=193;CASE_DD=221;CASE_DE=222

   [STPrototypeApplier] Propagated return.
   Evidence: 00524FE0 returns used as parameter 3 of HelpPanelTy::DrawTitle @ 0051B6BE
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (7), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004F2560 @ 004F272D -> read as EAX on
   every CFG path | 004F2560 @ 004F2781 -> read as EAX on every CFG path | 004F2560 @ 004F2A26 ->
   read as EAX on every CFG path | 004F2560 @ 004F2ACC -> read as EAX on every CFG path | 00515900 @
   005159C4 -> read as EAX on every CFG path | 00515900 @ 005159F3 -> read as EAX on every CFG path
   | 0051B5A0 @ 0051B6AD -> read as EAX on every CFG path */

int __cdecl st::fn_00524FE0(Global_sub_00524FE0_param_1Enum param_1)

{
  int iVar1;

  iVar1 = 0;
  switch(param_1) {
  case CASE_96:
    return 0x3138;
  case CASE_97:
    return 0x3139;
  case CASE_98:
    return 0x313a;
  case CASE_99:
    return 0x313b;
  case CASE_9A:
    return 0x313d;
  case CASE_9C:
    return 0x313e;
  case CASE_9D:
    return 0x313f;
  case CASE_9E:
    return 0x3140;
  case CASE_9F:
    return 0x3157;
  case CASE_A0:
    return 0x3158;
  case CASE_A1:
    return 0x315a;
  case CASE_A3:
    return 0x3147;
  case CASE_A4:
    return 0x3148;
  case CASE_A6:
    return 0x3143;
  case CASE_A7:
    return 0x3144;
  case CASE_A8:
    return 0x3145;
  case CASE_A9:
    return 0x3146;
  case CASE_AB:
    return 0x3142;
  case CASE_AC:
    return 0x313c;
  case CASE_AD:
    return 0x3153;
  case CASE_AE:
    return 0x3155;
  case CASE_AF:
    return 0x3149;
  case CASE_B0:
    return 0x314e;
  case CASE_B2:
    iVar1 = 0x315c;
    break;
  case CASE_B3:
    return 0x3151;
  case CASE_B5:
    return 0x3152;
  case CASE_B6:
    return 0x314a;
  case CASE_B7:
    return 0x314b;
  case CASE_B8:
    return 0x3154;
  case CASE_BA:
    return 0x314c;
  case CASE_BC:
    return 0x3150;
  case CASE_BD:
    return 0x314f;
  case CASE_BE:
    return 0x3156;
  case CASE_BF:
    return 0x314d;
  case CASE_C0:
    return 0x3159;
  case CASE_C1:
    return 0x315b;
  case CASE_DD:
    return 0x271d;
  case CASE_DE:
    return 0x271e;
  }
  return iVar1;
}

// 00525290 FUN_00525290
#line 4 "decomp/ST.exe/functions/00525290/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00525293 MOV EAX,dword ptr [EBP + 0x8];
   first-use mask */

int __cdecl st::fn_00525290(byte param_1)

{
  return param_1 + 0x3714;
}

// 005252C0 FUN_005252c0
#line 4 "decomp/ST.exe/functions/005252C0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005252C0_param_1Enum. Cases:
   CASE_AF=175;CASE_B0=176;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_B9=185 */

void __cdecl st::fn_005252C0(Global_sub_005252C0_param_1Enum param_1)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  int local_8;

  local_8 = 0;
  if (param_1 != 0xffffffff) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar1 == 0) {
      switch(param_1) {
      case CASE_AF:
      case CASE_B0:
      case CASE_B6:
      case CASE_B7:
      case CASE_B8:
      case CASE_B9:
        local_8 = 1;
      }
      /* ST_CALLSITE[0052532C]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
      st::fn_00404BD8
                (reinterpret_cast<SoundClassTy *>(&g_sound),SOUND_MODE_5,nullptr,param_1,nullptr,
                 local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
  }
  return;
}

// 00525390 FUN_00525390
#line 4 "decomp/ST.exe/functions/00525390/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00525390_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_29=41;CASE_2A=42;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_2E=46;CASE_2F=47;CASE_30=48;CASE_31=49;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00525390_param_2Enum. Cases:
   CASE_9=9;CASE_15=21;CASE_36=54;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_46=70;CASE_47=71;CASE_4A=74;CASE_4B=75;CASE_4D=77
    */

int __cdecl
st::fn_00525390(Global_sub_00525390_param_1Enum param_1,Global_sub_00525390_param_2Enum param_2)

{
  switch(param_1) {
  case CASE_1:
    switch(param_2) {
    case CASE_9:
    case CASE_15:
    case CASE_36:
    case CASE_3D:
    case CASE_3E:
    case CASE_3F:
    case CASE_46:
    case CASE_47:
    case CASE_4A:
    case CASE_4B:
    case CASE_4D:
      return 0x4e23;
    default:
      return 0x4e3d;
    }
  case CASE_2:
    return 0x4e21;
  case CASE_3:
    return 0x4e22;
  case CASE_4:
    return 0x4e24;
  case CASE_5:
    return 0x4e25;
  case CASE_6:
    return 0x4e26;
  case CASE_7:
    return 0x4e27;
  case CASE_8:
    break;
  case CASE_9:
    return 0x4e28;
  case CASE_A:
    return 0x4e29;
  case CASE_B:
  case CASE_C:
    return 0x4e37;
  case CASE_D:
    return 0x4e2d;
  case CASE_E:
    return 0x4e2e;
  case CASE_F:
    return 0x4e2f;
  case CASE_10:
    return 0x4e30;
  case CASE_11:
    return 0x4e31;
  case CASE_12:
    return 0x4e32;
  case CASE_13:
    return 0x4e33;
  case CASE_14:
    return 0x4e34;
  case CASE_15:
    return 0x4e3e;
  case CASE_16:
    return 0x4e3f;
  case CASE_17:
    return 0x4e40;
  case CASE_18:
    return 0x4e41;
  case CASE_19:
    return 0x4e42;
  case CASE_1A:
    return 0x4e43;
  case CASE_1B:
    return 0x4e4c;
  case CASE_1C:
    return 0x4e4d;
  case CASE_1D:
  case CASE_3D:
    return 0x4e44;
  case CASE_1E:
    return 0x4e45;
  case CASE_1F:
    return 0x4e46;
  case CASE_20:
    return 0x4e47;
  case CASE_21:
  case CASE_41:
    return 0x4e48;
  case CASE_22:
    return 0x4e49;
  case CASE_23:
    return 0x4e4a;
  case CASE_24:
    return 0x4e4b;
  case CASE_25:
    return 0x4e4f;
  case CASE_26:
  case CASE_37:
    return 0x4e4e;
  case CASE_27:
    return 0x4e50;
  case CASE_28:
  case CASE_39:
    return 0x4e51;
  case CASE_29:
  case CASE_46:
    return 0x4e52;
  case CASE_2A:
  case CASE_43:
    return 0x4e53;
  case CASE_2B:
    return 0x4e54;
  case CASE_2C:
    return 0x4e55;
  case CASE_2D:
    return 0x4e56;
  case CASE_2E:
    return 0x4e57;
  case CASE_2F:
    return 0x4e58;
  case CASE_30:
    return 0x4e59;
  case CASE_31:
    return 0x2b46;
  case CASE_32:
    return 0x4e5e;
  case CASE_33:
  case CASE_48:
    return 0x4e5f;
  case CASE_34:
    return 0x4e60;
  case CASE_35:
    return 0x4e61;
  case CASE_36:
    return 0x4e62;
  case CASE_38:
    return 0x4e63;
  case CASE_3A:
    return 0x4e64;
  case CASE_3B:
    return 0x4e65;
  case CASE_3C:
    return 0x4e66;
  case CASE_3E:
    return 0x4e67;
  case CASE_3F:
    return 0x4e68;
  case CASE_40:
    return 0x4e69;
  case CASE_42:
    return 0x4e6a;
  case CASE_44:
    return 0x4e6b;
  case CASE_45:
    return 0x4e6c;
  case CASE_47:
    return 0x4e6d;
  case CASE_49:
    return 0x4e6e;
  case CASE_4A:
    return 0x4e6f;
  case CASE_4B:
    return 0x4e70;
  case CASE_4C:
    return 0x4e71;
  case CASE_4D:
    return 0x4e72;
  default:
    return 10000;
  case CASE_4F:
    return 0x4e73;
  case CASE_50:
    return 0x4e74;
  case CASE_51:
    return 0x4e75;
  case CASE_52:
    return 0x4e76;
  }
  if (param_2 == 5) {
    return 0x4e2a;
  }
  if (param_2 != 0xb) {
    return (-(uint)(param_2 != 0x11) & 0x5a) + 0x4e2b;
  }
  return 0x4e2c;
}

// 00525890 FUN_00525890
#line 4 "decomp/ST.exe/functions/00525890/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00525890_param_1Enum. Cases:
   CASE_36=54;CASE_37=55;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_6F=111
    */

undefined4 __cdecl st::fn_00525890(Global_sub_00525890_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_36:
    return 0x38ad;
  case CASE_37:
    return 0x38a5;
  default:
    return 0x2711;
  case CASE_41:
    return 0x38ab;
  case CASE_43:
    return 0x38aa;
  case CASE_45:
    return 0x38a7;
  case CASE_48:
    return 0x38ac;
  case CASE_4C:
    return 0x38a8;
  case CASE_4D:
    return 0x38a6;
  case CASE_4E:
    return 0x38a9;
  case CASE_6F:
    return 0x38af;
  }
}

// 005259B0 FUN_005259b0
#line 4 "decomp/ST.exe/functions/005259B0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005259B0_param_1Enum. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_9C=156;CASE_9D=157;CASE_9E=158;CASE_9F=159;CASE_A0=160;CASE_A3=163;CASE_A4=164;CASE_A6=166;CASE_A7=167;CASE_A8=168;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_AF=175;CASE_B0=176;CASE_B2=178;CASE_B3=179;CASE_B5=181;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_BA=186;CASE_BC=188;CASE_BD=189;CASE_BE=190;CASE_BF=191;CASE_FF=255
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004F2560 @ 004F263A -> read as EAX on
   every CFG path | 004F2560 @ 004F27C2 -> read as EAX on every CFG path | 00515900 @ 0051594B ->
   read as EAX on every CFG path | 0051B5A0 @ 0051B6C8 -> read as EAX on every CFG path */

int __cdecl st::fn_005259B0(Global_sub_005259B0_param_1Enum param_1,ushort param_2,char param_3)

{
  uint uVar1;

  uVar1 = -(uint)(param_3 != '\0') & 0xff;
  if (param_2 < 5) {
    switch(param_1) {
    case CASE_96:
      return (uint)param_2;
    case CASE_97:
      return param_2 + 5;
    case CASE_98:
      return param_2 + 10;
    case CASE_99:
      return 0x1d;
    case CASE_9A:
      return 0x10;
    case CASE_9C:
      return 0x13;
    case CASE_9D:
      return 0x12;
    case CASE_9E:
      return 0x11;
    case CASE_9F:
    case CASE_A0:
      return 0x14;
    case CASE_A3:
      return 0x1b;
    case CASE_A4:
      return 0x15;
    case CASE_A6:
      return 0x17;
    case CASE_A7:
      return 0x18;
    case CASE_A8:
      return 0x1a;
    case CASE_A9:
      return 0x19;
    case CASE_AB:
      return 0x16;
    case CASE_AC:
      return 0xf;
    case CASE_AD:
      return 0x23;
    case CASE_AE:
      return 0x25;
    case CASE_AF:
      return 0x1e;
    case CASE_B0:
      return 0x2b;
    case CASE_B2:
      uVar1 = 0x2c;
      break;
    case CASE_B3:
      return 0x20;
    case CASE_B5:
      return 0x21;
    case CASE_B6:
      return 0x27;
    case CASE_B7:
      return 0x28;
    case CASE_B8:
      return 0x24;
    case CASE_BA:
      return 0x29;
    case CASE_BC:
      return 0x1f;
    case CASE_BD:
      return 0x22;
    case CASE_BE:
      return 0x26;
    case CASE_BF:
      return 0x2a;
    case CASE_FF:
      return 0x1c;
    }
  }
  return uVar1;
}

// 00525CA0 FUN_00525ca0
#line 4 "decomp/ST.exe/functions/00525CA0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00525CA0_param_1Enum. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_9C=156;CASE_9D=157;CASE_9E=158;CASE_9F=159;CASE_A0=160;CASE_A1=161;CASE_A3=163;CASE_A4=164;CASE_A6=166;CASE_A7=167;CASE_A8=168;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_AF=175;CASE_B0=176;CASE_B2=178;CASE_B3=179;CASE_B5=181;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_BA=186;CASE_BC=188;CASE_BD=189;CASE_BE=190;CASE_BF=191;CASE_C0=192;CASE_C1=193

   [STPrototypeApplier] Propagated return.
   Evidence: 00525CA0 returns used as parameter 2 of HelpPanelTy::DrawDescription @ 0051C4F6 */

UINT __cdecl st::fn_00525CA0(Global_sub_00525CA0_param_1Enum param_1)

{
  UINT UVar1;

  UVar1 = 0;
  switch(param_1) {
  case CASE_96:
    return 0x5bcc;
  case CASE_97:
    return 0x5bcd;
  case CASE_98:
    return 0x5bce;
  case CASE_99:
    return 0x5bcf;
  case CASE_9A:
    return 0x5bd1;
  case CASE_9C:
    return 0x5bd2;
  case CASE_9D:
    return 0x5bd3;
  case CASE_9E:
    return 0x5bd4;
  case CASE_9F:
    return 0x5bd5;
  case CASE_A0:
    return 0x5bd6;
  case CASE_A1:
    return 0x5bee;
  case CASE_A3:
    return 0x5bdd;
  case CASE_A4:
    return 0x5bde;
  case CASE_A6:
    return 0x5bd9;
  case CASE_A7:
    return 0x5bda;
  case CASE_A8:
    return 0x5bdb;
  case CASE_A9:
    return 0x5bdc;
  case CASE_AB:
    return 0x5bd8;
  case CASE_AC:
    return 0x5bd0;
  case CASE_AD:
    return 0x5be9;
  case CASE_AE:
    return 0x5beb;
  case CASE_AF:
    return 0x5bdf;
  case CASE_B0:
    return 0x5be4;
  case CASE_B2:
    UVar1 = 0x5bf0;
    break;
  case CASE_B3:
    return 0x5be7;
  case CASE_B5:
    return 0x5be8;
  case CASE_B6:
    return 0x5be0;
  case CASE_B7:
    return 0x5be1;
  case CASE_B8:
    return 0x5bea;
  case CASE_BA:
    return 0x5be2;
  case CASE_BC:
    return 0x5be6;
  case CASE_BD:
    return 0x5be5;
  case CASE_BE:
    return 0x5bec;
  case CASE_BF:
    return 0x5be3;
  case CASE_C0:
    return 0x5bed;
  case CASE_C1:
    return 0x5bef;
  }
  return UVar1;
}

// 00525EF0 FUN_00525ef0
#line 4 "decomp/ST.exe/functions/00525EF0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00525EF0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00525EF0_param_2Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00507F60 @ 00508EC5 -> read as EAX on
   every CFG path | 005097E0 @ 00509EF3 -> read as EAX on every CFG path | 0050C620 @ 0050DCC0 ->
   read as EAX on every CFG path | 0050C620 @ 0050DD19 -> read as EAX on every CFG path | 0050E7D0 @
   0050EEB5 -> read as EAX on every CFG path */

int __cdecl
st::fn_00525EF0(Global_sub_00525EF0_param_1Enum param_1,Global_sub_00525EF0_param_2Enum param_2)

{
  int iVar1;

  iVar1 = 0;
  switch(param_1) {
  case CASE_1:
    switch(param_2) {
    case CASE_0:
switchD_00525f56_caseD_0:
      return 0x316a;
    case CASE_1:
      return 0x316b;
    case CASE_2:
      return 0x316c;
    case CASE_3:
      return 0x316d;
    case CASE_4:
      return 0x316e;
    }
    break;
  case CASE_2:
    switch(param_2) {
    case CASE_0:
      goto switchD_00525f56_caseD_0;
    case CASE_1:
      return 0x316f;
    case CASE_2:
      return 0x3170;
    case CASE_3:
      return 0x3171;
    case CASE_4:
      return 0x3172;
    case CASE_5:
      return 0x3173;
    }
    break;
  case CASE_3:
    switch(param_2) {
    case CASE_0:
      return 0x3178;
    case CASE_1:
      return 0x3179;
    case CASE_2:
      return 0x317a;
    case CASE_3:
      iVar1 = 10000;
    }
    break;
  case CASE_4:
    switch(param_2) {
    case CASE_0:
      return 0x3174;
    case CASE_1:
      return 0x3175;
    case CASE_2:
      return 0x3176;
    case CASE_3:
      return 0x3177;
    }
  }
  return iVar1;
}

// 005260B0 FUN_005260b0
#line 4 "decomp/ST.exe/functions/005260B0/decomp.c"
void __cdecl st::fn_005260B0(int param_1,undefined1 param_2,int param_3)

{
  bool local_3c;
  byte local_3b;
  int local_39;
  byte local_35;
  local_3c = param_1 != 0;
  if (local_3c) {
    local_39 = param_1;
    local_35 = param_2;
    local_3b = 1;
  }
  st::fn_00403607(reinterpret_cast<RecoveredRecord_00526100_020D84E3 *>(&local_3c),param_3);
  return;
}

// 00526100 FUN_00526100
#line 4 "decomp/ST.exe/functions/00526100/decomp.c"
char * __cdecl st::fn_00526100(RecoveredRecord_00526100_020D84E3 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;

  pcVar2 = st::mutable_c_string("TV_NONE");
  if (param_1 == nullptr) {
    return "TV_ONOFF";
  }
  if (param_2 != 0) {
    return "TV_SWITCH";
  }
  switch(*(undefined1 *)param_1) {
  case 1:
  case 3:
  case 4:
    if (param_1->field_0x1 != '\0') {
      switch(param_1->field_0003) {
      case 1:
        return "TV_SENTINEL";
      case 2:
        return "TV_HUNTER";
      case 3:
        return "TV_CRUISER";
      case 4:
        return "TV_DCBOMBER";
      case 5:
        return "TV_MINELAYER";
      case 6:
        return "TV_RAIDER1";
      case 7:
        return "TV_REPPLATFORM";
      case 8:
        return "TV_TRANSPORT1";
      case 9:
        return "TV_CYBERWORM";
      case 10:
        return "TV_TERMINATOR";
      case 0xb:
        return "TV_LIBERATOR";
      case 0xc:
        return "TV_CONSTRPLATFORM1";
      case 0xd:
        return "TV_CYBERKILLER";
      case 0xe:
        return "TV_DESTROYER";
      case 0xf:
        return "TV_HCRUISER";
      case 0x10:
        return "TV_INVADER";
      case 0x11:
        return "TV_DEFENDER";
      case 0x12:
      case 0x27:
        return "TV_RAIDER2";
      case 0x13:
        return "TV_REPPOWPLATFORM";
      case 0x14:
        return "TV_TRANSPORT2";
      case 0x15:
        return "TV_CYBERDOLPHIN";
      case 0x16:
        return "TV_PHANTOM";
      case 0x17:
        return "TV_AVENGER";
      case 0x18:
        return "TV_CONSTRPLATFORM2";
      case 0x19:
        return "TV_CAPSULE";
      case 0x1a:
        return "TV_TRANSPORT3";
      case 0x1b:
        return "TV_SUPPLYSUB";
      case 0x1c:
        return "TV_PPROBE";
      case 0x1d:
        return "TV_REPLINISHER";
      case 0x1e:
        return "TV_SHSSUB";
      case 0x1f:
        return "TV_DREDNOUGHT";
      case 0x20:
        return "TV_ESCORT";
      case 0x21:
        return "TV_ASSAULTER";
      case 0x22:
      case 0x28:
        return "TV_USUPPER";
      case 0x23:
        return "TV_GHOSTMAKER";
      case 0x24:
        return "TV_EXPLORER";
      case 0x25:
        return "TV_STEALTHSCOUT";
      case 0x26:
        return "TV_FLAGWS";
      case 0x32:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSDOCKYARD";
        }
        return "TV_BODOCKYARD";
      case 0x33:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSRDOCK";
        }
        return "TV_BORDOCK";
      case 0x34:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSMFACTORY";
        }
        return "TV_BOMFACTORY";
      case 0x35:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSREASLAB";
        }
        return "TV_BOREASLAB";
      case 0x36:
        if (param_1->field_0x2 == '\x01') {
          return "TV_SWIM1";
        }
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSSONAR";
        }
        return "TV_BOSONAR";
      case 0x37:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSTELEPORT";
        }
        return "TV_BOTELEPORT";
      case 0x39:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSCMINE";
        }
        return "TV_BOCMINE";
      case 0x3a:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSGOLDPLANT";
        }
        return "TV_BOGOLDPLANT";
      case 0x3b:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSDEPOT";
        }
        return "TV_BODEPOT";
      case 0x3c:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSINFOCENTER";
        }
        return "TV_BOINFOCENTER";
      case 0x3d:
        if (param_1->field_0x2 == '\x01') {
          return "TV_SWIM1";
        }
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSDISPERSER";
        }
        return "TV_BODISPERSER";
      case 0x3e:
        if (param_1->field_0x2 == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_HFCANNON";
      case 0x3f:
        if (param_1->field_0x2 == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_STOLP";
      case 0x40:
        return "TV_CCENTEREWS";
      case 0x41:
        return "TV_SHARKCTRL";
      case 0x42:
        return "TV_USGENERATOR";
      case 0x43:
        return "TV_PSYCHOTRON";
      case 0x44:
        return "TV_PLASMATRON";
      case 0x45:
        return "TV_TLS";
      case 0x46:
        if (param_1->field_0x2 == '\x01') {
          return "TV_SWIM2";
        }
        return "TV_LLASER";
      case 0x47:
        if (param_1->field_0x2 == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_CSCANNON";
      case 0x48:
        return "TV_PSTATION";
      case 0x49:
        return "TV_CCENTERBO";
      case 0x4a:
        if (param_1->field_0x2 == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_HLASER";
      case 0x4b:
        if (param_1->field_0x2 == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_ELP";
      case 0x4c:
        return "TV_ISO";
      case 0x4d:
        return "TV_PPROTECT";
      case 0x4e:
        return "TV_LBL";
      case 0x4f:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSMMINE";
        }
      case 0x38:
        return "TV_BOMMINE";
      case 0x50:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSAIRPLANT";
        }
        return "TV_BOAIRPLANT";
      case 0x51:
        if (param_1->field_0x2 == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_PLASMACANN";
      case 0x52:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_WSRCTELEPORT";
        }
        return "TV_BORCTELEPORT";
      case 0x53:
        return "TV_COMMANDHUB";
      case 0x54:
        return "TV_CMDHUB_MOB";
      case 0x55:
        return "TV_CMDHUB_MIL";
      case 0x56:
        return "TV_CMDHUB_EN";
      case 0x57:
        return "TV_CMDHUB_PROT";
      case 0x58:
        return "TV_CMDHUB_DEF";
      case 0x59:
        return "TV_CMDHUB_PROSP";
      case 0x5a:
        return "TV_CMDHUB_BIOP";
      case 0x5b:
        return "TV_ARSENAL";
      case 0x5c:
        return "TV_PROTOPLASMAGEN";
      case 0x5d:
        return "TV_BIOSONAR";
      case 0x5e:
        return "TV_SCORIUMMINE";
      case 0x5f:
        return "TV_ENERGYCONVERTER";
      case 0x60:
        return "TV_CORIUMSILO";
      case 0x61:
        return "TV_ENERGYACCUMULATOR";
      case 0x62:
        return "TV_REPLENISHPOD";
      case 99:
        return "TV_RECYCLOTRON";
      case 100:
        return "TV_SILICONEXTRACTOR";
      case 0x65:
        return "TV_GAMMAOSCILLATOR";
      case 0x66:
        return "TV_GASCANNON";
      case 0x67:
        return "TV_PARALYSER";
      case 0x68:
        return "TV_IONREFLECTOR";
      case 0x69:
        return "TV_JUMPMINE";
      case 0x6a:
        return "TV_BIOACID";
      case 0x6b:
        return "TV_SPLASMACANNON";
      case 0x6c:
        return "TV_GATE1";
      case 0x6d:
        return "TV_IONFIELDGEN";
      case 0x6e:
        return "TV_MOLECULARREP";
      case 0x6f:
        return "TV_TELESHIELD";
      case 0x70:
        return "TV_GLSATLUNCHER";
      case 0x71:
        return "TV_PARCHER";
      case 0x72:
        return "TV_VBLAUNCHER";
      case 0x73:
        return "TV_QPARALISER";
      case 0xa6:
        return "TV_DMINE";
      case 0xa7:
        return "TV_LSNARE";
      case 0xaf:
        pcVar2 = st::mutable_c_string("TV_BEACON");
        break;
      case 0xbd:
        return "TV_AMINE";
      case 0xdd:
        return "TV_CORIUMSRC";
      case 0xde:
        return "TV_METALSRC";
      case 0xe0:
        return "TV_TERMOSRC";
      case 0xfd:
        if (((char *)param_1)[1] == '\x01') {
          return "TV_ARTEFACTWS";
        }
        if (((char *)param_1)[1] != '\x02') {
          return "TV_ARTEFACTSI";
        }
        return "TV_ARTEFACTBO";
      case 0xfe:
        cVar1 = ((char *)param_1)[1];
        if (cVar1 == '\x01') {
          return "TV_CONTAINER1";
        }
        if (cVar1 == '\x02') {
          return "TV_CONTAINER2";
        }
        if (cVar1 == '\x03') {
          return "TV_CONTAINER3";
        }
      }
    }
    break;
  case 2:
    if (param_1->field_0x1 != '\0') {
      cVar1 = ((char *)param_1)[1];
      if (cVar1 == '\x01') {
        return "TV_GROUPWS";
      }
      if (cVar1 == '\x02') {
        return "TV_GROUPBO";
      }
      if (cVar1 == '\x03') {
        return "TV_GROUPSI";
      }
    }
  }
  return pcVar2;
}

// 00526BA0 FUN_00526ba0
#line 4 "decomp/ST.exe/functions/00526BA0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00526BA0_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_2B=43;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_FD=253;CASE_FE=254

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004EF320 -> 00526BA0 @ 004EF3C0 | 004F0E60 -> 00526BA0 @ 004F0EFD | 004FE960 ->
   00526BA0 @ 004FEB5A | 004FF380 -> 00526BA0 @ 004FFA72 | 005061C0 -> 00526BA0 @ 005066E2 |
   005061C0 -> 00526BA0 @ 00506A4C | 005061C0 -> 00526BA0 @ 00506E6C | 0050A340 -> 00526BA0 @
   0050A839 | 0050A340 -> 00526BA0 @ 0050ADF8 | 0050A340 -> 00526BA0 @ 0050B0AC | 0050A340 ->
   00526BA0 @ 0050BC20 | 0050C620 -> 00526BA0 @ 0050DE09 | 00517A50 -> 00526BA0 @ 00517D6A |
   00517A50 -> 00526BA0 @ 00517FB4 | 00517A50 -> 00526BA0 @ 00518165 | 00517A50 -> 00526BA0 @
   005185BB | 00517A50 -> 00526BA0 @ 00518785
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (27), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004EF320 @ 004EF3C0 -> read as EAX on
   every CFG path | 004EFFE0 @ 004F005D -> read as EAX on every CFG path | 004F0E60 @ 004F0EFD ->
   read as EAX on every CFG path | 004FE960 @ 004FEB5A -> read as EAX on every CFG path | 004FF380 @
   004FFA72 -> read as EAX on every CFG path | 005061C0 @ 005066E2 -> read as EAX on every CFG path
   | 005061C0 @ 00506A4C -> read as EAX on every CFG path | 005061C0 @ 00506E6C -> read as EAX on
   every CFG path | 0050A340 @ 0050A839 -> read as EAX on every CFG path | 0050A340 @ 0050ADF8 ->
   read as EAX on every CFG path | 0050A340 @ 0050B0AC -> read as EAX on every CFG path | 0050A340 @
   0050BC20 -> read as EAX on every CFG path | 0050C620 @ 0050DE09 -> read as EAX on every CFG path
   | 00515650 @ 0051578E -> read as EAX on every CFG path | 00516A40 @ 00517490 -> read as EAX on
   every CFG path | 00516A40 @ 005175EF -> read as EAX on every CFG path | 00517A50 @ 00517D6A ->
   read as EAX on every CFG path | 00517A50 @ 00517FB4 -> read as EAX on every CFG path | 00517A50 @
   00518165 -> read as EAX on every CFG path | 00517A50 @ 005185BB -> read as EAX on every CFG path
   | 00517A50 @ 00518785 -> read as EAX on every CFG path | 0051B5A0 @ 0051BF10 -> read as EAX on
   every CFG path | 0051B5A0 @ 0051C0D8 -> read as EAX on every CFG path | 0051B5A0 @ 0051C278 ->
   read as EAX on every CFG path */

int __cdecl st::fn_00526BA0(Global_sub_00526BA0_param_1Enum param_1,char param_2)

{
  switch(param_1) {
  case CASE_1:
    return 0;
  case CASE_2:
    return 1;
  case CASE_3:
    return 2;
  case CASE_4:
    return 4;
  case CASE_5:
    return 3;
  case CASE_6:
    return 5;
  case CASE_7:
  case CASE_49:
    return 6;
  case CASE_8:
  case CASE_4A:
    return 7;
  case CASE_9:
  case CASE_4B:
    return 8;
  case CASE_A:
  case CASE_47:
    return 9;
  case CASE_B:
    return 0xb;
  case CASE_C:
    return 10;
  case CASE_D:
    return 0xd;
  case CASE_E:
  case CASE_43:
    return 0xe;
  case CASE_F:
    return 0xf;
  case CASE_10:
  case CASE_4C:
    return 0x11;
  case CASE_11:
  case CASE_41:
    return 0x10;
  case CASE_12:
  case CASE_40:
    return 0x12;
  case CASE_13:
  case CASE_4E:
    return 0x13;
  case CASE_14:
  case CASE_42:
    return 0x14;
  case CASE_15:
    return 0x15;
  case CASE_16:
  case CASE_3E:
    return 0x18;
  case CASE_17:
  case CASE_44:
    return 0x16;
  case CASE_18:
  case CASE_45:
    return 0x17;
  case CASE_19:
  case CASE_4D:
    return 0x1a;
  case CASE_1A:
  case CASE_48:
    return 0x1b;
  case CASE_1B:
  case CASE_46:
    return 0x1c;
  case CASE_1C:
    return 0x1d;
  case CASE_1D:
  case CASE_51:
    return 0x1e;
  case CASE_1E:
  case CASE_52:
    return 0x1f;
  case CASE_1F:
    return 0x20;
  case CASE_20:
    return 0x21;
  case CASE_21:
    return 0x22;
  case CASE_22:
    return 0x23;
  case CASE_23:
    return 0x24;
  case CASE_24:
    return 0x25;
  case CASE_25:
  case CASE_3F:
    return 0x19;
  case CASE_26:
    return 0x29;
  case CASE_27:
    return 0x2a;
  case CASE_28:
    return 0x2b;
  default:
    return (-(uint)(DAT_0080874e != '\x03') & 0xffffffdd) + 0x51;
  case CASE_2B:
    return 0x28;
  case CASE_32:
    return (-(uint)(param_2 != '\x01') & 0x22) + 10;
  case CASE_33:
    return (-(uint)(param_2 != '\x01') & 0x14) + 0x15;
  case CASE_34:
    return (-(uint)(param_2 != '\x01') & 0x1c) + 0xb;
  case CASE_35:
    return -(uint)(param_2 != '\x01') & 0x23;
  case CASE_36:
    return (-(uint)(param_2 != '\x01') & 0x1b) + 0xf;
  case CASE_37:
    return (-(uint)(param_2 != '\x01') & 0x20) + 2;
  case CASE_38:
  case CASE_4F:
    return (-(uint)(param_2 != '\x01') & 0x1c) + 0xc;
  case CASE_39:
    return (-(uint)(param_2 != '\x01') & 0x22) + 4;
  case CASE_3A:
    return (-(uint)(param_2 != '\x01') & 0x23) + 1;
  case CASE_3B:
    return (-(uint)(param_2 != '\x01') & 0x26) + 5;
  case CASE_3C:
    return (-(uint)(param_2 != '\x01') & 0x18) + 0xd;
  case CASE_3D:
    return (-(uint)(param_2 != '\x01') & 0x1e) + 3;
  case CASE_50:
    return (-(uint)(param_2 != '\x01') & 0xfffffffd) + 0x20;
  case CASE_53:
    goto switchD_00526bcb_caseD_53;
  case CASE_54:
    return 0x36;
  case CASE_55:
    return 0x30;
  case CASE_56:
    return 0x34;
  case CASE_57:
    return 0x35;
  case CASE_58:
    return 0x32;
  case CASE_59:
    return 0x37;
  case CASE_5A:
    return 0x31;
  case CASE_5B:
    return 0x38;
  case CASE_5C:
    return 0x39;
  case CASE_5D:
    return 0x49;
  case CASE_5E:
    return 0x3a;
  case CASE_5F:
    return 0x50;
  case CASE_60:
    return 0x3b;
  case CASE_61:
    return 0x3d;
  case CASE_62:
    return 0x3e;
  case CASE_63:
    return 0x40;
  case CASE_64:
    return 0x3c;
  case CASE_65:
    return 0x45;
  case CASE_66:
    return 0x47;
  case CASE_67:
    return 0x44;
  case CASE_68:
    return 0x46;
  case CASE_69:
    return 0x41;
  case CASE_6A:
    return 0x43;
  case CASE_6B:
    return 0x42;
  case CASE_6C:
    return 0x4d;
  case CASE_6D:
    return 0x4a;
  case CASE_6E:
    return 0x4c;
  case CASE_6F:
    return 0x2d;
  case CASE_70:
    return 0x4b;
  case CASE_71:
    return 0x48;
  case CASE_72:
    return 0x4f;
  case CASE_73:
    return 0x3f;
  case CASE_FD:
    if (param_2 != '\x01') {
      return (param_2 != '\x02') + 0x30;
    }
switchD_00526bcb_caseD_53:
    return 0x2f;
  case CASE_FE:
    if (param_2 == '\x01') {
      return 0x2d;
    }
    return (-(uint)(param_2 != '\x02') & 4) + 0x2e;
  }
}

// 005272B0 FUN_005272b0
#line 4 "decomp/ST.exe/functions/005272B0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005272B0_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_29=41;CASE_2A=42;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_2F=47;CASE_30=48;CASE_31=49;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004ED630 @ 004ED917 -> read as EAX on
   every CFG path | 004EE0A0 @ 004EE184 -> read as EAX on every CFG path | 004F17D0 @ 004F1838 ->
   read as EAX on every CFG path */

int __cdecl st::fn_005272B0(Global_sub_005272B0_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_1:
  case CASE_14:
    return 2;
  case CASE_2:
    return 0;
  case CASE_3:
    return 1;
  case CASE_4:
    return 3;
  case CASE_5:
    return 5;
  case CASE_6:
    return 6;
  case CASE_7:
    return 10;
  case CASE_8:
    return 0xb;
  case CASE_9:
    return 0xc;
  case CASE_A:
    return 0xd;
  case CASE_B:
  case CASE_C:
    return 0xe;
  case CASE_D:
    return 0x13;
  case CASE_E:
    return 0xf;
  default:
    return -1;
  case CASE_10:
    return 0x10;
  case CASE_11:
    return 0x11;
  case CASE_12:
    return 0x12;
  case CASE_13:
    return 0x14;
  case CASE_15:
    return 0x1d;
  case CASE_16:
    return 0x1e;
  case CASE_17:
    return 0x1f;
  case CASE_18:
  case CASE_4D:
    return 0x20;
  case CASE_19:
    return 0x1c;
  case CASE_1A:
    return 0x1b;
  case CASE_1B:
    return 0x19;
  case CASE_1C:
    return 0x1a;
  case CASE_1D:
  case CASE_3D:
    return 0x16;
  case CASE_1E:
    return 0x17;
  case CASE_1F:
    return 0x18;
  case CASE_20:
    return 0x15;
  case CASE_21:
  case CASE_41:
    return 0x21;
  case CASE_22:
    return 0x22;
  case CASE_23:
    return 0x23;
  case CASE_24:
    return 0x24;
  case CASE_25:
    return 0x25;
  case CASE_26:
  case CASE_37:
    return 0x26;
  case CASE_27:
    return 0x27;
  case CASE_28:
  case CASE_39:
    return 0x28;
  case CASE_29:
  case CASE_46:
    return 0x29;
  case CASE_2A:
  case CASE_43:
    return 0x2a;
  case CASE_2B:
    return 7;
  case CASE_2C:
    return 8;
  case CASE_2D:
    return 9;
  case CASE_2F:
    return 4;
  case CASE_30:
    return 0x2b;
  case CASE_31:
    return 0x2c;
  case CASE_32:
    return 0x2d;
  case CASE_33:
  case CASE_48:
    return 0x2e;
  case CASE_34:
    return 0x2f;
  case CASE_35:
    return 0x30;
  case CASE_36:
    return 0x31;
  case CASE_38:
    return 0x32;
  case CASE_3A:
    return 0x33;
  case CASE_3B:
    return 0x34;
  case CASE_3C:
    return 0x35;
  case CASE_3E:
    return 0x36;
  case CASE_3F:
    return 0x37;
  case CASE_40:
    return 0x38;
  case CASE_42:
    return 0x39;
  case CASE_44:
    return 0x3a;
  case CASE_45:
    return 0x3b;
  case CASE_47:
    return 0x3c;
  case CASE_49:
    return 0x3d;
  case CASE_4A:
    return 0x3e;
  case CASE_4B:
    return 0x3f;
  case CASE_4C:
    return 0x40;
  case CASE_4F:
    return 0x41;
  case CASE_50:
    return 0x42;
  case CASE_51:
    return 0x43;
  case CASE_52:
    return 0x44;
  }
}

// 005276E0 FUN_005276e0
#line 4 "decomp/ST.exe/functions/005276E0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005276E0_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_29=41;CASE_2A=42;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_2E=46;CASE_2F=47;CASE_30=48;CASE_31=49;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_74=116;CASE_75=117;CASE_76=118;CASE_77=119;CASE_78=120;CASE_79=121;CASE_7A=122;CASE_7B=123;CASE_7C=124;CASE_7D=125;CASE_7E=126;CASE_7F=127;CASE_80=128;CASE_81=129;CASE_82=130;CASE_83=131;CASE_84=132;CASE_85=133;CASE_86=134;CASE_87=135;CASE_88=136;CASE_89=137;CASE_8A=138;CASE_8B=139;CASE_8C=140;CASE_8D=141;CASE_8E=142;CASE_8F=143;CASE_90=144;CASE_91=145;CASE_92=146;CASE_93=147;CASE_94=148;CASE_95=149;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (11), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00504B80 @ 00504BC5 -> read as EAX on
   every CFG path | 00504CF0 @ 00504D34 -> read as EAX on every CFG path | 00516480 @ 00516783 ->
   read as EAX on every CFG path | 00516A40 @ 00516B8E -> read as EAX on every CFG path | 00518C20 @
   005193C1 -> read as EAX on every CFG path | 0051A100 @ 0051A891 -> read as EAX on every CFG path
   | 0051B5A0 @ 0051BA20 -> read as EAX on every CFG path | 0053C820 @ 0053C8AA -> read as EAX on
   every CFG path | 00552BC0 @ 00552C39 -> read as EAX on every CFG path | 00552BC0 @ 00552CAB ->
   read as EAX on every CFG path | 00552BC0 @ 00552D23 -> read as EAX on every CFG path */

int __cdecl st::fn_005276E0(Global_sub_005276E0_param_1Enum param_1,byte param_2)

{
  uint uVar1;

  uVar1 = (DAT_0080874e == '\x03') + 0xa9;
  if (param_2 != 0xff) {
    switch(param_1) {
    case CASE_1:
      return 0x14;
    case CASE_2:
      return 0x15;
    case CASE_3:
    case CASE_80:
      return 10;
    case CASE_4:
    case CASE_81:
      if (param_2 == 0) {
        return 0x4e;
      }
      uVar1 = param_2 + 2;
      break;
    case CASE_5:
    case CASE_82:
      if (param_2 == 0) {
        return 0x4f;
      }
      uVar1 = param_2 - 1;
      break;
    case CASE_6:
    case CASE_83:
      if (param_2 == 0) {
        return 0x50;
      }
      uVar1 = param_2 + 5;
      break;
    case CASE_7:
      return 0x16;
    case CASE_8:
      return 0xd;
    case CASE_9:
      return 0xb;
    case CASE_A:
      return 0xc;
    case CASE_B:
      return 0x1f;
    case CASE_C:
      return 0x17;
    case CASE_D:
    case CASE_84:
      return 0x18;
    case CASE_E:
      return 0xe;
    case CASE_F:
      return 0x19;
    case CASE_10:
    case CASE_85:
      return 0x1a;
    case CASE_11:
      return 0x1b;
    case CASE_12:
      return 0xf;
    case CASE_13:
    case CASE_87:
      return 0x1c;
    case CASE_14:
      return 0x10;
    case CASE_15:
      return 0x1d;
    case CASE_16:
      return 0x11;
    case CASE_17:
    case CASE_88:
      return 0x1e;
    case CASE_18:
      return 0x12;
    case CASE_19:
      return 0x23;
    case CASE_1A:
      return 0x24;
    case CASE_1B:
      return 0x13;
    case CASE_1C:
      return 0x22;
    case CASE_1D:
      return 0x21;
    case CASE_1E:
    case CASE_8A:
      return 0x25;
    case CASE_1F:
      return 0x20;
    case CASE_20:
    case CASE_8B:
      return 0x26;
    case CASE_21:
    case CASE_8C:
      return 0x27;
    case CASE_22:
      return 0x28;
    case CASE_23:
      return 0x29;
    case CASE_24:
      return 0x2c;
    case CASE_25:
      return 0x2b;
    case CASE_26:
      return 0x34;
    case CASE_27:
      return 0x2d;
    case CASE_28:
      return 0x2f;
    case CASE_29:
      return 0x35;
    case CASE_2A:
      return 0x36;
    case CASE_2B:
      return 0x37;
    case CASE_2C:
      return 0x30;
    case CASE_2D:
      return 0x31;
    case CASE_2E:
      return 0x32;
    case CASE_2F:
      return 0x38;
    case CASE_30:
      return 0x39;
    case CASE_31:
      return 0x3a;
    case CASE_32:
      return 0x3b;
    case CASE_33:
      return 0x33;
    case CASE_34:
      return 0x2a;
    case CASE_35:
      return 0x2e;
    case CASE_36:
      return 0x45;
    case CASE_37:
      return 0x46;
    case CASE_38:
      return 0x4a;
    case CASE_39:
      return 0x4b;
    case CASE_3A:
      return 0x43;
    case CASE_3B:
      return 0x44;
    case CASE_3C:
    case CASE_91:
      return 0x47;
    case CASE_3D:
    case CASE_8D:
      return 0x41;
    case CASE_3E:
      return 0x3f;
    case CASE_3F:
    case CASE_8E:
      return 0x42;
    case CASE_40:
    case CASE_8F:
      return 0x49;
    case CASE_41:
    case CASE_9A:
      return 0x48;
    case CASE_42:
      return 0x4d;
    case CASE_43:
      return 0x4c;
    case CASE_44:
      return 0x59;
    case CASE_45:
      return 0x5a;
    case CASE_46:
      return 0x5b;
    case CASE_47:
      return 0x5c;
    case CASE_48:
      return 0x5d;
    case CASE_49:
      return 0x5e;
    case CASE_4A:
      return 0x5f;
    case CASE_4B:
      return 0x60;
    case CASE_4C:
      return 0x61;
    case CASE_4D:
      return 0x62;
    case CASE_4E:
      if (param_2 == 0) {
        uVar1 = 0xa6;
      }
      else {
        uVar1 = param_2 + 0x80;
      }
      break;
    case CASE_4F:
      return 0x84;
    case CASE_50:
      return 0x85;
    case CASE_51:
      return 0x67;
    case CASE_52:
      return 0x68;
    case CASE_53:
      return 0x69;
    case CASE_54:
      return 0x6a;
    case CASE_55:
      return 0x77;
    case CASE_56:
      return 0x78;
    case CASE_57:
      return 0x79;
    case CASE_58:
      return 0x7a;
    case CASE_59:
      return 0x7b;
    case CASE_5A:
      return 0x7c;
    case CASE_5B:
      return 0x7d;
    case CASE_5C:
      return 0x7e;
    case CASE_5D:
      return 0x7f;
    case CASE_5E:
      return 0x80;
    case CASE_5F:
      return 0x86;
    case CASE_60:
      return 0x87;
    case CASE_61:
      return 0x74;
    case CASE_62:
      return 0x89;
    case CASE_63:
      return 0x75;
    case CASE_64:
      return 0xa8;
    case CASE_65:
      if (param_2 == 0) {
        uVar1 = 0xa4;
      }
      else {
        uVar1 = param_2 + 0x6a;
      }
      break;
    case CASE_66:
      return 0x71;
    case CASE_67:
      uVar1 = param_2 + 0x6d;
      break;
    case CASE_68:
      return 0x72;
    case CASE_69:
      return 0x8c;
    case CASE_6A:
      return 0x8d;
    case CASE_6B:
      return 0x8e;
    case CASE_6C:
      return 0x8f;
    case CASE_6D:
      if (param_2 == 0) {
        uVar1 = 0xa5;
      }
      else {
        uVar1 = param_2 + 0x62;
      }
      break;
    case CASE_6E:
      return 0x66;
    case CASE_6F:
      return 0x95;
    case CASE_70:
      return 0x96;
    case CASE_71:
      return 0x9a;
    case CASE_72:
      return 0x91;
    case CASE_73:
      return 0x97;
    case CASE_74:
      return 0x98;
    case CASE_75:
      return 0x9b;
    case CASE_76:
      return 0x99;
    case CASE_77:
      return 0xa2;
    case CASE_78:
      return 0x92;
    case CASE_79:
      return 0xa3;
    case CASE_7A:
      uVar1 = param_2 + 0x9d;
      break;
    case CASE_7B:
      return 0x93;
    case CASE_7C:
      return 0xa0;
    case CASE_7D:
      uVar1 = param_2 + 0x9b;
      break;
    case CASE_7E:
      return 0xa1;
    case CASE_7F:
    case CASE_89:
      return 0x3c;
    case CASE_86:
      return 0x3e;
    case CASE_90:
      return 0xa7;
    case CASE_92:
      return 0x52;
    case CASE_93:
      return 0x56;
    case CASE_94:
      return 0x53;
    case CASE_95:
      return 0x57;
    case CASE_96:
    case CASE_99:
      return 0x58;
    case CASE_97:
      return 0x55;
    case CASE_98:
      return 0x54;
    }
    if (0xa9 < uVar1) {
      uVar1 = (DAT_0080874e == '\x03') + 0xa8;
    }
  }
  return uVar1;
}

// 00528060 FUN_00528060
#line 4 "decomp/ST.exe/functions/00528060/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00528060_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_29=41;CASE_2A=42;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_2E=46;CASE_2F=47;CASE_30=48;CASE_31=49;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_74=116;CASE_75=117;CASE_76=118;CASE_77=119;CASE_78=120;CASE_79=121;CASE_7A=122;CASE_7B=123;CASE_7C=124;CASE_7D=125;CASE_7E=126;CASE_7F=127;CASE_80=128;CASE_81=129;CASE_82=130;CASE_83=131;CASE_84=132;CASE_85=133;CASE_86=134;CASE_87=135;CASE_88=136;CASE_89=137;CASE_8A=138;CASE_8B=139;CASE_8C=140;CASE_8D=141;CASE_8E=142;CASE_8F=143;CASE_90=144;CASE_91=145;CASE_92=146;CASE_93=147;CASE_94=148;CASE_95=149;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154

   [STPrototypeApplier] Propagated return.
   Evidence: 00528060 returns used as parameter 3 of HelpPanelTy::DrawTitle @ 00516B84
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (9), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00504B80 @ 00504C31 -> read as EAX on
   every CFG path | 00504CF0 @ 00504D9A -> read as EAX on every CFG path | 00516A40 @ 00516B73 ->
   read as EAX on every CFG path | 00518C20 @ 00519399 -> read as EAX on every CFG path | 0051A100 @
   0051A869 -> read as EAX on every CFG path | 0051B5A0 @ 0051B9F4 -> read as EAX on every CFG path
   | 0051DDD0 @ 0051E0CF -> read as EAX on every CFG path | 0053C620 @ 0053C72C -> read as EAX on
   every CFG path | 005449B0 @ 00545BDB -> read as EAX on every CFG path */

int __cdecl st::fn_00528060(Global_sub_00528060_param_1Enum param_1,char param_2)

{
  switch(param_1) {
  case CASE_1:
    return 13000;
  case CASE_2:
    return 0x32c9;
  case CASE_3:
    return 0x32ca;
  case CASE_4:
  case CASE_81:
    break;
  case CASE_5:
  case CASE_82:
    if (param_2 == '\x01') {
      return 0x32ce;
    }
    if (param_2 != '\x02') {
      if (param_2 != '\x03') {
        return 0x3370;
      }
      return 0x32d0;
    }
    return 0x32cf;
  case CASE_6:
  case CASE_83:
    switch(param_2) {
    case '\x01':
      return 0x32d1;
    case '\x02':
      return 0x32d2;
    case '\x03':
      return 0x32d3;
    case '\x04':
      return 0x32d4;
    default:
      return 0x3371;
    }
  case CASE_7:
    return 0x32d5;
  case CASE_8:
    return 0x32d6;
  case CASE_9:
    return 0x32d7;
  case CASE_A:
    return 0x32d8;
  case CASE_B:
    return 0x32d9;
  case CASE_C:
    return 0x32da;
  case CASE_D:
  case CASE_84:
    return 0x32db;
  case CASE_E:
    return 0x32dc;
  case CASE_F:
    return 0x32de;
  case CASE_10:
  case CASE_85:
    return 0x32df;
  case CASE_11:
  case CASE_86:
    return 0x32e0;
  case CASE_12:
    return 0x32e1;
  case CASE_13:
  case CASE_87:
    return 0x32e2;
  case CASE_14:
    return 0x32e3;
  case CASE_15:
    return 0x32e4;
  case CASE_16:
  case CASE_35:
    return 0x32e5;
  case CASE_17:
    return 0x32e6;
  case CASE_18:
    return 0x32e7;
  case CASE_19:
    return 0x32e8;
  case CASE_1A:
    return 0x32e9;
  case CASE_1B:
    return 0x32eb;
  case CASE_1C:
    return 0x32ec;
  case CASE_1D:
    return 0x32ed;
  case CASE_1E:
  case CASE_8A:
    return 0x32ee;
  case CASE_1F:
    return 0x32f2;
  case CASE_20:
  case CASE_8B:
    return 0x32f0;
  case CASE_21:
    return 0x32f1;
  case CASE_22:
    return 0x32f3;
  case CASE_23:
    return 0x32f4;
  case CASE_24:
    return 0x32f5;
  case CASE_25:
    return 0x32f6;
  case CASE_26:
    return 0x32f7;
  case CASE_27:
    return 0x32f8;
  case CASE_28:
    return 0x32f9;
  case CASE_29:
    return 0x32fa;
  case CASE_2A:
    return 0x32fb;
  case CASE_2B:
    return 0x32fc;
  case CASE_2C:
    return 0x32fd;
  case CASE_2D:
    return 0x32fe;
  case CASE_2E:
    return 0x32ff;
  case CASE_2F:
    return 0x3300;
  case CASE_30:
    return 0x3301;
  case CASE_31:
    return 0x3302;
  case CASE_32:
    return 0x32ea;
  case CASE_33:
    return 0x3303;
  case CASE_34:
    return 0x336c;
  case CASE_36:
    return 0x3305;
  case CASE_37:
    return 0x3306;
  case CASE_38:
    return 0x3307;
  case CASE_39:
    return 0x3308;
  case CASE_3A:
    return 0x3309;
  case CASE_3B:
    return 0x330a;
  case CASE_3C:
  case CASE_91:
    return 0x330b;
  case CASE_3D:
  case CASE_8D:
    return 0x330c;
  case CASE_3E:
    return 0x330d;
  case CASE_3F:
  case CASE_8E:
    return 0x330f;
  case CASE_40:
  case CASE_8F:
    return 0x3310;
  case CASE_41:
    return 0x3311;
  case CASE_42:
    return 0x335d;
  case CASE_43:
    return 0x335e;
  case CASE_44:
    return 0x3312;
  case CASE_45:
    return 0x3313;
  case CASE_46:
    return 0x3314;
  case CASE_47:
    return 0x3315;
  case CASE_48:
    return 0x3316;
  case CASE_49:
    return 0x3317;
  case CASE_4A:
    return 0x3318;
  case CASE_4B:
    return 0x3319;
  case CASE_4C:
    return 0x331a;
  case CASE_4D:
    return 0x331b;
  case CASE_4E:
    if (param_2 == '\x01') {
      return 0x331c;
    }
    if (param_2 != '\x02') {
      if (param_2 != '\x03') {
        return 0x3372;
      }
      return 0x3354;
    }
    return 0x3353;
  case CASE_4F:
    return 0x331d;
  case CASE_50:
    return 0x331e;
  case CASE_51:
    return 0x331f;
  case CASE_52:
    return 0x3320;
  case CASE_53:
    return 0x3321;
  case CASE_54:
    return 0x3322;
  case CASE_55:
    return 0x3323;
  case CASE_56:
    return 0x3324;
  case CASE_57:
    return 0x3325;
  case CASE_58:
    return 0x3326;
  case CASE_59:
    return 0x3327;
  case CASE_5A:
    return 0x3328;
  case CASE_5B:
    return 0x3329;
  case CASE_5C:
    return 0x332a;
  case CASE_5D:
    return 0x332b;
  case CASE_5E:
    return 0x332c;
  case CASE_5F:
    return 0x332d;
  case CASE_60:
    return 0x332e;
  case CASE_61:
    return 0x3330;
  case CASE_62:
    return 0x3331;
  case CASE_63:
    return 0x3332;
  case CASE_64:
    return 0x3378;
  case CASE_65:
    if (param_2 == '\x01') {
      return 0x3336;
    }
    if (param_2 != '\x02') {
      if (param_2 != '\x03') {
        return 0x3373;
      }
      return 0x3356;
    }
    return 0x3355;
  case CASE_66:
    return 0x3337;
  case CASE_67:
    if (param_2 == '\x01') {
      return 0x3338;
    }
    if (param_2 != '\x02') {
      if (param_2 != '\x03') {
        return 0x3374;
      }
      return 0x3358;
    }
    return 0x3357;
  case CASE_68:
    return 0x3339;
  case CASE_69:
    return 0x333b;
  case CASE_6A:
    return 0x333c;
  case CASE_6B:
    return 0x333d;
  case CASE_6C:
    return 0x333e;
  case CASE_6D:
    if (param_2 == '\x01') {
      return 0x333f;
    }
    if (param_2 != '\x02') {
      if (param_2 != '\x03') {
        return 0x3375;
      }
      return 0x335a;
    }
    return 0x3359;
  case CASE_6E:
    return 0x3340;
  case CASE_6F:
    return 0x3341;
  case CASE_70:
    return 0x3342;
  case CASE_71:
    return 0x3343;
  case CASE_72:
    return 0x3344;
  case CASE_73:
    return 0x3345;
  case CASE_74:
    return 0x3346;
  case CASE_75:
    return 0x3347;
  case CASE_76:
    return 0x3348;
  case CASE_77:
    return 0x3349;
  case CASE_78:
    return 0x334a;
  case CASE_79:
    return 0x334b;
  case CASE_7A:
    if (param_2 == '\x01') {
      return 0x334c;
    }
    if (param_2 != '\x02') {
      return 0x3376;
    }
    return 0x335b;
  case CASE_7B:
    return 0x334d;
  case CASE_7C:
    return 0x334e;
  case CASE_7D:
    if (param_2 == '\x01') {
      return 0x334f;
    }
    if (param_2 != '\x02') {
      return 0x3377;
    }
    return 0x335c;
  case CASE_7E:
    return 0x3350;
  case CASE_7F:
    return 0x3304;
  case CASE_80:
    return 0x336b;
  case CASE_88:
    return 0x336a;
  case CASE_89:
    return 0x336d;
  case CASE_8C:
    return 0x336e;
  case CASE_90:
    return 0x335f;
  case CASE_92:
    return 0x3361;
  case CASE_93:
    return 0x3362;
  case CASE_94:
    return 0x3363;
  case CASE_95:
    return 0x3364;
  case CASE_96:
    return 0x3365;
  case CASE_97:
    return 0x3366;
  case CASE_98:
    return 0x3367;
  case CASE_99:
    return 0x3368;
  case CASE_9A:
    return 0x3369;
  default:
    return 0x2711;
  }
  if (param_2 == '\x01') {
    return 0x32cb;
  }
  if (param_2 != '\x02') {
    if (param_2 != '\x03') {
      return 0x336f;
    }
    return 0x32cd;
  }
  return 0x32cc;
}

// 00528A30 FUN_00528a30
#line 4 "decomp/ST.exe/functions/00528A30/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00528A30_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_29=41;CASE_2A=42;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_2E=46;CASE_2F=47;CASE_30=48;CASE_31=49;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_74=116;CASE_75=117;CASE_76=118;CASE_77=119;CASE_78=120;CASE_79=121;CASE_7A=122;CASE_7B=123;CASE_7C=124;CASE_7D=125;CASE_7E=126;CASE_7F=127;CASE_80=128;CASE_81=129;CASE_82=130;CASE_83=131;CASE_84=132;CASE_85=133;CASE_86=134;CASE_87=135;CASE_88=136;CASE_89=137;CASE_8A=138;CASE_8B=139;CASE_8C=140;CASE_8D=141;CASE_8E=142;CASE_8F=143;CASE_91=145;CASE_92=146;CASE_93=147;CASE_94=148;CASE_95=149;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154

   [STPrototypeApplier] Propagated return.
   Evidence: 00528A30 returns used as parameter 2 of HelpPanelTy::DrawDescription @ 00517698 */

UINT __cdecl st::fn_00528A30(Global_sub_00528A30_param_1Enum param_1,char param_2)

{
  switch(param_1) {
  case CASE_1:
    return 0x5c94;
  case CASE_2:
    return 0x5c95;
  case CASE_3:
    return 0x5c97;
  case CASE_4:
  case CASE_81:
    break;
  case CASE_5:
  case CASE_82:
    if (param_2 == '\x01') {
      return 0x5c9b;
    }
    if (param_2 == '\x02') {
      return 0x5c9c;
    }
    return 0x5c9d;
  case CASE_6:
  case CASE_83:
    if (param_2 == '\x01') {
      return 0x5c9e;
    }
    if (param_2 == '\x02') {
      return 0x5c9f;
    }
    if (param_2 == '\x03') {
      return 0x5ca0;
    }
    return 0x5ca1;
  case CASE_7:
    return 0x5ca2;
  case CASE_8:
    return 0x5ca3;
  case CASE_9:
    return 0x5ca4;
  case CASE_A:
    return 0x5ca5;
  case CASE_B:
    return 0x5ca6;
  case CASE_C:
    return 0x5ca7;
  case CASE_D:
    return 0x5ca8;
  case CASE_E:
    return 0x5ca9;
  case CASE_F:
    return 0x5caa;
  case CASE_10:
    return 0x5cab;
  case CASE_11:
    return 0x5cac;
  case CASE_12:
    return 0x5cad;
  case CASE_13:
    return 0x5cae;
  case CASE_14:
    return 0x5caf;
  case CASE_15:
    return 0x5cb0;
  case CASE_16:
    return 0x5cb1;
  case CASE_17:
    return 0x5cb2;
  case CASE_18:
    return 0x5cb3;
  case CASE_19:
    return 0x5cb4;
  case CASE_1A:
    return 0x5cb5;
  case CASE_1B:
    return 0x5cb7;
  case CASE_1C:
    return 0x5cb8;
  case CASE_1D:
    return 0x5cb9;
  case CASE_1E:
    return 0x5cba;
  case CASE_1F:
    return 0x5cbd;
  case CASE_20:
    return 0x5cbb;
  case CASE_21:
    return 0x5cbc;
  case CASE_22:
    return 0x5cbe;
  case CASE_23:
    return 0x5cbf;
  case CASE_24:
    return 0x5cc0;
  case CASE_25:
    return 0x5cc1;
  case CASE_26:
    return 0x5cc2;
  case CASE_27:
    return 0x5cc3;
  case CASE_28:
    return 0x5cc4;
  case CASE_29:
    return 0x5cc5;
  case CASE_2A:
    return 0x5cc6;
  case CASE_2B:
    return 0x5cc7;
  case CASE_2C:
    return 0x5cc8;
  case CASE_2D:
    return 0x5cc9;
  case CASE_2E:
    return 0x5cca;
  case CASE_2F:
    return 0x5ccb;
  case CASE_30:
    return 0x5ccc;
  case CASE_31:
    return 0x5ccd;
  case CASE_32:
    return 0x5cb6;
  case CASE_33:
    return 0x5cce;
  case CASE_34:
    return 0x5d2b;
  case CASE_35:
    return 0x5d2f;
  case CASE_36:
    return 0x5ccf;
  case CASE_37:
    return 0x5cd0;
  case CASE_38:
    return 0x5cd1;
  case CASE_39:
    return 0x5cd2;
  case CASE_3A:
    return 0x5cd3;
  case CASE_3B:
    return 0x5cd4;
  case CASE_3C:
    return 0x5cd5;
  case CASE_3D:
    return 0x5cd6;
  case CASE_3E:
    return 0x5cd7;
  case CASE_3F:
    return 0x5cd9;
  case CASE_40:
    return 0x5cda;
  case CASE_41:
    return 0x5cdb;
  case CASE_42:
    return 0x5cdc;
  case CASE_43:
    return 0x5cdd;
  case CASE_44:
    return 0x5cde;
  case CASE_45:
    return 0x5cdf;
  case CASE_46:
    return 0x5ce0;
  case CASE_47:
    return 0x5ce1;
  case CASE_48:
    return 0x5ce2;
  case CASE_49:
    return 0x5ce3;
  case CASE_4A:
    return 0x5ce4;
  case CASE_4B:
    return 0x5ce5;
  case CASE_4C:
    return 0x5ce6;
  case CASE_4D:
    return 0x5ce7;
  case CASE_4E:
    if (param_2 == '\x01') {
      return 0x5ce8;
    }
    if (param_2 == '\x02') {
      return 0x5ce9;
    }
    return 0x5cea;
  case CASE_4F:
    return 0x5ceb;
  case CASE_50:
    return 0x5cec;
  case CASE_51:
    return 0x5ced;
  case CASE_52:
    return 0x5cee;
  case CASE_53:
    return 0x5cef;
  case CASE_54:
    return 0x5cf0;
  case CASE_55:
    return 0x5cf1;
  case CASE_56:
    return 0x5cf2;
  case CASE_57:
    return 0x5cf3;
  case CASE_58:
    return 0x5cf4;
  case CASE_59:
    return 0x5cf5;
  case CASE_5A:
    return 0x5cf6;
  case CASE_5B:
    return 0x5cf7;
  case CASE_5C:
    return 0x5cf8;
  case CASE_5D:
    return 0x5cf9;
  case CASE_5E:
    return 0x5cfa;
  case CASE_5F:
    return 0x5cfb;
  case CASE_60:
    return 0x5cfc;
  case CASE_61:
    return 0x5cfe;
  case CASE_62:
    return 0x5cff;
  case CASE_63:
    return 0x5d00;
  case CASE_64:
    return 0x5d43;
  case CASE_65:
    if (param_2 == '\x01') {
      return 0x5d04;
    }
    if (param_2 == '\x02') {
      return 0x5d05;
    }
    return 0x5d06;
  case CASE_66:
    return 0x5d07;
  case CASE_67:
    if (param_2 == '\x01') {
      return 0x5d08;
    }
    if (param_2 == '\x02') {
      return 0x5d09;
    }
    return 0x5d0a;
  case CASE_68:
    return 0x5d0b;
  case CASE_69:
    return 0x5d0d;
  case CASE_6A:
    return 0x5d0e;
  case CASE_6B:
    return 0x5d0f;
  case CASE_6C:
    return 0x5d10;
  case CASE_6D:
    if (param_2 == '\x01') {
      return 0x5d11;
    }
    if (param_2 == '\x02') {
      return 0x5d12;
    }
    return 0x5d13;
  case CASE_6E:
    return 0x5d14;
  case CASE_6F:
    return 0x5d15;
  case CASE_70:
    return 0x5d16;
  case CASE_71:
    return 0x5d17;
  case CASE_72:
    return 0x5d18;
  case CASE_73:
    return 0x5d19;
  case CASE_74:
    return 0x5d1a;
  case CASE_75:
    return 0x5d1b;
  case CASE_76:
    return 0x5d1c;
  case CASE_77:
    return 0x5d1d;
  case CASE_78:
    return 0x5d1e;
  case CASE_79:
    return 0x5d1f;
  case CASE_7A:
    if (param_2 == '\x01') {
      return 0x5d20;
    }
    return 0x5d21;
  case CASE_7B:
    return 0x5d22;
  case CASE_7C:
    return 0x5d23;
  case CASE_7D:
    if (param_2 == '\x01') {
      return 0x5d24;
    }
    return 0x5d25;
  case CASE_7E:
    return 0x5d26;
  case CASE_7F:
    return 0x5c96;
  case CASE_80:
    return 0x5d29;
  case CASE_84:
    return 0x5d2a;
  case CASE_85:
    return 0x5d2c;
  case CASE_86:
    return 0x5d2d;
  case CASE_87:
    return 0x5d2e;
  case CASE_88:
    return 0x5d30;
  case CASE_89:
    return 0x5d31;
  case CASE_8A:
    return 0x5d32;
  case CASE_8B:
    return 0x5d33;
  case CASE_8C:
    return 0x5d34;
  case CASE_8D:
    return 0x5d35;
  case CASE_8E:
    return 0x5d36;
  case CASE_8F:
    return 0x5d37;
  default:
    return 0x2711;
  case CASE_91:
    return 0x5d39;
  case CASE_92:
    return 0x5d3a;
  case CASE_93:
    return 0x5d3b;
  case CASE_94:
    return 0x5d3c;
  case CASE_95:
    return 0x5d3d;
  case CASE_96:
    return 0x5d3e;
  case CASE_97:
    return 0x5d3f;
  case CASE_98:
    return 0x5d40;
  case CASE_99:
    return 0x5d41;
  case CASE_9A:
    return 0x5d42;
  }
  if (param_2 == '\x01') {
    return 0x5c98;
  }
  if (param_2 == '\x02') {
    return 0x5c99;
  }
  return 0x5c9a;
}

// 005293C0 FUN_005293c0
#line 4 "decomp/ST.exe/functions/005293C0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005293C3 MOV EAX,dword ptr [EBP + 0x8];
   first-use mask */

undefined4 __cdecl st::fn_005293C0(byte param_1)

{
  return *(undefined4 *)(&DAT_007e4534 + (uint)param_1 * 4);
}

// 005293F0 FUN_005293f0
#line 4 "decomp/ST.exe/functions/005293F0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005293F0_param_1Enum. Cases:
   CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_DF=223;CASE_E0=224;CASE_E1=225;CASE_E2=226;CASE_E3=227

   [STPrototypeApplier] Propagated return.
   Evidence: 005293F0 returns used as parameter 3 of HelpPanelTy::DrawTitle @ 00517BAD
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005061C0 @ 00506412 -> read as EAX on
   every CFG path | 0050A340 @ 0050A5B9 -> read as EAX on every CFG path | 00517A50 @ 00517B9C ->
   read as EAX on every CFG path */

int __cdecl st::fn_005293F0(Global_sub_005293F0_param_1Enum param_1)

{
  int iVar1;

  iVar1 = 10000;
  switch(param_1) {
  case CASE_DC:
  case CASE_E1:
    iVar1 = 0x271f;
    break;
  case CASE_DD:
    return 0x271d;
  case CASE_DE:
    return 0x271e;
  case CASE_DF:
    return 0x2720;
  case CASE_E0:
  case CASE_E3:
    return 0x2730;
  case CASE_E2:
    return 0x2731;
  }
  return iVar1;
}

// 00529480 FUN_00529480
#line 4 "decomp/ST.exe/functions/00529480/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00529480_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005061C0 @ 0050640A -> read as EAX on
   every CFG path | 0050A340 @ 0050A5B1 -> read as EAX on every CFG path */

int __cdecl st::fn_00529480(Global_sub_00529480_param_1Enum param_1)

{
  int iVar1;

  iVar1 = 10000;
  switch(param_1) {
  case CASE_0:
    return 0x271d;
  case CASE_1:
    return 0x271e;
  case CASE_2:
    return 0x271f;
  case CASE_3:
    return 0x2731;
  case CASE_4:
    iVar1 = 0x2730;
  }
  return iVar1;
}

// 00529500 FUN_00529500
#line 4 "decomp/ST.exe/functions/00529500/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00529500_param_1Enum. Cases:
   CASE_271D=10013;CASE_271E=10014;CASE_271F=10015;CASE_2731=10033
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=005061C0 @ 00506420
   -> PUSH PUSH EAX | 0050A340 @ 0050A5C4 -> PUSH PUSH EAX */

int __cdecl st::fn_00529500(Global_sub_00529500_param_1Enum param_1)

{
  uint uVar1;

  uVar1 = (DAT_0080874e != '\x03') - 1 & 5;
  switch(param_1) {
  case CASE_271D:
    return 2;
  case CASE_271E:
  case CASE_2731:
    uVar1 = 4;
    break;
  case CASE_271F:
    return 3;
  }
  return uVar1;
}

// 00529590 FUN_00529590
#line 4 "decomp/ST.exe/functions/00529590/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00529590_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_29=41;CASE_2A=42;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_2E=46;CASE_2F=47;CASE_30=48;CASE_31=49;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00529590_param_2Enum. Cases:
   CASE_9=9;CASE_15=21;CASE_36=54;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_42=66;CASE_46=70;CASE_47=71;CASE_4A=74;CASE_4B=75;CASE_4D=77;CASE_51=81
    */

char * __cdecl
st::fn_00529590(Global_sub_00529590_param_1Enum param_1,Global_sub_00529590_param_2Enum param_2)

{
  char *pcVar1;

  switch(param_1) {
  case CASE_1:
    if (DAT_0080874e == '\x03') {
      return "BUT_SISTOP";
    }
    switch(param_2) {
    case CASE_9:
      return "BUT_STOPWORM";
    default:
      return "BUT_DEFENCE";
    case CASE_15:
      return "BUT_STOPDOLPH";
    case CASE_36:
    case CASE_3D:
    case CASE_3E:
    case CASE_3F:
    case CASE_42:
    case CASE_46:
    case CASE_47:
    case CASE_4A:
    case CASE_4B:
    case CASE_4D:
    case CASE_51:
      return "BUT_STOPCONSTR";
    }
  case CASE_2:
    if (DAT_0080874e == '\x03') {
      return "BUT_SIMOVE";
    }
    switch(param_2) {
    case CASE_9:
      return "BUT_MOVEWORM";
    case CASE_15:
      return "BUT_MOVEDOLPH";
    case CASE_36:
    case CASE_3D:
    case CASE_3E:
    case CASE_3F:
    case CASE_42:
    case CASE_46:
    case CASE_47:
    case CASE_4A:
    case CASE_4B:
    case CASE_4D:
    case CASE_51:
      return "BUT_MOVECONSTR";
    }
  default:
    pcVar1 = st::mutable_c_string("BUT_MOVEBOAT");
    break;
  case CASE_3:
    if (DAT_0080874e == '\x03') {
      return "BUT_SIATTACK";
    }
    if (param_2 != CASE_9) {
      return "BUT_ATTACK";
    }
    return "BUT_ATTACKWORM";
  case CASE_4:
    return "BUT_RETREPAIR";
  case CASE_5:
    pcVar1 = st::mutable_c_string("BUT_SIGUARD");
    if (DAT_0080874e != '\x03') {
      return "BUT_GUARD";
    }
    break;
  case CASE_6:
    pcVar1 = st::mutable_c_string("BUT_SIPATROL");
    if (DAT_0080874e != '\x03') {
      return "BUT_PATROL";
    }
    break;
  case CASE_7:
    pcVar1 = st::mutable_c_string("BUT_SICAPTURE");
    if (DAT_0080874e != '\x03') {
      return "BUT_CAPTURE";
    }
    break;
  case CASE_8:
    if (param_2 == 5) {
      return "BUT_SETMINE";
    }
    if (param_2 != 0xb) {
      if (param_2 != 0x11) {
        return "BUT_ZAPADLO";
      }
      return "BUT_SETSNARE";
    }
    return "BUT_SETLIGHT";
  case CASE_9:
    return "BUT_ATTACKDC";
  case CASE_A:
    pcVar1 = st::mutable_c_string("BUT_SIPARSHELL");
    if (DAT_0080874e != '\x03') {
      return "BUT_ATTACKRAYS";
    }
    break;
  case CASE_B:
    return "BUT_PHANTOMON";
  case CASE_C:
    return "BUT_PHANTOMOFF";
  case CASE_D:
    return "BUT_REPSUBM";
  case CASE_E:
    pcVar1 = st::mutable_c_string("BUT_SIBUILD");
    if (DAT_0080874e != '\x03') {
      return "BUT_BUILD";
    }
    break;
  case CASE_F:
    return "BUT_COMPLETEBUILD";
  case CASE_10:
    return "BUT_DISMANTLING";
  case CASE_11:
    pcVar1 = st::mutable_c_string("BUT_SIRCLOAD");
    if (DAT_0080874e != '\x03') {
      return "BUT_RCLOAD";
    }
    break;
  case CASE_12:
    pcVar1 = st::mutable_c_string("BUT_SIRCUNLOAD");
    if (DAT_0080874e != '\x03') {
      return "BUT_RCUNLOAD";
    }
    break;
  case CASE_13:
    pcVar1 = st::mutable_c_string("BUT_SIREPLOAD");
    if (DAT_0080874e != '\x03') {
      return "BUT_REPLOAD";
    }
    break;
  case CASE_14:
    pcVar1 = st::mutable_c_string("BUT_SIREPUNLOAD");
    if (DAT_0080874e != '\x03') {
      return "BUT_REPUNLOAD";
    }
    break;
  case CASE_15:
    return "BUT_RISE";
  case CASE_16:
    return "BUT_FALL";
  case CASE_17:
    return "BUT_TELEOBJ";
  case CASE_18:
    pcVar1 = st::mutable_c_string("BUT_SITELEPORT");
    if (DAT_0080874e != '\x03') goto switchD_005295a5_caseD_4d;
    break;
  case CASE_19:
    return "BUT_ATTACKLBOMB";
  case CASE_1A:
    return "BUT_ATTACKTLS";
  case CASE_1B:
    return "BUT_BLDMISSILE";
  case CASE_1C:
    return "BUT_BLDLASBOMB";
  case CASE_1D:
    return "BUT_BLDBOAT";
  case CASE_1E:
    return "BUT_BLDWORM";
  case CASE_1F:
    return "BUT_BLDDOLPH";
  case CASE_20:
    return "BUT_SELFREP";
  case CASE_21:
    return "BUT_RESEARCH";
  case CASE_22:
    return "BUT_TRGOLD";
  case CASE_23:
    return "BUT_ACTPSIHO";
  case CASE_24:
    return "BUT_ACTISO";
  case CASE_25:
    return "BUT_STOPISO";
  case CASE_26:
    return "BUT_SETDESTINATION";
  case CASE_27:
    pcVar1 = st::mutable_c_string("BUT_SIDISSASSEMBLE");
    if (DAT_0080874e != '\x03') {
      return "BUT_BREAKBUILD";
    }
    break;
  case CASE_28:
    return "BUT_CRACKINFO";
  case CASE_29:
    return "BUT_GETINFO";
  case CASE_2A:
    return "BUT_VIEWZONE";
  case CASE_2B:
    pcVar1 = st::mutable_c_string("BUT_SIATTACKZONE");
    if (DAT_0080874e != '\x03') {
      return "BUT_ATTACKZONE";
    }
    break;
  case CASE_2C:
    pcVar1 = st::mutable_c_string("BUT_SIGUARDZONE");
    if (DAT_0080874e != '\x03') {
      return "BUT_GUARDZONE";
    }
    break;
  case CASE_2D:
    pcVar1 = st::mutable_c_string("BUT_SISCOUT");
    if (DAT_0080874e != '\x03') {
      return "BUT_SCOUT";
    }
    break;
  case CASE_2E:
    return "BUT_BREAKAWAY";
  case CASE_2F:
    pcVar1 = st::mutable_c_string("BUT_SIAI");
    if (DAT_0080874e != '\x03') {
      return "BUT_BEHAVIOUR";
    }
    break;
  case CASE_30:
    return "BUT_TRADE";
  case CASE_31:
    return "BUT_CONTAINER";
  case CASE_32:
switchD_005295a5_caseD_32:
    return "BUT_BREAK";
  case CASE_33:
    return "BUT_REPLINISH";
  case CASE_34:
    return "BUT_ATTACKTRG";
  case CASE_35:
    return "BUT_ENGACTIVEMODE";
  case CASE_36:
    return "BUT_SATELLITE";
  case CASE_37:
    return "BUT_SIDESTINATION";
  case CASE_38:
    return "BUT_IFIELDOFF1";
  case CASE_39:
    return "BUT_SICRACKINFO";
  case CASE_3A:
    return "BUT_TODIMENSION";
  case CASE_3B:
    return "BUT_GIVEENERGY";
  case CASE_3C:
    return "BUT_PRIORESTORATION";
  case CASE_3D:
    return "BUT_SIBUILDSUB";
  case CASE_3E:
    return "BUT_CREATEGATE";
  case CASE_3F:
    return "BUT_RCTOENERGY";
  case CASE_40:
    return "BUT_SIGIVERC";
  case CASE_41:
    return "BUT_SIRESEARCH";
  case CASE_42:
    return "BUT_IFIELDON";
  case CASE_43:
    return "BUT_SIVIEWZONE";
  case CASE_44:
    return "BUT_BUILDLAB";
  case CASE_45:
    return "BUT_IFIELDOFF2";
  case CASE_46:
    return "BUT_SIGETINFO";
  case CASE_47:
    return "BUT_FROMDIMENSION";
  case CASE_48:
    return "BUT_SIREPLINISH";
  case CASE_49:
    return "BUT_SINENGSHIELD";
  case CASE_4A:
    return "BUT_SIREPLPRIOR";
  case CASE_4B:
    return "BUT_SIGHOST";
  case CASE_4C:
    return "BUT_AMINE";
  case CASE_4D:
switchD_005295a5_caseD_4d:
    return "BUT_TELETO";
  case CASE_4F:
    return "BUT_VQB";
  case CASE_50:
    pcVar1 = st::mutable_c_string("BUT_SIHOLD");
    if (DAT_0080874e != '\x03') {
      return "BUT_HOLDBUILD";
    }
    break;
  case CASE_51:
    pcVar1 = st::mutable_c_string("BUT_SIUNHOLD");
    if (DAT_0080874e != '\x03') {
      return "BUT_UNHOLDBUILD";
    }
    break;
  case CASE_52:
    pcVar1 = st::mutable_c_string("BUT_SISFIRE");
    if (DAT_0080874e != '\x03') goto switchD_005295a5_caseD_32;
  }
  return pcVar1;
}

// 00529D80 FUN_00529d80
#line 4 "decomp/ST.exe/functions/00529D80/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00529D80_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12
    */

undefined4 __cdecl st::fn_00529D80(Global_sub_00529D80_param_1Enum param_1,int param_2)

{
  if (param_2 == 1) {
    switch(param_1) {
    case CASE_0:
      return 0x5c30;
    case CASE_1:
      return 0x5c31;
    case CASE_2:
      return 0x5c32;
    case CASE_3:
      return 0x5c33;
    case CASE_4:
      return 0x5c34;
    default:
      return 0x5c35;
    }
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      switch(param_1) {
      case CASE_0:
        return 0x5c4e;
      case CASE_1:
        return 0x5c4f;
      case CASE_2:
        return 0x5c50;
      case CASE_3:
        return 0x5c51;
      case CASE_4:
        return 0x5c52;
      case CASE_5:
        return 0x5c53;
      case CASE_6:
        return 0x5c54;
      case CASE_7:
        return 0x5c55;
      case CASE_8:
        return 0x5c56;
      case CASE_9:
        return 0x5c57;
      case CASE_A:
        return 0x5c58;
      case CASE_B:
        return 0x5c59;
      case CASE_C:
        return 0x5c5a;
      default:
        return 0x5c5b;
      }
    }
    switch(param_1) {
    case CASE_0:
      return 0x5c44;
    case CASE_1:
      return 0x5c45;
    case CASE_2:
      return 0x5c46;
    case CASE_3:
      return 0x5c47;
    case CASE_4:
      return 0x5c48;
    default:
      return 0x5c49;
    }
  }
  switch(param_1) {
  case CASE_0:
    return 0x5c3a;
  case CASE_1:
    return 0x5c3b;
  case CASE_2:
    return 0x5c3c;
  case CASE_3:
    return 0x5c3d;
  default:
    return 0x5c3e;
  }
}

// 00529F90 FUN_00529f90
#line 4 "decomp/ST.exe/functions/00529F90/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __cdecl st::fn_00529F90(RecoveredRecord_00529F90_28CA9BE3 *param_1)

{
  int iVar1;

  iVar1 = 0;
  switch(param_1->field_0014) {
  case 0:
  case 1:
  case 3:
    return 0;
  case 2:
    iVar1 = 1;
  }
  return iVar1;
}

// 00529FE0 FUN_00529fe0
#line 4 "decomp/ST.exe/functions/00529FE0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00538DB0 @ 00538E52 -> read as EAX on
   every CFG path | 00538DB0 @ 00538EB0 -> read as EAX on every CFG path | 0053DAF0 @ 0053DB65 ->
   read as EAX on every CFG path | 0053DAF0 @ 0053DBC4 -> read as EAX on every CFG path */

int __cdecl st::fn_00529FE0(RecoveredRecord_00529FE0_85E582CB *param_1)

{
  int iVar1;

  iVar1 = 0;
  switch(param_1->field_0014) {
  case 0:
    iVar1 = 2;
    break;
  case 1:
  case 3:
    return 0;
  case 2:
    return 1;
  }
  return iVar1;
}

// 0052A030 FUN_0052a030
#line 4 "decomp/ST.exe/functions/0052A030/decomp.c"
undefined4 __cdecl st::fn_0052A030(RecoveredRecord_0052A030_A4DBF22A *param_1)

{
  uint uVar1;
  uVar1 = 0;
  switch(param_1->field_0014) {
  case 0:
    return 2;
  case 1:
    uVar1 = 1;
    break;
  case 2:
  case 3:
    return 0;
  }
  return uVar1;
}

// 0052A080 FUN_0052a080
#line 4 "decomp/ST.exe/functions/0052A080/decomp.c"
undefined4 __cdecl st::fn_0052A080(RecoveredRecord_0052A080_FE10D39B *param_1)

{
  switch(param_1->field_0014) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
    return 1;
  }
  return 0;
}

// 0052A0D0 FUN_0052a0d0
#line 4 "decomp/ST.exe/functions/0052A0D0/decomp.c"
undefined4 __cdecl st::fn_0052A0D0(RecoveredRecord_0052A0D0_AA895067 *param_1)

{
  uint uVar1;
  uVar1 = 1;
  switch(param_1->field_0014) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    return 3;
  }
  return uVar1;
}

// 0052A140 FUN_0052a140
#line 4 "decomp/ST.exe/functions/0052A140/decomp.c"
undefined4 __cdecl st::fn_0052A140(RecoveredRecord_0052A140_CB7DEA2A *param_1)

{
  switch(param_1->field_0014) {
  case 0:
  case 1:
  case 3:
    return 0;
  case 2:
  }
  return 1;
}

// 0052A190 FUN_0052a190
#line 4 "decomp/ST.exe/functions/0052A190/decomp.c"
undefined4 __cdecl st::fn_0052A190(RecoveredRecord_0052A190_200815B9 *param_1)

{
  switch(param_1->field_0014) {
  case 0:
  case 1:
    return 0;
  case 2:
  case 3:
  }
  return 1;
}

// 0052A1E0 FUN_0052a1e0
#line 4 "decomp/ST.exe/functions/0052A1E0/decomp.c"
undefined4 __cdecl st::fn_0052A1E0(RecoveredRecord_0052A1E0_8B1F7625 *param_1)

{
  switch(param_1->field_0014) {
  case 0:
    return 2;
  case 1:
    break;
  case 2:
  case 3:
    return 1;
  }
  return 0;
}

// 0052A230 FUN_0052a230
#line 4 "decomp/ST.exe/functions/0052A230/decomp.c"
undefined4 __cdecl st::fn_0052A230(RecoveredRecord_0052A230_82824298 *param_1)

{
  uint uVar1;
  uVar1 = 0;
  switch(param_1->field_0014) {
  case 0:
    return 9;
  case 1:
    uVar1 = 7;
    break;
  case 2:
  case 3:
    return 8;
  }
  return uVar1;
}

// 0052A280 FUN_0052a280
#line 4 "decomp/ST.exe/functions/0052A280/decomp.c"
undefined4 __cdecl st::fn_0052A280(RecoveredRecord_0052A280_B7ADADEA *param_1)

{
  switch(param_1->field_0014) {
  case 0:
    return 6;
  case 1:
    break;
  case 2:
  case 3:
    return 4;
  }
  return 5;
}

// 0052A2D0 FUN_0052a2d0
#line 4 "decomp/ST.exe/functions/0052A2D0/decomp.c"
undefined4 __cdecl st::fn_0052A2D0(RecoveredRecord_0052A2D0_279FA866 *param_1)

{
  switch(param_1->field_0014) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
    return 0;
  }
  return 1;
}

// 0052A320 FUN_0052a320
#line 4 "decomp/ST.exe/functions/0052A320/decomp.c"
undefined4 __cdecl st::fn_0052A320(RecoveredRecord_0052A320_3DA6AF5F *param_1)

{
  uint uVar1;
  uVar1 = 1;
  switch(param_1->field_0014) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    return 3;
  }
  return uVar1;
}

// 0052A390 FUN_0052a390
#line 4 "decomp/ST.exe/functions/0052A390/decomp.c"
undefined4 __cdecl st::fn_0052A390(RecoveredRecord_0052A390_F1ABEB26 *param_1)

{
  switch(param_1->field_0014) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
    return 0;
  }
  return 1;
}

// 0052A3E0 FUN_0052a3e0
#line 4 "decomp/ST.exe/functions/0052A3E0/decomp.c"
undefined4 __cdecl st::fn_0052A3E0(RecoveredRecord_0052A3E0_3ACAB03C *param_1)

{
  switch(param_1->field_0014) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
    return 0;
  }
  return 1;
}

// 0052A430 FUN_0052a430
#line 4 "decomp/ST.exe/functions/0052A430/decomp.c"
int __cdecl st::fn_0052A430(AnonShape_0052A430_8E4D893F *param_1)

{
  AnonNested_0052A430_0014_F40A3334 *pAVar1;
  uint local_8;

  local_8 = 0;
  pAVar1 = param_1->field_0014;
  switch(pAVar1->field_0004) {
  case 0:
  case 2:
    return pAVar1->field_0000 * 2 + -2;
  case 1:
    return pAVar1->field_0000 * 2 + -1;
  case 3:
    local_8 = (uint)(pAVar1->field_0008 != 0);
  }
  return (local_8 - 2) + pAVar1->field_0000 * 2;
}

// 0052A4D0 FUN_0052a4d0
#line 4 "decomp/ST.exe/functions/0052A4D0/decomp.c"
undefined4 __cdecl st::fn_0052A4D0(RecoveredRecord_0052A4D0_11C787C1 *param_1)

{
  switch(*(undefined4 *)(param_1->field_0014 + 4)) {
  case 0:
  case 2:
    return 1;
  case 1:
  case 3:
  }
  return 0;
}

// 0052A540 FUN_0052a540
#line 4 "decomp/ST.exe/functions/0052A540/decomp.c"
undefined4 __cdecl st::fn_0052A540(RecoveredRecord_0052A540_7E2E1D84 *param_1)

{
  uint local_8;
  local_8 = 0;
  switch(*(undefined4 *)(param_1->field_0014 + 4)) {
  case 0:
    return 0;
  case 1:
  case 3:
    local_8 = 1;
    break;
  case 2:
    return 2;
  }
  return local_8;
}

// 0052A5C0 FUN_0052a5c0
#line 4 "decomp/ST.exe/functions/0052A5C0/decomp.c"
undefined4 __cdecl st::fn_0052A5C0(RecoveredRecord_0052A5C0_7CB2979F *param_1)

{
  uint local_8;
  local_8 = 7;
  switch(*(undefined4 *)(param_1->field_0014 + 4)) {
  case 0:
    return 7;
  case 1:
  case 3:
    local_8 = 8;
    break;
  case 2:
    return 9;
  }
  return local_8;
}

// 0052A640 FUN_0052a640
#line 4 "decomp/ST.exe/functions/0052A640/decomp.c"
undefined4 __cdecl st::fn_0052A640(RecoveredRecord_0052A640_D5301A8C *param_1)

{
  uint local_8;
  local_8 = 5;
  switch(*(undefined4 *)(param_1->field_0014 + 4)) {
  case 0:
    return 5;
  case 1:
  case 3:
    local_8 = 4;
    break;
  case 2:
    return 6;
  }
  return local_8;
}

// 0052A6C0 FUN_0052a6c0
#line 4 "decomp/ST.exe/functions/0052A6C0/decomp.c"
uint __cdecl st::fn_0052A6C0(RecoveredRecord_0052A6C0_8EEA104A *param_1)

{
  return (uint)(param_1->field_0014 < 2);
}

// 0052A6F0 FUN_0052a6f0
#line 4 "decomp/ST.exe/functions/0052A6F0/decomp.c"
undefined4 __cdecl st::fn_0052A6F0(RecoveredRecord_0052A6F0_8710A4D2 *param_1)

{
  uint uVar1;
  uVar1 = 0;
  if (param_1->field_0014 == 0) {
    uVar1 = 2;
  }
  else if (param_1->field_0014 == 2) {
    return 1;
  }
  return uVar1;
}

// 0052A730 FUN_0052a730
#line 4 "decomp/ST.exe/functions/0052A730/decomp.c"
undefined4 __cdecl st::fn_0052A730(RecoveredRecord_0052A730_7C85D1BF *param_1)

{
  uint uVar1;
  uVar1 = 7;
  if (param_1->field_0014 == 0) {
    uVar1 = 9;
  }
  else if (param_1->field_0014 == 2) {
    return 8;
  }
  return uVar1;
}

// 0052A770 FUN_0052a770
#line 4 "decomp/ST.exe/functions/0052A770/decomp.c"
undefined4 __cdecl st::fn_0052A770(RecoveredRecord_0052A770_CB744C05 *param_1)

{
  uint uVar1;
  uVar1 = 5;
  if (param_1->field_0014 == 0) {
    uVar1 = 6;
  }
  else if (param_1->field_0014 == 2) {
    return 4;
  }
  return uVar1;
}

// 0052A7B0 FUN_0052a7b0
#line 4 "decomp/ST.exe/functions/0052A7B0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005522A0 @ 005524FB
   -> PUSH PUSH EAX */

int __cdecl st::fn_0052A7B0(AnonShape_0052A7B0_DD603BF4 *param_1)

{
  AnonNested_0052A7B0_0014_0177A204 *pAVar1;
  int iVar2;
  uint local_8;

  local_8 = 0;
  iVar2 = 8;
  pAVar1 = param_1->field_0014;
  switch(pAVar1->field_0000) {
  case 1:
    iVar2 = 0;
    break;
  case 2:
    iVar2 = 2;
    break;
  case 3:
    iVar2 = 4;
    break;
  case 4:
    iVar2 = 0xe;
    break;
  case 5:
    iVar2 = 6;
  }
  switch(pAVar1->field_0004) {
  case 0:
  case 2:
    return iVar2;
  case 1:
    return iVar2 + 1;
  case 3:
    local_8 = (uint)(pAVar1->field_0008 != 0);
  }
  return local_8 + iVar2;
}

// 0052A890 FUN_0052a890
#line 4 "decomp/ST.exe/functions/0052A890/decomp.c"
char __cdecl st::fn_0052A890(AnonShape_0052A890_F679384E *param_1)

{
  AnonNested_0052A890_0014_9BCDCE5B *pAVar1;
  char cVar2;
  bool bVar3;

  cVar2 = '\0';
  bVar3 = false;
  pAVar1 = param_1->field_0014;
  switch(pAVar1->field_0000) {
  case 1:
    cVar2 = '\0';
    break;
  case 2:
    cVar2 = '\x02';
    break;
  case 3:
    cVar2 = '\x04';
    break;
  case 4:
    cVar2 = '\x06';
  }
  switch(pAVar1->field_0004) {
  case 0:
  case 2:
    return cVar2;
  case 1:
    return cVar2 + '\x01';
  case 3:
    bVar3 = pAVar1->field_0008 != 0;
  }
  return bVar3 + cVar2;
}

// 0052A970 FUN_0052a970
#line 4 "decomp/ST.exe/functions/0052A970/decomp.c"
undefined4 * __cdecl st::fn_0052A970(uint param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3_mg2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  char *pcVar6;

  uVar3 = 0xffffffff;
  pcVar2 = &CHAR_00h_008016a0;
  do {
    pcVar6 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = pcVar6 + -uVar3;
  pcVar6 = reinterpret_cast<char *>(&DAT_008016a4);
  memmove(pcVar6, pcVar2, uVar3); /* compiler REP MOVS byte copy */
  pcVar2 = reinterpret_cast<char *>(((byte *)pcVar2 + uVar3));
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_1 != 0) {
      uVar3 = param_1 & 0x40000000;
      uVar5 = (ushort)param_1;
      if ((param_1 & 0x1000000) != 0) {
        if (((uVar5 != 0) || ((param_1 & 0x8000000) != 0)) ||
           (pcVar2 = &CHAR_00h_008016a0, uVar3 != 0)) {
          pcVar2 = (char *)&DAT_007c6eec;
        }
        /* ST_CALLSITE[0052A9F0]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_008016a4,st::mutable_c_string("%s%s"),"Shift",pcVar2);
      }
      if ((param_1 & 0x8000000) != 0) {
        if ((uVar5 != 0) || (pcVar2 = &CHAR_00h_008016a0, uVar3 != 0)) {
          pcVar2 = (char *)&DAT_007c6eec;
        }
        /* ST_CALLSITE[0052AA2B]: CALL EDI */
        st::external_00000080((LPSTR)&DAT_008016a4,st::mutable_c_string("%s%s%s"),&DAT_008016a4,&DAT_007c5454,pcVar2);
      }
      if (uVar3 != 0) {
        pcVar2 = (char *)&DAT_007c6eec;
        if (uVar5 == 0) {
          pcVar2 = &CHAR_00h_008016a0;
        }
        /* ST_CALLSITE[0052AA61]: CALL EDI */
        st::external_00000080((LPSTR)&DAT_008016a4,st::mutable_c_string("%s%s%s"),&DAT_008016a4,&DAT_007c5670,pcVar2);
      }
      if (uVar5 < 0x100) {
        pcVar2 = (char *)&DAT_007c5210 + (param_1 & 0xffff) * 0x14;
      }
      else {
        pcVar2 = &CHAR_00h_008016a0;
      }
      /* ST_CALLSITE[0052AA94]: CALL EDI */
      st::external_00000080((LPSTR)&DAT_008016a4,st::mutable_c_string("%s%s"),&DAT_008016a4,pcVar2);
      return &DAT_008016a4;
    }
    pcVar3_mg2 = st::fn_006B0140(0x2732,g_hINSTANCE_00807618);
    uVar3 = 0xffffffff;
    do {
      pcVar2 = pcVar3_mg2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar2 = pcVar3_mg2 + 1;
      cVar1 = *pcVar3_mg2;
      pcVar3_mg2 = pcVar2;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar2 + -uVar3;
    pcVar6 = reinterpret_cast<char *>(&DAT_008016a4);
    memmove(pcVar6, pcVar2, uVar3); /* compiler REP MOVS byte copy */
  }
  return &DAT_008016a4;
}

// 0052AF50 FUN_0052af50
#line 4 "decomp/ST.exe/functions/0052AF50/decomp.c"
void __cdecl st::fn_0052AF50(byte param_1,float param_2,float param_3)

{
  if ((param_1 < 2) && (g_cPanel_00801688 != nullptr)) {
    /* ST_CALLSITE[0052AF6D]: CALL 0x00401ad2; direct=00401AD2 CPanelTy::sub_0052AFE0 */
    st::fn_00401AD2(g_cPanel_00801688,param_1,param_2,param_3);
  }
  return;
}

// 0052AF90 FUN_0052af90
#line 4 "decomp/ST.exe/functions/0052AF90/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl st::fn_0052AF90(byte param_1,int param_2,int param_3)

{
  st::fn_00402D5B(param_1,(float)param_2 * _DAT_007904f8 + _DAT_007904f4,
                     (float)param_3 * _DAT_007904f8 + _DAT_007904f4);
  return;
}

// 0052B670 CreateMoney
#line 4 "decomp/ST.exe/functions/0052B670/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA814>004048BD

   [STObjectFactoryApplier] Central object factory for 0x011F (ST_OBJECT_MONEY).
   Evidence: registry[30] at 007CA810 stores type 0x011F and executable pointer 004048BD; allocation
   size 166 uniquely matches /MoneyTy */

MoneyTy * __cdecl st::fn_0052B670(void)

{
  MoneyTy *this;


  this = STPointerBoundaryCast<MoneyTy *>(st::fn_006B04D0(0xa6));
  if (this != nullptr) {

    st::fn_006E5FB0(this);
    this->vtable = &st_global_0079ACE4;
    this->field_0048 = 0x24;
    this->field_0050 = 0x24;
    this->field_0034 = 0xf;
    this->field_0054 = 0xb;
    this->field_004C = 0xb;
    this->field_0044 = 0xb;
    this->field_005C = 8;
    this->field_0060 = 0x1e;
    this->field_0064 = 0xc;
    this->field_0068 = 0;
    this->field_007E = nullptr;
    this->field_007A = nullptr;
    this->field_0076 = nullptr;
    this->field_0072 = nullptr;
    this->field_0082 = nullptr;
    this->field_006E = nullptr;
    this->field_006A = nullptr;
    this->field_009E = 0;
    this->field_00A3 = 0;
    this->field_009A = 0;
    this->field_0096 = 0;
    this->field_0092 = 0;
    this->field_008E = 0;
    this->field_008A = 0;
    this->field_0086 = 0;
    this->field_00A2 = 1;
    return this;
  }
  return nullptr;
}

// 0052CCE0 FUN_0052cce0
#line 4 "decomp/ST.exe/functions/0052CCE0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0052DD20 -> 0052CCE0 @ 0052DD7E; data at 0080679C

   [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

HDC __cdecl st::fn_0052CCE0(ushort *param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  HDC pHVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  LOGFONTA *pLVar7;
  char *pcVar8;
  CHAR *pCVar9;
  LOGFONTA local_b0;
  byte local_74 [88];
  byte local_1c [24];

  pLVar7 = &local_b0;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = reinterpret_cast<LOGFONTA *>(&pLVar7->lfWidth);
  }
  local_b0.lfCharSet = param_3;
  uVar4 = 0xffffffff;
  pcVar6 = st::mutable_c_string("Verdana");
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_b0.lfHeight = -0xf;
  local_b0.lfWidth = 0;
  local_b0.lfEscapement = 0;
  local_b0.lfOrientation = 0;
  local_b0.lfWeight = 700;
  local_b0.lfItalic = '\0';
  local_b0.lfUnderline = '\0';
  local_b0.lfStrikeOut = '\0';
  local_b0.lfOutPrecision = '\x03';
  local_b0.lfClipPrecision = '\x02';
  local_b0.lfQuality = '\x01';
  local_b0.lfPitchAndFamily = '\"';
  local_1c[0] = 0;
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_b0.lfFaceName;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar9 = pCVar9 + 4;
  }
  local_1c[1] = 0xa6;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pCVar9 = pCVar9 + 1;
  }
  local_1c[3] = 0xa6;
  local_1c[2] = 10;
  local_1c[4] = 0x10;
  local_1c[5] = 0xa6;
  local_1c[6] = 0x16;
  local_1c[7] = 0xa6;
  local_1c[8] = 0x1c;
  local_1c[9] = 0xa6;
  local_1c[10] = 0x22;
  local_1c[0xb] = 0xa6;
  local_1c[0xc] = 0x28;
  local_1c[0xd] = 0xa6;
  local_1c[0xe] = 0x2e;
  local_1c[0xf] = 0xa6;
  local_1c[0x10] = 0x35;
  local_1c[0x11] = 0xa6;
  local_1c[0x12] = 0xac;
  local_1c[0x13] = 0xa6;
  local_1c[0x14] = 0x8e;
  local_74[0] = 0x20;
  local_74[1] = 0x21;
  local_74[2] = 0x22;
  local_74[3] = 0x23;
  local_74[4] = 0x25;
  local_74[5] = 0x26;
  local_74[6] = 0x27;
  local_74[7] = 0x28;
  local_74[8] = 0x29;
  local_74[9] = 0x2c;
  local_74[10] = 0x2d;
  local_74[0xb] = 0x2e;
  local_74[0xc] = 0x2f;
  local_74[0xd] = 0x30;
  local_74[0xe] = 0x31;
  local_74[0xf] = 0x32;
  local_74[0x10] = 0x33;
  local_74[0x11] = 0x34;
  local_74[0x12] = 0x35;
  local_74[0x13] = 0x36;
  local_74[0x14] = 0x37;
  local_74[0x21] = 10;
  local_74[0x20] = 0xd;
  local_74[0x42] = 0xd;
  local_74[0x43] = 10;
  local_74[0x15] = 0x38;
  local_74[0x16] = 0x39;
  local_74[0x17] = 0x3a;
  local_74[0x18] = 0x3d;
  local_74[0x19] = 0x3e;
  local_74[0x1a] = 0x3f;
  local_74[0x1b] = 0x41;
  local_74[0x1c] = 0x42;
  local_74[0x1d] = 0x43;
  local_74[0x1e] = 0x44;
  local_74[0x1f] = 0x45;
  local_74[0x22] = 0x46;
  local_74[0x23] = 0x47;
  local_74[0x24] = 0x48;
  local_74[0x25] = 0x49;
  local_74[0x26] = 0x4a;
  local_74[0x27] = 0x4b;
  local_74[0x28] = 0x4c;
  local_74[0x29] = 0x4d;
  local_74[0x2a] = 0x4e;
  local_74[0x2b] = 0x4f;
  local_74[0x2c] = 0x50;
  local_74[0x2d] = 0x51;
  local_74[0x2e] = 0x52;
  local_74[0x2f] = 0x53;
  local_74[0x30] = 0x54;
  local_74[0x31] = 0x55;
  local_74[0x32] = 0x56;
  local_74[0x33] = 0x57;
  local_74[0x34] = 0x58;
  local_74[0x35] = 0x59;
  local_74[0x36] = 0x5a;
  local_74[0x37] = 0x5c;
  local_74[0x38] = 0x5f;
  local_74[0x39] = 0x61;
  local_74[0x3a] = 0x62;
  local_74[0x3b] = 99;
  local_74[0x3c] = 100;
  local_74[0x3d] = 0x65;
  local_74[0x3e] = 0x66;
  local_74[0x3f] = 0x67;
  local_74[0x40] = 0x68;
  local_74[0x41] = 0x69;
  local_74[0x44] = 0x6a;
  local_74[0x45] = 0x6b;
  local_74[0x46] = 0x6c;
  local_74[0x47] = 0x6d;
  local_74[0x48] = 0x6e;
  local_74[0x49] = 0x6f;
  local_74[0x4a] = 0x70;
  local_74[0x4b] = 0x71;
  local_74[0x4c] = 0x72;
  local_74[0x4d] = 0x73;
  local_74[0x4e] = 0x74;
  local_74[0x4f] = 0x75;
  local_74[0x50] = 0x76;
  local_74[0x51] = 0x77;
  local_74[0x52] = 0x78;
  local_74[0x53] = 0x79;
  local_74[0x54] = 0x7a;
  local_74[0x55] = 0x7c;
  local_74[0x56] = 0x7e;
  /* ST_CALLSITE[0052CF57]: CALL 0x0070d1f0; direct=0070D1F0 ccFntTy::operator_new */
  pHVar2 = st::fn_0070D1F0
                     (0x19d,&local_b0,nullptr,local_74,st::machine_word_boundary_cast<int>(param_1),local_1c,10,2,2,1,0x10001c,
                      param_2);
  return pHVar2;
}

// 0052D020 CreatePopUp
#line 4 "decomp/ST.exe/functions/0052D020/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8CC>00402EE1

   [STObjectFactoryApplier] Central object factory for 0x0125 (ST_OBJECT_POP_UP).
   Evidence: registry[53] at 007CA8C8 stores type 0x0125 and executable pointer 00402EE1; allocation
   size 161 uniquely matches /PopUpTy */

PopUpTy * __cdecl st::fn_0052D020(void)

{
  PopUpTy *this;
  uint *puVar1;
  int iVar2;


  this = STPointerBoundaryCast<PopUpTy *>(st::fn_006B04D0(0xa1));
  if (this != nullptr) {

    st::fn_006E5FB0(this);
    this->vtable = &st_global_0079ACE8;
    this->field_0090 = nullptr;
    this->field_0094 = nullptr;
    this->field_0098 = nullptr;
    puVar1 = this->field_0054;
    iVar2 = 0xf;
    do {
      puVar1[-0xf] = 0xffffffff;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    this->field_009C = 0;
    return this;
  }
  return nullptr;
}

// 0052E3A0 CreateOptPanel
#line 4 "decomp/ST.exe/functions/0052E3A0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA82C>004038FF

   [STObjectFactoryApplier] Central object factory for 0x0122 (ST_OBJECT_OPT_PANEL).
   Evidence: registry[33] at 007CA828 stores type 0x0122 and executable pointer 004038FF; allocation
   size 774 uniquely matches /OptPanelTy */

OptPanelTy * __cdecl st::fn_0052E3A0(void)

{
  OptPanelTy *this;


  this = STPointerBoundaryCast<OptPanelTy *>(st::fn_006B04D0(0x306));
  if (this != nullptr) {

    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = CASE_2;
    this->field_0178 = 0;
    this->vtable = &st_global_0079AD10;
    this->field_003C = 0xc;
    this->field_0044 = 0x9c;
    this->field_0040 = 0x128;
    this->field_0048 = 0xb4;
    this->field_0180 = nullptr;
    this->field_017C = nullptr;
    this->field_019C = 0;
    this->field_01A0 = 0;
    this->field_0184 = nullptr;
    this->field_0188 = 0;
    this->field_018C = nullptr;
    this->field_0190 = nullptr;
    this->field_0194 = nullptr;
    this->field_0198 = nullptr;
    this->field_01A4 = CASE_1;
    this->field_01AD[0] = 0;
    this->field_01AD[1] = 0;
    memset(this->field_01B5, 0, 0x28); /* compiler bulk-zero initialization */
    this->field_01DD = (HANDLE)0x0;
    this->field_01E1 = 0;
    this->field_01E3 = 0;
    this->field_01AC = 0;
    this->field_01E5 = nullptr;
    this->field_01F1 = nullptr;
    this->field_01E9 = nullptr;
    this->field_01ED = nullptr;
    this->field_02FD = nullptr;
    this->field_02F9 = nullptr;
    this->field_0301 = 0;
    return this;
  }
  return nullptr;
}
