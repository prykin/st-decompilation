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
    st::fn_00401992((MMObjTy *)local_8,(RecoveredRecord_MMObjTy_005B5240 *)&local_8->field_0x9b,
                        "MM_MBUT12",0x194,0x213,0x24,0x12,0x12,7,0xa0,0x31,0x14,nullptr
                        ,0,0,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    st::fn_00401992((MMObjTy *)this_00,(RecoveredRecord_MMObjTy_005B5240 *)&this_00->field_0x296
                        ,"MM_MBUT08",0x25c,0x213,0xf,0x14,2,8,0xa0,0x34,0x14,nullptr,0,
                        0,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    st::fn_00401992((MMObjTy *)this_00,(RecoveredRecord_MMObjTy_005B5240 *)&this_00->field_0x491
                        ,"MM_MBUT09",0x261,0x1da,0x10,0x12,1,7,0xa0,0x34,0xf,nullptr,0,
                        0,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    st::fn_00401992((MMObjTy *)this_00,(RecoveredRecord_MMObjTy_005B5240 *)&this_00->field_0x68c
                        ,"MM_MBUT10",0x264,0x1a3,0x10,0x10,2,6,0x9e,0x33,10,nullptr,0,0
                        ,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    st::fn_00401992((MMObjTy *)this_00,(RecoveredRecord_MMObjTy_005B5240 *)&this_00->field_0x887
                        ,"MM_MBUT07",0,0x1a3,0x2f,0x10,0x1c,6,0x9d,0x31,10,nullptr,0,0,
                        0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    st::fn_00401992((MMObjTy *)this_00,(RecoveredRecord_MMObjTy_005B5240 *)&this_00->field_0xa82
                        ,"MM_MBUT06",0,0x1da,0x32,0x12,0x1d,7,0xa0,0x32,0xf,nullptr,0,0
                        ,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    st::fn_00401992((MMObjTy *)this_00,(RecoveredRecord_MMObjTy_005B5240 *)&this_00->field_0xc7d
                        ,"MM_MBUT05",0,0x213,0x34,0x13,0x21,9,0xa0,0x33,0x14,nullptr,0,
                        0,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    st::fn_00401992((MMObjTy *)this_00,(RecoveredRecord_MMObjTy_005B5240 *)&this_00->field_0xe78
                        ,"MM_MBUT11",0xb4,0x213,0x37,0x12,0x26,8,0xa0,0x30,0x14,nullptr
                        ,0,0,0,0,0x4b,0,nullptr,0,0,0,-1,-1);
    st::fn_00401992((MMObjTy *)this_00,
                        (RecoveredRecord_MMObjTy_005B5240 *)&this_00->field_0x1caf,
                        "MM_TABLO",0x30,0x203,0xb5,0x11,0,0,0,0,0x14,nullptr,0,0,0,0,
                        0x4b,0,nullptr,0,0,0,-1,-1);
    st::fn_0040462E(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x22,0,errorCode,
                             "%s","MMsgTy::InitMMsg");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x22);
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
    st::fn_0040458E((MMObjTy *)local_8);
    g_startSystem_0081176C->field_02E6 = nullptr;
    st::fn_00715AB0((SpriteClassTy *)&pMVar2->field_0x1cf7);
    st::fn_00715AB0((SpriteClassTy *)&pMVar2->field_1D88);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x31,0,errorCode,
                             "%s","MMsgTy::DoneMMsg");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x31);
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
    puVar6 = &local_8->field_0066;
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
      puVar6 = &pMVar2->field_00E7;
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
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x41,0,iVar3,"%s",
                             "MMsgTy::HideSprites");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x41);
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
      puVar5 = &pMVar2->field_00E7;
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
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x4b,0,iVar3,"%s",
                             "MMsgTy::ShowSprites");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x4b);
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
      puVar5 = &pMVar2->field_00FF;
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
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x59,0,iVar3,"%s",
                             "MMsgTy::PaintMMsg");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x59);
  return;
}

// 005B7540 MMsgTy::NoneMMsg
#line 4 "decomp/ST.exe/functions/005B7540/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::NoneMMsg */

void __thiscall st::fn_005B7540(MMsgTy *this)

{
  char cVar1;
  byte bVar2;
  UINT UVar3;
  StartSystemTy *pSVar4;
  MMsgTy *this_00;
  int iVar6;
  uint uVar6;
  byte *puVar7;
  int iVar9;
  int iVar8;
  int iVar10;
  char *pcVar11;
  UINT *pUVar12;
  uint *puVar13;
  byte *puVar15;
  UINT *pUVar16;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  InternalExceptionFrame local_bc;
  int local_78 [8];
  int local_58 [8];
  int local_38 [8];
  MMsgTy *local_18;
  int local_14;
  UINT *local_10;
  int local_c;
  UINT *local_8;

  local_c = 1;
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_18 = this;
  iVar6 = st::fn_0072D7F0(local_bc.jumpBuffer,0);
  this_00 = local_18;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_bc.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0xe4,0,iVar6,"%s",
                               "MMsgTy::NoneMMsg");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0xe4);
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
      this_00->field_1D90 = this_00->field_1D90 + 1;
      if (this_00->field_1D8C != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)this_00->field_1DD0,this_00->field_1D8C,this_00->field_1D90,
                   this_00->field_1DA4,this_00->field_1DA8);
      }
      st::fn_00404BF1(this_00,0x1e,'\x01',-1);
    }
  }
  else if (cVar1 == '\x03') {
    if (local_18->field_1CD0 != 0) {
      if (local_18->field_1CFF < local_18->field_1D03 + -1) {
        local_18->field_1CFF = local_18->field_1CFF + 1;
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
        this_00->field_1D90 = this_00->field_1D90 + 1;
        if (this_00->field_1D8C != 0xffffffff) {
          st::fn_006B3730
                    ((uint *)this_00->field_1DD0,this_00->field_1D8C,this_00->field_1D90,
                     this_00->field_1DA4,this_00->field_1DA8);
        }
        st::fn_00404BF1(this_00,0x1e,'\x01',-1);
      }
    }
    iVar10 = 0;
    if (this_00->field_009A != 0) {
      puVar13 = &this_00->field_00FF;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(char *)((int)&this_00->field_1C9C + iVar10) != '\0') &&
           (*(int *)((int)puVar13 + -0x43) != 0)) {
          if (puVar13[9] <= this_00->field_0061 - puVar13[10]) {
            if ((int)puVar13[-5] < (int)(puVar13[-4] - 1)) {
              uVar6 = puVar13[-5] + 1;
              puVar13[-5] = uVar6;
              if (puVar13[-6] != 0xffffffff) {
                st::fn_006B3730
                          ((uint *)puVar13[0xb],puVar13[-6],uVar6,*puVar13,puVar13[1]);
              }
            }
            else {
              if (STField<int>(puVar13,0x81) + -3 <= STField<int>(puVar13,0x7d))
              goto LAB_005b7ad9;
              if ((STField<int>(puVar13,0x7d) == 0) &&
                 (STField<uint>(puVar13,0x79) != 0xffffffff)) {
                st::fn_006B34D0
                          (STField<uint *>(puVar13,0xbd),STField<uint>(puVar13,0x79),0xfffffffe
                           ,STField<uint>(puVar13,0x91),STField<uint>(puVar13,0x95));
              }
              uVar6 = STField<int>(puVar13,0x7d) + 1;
              STField<uint>(puVar13,0x7d) = uVar6;
              if (STField<uint>(puVar13,0x79) != 0xffffffff) {
                st::fn_006B3730
                          (STField<uint *>(puVar13,0xbd),STField<uint>(puVar13,0x79),uVar6,
                           STField<uint>(puVar13,0x91),STField<uint>(puVar13,0x95));
              }
              st::fn_00404BF1(this_00,0x1e,'\x01',-1);
            }
          }
          local_c = 0;
        }
LAB_005b7ad9:
        iVar10 = iVar10 + 1;
        puVar13 = (uint *)((int)puVar13 + 0x1fb);
      } while (iVar10 < (int)(uint)this_00->field_009A);
    }
    if (local_c != 0) {
      this_00->field_0065 = 1;
      if (this_00->field_009A != 0) {
        local_8 = &this_00->field_0066;
        local_10 = (UINT *)&this_00->field_0x1c82;
        puVar7 = (byte *)&this_00->field_0xa7;
        iVar10 = 0x68ff;
        do {
          if ((STField<int>(puVar7,0x15) != 0) && (*local_8 == 0)) {
            if (this_00->field_1CA9 == '\0') {
              uVar6 = (uint)(-1 < (short)*local_10);
            }
            else {
              uVar6 = 1;
            }
            iVar8 = st::fn_0040361B
                              ((MMObjTy *)this_00,1,uVar6,puVar7[0x16] + puVar7[-3],
                               puVar7[0x17] + puVar7[-2],puVar7[-1],*puVar7,iVar10,iVar10 + 0x80);
            *local_8 = iVar8;
          }
          local_10 = (UINT *)((int)local_10 + 2);
          local_8 = local_8 + 1;
          puVar7 = (byte *)((int)puVar7 + 0x1fb);
          iVar8 = iVar10 + -0x68fe;
          iVar10 = iVar10 + 1;
        } while (iVar8 < (int)(uint)this_00->field_009A);
      }
      if ((this_00->field_1CA9 == '\0') && (local_58[2] = this_00->field_1CAB, local_58[2] != 0)) {
        pSVar4 = this_00->field_000C;
        memset(local_58, 0, 0x20); /* compiler bulk-zero initialization */
        local_58[3] = 2;
        local_58[4] = 0x693f;
        (*pSVar4->vtable->vfunc_18)((short)local_58);
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    if ((local_18->field_1CD0 != 0) && (0 < local_18->field_1CFF)) {
      local_18->field_1CFF = local_18->field_1CFF + -1;
      if (local_18->field_1CFB != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)local_18->field_1D3F,local_18->field_1CFB,local_18->field_1CFF,
                   local_18->field_1D13,local_18->field_1D17);
      }
      local_c = 0;
    }
    if (this_00->field_009A != 0) {
      pcVar11 = (char *)&this_00->field_1C9C;
      local_14 = -0x1c9c - (int)this_00;
      puVar13 = &this_00->field_00FF;
      do {
        if (*pcVar11 != '\0') {
          if (puVar13[9] <= this_00->field_0061 - puVar13[10]) {
            if ((int)puVar13[-5] < 1) {
              if (this_00->field_1CAA == '\0') {
                *(undefined4 *)((int)puVar13 + -0x43) = 0;
              }
              *pcVar11 = '\0';
              goto LAB_005b7655;
            }
            uVar6 = puVar13[-5] - 1;
            puVar13[-5] = uVar6;
            if (puVar13[-6] != 0xffffffff) {
              st::fn_006B3730
                        ((uint *)puVar13[0xb],puVar13[-6],uVar6,*puVar13,puVar13[1]);
            }
          }
          local_c = 0;
        }
LAB_005b7655:
        puVar13 = (uint *)((int)puVar13 + 0x1fb);
        pcVar11 = pcVar11 + 1;
      } while ((int)(pcVar11 + local_14) < (int)(uint)this_00->field_009A);
    }
    if (local_c != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_1CA9 != '\0') {
        if (this_00->field_1CAA != '\0') {
          this_00->field_1C9C = 0x1010101;
          this_00->field_1CA0 = 0x1010101;
          this_00->field_1CA4 = 0x1010101;
          this_00->field_1CA8 = 1;
          this_00->field_0065 = 3;
          st::fn_00404BF1(this_00,5,'\0',-1);
          this_00->field_1CAA = 0;
          g_currentExceptionFrame = local_bc.previous;
          return;
        }
        bVar2 = this_00->field_1A5A;
        if ((bVar2 != 0xff) && (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0)) {
          st::fn_006E3B50
                    ((AppClassTy *)&DAT_00807620,
                     (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
        }
        iVar10 = this_00->field_1CAB;
        if (iVar10 != 0) {
          memset(local_78, 0, 0x20); /* compiler bulk-zero initialization */
          local_78[3] = 2;
          local_78[4] = 0x693f;
          local_78[2] = iVar10;
          (*this_00->field_000C->vtable->vfunc_18)((short)local_78);
        }
        if (this_00->field_1A5F != '\0') {
          local_14 = 0;
          puVar7 = (byte *)&this_00->field_0x1a60;
          puVar15 = (byte *)(&this_00->field_1CD0);
          memmove(puVar15, puVar7, 0x27); /* compiler REP MOVS byte copy */
          iVar10 = 0;
          if (this_00->field_009A != 0) {
            local_8 = (UINT *)&this_00->field_0xbc;
            local_10 = (UINT *)&this_00->field_0x1a87;
            do {
              pUVar12 = local_10;
              pUVar16 = local_8;
              memmove(pUVar16, pUVar12, 0x27); /* compiler REP MOVS byte copy */
              if (*local_8 != 0) {
                uVar22 = 0xffffffff;
                uVar21 = 7;
                iVar20 = -1;
                UVar3 = local_8[0x2e];
                iVar19 = -1;
                iVar18 = 1;
                uVar6 = 0xffffffff;
                cVar17 = CASE_FFFFFFFE;
                iVar8 = 0x1e;
                iVar10 = 0x7d;
                puVar13 = (uint *)st::fn_006B0140(*local_8,g_hINSTANCE_00807618);
                puVar7 = st::fn_00713480
                                   (g_startSystem_0081176C->field_0030,puVar13,iVar10,iVar8,cVar17,
                                    uVar6,iVar18,iVar19,iVar20);
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (**(code **)(UVar3 + 8))(puVar7,uVar21,uVar22);
                local_8[0x30] = 0;
              }
              local_14 = local_14 + 1;
              local_10 = (UINT *)((int)local_10 + 0x27);
              local_8 = (UINT *)((int)local_8 + 0x1fb);
            } while (local_14 < (int)(uint)this_00->field_009A);
          }
          if ((this_00->field_1A5F == '\x03') || (this_00->field_1A5F == '\x01')) {
            this_00->field_1C9C = 0x1010101;
            this_00->field_1CA0 = 0x1010101;
            this_00->field_1CA4 = 0x1010101;
            this_00->field_1CA8 = 1;
            this_00->field_0065 = 3;
          }
          this_00->field_1A5F = 0;
        }
        this_00->field_1CA9 = 0;
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
      iVar10 = this_00->field_1CAB;
      if (iVar10 != 0) {
        memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
        local_38[3] = 2;
        local_38[4] = 0x693f;
        local_38[2] = iVar10;
        (*this_00->field_000C->vtable->vfunc_18)((short)local_38);
      }
      bVar2 = this_00->field_1A5A;
      if ((bVar2 != 0xff) && (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0)) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
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
  MMsgTy *this_00;
  byte bVar2;
  int iVar3;
  char *pcVar3;
  char *pcVar4;
  byte *puVar5;
  uint *puVar6;
  int iVar8;
  int iVar7;
  int iVar9;
  uint uVar11;
  byte *puVar12;
  int iVar13;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_478 [256];
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
      iVar9 = local_14->field_1CAB;
      if (iVar9 != 0) {
        memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar9;
        (*this_00->field_000C->vtable->vfunc_18)((short)local_34);
      }
      this_00->field_1CA9 = 1;
      puVar5 = (byte *)(&this_00->field_1CD0);
      puVar12 = (byte *)&this_00->field_0x1a60;
      memmove(puVar12, puVar5, 0x27); /* compiler REP MOVS byte copy */
      this_00->field_1A5F = this_00->field_0065;
      this_00->field_002D = 0x21;
      memset(&this_00->field_0x1c82, 0, 0x1a); /* compiler bulk-zero initialization */
      iVar9 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar11 = local_8 & 0xff;
          if ((&this_00->field_0066)[uVar11] != 0) {
            st::fn_006E6080(this_00,2,(&this_00->field_0066)[uVar11],(undefined4 *)&this_00->field_0x1d
                        );
            *(ushort *)(&this_00->field_0x1c82 + uVar11 * 2) =
                 (-(ushort)(this_00->field_0031 != 0) & 2) - 1;
          }
          puVar5 = (byte *)(&this_00->field_0xbc + uVar11 * 0x1fb);
          puVar12 = (byte *)(&this_00->field_0x1a87 + uVar11 * 0x27);
          memmove(puVar12, puVar5, 0x27); /* compiler REP MOVS byte copy */
          bVar2 = (char)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
        } while (bVar2 < this_00->field_009A);
      }
      this_00->field_1CD0 = param_1;
      if (param_6 == 0) {
        uVar19 = 0xffffffff;
        local_10 = this_00->field_1D88;
        uVar18 = 7;
        iVar16 = -1;
        iVar15 = -1;
        iVar13 = 1;
        uVar11 = 0xffffffff;
        cVar14 = CASE_FFFFFFFE;
        iVar7 = 0x39;
        iVar9 = 0x158;
        puVar6 = (uint *)st::fn_006B0140(param_1,g_hINSTANCE_00807618);
        puVar5 = st::fn_00713480
                           (g_startSystem_0081176C->field_0030,puVar6,iVar9,iVar7,cVar14,uVar11,
                            iVar13,iVar15,iVar16);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(local_10 + 8))(puVar5,uVar18,uVar19);
      }
      else {
        pcVar3 = st::fn_006B0140(param_7,g_hINSTANCE_00807618);
        pcVar4 = st::fn_006B0140(param_1,g_hINSTANCE_00807618);
        st::external_00000080((LPSTR)local_478,"%s\n(%s=%li)",pcVar4,pcVar3,param_6);
        iVar9 = this_00->field_1D88;
        uVar19 = 0xffffffff;
        uVar18 = 7;
        puVar5 = st::fn_00713480
                           (g_startSystem_0081176C->field_0030,local_478,0x158,0x39,CASE_FFFFFFFE,
                            0xffffffff,1,-1,-1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar9 + 8))(puVar5,uVar18,uVar19);
      }
      bVar2 = 0;
      this_00->field_1D90 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar11 = local_8 & 0xff;
          bVar2 = bVar2 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
          *(undefined4 *)(&this_00->field_0xbc + uVar11 * 0x1fb) = 0;
          (&this_00->field_0xe1)[uVar11 * 0x1fb] = 1;
        } while (bVar2 < this_00->field_009A);
      }
      if (param_2 == '\0') {
        this_00->field_04B2 = 0x24b8;
        this_00->field_04D7 = 1;
        iVar9 = 8;
        if (param_3 == nullptr) {
          puVar5 = (byte *)&this_00->field_0x4b7;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar5 = 0;
            puVar5 = (byte *)(puVar5 + 1);
          }
        }
        else {
          puVar5 = (byte *)&this_00->field_0x4b7;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar5 = *param_3;
            param_3 = param_3 + 1;
            puVar5 = (byte *)(puVar5 + 1);
          }
        }
        uVar19 = 0xffffffff;
        uVar18 = 7;
        iVar17 = -1;
        iVar9 = this_00->field_056A;
        iVar16 = -1;
        iVar15 = 1;
        uVar11 = 0xffffffff;
        cVar14 = CASE_FFFFFFFE;
        iVar13 = 0x1e;
        iVar7 = 0x7d;
        puVar6 = (uint *)st::fn_006B0140(this_00->field_04B2,g_hINSTANCE_00807618);
        puVar5 = st::fn_00713480
                           (g_startSystem_0081176C->field_0030,puVar6,iVar7,iVar13,cVar14,uVar11,
                            iVar15,iVar16,iVar17);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar9 + 8))(puVar5,uVar18,uVar19);
        this_00->field_0572 = 0;
      }
      else {
        if (param_2 == '\x01') {
          this_00->field_04B2 = 0x24b9;
          this_00->field_04D7 = 1;
          iVar9 = 8;
          if (param_3 == nullptr) {
            puVar5 = (byte *)&this_00->field_0x4b7;
            for (; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar5 = 0;
              puVar5 = (byte *)(puVar5 + 1);
            }
          }
          else {
            puVar5 = (byte *)&this_00->field_0x4b7;
            for (; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar5 = *param_3;
              param_3 = param_3 + 1;
              puVar5 = (byte *)(puVar5 + 1);
            }
          }
          uVar19 = 0xffffffff;
          uVar18 = 7;
          iVar17 = -1;
          iVar9 = this_00->field_056A;
          iVar16 = -1;
          iVar15 = 1;
          uVar11 = 0xffffffff;
          cVar14 = CASE_FFFFFFFE;
          iVar13 = 0x1e;
          iVar7 = 0x7d;
          puVar6 = (uint *)st::fn_006B0140(this_00->field_04B2,g_hINSTANCE_00807618);
          puVar5 = st::fn_00713480
                             (g_startSystem_0081176C->field_0030,puVar6,iVar7,iVar13,cVar14,uVar11,
                              iVar15,iVar16,iVar17);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar9 + 8))(puVar5,uVar18,uVar19);
          this_00->field_0572 = 0;
          this_00->field_02B7 = 0x24ba;
          this_00->field_02DC = 1;
          param_5 = param_4;
        }
        else {
          if (param_2 != '\x02') goto LAB_005b8415;
          this_00->field_06AD = 0x24b9;
          this_00->field_06D2 = 1;
          iVar9 = 8;
          if (param_3 == nullptr) {
            puVar5 = (byte *)&this_00->field_0x6b2;
            for (; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar5 = 0;
              puVar5 = (byte *)(puVar5 + 1);
            }
          }
          else {
            puVar5 = (byte *)&this_00->field_0x6b2;
            for (; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar5 = *param_3;
              param_3 = param_3 + 1;
              puVar5 = (byte *)(puVar5 + 1);
            }
          }
          uVar19 = 0xffffffff;
          uVar18 = 7;
          iVar17 = -1;
          iVar9 = this_00->field_0765;
          iVar16 = -1;
          iVar15 = 1;
          uVar11 = 0xffffffff;
          cVar14 = CASE_FFFFFFFE;
          iVar13 = 0x1e;
          iVar7 = 0x7d;
          puVar6 = (uint *)st::fn_006B0140(this_00->field_06AD,g_hINSTANCE_00807618);
          puVar5 = st::fn_00713480
                             (g_startSystem_0081176C->field_0030,puVar6,iVar7,iVar13,cVar14,uVar11,
                              iVar15,iVar16,iVar17);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar9 + 8))(puVar5,uVar18,uVar19);
          this_00->field_076D = 0;
          this_00->field_04B2 = 0x24ba;
          this_00->field_04D7 = 1;
          iVar9 = 8;
          if (param_4 == nullptr) {
            puVar5 = (byte *)&this_00->field_0x4b7;
            for (; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar5 = 0;
              puVar5 = (byte *)(puVar5 + 1);
            }
          }
          else {
            puVar5 = (byte *)&this_00->field_0x4b7;
            for (; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar5 = *param_4;
              param_4 = param_4 + 1;
              puVar5 = (byte *)(puVar5 + 1);
            }
          }
          uVar19 = 0xffffffff;
          uVar18 = 7;
          iVar17 = -1;
          iVar9 = this_00->field_056A;
          iVar16 = -1;
          iVar15 = 1;
          uVar11 = 0xffffffff;
          cVar14 = CASE_FFFFFFFE;
          iVar13 = 0x1e;
          iVar7 = 0x7d;
          puVar6 = (uint *)st::fn_006B0140(this_00->field_04B2,g_hINSTANCE_00807618);
          puVar5 = st::fn_00713480
                             (g_startSystem_0081176C->field_0030,puVar6,iVar7,iVar13,cVar14,uVar11,
                              iVar15,iVar16,iVar17);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar9 + 8))(puVar5,uVar18,uVar19);
          this_00->field_0572 = 0;
          this_00->field_02B7 = 0x24bb;
          this_00->field_02DC = 1;
        }
        iVar9 = 8;
        if (param_5 == nullptr) {
          puVar5 = (byte *)&this_00->field_0x2bc;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar5 = 0;
            puVar5 = (byte *)(puVar5 + 1);
          }
        }
        else {
          puVar5 = (byte *)&this_00->field_0x2bc;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar5 = *param_5;
            param_5 = param_5 + 1;
            puVar5 = (byte *)(puVar5 + 1);
          }
        }
        uVar19 = 0xffffffff;
        uVar18 = 7;
        iVar17 = -1;
        iVar9 = this_00->field_036F;
        iVar16 = -1;
        iVar15 = 1;
        uVar11 = 0xffffffff;
        cVar14 = CASE_FFFFFFFE;
        iVar13 = 0x1e;
        iVar7 = 0x7d;
        puVar6 = (uint *)st::fn_006B0140(this_00->field_02B7,g_hINSTANCE_00807618);
        puVar5 = st::fn_00713480
                           (g_startSystem_0081176C->field_0030,puVar6,iVar7,iVar13,cVar14,uVar11,
                            iVar15,iVar16,iVar17);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar9 + 8))(puVar5,uVar18,uVar19);
        this_00->field_0377 = 0;
      }
LAB_005b8415:
      st::fn_00403459((MMObjTy *)this_00);
      bVar2 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar11 = local_8 & 0xff;
          *(undefined4 *)((int)&this_00->field_0127 + uVar11 * 0x1fb) = this_00->field_0061;
          *(uint *)((int)&this_00->field_0123 + uVar11 * 0x1fb) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)(&this_00->field_0x1a87 + uVar11 * 0x27) != 0) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
          }
          bVar2 = bVar2 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
        } while (bVar2 < this_00->field_009A);
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
            iVar9 = (local_8 & 0xff) * 0x1fb;
            uVar11 = *(uint *)((int)&this_00->field_0178 + (local_8 & 0xff) * 0x1fb);
            if (uVar11 != 0xffffffff) {
              st::fn_006B3AF0(*(int **)((int)&this_00->field_01BC + iVar9),uVar11);
            }
            if (((&this_00->field_00E2)[iVar9] != '\0') &&
               (uVar11 = *(uint *)((int)&this_00->field_0209 + iVar9), uVar11 != 0xffffffff)) {
              st::fn_006B3AF0(*(int **)((int)&this_00->field_024D + iVar9),uVar11);
            }
            bVar2 = (char)local_8 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
          } while (bVar2 < this_00->field_009A);
          g_currentExceptionFrame = local_78.previous;
          return 1;
        }
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x14e,0,iVar3,"%s"
                               ,"MMsgTy::SetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x14e);
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
  StartSystemTy *pSVar1;
  MMsgTy *this_00;
  byte bVar3;
  int iVar4;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar9;
  int iVar8;
  int iVar10;
  uint uVar11;
  UINT *pUVar12;
  UINT *pUVar13;
  int iVar15;
  int iVar16;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint local_478 [256];
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
      st::fn_00403459((MMObjTy *)local_14);
      st::fn_00401FA5(this_00,0,0,1);
      if (param_1 == 0) {
        this_00->field_1CD0 = 0;
      }
      else {
        this_00->field_1CD0 = param_1;
        if (param_3 == 0) {
          uVar23 = 0xffffffff;
          local_8 = this_00->field_1D88;
          uVar22 = 7;
          iVar19 = -1;
          iVar16 = -1;
          iVar15 = 1;
          uVar11 = 0xffffffff;
          cVar17 = CASE_FFFFFFFE;
          iVar10 = 0x39;
          iVar8 = 0x158;
          puVar7 = (uint *)st::fn_006B0140(param_1,g_hINSTANCE_00807618);
          puVar6 = st::fn_00713480
                             (g_startSystem_0081176C->field_0030,puVar7,iVar8,iVar10,cVar17,uVar11,
                              iVar15,iVar16,iVar19);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(local_8 + 8))(puVar6,uVar22,uVar23);
          this_00->field_1D90 = 0;
        }
        else {
          pcVar4 = st::fn_006B0140(param_4,g_hINSTANCE_00807618);
          pcVar5 = st::fn_006B0140(param_1,g_hINSTANCE_00807618);
          st::external_00000080((LPSTR)local_478,"%s\n(%s=%li)",pcVar5,pcVar4,param_3);
          iVar8 = this_00->field_1D88;
          uVar23 = 0xffffffff;
          uVar22 = 7;
          puVar6 = st::fn_00713480
                             (g_startSystem_0081176C->field_0030,local_478,0x158,0x39,CASE_FFFFFFFE,
                              0xffffffff,1,-1,-1);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar8 + 8))(puVar6,uVar22,uVar23);
          this_00->field_1D90 = 0;
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar11 = local_8 & 0xff;
          local_10 = (UINT *)(uVar11 * 0x27 + param_2);
          if (*local_10 == 0) {
            puVar6 = (undefined4 *)(&this_00->field_0xbc + uVar11 * 0x1fb);
            memset(puVar6, 0, 0x27); /* compiler bulk-zero initialization */
            puVar6 = (undefined4 *)((byte *)puVar6 + 0x24);
          }
          else {
            uVar23 = 0xffffffff;
            uVar22 = 7;
            iVar21 = -1;
            iVar20 = -1;
            iVar19 = 1;
            uVar18 = 0xffffffff;
            cVar17 = CASE_FFFFFFFE;
            iVar16 = 0x1e;
            iVar15 = 0x7d;
            iVar8 = *(int *)(&this_00->field_0x174 + uVar11 * 0x1fb);
            iVar10 = uVar11 * 0x1fb;
            puVar7 = (uint *)st::fn_006B0140(*local_10,g_hINSTANCE_00807618);
            puVar6 = st::fn_00713480
                               (g_startSystem_0081176C->field_0030,puVar7,iVar15,iVar16,cVar17,
                                uVar18,iVar19,iVar20,iVar21);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(iVar8 + 8))(puVar6,uVar22,uVar23);
            if ((*local_10 == *(UINT *)(&this_00->field_0xbc + iVar10)) &&
               ((char)local_10[1] == '\0')) {
              *(int *)((int)&this_00->field_017C + iVar10) =
                   *(int *)(&this_00->field_0x180 + iVar10) + -3;
              pUVar12 = local_10;
              pUVar13 = (UINT *)(&this_00->field_0xbc + iVar10);
              memmove(pUVar13, pUVar12, 0x27); /* compiler REP MOVS byte copy */
              iVar8 = 0;
            }
            else {
              *(undefined4 *)((int)&this_00->field_017C + iVar10) = 0;
              pUVar12 = local_10;
              pUVar13 = (UINT *)(&this_00->field_0xbc + iVar10);
              memmove(pUVar13, pUVar12, 0x27); /* compiler REP MOVS byte copy */
            }
          }
          bVar3 = (char)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        } while (bVar3 < this_00->field_009A);
      }
      bVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar11 = local_8 & 0xff;
          *(undefined4 *)((int)&this_00->field_0127 + uVar11 * 0x1fb) = this_00->field_0061;
          *(uint *)((int)&this_00->field_0123 + uVar11 * 0x1fb) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)(&this_00->field_0xbc + uVar11 * 0x1fb) != 0) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
          }
          bVar3 = bVar3 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        } while (bVar3 < this_00->field_009A);
      }
      memset(&this_00->field_0x1c82, 0, 0x1a); /* compiler bulk-zero initialization */
      this_00->field_1C9C = 0x1010101;
      this_00->field_1CA0 = 0x1010101;
      this_00->field_1CA4 = 0x1010101;
      this_00->field_1CA8 = 1;
      this_00->field_0065 = 3;
      st::fn_00404BF1(this_00,5,'\0',-1);
      iVar8 = this_00->field_1CAB;
      if (iVar8 != 0) {
        pSVar1 = this_00->field_000C;
        memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar8;
        (*pSVar1->vtable->vfunc_18)((short)local_34);
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x181,0,iVar4,"%s"
                               ,"MMsgTy::SetPanel");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x181);
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
  byte bVar6;
  int iVar7;
  uint *puVar8;
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
      iVar7 = 0xd;
      puVar8 = &local_c->field_0066;
      do {
        if (*puVar8 != 0) {
          st::fn_006E56B0(this_00->field_000C,*puVar8);
        }
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (param_2 == 0) {
        this_00->field_1CAA = 0;
        this_00->field_1CA9 = 0;
        this_00->field_1A5A = 0xff;
      }
      if (this_00->field_1D8C != 0xffffffff) {
        st::fn_006B3AF0((int *)this_00->field_1DD0,this_00->field_1D8C);
      }
      iVar7 = this_00->field_1CAB;
      if (iVar7 != 0) {
        memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
        local_2c[3] = 2;
        local_2c[4] = 0x6940;
        local_2c[2] = iVar7;
        (*this_00->field_000C->vtable->vfunc_18)((short)local_2c);
      }
      if (param_1 == 0) {
        this_00->field_0065 = 2;
        st::fn_0040462E(this_00);
        g_currentExceptionFrame = local_70.previous;
        return;
      }
      if (param_3 == 0) {
        bVar6 = 0;
        local_8 = (uint)STPiece<1,3>(local_8) << 8;
        if (this_00->field_009A != 0) {
          do {
            if (*(char *)((int)&this_00->field_1C9C + (local_8 & 0xff)) != '\0') {
              iVar7 = (local_8 & 0xff) * 0x1fb;
              uVar1 = *(uint *)((int)&this_00->field_0178 + iVar7);
              if (uVar1 != 0xffffffff) {
                st::fn_006B3AF0(*(int **)((int)&this_00->field_01BC + iVar7),uVar1);
              }
            }
            bVar6 = bVar6 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
          } while (bVar6 < this_00->field_009A);
        }
      }
      else {
        bVar6 = 0;
        this_00->field_1C9C = 0x1010101;
        local_8 = (uint)STPiece<1,3>(local_8) << 8;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        if (this_00->field_009A != 0) {
          do {
            uVar1 = *(uint *)((int)&this_00->field_0178 + (local_8 & 0xff) * 0x1fb);
            if (uVar1 != 0xffffffff) {
              st::fn_006B3AF0(*(int **)((int)&this_00->field_01BC + (local_8 & 0xff) * 0x1fb),uVar1);
            }
            bVar6 = bVar6 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
          } while (bVar6 < this_00->field_009A);
        }
      }
      this_00->field_0065 = 4;
      st::fn_00404BF1(this_00,6,'\x01',-1);
      g_currentExceptionFrame = local_70.previous;
      return;
    }
    g_currentExceptionFrame = local_70.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x1a4,0,iVar3,"%s"
                               ,"MMsgTy::HidePanel");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x1a4);
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
        if (((&this_00->field_0066)[uVar4] == 0) ||
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
          st::fn_006E6080(this_00,2,(&this_00->field_0066)[uVar4],(undefined4 *)&this_00->field_0x1d);
        }
        bVar3 = (char)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < this_00->field_009A);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x1c1,0,errorCode,
                             "%s","MMsgTy::StatePanel");
  if (iVar5 == 0) {
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x1c1);
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
    st::fn_00403459((MMObjTy *)local_10);
    bVar4 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_009A != 0) {
      do {
        uVar2 = local_8 & 0xff;
        *(undefined4 *)((int)&this_00->field_0127 + uVar2 * 0x1fb) = this_00->field_0061;
        *(uint *)((int)&this_00->field_0123 + uVar2 * 0x1fb) = ((local_c & 0xff) + 1) * 100;
        if (*(int *)(&this_00->field_0xbc + uVar2 * 0x1fb) != 0) {
          local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
        }
        bVar4 = bVar4 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
      } while (bVar4 < this_00->field_009A);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_009A != 0) {
      do {
        uVar2 = *(uint *)((int)&this_00->field_0178 + (local_8 & 0xff) * 0x1fb);
        if (uVar2 != 0xffffffff) {
          st::fn_006B3AF0(*(int **)((int)&this_00->field_01BC + (local_8 & 0xff) * 0x1fb),uVar2);
        }
        bVar5 = bVar5 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
      } while (bVar5 < this_00->field_009A);
    }
    st::fn_00401FA5(this_00,1,1,1);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x1d3,0,errorCode,
                             "%s","MMsgTy::CloseSprBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x1d3);
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
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\mmsg_obj.cpp",0x200,0,local_EAX_47,
                               "%s","MMsgTy::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_47,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x200);
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
    st::fn_0040499E((MMObjTy *)this_00,(int)message,uVar7,iVar6,iVar8,-1);
  }
switchD_005b939a_default:
  SVar1 = message->id;
  if ((0x68fe < SVar1) && (SVar1 < 0x697f)) {
    bVar2 = (char)SVar1 + 1;
    this_00->field_1A5A = bVar2;
    if ((&this_00->field_0xe1)[(uint)bVar2 * 0x1fb] == '\0') {
      if (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
      }
    }
    else {
      this_00->CloseSprBut();
    }
  }
  switch(message->id) {
  case MESS_ID_NONE:
    st::fn_00403693(this_00);
    break;
  case MESS_ID_CREATE:
    st::fn_004020D1(this_00);
    break;
  case MESS_SHARED_0003:
    st::fn_0040501F(this_00);
    break;
  case MESS_SHARED_0005:
    st::fn_00401BB8(this_00);
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_00401280((MMObjTy *)this_00,message);
  return iVar4;
}

