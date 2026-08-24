#include "st/generated.hpp"
// Generated translation unit: source/original/Start/mmsg_obj.cpp

// 005B6B20 MMsgTy::InitMMsg
#line 4 "decomp/ST.exe/functions/005B6B20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::InitMMsg */

void __thiscall st::fn_005B6B20(MMsgTy *this)

{
  MMsgTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    g_startSystem_0081176C->field_02E6 = local_8;
    local_8->field_009A = 8;
    /* ST_CALLSITE[005B6BAB]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
    st::fn_00401992((MMObjTy *)local_8,(RecoveredRecord_MMObjTy_005B5240 *)&local_8->field_0x9b,
                        st::mutable_c_string("MM_MBUT12"),0x194,0x213,0x24,0x12,0x12,7,0xa0,0x31,0x14,nullptr
                        ,0,0,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    /* ST_CALLSITE[005B6BF3]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
    st::fn_00401992((MMObjTy *)this_00,
                        (RecoveredRecord_MMObjTy_005B5240 *)&this_00->array_00BC[0].field_01DA,
                        st::mutable_c_string("MM_MBUT08"),0x25c,0x213,0xf,0x14,2,8,0xa0,0x34,0x14,nullptr,0,0
                        ,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    /* ST_CALLSITE[005B6C3B]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
    st::fn_00401992((MMObjTy *)this_00,
                        (RecoveredRecord_MMObjTy_005B5240 *)&this_00->array_00BC[1].field_01DA,
                        st::mutable_c_string("MM_MBUT09"),0x261,0x1da,0x10,0x12,1,7,0xa0,0x34,0xf,nullptr,0,0
                        ,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    /* ST_CALLSITE[005B6C83]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
    st::fn_00401992((MMObjTy *)this_00,
                        (RecoveredRecord_MMObjTy_005B5240 *)&this_00->array_00BC[2].field_01DA,
                        st::mutable_c_string("MM_MBUT10"),0x264,0x1a3,0x10,0x10,2,6,0x9e,0x33,10,nullptr,0,0,
                        0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    /* ST_CALLSITE[005B6CC8]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
    st::fn_00401992((MMObjTy *)this_00,
                        (RecoveredRecord_MMObjTy_005B5240 *)&this_00->array_00BC[3].field_01DA,
                        st::mutable_c_string("MM_MBUT07"),0,0x1a3,0x2f,0x10,0x1c,6,0x9d,0x31,10,nullptr,0,0,0
                        ,0,0x4b,0,nullptr,0,0,0,-1,-1);
    /* ST_CALLSITE[005B6D0D]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
    st::fn_00401992((MMObjTy *)this_00,
                        (RecoveredRecord_MMObjTy_005B5240 *)&this_00->array_00BC[4].field_01DA,
                        st::mutable_c_string("MM_MBUT06"),0,0x1da,0x32,0x12,0x1d,7,0xa0,0x32,0xf,nullptr,0,0,
                        0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    /* ST_CALLSITE[005B6D52]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
    st::fn_00401992((MMObjTy *)this_00,
                        (RecoveredRecord_MMObjTy_005B5240 *)&this_00->array_00BC[5].field_01DA,
                        st::mutable_c_string("MM_MBUT05"),0,0x213,0x34,0x13,0x21,9,0xa0,0x33,0x14,nullptr,0,0
                        ,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    /* ST_CALLSITE[005B6D9A]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
    st::fn_00401992((MMObjTy *)this_00,
                        (RecoveredRecord_MMObjTy_005B5240 *)&this_00->array_00BC[6].field_01DA,
                        st::mutable_c_string("MM_MBUT11"),0xb4,0x213,0x37,0x12,0x26,8,0xa0,0x30,0x14,nullptr,
                        0,0,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    /* ST_CALLSITE[005B6DDF]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
    st::fn_00401992((MMObjTy *)this_00,
                        (RecoveredRecord_MMObjTy_005B5240 *)&this_00->field_0x1caf,
                        st::mutable_c_string("MM_TABLO"),0x30,0x203,0xb5,0x11,0,0,0,0,0x14,nullptr,0,0,0,0,
                        0x4b,0,nullptr,0,0,0,-1,-1);
    /* ST_CALLSITE[005B6DE6]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
    st::fn_0040462E(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x22,0,errorCode,
                             st::mutable_c_string("%s"),"MMsgTy::InitMMsg");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x22);
  return;
}

// 005B6F10 MMsgTy::DoneMMsg
#line 4 "decomp/ST.exe/functions/005B6F10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::DoneMMsg */

void __thiscall st::fn_005B6F10(MMsgTy *this)

{
  MMsgTy *pMVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (errorCode == 0) {
    /* ST_CALLSITE[005B6F44]: CALL 0x0040458e; direct=0040458E MMObjTy::DoneMMObj */
    st::fn_0040458E((MMObjTy *)local_8);
    g_startSystem_0081176C->field_02E6 = nullptr;
    st::fn_00715AB0((SpriteClassTy *)&pMVar2->field_0x1cf7);
    st::fn_00715AB0((SpriteClassTy *)&pMVar2->field_1D88);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x31,0,errorCode,
                             st::mutable_c_string("%s"),"MMsgTy::DoneMMsg");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x31);
  return;
}

// 005B6FF0 MMsgTy::HideSprites
#line 4 "decomp/ST.exe/functions/005B6FF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::HideSprites */

void __thiscall st::fn_005B6FF0(MMsgTy *this)

{
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    iVar5 = 0xd;
    puVar6 = local_8->field_0066;
    do {
      if (*puVar6 != 0) {
        st::fn_006E56B0(pMVar2->field_000C,*puVar6);
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pMVar2->field_1CFF = 0;
    if (pMVar2->field_1CFB != 0xffffffff) {
      st::fn_006B3730
                ((uint *)pMVar2->field_1D3F,pMVar2->field_1CFB,pMVar2->field_1CFF,pMVar2->field_1D13
                 ,pMVar2->field_1D17);
    }
    if (pMVar2->field_1CFB != 0xffffffff) {
      st::fn_006B3AF0((int *)pMVar2->field_1D3F,pMVar2->field_1CFB);
    }
    if (pMVar2->field_1D8C != 0xffffffff) {
      st::fn_006B3AF0((int *)pMVar2->field_1DD0,pMVar2->field_1D8C);
    }
    iVar5 = 0;
    if (pMVar2->field_009A != 0) {
      puVar6 = &pMVar2->array_00BC[0].field_0027.field_0004;
      do {
        puVar6[1] = 0;
        if (*puVar6 != 0xffffffff) {
          st::fn_006B3730
                    ((uint *)puVar6[0x11],*puVar6,puVar6[1],puVar6[6],puVar6[7]);
        }
        if (*puVar6 != 0xffffffff) {
          st::fn_006B3AF0((int *)puVar6[0x11],*puVar6);
        }
        if (STField<uint>(puVar6,0x91) != 0xffffffff) {
          st::fn_006B3AF0(STField<int *>(puVar6,0xd5),STField<uint>(puVar6,0x91));
        }
        if ((*(char *)((int)puVar6 + -5) != '\0') && (STField<uint>(puVar6,0x122) != 0xffffffff))
        {
          st::fn_006B3AF0(STField<int *>(puVar6,0x166),STField<uint>(puVar6,0x122));
        }
        iVar5 = iVar5 + 1;
        puVar6 = (uint *)((int)puVar6 + 0x1fb);
      } while (iVar5 < (int)(uint)pMVar2->field_009A);
    }
    pMVar2->field_0065 = 2;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x41,0,iVar3,st::mutable_c_string("%s"),
                             "MMsgTy::HideSprites");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x41);
  return;
}

// 005B7210 MMsgTy::ShowSprites
#line 4 "decomp/ST.exe/functions/005B7210/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::ShowSprites

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005B7210(MMsgTy *this)

{
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_1CFB != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)local_8->field_1D3F,local_8->field_1CFB,0xfffffffe,local_8->field_1D13,
                 local_8->field_1D17);
    }
    iVar3 = 0;
    if (pMVar2->field_009A != 0) {
      puVar5 = &pMVar2->array_00BC[0].field_0027.field_0004;
      do {
        if (*puVar5 != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)puVar5[0x11],*puVar5,0xfffffffe,puVar5[6],puVar5[7]);
        }
        iVar3 = iVar3 + 1;
        puVar5 = (uint *)((int)puVar5 + 0x1fb);
      } while (iVar3 < (int)(uint)pMVar2->field_009A);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x4b,0,iVar3,st::mutable_c_string("%s"),
                             "MMsgTy::ShowSprites");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x4b);
  return;
}

// 005B7340 MMsgTy::PaintMMsg
#line 4 "decomp/ST.exe/functions/005B7340/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::PaintMMsg */

void __thiscall st::fn_005B7340(MMsgTy *this)

{
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_1CFB != 0xffffffff) {
      st::fn_006B3730
                ((uint *)local_8->field_1D3F,local_8->field_1CFB,local_8->field_1CFF,
                 local_8->field_1D13,local_8->field_1D17);
    }
    if (pMVar2->field_1D8C != 0xffffffff) {
      st::fn_006B3730
                ((uint *)pMVar2->field_1DD0,pMVar2->field_1D8C,pMVar2->field_1D90,pMVar2->field_1DA4
                 ,pMVar2->field_1DA8);
    }
    iVar3 = 0;
    if (pMVar2->field_009A != 0) {
      puVar5 = &pMVar2->array_00BC[0].field_0027.field_001C;
      do {
        if (puVar5[-6] != 0xffffffff) {
          st::fn_006B3730
                    ((uint *)puVar5[0xb],puVar5[-6],puVar5[-5],*puVar5,puVar5[1]);
        }
        if (STField<uint>(puVar5,0x79) != 0xffffffff) {
          st::fn_006B3730
                    (STField<uint *>(puVar5,0xbd),STField<uint>(puVar5,0x79),
                     STField<uint>(puVar5,0x7d),STField<uint>(puVar5,0x91),
                     STField<uint>(puVar5,0x95));
        }
        if ((*(char *)((int)puVar5 + -0x1d) != '\0') &&
           (STField<uint>(puVar5,0x10a) != 0xffffffff)) {
          st::fn_006B3730
                    (STField<uint *>(puVar5,0x14e),STField<uint>(puVar5,0x10a),
                     STField<uint>(puVar5,0x10e),STField<uint>(puVar5,0x122),
                     STField<uint>(puVar5,0x126));
        }
        iVar3 = iVar3 + 1;
        puVar5 = (uint *)((int)puVar5 + 0x1fb);
      } while (iVar3 < (int)(uint)pMVar2->field_009A);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x59,0,iVar3,st::mutable_c_string("%s"),
                             "MMsgTy::PaintMMsg");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x59);
  return;
}

// 005B7540 MMsgTy::NoneMMsg
#line 4 "decomp/ST.exe/functions/005B7540/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::NoneMMsg */

void __thiscall st::fn_005B7540(MMsgTy *this)

{
  SpriteClassTy *this_00;
  char cVar1;
  byte bVar2;
  SpriteClassTyVTable *pSVar3;
  StartSystemTy *pSVar4;
  MMsgTy *this_01;
  int iVar6;
  uint uVar6;
  char *pcVar11_mg1;
  short *psVar7;
  int iVar9;
  int iVar8;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  byte *puVar14;
  MMsgTy_Record_00BC_01FB *pMVar15;
  byte *puVar16;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  byte uVar21;
  uint uVar22;
  InternalExceptionFrame local_bc;
  int local_78 [8];
  int local_58 [8];
  int local_38 [8];
  MMsgTy *local_18;
  int local_14;
  short *local_10;
  int local_c;
  MMsgTy_Record_00BC_01FB *local_8;

  local_c = 1;
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_18 = this;
  iVar6 = st::fn_0072D7F0(local_bc.jumpBuffer,0);
  this_01 = local_18;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_bc.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0xe4,0,iVar6,st::mutable_c_string("%s"),
                               "MMsgTy::NoneMMsg");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0xe4);
    return;
  }
  cVar1 = local_18->field_0065;
  if (cVar1 == '\x01') {
    if ((local_18->field_1CD0 != 0) && (local_18->field_1D90 < local_18->field_1D94 + -3)) {
      if ((local_18->field_1D90 == 0) && (local_18->field_1D8C != 0xffffffff)) {
        st::fn_006B34D0
                  ((uint *)local_18->field_1DD0,local_18->field_1D8C,0xfffffffe,local_18->field_1DA4
                   ,local_18->field_1DA8);
      }
      this_01->field_1D90 = st::machine_word_boundary_cast<int>(this_01->field_1D90 + 1);
      if (this_01->field_1D8C != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)this_01->field_1DD0,this_01->field_1D8C,this_01->field_1D90,
                   this_01->field_1DA4,this_01->field_1DA8);
      }
      st::fn_00404BF1(this_01,0x1e,'\x01',-1);
    }
  }
  else if (cVar1 == '\x03') {
    if (local_18->field_1CD0 != 0) {
      if (local_18->field_1CFF < local_18->field_1D03 + -1) {
        local_18->field_1CFF = st::machine_word_boundary_cast<int>(local_18->field_1CFF + 1);
        if (local_18->field_1CFB != 0xffffffff) {
          st::fn_006B3730
                    ((uint *)local_18->field_1D3F,local_18->field_1CFB,local_18->field_1CFF,
                     local_18->field_1D13,local_18->field_1D17);
        }
        local_c = 0;
      }
      else if (local_18->field_1D90 < local_18->field_1D94 + -3) {
        if ((local_18->field_1D90 == 0) && (local_18->field_1D8C != 0xffffffff)) {
          st::fn_006B34D0
                    ((uint *)local_18->field_1DD0,local_18->field_1D8C,0xfffffffe,
                     local_18->field_1DA4,local_18->field_1DA8);
        }
        this_01->field_1D90 = st::machine_word_boundary_cast<int>(this_01->field_1D90 + 1);
        if (this_01->field_1D8C != 0xffffffff) {
          st::fn_006B3730
                    ((uint *)this_01->field_1DD0,this_01->field_1D8C,this_01->field_1D90,
                     this_01->field_1DA4,this_01->field_1DA8);
        }
        st::fn_00404BF1(this_01,0x1e,'\x01',-1);
      }
    }
    iVar10 = 0;
    if (this_01->field_009A != 0) {
      puVar12 = &this_01->array_00BC[0].field_0027.field_001C;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(char *)((int)&this_01->field_1C9C + iVar10) != '\0') &&
           (*(int *)((int)puVar12 + -0x43) != 0)) {
          if (puVar12[9] <= this_01->field_0061 - puVar12[10]) {
            if ((int)puVar12[-5] < (int)(puVar12[-4] - 1)) {
              uVar6 = st::machine_word_boundary_cast<uint>(puVar12[-5] + 1);
              puVar12[-5] = uVar6;
              if (puVar12[-6] != 0xffffffff) {
                st::fn_006B3730
                          ((uint *)puVar12[0xb],puVar12[-6],uVar6,*puVar12,puVar12[1]);
              }
            }
            else {
              if (STField<int>(puVar12,0x81) + -3 <= STField<int>(puVar12,0x7d))
              goto LAB_005b7ad9;
              if ((STField<int>(puVar12,0x7d) == 0) &&
                 (STField<uint>(puVar12,0x79) != 0xffffffff)) {
                st::fn_006B34D0
                          (STField<uint *>(puVar12,0xbd),STField<uint>(puVar12,0x79),0xfffffffe
                           ,STField<uint>(puVar12,0x91),STField<uint>(puVar12,0x95));
              }
              uVar6 = STField<int>(puVar12,0x7d) + 1;
              STField<uint>(puVar12,0x7d) = uVar6;
              if (STField<uint>(puVar12,0x79) != 0xffffffff) {
                st::fn_006B3730
                          (STField<uint *>(puVar12,0xbd),STField<uint>(puVar12,0x79),uVar6,
                           STField<uint>(puVar12,0x91),STField<uint>(puVar12,0x95));
              }
              st::fn_00404BF1(this_01,0x1e,'\x01',-1);
            }
          }
          local_c = 0;
        }
LAB_005b7ad9:
        iVar10 = iVar10 + 1;
        puVar12 = (uint *)((int)puVar12 + 0x1fb);
      } while (iVar10 < (int)(uint)this_01->field_009A);
    }
    if (local_c != 0) {
      this_01->field_0065 = 1;
      if (this_01->field_009A != 0) {
        local_8 = (MMsgTy_Record_00BC_01FB *)this_01->field_0066;
        local_10 = (short *)&this_01->field_0x1c82;
        puVar16 = (byte *)&this_01->field_0xa7;
        iVar10 = 0x68ff;
        do {
          if ((STField<int>(puVar16,0x15) != 0) && (*(uint *)local_8 == 0)) {
            if (this_01->field_1CA9 == '\0') {
              uVar6 = (uint)(-1 < *local_10);
            }
            else {
              uVar6 = 1;
            }
            /* ST_CALLSITE[005B7B78]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
            uVar6 = st::fn_0040361B
                              ((MMObjTy *)this_01,1,uVar6,st::machine_word_boundary_cast<undefined4>(puVar16[0x16] + puVar16[-3]),
                               st::machine_word_boundary_cast<undefined4>(puVar16[0x17] + puVar16[-2]),puVar16[-1],*puVar16,iVar10,iVar10 + 0x80
                              );
            *(uint *)local_8 = uVar6;
          }
          local_10 = local_10 + 1;
          local_8 = (MMsgTy_Record_00BC_01FB *)((int)local_8 + 4);
          puVar16 = (byte *)((int)puVar16 + 0x1fb);
          iVar8 = iVar10 + -0x68fe;
          iVar10 = iVar10 + 1;
        } while (iVar8 < (int)(uint)this_01->field_009A);
      }
      if ((this_01->field_1CA9 == '\0') && (local_58[2] = this_01->field_1CAB, local_58[2] != 0)) {
        pSVar4 = this_01->field_000C;
        memset(local_58, 0, 0x20); /* compiler bulk-zero initialization */
        local_58[3] = 2;
        local_58[4] = 0x693f;
        /* ST_CALLSITE[005B7BF5]: CALL dword ptr [EDX + 0x18] */
        (*pSVar4->vtable->vfunc_18)((short)local_58);
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    if ((local_18->field_1CD0 != 0) && (0 < local_18->field_1CFF)) {
      local_18->field_1CFF = st::machine_word_boundary_cast<int>(local_18->field_1CFF + -1);
      if (local_18->field_1CFB != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)local_18->field_1D3F,local_18->field_1CFB,local_18->field_1CFF,
                   local_18->field_1D13,local_18->field_1D17);
      }
      local_c = 0;
    }
    if (this_01->field_009A != 0) {
      pcVar11 = (char *)&this_01->field_1C9C;
      local_14 = -0x1c9c - (int)this_01;
      puVar12 = &this_01->array_00BC[0].field_0027.field_001C;
      do {
        if (*pcVar11 != '\0') {
          if (puVar12[9] <= this_01->field_0061 - puVar12[10]) {
            if ((int)puVar12[-5] < 1) {
              if (this_01->field_1CAA == '\0') {
                *(undefined4 *)((int)puVar12 + -0x43) = 0;
              }
              *pcVar11 = '\0';
              goto LAB_005b7655;
            }
            uVar6 = st::machine_word_boundary_cast<uint>(puVar12[-5] - 1);
            puVar12[-5] = uVar6;
            if (puVar12[-6] != 0xffffffff) {
              st::fn_006B3730
                        ((uint *)puVar12[0xb],puVar12[-6],uVar6,*puVar12,puVar12[1]);
            }
          }
          local_c = 0;
        }
LAB_005b7655:
        puVar12 = (uint *)((int)puVar12 + 0x1fb);
        pcVar11 = pcVar11 + 1;
      } while ((int)(pcVar11 + local_14) < (int)(uint)this_01->field_009A);
    }
    if (local_c != 0) {
      this_01->field_0065 = 2;
      if (this_01->field_1CA9 != '\0') {
        if (this_01->field_1CAA != '\0') {
          this_01->field_1C9C = 0x1010101;
          this_01->field_1CA0 = 0x1010101;
          this_01->field_1CA4 = 0x1010101;
          this_01->field_1CA8 = 1;
          this_01->field_0065 = 3;
          st::fn_00404BF1(this_01,5,'\0',-1);
          this_01->field_1CAA = 0;
          g_currentExceptionFrame = local_bc.previous;
          return;
        }
        bVar2 = this_01->array_00BC[0xc].field_01DA;
        if ((bVar2 != 0xff) && (*(int *)&this_01->array_00BC[bVar2].field_0x15 != 0)) {
          st::fn_006E3B50
                    ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->array_00BC[bVar2].field_0x5
                    );
        }
        iVar10 = this_01->field_1CAB;
        if (iVar10 != 0) {
          memset(local_78, 0, 0x20); /* compiler bulk-zero initialization */
          local_78[3] = 2;
          local_78[4] = 0x693f;
          local_78[2] = iVar10;
          /* ST_CALLSITE[005B775C]: CALL dword ptr [EDX + 0x18] */
          (*this_01->field_000C->vtable->vfunc_18)((short)local_78);
        }
        if (this_01->array_00BC[0xc].field_01DF != '\0') {
          local_14 = 0;
          puVar16 = (byte *)&this_01->array_00BC[0xc].field_0x1e0;
          puVar14 = (byte *)(&this_01->field_1CD0);
          memmove(puVar14, puVar16, 0x27); /* compiler REP MOVS byte copy */
          iVar10 = 0;
          if (this_01->field_009A != 0) {
            local_8 = this_01->array_00BC;
            local_10 = (short *)&this_01->field_0x1a87;
            do {
              psVar7 = local_10;
              pMVar15 = local_8;
              for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
                pMVar15->field_0000 = *(undefined4 *)psVar7;
                psVar7 = (short *)((int)psVar7 + 4);
                pMVar15 = (MMsgTy_Record_00BC_01FB *)&pMVar15->field_0x4;
              }
              *(short *)&pMVar15->field_0000 = *psVar7;
              *(undefined1 *)((int)&pMVar15->field_0000 + 2) = STField<undefined1>(psVar7,2);
              if (local_8->field_0000 != 0) {
                uVar22 = 0xffffffff;
                uVar21 = 7;
                iVar20 = -1;
                pSVar3 = (local_8->field_00B8).vtable;
                iVar19 = -1;
                iVar18 = 1;
                uVar6 = 0xffffffff;
                cVar17 = CASE_FFFFFFFE;
                iVar8 = 0x1e;
                this_00 = st::pointer_boundary_cast<SpriteClassTy *>(&local_8->field_00B8);
                iVar10 = 0x7d;
                pcVar11_mg1 = st::fn_006B0140(local_8->field_0000,g_hINSTANCE_00807618);
                psVar7 = (short *)st::fn_00713480
                                            ((ccFntTy *)g_startSystem_0081176C->field_0030,
                                             pcVar11_mg1,iVar10,iVar8,cVar17,uVar6,iVar18,iVar19,
                                             iVar20);
                /* ST_CALLSITE[005B77FF]: CALL dword ptr [EDI + 0x8] */
                (*pSVar3->SetImagesPtr)(this_00,psVar7,uVar21,uVar22);
                (local_8->field_00B8).field_0008 = 0;
              }
              local_14 = local_14 + 1;
              local_10 = (short *)((int)local_10 + 0x27);
              local_8 = local_8 + 1;
            } while (local_14 < (int)(uint)this_01->field_009A);
          }
          cVar1 = this_01->array_00BC[0xc].field_01DF;
          if ((cVar1 == '\x03') || (cVar1 == '\x01')) {
            this_01->field_1C9C = 0x1010101;
            this_01->field_1CA0 = 0x1010101;
            this_01->field_1CA4 = 0x1010101;
            this_01->field_1CA8 = 1;
            this_01->field_0065 = 3;
          }
          this_01->array_00BC[0xc].field_01DF = 0;
        }
        this_01->field_1CA9 = 0;
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
      iVar10 = this_01->field_1CAB;
      if (iVar10 != 0) {
        memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
        local_38[3] = 2;
        local_38[4] = 0x693f;
        local_38[2] = iVar10;
        /* ST_CALLSITE[005B78B2]: CALL dword ptr [EDX + 0x18] */
        (*this_01->field_000C->vtable->vfunc_18)((short)local_38);
      }
      bVar2 = this_01->array_00BC[0xc].field_01DA;
      if ((bVar2 != 0xff) && (*(int *)&this_01->array_00BC[bVar2].field_0x15 != 0)) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->array_00BC[bVar2].field_0x5);
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_bc.previous;
  return;
}

// 005B7EF0 MMsgTy::SetMessage
#line 4 "decomp/ST.exe/functions/005B7EF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetMessage */

undefined4 __thiscall
st::fn_005B7EF0(MMsgTy *this,UINT param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,int param_6,UINT param_7)

{
  SpriteClassTyVTable *pSVar1;
  MMsgTy *this_00;
  byte bVar3;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte *puVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  MMsgTy_Record_00BC_01FB *pMVar11;
  byte *puVar13;
  uint uVar14;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  CHAR local_478 [1024];
  InternalExceptionFrame local_78;
  int local_34 [8];
  MMsgTy *local_14;
  int local_10;
  uint local_c;
  uint local_8;

  local_c = local_c & 0xffffff00;
  if ((param_1 != 0) && (this->field_1CA9 == '\0')) {
    local_78.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_78;
    local_14 = this;
    iVar3 = st::fn_0072D7F0(local_78.jumpBuffer,0);
    this_00 = local_14;
    if (iVar3 == 0) {
      iVar10 = local_14->field_1CAB;
      if (iVar10 != 0) {
        memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar10;
        /* ST_CALLSITE[005B7F76]: CALL dword ptr [EAX + 0x18] */
        (*this_00->field_000C->vtable->vfunc_18)((short)local_34);
      }
      this_00->field_1CA9 = 1;
      puVar6 = (byte *)(&this_00->field_1CD0);
      puVar13 = (byte *)&this_00->array_00BC[0xc].field_0x1e0;
      memmove(puVar13, puVar6, 0x27); /* compiler REP MOVS byte copy */
      this_00->array_00BC[0xc].field_01DF = this_00->field_0065;
      this_00->field_002D = 0x21;
      memset(&this_00->field_0x1c82, 0, 0x1a); /* compiler bulk-zero initialization */
      iVar10 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar14 = local_8 & 0xff;
          if (this_00->field_0066[uVar14] != 0) {
            st::fn_006E6080(this_00,2,this_00->field_0066[uVar14],(undefined4 *)&this_00->field_0x1d);
            *(ushort *)(&this_00->field_0x1c82 + uVar14 * 2) =
                 (-(ushort)(this_00->field_0031 != 0) & 2) - 1;
          }
          pMVar11 = this_00->array_00BC + uVar14;
          puVar6 = (byte *)((int)(this_00->array_00BC + 0xd) + uVar14 * 0x27 + 0xc);
          for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar6 = pMVar11->field_0000;
            pMVar11 = (MMsgTy_Record_00BC_01FB *)&pMVar11->field_0x4;
            puVar6 = (byte *)(puVar6 + 1);
          }
          *(undefined2 *)puVar6 = *(undefined2 *)&pMVar11->field_0000;
          STField<undefined1>(puVar6,2) = *(undefined1 *)((int)&pMVar11->field_0000 + 2);
          bVar3 = (char)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        } while (bVar3 < this_00->field_009A);
      }
      this_00->field_1CD0 = param_1;
      if (param_6 == 0) {
        uVar22 = 0xffffffff;
        local_10 = this_00->field_1D88;
        uVar21 = 7;
        iVar18 = -1;
        iVar17 = -1;
        iVar16 = 1;
        uVar14 = 0xffffffff;
        cVar15 = CASE_FFFFFFFE;
        iVar9 = 0x39;
        iVar10 = 0x158;
        pcVar4 = st::fn_006B0140(param_1,g_hINSTANCE_00807618);
        puVar6 = st::pointer_boundary_cast<byte *>(st::fn_00713480
                           ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,iVar9,cVar15
                            ,uVar14,iVar16,iVar17,iVar18));
        /* ST_CALLSITE[005B8102]: CALL dword ptr [EAX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(local_10 + 8))(puVar6,uVar21,uVar22);
      }
      else {
        pcVar4 = st::fn_006B0140(param_7,g_hINSTANCE_00807618);
        pcVar5 = st::fn_006B0140(param_1,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005B8076]: CALL dword ptr [0x0085bde8] */
        st::external_00000080(local_478,st::mutable_c_string("%s\n(%s=%li)"),pcVar5,pcVar4,param_6);
        iVar10 = this_00->field_1D88;
        uVar22 = 0xffffffff;
        uVar21 = 7;
        puVar6 = st::pointer_boundary_cast<byte *>(st::fn_00713480
                           ((ccFntTy *)g_startSystem_0081176C->field_0030,local_478,0x158,0x39,
                            CASE_FFFFFFFE,0xffffffff,1,-1,-1));
        /* ST_CALLSITE[005B80B7]: CALL dword ptr [ESI + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar10 + 8))(puVar6,uVar21,uVar22);
      }
      bVar3 = 0;
      this_00->field_1D90 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar14 = local_8 & 0xff;
          bVar3 = bVar3 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
          this_00->array_00BC[uVar14].field_0000 = 0;
          this_00->array_00BC[uVar14].field_0025 = 1;
        } while (bVar3 < this_00->field_009A);
      }
      if (param_2 == '\0') {
        this_00->array_00BC[2].field_0000 = 0x24b8;
        this_00->array_00BC[2].field_0025 = 1;
        iVar10 = 8;
        if (param_3 == nullptr) {
          puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar6 = 0;
            puVar6 = (byte *)(puVar6 + 1);
          }
        }
        else {
          puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar6 = *param_3;
            param_3 = param_3 + 1;
            puVar6 = (byte *)(puVar6 + 1);
          }
        }
        uVar20 = 0xffffffff;
        uVar19 = 7;
        iVar18 = -1;
        pSVar1 = this_00->array_00BC[2].field_00B8.vtable;
        iVar17 = -1;
        iVar16 = 1;
        uVar14 = 0xffffffff;
        cVar15 = CASE_FFFFFFFE;
        iVar9 = 0x1e;
        iVar10 = 0x7d;
        pcVar4 = st::fn_006B0140(this_00->array_00BC[2].field_0000,g_hINSTANCE_00807618);
        psVar7 = (short *)st::fn_00713480
                                    ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,
                                     iVar9,cVar15,uVar14,iVar16,iVar17,iVar18);
        /* ST_CALLSITE[005B840A]: CALL dword ptr [ESI + 0x8] */
        (*pSVar1->SetImagesPtr)(&this_00->array_00BC[2].field_00B8,psVar7,uVar19,uVar20);
        this_00->array_00BC[2].field_00B8.field_0008 = 0;
      }
      else {
        if (param_2 == '\x01') {
          this_00->array_00BC[2].field_0000 = 0x24b9;
          this_00->array_00BC[2].field_0025 = 1;
          iVar10 = 8;
          if (param_3 == nullptr) {
            puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = 0;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          else {
            puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = *param_3;
              param_3 = param_3 + 1;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          uVar20 = 0xffffffff;
          uVar19 = 7;
          iVar18 = -1;
          pSVar1 = this_00->array_00BC[2].field_00B8.vtable;
          iVar17 = -1;
          iVar16 = 1;
          uVar14 = 0xffffffff;
          cVar15 = CASE_FFFFFFFE;
          iVar9 = 0x1e;
          iVar10 = 0x7d;
          pcVar4 = st::fn_006B0140(this_00->array_00BC[2].field_0000,g_hINSTANCE_00807618);
          psVar7 = (short *)st::fn_00713480
                                      ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,
                                       iVar9,cVar15,uVar14,iVar16,iVar17,iVar18);
          /* ST_CALLSITE[005B836E]: CALL dword ptr [ESI + 0x8] */
          (*pSVar1->SetImagesPtr)(&this_00->array_00BC[2].field_00B8,psVar7,uVar19,uVar20);
          this_00->array_00BC[2].field_00B8.field_0008 = 0;
          this_00->array_00BC[1].field_0000 = 0x24ba;
          this_00->array_00BC[1].field_0025 = 1;
          param_5 = param_4;
        }
        else {
          if (param_2 != '\x02') goto LAB_005b8415;
          this_00->array_00BC[3].field_0000 = 0x24b9;
          this_00->array_00BC[3].field_0025 = 1;
          iVar10 = 8;
          if (param_3 == nullptr) {
            puVar6 = (byte *)&this_00->array_00BC[3].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = 0;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          else {
            puVar6 = (byte *)&this_00->array_00BC[3].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = *param_3;
              param_3 = param_3 + 1;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          uVar20 = 0xffffffff;
          uVar19 = 7;
          iVar18 = -1;
          pSVar1 = this_00->array_00BC[3].field_00B8.vtable;
          iVar17 = -1;
          iVar16 = 1;
          uVar14 = 0xffffffff;
          cVar15 = CASE_FFFFFFFE;
          iVar9 = 0x1e;
          iVar10 = 0x7d;
          pcVar4 = st::fn_006B0140(this_00->array_00BC[3].field_0000,g_hINSTANCE_00807618);
          psVar7 = (short *)st::fn_00713480
                                      ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,
                                       iVar9,cVar15,uVar14,iVar16,iVar17,iVar18);
          /* ST_CALLSITE[005B81E6]: CALL dword ptr [ESI + 0x8] */
          (*pSVar1->SetImagesPtr)(&this_00->array_00BC[3].field_00B8,psVar7,uVar19,uVar20);
          this_00->array_00BC[3].field_00B8.field_0008 = 0;
          this_00->array_00BC[2].field_0000 = 0x24ba;
          this_00->array_00BC[2].field_0025 = 1;
          iVar10 = 8;
          if (param_4 == nullptr) {
            puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = 0;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          else {
            puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = *param_4;
              param_4 = param_4 + 1;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          uVar20 = 0xffffffff;
          uVar19 = 7;
          iVar18 = -1;
          pSVar1 = this_00->array_00BC[2].field_00B8.vtable;
          iVar17 = -1;
          iVar16 = 1;
          uVar14 = 0xffffffff;
          cVar15 = CASE_FFFFFFFE;
          iVar9 = 0x1e;
          iVar10 = 0x7d;
          pcVar4 = st::fn_006B0140(this_00->array_00BC[2].field_0000,g_hINSTANCE_00807618);
          psVar7 = (short *)st::fn_00713480
                                      ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,
                                       iVar9,cVar15,uVar14,iVar16,iVar17,iVar18);
          /* ST_CALLSITE[005B8267]: CALL dword ptr [ESI + 0x8] */
          (*pSVar1->SetImagesPtr)(&this_00->array_00BC[2].field_00B8,psVar7,uVar19,uVar20);
          this_00->array_00BC[2].field_00B8.field_0008 = 0;
          this_00->array_00BC[1].field_0000 = 0x24bb;
          this_00->array_00BC[1].field_0025 = 1;
        }
        iVar10 = 8;
        if (param_5 == nullptr) {
          puVar6 = (byte *)&this_00->array_00BC[1].field_0x5;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar6 = 0;
            puVar6 = (byte *)(puVar6 + 1);
          }
        }
        else {
          puVar6 = (byte *)&this_00->array_00BC[1].field_0x5;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar6 = *param_5;
            param_5 = param_5 + 1;
            puVar6 = (byte *)(puVar6 + 1);
          }
        }
        uVar20 = 0xffffffff;
        uVar19 = 7;
        iVar18 = -1;
        pSVar1 = this_00->array_00BC[1].field_00B8.vtable;
        iVar17 = -1;
        iVar16 = 1;
        uVar14 = 0xffffffff;
        cVar15 = CASE_FFFFFFFE;
        iVar9 = 0x1e;
        iVar10 = 0x7d;
        pcVar4 = st::fn_006B0140(this_00->array_00BC[1].field_0000,g_hINSTANCE_00807618);
        psVar7 = (short *)st::fn_00713480
                                    ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,
                                     iVar9,cVar15,uVar14,iVar16,iVar17,iVar18);
        /* ST_CALLSITE[005B82E8]: CALL dword ptr [ESI + 0x8] */
        (*pSVar1->SetImagesPtr)(&this_00->array_00BC[1].field_00B8,psVar7,uVar19,uVar20);
        this_00->array_00BC[1].field_00B8.field_0008 = 0;
      }
LAB_005b8415:
      /* ST_CALLSITE[005B8417]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
      st::fn_00403459((MMObjTy *)this_00);
      bVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar14 = local_8 & 0xff;
          this_00->array_00BC[uVar14].field_0027.field_0044 = this_00->field_0061;
          this_00->array_00BC[uVar14].field_0027.field_0040 = ((local_c & 0xff) + 1) * 100;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)(this_00->array_00BC + 0xd) + uVar14 * 0x27 + 0xc) != 0) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
          }
          bVar3 = bVar3 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        } while (bVar3 < this_00->field_009A);
      }
      if (this_00->field_0065 == '\x02') {
        this_00->field_0065 = 3;
        this_00->field_1C9C = 0x1010101;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        st::fn_00404BF1(this_00,5,'\0',-1);
        this_00->field_1CAA = 0;
      }
      else {
        this_00->field_0065 = 4;
        this_00->field_1C9C = 0x1010101;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        st::fn_00404BF1(this_00,6,'\x01',-1);
        this_00->field_1CAA = 1;
        if (this_00->field_1D8C != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_1DD0,this_00->field_1D8C);
        }
        local_8 = local_8 & 0xffffff00;
        if (this_00->field_009A != 0) {
          do {
            uVar20 = local_8 & 0xff;
            uVar14 = this_00->array_00BC[uVar20].field_00B8.field_0004;
            if (uVar14 != 0xffffffff) {
              st::fn_006B3AF0((int *)this_00->array_00BC[uVar20].field_00B8.field_0048,uVar14);
            }
            if ((this_00->array_00BC[uVar20].field_0026 != '\0') &&
               (uVar14 = this_00->array_00BC[uVar20].field_0149.field_0004, uVar14 != 0xffffffff)) {
              st::fn_006B3AF0((int *)this_00->array_00BC[uVar20].field_0149.field_0048,uVar14);
            }
            bVar3 = (char)local_8 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
          } while (bVar3 < this_00->field_009A);
          g_currentExceptionFrame = local_78.previous;
          return 1;
        }
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x14e,0,iVar3,st::mutable_c_string("%s")
                               ,"MMsgTy::SetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x14e);
  }
  return 0;
}

// 005B87D0 MMsgTy::SetPanel
#line 4 "decomp/ST.exe/functions/005B87D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetPanel */

undefined4 __thiscall
st::fn_005B87D0(MMsgTy *this,UINT param_1,int param_2,int param_3,UINT param_4)

{
  SpriteClassTyVTable *pSVar1;
  StartSystemTy *pSVar2;
  MMsgTy *this_00;
  byte bVar4;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  short *psVar8;
  int iVar9;
  uint uVar9;
  UINT *pUVar10;
  MMsgTy_Record_00BC_01FB *pMVar11;
  int iVar13;
  int iVar14;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  CHAR local_478 [1024];
  InternalExceptionFrame local_78;
  int local_34 [8];
  MMsgTy *local_14;
  UINT *local_10;
  uint local_c;
  uint local_8;

  local_c = local_c & 0xffffff00;
  if ((this->field_0065 == '\x02') && (this->field_1CA9 == '\0')) {
    local_78.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_78;
    local_14 = this;
    iVar4 = st::fn_0072D7F0(local_78.jumpBuffer,0);
    this_00 = local_14;
    if (iVar4 == 0) {
      /* ST_CALLSITE[005B882A]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
      st::fn_00403459((MMObjTy *)local_14);
      /* ST_CALLSITE[005B8835]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      st::fn_00401FA5(this_00,0,0,1);
      if (param_1 == 0) {
        this_00->field_1CD0 = 0;
      }
      else {
        this_00->field_1CD0 = param_1;
        if (param_3 == 0) {
          uVar22 = 0xffffffff;
          local_8 = this_00->field_1D88;
          uVar21 = 7;
          iVar19 = -1;
          iVar18 = -1;
          iVar17 = 1;
          uVar9 = 0xffffffff;
          cVar15 = CASE_FFFFFFFE;
          iVar14 = 0x39;
          iVar13 = 0x158;
          pcVar5 = st::fn_006B0140(param_1,g_hINSTANCE_00807618);
          puVar7 = st::fn_00713480
                             ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar5,iVar13,iVar14,
                              cVar15,uVar9,iVar17,iVar18,iVar19);
          /* ST_CALLSITE[005B8913]: CALL dword ptr [EDX + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(local_8 + 8))(puVar7,uVar21,uVar22);
          this_00->field_1D90 = 0;
        }
        else {
          pcVar5 = st::fn_006B0140(param_4,g_hINSTANCE_00807618);
          pcVar6 = st::fn_006B0140(param_1,g_hINSTANCE_00807618);
          /* ST_CALLSITE[005B887D]: CALL dword ptr [0x0085bde8] */
          st::external_00000080(local_478,st::mutable_c_string("%s\n(%s=%li)"),pcVar6,pcVar5,param_3);
          iVar13 = this_00->field_1D88;
          uVar22 = 0xffffffff;
          uVar21 = 7;
          puVar7 = st::fn_00713480
                             ((ccFntTy *)g_startSystem_0081176C->field_0030,local_478,0x158,0x39,
                              CASE_FFFFFFFE,0xffffffff,1,-1,-1);
          /* ST_CALLSITE[005B88BF]: CALL dword ptr [EDI + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(iVar13 + 8))(puVar7,uVar21,uVar22);
          this_00->field_1D90 = 0;
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar9 = local_8 & 0xff;
          local_10 = (UINT *)(uVar9 * 0x27 + param_2);
          if (*local_10 == 0) {
            pMVar11 = this_00->array_00BC + uVar9;
            for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
              pMVar11->field_0000 = 0;
              pMVar11 = (MMsgTy_Record_00BC_01FB *)&pMVar11->field_0x4;
            }
            *(undefined2 *)&pMVar11->field_0000 = 0;
            *(undefined1 *)((int)&pMVar11->field_0000 + 2) = 0;
          }
          else {
            uVar23 = 0xffffffff;
            uVar20 = 7;
            iVar19 = -1;
            iVar18 = -1;
            iVar17 = 1;
            uVar16 = 0xffffffff;
            cVar15 = CASE_FFFFFFFE;
            iVar14 = 0x1e;
            iVar13 = 0x7d;
            pSVar1 = this_00->array_00BC[uVar9].field_00B8.vtable;
            pcVar5 = st::fn_006B0140(*local_10,g_hINSTANCE_00807618);
            psVar8 = (short *)st::fn_00713480
                                        ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar5,iVar13
                                         ,iVar14,cVar15,uVar16,iVar17,iVar18,iVar19);
            /* ST_CALLSITE[005B89B1]: CALL dword ptr [ESI + 0x8] */
            (*pSVar1->SetImagesPtr)(&this_00->array_00BC[uVar9].field_00B8,psVar8,uVar20,uVar23);
            if ((*local_10 == this_00->array_00BC[uVar9].field_0000) && ((char)local_10[1] == '\0'))
            {
              this_00->array_00BC[uVar9].field_00B8.field_0008 =st::machine_word_boundary_cast<int>(
                   this_00->array_00BC[uVar9].field_00B8.field_000C + -3);
              pUVar10 = local_10;
              pMVar11 = this_00->array_00BC + uVar9;
              for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
                pMVar11->field_0000 = *pUVar10;
                pUVar10 = pUVar10 + 1;
                pMVar11 = (MMsgTy_Record_00BC_01FB *)&pMVar11->field_0x4;
              }
              *(short *)&pMVar11->field_0000 = (short)*pUVar10;
              *(undefined1 *)((int)&pMVar11->field_0000 + 2) = STField<undefined1>(pUVar10,2);
            }
            else {
              this_00->array_00BC[uVar9].field_00B8.field_0008 = 0;
              pUVar10 = local_10;
              pMVar11 = this_00->array_00BC + uVar9;
              for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
                pMVar11->field_0000 = *pUVar10;
                pUVar10 = pUVar10 + 1;
                pMVar11 = (MMsgTy_Record_00BC_01FB *)&pMVar11->field_0x4;
              }
              *(short *)&pMVar11->field_0000 = (short)*pUVar10;
              *(undefined1 *)((int)&pMVar11->field_0000 + 2) = STField<undefined1>(pUVar10,2);
            }
          }
          bVar4 = (char)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
        } while (bVar4 < this_00->field_009A);
      }
      bVar4 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar9 = local_8 & 0xff;
          this_00->array_00BC[uVar9].field_0027.field_0044 = this_00->field_0061;
          this_00->array_00BC[uVar9].field_0027.field_0040 = ((local_c & 0xff) + 1) * 100;
          if (this_00->array_00BC[uVar9].field_0000 != 0) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
          }
          bVar4 = bVar4 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
        } while (bVar4 < this_00->field_009A);
      }
      memset(&this_00->field_0x1c82, 0, 0x1a); /* compiler bulk-zero initialization */
      this_00->field_1C9C = 0x1010101;
      this_00->field_1CA0 = 0x1010101;
      this_00->field_1CA4 = 0x1010101;
      this_00->field_1CA8 = 1;
      this_00->field_0065 = 3;
      st::fn_00404BF1(this_00,5,'\0',-1);
      iVar13 = this_00->field_1CAB;
      if (iVar13 != 0) {
        pSVar2 = this_00->field_000C;
        memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar13;
        /* ST_CALLSITE[005B8B12]: CALL dword ptr [EAX + 0x18] */
        (*pSVar2->vtable->vfunc_18)((short)local_34);
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x181,0,iVar4,st::mutable_c_string("%s")
                               ,"MMsgTy::SetPanel");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x181);
  }
  return 0;
}

// 005B8C70 MMsgTy::HidePanel
#line 4 "decomp/ST.exe/functions/005B8C70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::HidePanel */

void __thiscall st::fn_005B8C70(MMsgTy *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  MMsgTy *this_00;
  int iVar3;
  int iVar4;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  InternalExceptionFrame local_70;
  int local_2c [8];
  MMsgTy *local_c;
  uint local_8;

  if (this->field_0065 != '\x02') {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    local_c = this;
    iVar3 = st::fn_0072D7F0(local_70.jumpBuffer,0);
    this_00 = local_c;
    if (iVar3 == 0) {
      iVar8 = 0xd;
      puVar9 = local_c->field_0066;
      do {
        if (*puVar9 != 0) {
          st::fn_006E56B0(this_00->field_000C,*puVar9);
        }
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      if (param_2 == 0) {
        this_00->field_1CAA = 0;
        this_00->field_1CA9 = 0;
        this_00->array_00BC[0xc].field_01DA = 0xff;
      }
      if (this_00->field_1D8C != 0xffffffff) {
        st::fn_006B3AF0((int *)this_00->field_1DD0,this_00->field_1D8C);
      }
      iVar8 = this_00->field_1CAB;
      if (iVar8 != 0) {
        memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
        local_2c[3] = 2;
        local_2c[4] = 0x6940;
        local_2c[2] = iVar8;
        /* ST_CALLSITE[005B8D3A]: CALL dword ptr [EDX + 0x18] */
        (*this_00->field_000C->vtable->vfunc_18)((short)local_2c);
      }
      if (param_1 == 0) {
        this_00->field_0065 = 2;
        /* ST_CALLSITE[005B8E45]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
        st::fn_0040462E(this_00);
        g_currentExceptionFrame = local_70.previous;
        return;
      }
      if (param_3 == 0) {
        bVar7 = 0;
        local_8 = (uint)STPiece<1,3>(local_8) << 8;
        if (this_00->field_009A != 0) {
          do {
            uVar6 = local_8 & 0xff;
            if (*(char *)((int)&this_00->field_1C9C + uVar6) != '\0') {
              uVar1 = this_00->array_00BC[uVar6].field_00B8.field_0004;
              if (uVar1 != 0xffffffff) {
                st::fn_006B3AF0((int *)this_00->array_00BC[uVar6].field_00B8.field_0048,uVar1);
              }
            }
            bVar7 = bVar7 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
          } while (bVar7 < this_00->field_009A);
        }
      }
      else {
        bVar7 = 0;
        this_00->field_1C9C = 0x1010101;
        local_8 = (uint)STPiece<1,3>(local_8) << 8;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        if (this_00->field_009A != 0) {
          do {
            uVar6 = this_00->array_00BC[local_8 & 0xff].field_00B8.field_0004;
            if (uVar6 != 0xffffffff) {
              st::fn_006B3AF0((int *)this_00->array_00BC[local_8 & 0xff].field_00B8.field_0048,uVar6);
            }
            bVar7 = bVar7 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
          } while (bVar7 < this_00->field_009A);
        }
      }
      this_00->field_0065 = 4;
      st::fn_00404BF1(this_00,6,'\x01',-1);
      g_currentExceptionFrame = local_70.previous;
      return;
    }
    g_currentExceptionFrame = local_70.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x1a4,0,iVar3,st::mutable_c_string("%s")
                               ,"MMsgTy::HidePanel");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x1a4);
  }
  return;
}

// 005B9010 MMsgTy::StatePanel
#line 4 "decomp/ST.exe/functions/005B9010/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::StatePanel */

void __thiscall st::fn_005B9010(MMsgTy *this,int param_1)

{
  short sVar1;
  MMsgTy *this_00;
  byte bVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  InternalExceptionFrame local_50;
  MMsgTy *local_c;
  uint local_8;

  this->field_002D = 0x20;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    local_8 = local_8 & 0xffffff00;
    if (local_c->field_009A != 0) {
      do {
        uVar4 = local_8 & 0xff;
        if ((this_00->field_0066[uVar4] == 0) ||
           (sVar1 = *(short *)(param_1 + uVar4 * 2), sVar1 == 0)) {
          *(undefined2 *)(&this_00->field_0x1c82 + uVar4 * 2) = *(undefined2 *)(param_1 + uVar4 * 2);
        }
        else {
          if (sVar1 < 1) {
            this_00->field_0031 = 0;
          }
          else {
            this_00->field_0031 = 1;
          }
          st::fn_006E6080(this_00,2,this_00->field_0066[uVar4],(undefined4 *)&this_00->field_0x1d);
        }
        bVar3 = (char)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < this_00->field_009A);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x1c1,0,errorCode,
                             st::mutable_c_string("%s"),"MMsgTy::StatePanel");
  if (iVar5 == 0) {
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x1c1);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005B9170 MMsgTy::CloseSprBut
#line 4 "decomp/ST.exe/functions/005B9170/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::CloseSprBut */

void __thiscall st::fn_005B9170(MMsgTy *this)

{
  MMsgTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  InternalExceptionFrame local_54;
  MMsgTy *local_10;
  uint local_c;
  uint local_8;

  bVar5 = 0;
  local_c = local_c & 0xffffff00;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (errorCode == 0) {
    /* ST_CALLSITE[005B91AD]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
    st::fn_00403459((MMObjTy *)local_10);
    bVar4 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_009A != 0) {
      do {
        uVar2 = local_8 & 0xff;
        this_00->array_00BC[uVar2].field_0027.field_0044 = this_00->field_0061;
        this_00->array_00BC[uVar2].field_0027.field_0040 = ((local_c & 0xff) + 1) * 100;
        if (this_00->array_00BC[uVar2].field_0000 != 0) {
          local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
        }
        bVar4 = bVar4 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
      } while (bVar4 < this_00->field_009A);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_009A != 0) {
      do {
        uVar2 = this_00->array_00BC[local_8 & 0xff].field_00B8.field_0004;
        if (uVar2 != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->array_00BC[local_8 & 0xff].field_00B8.field_0048,uVar2);
        }
        bVar5 = bVar5 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
      } while (bVar5 < this_00->field_009A);
    }
    /* ST_CALLSITE[005B9275]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
    st::fn_00401FA5(this_00,1,1,1);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x1d3,0,errorCode,
                             st::mutable_c_string("%s"),"MMsgTy::CloseSprBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x1d3);
  return;
}

// 005B9330 MMsgTy::GetMessage
#line 4 "decomp/ST.exe/functions/005B9330/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005B9330; family_names=MMsgTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:0,18:0,1c:0} */

int __thiscall st::fn_005B9330(MMsgTy *this,STMessage *message)

{
  MMsgTy *this_00;
  byte bVar2;
  DWORD DVar3;
  int local_EAX_47;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;
  uint SVar1;
  uint temp_5f8e730a25;

  local_8 = this;
  DVar3 = st::fn_006E51B0(this->field_0010);
  this->field_0061 = DVar3;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_EAX_47 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_47 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x200,0,local_EAX_47,
                               st::mutable_c_string("%s"),"MMsgTy::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_47,0,st::mutable_c_string("E:\\__titans\\Start\\mmsg_obj.cpp"),0x200);
    return 0xffff;
  }
  st::fn_00402563(local_8,message);
  temp_5f8e730a25 = message->id;
  if ((0x697e < temp_5f8e730a25) && (temp_5f8e730a25 < 0x69ff)) {
    switch(temp_5f8e730a25) {
    case 0x697f:
      iVar8 = -1;
      iVar6 = 3;
      uVar7 = 0;
      break;
    case 0x6980:
      iVar8 = -1;
      iVar6 = 2;
      uVar7 = 1;
      break;
    case 0x6981:
      iVar8 = -1;
      iVar6 = 2;
      uVar7 = 2;
      break;
    case 0x6982:
      iVar8 = -2;
      iVar6 = 2;
      uVar7 = 3;
      break;
    case 0x6983:
      iVar8 = 2;
      iVar6 = 2;
      uVar7 = 4;
      break;
    case 0x6984:
      iVar8 = 1;
      iVar6 = 2;
      uVar7 = 5;
      break;
    case 0x6985:
      iVar8 = 1;
      iVar6 = 2;
      uVar7 = 6;
      break;
    case 0x6986:
      iVar8 = 1;
      iVar6 = 3;
      uVar7 = 7;
      break;
    default:
      goto switchD_005b939a_default;
    }
    /* ST_CALLSITE[005B93F2]: CALL 0x0040499e; direct=0040499E MMObjTy::PaintSprBut */
    st::fn_0040499E((MMObjTy *)this_00,(int)message,uVar7,iVar6,iVar8,-1);
  }
switchD_005b939a_default:
  SVar1 = message->id;
  if ((0x68fe < SVar1) && (SVar1 < 0x697f)) {
    bVar2 = (char)SVar1 + 1;
    this_00->array_00BC[0xc].field_01DA = bVar2;
    if (this_00->array_00BC[bVar2].field_0025 == '\0') {
      if (*(int *)&this_00->array_00BC[bVar2].field_0x15 != 0) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->array_00BC[bVar2].field_0x5);
      }
    }
    else {
      /* ST_CALLSITE[005B9437]: CALL dword ptr [EAX + 0x8] */
      this_00->CloseSprBut();
    }
  }
  switch(message->id) {
  case MESS_ID_NONE:
    /* ST_CALLSITE[005B9482]: CALL 0x00403693; direct=00403693 MMsgTy::NoneMMsg */
    st::fn_00403693(this_00);
    break;
  case MESS_ID_CREATE:
    /* ST_CALLSITE[005B9467]: CALL 0x004020d1; direct=004020D1 MMsgTy::InitMMsg */
    st::fn_004020D1(this_00);
    break;
  case MESS_SHARED_0003:
    /* ST_CALLSITE[005B9470]: CALL 0x0040501f; direct=0040501F MMsgTy::DoneMMsg */
    st::fn_0040501F(this_00);
    break;
  case MESS_SHARED_0005:
    /* ST_CALLSITE[005B9479]: CALL 0x00401bb8; direct=00401BB8 MMsgTy::PaintMMsg */
    st::fn_00401BB8(this_00);
  }
  g_currentExceptionFrame = local_4c.previous;
  /* ST_CALLSITE[005B9493]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  iVar4 = st::fn_00401280((MMObjTy *)this_00,message);
  return iVar4;
}

