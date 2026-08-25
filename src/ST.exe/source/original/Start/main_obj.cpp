#include "st/generated.hpp"
// Generated translation unit: source/original/Start/main_obj.cpp

// 005B2970 MainMenuTy::InitMainMenu
#line 4 "decomp/ST.exe/functions/005B2970/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::InitMainMenu */

void __thiscall st::fn_005B2970(MainMenuTy *this,char param_1)

{
  MMsgTy *this_00;
  CursorClassTy *this_01;
  MainMenuTy *this_02;
  int iVar2;
  LPSTR pCVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar6;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  iVar5 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0x48,0,iVar2,st::mutable_c_string("%s"),
                               "MainMenuTy::InitMainMenu");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0x48);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[005B29AC]: CALL 0x0040590c; direct=0040590C StartSystemTy::sub_005DAF20 */
  st::fn_0040590C(g_startSystem_0081176C);
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  if (DAT_008067a0 != '\0') {
    /* ST_CALLSITE[005B29CC]: CALL dword ptr [0x0085c074] */
    st::external_0000010B((CFsgsConnection *)&DAT_00802a90);
    /* ST_CALLSITE[005B29D7]: CALL dword ptr [0x0085bffc] */
    st::external_000000ED((CFsgsConnection *)&DAT_00802a90);
    DAT_00802a99 = 0;
    DAT_008067a0 = '\0';
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  this_02 = local_8;
  if (g_startSystem_0081176C->field_0028 != 0) {
    puVar4 = &local_8->field_1A7F;
    do {
      iVar8 = 0;
      bVar6 = 0;
      pCVar2 = st::fn_006F2C00(st::mutable_c_string("MM_FLC"),2,iVar5);
      puVar3 = st::fn_0071AD00(g_cMf32_00806780,pCVar2,bVar6,iVar8);
      *puVar4 = st::machine_word_boundary_cast<uint>(puVar3);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 10);
  }
  iVar5 = 0;
  do {
    if (this_02->field_1AA7[iVar5 + -10] != 0) {
      puVar4 = st::fn_006C4A20(this_02->field_1AA7[iVar5 + -10]);
      this_02->field_1AA7[iVar5] = (uint)puVar4;
      if (puVar4 != nullptr) {
        switch(iVar5) {
        case 0:
          uVar9 = 0x5d;
          uVar7 = 0;
          break;
        case 1:
          uVar9 = 0x5d;
          uVar7 = 0x20f;
          break;
        case 2:
          uVar9 = 0x65;
          uVar7 = 0x104;
          break;
        case 3:
          uVar9 = 0xab;
          uVar7 = 0x104;
          break;
        case 4:
          uVar9 = 0x23;
          uVar7 = 0x2f5;
          break;
        case 5:
          uVar9 = 0x134;
          uVar7 = 0;
          break;
        case 6:
          uVar9 = 0x131;
          uVar7 = 0x275;
          break;
        case 7:
          uVar9 = 0x32;
          uVar7 = 0x5a;
          break;
        case 8:
          uVar9 = 0x39;
          uVar7 = 0x22c;
          break;
        case 9:
          uVar9 = 0x39;
          uVar7 = 0x2f5;
          break;
        default:
          goto switchD_005b2a8d_default;
        }
        st::fn_006C4A00(puVar4,st::machine_word_boundary_cast<undefined4>(g_dDXContext_0080759C),uVar7,uVar9);
      }
    }
switchD_005b2a8d_default:
    iVar5 = iVar5 + 1;
    if (9 < iVar5) {
      /* ST_CALLSITE[005B2B6C]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
      st::fn_00401992((MMObjTy *)this_02,
                          (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x9b,
                          st::mutable_c_string("MM_MBUT00"),0xf2,0x13a,7,8,0,0,0x9d,0x38,0x33,
                          st::mutable_c_string("MM_MABUT00"),6,8,9,6,0x28,0,nullptr,0,0,0,-1,-1);
      /* ST_CALLSITE[005B2BB7]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
      st::fn_00401992((MMObjTy *)this_02,
                          (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[0].field_01DB,
                          st::mutable_c_string("MM_MBUT01"),0x191,0x13a,9,8,0,0,0x9d,0x38,0x33,
                          st::mutable_c_string("MM_MABUT01"),8,8,8,6,0x32,0,nullptr,0,0,0,-1,-1);
      /* ST_CALLSITE[005B2C02]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
      st::fn_00401992((MMObjTy *)this_02,
                          (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[1].field_01DB,
                          st::mutable_c_string("MM_MBUT02"),0xf2,0x173,8,6,0,0,0x9d,0x38,0x33,
                          st::mutable_c_string("MM_MABUT02"),8,7,10,5,0x28,0,nullptr,0,0,0,-1,-1);
      /* ST_CALLSITE[005B2C4D]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
      st::fn_00401992((MMObjTy *)this_02,
                          (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[2].field_01DB,
                          st::mutable_c_string("MM_MBUT03"),0x191,0x173,8,6,0,0,0x9d,0x38,0x33,
                          st::mutable_c_string("MM_MABUT03"),8,7,8,5,0x32,0,nullptr,0,0,0,-1,-1);
      /* ST_CALLSITE[005B2C98]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
      st::fn_00401992((MMObjTy *)this_02,
                          (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[3].field_01DB,
                          st::mutable_c_string("MM_MBUT04"),0x143,0x1ac,7,8,0,0,0x9d,0x38,0x33,
                          st::mutable_c_string("MM_MABUT04"),8,9,9,6,0x32,0,nullptr,0,0,0,-1,-1);
      puVar3 = st::fn_0070A9F0(g_cMf32_00806780,st::mutable_c_string("MM_BKG"),0,1);
      g_startSystem_0081176C->field_002C = puVar3;
      /* ST_CALLSITE[005B2CC6]: CALL 0x00401d43; direct=00401D43 DarkScreen */
      st::fn_00401D43(g_dDXContext_0080759C,1,0);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00 = *(MMsgTy **)(this_02->field_00BB[0xc].field_01DC + 0x2e6);
      if (this_00 != nullptr) {
        /* ST_CALLSITE[005B2CE4]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
        st::fn_00401FA5(this_00,0,0,1);
        /* ST_CALLSITE[005B2CF5]: CALL 0x00405191; direct=00405191 MMsgTy::ShowSprites */
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_00405191(*(MMsgTy **)(this_02->field_00BB[0xc].field_01DC + 0x2e6));
        *(undefined4 *)(*(int *)(this_02->field_00BB[0xc].field_01DC + 0x2e6) + 0x1cab) =
             this_02->field_0008;
      }
      st::fn_006BC360(g_startSystem_0081176C->field_002C,(undefined4 *)&this_02->field_0x1adf,
                   nullptr);
      this_01 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 != nullptr) {
        iVar5 = g_cursorClass_00802A30->field_00C9;
        iVar8 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_01->field_0494 = 0xffff;
        /* ST_CALLSITE[005B2D52]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(this_01,CASE_0,iVar8,iVar5);
        /* ST_CALLSITE[005B2D67]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(this_01,this_01->field_00C5,this_01->field_00C9);
        this_01->field_00D2 = 0;
        this_01->field_04DF = -1;
      }
      /* ST_CALLSITE[005B2D85]: CALL 0x00401f00; direct=00401F00 MainMenuTy::SetMode */
      st::fn_00401F00(this_02,param_1,1);
      st::fn_0040329C(&g_sound,0);
      if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
        st::fn_00402FD1(&g_sound,0x10,'\x02',0,nullptr);
      }
      if (DAT_00808446 == '\0') {
        uVar7 = this_02->field_0008;
        this_02->field_00BB[0xc].field_01EC = 2;
        this_02->field_00BB[0xc].field_01E8 = uVar7;
        this_02->field_00BB[0xc].field_01F0 = 0x6902;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  } while( true );
}

// 005B2F90 MainMenuTy::DoneMainMenu
#line 4 "decomp/ST.exe/functions/005B2F90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::DoneMainMenu */

void __thiscall st::fn_005B2F90(MainMenuTy *this)

{
  MMsgTy *this_00;
  MainMenuTy *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar3;
  int iVar5;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    /* ST_CALLSITE[005B2FCA]: CALL 0x0040458e; direct=0040458E MMObjTy::DoneMMObj */
    st::fn_0040458E((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    /* ST_CALLSITE[005B300D]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    st::fn_00401D43(g_dDXContext_0080759C,10,2);
    if (g_startSystem_0081176C->field_002C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00 = *(MMsgTy **)(pMVar2->field_00BB[0xc].field_01DC + 0x2e6);
    if (this_00 != nullptr) {
      /* ST_CALLSITE[005B303E]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
      st::fn_0040462E(this_00);
      *(undefined4 *)(*(int *)(pMVar2->field_00BB[0xc].field_01DC + 0x2e6) + 0x1cab) = 0;
    }
    puVar3 = pMVar2->field_1AA7;
    iVar5 = 10;
    do {
      if ((undefined4 *)*puVar3 != nullptr) {
        st::fn_006C4A70((undefined4 *)*puVar3);
        *puVar3 = 0;
      }
      if (puVar3[-10] != 0) {
        st::fn_006F20E0(g_cMf32_00806780,puVar3 + -10);
      }
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (pMVar2->field_004D != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),99,0,iVar3,st::mutable_c_string("%s"),
                             "MainMenuTy::DoneMainMenu");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),99);
  return;
}

// 005B3160 MainMenuTy::PaintMainMenu
#line 4 "decomp/ST.exe/functions/005B3160/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::PaintMainMenu

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005B3160(MainMenuTy *this)

{
  MainMenuTy *pMVar2;
  int uVar3;
  char *pcVar3;
  int iVar4;
  StartServTy *this_00;
  StartServTy *this_01;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  ccFntTy *pcVar9;
  uint uVar10;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  uVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (uVar3 == 0) {
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    /* ST_CALLSITE[005B31BD]: CALL 0x00403738; direct=00403738 PutDDX */
    st::fn_00403738(0,0,'\x01',(BITMAPINFO *)g_startSystem_0081176C->field_002C);
    pMVar2 = local_8;
    if (local_8->field_1EE3 == '\0') {
      uVar10 = 0;
      pcVar9 = (ccFntTy *)g_startSystem_0081176C->field_0030;
      uVar8 = 0xffffffff;
      uVar7 = 0xfffffffe;
      pcVar3 = st::fn_006B0140(0x26ac,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005B324A]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D(this_01,0,0xe9,0x14,0x14c,0x18,pcVar3,uVar7,uVar8,pcVar9,uVar10);
      uVar8 = DAT_00807dd5 >> 0x10 & 0xff;
      uVar10 = DAT_00807dd5 & 0xffff;
      uVar7 = DAT_00807dd5 >> 0x18;
      pcVar3 = st::fn_006B0140(0x2329,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005B3289]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)(pMVar2->field_00BB[0xc].field_01DC + 0x3c),pcVar3,uVar7,uVar8,uVar10);
      /* ST_CALLSITE[005B32B9]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                ((StartServTy *)g_startSystem_0081176C,0,0,0x240,800,0x18,
                 (char *)(pMVar2->field_00BB[0xc].field_01DC + 0x3c),0xfffffffe,0xffffffff,
                 g_startSystem_0081176C->field_0034,0);
    }
    else if (local_8->field_1EE3 == '\x01') {
      pcVar9 = (ccFntTy *)g_startSystem_0081176C->field_0030;
      uVar8 = 0xffffffff;
      uVar7 = 0xfffffffe;
      pcVar3 = st::fn_006B0140(0x26b0,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005B320B]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D(this_00,0,0xe9,0x14,0x14c,0x18,pcVar3,uVar7,uVar8,pcVar9,uVar3);
    }
    puVar6 = pMVar2->field_1AA7;
    iVar5 = 10;
    do {
      if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6 != nullptr) {
        st::fn_006C4AA0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6);
      }
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = 0;
    if (pMVar2->field_009A != 0) {
      puVar6 = &pMVar2->field_00BB[0].field_0028.field_001C;
      do {
        if (puVar6[-6] != 0xffffffff) {
          st::fn_006B3730
                    ((uint *)puVar6[0xb],puVar6[-6],puVar6[-5],*puVar6,puVar6[1]);
        }
        if ((pMVar2->field_0065 == '\x01') && (STField<uint>(puVar6,0x79) != 0xffffffff)) {
          st::fn_006B3730
                    (STField<uint *>(puVar6,0xbd),STField<uint>(puVar6,0x79),
                     STField<uint>(puVar6,0x7d),STField<uint>(puVar6,0x91),
                     STField<uint>(puVar6,0x95));
        }
        iVar5 = iVar5 + 1;
        puVar6 = (uint *)((int)puVar6 + 0x1fb);
      } while (iVar5 < (int)(uint)pMVar2->field_009A);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0x7e,0,uVar3,st::mutable_c_string("%s"),
                             "MainMenuTy::PaintMainMenu");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(uVar3,0,st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0x7e);
  return;
}

// 005B3430 MainMenuTy::NoneMainMenu
#line 4 "decomp/ST.exe/functions/005B3430/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::NoneMainMenu
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneMainMenu(MainMenuTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005B35FF RET | 005B38C9 RET | 005B3950 RET | 005B3996 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005B3430(MainMenuTy *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  MainMenuTy *this_00;
  DWORD DVar5;
  int iVar4;
  uint uVar6;
  DWORD *pDVar7;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  InternalExceptionFrame local_54;
  MainMenuTy *local_10;
  uint *local_c;
  int local_8;

  local_8 = 1;
  local_10 = this;
  /* ST_CALLSITE[005B3445]: CALL dword ptr [0x0085bedc] */
  DVar5 = st::external_000000DA();
  this->field_0061 = DVar5;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0xd2,0,iVar4,st::mutable_c_string("%s"),
                               "MainMenuTy::NoneMainMenu");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0xd2);
    return;
  }
  /* ST_CALLSITE[005B347C]: CALL 0x00403eef; direct=00403EEF MainMenuTy::LightPalette */
  st::fn_00403EEF(local_10);
  /* ST_CALLSITE[005B3483]: CALL 0x00403922; direct=00403922 MainMenuTy::AnimationMainMenu */
  st::fn_00403922(this_00);
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    iVar8 = 0;
    if (this_00->field_009A != 0) {
      puVar9 = &this_00->field_00BB[0].field_014A.field_001C;
      do {
        if ((*(char *)((int)puVar9 + -0x13f) != '\0') &&
           (puVar9[9] <= this_00->field_0061 - puVar9[10])) {
          puVar9[10] = this_00->field_0061;
          uVar6 = puVar9[-5];
          puVar9[-5] = uVar6 + 1;
          if ((int)puVar9[-4] <= (int)(uVar6 + 1)) {
            puVar9[-5] = 0;
          }
          if (puVar9[-6] != 0xffffffff) {
            st::fn_006B3730
                      ((uint *)puVar9[0xb],puVar9[-6],puVar9[-5],*puVar9,puVar9[1]);
          }
        }
        iVar8 = iVar8 + 1;
        puVar9 = (uint *)((int)puVar9 + 0x1fb);
      } while (iVar8 < (int)(uint)this_00->field_009A);
    }
  }
  else if (cVar1 == '\x03') {
    iVar8 = 0;
    uVar6 = (uint)this_00->field_009A;
    if (uVar6 != 0) {
      do {
        if (this_00->field_00BB[iVar8].field_0001 != 0) {
          if (this_00->field_0061 - this_00->field_00BB[iVar8].field_0028.field_0044 <
              (uint)this_00->field_00BB[iVar8].field_0028.field_0040) {
            iVar8 = 0;
            local_8 = 0;
            if (uVar6 != 0) {
              pDVar7 = (DWORD *)&this_00->field_00BB[0].field_014A.field_0044;
              do {
                if (*(char *)((int)pDVar7 + -0x167) != '\0') {
                  *pDVar7 = this_00->field_0061;
                }
                iVar8 = iVar8 + 1;
                pDVar7 = (DWORD *)((int)pDVar7 + 0x1fb);
              } while (iVar8 < (int)(uint)this_00->field_009A);
            }
          }
          else {
            iVar3 = this_00->field_00BB[iVar8].field_0028.field_0008;
            if (iVar3 < this_00->field_00BB[iVar8].field_0028.field_000C + -1) {
              if ((iVar3 == 0) &&
                 (uVar6 = this_00->field_00BB[iVar8].field_0028.field_0004, uVar6 != 0xffffffff)) {
                st::fn_006B34D0
                          ((uint *)this_00->field_00BB[iVar8].field_0028.field_0048,uVar6,0xfffffffe
                           ,this_00->field_00BB[iVar8].field_0028.field_001C,
                           this_00->field_00BB[iVar8].field_0028.field_0020);
              }
              this_00->field_00BB[iVar8].field_0028.field_0008 =st::machine_word_boundary_cast<int>(
                   this_00->field_00BB[iVar8].field_0028.field_0008 + 1);
              uVar6 = this_00->field_00BB[iVar8].field_0028.field_0004;
              if (uVar6 != 0xffffffff) {
                st::fn_006B3730
                          ((uint *)this_00->field_00BB[iVar8].field_0028.field_0048,uVar6,
                           this_00->field_00BB[iVar8].field_0028.field_0008,
                           this_00->field_00BB[iVar8].field_0028.field_001C,
                           this_00->field_00BB[iVar8].field_0028.field_0020);
              }
              local_8 = 0;
            }
            else {
              iVar3 = this_00->field_00BB[iVar8].field_00B9.field_0008;
              if (iVar3 < this_00->field_00BB[iVar8].field_00B9.field_000C + -3) {
                if (iVar3 == 0) {
                  uVar6 = this_00->field_00BB[iVar8].field_00B9.field_0004;
                  if (uVar6 != 0xffffffff) {
                    st::fn_006B34D0
                              ((uint *)this_00->field_00BB[iVar8].field_00B9.field_0048,uVar6,
                               0xfffffffe,this_00->field_00BB[iVar8].field_00B9.field_001C,
                               this_00->field_00BB[iVar8].field_00B9.field_0020);
                  }
                  if ((this_00->field_00BB[iVar8].field_0027 != '\0') &&
                     (uVar6 = this_00->field_00BB[iVar8].field_014A.field_0004, uVar6 != 0xffffffff)
                     ) {
                    st::fn_006B34D0
                              ((uint *)this_00->field_00BB[iVar8].field_014A.field_0048,uVar6,
                               0xfffffffe,this_00->field_00BB[iVar8].field_014A.field_001C,
                               this_00->field_00BB[iVar8].field_014A.field_0020);
                  }
                }
                this_00->field_00BB[iVar8].field_00B9.field_0008 =st::machine_word_boundary_cast<int>(
                     this_00->field_00BB[iVar8].field_00B9.field_0008 + 1);
                uVar6 = this_00->field_00BB[iVar8].field_00B9.field_0004;
                if (uVar6 != 0xffffffff) {
                  st::fn_006B3730
                            ((uint *)this_00->field_00BB[iVar8].field_00B9.field_0048,uVar6,
                             this_00->field_00BB[iVar8].field_00B9.field_0008,
                             this_00->field_00BB[iVar8].field_00B9.field_001C,
                             this_00->field_00BB[iVar8].field_00B9.field_0020);
                }
                st::fn_00404BF1(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar8 = iVar8 + 1;
        uVar6 = (uint)this_00->field_009A;
      } while (iVar8 < (int)uVar6);
    }
    if (((this_00->field_1EE3 != '\0') && (g_startSystem_0081176C->field_02E6 != nullptr)) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_00->field_009A != 0) {
        local_c = this_00->field_0066;
        puVar10 = (undefined4 *)&this_00->field_0xa3;
        iVar8 = 0x68ff;
        do {
          if (*local_c == 0) {
            /* ST_CALLSITE[005B3861]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
            uVar6 = st::fn_0040361B
                              ((MMObjTy *)this_00,1,(uint)(this_00->field_1EDF != 0),
                               st::machine_word_boundary_cast<undefined4>(puVar10[0x17] + puVar10[-2]),st::machine_word_boundary_cast<undefined4>(puVar10[0x18] + puVar10[-1]),*puVar10,
                               puVar10[1],iVar8,iVar8 + 0x80);
            *local_c = uVar6;
          }
          local_c = local_c + 1;
          iVar3 = iVar8 + -0x68fe;
          puVar10 = (undefined4 *)((int)puVar10 + 0x1fb);
          iVar8 = iVar8 + 1;
        } while (iVar3 < (int)(uint)this_00->field_009A);
      }
      iVar8 = this_00->field_00BB[0xc].field_01F0;
      this_00->field_0065 = 1;
      if (iVar8 != 0) {
        st::fn_006E3DB0((int)&this_00->field_00BB[0xc].field_0x1e0);
        this_00->field_00BB[0xc].field_01F0 = 0;
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    iVar8 = 0;
    if (this_00->field_009A != 0) {
      puVar9 = &this_00->field_00BB[0].field_00B9.field_0004;
      do {
        if (this_00->field_0061 - *(int *)((int)puVar9 + -0x51) < *(uint *)((int)puVar9 + -0x55)) {
LAB_005b353c:
          local_8 = 0;
        }
        else {
          if (*(char *)((int)puVar9 + -0xbd) != '\0') {
            if (*puVar9 != 0xffffffff) {
              st::fn_006B3AF0((int *)puVar9[0x11],*puVar9);
            }
            if ((*(char *)((int)puVar9 + -0x96) != '\0') &&
               (STField<uint>(puVar9,0x91) != 0xffffffff)) {
              st::fn_006B3AF0(STField<int *>(puVar9,0xd5),STField<uint>(puVar9,0x91));
            }
            *(undefined1 *)((int)puVar9 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar9 + -0x8d)) {
            uVar6 = *(int *)((int)puVar9 + -0x8d) - 1;
            *(uint *)((int)puVar9 + -0x8d) = uVar6;
            if (*(uint *)((int)puVar9 + -0x91) != 0xffffffff) {
              st::fn_006B3730
                        (*(uint **)((int)puVar9 + -0x4d),*(uint *)((int)puVar9 + -0x91),uVar6,
                         *(uint *)((int)puVar9 + -0x79),*(uint *)((int)puVar9 + -0x75));
            }
            goto LAB_005b353c;
          }
        }
        iVar8 = iVar8 + 1;
        puVar9 = (uint *)((int)puVar9 + 0x1fb);
      } while (iVar8 < (int)(uint)this_00->field_009A);
    }
    iVar8 = 0;
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_009A != 0) {
        puVar9 = &this_00->field_00BB[0].field_0028.field_0004;
        do {
          if (*puVar9 != 0xffffffff) {
            st::fn_006B3AF0((int *)puVar9[0x11],*puVar9);
          }
          iVar8 = iVar8 + 1;
          puVar9 = (uint *)((int)puVar9 + 0x1fb);
        } while (iVar8 < (int)(uint)this_00->field_009A);
      }
      bVar2 = this_00->field_00BB[0xc].field_01DB;
      if (this_00->field_00BB[bVar2].field_0016 != 0) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_00BB[bVar2].field_0x6);
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 005B3B00 MainMenuTy::LightPalette
#line 4 "decomp/ST.exe/functions/005B3B00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::LightPalette */

void __thiscall st::fn_005B3B00(MainMenuTy *this)

{
  byte *puVar1;
  MainMenuTy *pMVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1AD3 != 0) {
      puVar1 = &local_8->field_0x1adf;
      iVar4 = st::fn_00718F40
                        (g_dDXContext_0080759C,(undefined4 *)puVar1,0,0x100,5,&local_8->field_1ADB,1
                         ,local_8->field_0061,&local_8->field_1AD7);
      if (iVar4 == -4) {
        st::fn_006B0A20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,(int)puVar1,0,0x100
                     ,0);
        pMVar3->field_1AD3 = 0;
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0xe8,0,iVar4,st::mutable_c_string("%s"),
                             "MainMenuTy::LightPalette");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0xe8);
  return;
}

// 005B3C30 MainMenuTy::CloseButtons
#line 4 "decomp/ST.exe/functions/005B3C30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::CloseButtons */

void __thiscall st::fn_005B3C30(MainMenuTy *this)

{
  int iVar2;
  DWORD DVar3;
  int iVar5_mg1;
  int *piVar4;
  MainMenuTy *this_00;
  int iVar5;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    /* ST_CALLSITE[005B3C66]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
    st::fn_00403459((MMObjTy *)local_8);
    iVar2 = 0;
    if (this_00->field_009A != 0) {
      iVar5 = 0x96;
      piVar4 = &this_00->field_00BB[0].field_0028.field_0040;
      do {
        /* ST_CALLSITE[005B3C82]: CALL dword ptr [0x0085bedc] */
        DVar3 = st::external_000000DA();
        piVar4[1] = DVar3;
        *piVar4 = iVar5;
        *(undefined1 *)(piVar4 + -0x1a) = 1;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x96;
        piVar4 = (int *)((int)piVar4 + 0x1fb);
        this_00 = local_8;
      } while (iVar2 < (int)(uint)local_8->field_009A);
    }
    this_00->field_0065 = 4;
    st::fn_00404BF1(this_00,2,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5_mg1 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0xf7,0,iVar2,
                                 st::mutable_c_string("%s"),"MainMenuTy::CloseButtons");
  if (iVar5_mg1 == 0) {
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0xf7);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005B3D60 MainMenuTy::SetMode
#line 4 "decomp/ST.exe/functions/005B3D60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::SetMode */

void __thiscall st::fn_005B3D60(MainMenuTy *this,char param_1,int param_2)

{
  SpriteClassTyVTable *pSVar1;
  MMsgTy *this_00;
  MainMenuTy_Record_00BB_01FB *pMVar3;
  MainMenuTy *this_01;
  int iVar9;
  char *pcVar4;
  short *psVar5;
  DWORD DVar6;
  int iVar6;
  int iVar7;
  StartServTy *this_02;
  StartServTy *this_03;
  StartServTy *this_04;
  StartServTy *pSVar8;
  byte bVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar13;
  uint uVar14;
  UINT resourceId;
  int iVar15;
  int iVar16;
  int iVar17;
  byte uVar18;
  ccFntTy *pcVar19;
  uint uVar20;
  uint uVar21;
  undefined4 local_24c;
  undefined4 local_162;
  undefined4 local_155;
  undefined4 local_151;
  undefined4 local_14d;
  undefined1 local_13d;
  InternalExceptionFrame local_50;
  MainMenuTy *local_c;
  uint local_8;

  piVar10 = &this->field_00BB[0].field_00B9.field_0008;
  iVar11 = 0xd;
  do {
    piVar10[-0x30] = 0;
    *piVar10 = 0;
    puVar12 = (undefined4 *)((int)piVar10 + -0xbb);
    piVar10 = (int *)((int)piVar10 + 0x1fb);
    iVar11 = iVar11 + -1;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
  } while (iVar11 != 0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar9 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_01 = local_c;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0x16a,0,iVar9,st::mutable_c_string("%s")
                               ,"MainMenuTy::SetMode");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar9,0,st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0x16a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c->field_1EE3 = param_1;
  if (param_1 == '\0') {
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    local_c->field_009A = 5;
    uVar14 = 0xffffffff;
    local_c->field_00BB[0].field_0001 = 0x2334;
    pSVar1 = local_c->field_00BB[0].field_00B9.vtable;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    pMVar3 = local_c->field_00BB;
    iVar11 = 0x8c;
    pcVar4 = st::fn_006B0140(0x2334,g_hINSTANCE_00807618);
    psVar5 = (short *)st::fn_00713480
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B4138]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(st::pointer_boundary_cast<SpriteClassTy *>(&pMVar3->field_00B9),psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[1].field_0001 = 0x2335;
    pSVar1 = this_01->field_00BB[1].field_00B9.vtable;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = st::fn_006B0140(0x2335,g_hINSTANCE_00807618);
    psVar5 = (short *)st::fn_00713480
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B4188]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[1].field_00B9,psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    pSVar1 = this_01->field_00BB[2].field_00B9.vtable;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[2].field_0001 = 0x2332;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = st::fn_006B0140(0x2332,g_hINSTANCE_00807618);
    psVar5 = (short *)st::fn_00713480
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B41D8]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[2].field_00B9,psVar5,uVar18,uVar20);
    pSVar1 = this_01->field_00BB[3].field_00B9.vtable;
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    cVar13 = CASE_FFFFFFFE;
    this_01->field_00BB[3].field_0001 = 0x2333;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = st::fn_006B0140(0x2333,g_hINSTANCE_00807618);
    psVar5 = (short *)st::fn_00713480
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B4229]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[3].field_00B9,psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    pSVar1 = this_01->field_00BB[4].field_00B9.vtable;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[4].field_0001 = 0x2336;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = st::fn_006B0140(0x2336,g_hINSTANCE_00807618);
    psVar5 = (short *)st::fn_00713480
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B4279]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[4].field_00B9,psVar5,uVar18,uVar20);
    this_01->field_00BB[0].field_000E = this_01->field_0008;
    this_01->field_00BB[0].field_0012 = 2;
    this_01->field_00BB[0].field_0016 = 0x6944;
    this_01->field_00BB[1].field_000E = 0x200;
    this_01->field_00BB[1].field_0012 = 0;
    this_01->field_00BB[1].field_0016 = 0x6105;
    this_01->field_00BB[1].field_001A = 0;
    this_01->field_00BB[1].field_001E = 1;
    this_01->field_00BB[2].field_000E = 0x200;
    this_01->field_00BB[2].field_0012 = 0;
    this_01->field_00BB[2].field_0016 = 0x6103;
    this_01->field_00BB[2].field_001A = 1;
    this_01->field_00BB[3].field_0016 = 0;
    this_01->field_00BB[4].field_0012 = 1;
    this_01->field_00BB[4].field_0016 = 0x7102;
    st::fn_006BA9E0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
    uVar21 = 0;
    pcVar19 = (ccFntTy *)g_startSystem_0081176C->field_0030;
    uVar20 = 0xffffffff;
    uVar14 = 0xfffffffe;
    pcVar4 = st::fn_006B0140(0x26ac,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005B4342]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D(this_03,0,0xe9,0x14,0x14c,0x18,pcVar4,uVar14,uVar20,pcVar19,uVar21);
    uVar21 = DAT_00807dd5 >> 0x10 & 0xff;
    uVar20 = DAT_00807dd5 & 0xffff;
    uVar14 = DAT_00807dd5 >> 0x18;
    pcVar4 = st::fn_006B0140(0x2329,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005B4380]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)(this_01->field_00BB[0xc].field_01DC + 0x3c),pcVar4,uVar14,uVar21,uVar20);
    pSVar8 = this_01->field_00BB[0xc].field_01DC + 0x3c;
    /* ST_CALLSITE[005B43AD]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D
              (pSVar8,0,0,0x240,800,0x18,(char *)pSVar8,0xfffffffe,0xffffffff,
               g_startSystem_0081176C->field_0034,0);
  }
  else if (param_1 == '\x01') {
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    local_c->field_009A = 5;
    uVar14 = 0xffffffff;
    local_c->field_00BB[0].field_0001 = 0x233c;
    pSVar1 = local_c->field_00BB[0].field_00B9.vtable;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    pMVar3 = local_c->field_00BB;
    iVar11 = 0x8c;
    pcVar4 = st::fn_006B0140(0x233c,g_hINSTANCE_00807618);
    psVar5 = (short *)st::fn_00713480
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B3E40]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(st::pointer_boundary_cast<SpriteClassTy *>(&pMVar3->field_00B9),psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[1].field_0001 = 0x233d;
    pSVar1 = this_01->field_00BB[1].field_00B9.vtable;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = st::fn_006B0140(0x233d,g_hINSTANCE_00807618);
    psVar5 = (short *)st::fn_00713480
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B3E90]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[1].field_00B9,psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    pSVar1 = this_01->field_00BB[2].field_00B9.vtable;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[2].field_0001 = 0x233e;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = st::fn_006B0140(0x233e,g_hINSTANCE_00807618);
    psVar5 = (short *)st::fn_00713480
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B3EE1]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[2].field_00B9,psVar5,uVar18,uVar20);
    pSVar1 = this_01->field_00BB[3].field_00B9.vtable;
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    cVar13 = CASE_FFFFFFFE;
    this_01->field_00BB[3].field_0001 = 0x233f;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = st::fn_006B0140(0x233f,g_hINSTANCE_00807618);
    psVar5 = (short *)st::fn_00713480
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B3F31]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[3].field_00B9,psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    pSVar1 = this_01->field_00BB[4].field_00B9.vtable;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[4].field_0001 = 0x2359;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = st::fn_006B0140(0x2359,g_hINSTANCE_00807618);
    psVar5 = (short *)st::fn_00713480
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B3F81]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[4].field_00B9,psVar5,uVar18,uVar20);
    bVar9 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_01->field_009A != 0) {
      do {
        uVar14 = local_8 & 0xff;
        bVar9 = bVar9 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar9));
        this_01->field_00BB[uVar14].field_000E = 0x200;
        this_01->field_00BB[uVar14].field_0012 = 0;
      } while (bVar9 < this_01->field_009A);
    }
    this_01->field_00BB[0].field_0016 = 0x6122;
    this_01->field_00BB[1].field_0016 = 0x611f;
    this_01->field_00BB[2].field_0016 = 0x611f;
    this_01->field_00BB[3].field_0016 = 0x611f;
    this_01->field_00BB[4].field_0016 = 0x6122;
    puVar12 = &local_24c;
    memset(puVar12, 0, 0x1fb); /* compiler bulk-zero initialization */
    puVar12 = (undefined4 *)((byte *)puVar12 + 0x1f8);
    pSVar8 = this_01->field_00BB[0xc].field_01DC;
    local_155 = this_01->field_0008;
    this_01->field_00BB[0].field_001A = 0;
    this_01->field_00BB[1].field_001A = 2;
    this_01->field_00BB[2].field_001A = 9;
    this_01->field_00BB[3].field_001A = 3;
    this_01->field_00BB[4].field_001A = 1;
    local_162 = 0x24bc;
    local_13d = 1;
    local_151 = 2;
    local_14d = 0x6943;
    this_00 = *(MMsgTy **)(pSVar8 + 0x2e6);
    if (this_00 != nullptr) {
      /* ST_CALLSITE[005B4085]: CALL 0x00401717; direct=00401717 MMsgTy::SetPanel */
      st::fn_00401717(this_00,0,(int)&local_24c,0,0);
    }
    st::fn_006BA9E0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
    uVar21 = 0;
    pcVar19 = (ccFntTy *)g_startSystem_0081176C->field_0030;
    uVar20 = 0xffffffff;
    uVar14 = 0xfffffffe;
    pcVar4 = st::fn_006B0140(0x26b0,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005B40D6]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D(this_02,0,0xe9,0x14,0x14c,0x18,pcVar4,uVar14,uVar20,pcVar19,uVar21);
  }
  if (param_2 != 0) {
    /* ST_CALLSITE[005B43BE]: CALL 0x004059b1; direct=004059B1 MainMenuTy::PaintMainMenu */
    st::fn_004059B1(this_01);
    this_01->field_1AD3 = 1;
    this_01->field_1ADB = 0;
    this_01->field_1AD7 = this_01->field_0061;
    goto LAB_005b44f1;
  }
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  st::fn_006BA9E0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
  if (this_01->field_1EE3 == '\0') {
    pcVar19 = (ccFntTy *)g_startSystem_0081176C->field_0030;
    resourceId = 0x26ac;
LAB_005b4465:
    uVar21 = 0;
    uVar20 = 0xffffffff;
    uVar14 = 0xfffffffe;
    pcVar4 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005B447B]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D(this_04,0,0xe9,0x14,0x14c,0x18,pcVar4,uVar14,uVar20,pcVar19,uVar21);
  }
  else if (this_01->field_1EE3 == '\x01') {
    pcVar19 = (ccFntTy *)g_startSystem_0081176C->field_0030;
    resourceId = 0x26b0;
    goto LAB_005b4465;
  }
  uVar21 = DAT_00807dd5 >> 0x10 & 0xff;
  uVar20 = DAT_00807dd5 & 0xffff;
  uVar14 = DAT_00807dd5 >> 0x18;
  pcVar4 = st::fn_006B0140(0x2329,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005B44B9]: CALL dword ptr [0x0085bde8] */
  st::external_00000080((LPSTR)(this_01->field_00BB[0xc].field_01DC + 0x3c),pcVar4,uVar14,uVar21,uVar20);
  pSVar8 = this_01->field_00BB[0xc].field_01DC + 0x3c;
  /* ST_CALLSITE[005B44E9]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
  st::fn_00404C2D
            (pSVar8,0,0,0x240,800,0x18,(char *)pSVar8,0xfffffffe,0xffffffff,
             g_startSystem_0081176C->field_0034,0);
LAB_005b44f1:
  local_8 = local_8 & 0xffffff00;
  if (this_01->field_009A != 0) {
    do {
      uVar14 = local_8 & 0xff;
      /* ST_CALLSITE[005B451C]: CALL dword ptr [0x0085bedc] */
      DVar6 = st::external_000000DA();
      this_01->field_00BB[uVar14].field_0028.field_0044 = DVar6;
      this_01->field_00BB[uVar14].field_0028.field_0040 = uVar14 * 0x96;
      this_01->field_00BB[uVar14].field_0000 = 1;
      bVar9 = (char)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar9));
    } while (bVar9 < this_01->field_009A);
  }
  this_01->field_0065 = 3;
  st::fn_00404BF1(this_01,1,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005B48E0 MainMenuTy::AnimationMainMenu
#line 4 "decomp/ST.exe/functions/005B48E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::AnimationMainMenu */

void __thiscall st::fn_005B48E0(MainMenuTy *this)

{
  int *piVar1;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar2;
  int iVar4;
  uint uVar4;
  BITMAPINFO *pBVar5;
  int iVar8;
  MainMenuTy *pMVar6;
  uint *puVar7;
  int iVar9;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  MainMenuTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pMVar6 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1ACF != 0) {
      puVar7 = local_8->field_1AA7;
      iVar9 = 10;
      do {
        piVar1 = (int *)*puVar7;
        if (piVar1 != nullptr) {
          st::fn_006B5F80((int *)g_ddxContext_008075A8,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
          st::fn_006C4AC0((int *)*puVar7);
        }
        puVar7 = puVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    pMVar6->field_1ACF = (uint)(pMVar6->field_1ACF == 0);
    local_10 = 0;
    local_c = 0x244;
    do {
      pAVar2 = *(AnonShape_GLOBAL_0081175C_57F682DD **)
                ((int)&g_startSystem_0081176C->vtable + local_c);
      if (pAVar2 != nullptr) {
        piVar1 = (int *)((int)g_startSystem_0081176C->array_0244 + local_10 + 0x18);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)g_startSystem_0081176C->array_0244 + local_10 + 0x2c) == '\0') {
          uVar4 = piVar1[2];
        }
        else {
          uVar4 = piVar1[3];
        }
        if (uVar4 <= pMVar6->field_0061 - piVar1[4]) {
          pBVar5 = st::fn_0070B3A0(pAVar2,(short)pAVar2->field_0029);
          st::fn_006B5F80((int *)g_ddxContext_008075A8,*piVar1,piVar1[1],(int)*(short *)(pAVar2 + 1),
                       (int)*(short *)&pAVar2[1].field_0x2);
          /* ST_CALLSITE[005B49F2]: CALL 0x00403738; direct=00403738 PutDDX */
          st::fn_00403738(*piVar1,piVar1[1],'\x01',pBVar5);
          if ((char)piVar1[5] != '\0') {
            ((undefined1 *)piVar1)[5] = 0;
          }
          piVar1[4] = local_8->field_0061;
          switch(STField<undefined2>(piVar1,0x15)) {
          case 0:
            pAVar2->field_0029 = pAVar2->field_0029 + 1;
            if (pAVar2->field_0023 <= (short)pAVar2->field_0029) {
              pAVar2->field_0029 = 0;
              ((undefined1 *)piVar1)[5] = 1;
            }
            break;
          case 1:
            pAVar2->field_0029 = pAVar2->field_0029 + -1;
            if ((short)pAVar2->field_0029 < 0) {
              pAVar2->field_0029 = pAVar2->field_0023 + -1;
              ((undefined1 *)piVar1)[5] = 1;
            }
            break;
          case 2:
            pAVar2->field_0029 = pAVar2->field_0029 + 1;
            if (pAVar2->field_0023 <= (short)pAVar2->field_0029) {
              pAVar2->field_0029 = pAVar2->field_0023 + -1;
              ((undefined1 *)piVar1)[5] = 1;
              STField<undefined2>(piVar1,0x15) = 3;
            }
            break;
          case 3:
            pAVar2->field_0029 = pAVar2->field_0029 + -1;
            if ((short)pAVar2->field_0029 < 0) {
              pAVar2->field_0029 = 0;
              ((undefined1 *)piVar1)[5] = 1;
              STField<undefined2>(piVar1,0x15) = 2;
            }
          }
        }
      }
      local_c = local_c + 4;
      local_10 = local_10 + 0x17;
      pMVar6 = local_8;
    } while (local_c < 0x25c);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0x1ba,0,iVar4,st::mutable_c_string("%s"),
                             "MainMenuTy::AnimationMainMenu");
  if (iVar8 == 0) {
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0x1ba);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005B4BB0 MainMenuTy::GetMessage
#line 4 "decomp/ST.exe/functions/005B4BB0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005B4BB0; family_names=MainMenuTy::GetMessage; ret4=2;
   direct_offsets={10:9,14:1,18:0,1c:0} */

int __thiscall st::fn_005B4BB0(MainMenuTy *this,STMessage *message)

{
  StartServTy *pSVar1;
  MainMenuTyVTable *pMVar2;
  MainMenuTy *this_00;
  DWORD DVar4;
  int local_EAX_60;
  undefined3 uVar8;
  uint uVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  MMsgTy *this_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  char cVar10;
  int iVar11;
  InternalExceptionFrame local_8c;
  undefined4 local_48 [8];
  undefined4 local_28 [8];
  MainMenuTy *local_8;
  uint SVar1;
  uint temp_5f8d1d2a76;

  local_8 = this;
  DVar4 = st::fn_006E51B0(this->field_0010);
  this->field_0061 = DVar4;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_EAX_60 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_60 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0x241,0,local_EAX_60,
                               st::mutable_c_string("%s"),"MainMenuTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_60,0,st::mutable_c_string("E:\\__titans\\Start\\main_obj.cpp"),0x241);
    return 0xffff;
  }
  st::fn_00402563(local_8,message);
  temp_5f8d1d2a76 = message->id;
  if ((temp_5f8d1d2a76 < 0x697f) || (0x69fe < temp_5f8d1d2a76)) goto switchD_005b4c27_default;
  uVar8 = (undefined3)(temp_5f8d1d2a76 - 0x697f >> 8);
  switch(temp_5f8d1d2a76 - 0x697f) {
  case 0:
    iVar7 = -2;
    iVar11 = 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar5 = CONCAT31(uVar8,(char)message->id + 0x81);
    break;
  case 1:
    iVar7 = -2;
    goto LAB_005b4c5f;
  case 2:
    iVar7 = -2;
    iVar11 = 2;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    uVar5 = STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)((char)message->id + 0x81));
    break;
  case 3:
    iVar7 = -2;
    iVar11 = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar5 = CONCAT31(uVar8,(char)message->id + 0x81);
    break;
  case 4:
    iVar7 = -3;
LAB_005b4c5f:
    iVar11 = 0;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    uVar5 = STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)((char)message->id + 0x81));
    break;
  default:
    goto switchD_005b4c27_default;
  }
  /* ST_CALLSITE[005B4C6D]: CALL 0x0040499e; direct=0040499E MMObjTy::PaintSprBut */
  st::fn_0040499E((MMObjTy *)this_00,(int)message,uVar5,1,iVar11,iVar7);
switchD_005b4c27_default:
  SVar1 = message->id;
  if (SVar1 < 0x6903) {
    if (SVar1 == 0x6902) {
      if (this_00->field_1EE3 == '\0') {
        /* ST_CALLSITE[005B4D8A]: CALL 0x0040560f; direct=0040560F MainMenuTy::sub_005B4860 */
        st::fn_0040560F(this_00);
        /* ST_CALLSITE[005B4D9B]: CALL dword ptr [EDX + 0x10] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*STField<int *>(this_00,0xC) + 0x10))(0x309,0);
        goto cf_common_exit_005B4EEC;
      }
      if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
      this_00->field_00BB[0xc].field_01DB = 3;
    }
    else {
      if (SVar1 < 6) {
        if (SVar1 == 5) {
          /* ST_CALLSITE[005B4CC8]: CALL 0x004059b1; direct=004059B1 MainMenuTy::PaintMainMenu */
          st::fn_004059B1(this_00);
        }
        else if (SVar1 == 0) {
          /* ST_CALLSITE[005B4CBC]: CALL 0x00405317; direct=00405317 MainMenuTy::NoneMainMenu */
          st::fn_00405317(this_00);
        }
        else if (SVar1 == 2) {
          /* ST_CALLSITE[005B4CB0]: CALL 0x0040254f; direct=0040254F MainMenuTy::InitMainMenu */
          st::fn_0040254F(this_00,*(char *)&message->arg0);
        }
        else if (SVar1 == 3) {
          /* ST_CALLSITE[005B4CA0]: CALL 0x0040189d; direct=0040189D MainMenuTy::DoneMainMenu */
          st::fn_0040189D(this_00);
        }
        goto cf_common_exit_005B4EEC;
      }
      if (SVar1 == 0x68ff) {
        if (this_00->field_1EE3 != '\0') {
          if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
          _DAT_0080f32e = 1;
        }
        this_00->field_00BB[0xc].field_01DB = 0;
      }
      else if (SVar1 == 0x6900) {
        if ((this_00->field_1EE3 == '\0') &&
           ((g_startSystem_0081176C == nullptr ||
            (g_startSystem_0081176C->field_068A == 0)))) goto cf_common_exit_005B4EEC;
        this_00->field_00BB[0xc].field_01DB = 1;
      }
      else {
        if (SVar1 != 0x6901) goto cf_common_exit_005B4EEC;
        if (this_00->field_1EE3 == '\0') {
          this_00->field_00BB[0xc].field_01DB = 2;
        }
        else {
          if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
          this_00->field_00BB[0xc].field_01DB = (char)message->id + 1;
        }
      }
    }
LAB_005b4de5:
    /* ST_CALLSITE[005B4DE9]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_00BB[0xc].field_01DC + 0x2e6);
LAB_005b4df8:
    if (this_01 != nullptr) {
      /* ST_CALLSITE[005B4E06]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      st::fn_00401FA5(this_01,1,0,1);
    }
    goto cf_common_exit_005B4EEC;
  }
  switch(SVar1) {
  case 0x6903:
    if (this_00->field_1EE3 != '\0') {
      if (this_00->field_1EE3 != '\x01') break;
      _DAT_0080f32e = 1;
      this_00->field_00BB[0xc].field_01DB = 4;
      goto LAB_005b4de5;
    }
    pSVar1 = this_00->field_00BB[0xc].field_01DC;
    if (*(int *)(pSVar1 + 0x2e6) == 0) break;
    memset(local_48, 0, 0x20); /* compiler bulk-zero initialization */
    iVar7 = 0;
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    local_48[2] = this_00->field_0008;
    local_48[3] = 2;
    local_28[3] = 2;
    local_48[4] = 0x6941;
    local_28[4] = 0x693f;
    local_28[2] = local_48[2];
    /* ST_CALLSITE[005B4E77]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
    iVar7 = st::fn_00403FA8(*(MMsgTy **)(pSVar1 + 0x2e6),0x251d,'\x01',local_48,local_28,
                               nullptr,0,0);
    if (iVar7 == 0) break;
  case 0x6940:
    /* ST_CALLSITE[005B4E82]: CALL 0x0040560f; direct=0040560F MainMenuTy::sub_005B4860 */
    st::fn_0040560F(this_00);
    break;
  case 0x693f:
    /* ST_CALLSITE[005B4E8B]: CALL 0x004040de; direct=004040DE MainMenuTy::sub_005B47E0 */
    st::fn_004040DE(this_00);
    break;
  case 0x6941:
    if (this_00->field_1EE3 == '\0') {
      /* ST_CALLSITE[005B4E9E]: CALL 0x004040de; direct=004040DE MainMenuTy::sub_005B47E0 */
      st::fn_004040DE(this_00);
      pMVar2 = this_00->vtable;
      this_00->field_00BB[0xc].field_01DB = 4;
      /* ST_CALLSITE[005B4EAE]: CALL dword ptr [EDX + 0x8] */
      (*pMVar2->CloseButtons)(this_00);
    }
    break;
  case 0x6942:
    cVar10 = '\0';
    goto LAB_005b4ee5;
  case 0x6943:
    st::fn_004036C0(this_00,0x6942,0,0);
    /* ST_CALLSITE[005B4EC7]: CALL dword ptr [EAX + 0x8] */
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_00BB[0xc].field_01DC + 0x2e6);
    goto LAB_005b4df8;
  case 0x6944:
    cVar10 = '\x01';
LAB_005b4ee5:
    /* ST_CALLSITE[005B4EE7]: CALL 0x00401f00; direct=00401F00 MainMenuTy::SetMode */
    st::fn_00401F00(this_00,cVar10,0);
  }
cf_common_exit_005B4EEC:
  g_currentExceptionFrame = local_8c.previous;
  /* ST_CALLSITE[005B4EFB]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  iVar4 = st::fn_00401280((MMObjTy *)this_00,message);
  return iVar4;
}

