#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_Expl.cpp

// 00603740 STExplosion::GetMessage
#line 4 "decomp/ST.exe/functions/00603740/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosion::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402E5F|00603740; family_names=STExplosion::GetMessage; ret4=12;
   direct_offsets={10:1,14:1,18:2,1c:12} */

int __thiscall st::fn_00603740(STExplosion *this,STMessage *message)

{
  uint uVar1;
  STMessageId SVar2;
  AnonShape_00604A90_035626E6 *pAVar3;
  short sVar5;
  STExplosion *this_00;
  STExplosion *this_01;
  int local_EAX_36;
  int iVar7;
  int local_EAX_288;
  int local_EAX_481;
  int local_EAX_670;
  int local_EAX_859;
  int local_EAX_1048;
  int local_EAX_1235;
  AnonReceiver_00636260 *this_02;
  int local_EAX_1496;
  int iVar8;
  int iVar6;
  AnonShape_00604A90_035626E6 *pAVar7;
  byte *puVar8;
  void **slotStorage;
  InternalExceptionFrame local_54;
  STExplosion *local_10;
  byte *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  local_EAX_36 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_Expl.cpp"),0x1bb,0,local_EAX_36,
                               st::mutable_c_string("%s"),"STExplosion::GetMessage");
    if (iVar8 == 0) {
      st::fn_006A5E40(local_EAX_36,0,st::mutable_c_string("E:\\__titans\\nick\\to_Expl.cpp"),0x1bd);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar7 = st::fn_00403EBD((STGameObjC *)local_10,message);
  this_01 = local_10;
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  SVar2 = message->id;
  if (SVar2 < MESS_TORPHIT) {
    if (SVar2 != MESS_SHARED_010F) {
      if (SVar2 == MESS_ID_NONE) {
        if (0 < this_00->field_02B7) {
          iVar6 = (g_playSystem_00802A38->field_00E4 - this_00->field_026E) + this_00->field_02B7;
          if ((iVar6 == 0xf) && (this_00->field_026D != '\0')) {
            if (this_00->field_02BB == nullptr) {
              this_02 = (AnonReceiver_00636260 *)st::fn_00401E92();
              this_00->field_02BB = (HoloTy *)this_02;
              if (this_02 != nullptr) {
                st::fn_00405790
                          (this_02,this_00->field_01F1,this_00->field_01F5,
                           st::machine_word_boundary_cast<int>(this_00->field_01F9 + -0x28),0x96,0x1e,5,0);
              }
            }
          }
          else if ((0xf < iVar6) &&
                  ((this_00->field_02BB != nullptr &&
                   (iVar6 = st::fn_00403C4C((int *)this_00->field_02BB), iVar6 != 0)))) {
            st::fn_00401B40((AnonShape_006366D0_80B1100F *)this_00->field_02BB);
            st::fn_0072E2B0(this_00->field_02BB);
            this_00->field_02B7 = -1;
            this_00->field_02BB = nullptr;
          }
        }
        if (this_00->field_026D == '\0') {
          local_EAX_1496 = st::fn_00401E9C(this_00);
          if (local_EAX_1496 != 0) {
            st::fn_00404250((int)this_00);
            this_00->field_026D = 1;
          }
        }
        else {
          st::fn_00405D76((STExplosionC *)this_00);
        }
        st::fn_00404714((AnonShape_006048E0_C1705B76 *)this_00);
        iVar6 = st::fn_0040470F(this_00,0);
        if (iVar6 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        st::fn_004054CF(this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_CREATE) {
        uVar1 = st::machine_word_boundary_cast<uint>(this_00->field_001C * 0x41c64e6d + 0x3039);
        this_00->field_001C = uVar1;
        _DAT_00811790 = (uVar1 >> 0x10) % 0x33;
        pAVar3 = (AnonShape_00604A90_035626E6 *)(message->arg0).u32;
        if (*(int *)&pAVar3->field_0xc == 0) {
          pAVar7 = pAVar3;
          puVar8 = (byte *)&this_00->field_0x1d5;
          memmove(puVar8, pAVar7, 0x40); /* compiler REP MOVS byte copy */
          st::fn_004047A0(local_10);
          puVar8 = (byte *)(&this_01->field_0272);
          local_EAX_288 = st::fn_00401E9C(this_01);
          if (local_EAX_288 != 0) {
            this_01->field_026D = 1;
          }
          switch(*(undefined4 *)&pAVar3->field_0x18) {
          case 0:
            iVar6 = *(int *)&pAVar3->field_0x1c;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            *puVar8 = iVar6 + -2;
            this_01->field_027A = 5;
            iVar6 = *(int *)&pAVar3->field_0x20;
            if (iVar6 < 0) {
              iVar6 = (short)(iVar6 / 0xc9) + -1;
            }
            else {
              iVar6 = (int)(short)(iVar6 / 0xc9);
            }
            this_01->field_0276 = iVar6 + -2;
            this_01->field_027E = 5;
            local_EAX_481 =
                 st::fn_00404CA0(this_01,*(int *)&pAVar3->field_0x1c,*(int *)&pAVar3->field_0x20,
                              *(int *)&pAVar3->field_0x24,*(int *)&pAVar3->field_0x28,
                              *(uint **)&pAVar3->field_0x34,*(undefined4 *)&pAVar3->field_0x38,
                              *(int *)&pAVar3->field_0x3c,*(undefined4 *)&pAVar3->field_0x30,
                              this_01->field_026D);
            this_01->field_0269 = local_EAX_481;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 1:
            iVar6 = *(int *)&pAVar3->field_0x1c;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            break;
          case 2:
            iVar6 = *(int *)&pAVar3->field_0x1c;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            *puVar8 = iVar6 + -2;
            this_01->field_027A = 5;
            iVar6 = *(int *)&pAVar3->field_0x20;
            if (iVar6 < 0) {
              iVar6 = (short)(iVar6 / 0xc9) + -1;
            }
            else {
              iVar6 = (int)(short)(iVar6 / 0xc9);
            }
            this_01->field_0276 = iVar6 + -2;
            this_01->field_027E = 5;
            local_EAX_859 =
                 st::fn_00402824(this_01,*(int *)&pAVar3->field_0x1c,*(int *)&pAVar3->field_0x20,
                                    *(int *)&pAVar3->field_0x24);
            this_01->field_0269 = local_EAX_859;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 3:
            iVar6 = *(int *)&pAVar3->field_0x1c;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            *puVar8 = iVar6 + -2;
            this_01->field_027A = 5;
            iVar6 = *(int *)&pAVar3->field_0x20;
            if (iVar6 < 0) {
              iVar6 = (short)(iVar6 / 0xc9) + -1;
            }
            else {
              iVar6 = (int)(short)(iVar6 / 0xc9);
            }
            this_01->field_0276 = iVar6 + -2;
            this_01->field_027E = 5;
            local_EAX_1048 =
                 st::fn_0040453E(this_01,*(uint *)&pAVar3->field_0x1c,
                                    *(uint *)&pAVar3->field_0x20,*(int **)&pAVar3->field_0x24,
                                    *(int *)&pAVar3->field_0x28);
            this_01->field_0269 = local_EAX_1048;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 4:
            iVar6 = *(int *)&pAVar3->field_0x1c;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            *puVar8 = iVar6 + -2;
            this_01->field_027A = 5;
            iVar6 = *(int *)&pAVar3->field_0x20;
            if (iVar6 < 0) {
              iVar6 = (short)(iVar6 / 0xc9) + -1;
            }
            else {
              iVar6 = (int)(short)(iVar6 / 0xc9);
            }
            this_01->field_0276 = iVar6 + -2;
            this_01->field_027E = 5;
            local_EAX_1235 =
                 st::fn_004028D3(this_01,*(uint *)&pAVar3->field_0x1c,
                                    *(uint **)&pAVar3->field_0x20,*(uint *)&pAVar3->field_0x24,
                                    *(undefined4 *)&pAVar3->field_0x28,
                                    *(undefined4 *)&pAVar3->field_0x34,*(int *)&pAVar3->field_0x38,
                                    *(undefined4 *)&pAVar3->field_0x3c,0,this_01->field_026D);
            this_01->field_0269 = local_EAX_1235;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          default:
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          *puVar8 = iVar6 + -2;
          this_01->field_027A = 5;
          iVar6 = *(int *)&pAVar3->field_0x20;
          if (iVar6 < 0) {
            iVar6 = (short)(iVar6 / 0xc9) + -1;
          }
          else {
            iVar6 = (int)(short)(iVar6 / 0xc9);
          }
          this_01->field_0276 = iVar6 + -2;
          this_01->field_027E = 5;
          local_EAX_670 =
               st::fn_00402E73(this_01,*(int *)&pAVar3->field_0x1c,*(int *)&pAVar3->field_0x20,
                                  *(int *)&pAVar3->field_0x24,*(undefined4 *)&pAVar3->field_0x28);
          this_01->field_0269 = local_EAX_670;
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        st::fn_00402C3E(this_00,pAVar3);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar2 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      st::fn_00401118(this_00);
      if (this_00->field_026D != '\0') {
        st::fn_0040514B(this_00);
      }
      if (this_00->field_02BB != nullptr) {
        st::fn_00401B40((AnonShape_006366D0_80B1100F *)this_00->field_02BB);
        st::fn_0072E2B0(this_00->field_02BB);
        this_00->field_02BB = nullptr;
      }
      st::fn_00403F3A(this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    local_c = (byte *)st::fn_0040565F((STExplosionC *)this_00,&local_8);
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    st::fn_004025F9(g_playSystem_00802A38,(int *)this_00->field_0018,local_c,local_8);
    slotStorage = st::pointer_boundary_cast<void **>(&local_c);
  }
  else {
    if (SVar2 != MESS_ID_ALLCREATE) {
      if (SVar2 == MESS_STOCTOPUSC_0112) {
        st::fn_0040470F(this_00,0x112);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar2 != MESS_STSPRGAMEOBJC_0113) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      st::fn_0040470F(this_00,0x113);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    slotStorage = &this_00->field_02B3;
    if (this_00->field_02B3 == nullptr) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    st::fn_004031BB(this_00,st::pointer_boundary_cast<int *>(this_00->field_02B3));
  }
  st::fn_006AB060(slotStorage);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

// 006041A0 STExplosionC::CreateGroupPart
#line 4 "decomp/ST.exe/functions/006041A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::CreateGroupPart */

int __thiscall st::fn_006041A0(STExplosionC *this,int param_1)

{
  STExplosionC *pSVar2;
  int iVar3;
  HoloTy *pHVar3;
  int iVar5;
  int iVar4;
  HoloTy **ppHVar5;
  InternalExceptionFrame local_50;
  STExplosionC *local_c;
  int local_8;

  iVar4 = 0;
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    if (0 < param_1) {
      ppHVar5 = &local_c->field_0219;
      do {
        pHVar3 = (HoloTy *)st::fn_0040257C();
        *ppHVar5 = pHVar3;
        *(STExplosionC **)&pHVar3[4].field_0002 = pSVar2;
        pHVar3 = *ppHVar5;
        ppHVar5 = ppHVar5 + 1;
        *(int *)&pHVar3[4].field_0x6 = iVar4;
        local_8 = local_8 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (0 < local_8) {
    ppHVar5 = &local_c->field_0219;
    iVar4 = local_8;
    do {
      st::fn_0072E2B0(*ppHVar5);
      ppHVar5 = ppHVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_Expl.cpp"),0x1f6,0,iVar3,st::mutable_c_string("%s"),
                             "STExplosionC::CreateGroupPart");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\nick\\to_Expl.cpp"),0x1f8);
  return 0xffff;
}

// 00604A90 STExplosionC::SaveObj
#line 4 "decomp/ST.exe/functions/00604A90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::SaveObj */

undefined4 * __thiscall st::fn_00604A90(STExplosionC *this,uint *param_1)

{
  int iVar1;
  undefined1 *puVar3;
  int iVar3;
  HoloTy **ppHVar4;
  uint *puVar5;
  int iVar7;
  byte *puVar6;
  int iVar8;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  AnonShape_00604A90_035626E6 *pAVar13;
  uint *puVar14;
  HoloTy **local_b4;
  InternalExceptionFrame local_8c;
  AnonShape_00604A90_035626E6 *local_48;
  uint *local_44;
  uint *local_3c [3];
  int local_30;
  int local_2c [2];
  undefined1 *local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079cc18);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff40);
  local_48 = nullptr;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  ExceptionList = &local_14;
  iVar3 = st::fn_0072D7F0
                    (local_8c.jumpBuffer,2,Library::MSVCRT::__seh_longjmp_unwind_4,0xffffffff);
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff40);
  if (iVar3 == 0) {
    *param_1 = 0;
    local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff40);
    local_48 = st::pointer_boundary_cast<AnonShape_00604A90_035626E6 *>(st::fn_006AAC70(0xe2));
    *param_1 = 0xe2;
    this->field_01E1 = 1;
    puVar6 = (byte *)&this->field_0x1d5;
    pAVar13 = local_48;
    memmove(pAVar13, puVar6, 0x40); /* compiler REP MOVS byte copy */
    iVar8 = 0;
    *(undefined4 *)&local_48->field_0x40 = this->field_0215;
    ppHVar4 = &this->field_0219;
    puVar6 = (byte *)&local_48->field_0x44;
    memmove(puVar6, ppHVar4, 0x50); /* compiler REP MOVS byte copy */
    *(int *)&local_48->field_0x94 = this->field_0269;
    local_48->field_0x98 = this->field_026D;
    local_48->field_0099 = this->field_026E;
    local_48->field_00DE = this->field_02B7;
    local_48->field_009D = this->field_0272;
    local_48->field_00A1 = this->field_0276;
    local_48->field_00A5 = this->field_027A;
    local_48->field_00A9 = this->field_027E;
    if ((uint *)this->field_0215 != nullptr) {
      local_3c[0] = nullptr;
      local_3c[0] = (uint *)st::fn_006B0020((uint *)this->field_0215,(int *)&local_20);
      uVar10 = *param_1 + local_20 + 4;
      *param_1 = uVar10;
      local_48 = st::pointer_boundary_cast<AnonShape_00604A90_035626E6 *>(st::fn_006ACF50(local_48,uVar10));
      *(uint *)((*param_1 - local_20) + -4 + (int)local_48) = local_20;
      puVar5 = local_3c[0];
      puVar12 = (uint *)((*param_1 - local_20) + (int)local_48);
      memmove(puVar12, puVar5, local_20); /* compiler REP MOVS byte copy */
      st::fn_006AB060(local_3c);
    }
    puVar6 = (byte *)&stack0xffffff40;
    iVar8 = 0;
    iVar1 = this->field_0269;
    if (iVar1 != 0) {
      local_8 = 0;
      st::fn_0072DA40();
      local_8 = 0xffffffff;
      local_30 = 0;
      local_24 = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff40);
      local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff40);
      if (0 < iVar1) {
        ppHVar4 = &this->field_0219;
        local_24 = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff40);
        local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff40);
        do {
          if (*ppHVar4 != nullptr) {
            local_3c[0] = (uint *)st::fn_00403C7E(*ppHVar4,st::pointer_boundary_cast<undefined4 *>(local_2c));
            iVar8 = iVar8 + 4 + local_2c[0];
            puVar6[1] = local_2c[0];
            *puVar6 = local_3c[0];
          }
          local_30 = local_30 + 1;
          ppHVar4 = ppHVar4 + 1;
          puVar6 = (byte *)(puVar6 + 2);
        } while (local_30 < this->field_0269);
      }
      uVar10 = *param_1;
      *param_1 = uVar10 + iVar8;
      local_48 = st::pointer_boundary_cast<AnonShape_00604A90_035626E6 *>(st::fn_006ACF50(local_48,uVar10 + iVar8));
      local_44 = (uint *)((*param_1 - iVar8) + (int)local_48);
      local_30 = 0;
      if (0 < this->field_0269) {
        puVar5 = (uint *)(local_24 + 4);
        local_b4 = &this->field_0219;
        do {
          if (*local_b4 != nullptr) {
            *local_44 = *puVar5;
            puVar11 = local_44 + 1;
            local_3c[0] = (uint *)puVar5[-1];
            uVar10 = *puVar5;
            puVar12 = local_3c[0];
            puVar14 = puVar11;
            memmove(puVar14, puVar12, uVar10); /* compiler REP MOVS byte copy */
            st::fn_006AB060(local_3c);
            local_44 = (uint *)((int)puVar11 + *local_44);
          }
          local_30 = local_30 + 1;
          local_b4 = local_b4 + 1;
          puVar5 = puVar5 + 2;
        } while (local_30 < this->field_0269);
      }
    }
    g_currentExceptionFrame = local_8c.previous;
  }
  else {
    g_currentExceptionFrame = local_8c.previous;
    puVar3 = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff40);
    if (local_48 != nullptr) {
      st::fn_006AB060(&local_48);
      puVar3 = local_1c;
    }
    local_1c = puVar3;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_Expl.cpp"),0x2df,0,iVar3,st::mutable_c_string("%s"),
                               "STExplosionC::SaveObj(");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\nick\\to_Expl.cpp"),0x2e1);
  }
  ExceptionList = local_14;
  return (undefined4 *)local_48;
}

// 006051B0 STExplosionC::LoadImagSpr
#line 4 "decomp/ST.exe/functions/006051B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::LoadImagSpr */

undefined4 __thiscall
st::fn_006051B0(STExplosionC *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  short sVar2;
  VisibleClassTy *pVVar3;
  STExplosionC *pSVar4;
  int iVar5;
  int iVar6;
  AnonShape_004AB810_8E5693D5 *pAVar7;
  STT3DSprC *pSVar8;
  int iVar9;
  int iVar8;
  undefined4 uVar10;
  bool bVar11;
  InternalExceptionFrame local_68;
  undefined4 local_24;
  int local_20;
  int local_1c;
  STExplosionC *local_18;
  int local_14;
  char *local_10;
  int local_c;
  char *local_8;

  local_c = this->field_01E9;
  local_10 = (&PTR_s_expl_bm0_007ced98)[local_c];
  local_8 = (&PTR_s_expl_bt0_007ced70)[local_c];
  local_24 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_18 = this;
  iVar5 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  pSVar4 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_Expl.cpp"),0x38c,0,iVar5,st::mutable_c_string("%s"),
                               "STExplosionC::LoadImagSpr");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\nick\\to_Expl.cpp"),0x38e);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_3 != '\0') && (local_18->field_02AF != nullptr)) {
    local_8 = (&PTR_s_expl_bbt0_007cedc0)[local_c];
    iVar6 = st::fn_00404183(local_18->field_02AF,0xf,PTR_00806774,local_8,CASE_1D);
    if (iVar6 != 0) {
      return 0xffff;
    }
    st::fn_00401064(pSVar4->field_02AF,'\x0f',pSVar4->field_029F);
    st::fn_00405AA6(pSVar4->field_02AF,'\x0f');
    st::fn_00405240(pSVar4->field_02AF,0xf,g_playSystem_00802A38->field_00E4);
    iVar6 = st::fn_004022AC(pSVar4->field_02AF,'\x0f');
    pSVar4->field_02A3 = iVar6;
    g_currentExceptionFrame = local_68.previous;
    return local_24;
  }
  if (local_18->field_02AF == nullptr) {
    pAVar7 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
    if (pAVar7 == nullptr) {
      pSVar8 = nullptr;
    }
    else {
      pSVar8 = (STT3DSprC *)st::fn_00401316(pAVar7);
    }
    pSVar4->field_02AF = pSVar8;
  }
  if ((&DAT_007cede8)[local_c] == '\0') {
    iVar6 = st::fn_0040537B(pSVar4->field_02AF,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,
                            0x11);
    if (iVar6 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\nick\\to_Expl.cpp"),0x36a);
      return 0xffff;
    }
  }
  else {
    iVar6 = st::fn_0040537B(pSVar4->field_02AF,PTR_008073cc,0x78,0x56,nullptr,0xf0,0xbe,
                            0x11);
    if (iVar6 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\nick\\to_Expl.cpp"),0x370);
      return 0xffff;
    }
    st::fn_006E9210
              (g_sT3DSMAPContext_00807598,pSVar4->field_02AF->field_0018);
  }
  iVar6 = st::fn_00404183(pSVar4->field_02AF,0xd,PTR_00806774,local_8,CASE_1D);
  if (iVar6 == 0) {
    iVar6 = st::fn_00404183(pSVar4->field_02AF,0xe,PTR_00806774,local_10,CASE_1D);
    if (iVar6 != 0) {
      return 0xffff;
    }
    st::fn_00401064(pSVar4->field_02AF,'\r',pSVar4->field_0296);
    st::fn_004045D9
              (pSVar4->field_02AF,(float)pSVar4->field_028A * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_028E * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_0292 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_00405AA6(pSVar4->field_02AF,'\r');
    st::fn_00405240(pSVar4->field_02AF,0xd,g_playSystem_00802A38->field_00E4);
    pSVar4->field_0286 = 1;
    pVVar3 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != nullptr) {
      iVar6 = pSVar4->field_0292;
      local_14 = STBiasedDiv16(iVar6, 200); /* exact signed 16-bit grid-index division */
      iVar6 = pSVar4->field_028E;
      iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
      iVar9 = pSVar4->field_028A;
      iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar6,
                      &local_1c,&local_20), local_14 < 0)) || (4 < local_14)) {
        bVar11 = true;
      }
      else {
        if (((local_1c < 0) || ((int)pVVar3->field_0030 <= local_1c)) ||
           ((g_centeredOffsets5[local_14] + local_20 < 0 ||
            (pVVar3->field_0034 <= g_centeredOffsets5[local_14] + local_20)))) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((bVar11) && (pVVar3->field_004C != nullptr)) {
          bVar11 = pVVar3->field_004C
                   [local_1c + (g_centeredOffsets5[local_14] + local_20) * pVVar3->field_0030] != 0;
        }
        else {
          bVar11 = true;
        }
      }
      if (!bVar11) {
        st::fn_00403D0F(pSVar4->field_02AF);
        pSVar4->field_0286 = 0;
      }
      g_currentExceptionFrame = local_68.previous;
      return local_24;
    }
    g_currentExceptionFrame = local_68.previous;
    return local_24;
  }
  return 0xffff;
}

