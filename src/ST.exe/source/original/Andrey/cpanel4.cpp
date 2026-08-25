#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/cpanel4.cpp

// 005044B0 CPanelTy::PaintMineInf
#line 4 "decomp/ST.exe/functions/005044B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintMineInf

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005044B0(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar4;
  char *pcVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  size_t _Count;
  char *_Dest;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  char *local_c;
  UINT local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pCVar2 = local_10;
  if (iVar3 == 0) {
    /* ST_CALLSITE[005044FE]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_10->field_0194,param_1,0x50,'\x01',
           (byte *)local_10->field_09D9[5]);
    if (pCVar2->field_0BF5 == CASE_38) {
      local_c = (char *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(2));
    }
    else {
      local_c = (char *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(pCVar2->field_0BF5 == CASE_4F));
    }
    pBVar4 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02D2,
                          (uint)local_c & 0xff);
    /* ST_CALLSITE[00504545]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,param_1 + 3,0x53,'\x01',
           (byte *)pBVar4);
    if (pCVar2->field_0BF5 == CASE_38) {
      local_c = &CHAR_3_007aa024;
      local_8 = 0x271c;
    }
    else if (pCVar2->field_0BF5 == CASE_4F) {
      local_c = &CHAR_4_007aa020;
      local_8 = 0x271e;
    }
    else {
      local_c = &CHAR_2_007aa028;
      local_8 = 0x271d;
    }
    _Count = 0x32;
    _Dest = &pCVar2->field_01E1;
    pcVar5 = st::fn_006B0140(0x2721,g_hINSTANCE_00807618);
    st::fn_0072E340(_Dest,pcVar5,_Count);
    pCVar2->field_0x212 = 0;
    for (puVar6 = st::fn_0072E560((uint *)_Dest,'\n'); puVar6 != nullptr;
        puVar6 = st::fn_0072E560(puVar6,'\n')) {
      *(undefined1 *)puVar6 = 0x20;
    }
    pcVar5 = st::fn_006B0140(local_8,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005045F3]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&%s%s\n&1%s"),local_c,pcVar5,_Dest);
    iVar3 = param_1 + 0x40;
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,iVar3,0x57,0x75,0x16);
    st::fn_00711B70(pCVar2->field_01B8,(char *)&DAT_0080f33a,-2,-1,0,-1,-1);
    pbVar7 = (byte *)st::fn_00710BA0(pCVar2->field_01C4,pCVar2->field_0194,0,iVar3,0x6d,0x75,0xe
                                         ,0);
    if (pbVar7 != nullptr) {
      /* ST_CALLSITE[0050466B]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%06d"),(uint)(ushort)pCVar2->field_0C34);
      if (pCVar2->field_0BF5 == CASE_38) {
        uVar8 = 1;
      }
      else {
        uVar8 = (-(uint)(pCVar2->field_0BF5 != CASE_4F) & 0xfffffffe) + 2;
      }
      st::fn_007119C0(pCVar2->field_01C4,(char *)&DAT_0080f33a,-1,-1,uVar8);
      /* ST_CALLSITE[005046B4]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar3,0x6f,'\x01',pbVar7);
      st::fn_00710F00(pCVar2->field_01C4);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x47,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::PaintMineInf");
  if (iVar9 == 0) {
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x47);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005047C0 CPanelTy::PaintPerRes
#line 4 "decomp/ST.exe/functions/005047C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintPerRes */

uint __thiscall st::fn_005047C0(CPanelTy *this,int param_1)

{
  CPanelTy *this_00;
  int iVar2;
  BITMAPINFO *pBVar2;
  uint uVar3;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EAX;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  InternalExceptionFrame local_54;
  uint local_10;
  CPanelTy *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_c;
  if (iVar2 == 0) {
    /* ST_CALLSITE[00504816]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
    st::fn_00404C7D(local_c,local_c->field_0194,param_1 + 0x39,0x65,local_c->field_0C33,0x2714);
    /* ST_CALLSITE[00504838]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
    st::fn_00405A8D(this_00,this_00->field_0194,param_1 + 0x39,0x70,this_00->field_0C1C,0xffff,3,0);
    local_8 = local_8 & 0xffffff00;
    local_10 = ((uint)(byte)this_00->field_0C33 * 0x28) / 100;
    uVar3 = (uint)(byte)this_00->field_0C33 * -0x33333328;
    if (local_10 != 0) {
      uVar6 = 0;
      do {
        pBVar2 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        /* ST_CALLSITE[00504886]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,param_1 + 0xb + uVar6 * 4,0x5c,
               '\x01',(byte *)pBVar2);
        bVar4 = (byte)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
        uVar6 = (uint)bVar4;
        uVar3 = local_10;
      } while (uVar6 < local_10);
    }
    if ((byte)local_8 < 0x28) {
      iVar7 = param_1 + 0xb + (local_8 & 0xff) * 4;
      iVar5 = 0x28 - (local_8 & 0xff);
      do {
        pBVar2 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[005048DA]: CALL 0x00403229; direct=00403229 DibPut */
        uVar3 = st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar7,0x5c,'\x01',
                       (byte *)pBVar2);
        iVar7 = iVar7 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    g_currentExceptionFrame = local_54.previous;
    return uVar3;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x57,0,iVar2,st::mutable_c_string("%s"),
                             "CPanelTy::PaintPerRes");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x57);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  return extraout_EAX;
}

// 005049A0 CPanelTy::PaintPerResSI
#line 4 "decomp/ST.exe/functions/005049A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintPerResSI */

uint __thiscall st::fn_005049A0(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar3;
  uint uVar4;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EAX;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  InternalExceptionFrame local_54;
  uint local_10;
  CPanelTy *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    /* ST_CALLSITE[005049F1]: CALL 0x00404f1b; direct=00404F1B CPanelTy::PaintDamageXY */
    st::fn_00404F1B(local_c,local_c->field_0194,0x5c,0x50,local_c->field_0C33,0x2714);
    pBVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,1);
    /* ST_CALLSITE[00504A12]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x33,0x7b,'\x01',(byte *)pBVar3);
    bVar5 = 0;
    local_8 = local_8 & 0xffffff00;
    local_10 = ((uint)(byte)pCVar2->field_0C33 * 0x21) / 100;
    uVar4 = (uint)(byte)pCVar2->field_0C33 * -0x70a3d701;
    if (local_10 != 0) {
      uVar7 = 0;
      do {
        pBVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
        /* ST_CALLSITE[00504A68]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,uVar7 * 4 + 0x35,0x7d,'\x01',
               (byte *)pBVar3);
        bVar5 = bVar5 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
        uVar7 = (uint)bVar5;
        uVar4 = local_10;
      } while (uVar7 < local_10);
    }
    if (bVar5 < 0x21) {
      iVar6 = 0x21 - (local_8 & 0xff);
      iVar8 = (local_8 & 0xff) * 4 + 0x35;
      do {
        pBVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
        /* ST_CALLSITE[00504ABB]: CALL 0x00403229; direct=00403229 DibPut */
        uVar4 = st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar8,0x7d,'\x01',
                       (byte *)pBVar3);
        iVar8 = iVar8 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    g_currentExceptionFrame = local_54.previous;
    return uVar4;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x68,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::PaintPerResSI");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x68);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  return extraout_EAX;
}

// 00504B80 CPanelTy::PaintNameRes
#line 4 "decomp/ST.exe/functions/00504B80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintNameRes */

void __thiscall st::fn_00504B80(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  BITMAPINFO *pBVar5;
  UINT resourceId;
  char *resourceString;
  HINSTANCE module;
  int iVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    uVar4 = st::fn_004033F0(local_8->field_0C31,local_8->field_0C32);
    pBVar5 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_029A,uVar4);
    /* ST_CALLSITE[00504BEA]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,param_1 + 5,0x65,'\x01',
           (byte *)pBVar5);
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,param_1 + 2,0x52,0xb2,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar4 = 0;
    iVar6 = -1;
    iVar3 = -2;
    module = g_hINSTANCE_00807618;
    resourceId = st::fn_00404B29(pCVar2->field_0C31,pCVar2->field_0C32);
    resourceString = st::fn_006B0140(resourceId,module);
    st::fn_00711B70(pCVar2->field_01B8,resourceString,iVar3,iVar6,uVar4,iVar7,iVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x76,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::PaintNameRes");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x76);
  return;
}

// 00504CF0 CPanelTy::PaintNameResSI
#line 4 "decomp/ST.exe/functions/00504CF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintNameResSI

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00504CF0(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  BITMAPINFO *pBVar5;
  UINT resourceId;
  char *resourceString;
  HINSTANCE module;
  int iVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    uVar4 = st::fn_004033F0(local_8->field_0C31,local_8->field_0C32);
    pBVar5 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_029A,uVar4);
    /* ST_CALLSITE[00504D54]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x26,0x50,'\x01',(byte *)pBVar5);
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,0x15,0x6c,0xc3,0xb);
    iVar8 = -1;
    iVar7 = -1;
    uVar4 = 5;
    iVar6 = -1;
    iVar3 = -2;
    module = g_hINSTANCE_00807618;
    resourceId = st::fn_00404B29(pCVar2->field_0C31,pCVar2->field_0C32);
    resourceString = st::fn_006B0140(resourceId,module);
    st::fn_00711B70(pCVar2->field_01B8,resourceString,iVar3,iVar6,uVar4,iVar7,iVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x84,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::PaintNameResSI");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x84);
  return;
}

// 00504E60 CPanelTy::PaintIDSObj
#line 4 "decomp/ST.exe/functions/00504E60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintIDSObj */

void __thiscall st::fn_00504E60(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  char *resourceString;
  int iVar4;
  UINT resourceId;
  uint uVar5;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0xa0,0,iVar3,st::mutable_c_string("%s"),
                               "CPanelTy::PaintIDSObj");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0xa0);
    return;
  }
  if (DAT_0080874e == '\x03') {
    /* ST_CALLSITE[00504EB6]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_8->field_0194,0xf,0x8d,'\x01',
           (byte *)local_8->field_09D9[6]);
    if (pCVar2->field_0C4D == 0) goto cf_common_exit_00504F81;
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,0x10,0x8e,
                     *(int *)(pCVar2->field_09D9[6] + 4),0xb);
    resourceId = pCVar2->field_0C4D;
  }
  else {
    /* ST_CALLSITE[00504F24]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_8->field_0194,4,0x89,'\x01',
           (byte *)local_8->field_09D9[6]);
    if (pCVar2->field_0C4D == 0) goto cf_common_exit_00504F81;
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,6,0x8b,200,0xb);
    resourceId = pCVar2->field_0C4D;
  }
  iVar7 = -1;
  iVar6 = -1;
  uVar5 = 0;
  iVar4 = -1;
  iVar3 = -2;
  resourceString = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
  st::fn_00711B70(pCVar2->field_01B8,resourceString,iVar3,iVar4,uVar5,iVar6,iVar7);
cf_common_exit_00504F81:
  if (-1 < (int)pCVar2->field_0148[5]) {
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,(uint)pCVar2->field_0148[5],0xffffffff,
               pCVar2->field_0050,pCVar2->field_00A8);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00505230 CPanelTy::PaintMunition
#line 4 "decomp/ST.exe/functions/00505230/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintMunition

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00505230(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar2;
  uint uVar3;
  int iVar4;
  BITMAPINFO *pBVar4;
  int iVar7;
  byte bVar5;
  uint uVar6;
  int iVar8;
  CPanelTy_field_0C11State *pCVar9;
  bool bVar10;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar11;
  InternalExceptionFrame local_70;
  CPanelTy *local_2c;
  int local_28;
  CPanelTy_field_0C11State *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte local_6;
  char local_5;

  if (DAT_0080874e == '\x01') {
    bVar10 = this->field_09D4 != '\x01';
  }
  else {
    bVar10 = this->field_09D4 == '\x01';
  }
  local_5 = bVar10 + '\x05';
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_2c = this;
  iVar4 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  pCVar2 = local_2c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x153,0,iVar4,st::mutable_c_string("%s")
                               ,"CPanelTy::PaintMunition");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x153);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[005052A7]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_2c->field_0194,param_1,0x36,'\x01',
         (byte *)local_2c->field_09D9[8]);
  pCVar9 = &pCVar2->field_0C11;
  local_6 = 0;
  local_28 = -1;
  do {
    pBVar4 = nullptr;
    if (local_5 != '\x05') {
      switch(local_28) {
      case 0:
      case 1:
      case 4:
      case 5:
        goto cf_continue_loop_00505716;
      case 2:
        local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(1));
        break;
      case 3:
        goto switchD_005052d8_caseD_5;
      case 6:
        goto switchD_005052d8_caseD_4;
      case 7:
        local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(5));
        break;
      case 8:
        local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(2));
        break;
      default:
        goto switchD_005052d8_default;
      }
      goto LAB_0050530c;
    }
    switch(local_28) {
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
      goto cf_continue_loop_00505716;
    case 4:
switchD_005052d8_caseD_4:
      local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(3));
      break;
    case 5:
switchD_005052d8_caseD_5:
      local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(4));
      break;
    default:
switchD_005052d8_default:
      local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(local_6));
    }
LAB_0050530c:
    local_24 = pCVar9;
    if (g_allPlayers_007FA174 != nullptr) {
      switch(local_28) {
      case 0:
        local_10 = 0xf;
        local_c = 0xe;
        if (*pCVar9 == CASE_0) {
LAB_005053b0:
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar8 = 1;
        }
        else {
          if (DAT_0080874e == '\x01') {
            iVar8 = 6;
          }
          else {
            if (DAT_0080874e != '\x02') goto LAB_005053b0;
            iVar8 = 0x83;
          }
          iVar8 = st::fn_0040186B((uint)DAT_0080874d,iVar8);
          iVar8 = iVar8 + 5;
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        }
        break;
      case 1:
        local_10 = 0xf;
        local_c = 0x1a;
        if (*pCVar9 == CASE_0) {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar8 = 2;
        }
        else if (DAT_0080874e == '\x01') {
          iVar8 = st::fn_0040186B((uint)DAT_0080874d,6);
          iVar8 = iVar8 + 10;
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        }
        else if (DAT_0080874e == '\x02') {
          iVar8 = st::fn_0040186B((uint)DAT_0080874d,0x83);
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar8 = iVar8 + 10;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar8 = 2;
        }
        break;
      case 2:
        local_10 = 0x16;
        local_c = 0xf;
        if (*pCVar9 == CASE_0) {
          iVar8 = 9;
LAB_00505581:
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar8 = 0x1d;
        }
        break;
      case 3:
        local_10 = 0x1d;
        local_c = 0x31;
        if (*pCVar9 == CASE_0) {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar8 = 4;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar8 = 0x10;
        }
        break;
      case 4:
        local_10 = 0x1b;
        local_c = 0x25;
        if (*pCVar9 == CASE_0) {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar8 = 6;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar8 = 0x17;
        }
        break;
      case 5:
        local_10 = 0x28;
        local_c = 0x32;
        if (*pCVar9 == CASE_0) {
          iVar8 = 5;
          goto LAB_00505581;
        }
        pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        iVar8 = 0x19;
        break;
      case 6:
        local_10 = 0x1f;
        local_c = 0x22;
        if (*pCVar9 == CASE_0) {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar8 = 7;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar8 = 0x18;
        }
        break;
      case 7:
        local_10 = 0x1e;
        local_c = 0x3b;
        if (*pCVar9 == CASE_0) {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar8 = 8;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar8 = 0x16;
        }
        break;
      case 8:
        local_10 = 0x28;
        local_c = 0x19;
        if (*pCVar9 == CASE_0) {
          iVar8 = 3;
          goto LAB_00505581;
        }
        pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        iVar8 = 0xf;
        break;
      case -1:
        local_10 = 0xf;
        local_c = 4;
        if (DAT_0080874e == '\x01') {
          iVar8 = st::fn_0040186B((uint)DAT_0080874d,6);
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        }
        else if (DAT_0080874e == '\x02') {
          iVar8 = st::fn_0040186B((uint)DAT_0080874d,0x83);
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar8 = 0;
        }
        break;
      default:
        goto switchD_00505324_default;
      }
      pBVar4 = st::fn_0070B3A0(pAVar11,iVar8);
    }
switchD_00505324_default:
    if (pBVar4 != nullptr) {
      /* ST_CALLSITE[005055B0]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,local_10 + 0xf + param_1,
             local_c + 0x36,'\x06',(byte *)pBVar4);
    }
    uVar3 = local_14;
    if (*pCVar9 == CASE_0) {
      local_1c = 0;
    }
    else {
      local_1c = ((uint)*(ushort *)(pCVar9 + 2) * 0xf) / (uint)*(ushort *)(pCVar9 + 4);
    }
    local_18 = local_18 & 0xffffff00;
    if (local_1c != 0) {
      uVar6 = 0;
      local_20 = (local_14 & 0xff) * 0xb + 0x3b;
      do {
        pBVar4 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,3);
        /* ST_CALLSITE[00505623]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,param_1 + 0x4d + uVar6 * 4,
               local_20,'\x01',(byte *)pBVar4);
        bVar5 = (byte)local_18 + 1;
        local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar5));
        uVar6 = (uint)bVar5;
      } while (uVar6 < local_1c);
    }
    if ((byte)local_18 < 0xf) {
      local_20 = (uVar3 & 0xff) * 0xb + 0x3b;
      iVar8 = 0xf - (local_18 & 0xff);
      local_1c = param_1 + 0x4d + (local_18 & 0xff) * 4;
      do {
        pBVar4 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
        /* ST_CALLSITE[00505693]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,local_1c,local_20,'\x01',
               (byte *)pBVar4);
        local_1c = local_1c + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    /* ST_CALLSITE[005056BD]: CALL dword ptr [0x0085bde8] */
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar2->field_01E1),st::mutable_c_string("%d"),(uint)*(ushort *)(local_24 + 2));
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,param_1 + 0x8f,
                     (uVar3 & 0xff) * 0xb + 0x39,0x23,0xc);
    st::fn_00711B70(pCVar2->field_01B8,&pCVar2->field_01E1,-3,-1,0,-1,-1);
    pCVar9 = local_24;
cf_continue_loop_00505716:
    local_6 = local_6 + 1;
    local_28 = local_28 + 1;
    pCVar9 = pCVar9 + 6;
    if (9 < local_6) {
      g_currentExceptionFrame = local_70.previous;
      return;
    }
  } while( true );
}

// 00505960 CPanelTy::PaintArsenal
#line 4 "decomp/ST.exe/functions/00505960/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintArsenal

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00505960(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar3;
  BITMAPINFO *pBVar4;
  int iVar9;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar10;
  InternalExceptionFrame local_70;
  uint local_2c;
  CPanelTy *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  AnonShape_00505960_269BEFC9 *local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_28 = this;
  iVar3 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  pCVar2 = local_28;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x184,0,iVar3,st::mutable_c_string("%s")
                               ,"CPanelTy::PaintArsenal");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x184);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_28->field_0194,0,0x49,0x50,0x6f,0x37,0x3d);
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0,0x4a,0x51,0x29,0x34,0x3f);
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0,0x4b,0x52,0x27,0x32,0x3a);
  if (pCVar2->field_09D4 == '\x01') {
    local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)(4));
    bVar6 = 3;
  }
  else {
    local_20 = (uint)STPiece<1,3>(local_20) << 8;
    bVar6 = 4;
  }
  local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar6));
  if (bVar6 != 0) {
    local_14 = 0;
    local_2c = local_20 & 0xff;
    local_1c = 0x54;
    local_18 = (AnonShape_00505960_269BEFC9 *)(&pCVar2->field_0C11 + local_2c * 6);
    local_24 = (uint)bVar6;
    do {
      if (*(CPanelTy_field_0C11State *)local_18 == CASE_0) {
        uVar3 = 0;
      }
      else {
        uVar3 = ((uint)local_18->field_0002 * 10) / (uint)local_18->field_0004;
      }
      pBVar4 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,5);
      /* ST_CALLSITE[00505A7D]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x74,local_1c,'\x01',(byte *)pBVar4
            );
      local_10 = local_10 & 0xffffff00;
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          pBVar4 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
          /* ST_CALLSITE[00505AB6]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,uVar8 * 4 + 0x76,local_1c + 2,
                 '\x01',(byte *)pBVar4);
          bVar6 = (byte)local_10 + 1;
          local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar6));
          uVar8 = (uint)bVar6;
        } while (uVar8 < uVar3);
      }
      if ((byte)local_10 < 10) {
        iVar10 = 10 - (local_10 & 0xff);
        iVar7 = (local_10 & 0xff) * 4 + 0x76;
        do {
          pBVar4 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          /* ST_CALLSITE[00505B0F]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar7,local_1c + 2,'\x01',
                 (byte *)pBVar4);
          iVar7 = iVar7 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      /* ST_CALLSITE[00505B33]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar2->field_01E1),st::mutable_c_string("%3d"),(uint)local_18->field_0002);
      uVar3 = local_1c;
      st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,0xa2,local_1c,0x15,0xc);
      st::fn_007119C0(pCVar2->field_01B8,&pCVar2->field_01E1,-3,-1,5);
      if ((char)local_20 == '\0') {
        if ((int)uVar3 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (*(code *)(&PTR_DAT_00505cec)[local_14])();
          return;
        }
      }
      else if ((int)uVar3 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)(&PTR_DAT_00505cdc)[local_14])();
        return;
      }
      if (*(char *)local_18 == '\0') {
        pAVar5 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
      }
      else {
        pAVar5 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
      }
      pBVar4 = st::fn_0070B3A0(pAVar5,(-(uint)(*(char *)local_18 != '\0') & 0x14) + 0xb + local_14 +
                                   local_2c);
      if (pBVar4 != nullptr) {
        /* ST_CALLSITE[00505C5A]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,local_c,local_8,'\x06',
               (byte *)pBVar4);
      }
      local_14 = local_14 + 1;
      local_18 = (AnonShape_00505960_269BEFC9 *)&local_18->field_0x6;
      local_1c = uVar3 + 0xb;
      local_24 = local_24 - 1;
    } while (local_24 != 0);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

// 00505DF0 CPanelTy::PaintBioSonar
#line 4 "decomp/ST.exe/functions/00505DF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintBioSonar

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_0C29 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0C29State. Cases:
   CASE_0=0;CASE_21=33;CASE_28=40;CASE_FF=255 */

void __thiscall st::fn_00505DF0(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar3;
  char *pcVar4;
  int iVar7;
  CPanelTy_field_0C29State CVar5;
  int iVar6;
  int iVar8;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    pBVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)local_c->field_02B2,1);
    /* ST_CALLSITE[00505E44]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x33,0x7b,'\x01',(byte *)pBVar3);
    if (pCVar2->field_0C2F != 0) {
      st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,0x24,0x4c,0xa4,0x2b);
      pcVar4 = st::fn_006B0140(0x38ae,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00505E9A]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d\n%s"),(uint)(ushort)pCVar2->field_0C2F,pcVar4);
      st::fn_00711B70(pCVar2->field_01B8,(char *)&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    if (pCVar2->field_0C29 != CASE_FF) {
      if (CASE_21 < pCVar2->field_0C29) {
        pCVar2->field_0C29 = CASE_21;
      }
      CVar5 = CASE_0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2->field_0C29 != CASE_0) {
        do {
          pBVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
          /* ST_CALLSITE[00505F0F]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,(local_8 & 0xff) * 4 + 0x35,
                 0x7d,'\x01',(byte *)pBVar3);
          CVar5 = CVar5 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(CVar5));
        } while (CVar5 < pCVar2->field_0C29);
      }
      if (CVar5 < CASE_21) {
        iVar6 = 0x21 - (local_8 & 0xff);
        iVar8 = (local_8 & 0xff) * 4 + 0x35;
        do {
          pBVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          /* ST_CALLSITE[00505F5C]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar8,0x7d,'\x01',
                 (byte *)pBVar3);
          iVar8 = iVar8 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x19a,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::PaintBioSonar");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x19a);
  return;
}

// 005061C0 CPanelTy::PaintCtrlObj
#line 4 "decomp/ST.exe/functions/005061C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintCtrlObj

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BFA uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BFAState. Cases:
   CASE_0=0;CASE_1=1;CASE_3=3;CASE_4=4;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0C11 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0C11State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_0C3C uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0C3CState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_0C29 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0C29State. Cases:
   CASE_0=0;CASE_21=33;CASE_28=40;CASE_FF=255 */

void __thiscall st::fn_005061C0(CPanelTy *this,int param_1)

{
  CPanelTy_field_0C11State CVar1;
  CPanelTy *this_00;
  CPanelTy_field_0C29State CVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar8_mg1;
  UINT UVar6;
  char *pcVar8_mg0;
  uint local_EAX_1314;
  BITMAPINFO *pBVar7;
  uint uVar8;
  UINT local_EAX_1601;
  char *pcVar8_mg2;
  uint *puVar9;
  char *pcVar8_mgC;
  uint uVar5;
  char *pcVar8_mgF;
  char *pcVar8_mg4;
  char *pcVar8_mg5;
  uint local_EAX_3244;
  UINT UVar7;
  char *pcVar8_mg10;
  char *pcVar8_mgD;
  char *pcVar8_mg9;
  char *pcVar8_mgA;
  char *pcVar8_mgB;
  byte bVar4;
  char *pcVar8_mg8;
  char *pcVar8_mg7;
  char *pcVar8_mgE;
  int iVar11;
  uint uVar10;
  char cVar11;
  int iVar12;
  Global_sub_00529500_param_1Enum GVar13;
  int GVar14;
  char *pcVar14;
  char *pcVar15;
  HINSTANCE pHVar16;
  RecoveredSourceFamily_dibcopy *pRVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  InternalExceptionFrame local_64;
  CPanelTy *local_20;
  byte *local_1c;
  uint local_18;
  undefined4 local_14;
  Global_sub_00526BA0_param_1Enum *local_10;
  ushort *local_c;
  Global_sub_00529500_param_1Enum local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
  iVar4 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_20;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x348,0,iVar4,
                                st::mutable_c_string("%s"),"CPanelTy::PaintCtrlObj");
    if (iVar11 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x348);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 0) goto switchD_00506214_caseD_2;
  switch(local_20->field_0BFA) {
  case CASE_0:
  case CASE_3:
  case CASE_4:
    pbVar5 = (byte *)local_20->field_09D9[0];
    pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    iVar18 = 0;
    iVar12 = 0;
    goto LAB_0050633b;
  case CASE_1:
    if (local_20->field_0BFB == '\x02') {
      pbVar5 = (byte *)local_20->field_09D9[1];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
      iVar18 = 0;
      iVar12 = 0;
      goto LAB_0050633b;
    }
    break;
  default:
    goto switchD_00506214_caseD_2;
  }
  switch(local_20->field_0BF5) {
  case CASE_32:
  case CASE_3C:
  case CASE_3E:
  case CASE_3F:
  case CASE_40:
  case CASE_46:
  case CASE_47:
  case CASE_49:
  case CASE_4A:
  case CASE_4B:
  case CASE_4E:
  case CASE_51:
  case CASE_52:
    pbVar5 = (byte *)local_20->field_09D9[3];
    goto LAB_005062d5;
  case CASE_33:
  case CASE_35:
  case CASE_37:
  case CASE_3A:
  case CASE_42:
  case CASE_43:
  case CASE_44:
  case CASE_45:
  case CASE_4C:
    pbVar5 = (byte *)local_20->field_09D9[2];
LAB_005062d5:
    pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    break;
  case CASE_34:
  case CASE_38:
  case CASE_39:
  case CASE_3B:
  case CASE_3D:
  case CASE_41:
  case CASE_48:
  case CASE_4D:
  case CASE_4F:
  case CASE_50:
  case CASE_6F:
    pbVar5 = (byte *)local_20->field_09D9[1];
    pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    break;
  case CASE_36:
    if (local_20->field_0BF9 == '\x01') {
      pbVar5 = (byte *)local_20->field_09D9[3];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    }
    else {
      if (local_20->field_0BF9 != '\x02') goto switchD_00506270_caseD_53;
      pbVar5 = (byte *)local_20->field_09D9[2];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    }
    break;
  default:
    goto switchD_00506270_caseD_53;
  }
  /* ST_CALLSITE[005062E3]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(pRVar17,0,0,'\x01',pbVar5);
switchD_00506270_caseD_53:
  switch(this_00->field_0BF5) {
  case CASE_36:
    if (this_00->field_0BF9 == '\x01') {
      pbVar5 = (byte *)this_00->field_09D9[4];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      iVar18 = 0x35;
      iVar12 = 0xc;
      goto LAB_0050633b;
    }
    break;
  case CASE_3E:
  case CASE_3F:
  case CASE_42:
  case CASE_46:
  case CASE_47:
  case CASE_4A:
  case CASE_4B:
  case CASE_51:
    pbVar5 = (byte *)this_00->field_09D9[4];
    pRVar17 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
    iVar18 = 0x35;
    iVar12 = 0xc;
LAB_0050633b:
    /* ST_CALLSITE[0050633B]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229(pRVar17,iVar12,iVar18,'\x01',pbVar5);
  }
switchD_00506214_caseD_2:
  if (this_00->field_0BFA != CASE_1) {
    if (this_00->field_0BFA == CASE_4) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FE:
        iVar12 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
                 *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
        /* ST_CALLSITE[005063A0]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x50,'\x01',
               (byte *)this_00->field_09D9[5]);
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,
                              (uint)this_00->field_0C11);
        /* ST_CALLSITE[005063CA]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 3,0x53,'\x01',
               (byte *)pBVar7);
        pbVar5 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[5],0,0x49,7,
                                             0x67,0xc,0);
        if (pbVar5 != nullptr) {
          if (this_00->field_0BF5 == 0xfe) {
            local_8 = st::fn_004054CA(this_00->field_0C11);
          }
          else {
            local_8 = st::fn_004019BF(this_00->field_0BF5);
          }
          uVar8 = st::fn_004040C5(local_8);
          iVar19 = -1;
          iVar18 = -1;
          pcVar8_mg1 = st::fn_006B0140(local_8,g_hINSTANCE_00807618);
          st::fn_007119C0(this_00->field_01B8,pcVar8_mg1,iVar18,iVar19,uVar8);
          /* ST_CALLSITE[00506458]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 0x49,0x57,'\x01',
                 pbVar5);
          st::fn_00710F00(this_00->field_01B8);
        }
        local_1c = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[5],0,100,0x14
                                               ,0x3c,0x14,0);
        if (local_1c != nullptr) {
          uVar8 = 0;
          /* ST_CALLSITE[005064A7]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%06d"),*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0C11) {
          case CASE_0:
            uVar8 = 0;
            break;
          case CASE_1:
            uVar8 = 2;
            break;
          case CASE_2:
            uVar8 = 1;
            break;
          case CASE_3:
            uVar8 = 7;
            break;
          case CASE_4:
            uVar8 = 3;
          }
          st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,uVar8);
          /* ST_CALLSITE[0050650A]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 100,100,'\x01',
                 local_1c);
          st::fn_00710F00(this_00->field_01C4);
        }
        break;
      case CASE_FD:
        iVar12 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
                 *(int *)((byte *)this_00->field_09D9[0xe] + 4)) / 2;
        /* ST_CALLSITE[00506544]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x3f,'\x01',
               (byte *)this_00->field_09D9[0xe]);
        CVar1 = this_00->field_0C11;
        if ((CVar1 != CASE_0) && (CVar1 < 0x16)) {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CE,CVar1 - 1);
          /* ST_CALLSITE[0050657D]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 6,0x44,'\x01',
                 (byte *)pBVar7);
        }
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,10);
        /* ST_CALLSITE[005065A3]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 4,0x42,'\x06',
               (byte *)pBVar7);
        pbVar5 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[0xe],0,0x38,4,
                                             0x7b,0x19,0);
        if (pbVar5 != nullptr) {
          iVar21 = -1;
          iVar20 = -1;
          uVar8 = 0;
          iVar19 = -1;
          iVar18 = -2;
          pHVar16 = g_hINSTANCE_00807618;
          UVar6 = st::fn_0040270C(this_00->field_0C11);
          pcVar8_mg0 = st::fn_006B0140(UVar6,pHVar16);
          st::fn_00711B70(this_00->field_01B8,pcVar8_mg0,iVar18,iVar19,uVar8,iVar20,iVar21);
          /* ST_CALLSITE[00506610]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 0x38,0x43,'\x01',
                 pbVar5);
          st::fn_00710F00(this_00->field_01B8);
        }
        pbVar5 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[0xe],0,2,0x1e,
                                             0xb2,0x22,0);
        if (pbVar5 != nullptr) {
          st::fn_00711B70(this_00->field_01B8,(char *)this_00->field_0C16,-2,-1,1,-1,-1);
          /* ST_CALLSITE[0050667A]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 2,0x5d,'\x01',pbVar5);
          st::fn_00710F00(this_00->field_01B8);
        }
      }
    }
    goto switchD_00506377_caseD_df;
  }
  if (this_00->field_0BFB == '\x02') {
    GVar13 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    local_8 = GVar13;
    /* ST_CALLSITE[005066C4]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar13,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != 0) {
      local_EAX_1314 =
           st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A);
      pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,local_EAX_1314
                           );
      /* ST_CALLSITE[00506704]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar13 + 6,0x5d,'\x01',
             (byte *)pBVar7);
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,GVar13 + 0x36,0x5d,7,0x21,
                   0);
      GVar13 = local_8;
      bVar4 = this_00->field_0C24;
      local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar4));
      cVar11 = (char)(((uint)bVar4 * 0x21) / 100);
      local_10 = (Global_sub_00526BA0_param_1Enum *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(cVar11));
      if ((bVar4 != 0) && (cVar11 == '\0')) {
        local_10 = (Global_sub_00526BA0_param_1Enum *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(1));
      }
      if (bVar4 < 0x46) {
        iVar12 = (-(uint)(bVar4 < 0x14) & 5) + 5;
      }
      else {
        iVar12 = 0;
      }
      uVar8 = (uint)local_10 & 0xff;
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar8,
                 (byte *)this_00->field_028A,0,iVar12,*(int *)(this_00->field_028A + 4) - uVar8,5,
                 uVar8);
      pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
      /* ST_CALLSITE[005067C1]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar13 + 5,0x5c,'\x06',
             (byte *)pBVar7);
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,GVar13 + 2,0x52,0xb2,10);
      pHVar16 = g_hINSTANCE_00807618;
      local_EAX_1601 =
           st::fn_00403684(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A,0);
      pcVar8_mg2 = st::fn_006B0140(local_EAX_1601,pHVar16);
      uVar8 = 0xffffffff;
      do {
        pcVar14 = pcVar8_mg2;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar8_mg2 + 1;
        cVar11 = *pcVar8_mg2;
        pcVar8_mg2 = pcVar14;
      } while (cVar11 != '\0');
      uVar8 = ~uVar8;
      pcVar14 = pcVar14 + -uVar8;
      pcVar15 = &this_00->field_01E1;
      memmove(pcVar15, pcVar14, uVar8); /* compiler REP MOVS byte copy */
      uVar10 = 0;
      for (puVar9 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
          puVar9 != nullptr; puVar9 = st::fn_0072E560(puVar9,'\n')) {
        *(undefined1 *)puVar9 = 0x20;
      }
      goto cf_common_exit_00507034;
    }
    goto switchD_00506878_caseD_3b;
  }
  switch(this_00->field_0BF5) {
  case CASE_32:
  case CASE_40:
  case CASE_49:
    GVar14 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    local_8 = GVar14;
    /* ST_CALLSITE[00506E4B]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == 0) {
LAB_0050709d:
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,GVar14 + 2,0x52,0xb2,0x2f);
LAB_005070be:
      uVar8 = 0;
      UVar6 = 0x2713;
      goto LAB_0050777e;
    }
    local_EAX_3244 =
         st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                            this_00->field_0C1A);
    pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,local_EAX_3244);
    /* ST_CALLSITE[00506E8B]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14 + 6,0x5d,'\x01',
           (byte *)pBVar7);
    if (this_00->field_0C26 != 0) {
      /* ST_CALLSITE[00506EAF]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_01E1),st::mutable_c_string("%d"),(uint)(byte)this_00->field_0C26);
      st::fn_00710A90(this_00->field_01C8,this_00->field_0194,0,GVar14 + 6,0x5d,0x30,0x21);
      st::fn_007119C0(this_00->field_01C8,&this_00->field_01E1,-2,-1,0);
    }
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,GVar14 + 0x36,0x5d,7,0x21,0);
    GVar13 = local_8;
    bVar4 = this_00->field_0C24;
    cVar11 = (char)(((uint)bVar4 * 0x21) / 100);
    local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(cVar11));
    if ((bVar4 != 0) && (cVar11 == '\0')) {
      local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(1));
    }
    if (bVar4 < 0x46) {
      iVar12 = (-(uint)(bVar4 < 0x14) & 5) + 5;
    }
    else {
      iVar12 = 0;
    }
    uVar8 = (uint)local_1c & 0xff;
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar8,
               (byte *)this_00->field_028A,0,iVar12,*(int *)(this_00->field_028A + 4) - uVar8,5,
               uVar8);
    pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
    /* ST_CALLSITE[00506FA0]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar13 + 5,0x5c,'\x06',
           (byte *)pBVar7);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,GVar13 + 2,0x52,0xb2,10);
    pHVar16 = g_hINSTANCE_00807618;
    UVar7 = st::fn_00403684(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A,0);
    pcVar8_mg10 = st::fn_006B0140(UVar7,pHVar16);
    uVar8 = 0xffffffff;
    do {
      pcVar14 = pcVar8_mg10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar8_mg10 + 1;
      cVar11 = *pcVar8_mg10;
      pcVar8_mg10 = pcVar14;
    } while (cVar11 != '\0');
    uVar8 = ~uVar8;
    pcVar14 = pcVar14 + -uVar8;
    pcVar15 = &this_00->field_01E1;
    memmove(pcVar15, pcVar14, uVar8); /* compiler REP MOVS byte copy */
    uVar10 = 0;
    for (puVar9 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
        puVar9 != nullptr; puVar9 = st::fn_0072E560(puVar9,'\n')) {
      *(undefined1 *)puVar9 = 0x20;
    }
    goto cf_common_exit_00507034;
  case CASE_33:
    iVar18 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[8] + 4)) / 2;
    /* ST_CALLSITE[005069F2]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18,0x36,'\x01',
           (byte *)this_00->field_09D9[8]);
    /* ST_CALLSITE[00506A0D]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18 + 5,0x39,'\x01',
           (byte *)this_00->field_09D9[9]);
    local_c = &this_00->field_0C1C;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_8 = 0;
    iVar12 = 0x3a;
    do {
      if (*local_10 == 0) {
        st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar18 + 2,iVar12 - 2,0xb2,0x2f);
        iVar22 = -1;
        iVar21 = -1;
        uVar8 = 0;
        iVar20 = -1;
        iVar19 = -2;
        pcVar8_mgF = st::fn_006B0140(0x2713,g_hINSTANCE_00807618);
        st::fn_00711B70(this_00->field_01B8,pcVar8_mgF,iVar19,iVar20,uVar8,iVar21,iVar22);
      }
      else {
        uVar5 = st::fn_004056F5(*local_10,(&this_00->field_0C1A)[local_8]);
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,uVar5);
        /* ST_CALLSITE[00506A6D]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18 + 6,iVar12,'\x01',
               (byte *)pBVar7);
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar18 + 0x36,iVar12,7,
                     0x21,0);
        bVar4 = (&this_00->field_0C24)[local_8];
        local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(bVar4));
        cVar11 = (char)(((uint)bVar4 * 0x21) / 100);
        local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(cVar11));
        if ((bVar4 != 0) && (cVar11 == '\0')) {
          local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(1));
        }
        if (bVar4 < 0x46) {
          local_1c = (byte *)((-(uint)(bVar4 < 0x14) & 5) + 5);
        }
        else {
          local_1c = nullptr;
        }
        uVar8 = local_18 & 0xff;
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar18 + 0x37,
                   (iVar12 - uVar8) + 0x21,(byte *)this_00->field_028A,0,(int)local_1c,
                   *(int *)(this_00->field_028A + 4) - uVar8,5,uVar8);
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
        /* ST_CALLSITE[00506B39]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18 + 5,iVar12 + -1,'\x06',
               (byte *)pBVar7);
        /* ST_CALLSITE[00506B61]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
        st::fn_00404C7D(this_00,this_00->field_0194,iVar18 + 0x41,iVar12,
                      100 - (&this_00->field_0C24)[local_8],0x36b1);
        /* ST_CALLSITE[00506B87]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
        st::fn_00405A8D(this_00,this_00->field_0194,iVar18 + 0x41,iVar12 + 0xb,*local_c,local_c[2],4,2);
      }
      iVar12 = iVar12 + 0x23;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    } while (iVar12 < 0x80);
    break;
  case CASE_34:
    iVar12 = ((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004;
    iVar18 = *(int *)(this_00->field_09D9[8] + 4);
    /* ST_CALLSITE[005074BA]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x60,0x1f,'\x01',
           (byte *)this_00->field_09D9[0xb]);
    /* ST_CALLSITE[005074C5]: CALL 0x00403526; direct=00403526 CPanelTy::PaintMunition */
    st::fn_00403526(this_00,(iVar12 - iVar18) / 2);
    break;
  case CASE_35:
    iVar12 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    /* ST_CALLSITE[00507121]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    if (this_00->field_0C31 != '\0') {
      /* ST_CALLSITE[00507136]: CALL 0x004057bd; direct=004057BD CPanelTy::PaintNameRes */
      st::fn_004057BD(this_00,iVar12);
      /* ST_CALLSITE[0050713E]: CALL 0x00405862; direct=00405862 CPanelTy::PaintPerRes */
      st::fn_00405862(this_00,iVar12);
      break;
    }
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar12 + 2,0x52,0xb2,0x2f);
    if (this_00->field_0C2F == 0) goto LAB_005070be;
    pcVar8_mgD = st::fn_006B0140(0x273c,g_hINSTANCE_00807618);
    /* ST_CALLSITE[0050719D]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d %s"),(uint)(ushort)this_00->field_0C2F,pcVar8_mgD);
    iVar20 = -1;
    iVar19 = -1;
    uVar8 = 0;
    iVar18 = -1;
    iVar12 = -2;
    pcVar8_mgE = (char *)&DAT_0080f33a;
    goto LAB_00507784;
  case CASE_36:
  case CASE_37:
  case CASE_43:
  case CASE_45:
  case CASE_48:
  case CASE_4C:
  case CASE_4D:
  case CASE_4E:
  case CASE_6F:
    iVar12 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[7] + 4)) / 2;
    /* ST_CALLSITE[005068A1]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x67,'\x01',
           (byte *)this_00->field_09D9[7]);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar12 + 2,0x69,0xa7,0xc);
    iVar21 = -1;
    iVar20 = -1;
    uVar8 = 0;
    iVar19 = -1;
    iVar18 = -2;
    pHVar16 = g_hINSTANCE_00807618;
    UVar6 = st::fn_00405B00(this_00->field_0BF5);
    pcVar8_mgC = st::fn_006B0140(UVar6,pHVar16);
    st::fn_00711B70(this_00->field_01B8,pcVar8_mgC,iVar18,iVar19,uVar8,iVar20,iVar21);
    if (this_00->field_0C29 != CASE_FF) {
      if (CASE_28 < this_00->field_0C29) {
        this_00->field_0C29 = CASE_28;
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0C29 != CASE_0) {
        do {
          if ((this_00->field_0BF5 != CASE_4D) || (iVar18 = 4, this_00->field_0C28 == '\0')) {
            iVar18 = 3;
          }
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,iVar18);
          /* ST_CALLSITE[0050696B]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
                 iVar12 + 6 + (local_8 & 0xff) * 4,0x75,'\x01',(byte *)pBVar7);
          CVar3 = (undefined1)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(CVar3));
        } while (CVar3 < this_00->field_0C29);
      }
      if ((byte)(undefined1)local_8 < 0x28) {
        iVar18 = 0x28 - (local_8 & 0xff);
        iVar12 = iVar12 + 6 + (local_8 & 0xff) * 4;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[005069BD]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x75,'\x01',
                 (byte *)pBVar7);
          iVar12 = iVar12 + 4;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
    }
    break;
  case CASE_38:
  case CASE_39:
  case CASE_4F:
    /* ST_CALLSITE[005070F5]: CALL 0x00403e4f; direct=00403E4F CPanelTy::PaintMineInf */
    st::fn_00403E4F(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4))
                         / 2);
    break;
  case CASE_3A:
    iVar18 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    /* ST_CALLSITE[005071DC]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    iVar12 = iVar18 + 2;
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar12,0x52,0x69,0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar8 = 1;
    iVar20 = -1;
    iVar19 = -3;
    pcVar8_mg9 = st::fn_006B0140(0x36b7,g_hINSTANCE_00807618);
    st::fn_00711B70(this_00->field_01B8,pcVar8_mg9,iVar19,iVar20,uVar8,iVar21,iVar22);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar12,0x5d,0x69,0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar8 = 1;
    iVar20 = -1;
    iVar19 = -3;
    pcVar8_mgA = st::fn_006B0140(0x36b8,g_hINSTANCE_00807618);
    st::fn_00711B70(this_00->field_01B8,pcVar8_mgA,iVar19,iVar20,uVar8,iVar21,iVar22);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar12,0x69,0xb2,0xc);
    iVar21 = -1;
    iVar20 = -1;
    uVar8 = 1;
    iVar19 = -1;
    iVar12 = -2;
    pcVar8_mgB = st::fn_006B0140(0x36b6,g_hINSTANCE_00807618);
    st::fn_00711B70(this_00->field_01B8,pcVar8_mgB,iVar12,iVar19,uVar8,iVar20,iVar21);
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0C3A != '\0') {
      do {
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        /* ST_CALLSITE[005072E4]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
               iVar18 + 0x70 + (local_8 & 0xff) * 4,0x54,'\x01',(byte *)pBVar7);
        bVar4 = (undefined1)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
      } while (bVar4 < (byte)this_00->field_0C3A);
    }
    if ((byte)(undefined1)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar12 = iVar18 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[00507335]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x54,'\x01',
               (byte *)pBVar7);
        iVar12 = iVar12 + 4;
        local_1c = local_1c + -1;
      } while (local_1c != nullptr);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0C3B != '\0') {
      do {
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        /* ST_CALLSITE[0050737E]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
               iVar18 + 0x70 + (local_8 & 0xff) * 4,0x5f,'\x01',(byte *)pBVar7);
        bVar4 = (undefined1)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
      } while (bVar4 < (byte)this_00->field_0C3B);
    }
    if ((byte)(undefined1)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar12 = iVar18 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[005073CF]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x5f,'\x01',
               (byte *)pBVar7);
        iVar12 = iVar12 + 4;
        local_1c = (byte *)((int)local_1c + -1);
      } while (local_1c != nullptr);
    }
    local_8 = local_8 & 0xffffff00;
    local_1c = (byte *)(((uint)(ushort)this_00->field_0C34 * 0x28) / 400);
    if (local_1c != nullptr) {
      pbVar5 = nullptr;
      do {
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,2);
        /* ST_CALLSITE[00507426]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18 + 0xb + (int)pbVar5 * 4,
               0x76,'\x01',(byte *)pBVar7);
        bVar4 = (undefined1)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
        pbVar5 = (byte *)(uint)bVar4;
      } while (pbVar5 < local_1c);
    }
    if ((byte)(undefined1)local_8 < 0x28) {
      iVar19 = 0x28 - (local_8 & 0xff);
      iVar12 = iVar18 + 0xb + (local_8 & 0xff) * 4;
      do {
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050747E]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x76,'\x01',
               (byte *)pBVar7);
        iVar12 = iVar12 + 4;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    break;
  case CASE_3C:
    iVar12 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    /* ST_CALLSITE[0050751E]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    switch(this_00->field_0C3C) {
    case CASE_0:
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar12,0x50,
                       *(int *)(this_00->field_09D9[5] + 4),*(int *)(this_00->field_09D9[5] + 8));
      uVar8 = 1;
      UVar6 = 0x36bb;
      goto LAB_0050777e;
    case CASE_1:
      /* ST_CALLSITE[00507594]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 5,0x65,'\x01',
             (byte *)this_00->field_09D9[0xd]);
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar12 + 2,0x52,0xb2,10);
      iVar21 = -1;
      iVar20 = -1;
      uVar8 = 0;
      iVar19 = -1;
      iVar18 = -2;
      pcVar8_mg8 = st::fn_006B0140(0x36bd,g_hINSTANCE_00807618);
      st::fn_00711B70(this_00->field_01B8,pcVar8_mg8,iVar18,iVar19,uVar8,iVar20,iVar21);
      /* ST_CALLSITE[005075FF]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
      st::fn_00404C7D(this_00,this_00->field_0194,iVar12 + 0x39,0x65,(byte)this_00->field_0C3D,
                    0x2714);
      uVar8 = (uint)(this_00->field_0C3D * 0x28) / 100;
      local_18 = 0;
      if (uVar8 != 0) {
        iVar18 = iVar12 + 0xb;
        local_1c = (byte *)uVar8;
        local_18 = uVar8;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
          /* ST_CALLSITE[00507648]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18,0x5c,'\x01',
                 (byte *)pBVar7);
          iVar18 = iVar18 + 4;
          local_1c = (byte *)((int)local_1c - 1);
        } while (local_1c != nullptr);
        local_1c = nullptr;
      }
      if (local_18 < 0x28) {
        iVar12 = iVar12 + 0xb + local_18 * 4;
        iVar18 = 0x28 - local_18;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050768E]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x5c,'\x01',
                 (byte *)pBVar7);
          iVar12 = iVar12 + 4;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      break;
    case CASE_2:
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar12,0x54,
                       *(int *)(this_00->field_09D9[5] + 4),0x21);
      iVar21 = -1;
      iVar20 = -1;
      uVar8 = 1;
      iVar19 = -1;
      iVar18 = -2;
      pcVar8_mg7 = st::fn_006B0140(0x36bc,g_hINSTANCE_00807618);
      st::fn_00711B70(this_00->field_01B8,pcVar8_mg7,iVar18,iVar19,uVar8,iVar20,iVar21);
      /* ST_CALLSITE[005076FE]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_01E1),st::mutable_c_string("%4d"),this_00->field_0C3D);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00710A90(this_00->field_01BC,this_00->field_0194,0,iVar12,0x71,
                       *(int *)(this_00->field_09D9[5] + 4),
                       *(int *)(this_00->field_09D9[5] + 8) + -0x21);
      st::fn_007119C0(this_00->field_01BC,&this_00->field_01E1,-1,-1,0);
      break;
    case CASE_3:
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar12,0x50,
                       *(int *)(this_00->field_09D9[5] + 4),*(int *)(this_00->field_09D9[5] + 8));
      uVar8 = 1;
      UVar6 = 0x36be;
LAB_0050777e:
      iVar20 = -1;
      iVar19 = -1;
      iVar18 = -1;
      iVar12 = -2;
      pcVar8_mgE = st::fn_006B0140(UVar6,g_hINSTANCE_00807618);
LAB_00507784:
      st::fn_00711B70(this_00->field_01B8,pcVar8_mgE,iVar12,iVar18,uVar8,iVar19,iVar20);
    }
    break;
  case CASE_44:
    /* ST_CALLSITE[00506C25]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
           (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
           *(int *)((byte *)this_00->field_09D9[10] + 4)) / 2,0x37,'\x01',
           (byte *)this_00->field_09D9[10]);
    GVar14 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    local_8 = GVar14;
    /* ST_CALLSITE[00506C4F]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    uVar8 = (uint)(ushort)this_00->field_0C34;
    pcVar8_mg4 = st::fn_006B0140(0x2725,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00506C7D]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&1%s &0%d"),pcVar8_mg4,uVar8);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x56,0x39,0x6d,0x15);
    st::fn_00711B70(this_00->field_01B8,(char *)&DAT_0080f33a,-2,-1,0,-1,-1);
    if (*(int *)&this_00->field_0xc12 == 0) goto LAB_0050709d;
    /* ST_CALLSITE[00506CE0]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14 + 6,0x5d,'\x01',
           (byte *)this_00->field_09D9[0xc]);
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,GVar14 + 0x36,0x5d,7,0x21,0);
    GVar13 = local_8;
    bVar4 = this_00->field_0C24;
    cVar11 = (char)(((uint)bVar4 * 0x21) / 100);
    local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(cVar11));
    if ((bVar4 != 0) && (cVar11 == '\0')) {
      local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(1));
    }
    if (bVar4 < 0x46) {
      iVar12 = (-(uint)(bVar4 < 0x14) & 5) + 5;
    }
    else {
      iVar12 = 0;
    }
    uVar8 = (uint)local_1c & 0xff;
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar8,
               (byte *)this_00->field_028A,0,iVar12,*(int *)(this_00->field_028A + 4) - uVar8,5,
               uVar8);
    pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
    /* ST_CALLSITE[00506D9D]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar13 + 5,0x5c,'\x06',
           (byte *)pBVar7);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,GVar13 + 2,0x52,0xb2,10);
    pcVar8_mg5 = st::fn_006B0140(0x2b2c,g_hINSTANCE_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar14 = pcVar8_mg5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar8_mg5 + 1;
      cVar11 = *pcVar8_mg5;
      pcVar8_mg5 = pcVar14;
    } while (cVar11 != '\0');
    uVar8 = ~uVar8;
    pcVar14 = pcVar14 + -uVar8;
    pcVar15 = &this_00->field_01E1;
    memmove(pcVar15, pcVar14, uVar8); /* compiler REP MOVS byte copy */
    for (puVar9 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
        puVar9 != nullptr; puVar9 = st::fn_0072E560(puVar9,'\n')) {
      *(undefined1 *)puVar9 = 0x20;
    }
cf_common_exit_00507034:
    st::fn_00711B70(this_00->field_01B8,&this_00->field_01E1,-2,-1,0,-1,-1);
    iVar12 = local_8 + 0x41;
    /* ST_CALLSITE[0050706E]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
    st::fn_00404C7D(this_00,this_00->field_0194,iVar12,0x5d,this_00->field_0C24,0x2714);
    /* ST_CALLSITE[00507093]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
    st::fn_00405A8D(this_00,this_00->field_0194,iVar12,0x68,this_00->field_0C1C,this_00->field_0C20,4,2
                );
    break;
  case CASE_50:
    /* ST_CALLSITE[005074EF]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
           (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
           *(int *)((byte *)this_00->field_09D9[8] + 4)) / 2,0x36,'\x01',
           (byte *)this_00->field_09D9[8]);
  }
switchD_00506878_caseD_3b:
  /* ST_CALLSITE[00507791]: CALL 0x004019b5; direct=004019B5 CPanelTy::PaintIDSObj */
  st::fn_004019B5(this_00);
switchD_00506377_caseD_df:
  if (-1 < (int)this_00->field_0148[5]) {
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
               this_00->field_0050,this_00->field_00A8);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

// 00507F60 CPanelTy::Update4PanelWB
#line 4 "decomp/ST.exe/functions/00507F60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::Update4PanelWB

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0C29 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0C29State. Cases:
   CASE_0=0;CASE_21=33;CASE_28=40;CASE_FF=255 */

void __thiscall st::fn_00507F60(CPanelTy *this)

{
  CPanelTy_field_0BF5State *pCVar1;
  CPanelTy_field_0BFAState CVar2;
  CPanelTy_field_0C3CState CVar3;
  byte *pbVar4;
  RecoveredSourceFamily_dibcopy *pRVar5;
  CPanelTy *this_00;
  byte bVar7;
  int iVar8;
  CPanelTy_field_0C29State CVar8;
  uint uVar10;
  BITMAPINFO *pBVar11;
  char *pcVar17;
  Global_sub_00525EF0_param_1Enum GVar9;
  uint uVar12;
  ushort *puVar13;
  int iVar15;
  char cVar14;
  int iVar16;
  char cVar17;
  int iVar18;
  CPanelTy_field_0BF5State *pCVar19;
  char *pcVar20;
  short *psVar21;
  CPanelTy_field_0C11State *pCVar22;
  uint *puVar23;
  CPanelTy_field_0BF5State *pCVar24;
  short *psVar25;
  CPanelTy_field_0C11State *pCVar27;
  bool bVar28;
  uint uVar29;
  undefined4 local_104 [4];
  undefined4 local_f4;
  undefined4 local_e4 [4];
  undefined4 local_d4;
  InternalExceptionFrame local_c4;
  CPanelTy *local_80;
  CPanelTy_field_0BF5State local_7c;
  char local_78;
  CPanelTy_field_0BFAState local_77;
  char local_76;
  char local_75;
  char local_74;
  short local_73 [6];
  char local_67;
  CPanelTy_field_0C11State local_60;
  int local_5f;
  uint local_5b;
  byte local_4d [2];
  char local_4b;
  CPanelTy_field_0C29State local_48;
  short local_42;
  char local_40;
  char local_3e;
  ushort local_3d;
  char local_37;
  char local_36;
  CPanelTy_field_0C3CState local_35;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  ushort *local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  byte *local_8;

  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  local_80 = this;
  iVar8 = st::fn_0072D7F0(local_c4.jumpBuffer,0);
  this_00 = local_80;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar15 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x497,0,iVar8,
                                st::mutable_c_string("%s"),"CPanelTy::Update4PanelWB");
    if (iVar15 == 0) {
      st::fn_006A5E40(iVar8,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x497);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pCVar1 = &local_80->field_0BF5;
  pCVar19 = pCVar1;
  pCVar24 = &local_7c;
  memmove(pCVar24, pCVar19, 0x5c); /* compiler REP MOVS byte copy */
  iVar16 = 0;
  pCVar19 = pCVar1;
  for (iVar16 = 0x17; iVar16 != 0; iVar16 = iVar16 + -1) {
    *pCVar19 = CASE_0;
    pCVar19 = pCVar19 + 1;
  }
  /* ST_CALLSITE[00507FC8]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
  st::fn_004035BC(g_allPlayers_007FA174,4,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  CVar2 = this_00->field_0BFA;
  if ((local_77 != CVar2) || (local_76 != this_00->field_0BFB)) {
cf_common_exit_005091B9:
    /* ST_CALLSITE[005091BD]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
    st::fn_004046BF(this_00,1);
    /* ST_CALLSITE[005091C6]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
    st::fn_00402D83(this_00,'\x01');
    /* ST_CALLSITE[005091CD]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
    st::fn_00405BA0(this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if ((this_00->field_0BFB == '\x02') && (CVar2 == CASE_1)) {
    cVar14 = '\0';
    cVar17 = '\0';
    iVar16 = 0;
    do {
      if ((&this_00->field_0BFE)[iVar16] != '\0') {
        cVar17 = cVar17 + '\x01';
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 6);
    iVar16 = 0;
    do {
      if (*(char *)((int)local_73 + iVar16) != '\0') {
        cVar14 = cVar14 + '\x01';
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 6);
    if (cVar17 == cVar14) {
      iVar16 = 3;
      bVar28 = true;
      psVar21 = (short *)&this_00->field_0BFE;
      psVar25 = local_73;
      do {
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        bVar28 = *psVar21 == *psVar25;
        psVar21 = psVar21 + 1;
        psVar25 = psVar25 + 1;
      } while (bVar28);
      if (bVar28) {
        if (this_00->field_0BFD != local_74) {
          /* ST_CALLSITE[005080BB]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
          st::fn_00404BA1(this_00,'\0');
        }
      }
      else {
        this_00->field_0028 = 5;
        st::fn_006E6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
        local_8 = (byte *)((uint)local_8 & 0xffffff00);
        pcVar20 = (char *)&this_00->field_0BFE;
        do {
          if (*pcVar20 != '\0') {
            /* ST_CALLSITE[00508082]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
            st::fn_0040313E(this_00,0,(byte)local_8);
          }
          bVar7 = (byte)local_8 + 1;
          pcVar20 = pcVar20 + 1;
          local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
        } while (bVar7 < 6);
        /* ST_CALLSITE[00508098]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
        st::fn_00404BA1(this_00,'\0');
        /* ST_CALLSITE[005080A3]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
        st::fn_004040FC(g_cursorClass_00802A30);
      }
      iVar16 = 3;
      bVar28 = true;
      psVar21 = (short *)&this_00->field_0C04;
      psVar25 = local_73 + 3;
      do {
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        bVar28 = *psVar21 == *psVar25;
        psVar21 = psVar21 + 1;
        psVar25 = psVar25 + 1;
      } while (bVar28);
      if ((!bVar28) || (this_00->field_0BFC != local_75)) {
        /* ST_CALLSITE[005080F1]: CALL 0x00404f89; direct=00404F89 CPanelTy::sub_004F4570 */
        st::fn_00404F89(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_7c);
      }
    }
    else {
      /* ST_CALLSITE[00508031]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
      st::fn_00402D83(this_00,'\x01');
    }
    if (((this_00->field_0C0A != local_67) || (this_00->field_0BFC != local_75)) &&
       (this_00->field_09C0[1] != 0)) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar10;
      st::fn_006E6080(this_00,2,this_00->field_09C0[1],(undefined4 *)&this_00->field_0x18);
    }
    if (*(int *)&this_00->field_0xc12 == local_5f) {
      iVar16 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
               *(int *)(this_00->field_09D9[5] + 4)) / 2;
      if (this_00->field_0C24 != local_4d[0]) {
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x36,0x5d,7,
                     0x21,0);
        bVar7 = this_00->field_0C24;
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar7));
        cVar14 = (char)(((uint)bVar7 * 0x21) / 100);
        local_10 = (byte *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(cVar14));
        if ((bVar7 != 0) && (cVar14 == '\0')) {
          local_10 = (byte *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(1));
        }
        if (bVar7 < 0x46) {
          iVar18 = (-(uint)(bVar7 < 0x14) & 5) + 5;
        }
        else {
          iVar18 = 0;
        }
        uVar10 = (uint)local_10 & 0xff;
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x37,
                   0x7e - uVar10,(byte *)this_00->field_028A,0,iVar18,
                   *(int *)(this_00->field_028A + 4) - uVar10,5,uVar10);
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x3f,0x5c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0xc,0x75,0x11);
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x3f,0x6c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0x1c,0x44,0x13);
        /* ST_CALLSITE[00508295]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
        st::fn_00404C7D(this_00,this_00->field_0194,iVar16 + 0x41,0x5d,this_00->field_0C24,0x2714);
        /* ST_CALLSITE[005082BA]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
        st::fn_00405A8D(this_00,this_00->field_0194,iVar16 + 0x41,0x68,this_00->field_0C1C,
                     this_00->field_0C20,4,2);
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
    }
    else {
      /* ST_CALLSITE[0050815F]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
      st::fn_004046BF(this_00,1);
      /* ST_CALLSITE[00508168]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
      st::fn_00402D83(this_00,'\0');
      /* ST_CALLSITE[0050816F]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
      st::fn_00405BA0(this_00);
    }
    if (this_00->field_0C4D == local_24) {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
    /* ST_CALLSITE[005082F5]: CALL 0x004019b5; direct=004019B5 CPanelTy::PaintIDSObj */
    st::fn_004019B5(this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if (CVar2 != CASE_1) {
    if (CVar2 != CASE_4) {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
    if (local_7c == this_00->field_0BF5) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FD:
      case CASE_FE:
        goto switchD_00508349_caseD_dd;
      default:
        g_currentExceptionFrame = local_c4.previous;
        return;
      }
    }
    goto cf_common_exit_005091B9;
  }
  if ((local_7c != this_00->field_0BF5) || (local_78 != this_00->field_0BF9))
  goto cf_common_exit_005091B9;
  cVar14 = '\0';
  cVar17 = '\0';
  iVar16 = 0;
  do {
    if ((&this_00->field_0BFE)[iVar16] != '\0') {
      cVar17 = cVar17 + '\x01';
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 6);
  iVar16 = 0;
  do {
    if (*(char *)((int)local_73 + iVar16) != '\0') {
      cVar14 = cVar14 + '\x01';
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 6);
  if (cVar17 == cVar14) {
    iVar16 = 3;
    bVar28 = true;
    psVar21 = (short *)&this_00->field_0BFE;
    psVar25 = local_73;
    do {
      if (iVar16 == 0) break;
      iVar16 = iVar16 + -1;
      bVar28 = *psVar21 == *psVar25;
      psVar21 = psVar21 + 1;
      psVar25 = psVar25 + 1;
    } while (bVar28);
    if (bVar28) {
      if (this_00->field_0BFD != local_74) {
        /* ST_CALLSITE[00508481]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
        st::fn_00404BA1(this_00,'\0');
      }
    }
    else {
      this_00->field_0028 = 5;
      st::fn_006E6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
      local_8 = (byte *)((uint)local_8 & 0xffffff00);
      pcVar20 = (char *)&this_00->field_0BFE;
      do {
        if (*pcVar20 != '\0') {
          /* ST_CALLSITE[00508448]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
          st::fn_0040313E(this_00,0,(byte)local_8);
        }
        bVar7 = (byte)local_8 + 1;
        pcVar20 = pcVar20 + 1;
        local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
      } while (bVar7 < 6);
      /* ST_CALLSITE[0050845E]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
      st::fn_00404BA1(this_00,'\0');
      /* ST_CALLSITE[00508469]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
      st::fn_004040FC(g_cursorClass_00802A30);
    }
    iVar16 = 3;
    bVar28 = true;
    psVar21 = (short *)&this_00->field_0C04;
    psVar25 = local_73 + 3;
    do {
      if (iVar16 == 0) break;
      iVar16 = iVar16 + -1;
      bVar28 = *psVar21 == *psVar25;
      psVar21 = psVar21 + 1;
      psVar25 = psVar25 + 1;
    } while (bVar28);
    if ((!bVar28) || (this_00->field_0BFC != local_75)) {
      /* ST_CALLSITE[005084B7]: CALL 0x00404f89; direct=00404F89 CPanelTy::sub_004F4570 */
      st::fn_00404F89(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_7c);
    }
  }
  else {
    /* ST_CALLSITE[005083F7]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
    st::fn_00402D83(this_00,'\x01');
  }
  if (((this_00->field_0C0A != local_67) || (this_00->field_0BFC != local_75)) &&
     (this_00->field_09C0[1] != 0)) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar10;
    st::fn_006E6080(this_00,2,this_00->field_09C0[1],(undefined4 *)&this_00->field_0x18);
  }
  if (((this_00->field_0BF5 == CASE_43) || (this_00->field_0BF5 == CASE_4C)) &&
     ((this_00->field_0C11 != local_60 || (this_00->field_0BFC != local_75)))) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      iVar16 = 0;
    }
    else {
      iVar16 = (-(uint)(this_00->field_0C11 != CASE_0) & 2) + 1;
    }
    *(int *)&this_00->field_0x2c = iVar16;
    st::fn_006E6080(this_00,2,this_00->field_0308[1],(undefined4 *)&this_00->field_0x18);
  }
  switch(this_00->field_0BF5) {
  case CASE_32:
  case CASE_40:
  case CASE_44:
  case CASE_49:
    if ((*(int *)&this_00->field_0xc12 == local_5f) && (this_00->field_0C26 == local_4b)) {
      iVar16 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
               *(int *)(this_00->field_09D9[5] + 4)) / 2;
      if (this_00->field_0C24 != local_4d[0]) {
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x36,0x5d,7,
                     0x21,0);
        bVar7 = this_00->field_0C24;
        cVar14 = (char)(((uint)bVar7 * 0x21) / 100);
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(cVar14));
        if ((bVar7 != 0) && (cVar14 == '\0')) {
          local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
        }
        if (bVar7 < 0x46) {
          iVar18 = (-(uint)(bVar7 < 0x14) & 5) + 5;
        }
        else {
          iVar18 = 0;
        }
        uVar10 = local_c & 0xff;
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x37,
                   0x7e - uVar10,(byte *)this_00->field_028A,0,iVar18,
                   *(int *)(this_00->field_028A + 4) - uVar10,5,uVar10);
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x3f,0x5c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0xc,0x75,0x11);
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x3f,0x6c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0x1c,0x44,0x13);
        /* ST_CALLSITE[005089B4]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
        st::fn_00404C7D(this_00,this_00->field_0194,iVar16 + 0x41,0x5d,this_00->field_0C24,0x2714);
        /* ST_CALLSITE[005089D9]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
        st::fn_00405A8D(this_00,this_00->field_0194,iVar16 + 0x41,0x68,this_00->field_0C1C,
                     this_00->field_0C20,4,2);
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
      if ((this_00->field_0BF5 != CASE_44) || (this_00->field_0C34 == local_3d))
      goto cf_common_exit_00509192;
      /* ST_CALLSITE[00508A3F]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
             (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[10] + 4)) / 2,0x37,'\x01',
             (byte *)this_00->field_09D9[10]);
      uVar10 = (uint)(ushort)this_00->field_0C34;
      pcVar17 = st::fn_006B0140(0x2725,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00508A6C]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&1%s &0%d"),pcVar17,uVar10);
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x56,0x39,0x6d,0x15);
      st::fn_00711B70(this_00->field_01B8,(char *)&DAT_0080f33a,-2,-1,0,-1,-1);
      puVar13 = this_00->field_0148[5];
      if ((int)puVar13 < 0) goto cf_common_exit_00509192;
      uVar10 = this_00->field_00A8;
      uVar29 = this_00->field_0050;
      goto cf_common_exit_0050918D;
    }
    iVar16 = 0;
    goto LAB_00508b35;
  case CASE_33:
    if ((*(int *)&this_00->field_0xc12 == local_5f) && (this_00->field_0C16 == local_5b)) {
      iVar16 = 0x3a;
      local_c = 2;
      local_18 = &this_00->field_0C1C;
      local_10 = local_4d;
      local_8 = &this_00->field_0C24;
      iVar18 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4)) / 2;
      do {
        if (*local_8 != *local_10) {
          st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar18 + 0x36,iVar16,7
                       ,0x21,0);
          bVar7 = *local_8;
          local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar7));
          cVar14 = (char)(((uint)bVar7 * 0x21) / 100);
          local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)(cVar14));
          if ((bVar7 != 0) && (cVar14 == '\0')) {
            local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)(1));
          }
          if (bVar7 < 0x46) {
            local_14 = (-(uint)(bVar7 < 0x14) & 5) + 5;
          }
          else {
            local_14 = 0;
          }
          uVar10 = local_20 & 0xff;
          st::fn_006B55F0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar18 + 0x37,
                     (iVar16 - uVar10) + 0x21,(byte *)this_00->field_028A,0,local_14,
                     *(int *)(this_00->field_028A + 4) - uVar10,5,uVar10);
          st::fn_006B55F0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar18 + 0x3f,
                     iVar16 + -1,(byte *)this_00->field_09D9[5],0,0x3f,0xc,0x75,0x11);
          st::fn_006B55F0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar18 + 0x3f,
                     iVar16 + 0xf,(byte *)this_00->field_09D9[5],0,0x3f,0x1c,0x44,0x13);
          /* ST_CALLSITE[005087FB]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
          st::fn_00404C7D(this_00,this_00->field_0194,iVar18 + 0x41,iVar16,100 - *local_8,0x36b1);
          /* ST_CALLSITE[00508821]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
          st::fn_00405A8D(this_00,this_00->field_0194,iVar18 + 0x41,iVar16 + 0xb,*local_18,local_18[2],
                       4,2);
          if (-1 < (int)this_00->field_0148[5]) {
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                       this_00->field_0050,this_00->field_00A8);
          }
        }
        local_18 = local_18 + 1;
        local_10 = local_10 + 1;
        local_8 = local_8 + 1;
        iVar16 = iVar16 + 0x23;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      goto cf_common_exit_00509192;
    }
    break;
  case CASE_34:
    /* ST_CALLSITE[00508E7F]: CALL 0x00403526; direct=00403526 CPanelTy::PaintMunition */
    st::fn_00403526(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[8] + 4))
                          / 2);
    local_10 = &this_00->field_0xa2e;
    iVar16 = 0;
    puVar23 = this_00->field_0A15;
    do {
      if (*puVar23 != 0) {
        if (DAT_0080874e == '\x01') {
          GVar9 = (this_00->field_09D4 != '\x01') + CASE_1;
        }
        else {
          GVar9 = CASE_2 - (this_00->field_09D4 != '\x01');
        }
        uVar12 = st::fn_004034BD(GVar9,(Global_sub_00525EF0_param_2Enum)iVar16);
        *(undefined4 *)local_10 = uVar12;
        if (this_00->field_0BFC == local_75) {
          this_00->field_0028 = 5;
          uVar10 = *puVar23;
        }
        else {
          this_00->field_0028 = 0x20;
          *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
          uVar10 = *puVar23;
        }
        st::fn_006E6080(this_00,2,uVar10,(undefined4 *)&this_00->field_0x18);
      }
      iVar16 = iVar16 + 1;
      local_10 = local_10 + 0x27;
      puVar23 = puVar23 + 1;
    } while (iVar16 < 6);
    puVar13 = this_00->field_0148[5];
    if ((int)puVar13 < 0) goto cf_common_exit_00509192;
    uVar10 = this_00->field_00A8;
    uVar29 = this_00->field_0050;
    goto cf_common_exit_0050918D;
  case CASE_35:
    iVar16 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    if (this_00->field_0C31 == local_40) {
      if (this_00->field_0C31 == '\0') {
        if (this_00->field_0C2F != local_42) {
          /* ST_CALLSITE[00508BAF]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
          st::fn_004046BF(this_00,1);
          iVar16 = this_00->field_0302;
          if (iVar16 != 0) {
            memset(local_e4, 0, 0x20); /* compiler bulk-zero initialization */
            local_d4 = 5;
            st::fn_006E6080(this_00,2,iVar16,local_e4);
          }
        }
        goto cf_common_exit_00509192;
      }
      if (this_00->field_0C33 == local_3e) goto cf_common_exit_00509192;
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x39,0x65,
                 (byte *)this_00->field_09D9[5],0,0x39,0x15,0x4c,0x1b);
      /* ST_CALLSITE[00508B82]: CALL 0x00405862; direct=00405862 CPanelTy::PaintPerRes */
      st::fn_00405862(this_00,iVar16);
      puVar13 = this_00->field_0148[5];
      goto joined_r0x00508b00;
    }
    break;
  case CASE_36:
  case CASE_37:
  case CASE_43:
  case CASE_45:
  case CASE_48:
  case CASE_4C:
  case CASE_4D:
  case CASE_4E:
  case CASE_6F:
    if (this_00->field_0C29 == local_48) goto cf_common_exit_00509192;
    iVar16 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[7] + 4)) / 2;
    if (this_00->field_0C29 == CASE_FF) {
      this_00->field_0C29 = CASE_0;
    }
    if (CASE_28 < this_00->field_0C29) {
      this_00->field_0C29 = CASE_28;
    }
    local_8 = (byte *)((uint)STPiece<1,3>(local_8) << 8);
    if (this_00->field_0C29 != CASE_0) {
      do {
        pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        /* ST_CALLSITE[00508611]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
               iVar16 + 6 + ((uint)local_8 & 0xff) * 4,0x75,'\x01',(byte *)pBVar11);
        CVar8 = (byte)local_8 + 1;
        local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(CVar8));
      } while (CVar8 < this_00->field_0C29);
    }
    if ((byte)local_8 < 0x28) {
      iVar18 = 0x28 - ((uint)local_8 & 0xff);
      iVar16 = iVar16 + 6 + ((uint)local_8 & 0xff) * 4;
      do {
        pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050865F]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar16,0x75,'\x01',
               (byte *)pBVar11);
        iVar16 = iVar16 + 4;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    puVar13 = this_00->field_0148[5];
    goto joined_r0x00508b00;
  case CASE_38:
  case CASE_39:
  case CASE_4F:
    /* ST_CALLSITE[00508AF3]: CALL 0x00403e4f; direct=00403E4F CPanelTy::PaintMineInf */
    st::fn_00403E4F(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4))
                         / 2);
    puVar13 = this_00->field_0148[5];
joined_r0x00508b00:
    if (-1 < (int)puVar13) {
LAB_00509179:
      uVar10 = this_00->field_00A8;
      uVar29 = this_00->field_0050;
cf_common_exit_0050918D:
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,(uint)puVar13,0xffffffff,uVar29,uVar10);
    }
    goto cf_common_exit_00509192;
  case CASE_3A:
    iVar16 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4)) / 2;
    if (this_00->field_0C3A != local_37) {
      local_8 = (byte *)((uint)STPiece<1,3>(local_8) << 8);
      if (this_00->field_0C3A != '\0') {
        do {
          pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
          /* ST_CALLSITE[00508C4D]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
                 iVar16 + 0x70 + ((uint)local_8 & 0xff) * 4,0x54,'\x01',(byte *)pBVar11);
          bVar7 = (byte)local_8 + 1;
          local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
        } while (bVar7 < (byte)this_00->field_0C3A);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar18 = iVar16 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[00508C9E]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18,0x54,'\x01',
                 (byte *)pBVar11);
          iVar18 = iVar18 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (this_00->field_0C3B != local_36) {
      local_8 = (byte *)((uint)local_8 & 0xffffff00);
      if (this_00->field_0C3B != '\0') {
        do {
          pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
          /* ST_CALLSITE[00508D16]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
                 iVar16 + 0x70 + ((uint)local_8 & 0xff) * 4,0x5f,'\x01',(byte *)pBVar11);
          bVar7 = (byte)local_8 + 1;
          local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
        } while (bVar7 < (byte)this_00->field_0C3B);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar18 = iVar16 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[00508D67]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18,0x5f,'\x01',
                 (byte *)pBVar11);
          iVar18 = iVar18 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (this_00->field_0C34 == local_3d) goto cf_common_exit_00509192;
    local_8 = (byte *)((uint)local_8 & 0xffffff00);
    local_c = ((uint)(ushort)this_00->field_0C34 * 0x28) / 400;
    if (local_c != 0) {
      uVar10 = 0;
      do {
        pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,2);
        /* ST_CALLSITE[00508DEE]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar16 + 0xb + uVar10 * 4,0x76,
               '\x01',(byte *)pBVar11);
        bVar7 = (byte)local_8 + 1;
        local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
        uVar10 = (uint)bVar7;
      } while (uVar10 < local_c);
    }
    if ((byte)local_8 < 0x28) {
      iVar16 = iVar16 + 0xb + ((uint)local_8 & 0xff) * 4;
      iVar18 = 0x28 - ((uint)local_8 & 0xff);
      do {
        pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[00508E42]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar16,0x76,'\x01',
               (byte *)pBVar11);
        iVar16 = iVar16 + 4;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    puVar13 = this_00->field_0148[5];
    goto joined_r0x00509177;
  default:
    goto cf_common_exit_00509192;
  case CASE_3C:
    CVar3 = this_00->field_0C3C;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(CVar3));
    if (local_35 != CVar3) {
      /* ST_CALLSITE[00508FDE]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
      st::fn_004046BF(this_00,1);
      /* ST_CALLSITE[00508FE7]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
      st::fn_00402D83(this_00,'\x01');
      /* ST_CALLSITE[00508FEE]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
      st::fn_00405BA0(this_00);
      goto cf_common_exit_00509192;
    }
    pbVar4 = (byte *)this_00->field_09D9[5];
    pRVar5 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
    iVar16 = (pRVar5->field_0004 - *(int *)(pbVar4 + 4)) / 2;
    if (CVar3 == CASE_1) {
      st::fn_006B55F0(pRVar5,0,iVar16 + 0x39,0x65,pbVar4,0,0x39,0x15,0x4c,0x1b);
      /* ST_CALLSITE[005090D7]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
      st::fn_00404C7D(this_00,this_00->field_0194,iVar16 + 0x39,0x65,(byte)this_00->field_0C3D,
                    0x2714);
      local_14 = 0;
      uVar10 = (uint)(this_00->field_0C3D * 0x28) / 100;
      if (uVar10 != 0) {
        iVar18 = iVar16 + 0xb;
        local_14 = uVar10;
        local_c = uVar10;
        do {
          pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
          /* ST_CALLSITE[0050911F]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18,0x5c,'\x01',
                 (byte *)pBVar11);
          iVar18 = iVar18 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (local_14 < 0x28) {
        iVar16 = iVar16 + 0xb + local_14 * 4;
        iVar18 = 0x28 - local_14;
        do {
          pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[00509161]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar16,0x5c,'\x01',
                 (byte *)pBVar11);
          iVar16 = iVar16 + 4;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
    }
    else if (CVar3 == CASE_2) {
      st::fn_006B55F0
                (pRVar5,0,iVar16,0x71,pbVar4,0,0,0x21,*(int *)(pbVar4 + 4),
                 *(int *)(pbVar4 + 8) + -0x21);
      /* ST_CALLSITE[00509057]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),this_00->field_0C3D);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00710A90(this_00->field_01BC,this_00->field_0194,0,iVar16,0x71,
                       *(int *)(this_00->field_09D9[5] + 4),
                       *(int *)(this_00->field_09D9[5] + 8) + -0x21);
      st::fn_007119C0(this_00->field_01BC,(char *)&DAT_0080f33a,-1,-1,0);
    }
    puVar13 = this_00->field_0148[5];
joined_r0x00509177:
    if ((int)puVar13 < 0) goto cf_common_exit_00509192;
    goto LAB_00509179;
  case CASE_50:
    iVar16 = 3;
    bVar28 = true;
    pCVar22 = &this_00->field_0C11;
    pCVar27 = &local_60;
    do {
      if (iVar16 == 0) break;
      iVar16 = iVar16 + -1;
      bVar28 = *(undefined2 *)pCVar22 == *(undefined2 *)pCVar27;
      pCVar22 = pCVar22 + 2;
      pCVar27 = pCVar27 + 2;
    } while (bVar28);
    if (!bVar28) {
      puVar23 = this_00->field_0A15;
      iVar16 = 6;
      do {
        if (*puVar23 != 0) {
          if (this_00->field_0BFC == local_75) {
            this_00->field_0028 = 5;
            uVar10 = *puVar23;
          }
          else {
            this_00->field_0028 = 0x20;
            *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
            uVar10 = *puVar23;
          }
          st::fn_006E6080(this_00,2,uVar10,(undefined4 *)&this_00->field_0x18);
        }
        puVar23 = puVar23 + 1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    goto cf_common_exit_00509192;
  }
  iVar16 = 1;
LAB_00508b35:
  /* ST_CALLSITE[00508B37]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
  st::fn_004046BF(this_00,iVar16);
  /* ST_CALLSITE[00508B40]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
  st::fn_00402D83(this_00,'\0');
  /* ST_CALLSITE[00508B47]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
  st::fn_00405BA0(this_00);
cf_common_exit_00509192:
  if (this_00->field_0C4D == local_24) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  /* ST_CALLSITE[005091A1]: CALL 0x004019b5; direct=004019B5 CPanelTy::PaintIDSObj */
  st::fn_004019B5(this_00);
  g_currentExceptionFrame = local_c4.previous;
  return;
switchD_00508349_caseD_dd:
  /* ST_CALLSITE[00508354]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
  st::fn_004046BF(this_00,1);
  iVar16 = this_00->field_0302;
  if (iVar16 == 0) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  memset(local_104, 0, 0x20); /* compiler bulk-zero initialization */
  local_f4 = 5;
  st::fn_006E6080(this_00,2,iVar16,local_104);
  g_currentExceptionFrame = local_c4.previous;
  return;
}

// 005097E0 CPanelTy::SetControlObj
#line 4 "decomp/ST.exe/functions/005097E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetControlObj

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall st::fn_005097E0(CPanelTy *this,char param_1)

{
  CPanelTy_field_0BFAState CVar1;
  char cVar2;
  CPanelTy *this_00;
  Global_sub_00525EF0_param_1Enum GVar4;
  int iVar5;
  char *pcVar5_mg0;
  LPSTR pCVar5;
  uint uVar6;
  uint *puVar7;
  int iVar12;
  uint uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar13;
  uint *puVar14;
  byte *puVar15;
  uint uVar16;
  uint uVar17;
  short sVar18;
  ushort uVar19;
  ushort uVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  uint uVar24;
  AnonShape_004F2E40_DC76A8C6 local_b44 [7];
  undefined4 local_25c [84];
  InternalExceptionFrame local_10c;
  undefined4 local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 *local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_28;
  AnonShape_004F2E40_DC76A8C6 *local_24;
  CPanelTy *local_20;
  Global_sub_00529590_param_1Enum *local_1c;
  uint *local_18;
  int local_14;
  uint local_10;
  byte *local_c;
  uint *local_8;

  local_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_10c;
  local_20 = this;
  iVar5 = st::fn_0072D7F0(local_10c.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_10c.previous;
    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x53e,0,iVar5,
                                st::mutable_c_string("%s"),"CPanelTy::SetControlObj");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x53e);
    return;
  }
  if (param_1 != '\0') {
    /* ST_CALLSITE[0050982F]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
    st::fn_004040FC(g_cursorClass_00802A30);
  }
  this_00 = local_20;
  if (local_20->field_0302 != 0) {
    st::fn_006E56B0(local_20->field_000C,local_20->field_0302);
  }
  uVar6 = this_00->field_0308[1];
  this_00->field_0302 = 0;
  if (uVar6 != 0) {
    st::fn_006E56B0(this_00->field_000C,uVar6);
  }
  puVar14 = this_00->field_0310 + 1;
  this_00->field_0308[1] = 0;
  local_18 = puVar14;
  if (this_00->field_0310[1] != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_0310[1]);
  }
  *puVar14 = 0;
  if (this_00->field_0310[2] != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_0310[2]);
  }
  uVar6 = this_00->field_09D0;
  this_00->field_0310[2] = 0;
  if (uVar6 != 0) {
    st::fn_006E56B0(this_00->field_000C,uVar6);
  }
  this_00->field_09D0 = 0;
  puVar14 = this_00->field_0A15;
  iVar10 = 6;
  do {
    if (*puVar14 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar14);
      *puVar14 = 0;
    }
    puVar14 = puVar14 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  CVar1 = this_00->field_0BFA;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_3)) || (CVar1 == CASE_4)) {
    uVar6 = this_00->field_09C0[1];
    if (uVar6 != 0) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 0;
      st::fn_006E6080(this_00,2,uVar6,(undefined4 *)&this_00->field_0x18);
    }
  }
  else {
    local_10 = local_10 & 0xffffff00;
    memset(local_70, 0, 0x50); /* compiler bulk-zero initialization */
    local_c = &this_00->field_0x86a;
    local_1c = st::pointer_boundary_cast<Global_sub_00529590_param_1Enum *>(&this_00->field_0BFE);
    iVar10 = -0xbff - (int)this_00;
    local_14 = iVar10;
    do {
      if (*local_1c == 0) goto LAB_00509a02;
      iVar13 = 0xe;
      iVar11 = 0xf;
      switch(static_cast<uint32_t>(STRawWord(local_1c + iVar10))) {
      case 0:
        iVar13 = 0x4b;
        break;
      case 0x1:
        iVar13 = 0x88;
        break;
      case 0x2:
        goto switchD_00509942_caseD_2;
      case 0x3:
        iVar13 = 0x88;
        goto switchD_00509942_caseD_2;
      case 0x4:
        iVar13 = 0x4b;
switchD_00509942_caseD_2:
        iVar11 = 0x37;
      }
      /* ST_CALLSITE[00509970]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
      st::fn_0040313E(this_00,0,(byte)local_10);
      if (this_00->field_0BFC == '\0') {
        local_8 = nullptr;
      }
      else {
        local_8 = (uint *)(uint)local_1c[6];
      }
      pcVar23 = nullptr;
      uVar20 = 0;
      uVar19 = 1;
      iVar10 = 0;
      puVar15 = local_c;
      pcVar5_mg0 = st::fn_00405493(*local_1c,this_00->field_0BF5);
      pCVar5 = st::fn_0040577C(pcVar5_mg0,iVar10);
      /* ST_CALLSITE[005099DD]: CALL 0x004041ba; direct=004041BA CPanelTy::SetButStruct */
      st::fn_004041BA(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)local_b44 + local_28 * 0x17c),5,
                   st::machine_word_boundary_cast<undefined4>(local_8),iVar13,iVar11,1,pCVar5,uVar19,uVar20,st::machine_word_boundary_cast<undefined4>(puVar15),pcVar23);
      iVar10 = local_28 * 0x17c;
      local_28 = local_28 + 1;
      *(undefined4 *)((int)local_b44 + iVar10 + 0x110) = 1;
      iVar10 = local_14;
LAB_00509a02:
      bVar9 = (char)local_10 + 1;
      local_c = local_c + 0x27;
      local_1c = local_1c + 1;
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar9));
    } while (bVar9 < 6);
    local_60 = this_00->field_0008;
    local_24 = local_b44;
    local_70[0] = 1;
    local_70[1] = 0xffffffff;
    local_5c = 2;
    local_58 = 0xb203;
    local_3c = 2;
    local_38 = 0xb204;
    local_40 = local_60;
    /* ST_CALLSITE[00509A6F]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,9,&this_00->field_0302,nullptr,st::machine_word_boundary_cast<undefined4>(local_70),0);
    /* ST_CALLSITE[00509A76]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
    st::fn_00404BA1(this_00,'\0');
    uVar6 = this_00->field_09C0[1];
    if (uVar6 != 0) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar8;
      st::fn_006E6080(this_00,2,uVar6,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_0BFB == '\x02') {
LAB_00509b60:
      uVar24 = 0;
      uVar22 = 0;
      iVar11 = 0;
      pcVar23 = nullptr;
      iVar10 = 0;
      uVar19 = 0;
      sVar18 = 0;
      uVar17 = 0xb13f;
      uVar16 = 0xb12f;
      pCVar5 = st::fn_0040577C(st::mutable_c_string("BUT_SMALL"),0);
      /* ST_CALLSITE[00509BA5]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar6 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x92,0x6e,1,pCVar5,uVar16,
                        uVar17,sVar18,uVar19,iVar10,pcVar23,iVar11,uVar22,uVar24);
      *local_18 = uVar6;
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
    switch(this_00->field_0BF5) {
    case CASE_32:
    case CASE_40:
    case CASE_44:
    case CASE_49:
      if (*(int *)&this_00->field_0xc12 != 0) goto LAB_00509b60;
      break;
    case CASE_33:
      iVar10 = 0xb12f;
      local_c = (undefined1 *)0x4c;
      local_8 = (uint *)0x2;
      puVar14 = local_18;
      do {
        if (STField<int>(puVar14,0x8fe) != 0) {
          uVar22 = 0;
          uVar17 = 0;
          iVar21 = 0;
          pcVar23 = nullptr;
          iVar13 = 0;
          uVar19 = 0;
          sVar18 = 0;
          uVar16 = 0xb13f;
          iVar11 = iVar10;
          pCVar5 = st::fn_0040577C(st::mutable_c_string("BUT_SMALL"),0);
          /* ST_CALLSITE[00509CE7]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
          uVar6 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x92,(int)local_c,1,
                            pCVar5,iVar11,uVar16,sVar18,uVar19,iVar13,pcVar23,iVar21,uVar17,uVar22);
          *puVar14 = uVar6;
        }
        puVar14 = puVar14 + 1;
        iVar10 = iVar10 + 1;
        local_c = (undefined1 *)((int)local_c + 0x22);
        local_8 = (uint *)((int)local_8 + -1);
      } while (local_8 != nullptr);
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_34:
      local_8 = (uint *)0x2;
      memset(local_c8, 0, 0x58); /* compiler bulk-zero initialization */
      iVar10 = 0;
      memset(local_25c, 0, 0x150); /* compiler bulk-zero initialization */
      local_14 = this_00->field_0138;
      puVar7 = local_25c + 1;
      iVar11 = st::machine_word_boundary_cast<int>(this_00->field_0050 + 99);
      iVar10 = 0;
      do {
        iVar13 = local_14;
        puVar7[-1] = iVar10 + 1;
        *puVar7 = 0;
        puVar7[2] = iVar11;
        puVar7[4] = 0x2e;
        iVar21 = DAT_00806734;
        if (iVar13 != 0) {
          iVar21 = this_00->field_00A8;
        }
        puVar7[3] = iVar21 + 0x22;
        puVar7[5] = 0x10;
        puVar7[0x11] = 0;
        puVar7[0x15] = 0x101;
        puVar7[10] = 0x101;
        puVar7[0x16] = 3;
        puVar7[0xb] = 3;
        puVar7[0xc] = 0x4201;
        puVar7[0x17] = 0x4202;
        *(undefined2 *)(puVar7 + 0x18) = 0;
        *(undefined2 *)(puVar7 + 0xd) = 0;
        STField<undefined2>(puVar7,0x62) = 2;
        STField<undefined2>(puVar7,0x36) = 2;
        if (iVar10 == 0) {
          uVar16 = 0x3aa6;
LAB_00509ddd:
          puVar7[0x19] = uVar16;
          puVar7[0xe] = uVar16;
        }
        else if (iVar10 == 1) {
          uVar16 = 0x3aa7;
          goto LAB_00509ddd;
        }
        iVar11 = iVar11 + 0x31;
        puVar7 = puVar7 + 0x1c;
        local_8 = (uint *)((int)local_8 + -1);
        iVar10 = iVar10 + 1;
        if (local_8 == nullptr) {
          local_80 = local_25c;
          local_7c = (uint)(byte)this_00->field_09D4;
          local_b8 = this_00->field_0008;
          local_c8[0] = 1;
          local_c8[1] = 1;
          local_78 = 1;
          local_74 = 1;
          local_b4 = 2;
          local_b0 = 0xb207;
          local_94 = 2;
          local_90 = 0xb206;
          local_98 = local_b8;
          /* ST_CALLSITE[00509E70]: CALL dword ptr [EDX + 0x8] */
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,5,&this_00->field_09D0,nullptr,st::machine_word_boundary_cast<undefined4>(local_c8)
                     ,0);
          local_c = (undefined1 *)((uint)local_c & 0xffffff00);
          local_10 = 0x3b;
          iVar10 = *(int *)(this_00->field_0194 + 4);
          iVar11 = *(int *)(this_00->field_09D9[8] + 4);
          puVar15 = &this_00->field_0xa2d;
          memset((void *)puVar15, 0, 0xea); /* compiler bulk-zero initialization */
          local_14 = (iVar10 - iVar11) / 2 + 8;
          local_8 = this_00->field_0A15;
          iVar10 = 0xb18f;
          do {
            *puVar15 = 2;
            if (DAT_0080874e == '\x01') {
              GVar4 = (this_00->field_09D4 != '\x01') + CASE_1;
            }
            else {
              GVar4 = CASE_2 - (this_00->field_09D4 != '\x01');
            }
            uVar16 = st::fn_004034BD(GVar4,(Global_sub_00525EF0_param_2Enum)local_c);
            *(undefined4 *)(puVar15 + 1) = uVar16;
            /* ST_CALLSITE[00509F30]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
            uVar6 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),local_14,local_10,0,
                              nullptr,iVar10,iVar10 + 0x10,1,0,(int)puVar15,nullptr,0x11,10,
                              0);
            puVar15 = puVar15 + 0x27;
            local_10 = local_10 + 0xb;
            *local_8 = uVar6;
            bVar9 = (char)local_c + 1;
            iVar10 = iVar10 + 1;
            local_8 = local_8 + 1;
            local_c = (undefined1 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar9));
          } while (bVar9 < 6);
          g_currentExceptionFrame = local_10c.previous;
          return;
        }
      } while( true );
    case CASE_35:
      if (this_00->field_0C31 != '\0') {
        uVar24 = 0;
        uVar22 = 0;
        iVar11 = 0;
        pcVar23 = nullptr;
        iVar10 = 0;
        uVar19 = 0;
        sVar18 = 0;
        uVar17 = 0xb13f;
        uVar16 = 0xb12f;
        pCVar5 = st::fn_0040577C(st::mutable_c_string("BUT_SMALL"),0);
        cVar2 = this_00->field_0BFC;
LAB_00509c11:
        /* ST_CALLSITE[00509C17]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
        uVar6 = st::fn_004017E9(this_00,5,0,(uint)(cVar2 != '\0'),0x92,0x6e,1,pCVar5,uVar16,uVar17,sVar18,
                          uVar19,iVar10,pcVar23,iVar11,uVar22,uVar24);
        *local_18 = uVar6;
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      break;
    case CASE_3C:
      if (this_00->field_0C3C == CASE_1) {
        uVar24 = 0;
        uVar22 = 0;
        iVar11 = 0;
        pcVar23 = nullptr;
        iVar10 = 0;
        uVar19 = 0;
        sVar18 = 0;
        uVar17 = 0xb13f;
        uVar16 = 0xb12f;
        pCVar5 = st::fn_0040577C(st::mutable_c_string("BUT_SMALL"),0);
        cVar2 = this_00->field_0BFC;
        goto LAB_00509c11;
      }
      break;
    case CASE_43:
    case CASE_4C:
      if (this_00->field_0BFC == '\0') {
        iVar10 = 0;
      }
      else {
        iVar10 = (-(uint)(this_00->field_0C11 != CASE_0) & 2) + 1;
      }
      uVar24 = 0;
      uVar22 = 0;
      iVar13 = 0;
      pcVar23 = nullptr;
      iVar11 = 0;
      uVar19 = 0;
      sVar18 = 0;
      uVar17 = 0xb12e;
      uVar16 = 0xb12d;
      pCVar5 = st::fn_0040577C(st::mutable_c_string("BUT_AUTO"),0);
      /* ST_CALLSITE[00509B32]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar6 = st::fn_004017E9(this_00,5,3,iVar10,-1,0x58,1,pCVar5,uVar16,uVar17,sVar18,uVar19,iVar11,
                        pcVar23,iVar13,uVar22,uVar24);
      this_00->field_0308[1] = uVar6;
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_50:
      iVar11 = 0xb17f;
      local_c = (undefined1 *)0x6;
      iVar10 = 0x3b;
      local_14 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[8] + 4)) / 2 + 8;
      local_8 = this_00->field_0A15;
      do {
        /* ST_CALLSITE[00509FE3]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
        uVar6 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),local_14,iVar10,0,
                          nullptr,iVar11 + -0x20,iVar11,2,0,0x4f20,nullptr,0xaa,10,
                          iVar11 + -0x10);
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 0xb;
        *local_8 = uVar6;
        local_8 = local_8 + 1;
        local_c = (undefined1 *)((int)local_c + -1);
      } while (local_c != nullptr);
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_10c.previous;
  return;
}

// 0050A340 CPanelTy::PaintCtrlObjSI
#line 4 "decomp/ST.exe/functions/0050A340/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintCtrlObjSI

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BFA uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BFAState. Cases:
   CASE_0=0;CASE_1=1;CASE_3=3;CASE_4=4;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0C11 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0C11State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_0C3C uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0C3CState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall st::fn_0050A340(CPanelTy *this)

{
  char cVar1;
  CPanelTy_field_0C11State CVar2;
  CPanelTy_field_0BF5State CVar3;
  CPanelTy *this_00;
  int iVar5;
  Global_sub_00529500_param_1Enum resourceId;
  char *pcVar7_mg1;
  UINT UVar5;
  char *pcVar7_mg0;
  uint local_EAX_1273;
  BITMAPINFO *pBVar6;
  UINT local_EAX_1554;
  char *pcVar7_mg2;
  uint *puVar7;
  char *pcVar7_mg14;
  char *pcVar7_mg13;
  char *pcVar7_mg12;
  char *pcVar7_mgE;
  char *pcVar7_mgF;
  uint local_EAX_2744;
  UINT local_EAX_3024;
  char *pcVar7_mg10;
  uint local_EAX_3436;
  UINT UVar9;
  char *pcVar7_mg9;
  ushort *puVar8;
  char *pcVar7_mg15;
  char *pcVar7_mgD;
  byte *pbVar9;
  char *pcVar7_mg4;
  char *pcVar7_mgB;
  char *pcVar7_mgC;
  char *pcVar7_mg6;
  char *pcVar7_mg7;
  char *pcVar7_mg8;
  uint uVar6;
  int iVar13;
  uint uVar10;
  uint uVar11;
  ccFntTy *this_01;
  int iVar12;
  byte *pbVar13;
  char *pcVar14;
  HINSTANCE pHVar15;
  RecoveredSourceFamily_dibcopy *pRVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  InternalExceptionFrame local_64;
  int local_20;
  CPanelTy *local_1c;
  uint local_18;
  byte *local_14;
  Global_sub_00526BA0_param_1Enum *local_10;
  uint local_c;
  byte *local_8;
  char *resourceString;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_1c = this;
  iVar5 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar13 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x6f0,0,iVar5,
                                st::mutable_c_string("%s"),"CPanelTy::PaintCtrlObjSI");
    if (iVar13 == 0) {
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x6f0);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(local_1c->field_0BFA) {
  case CASE_0:
  case CASE_3:
    /* ST_CALLSITE[0050A3A2]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0x46,'\x01',
           (byte *)local_1c->field_09D9[0]);
    /* ST_CALLSITE[0050A3BB]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0,'\x06',
           (byte *)this_00->field_09D9[9]);
    break;
  case CASE_1:
    if (local_1c->field_0BFB == '\x02') {
      /* ST_CALLSITE[0050A41F]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0,'\x06',
             (byte *)local_1c->field_09D9[0xb]);
      /* ST_CALLSITE[0050A438]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x46,'\x01',
             (byte *)this_00->field_09D9[2]);
      break;
    }
    /* ST_CALLSITE[0050A459]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0,'\x06',
           (byte *)local_1c->field_09D9[0xb]);
    switch(this_00->field_0BF5) {
    case CASE_53:
    case CASE_54:
    case CASE_55:
    case CASE_56:
    case CASE_57:
    case CASE_58:
    case CASE_59:
    case CASE_5A:
    case CASE_5C:
    case CASE_5D:
    case CASE_61:
    case CASE_63:
    case CASE_64:
    case CASE_6E:
    case CASE_70:
    case CASE_72:
    case CASE_73:
      pbVar13 = (byte *)this_00->field_09D9[2];
      pRVar16 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    case CASE_5B:
      pbVar13 = (byte *)this_00->field_09D9[3];
      pRVar16 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    case CASE_5E:
    case CASE_6D:
      pbVar13 = (byte *)this_00->field_09D9[1];
      pRVar16 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    default:
      pbVar13 = (byte *)this_00->field_09D9[0];
      goto LAB_0050a4e4;
    case CASE_62:
      pbVar13 = (byte *)this_00->field_09D9[7];
LAB_0050a4e4:
      pRVar16 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    case CASE_67:
    case CASE_68:
      pbVar13 = (byte *)this_00->field_09D9[5];
      pRVar16 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
    }
    /* ST_CALLSITE[0050A4F2]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229(pRVar16,0,0x46,'\x01',pbVar13);
    break;
  case CASE_4:
    /* ST_CALLSITE[0050A3DC]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0,'\x06',
           (byte *)local_1c->field_09D9[9]);
    /* ST_CALLSITE[0050A3F5]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x46,'\x01',
           (byte *)this_00->field_09D9[1]);
  }
  if (this_00->field_0BFA != CASE_1) {
    if (this_00->field_0BFA == CASE_4) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FE:
        /* ST_CALLSITE[0050A549]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2c,0x52,'\x01',
               (byte *)this_00->field_09D9[0xc]);
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,
                              (uint)this_00->field_0C11);
        /* ST_CALLSITE[0050A571]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2e,0x54,'\x01',(byte *)pBVar6);
        pbVar13 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[1],0,0x70,0x12
                                              ,0x62,0xd,0);
        if (pbVar13 != nullptr) {
          if (this_00->field_0BF5 == 0xfe) {
            resourceId = st::fn_004054CA(this_00->field_0C11);
          }
          else {
            resourceId = st::fn_004019BF(this_00->field_0BF5);
          }
          uVar10 = st::fn_004040C5(resourceId);
          iVar18 = -1;
          iVar12 = -1;
          pcVar7_mg1 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
          st::fn_007119C0(this_00->field_01B8,pcVar7_mg1,iVar12,iVar18,uVar10);
          /* ST_CALLSITE[0050A5F8]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x70,0x58,'\x01',pbVar13);
          st::fn_00710F00(this_00->field_01B8);
        }
        pbVar13 = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[1],0,0x78,0x23
                                              ,0x5a,0x14,0);
        if (pbVar13 != nullptr) {
          uVar10 = 0;
          /* ST_CALLSITE[0050A646]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%06d"),*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0C11) {
          case CASE_0:
            uVar10 = 4;
            break;
          case CASE_1:
          case CASE_3:
            uVar10 = 7;
            break;
          case CASE_2:
            uVar10 = 6;
            break;
          case CASE_4:
            uVar10 = 5;
          }
          st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,uVar10);
          /* ST_CALLSITE[0050A6A0]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x78,0x69,'\x01',pbVar13);
          st::fn_00710F00(this_00->field_01C4);
        }
        break;
      case CASE_FD:
        CVar2 = this_00->field_0C11;
        if ((CVar2 != CASE_0) && (CVar2 < 0x16)) {
          pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CE,CVar2 - 1);
          /* ST_CALLSITE[0050A6E7]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x29,0x51,'\x01',
                 (byte *)pBVar6);
        }
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,10);
        /* ST_CALLSITE[0050A70B]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x27,0x4f,'\x06',(byte *)pBVar6);
        pbVar13 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[1],0,0x5d,0xb,
                                              0x73,0x19,0);
        if (pbVar13 != nullptr) {
          iVar20 = -1;
          iVar19 = -1;
          uVar10 = 5;
          iVar18 = -1;
          iVar12 = -2;
          pHVar15 = g_hINSTANCE_00807618;
          UVar5 = st::fn_0040270C(this_00->field_0C11);
          pcVar7_mg0 = st::fn_006B0140(UVar5,pHVar15);
          st::fn_00711B70(this_00->field_01B8,pcVar7_mg0,iVar12,iVar18,uVar10,iVar19,iVar20);
          /* ST_CALLSITE[0050A777]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x5d,0x51,'\x01',pbVar13);
          st::fn_00710F00(this_00->field_01B8);
        }
        pbVar13 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[1],0,0x27,0x26
                                              ,0x9f,0x1c,0);
        if (pbVar13 != nullptr) {
          st::fn_00711B70(this_00->field_01B8,(char *)this_00->field_0C16,-2,-1,3,-1,-1);
          /* ST_CALLSITE[0050A7DF]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x27,0x6c,'\x01',pbVar13);
          st::fn_00710F00(this_00->field_01B8);
        }
      }
    }
    goto switchD_0050a52e_caseD_df;
  }
  if (this_00->field_0BFB == '\x02') {
    if (*(int *)&this_00->field_0xc12 != 0) {
      /* ST_CALLSITE[0050A826]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x28,0x50,'\x01',
             (byte *)this_00->field_09D9[0xe]);
      local_EAX_1273 =
           st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A);
      pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,local_EAX_1273
                           );
      /* ST_CALLSITE[0050A859]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2a,0x52,'\x01',(byte *)pBVar6);
      pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      /* ST_CALLSITE[0050A87D]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
      pbVar13 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
      local_14 = nullptr;
      if (pbVar13 != nullptr) {
        iVar12 = 0x35;
        local_14 = pbVar13;
        do {
          pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050A8D4]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
          pbVar13 = pbVar13 + -1;
        } while (pbVar13 != nullptr);
      }
      if (local_14 < (byte *)0x21) {
        iVar12 = (int)local_14 * 4 + 0x35;
        do {
          pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050A90C]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
        } while (iVar12 < 0xb9);
      }
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar15 = g_hINSTANCE_00807618;
      local_EAX_1554 =
           st::fn_00403684(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A,0);
      pcVar7_mg2 = st::fn_006B0140(local_EAX_1554,pHVar15);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar7_mg2;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar7_mg2 + 1;
        cVar1 = *pcVar7_mg2;
        pcVar7_mg2 = pcVar17;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar17 + -uVar10;
      pcVar14 = &this_00->field_01E1;
      memmove(pcVar14, pcVar17, uVar10); /* compiler REP MOVS byte copy */
      uVar11 = 0;
      for (puVar7 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
          puVar7 != nullptr; puVar7 = st::fn_0072E560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }
LAB_0050af64:
      st::fn_00711B70(this_00->field_01B8,&this_00->field_01E1,-2,-1,5,-1,-1);
      /* ST_CALLSITE[0050AF9D]: CALL 0x00402a3b; direct=00402A3B CPanelTy::PaintCostsXYSI */
      st::fn_00402A3B(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
    }
    goto switchD_0050a9c9_caseD_5f;
  }
  CVar3 = this_00->field_0BF5;
  switch(CVar3) {
  case CASE_53:
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
    switch(this_00->field_0C3C) {
    case CASE_0:
      UVar5 = 0x36bb;
      goto cf_common_exit_0050B38B;
    case CASE_1:
      /* ST_CALLSITE[0050AA41]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x27,0x51,'\x01',
             (byte *)this_00->field_09D9[0xd]);
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x15,0x6c,0xc3,0xb);
      iVar20 = -1;
      iVar19 = -1;
      uVar10 = 5;
      iVar18 = -1;
      iVar12 = -2;
      pcVar7_mg14 = st::fn_006B0140(0x36bd,g_hINSTANCE_00807618);
      st::fn_00711B70(this_00->field_01B8,pcVar7_mg14,iVar12,iVar18,uVar10,iVar19,iVar20);
      /* ST_CALLSITE[0050AAA8]: CALL 0x00404f1b; direct=00404F1B CPanelTy::PaintDamageXY */
      st::fn_00404F1B(this_00,this_00->field_0194,0x5c,0x50,(byte)this_00->field_0C3D,0x2714);
      pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      /* ST_CALLSITE[0050AAC9]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
      pbVar13 = (byte *)((uint)(this_00->field_0C3D * 0x21) / 100);
      local_8 = nullptr;
      if (pbVar13 != nullptr) {
        iVar12 = 0x35;
        local_8 = pbVar13;
        do {
          pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050AB17]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
          pbVar13 = pbVar13 + -1;
        } while (pbVar13 != nullptr);
      }
      if (local_8 < (byte *)0x21) {
        iVar12 = (int)local_8 * 4 + 0x35;
        do {
          pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050AB53]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
        } while (iVar12 < 0xb9);
      }
      break;
    case CASE_2:
      iVar20 = -1;
      iVar19 = -1;
      uVar10 = 5;
      iVar18 = -1;
      iVar12 = -2;
      pcVar7_mg13 = st::fn_006B0140(0x36bc,g_hINSTANCE_00807618);
      st::fn_00711B70(this_00->field_01B8,pcVar7_mg13,iVar12,iVar18,uVar10,iVar19,iVar20);
      pcVar17 = &this_00->field_01E1;
      /* ST_CALLSITE[0050ABA4]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(pcVar17,st::mutable_c_string("%4d"),this_00->field_0C3D);
      st::fn_00710A90(this_00->field_01BC,this_00->field_0194,0,0x28,0x79,0x9b,0xf);
      this_01 = this_00->field_01BC;
      uVar10 = 1;
      goto cf_common_exit_0050BD93;
    case CASE_3:
      UVar5 = 0x36be;
cf_common_exit_0050B38B:
      iVar20 = -1;
      iVar19 = -1;
      uVar10 = 5;
      iVar18 = -1;
      iVar12 = -2;
      pcVar7_mg15 = st::fn_006B0140(UVar5,g_hINSTANCE_00807618);
      st::fn_00711B70(this_00->field_01B8,pcVar7_mg15,iVar12,iVar18,uVar10,iVar19,iVar20);
      break;
    case CASE_4:
      if (this_00->field_0C31 != '\0') {
        /* ST_CALLSITE[0050AC08]: CALL 0x004052d6; direct=004052D6 CPanelTy::PaintNameResSI */
        st::fn_004052D6(this_00);
        /* ST_CALLSITE[0050AC0F]: CALL 0x00403ed1; direct=00403ED1 CPanelTy::PaintPerResSI */
        st::fn_00403ED1(this_00);
      }
    }
    break;
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
    if (this_00->field_0C31 == '\0') {
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
      if (this_00->field_0C2F == 0) goto LAB_0050b386;
      pcVar7_mg12 = st::fn_006B0140(0x273c,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0050AC89]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d %s"),(uint)(ushort)this_00->field_0C2F,pcVar7_mg12);
      st::fn_00711B70(this_00->field_01B8,(char *)&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    else {
      /* ST_CALLSITE[0050AC25]: CALL 0x004052d6; direct=004052D6 CPanelTy::PaintNameResSI */
      st::fn_004052D6(this_00);
      /* ST_CALLSITE[0050AC2C]: CALL 0x00403ed1; direct=00403ED1 CPanelTy::PaintPerResSI */
      st::fn_00403ED1(this_00);
    }
    break;
  case CASE_5B:
    /* ST_CALLSITE[0050BBC3]: CALL 0x00404697; direct=00404697 CPanelTy::PaintArsenal */
    st::fn_00404697(this_00);
    break;
  case CASE_5C:
  case CASE_6E:
    if (*(int *)&this_00->field_0xc12 != 0) {
      /* ST_CALLSITE[0050ADE5]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x28,0x50,'\x01',
             (byte *)this_00->field_09D9[0xe]);
      local_EAX_2744 =
           st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A);
      pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,local_EAX_2744
                           );
      /* ST_CALLSITE[0050AE18]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2a,0x52,'\x01',(byte *)pBVar6);
      pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      /* ST_CALLSITE[0050AE3C]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
      pbVar13 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
      local_14 = nullptr;
      if (pbVar13 != nullptr) {
        iVar12 = 0x35;
        local_14 = pbVar13;
        do {
          pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050AE93]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
          pbVar13 = pbVar13 + -1;
        } while (pbVar13 != nullptr);
      }
      if (local_14 < (byte *)0x21) {
        iVar12 = (int)local_14 * 4 + 0x35;
        do {
          pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050AECB]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
        } while (iVar12 < 0xb9);
      }
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar15 = g_hINSTANCE_00807618;
      local_EAX_3024 =
           st::fn_00403684(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A,0);
      pcVar7_mg10 = st::fn_006B0140(local_EAX_3024,pHVar15);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar7_mg10;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar7_mg10 + 1;
        cVar1 = *pcVar7_mg10;
        pcVar7_mg10 = pcVar17;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar17 + -uVar10;
      pcVar14 = &this_00->field_01E1;
      memmove(pcVar14, pcVar17, uVar10); /* compiler REP MOVS byte copy */
      uVar11 = 0;
      for (puVar7 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
          puVar7 != nullptr; puVar7 = st::fn_0072E560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }
      goto LAB_0050af64;
    }
    if (CVar3 == CASE_5C) {
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
      goto LAB_0050b386;
    }
    if (CVar3 == CASE_6E) {
      /* ST_CALLSITE[0050AFCF]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_01E1),st::mutable_c_string("%d"),(uint)(ushort)this_00->field_0C2F);
      st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x1c,0x58,0xb7,0xf);
      st::fn_007119C0(this_00->field_01C4,&this_00->field_01E1,-1,-1,5);
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x16,0x69,0xc3,0xe);
      UVar5 = 0x273b;
      goto cf_common_exit_0050B38B;
    }
    break;
  case CASE_5D:
    /* ST_CALLSITE[0050A9D2]: CALL 0x00403b16; direct=00403B16 CPanelTy::PaintBioSonar */
    st::fn_00403B16(this_00);
    break;
  case CASE_5E:
    /* ST_CALLSITE[0050ACC5]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2c,0x52,'\x01',
           (byte *)this_00->field_09D9[0xc]);
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,0);
    /* ST_CALLSITE[0050ACE6]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2e,0x54,'\x01',(byte *)pBVar6);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x73,0x50,0x5f,0xb);
    iVar20 = -1;
    iVar19 = -1;
    uVar10 = 2;
    iVar18 = -1;
    iVar12 = -2;
    pcVar7_mgE = st::fn_006B0140(0x271d,g_hINSTANCE_00807618);
    st::fn_00711B70(this_00->field_01B8,pcVar7_mgE,iVar12,iVar18,uVar10,iVar19,iVar20);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x73,0x5d,0x5f,0x17);
    iVar20 = -1;
    iVar19 = -1;
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -2;
    pcVar7_mgF = st::fn_006B0140(0x2721,g_hINSTANCE_00807618);
    st::fn_00711B70(this_00->field_01B8,pcVar7_mgF,iVar12,iVar18,uVar10,iVar19,iVar20);
    pcVar17 = &this_00->field_01E1;
    /* ST_CALLSITE[0050AD89]: CALL dword ptr [0x0085bde8] */
    st::external_00000080(pcVar17,st::mutable_c_string("%6d"),(uint)(ushort)this_00->field_0C34);
    st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x91,0x73,0x26,0xf);
    uVar10 = 4;
    this_01 = this_00->field_01C4;
    goto cf_common_exit_0050BD93;
  case CASE_61:
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x25,0x50,0xa5,0xc);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mgD = st::fn_006B0140(0x2738,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01B8,pcVar7_mgD,iVar12,iVar18,uVar10);
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B3FE]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x5b,'\x01',(byte *)pBVar6);
    pbVar13 = (byte *)(((uint)(byte)this_00->field_0C2A * 0x21) / 100);
    pbVar9 = nullptr;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_14 = pbVar13;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B452]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x5d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        local_14 = local_14 + -1;
        pbVar9 = pbVar13;
      } while (local_14 != nullptr);
    }
    if (pbVar9 < (byte *)0x21) {
      iVar12 = (int)pbVar9 * 4 + 0x35;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B48D]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x5d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    /* ST_CALLSITE[0050B4B5]: CALL dword ptr [0x0085bde8] */
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_01E1),st::mutable_c_string("%d%%"),(uint)(byte)this_00->field_0C2A);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x15,0x68,0xc3,0xc);
    st::fn_007119C0(this_00->field_01B8,&this_00->field_01E1,-1,-1,5);
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B50B]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
    pbVar13 = (byte *)(uint)this_00->field_0C29;
    local_8 = nullptr;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_8 = pbVar13;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B549]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        pbVar13 = pbVar13 + -1;
      } while (pbVar13 != nullptr);
    }
    if (local_8 < (byte *)0x21) {
      iVar12 = (int)local_8 * 4 + 0x35;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B585]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    break;
  case CASE_62:
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x15,0x66,0x66,0xb);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mgB = st::fn_006B0140(0x2725,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01B8,pcVar7_mgB,iVar12,iVar18,uVar10);
    resourceString = &this_00->field_01E1;
    /* ST_CALLSITE[0050B71E]: CALL EDI */
    st::external_00000080(resourceString,st::mutable_c_string("%d"),*(undefined4 *)&this_00->field_0xc12);
    st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x7f,0x66,0x24,0xb);
    st::fn_007119C0(this_00->field_01C4,resourceString,-1,-1,5);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x8e,0x4f,0x17,0xb);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mgC = st::fn_006B0140(0x2740,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01B8,pcVar7_mgC,iVar12,iVar18,uVar10);
    /* ST_CALLSITE[0050B7A0]: CALL EDI */
    st::external_00000080(resourceString,st::mutable_c_string("%d"),this_00->field_0C16);
    st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0xa5,0x4f,0x24,0xb);
    st::fn_007119C0(this_00->field_01C4,resourceString,-1,-1,4);
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B7F2]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
    uVar10 = this_00->field_0C16;
    if (uVar10 < *(uint *)&this_00->field_0xc12) {
      pbVar13 = (byte *)0x21;
    }
    else if (uVar10 == 0) {
      pbVar13 = nullptr;
    }
    else {
      pbVar13 = (byte *)((*(uint *)&this_00->field_0xc12 * 0x21) / uVar10);
    }
    pbVar9 = nullptr;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_8 = pbVar13;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B84F]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        pbVar13 = pbVar13 + -1;
        pbVar9 = local_8;
      } while (pbVar13 != nullptr);
    }
    if (pbVar9 < (byte *)0x21) {
      iVar12 = (int)pbVar9 * 4 + 0x35;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B88B]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    break;
  case CASE_63:
    if (*(int *)&this_00->field_0xc12 == 0) {
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
LAB_0050b386:
      UVar5 = 0x2713;
      goto cf_common_exit_0050B38B;
    }
    /* ST_CALLSITE[0050B099]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x28,0x50,'\x01',
           (byte *)this_00->field_09D9[0xe]);
    local_EAX_3436 =
         st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                            this_00->field_0C1A);
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,local_EAX_3436);
    /* ST_CALLSITE[0050B0CC]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2a,0x52,'\x01',(byte *)pBVar6);
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B0F0]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
    pbVar13 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
    local_14 = nullptr;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_14 = pbVar13;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B147]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        pbVar13 = pbVar13 + -1;
      } while (pbVar13 != nullptr);
    }
    if (local_14 < (byte *)0x21) {
      iVar12 = (int)local_14 * 4 + 0x35;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B17F]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x5c,0x69,0x7a,0xb);
    pHVar15 = g_hINSTANCE_00807618;
    UVar9 = st::fn_00403684(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A,0);
    pcVar7_mg9 = st::fn_006B0140(UVar9,pHVar15);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar7_mg9;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar7_mg9 + 1;
      cVar1 = *pcVar7_mg9;
      pcVar7_mg9 = pcVar17;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar17 = pcVar17 + -uVar10;
    pcVar14 = &this_00->field_01E1;
    memmove(pcVar14, pcVar17, uVar10); /* compiler REP MOVS byte copy */
    for (puVar7 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
        puVar7 != nullptr; puVar7 = st::fn_0072E560(puVar7,'\n')) {
      *(undefined1 *)puVar7 = 0x20;
    }
    st::fn_00711B70(this_00->field_01B8,&this_00->field_01E1,-2,-1,5,-1,-1);
    pbVar13 = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[1],0,100,0x13,0x18
                                          ,0xc,0);
    if (pbVar13 != nullptr) {
      /* ST_CALLSITE[0050B276]: CALL EDI */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),(uint)(ushort)this_00->field_0C1C);
      st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,7);
      /* ST_CALLSITE[0050B29F]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,100,0x59,'\x01',pbVar13);
      /* ST_CALLSITE[0050B2B8]: CALL EDI */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),(uint)(ushort)this_00->field_0C20);
      st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,5);
      /* ST_CALLSITE[0050B2E4]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0xaf,0x59,'\x01',pbVar13);
      st::fn_00710F00(this_00->field_01C4);
    }
    puVar8 = st::fn_00709AF0
                       (PTR_00806794,CASE_1,st::mutable_c_string("BUT_RCTTYPESI04"),0xffffffff,0,1,0,
                        nullptr);
    /* ST_CALLSITE[0050B325]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x82,0x56,'\x01',(byte *)puVar8);
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0B1B,0);
    /* ST_CALLSITE[0050B349]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0xa1,0x56,'\x01',(byte *)pBVar6);
    break;
  case CASE_64:
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x19,0x59,0xbb,0xb);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mg8 = st::fn_006B0140(0x272d,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01B8,pcVar7_mg8,iVar12,iVar18,uVar10);
    /* ST_CALLSITE[0050BAC5]: CALL dword ptr [0x0085bde8] */
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_01E1),st::mutable_c_string("%4d"),*(undefined4 *)&this_00->field_0xc12);
    st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x66,0x65,0x24,0xb);
    st::fn_007119C0(this_00->field_01C4,&this_00->field_01E1,-1,-1,7);
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050BB18]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
    if (this_00->field_0C16 == 0) {
      pbVar13 = nullptr;
    }
    else {
      pbVar13 = (byte *)((uint)(*(int *)&this_00->field_0xc12 * 0x21) / this_00->field_0C16);
    }
    local_8 = nullptr;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_8 = pbVar13;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050BB6D]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        pbVar13 = pbVar13 + -1;
      } while (pbVar13 != nullptr);
    }
    if (local_8 < (byte *)0x21) {
      iVar12 = (int)local_8 * 4 + 0x35;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050BBA9]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    break;
  case CASE_67:
  case CASE_68:
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x34,0x5d,0x85,0xb);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mg6 = st::fn_006B0140(0x272b,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01B8,pcVar7_mg6,iVar12,iVar18,uVar10);
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B900]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x50,'\x01',(byte *)pBVar6);
    uVar10 = 0;
    if (this_00->field_0C11 != CASE_0) {
      iVar12 = 0x35;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B934]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x52,'\x01',
               (byte *)pBVar6);
        uVar10 = uVar10 + 1;
        iVar12 = iVar12 + 4;
      } while (uVar10 < this_00->field_0C11);
    }
    if (uVar10 < 0x21) {
      iVar12 = uVar10 * 4 + 0x35;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B973]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x52,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x34,0x7d,0x85,0xb);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mg7 = st::fn_006B0140(0x272c,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01B8,pcVar7_mg7,iVar12,iVar18,uVar10);
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B9E3]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x71,'\x01',(byte *)pBVar6);
    uVar10 = 0;
    if (*(int *)&this_00->field_0xc12 != 0) {
      iVar12 = 0x35;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050BA17]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x73,'\x01',
               (byte *)pBVar6);
        uVar10 = uVar10 + 1;
        iVar12 = iVar12 + 4;
      } while (uVar10 < *(uint *)&this_00->field_0xc12);
    }
    if (uVar10 < 0x21) {
      iVar12 = uVar10 * 4 + 0x35;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050BA58]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x73,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    break;
  case CASE_6D:
    local_8 = &this_00->field_0C24;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_20 = -0xc24 - (int)this_00;
    iVar12 = 99;
    local_14 = (byte *)0x2c;
    do {
      pbVar13 = local_14;
      /* ST_CALLSITE[0050BC0E]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,(int)(local_14 + -2),0x55,'\x01',
             (byte *)this_00->field_09D9[0xe]);
      uVar6 = st::fn_004056F5(*local_10,local_8[-10]);
      pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,uVar6);
      /* ST_CALLSITE[0050BC3F]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,(int)pbVar13,0x57,'\x01',
             (byte *)pBVar6);
      pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,4);
      /* ST_CALLSITE[0050BC65]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + -2,0x58,'\x01',
             (byte *)pBVar6);
      local_c = 0;
      uVar10 = *local_8 / 10;
      if (uVar10 != 0) {
        iVar18 = 0x7e;
        local_18 = uVar10;
        local_c = uVar10;
        do {
          pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,7);
          /* ST_CALLSITE[0050BCB3]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,iVar18,'\x01',
                 (byte *)pBVar6);
          iVar18 = iVar18 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      if (local_c < 10) {
        iVar18 = local_c * -4 + 0x7e;
        local_18 = 10 - local_c;
        do {
          pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,8);
          /* ST_CALLSITE[0050BD03]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,iVar18,'\x01',
                 (byte *)pBVar6);
          iVar18 = iVar18 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      iVar12 = iVar12 + 0x1a;
    } while (local_8 + local_20 < (byte *)0x2);
    /* ST_CALLSITE[0050BD5D]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d %% %d"),(uint)(byte)this_00->field_0C24,
              (uint)(byte)this_00->field_0C25);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x5f,0x4d,0x2f,0xb);
    this_01 = this_00->field_01B8;
    uVar10 = 5;
    pcVar17 = (char *)&DAT_0080f33a;
cf_common_exit_0050BD93:
    st::fn_007119C0(this_01,pcVar17,-1,-1,uVar10);
    break;
  case CASE_70:
  case CASE_72:
  case CASE_73:
    pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B5B9]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
    pbVar13 = (byte *)(uint)this_00->field_0C29;
    local_8 = nullptr;
    local_14 = pbVar13;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_8 = pbVar13;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B5FA]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        pbVar13 = pbVar13 + -1;
      } while (pbVar13 != nullptr);
    }
    pbVar13 = local_14;
    if (local_8 < (byte *)0x21) {
      iVar12 = (int)local_8 * 4 + 0x35;
      do {
        pBVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B635]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    pbVar9 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[2],0,0x24,6,0xa4,
                                         0x2b,0);
    if (pbVar9 != nullptr) {
      iVar20 = -1;
      iVar19 = -1;
      uVar10 = 5;
      iVar18 = -1;
      iVar12 = -1;
      pcVar7_mg4 = st::fn_006B0140(0x36c4 - (pbVar13 < (byte *)0x21),g_hINSTANCE_00807618);
      st::fn_00711B70(this_00->field_01B8,pcVar7_mg4,iVar12,iVar18,uVar10,iVar19,iVar20);
      /* ST_CALLSITE[0050B6AE]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x24,0x4c,'\x01',pbVar9);
      st::fn_00710F00(this_00->field_01B8);
    }
  }
switchD_0050a9c9_caseD_5f:
  /* ST_CALLSITE[0050BD9A]: CALL 0x004019b5; direct=004019B5 CPanelTy::PaintIDSObj */
  st::fn_004019B5(this_00);
switchD_0050a52e_caseD_df:
  if (-1 < (int)this_00->field_0148[5]) {
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
               this_00->field_0050,this_00->field_00A8);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

// 0050C620 CPanelTy::Update4PanelSI
#line 4 "decomp/ST.exe/functions/0050C620/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::Update4PanelSI

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall st::fn_0050C620(CPanelTy *this)

{
  CPanelTy_field_0BF5State *pCVar1;
  CPanelTy_field_0BFAState CVar2;
  CPanelTy_field_0C3CState CVar3;
  CPanelTy *this_00;
  byte bVar5;
  int iVar6;
  uint uVar6;
  BITMAPINFO *pBVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar18;
  uint uVar10;
  uint uVar11;
  int iVar13;
  char cVar12;
  int iVar14;
  int iVar15;
  ccFntTy *this_01;
  char cVar16;
  CPanelTy_field_0BF5State *pCVar17;
  char *pcVar19;
  short *psVar20;
  uint *puVar21;
  CPanelTy_field_0BF5State *pCVar22;
  short *psVar23;
  bool bVar25;
  int iVar26;
  int iVar27;
  undefined4 local_140 [4];
  undefined4 local_130;
  undefined4 local_120 [4];
  undefined4 local_110;
  undefined4 local_100 [4];
  undefined4 local_f0;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  InternalExceptionFrame local_c0;
  CPanelTy *local_7c;
  CPanelTy_field_0BF5State local_78;
  char local_74;
  CPanelTy_field_0BFAState local_73;
  char local_72;
  char local_71;
  char local_70;
  short local_6f [6];
  char local_63;
  short local_62 [3];
  CPanelTy_field_0C11State local_5c;
  Global_sub_00526BA0_param_1Enum local_5b;
  uint local_57;
  ushort local_51;
  ushort local_4d;
  byte local_49 [5];
  CPanelTy_field_0C29State local_44;
  byte local_43;
  short local_3e;
  char local_3c;
  char local_3a;
  CPanelTy_field_0C3CState local_31;
  int local_20;
  Global_sub_00526BA0_param_1Enum *local_1c;
  uint local_18;
  uint local_14;
  Global_sub_00526BA0_param_1Enum *local_10;
  uint local_c;
  uint local_8;

  local_c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c0;
  local_7c = this;
  iVar6 = st::fn_0072D7F0(local_c0.jumpBuffer,0);
  this_00 = local_7c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_c0.previous;
    iVar13 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x8ae,0,iVar6,
                                st::mutable_c_string("%s"),"CPanelTy::Update4PanelSI");
    if (iVar13 == 0) {
      st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x8ae);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pCVar1 = &local_7c->field_0BF5;
  pCVar17 = pCVar1;
  pCVar22 = &local_78;
  memmove(pCVar22, pCVar17, 0x5c); /* compiler REP MOVS byte copy */
  iVar14 = 0;
  pCVar17 = pCVar1;
  for (iVar14 = 0x17; iVar14 != 0; iVar14 = iVar14 + -1) {
    *pCVar17 = CASE_0;
    pCVar17 = pCVar17 + 1;
  }
  /* ST_CALLSITE[0050C688]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
  st::fn_004035BC(g_allPlayers_007FA174,4,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  CVar2 = this_00->field_0BFA;
  if ((local_73 != CVar2) || (local_72 != this_00->field_0BFB)) {
cf_common_exit_0050E007:
    /* ST_CALLSITE[0050E009]: CALL 0x00402590; direct=00402590 CPanelTy::PaintCtrlObjSI */
    st::fn_00402590(this_00);
    /* ST_CALLSITE[0050E012]: CALL 0x00403602; direct=00403602 CPanelTy::SetControlObjSI */
    st::fn_00403602(this_00,'\x01');
    /* ST_CALLSITE[0050E019]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
    st::fn_00405BA0(this_00);
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  if ((this_00->field_0BFB == '\x02') && (CVar2 == CASE_1)) {
    cVar12 = '\0';
    cVar16 = '\0';
    uVar6 = 0;
    do {
      if ((&this_00->field_0BFE)[uVar6] != '\0') {
        cVar16 = cVar16 + '\x01';
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 6);
    uVar6 = 0;
    do {
      if (*(char *)((int)local_6f + uVar6) != '\0') {
        cVar12 = cVar12 + '\x01';
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 6);
    if (cVar16 == cVar12) {
      iVar14 = 3;
      bVar25 = true;
      psVar20 = (short *)&this_00->field_0BFE;
      psVar23 = local_6f;
      do {
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        bVar25 = *psVar20 == *psVar23;
        psVar20 = psVar20 + 1;
        psVar23 = psVar23 + 1;
      } while (bVar25);
      if (bVar25) {
        if (this_00->field_0BFD != local_70) {
          /* ST_CALLSITE[0050C77B]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
          st::fn_00404BA1(this_00,'\0');
        }
      }
      else {
        this_00->field_0028 = 5;
        st::fn_006E6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
        local_c = local_c & 0xffffff00;
        pcVar19 = (char *)&this_00->field_0BFE;
        do {
          if (*pcVar19 != '\0') {
            /* ST_CALLSITE[0050C742]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
            st::fn_0040313E(this_00,0,(byte)local_c);
          }
          bVar5 = (char)local_c + 1;
          pcVar19 = pcVar19 + 1;
          local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar5));
        } while (bVar5 < 6);
        /* ST_CALLSITE[0050C758]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
        st::fn_00404BA1(this_00,'\0');
        /* ST_CALLSITE[0050C763]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
        st::fn_004040FC(g_cursorClass_00802A30);
      }
      iVar14 = 3;
      bVar25 = true;
      psVar20 = (short *)&this_00->field_0C04;
      psVar23 = local_6f + 3;
      do {
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        bVar25 = *psVar20 == *psVar23;
        psVar20 = psVar20 + 1;
        psVar23 = psVar23 + 1;
      } while (bVar25);
      if ((!bVar25) || (this_00->field_0BFC != local_71)) {
        /* ST_CALLSITE[0050C7B1]: CALL 0x00404f89; direct=00404F89 CPanelTy::sub_004F4570 */
        st::fn_00404F89(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_78);
      }
    }
    else {
      /* ST_CALLSITE[0050C6F1]: CALL 0x00403602; direct=00403602 CPanelTy::SetControlObjSI */
      st::fn_00403602(this_00,'\x01');
    }
    if (((this_00->field_0C0A != local_63) || (this_00->field_0BFC != local_71)) &&
       (this_00->field_09C0[1] != 0)) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)(byte)this_00->field_0C0A;
      }
      uVar8 = this_00->field_09C0[1];
      *(uint *)&this_00->field_0x2c = uVar6;
      st::fn_006E6080(this_00,2,uVar8,(undefined4 *)&this_00->field_0x18);
    }
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (this_00->field_0C24 != local_49[0]) {
        uVar6 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar6 != 0) {
          iVar14 = 0x35;
          local_8 = uVar6;
          do {
            pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
            /* ST_CALLSITE[0050C894]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                   (byte *)pBVar7);
            iVar14 = iVar14 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_8 < 0x21) {
          iVar14 = local_8 * 4 + 0x35;
          do {
            pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
            /* ST_CALLSITE[0050C8CC]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                   (byte *)pBVar7);
            iVar14 = iVar14 + 4;
          } while (iVar14 < 0xb9);
        }
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09D9[2],0,0x5c,10,0x3c,0x1e);
        /* ST_CALLSITE[0050C91F]: CALL 0x00402a3b; direct=00402A3B CPanelTy::PaintCostsXYSI */
        st::fn_00402A3B(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
    }
    else {
      /* ST_CALLSITE[0050C81D]: CALL 0x00402590; direct=00402590 CPanelTy::PaintCtrlObjSI */
      st::fn_00402590(this_00);
      /* ST_CALLSITE[0050C826]: CALL 0x00403602; direct=00403602 CPanelTy::SetControlObjSI */
      st::fn_00403602(this_00,'\0');
      /* ST_CALLSITE[0050C82D]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
      st::fn_00405BA0(this_00);
    }
    if (this_00->field_0C4D == local_20) {
      g_currentExceptionFrame = local_c0.previous;
      return;
    }
    /* ST_CALLSITE[0050C95B]: CALL 0x004019b5; direct=004019B5 CPanelTy::PaintIDSObj */
    st::fn_004019B5(this_00);
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  if (CVar2 != CASE_1) {
    if (CVar2 != CASE_4) {
      g_currentExceptionFrame = local_c0.previous;
      return;
    }
    if (local_78 == this_00->field_0BF5) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FD:
      case CASE_FE:
        goto switchD_0050c9ae_caseD_dd;
      default:
        g_currentExceptionFrame = local_c0.previous;
        return;
      }
    }
    goto cf_common_exit_0050E007;
  }
  if ((local_78 != this_00->field_0BF5) || (local_74 != this_00->field_0BF9))
  goto cf_common_exit_0050E007;
  cVar12 = '\0';
  cVar16 = '\0';
  uVar6 = 0;
  do {
    if ((&this_00->field_0BFE)[uVar6] != '\0') {
      cVar16 = cVar16 + '\x01';
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 6);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_6f + uVar6) != '\0') {
      cVar12 = cVar12 + '\x01';
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 6);
  if (cVar16 == cVar12) {
    iVar14 = 3;
    bVar25 = true;
    psVar20 = (short *)&this_00->field_0BFE;
    psVar23 = local_6f;
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar25 = *psVar20 == *psVar23;
      psVar20 = psVar20 + 1;
      psVar23 = psVar23 + 1;
    } while (bVar25);
    if (bVar25) {
      if (this_00->field_0BFD != local_70) {
        /* ST_CALLSITE[0050CAE3]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
        st::fn_00404BA1(this_00,'\0');
      }
    }
    else {
      this_00->field_0028 = 5;
      st::fn_006E6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
      local_c = local_c & 0xffffff00;
      pcVar19 = (char *)&this_00->field_0BFE;
      do {
        if (*pcVar19 != '\0') {
          /* ST_CALLSITE[0050CAAA]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
          st::fn_0040313E(this_00,0,(byte)local_c);
        }
        bVar5 = (char)local_c + 1;
        pcVar19 = pcVar19 + 1;
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar5));
      } while (bVar5 < 6);
      /* ST_CALLSITE[0050CAC0]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
      st::fn_00404BA1(this_00,'\0');
      /* ST_CALLSITE[0050CACB]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
      st::fn_004040FC(g_cursorClass_00802A30);
    }
    iVar14 = 3;
    bVar25 = true;
    psVar20 = (short *)&this_00->field_0C04;
    psVar23 = local_6f + 3;
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar25 = *psVar20 == *psVar23;
      psVar20 = psVar20 + 1;
      psVar23 = psVar23 + 1;
    } while (bVar25);
    if ((!bVar25) || (this_00->field_0BFC != local_71)) {
      /* ST_CALLSITE[0050CB19]: CALL 0x00404f89; direct=00404F89 CPanelTy::sub_004F4570 */
      st::fn_00404F89(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_78);
    }
  }
  else {
    /* ST_CALLSITE[0050CA59]: CALL 0x00403602; direct=00403602 CPanelTy::SetControlObjSI */
    st::fn_00403602(this_00,'\x01');
  }
  if (((this_00->field_0C0A != local_63) || (this_00->field_0BFC != local_71)) &&
     (this_00->field_09C0[1] != 0)) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)(byte)this_00->field_0C0A;
    }
    uVar8 = this_00->field_09C0[1];
    *(uint *)&this_00->field_0x2c = uVar6;
    st::fn_006E6080(this_00,2,uVar8,(undefined4 *)&this_00->field_0x18);
  }
  iVar14 = 3;
  bVar25 = true;
  psVar20 = (short *)&this_00->field_0C0B;
  psVar23 = local_62;
  do {
    if (iVar14 == 0) break;
    iVar14 = iVar14 + -1;
    bVar25 = *psVar20 == *psVar23;
    psVar20 = psVar20 + 1;
    psVar23 = psVar23 + 1;
  } while (bVar25);
  if ((!bVar25) || (this_00->field_0BFC != local_71)) {
    uVar6 = 0;
    puVar21 = this_00->field_0B1F;
    do {
      if (*puVar21 != 0) {
        this_00->field_0028 = 0x20;
        if (this_00->field_0BFC == '\0') {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)(byte)(&this_00->field_0C0B)[uVar6];
        }
        *(uint *)&this_00->field_0x2c = uVar8;
        st::fn_006E6080(this_00,2,*puVar21,(undefined4 *)&this_00->field_0x18);
      }
      uVar6 = uVar6 + 1;
      puVar21 = puVar21 + 1;
    } while (uVar6 < 6);
  }
  switch(this_00->field_0BF5) {
  case CASE_53:
    CVar3 = this_00->field_0C3C;
    if (local_31 == CVar3) {
      if (CVar3 == CASE_1) {
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09D9[2],0,0x5c,10,0x32,0x19);
        /* ST_CALLSITE[0050CD70]: CALL 0x00404f1b; direct=00404F1B CPanelTy::PaintDamageXY */
        st::fn_00404F1B(this_00,this_00->field_0194,0x5c,0x50,(byte)this_00->field_0C3D,0x2714);
        uVar6 = (uint)(this_00->field_0C3D * 0x21) / 100;
        local_8 = 0;
        if (uVar6 != 0) {
          iVar14 = 0x35;
          local_8 = uVar6;
          do {
            pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
            /* ST_CALLSITE[0050CDBB]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                   (byte *)pBVar7);
            iVar14 = iVar14 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_8 < 0x21) {
          iVar14 = local_8 * 4 + 0x35;
          do {
            pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
            /* ST_CALLSITE[0050CDF3]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                   (byte *)pBVar7);
            iVar14 = iVar14 + 4;
          } while (iVar14 < 0xb9);
        }
      }
      else if (CVar3 == CASE_2) {
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x28,0x79,
                   (byte *)this_00->field_09D9[2],0,0x28,0x33,0x9b,0xf);
        /* ST_CALLSITE[0050CCF1]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),this_00->field_0C3D);
        st::fn_00710A90(this_00->field_01BC,this_00->field_0194,0,0x28,0x79,0x9b,0xf);
        st::fn_007119C0(this_00->field_01BC,(char *)&DAT_0080f33a,-1,-1,1);
      }
      else if (CVar3 == CASE_4) {
        if (this_00->field_0C31 == local_3c) {
          if (this_00->field_0C33 != local_3a) {
            st::fn_006B55F0
                      ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x5c,0x50,
                       (byte *)this_00->field_09D9[2],0,0x5c,10,0x32,0x19);
            /* ST_CALLSITE[0050CCB0]: CALL 0x00403ed1; direct=00403ED1 CPanelTy::PaintPerResSI */
            st::fn_00403ED1(this_00);
          }
        }
        else {
          /* ST_CALLSITE[0050CC60]: CALL 0x00402590; direct=00402590 CPanelTy::PaintCtrlObjSI */
          st::fn_00402590(this_00);
          /* ST_CALLSITE[0050CC69]: CALL 0x00403602; direct=00403602 CPanelTy::SetControlObjSI */
          st::fn_00403602(this_00,'\x01');
          /* ST_CALLSITE[0050CC70]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
          st::fn_00405BA0(this_00);
        }
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
      break;
    }
    goto LAB_0050ce3f;
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
    if (this_00->field_0C31 == local_3c) {
      if (this_00->field_0C31 == '\0') {
        if (this_00->field_0C2F != local_3e) {
          /* ST_CALLSITE[0050CEDB]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
          st::fn_004046BF(this_00,1);
          iVar14 = this_00->field_0302;
          if (iVar14 != 0) {
            memset(local_120, 0, 0x20); /* compiler bulk-zero initialization */
            iVar15 = 0;
            local_110 = 5;
            st::fn_006E6080(this_00,2,iVar14,local_120);
          }
        }
      }
      else if (this_00->field_0C33 != local_3a) {
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09D9[2],0,0x5c,10,0x32,0x19);
        /* ST_CALLSITE[0050CE95]: CALL 0x00403ed1; direct=00403ED1 CPanelTy::PaintPerResSI */
        st::fn_00403ED1(this_00);
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
      break;
    }
LAB_0050ce3f:
    /* ST_CALLSITE[0050CE41]: CALL 0x00402590; direct=00402590 CPanelTy::PaintCtrlObjSI */
    st::fn_00402590(this_00);
    /* ST_CALLSITE[0050CE4A]: CALL 0x00403602; direct=00403602 CPanelTy::SetControlObjSI */
    st::fn_00403602(this_00,'\x01');
    /* ST_CALLSITE[0050CE51]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
    st::fn_00405BA0(this_00);
    break;
  case CASE_5B:
    /* ST_CALLSITE[0050DC5D]: CALL 0x00404697; direct=00404697 CPanelTy::PaintArsenal */
    st::fn_00404697(this_00);
    uVar6 = 0;
    do {
      if (this_00->field_0A15[uVar6] != 0) {
        if (uVar6 == 3) {
          if (this_00->field_09D4 == '\x01') {
            this_00->field_0AA2 = 0;
            this_00->field_0028 = 0x20;
            *(undefined4 *)&this_00->field_0x2c = 0;
            uVar8 = this_00->field_0A15[3];
          }
          else {
            this_00->field_0AA2 = 2;
            uVar10 = st::fn_004034BD(this_00->field_09D4 + CASE_2,CASE_3);
            this_00->field_0AA3 = uVar10;
            if (this_00->field_0BFC == local_71) {
              this_00->field_0028 = 5;
              uVar8 = this_00->field_0A15[3];
            }
            else {
              this_00->field_0028 = 0x20;
              *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
              uVar8 = this_00->field_0A15[3];
            }
          }
        }
        else {
          uVar10 = st::fn_004034BD(this_00->field_09D4 + CASE_2,
                                      (Global_sub_00525EF0_param_2Enum)uVar6);
          *(undefined4 *)((int)this_00->field_0A15 + uVar6 * 0x27 + 0x19) = uVar10;
          if (this_00->field_0BFC == local_71) {
            this_00->field_0028 = 5;
            uVar8 = this_00->field_0A15[uVar6];
          }
          else {
            this_00->field_0028 = 0x20;
            *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
            uVar8 = this_00->field_0A15[uVar6];
          }
        }
        st::fn_006E6080(this_00,2,uVar8,(undefined4 *)&this_00->field_0x18);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    if (-1 < (int)this_00->field_0148[5]) {
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                 this_00->field_0050,this_00->field_00A8);
    }
    break;
  case CASE_5C:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (this_00->field_0C24 != local_49[0]) {
        uVar6 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar6 != 0) {
          iVar14 = 0x35;
          local_8 = uVar6;
          do {
            pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
            /* ST_CALLSITE[0050D021]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                   (byte *)pBVar7);
            iVar14 = iVar14 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_8 < 0x21) {
          iVar14 = local_8 * 4 + 0x35;
          do {
            pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
            /* ST_CALLSITE[0050D059]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                   (byte *)pBVar7);
            iVar14 = iVar14 + 4;
          } while (iVar14 < 0xb9);
        }
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09D9[2],0,0x5c,10,0x3c,0x1e);
        /* ST_CALLSITE[0050D0AC]: CALL 0x00402a3b; direct=00402A3B CPanelTy::PaintCostsXYSI */
        st::fn_00402A3B(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
    }
    else {
      /* ST_CALLSITE[0050CFAA]: CALL 0x00402590; direct=00402590 CPanelTy::PaintCtrlObjSI */
      st::fn_00402590(this_00);
      /* ST_CALLSITE[0050CFB3]: CALL 0x00403602; direct=00403602 CPanelTy::SetControlObjSI */
      st::fn_00403602(this_00,'\0');
      /* ST_CALLSITE[0050CFBA]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
      st::fn_00405BA0(this_00);
    }
    break;
  case CASE_5D:
    /* ST_CALLSITE[0050CC14]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x46,'\x01',
           (byte *)this_00->field_09D9[2]);
    /* ST_CALLSITE[0050CC1E]: CALL 0x00403b16; direct=00403B16 CPanelTy::PaintBioSonar */
    st::fn_00403B16(this_00);
    break;
  case CASE_5E:
    /* ST_CALLSITE[0050CF31]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%6d"),(uint)(ushort)this_00->field_0C34);
    st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x91,0x73,0x26,0xf);
    st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,4);
    if (-1 < (int)this_00->field_0148[5]) {
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                 this_00->field_0050,this_00->field_00A8);
    }
    break;
  case CASE_61:
    if (this_00->field_0C2A != local_43) {
      uVar6 = ((uint)(byte)this_00->field_0C2A * 0x21) / 100;
      local_8 = 0;
      if (uVar6 != 0) {
        iVar14 = 0x35;
        local_8 = uVar6;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050D518]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x5d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar14 = local_8 * 4 + 0x35;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050D550]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x5d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
        } while (iVar14 < 0xb9);
      }
      pbVar9 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[2],0,0x15,0x22,
                                           0xc3,0xc,0);
      if (pbVar9 != nullptr) {
        /* ST_CALLSITE[0050D59D]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d%%"),(uint)(byte)this_00->field_0C2A);
        st::fn_007119C0(this_00->field_01B8,(char *)&DAT_0080f33a,-1,-1,5);
        /* ST_CALLSITE[0050D5CA]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x15,0x68,'\x01',pbVar9);
        st::fn_00710F00(this_00->field_01B8);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (this_00->field_0C29 != local_44) {
      uVar6 = (uint)this_00->field_0C29;
      local_8 = 0;
      if (uVar6 != 0) {
        iVar14 = 0x35;
        local_8 = uVar6;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050D645]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar14 = local_8 * 4 + 0x35;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050D67D]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
        } while (iVar14 < 0xb9);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    break;
  case CASE_62:
    if ((*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) ||
       (this_00->field_0C16 != local_57)) {
      pbVar9 = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[7],0,0x7f,0x20,
                                           0x24,0xb,0);
      if (pbVar9 != nullptr) {
        /* ST_CALLSITE[0050D851]: CALL EDI */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d"),*(undefined4 *)&this_00->field_0xc12);
        st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,5);
        /* ST_CALLSITE[0050D87A]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x7f,0x66,'\x01',pbVar9);
        st::fn_00710F00(this_00->field_01C4);
      }
      pbVar9 = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[7],0,0xa5,9,0x24,
                                           0xb,0);
      if (pbVar9 != nullptr) {
        /* ST_CALLSITE[0050D8C5]: CALL EDI */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d"),this_00->field_0C16);
        st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,4);
        /* ST_CALLSITE[0050D8F1]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0xa5,0x4f,'\x01',pbVar9);
        st::fn_00710F00(this_00->field_01C4);
      }
      uVar6 = this_00->field_0C16;
      if (uVar6 < *(uint *)&this_00->field_0xc12) {
        uVar6 = 0x21;
      }
      else if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(uint *)&this_00->field_0xc12 * 0x21) / uVar6;
      }
      local_8 = 0;
      if (uVar6 != 0) {
        iVar14 = 0x35;
        local_8 = uVar6;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050D95C]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar14 = local_8 * 4 + 0x35;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050D994]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
        } while (iVar14 < 0xb9);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    break;
  case CASE_63:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) {
      /* ST_CALLSITE[0050D271]: CALL 0x00402590; direct=00402590 CPanelTy::PaintCtrlObjSI */
      st::fn_00402590(this_00);
      iVar14 = this_00->field_0302;
      if (iVar14 != 0) {
        memset(local_e0, 0, 0x20); /* compiler bulk-zero initialization */
        local_d0 = 5;
        st::fn_006E6080(this_00,2,iVar14,local_e0);
      }
      break;
    }
    if (this_00->field_0C24 != local_49[0]) {
      uVar6 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
      local_8 = 0;
      if (uVar6 != 0) {
        iVar14 = 0x35;
        local_8 = uVar6;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050D310]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar14 = local_8 * 4 + 0x35;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050D348]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
        } while (iVar14 < 0xb9);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (((this_00->field_0C1C == local_51) && (this_00->field_0C20 == local_4d)) ||
       (pbVar9 = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[1],0,100,0x13,
                                             0x18,0xc,0), pbVar9 == nullptr)) break;
    if (this_00->field_0C1C != local_51) {
      /* ST_CALLSITE[0050D3E7]: CALL EDI */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),(uint)(ushort)this_00->field_0C1C);
      st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,7);
      /* ST_CALLSITE[0050D410]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,100,0x59,'\x01',pbVar9);
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (this_00->field_0C20 != local_4d) {
      /* ST_CALLSITE[0050D459]: CALL EDI */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),(uint)(ushort)this_00->field_0C20);
      st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,5);
      /* ST_CALLSITE[0050D485]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0xaf,0x59,'\x01',pbVar9);
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    this_01 = this_00->field_01C4;
    goto LAB_0050dfdc;
  case CASE_64:
    if ((*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) ||
       (this_00->field_0C16 != local_57)) {
      /* ST_CALLSITE[0050DB5C]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),
                *(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12);
      st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x66,0x65,0x24,0xb);
      st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,7);
      if (this_00->field_0C16 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)(*(int *)&this_00->field_0xc12 * 0x21) / this_00->field_0C16;
      }
      local_8 = 0;
      if (uVar6 != 0) {
        iVar14 = 0x35;
        local_8 = uVar6;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050DBE4]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar14 = local_8 * 4 + 0x35;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050DC1C]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
        } while (iVar14 < 0xb9);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    break;
  case CASE_67:
  case CASE_68:
    if (this_00->field_0C11 != local_5c) {
      uVar6 = 0;
      if (this_00->field_0C11 != CASE_0) {
        iVar14 = 0x35;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050DA0A]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x52,'\x01',
                 (byte *)pBVar7);
          uVar6 = uVar6 + 1;
          iVar14 = iVar14 + 4;
        } while (uVar6 < this_00->field_0C11);
      }
      if (uVar6 < 0x21) {
        iVar14 = uVar6 * 4 + 0x35;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050DA49]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x52,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
        } while (iVar14 < 0xb9);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) {
      uVar6 = 0;
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != 0) {
        iVar14 = 0x35;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050DAB6]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x73,'\x01',
                 (byte *)pBVar7);
          uVar6 = uVar6 + 1;
          iVar14 = iVar14 + 4;
        } while (uVar6 < *(uint *)&this_00->field_0xc12);
      }
      if (uVar6 < 0x21) {
        iVar14 = uVar6 * 4 + 0x35;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050DAF3]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x73,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
        } while (iVar14 < 0xb9);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    break;
  case CASE_6D:
    local_8 = 0;
    local_c = 99;
    local_14 = 0x2c;
    local_1c = &local_5b;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    do {
      uVar8 = local_8;
      uVar6 = local_14;
      if (*local_1c != *local_10) {
        /* ST_CALLSITE[0050DDF6]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,local_14 - 2,0x55,'\x01',
               (byte *)this_00->field_09D9[0xe]);
        uVar11 = st::fn_004056F5(*local_10,(&this_00->field_0C1A)[uVar8]);
        pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,uVar11);
        /* ST_CALLSITE[0050DE28]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,uVar6,0x57,'\x01',(byte *)pBVar7
              );
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
      if (local_49[uVar8] != (&this_00->field_0C24)[uVar8]) {
        local_18 = 0;
        uVar6 = (byte)(&this_00->field_0C24)[uVar8] / 10;
        if (uVar6 != 0) {
          iVar14 = 0x7e;
          local_18 = uVar6;
          do {
            pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,7);
            /* ST_CALLSITE[0050DEAE]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,local_c,iVar14,'\x01',
                   (byte *)pBVar7);
            iVar14 = iVar14 + -4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_18 < 10) {
          iVar14 = local_18 * -4 + 0x7e;
          iVar15 = 10 - local_18;
          do {
            pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,8);
            /* ST_CALLSITE[0050DEF6]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,local_c,iVar14,'\x01',
                   (byte *)pBVar7);
            iVar14 = iVar14 + -4;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + 1;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      local_c = local_c + 0x1a;
    } while ((int)local_14 < 0xf6);
    /* ST_CALLSITE[0050DF7D]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d %% %d"),(uint)(byte)this_00->field_0C24,
              (uint)(byte)this_00->field_0C25);
    pbVar9 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[1],0,0x5f,7,0x2f,
                                         0xb,0);
    if (pbVar9 == nullptr) break;
    st::fn_007119C0(this_00->field_01B8,(char *)&DAT_0080f33a,-1,-1,5);
    /* ST_CALLSITE[0050DFCE]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x5f,0x4d,'\x01',pbVar9);
    this_01 = this_00->field_01B8;
LAB_0050dfdc:
    st::fn_00710F00(this_01);
    break;
  case CASE_6E:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == 0) {
        /* ST_CALLSITE[0050D21F]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d"),(uint)(ushort)this_00->field_0C2F);
        st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x1c,0x58,0xb7,0xf);
        st::fn_007119C0(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,5);
      }
      else if (this_00->field_0C24 != local_49[0]) {
        uVar6 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar6 != 0) {
          iVar14 = 0x35;
          local_8 = uVar6;
          do {
            pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
            /* ST_CALLSITE[0050D193]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                   (byte *)pBVar7);
            iVar14 = iVar14 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_8 < 0x21) {
          iVar14 = local_8 * 4 + 0x35;
          do {
            pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
            /* ST_CALLSITE[0050D1CB]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                   (byte *)pBVar7);
            iVar14 = iVar14 + 4;
          } while (iVar14 < 0xb9);
        }
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
    }
    else {
      /* ST_CALLSITE[0050D0EC]: CALL 0x00402590; direct=00402590 CPanelTy::PaintCtrlObjSI */
      st::fn_00402590(this_00);
      iVar14 = this_00->field_0302;
      if (iVar14 != 0) {
        memset(local_100, 0, 0x20); /* compiler bulk-zero initialization */
        local_f0 = 5;
        st::fn_006E6080(this_00,2,iVar14,local_100);
      }
    }
    break;
  case CASE_70:
  case CASE_72:
  case CASE_73:
    if (this_00->field_0C29 != local_44) {
      uVar6 = (uint)this_00->field_0C29;
      local_8 = 0;
      local_14 = uVar6;
      if (uVar6 != 0) {
        iVar14 = 0x35;
        local_8 = uVar6;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050D704]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar14 = local_8 * 4 + 0x35;
        do {
          pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050D742]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x7d,'\x01',
                 (byte *)pBVar7);
          iVar14 = iVar14 + 4;
        } while (iVar14 < 0xb9);
      }
      pbVar9 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[2],0,0x24,6,0xa4,
                                           0x2b,0);
      if (pbVar9 != nullptr) {
        iVar27 = -1;
        iVar26 = -1;
        uVar6 = 5;
        iVar15 = -1;
        iVar14 = -1;
        pcVar18 = st::fn_006B0140(0x36c4 - (local_14 < 0x21),g_hINSTANCE_00807618);
        st::fn_00711B70(this_00->field_01B8,pcVar18,iVar14,iVar15,uVar6,iVar26,iVar27);
        /* ST_CALLSITE[0050D7B9]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x24,0x4c,'\x01',pbVar9);
        st::fn_00710F00(this_00->field_01B8);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
  }
  if (this_00->field_0C4D == local_20) {
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  /* ST_CALLSITE[0050DFF0]: CALL 0x004019b5; direct=004019B5 CPanelTy::PaintIDSObj */
  st::fn_004019B5(this_00);
  g_currentExceptionFrame = local_c0.previous;
  return;
switchD_0050c9ae_caseD_dd:
  /* ST_CALLSITE[0050C9B7]: CALL 0x00402590; direct=00402590 CPanelTy::PaintCtrlObjSI */
  st::fn_00402590(this_00);
  iVar14 = this_00->field_0302;
  if (iVar14 == 0) {
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  memset(local_140, 0, 0x20); /* compiler bulk-zero initialization */
  local_130 = 5;
  st::fn_006E6080(this_00,2,iVar14,local_140);
  g_currentExceptionFrame = local_c0.previous;
  return;
}

// 0050E7D0 CPanelTy::SetControlObjSI
#line 4 "decomp/ST.exe/functions/0050E7D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetControlObjSI

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall st::fn_0050E7D0(CPanelTy *this,char param_1)

{
  CPanelTy_field_0BFAState CVar1;
  char cVar2;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar3;
  CPanelTy *this_00;
  Global_sub_00529590_param_1Enum *pGVar5;
  int iVar6;
  char *pcVar6_mg0;
  LPSTR pCVar6;
  BITMAPINFO *pBVar7;
  uint uVar8;
  uint *puVar9;
  int iVar17;
  byte uVar10;
  byte *puVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  short sVar20;
  int iVar21;
  ushort uVar22;
  ushort uVar23;
  uint uVar24;
  char *pcVar25;
  uint uVar26;
  AnonShape_004F2E40_DC76A8C6 local_84c [5];
  undefined4 local_25c [84];
  InternalExceptionFrame local_10c;
  undefined4 local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 *local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_28;
  AnonShape_004F2E40_DC76A8C6 *local_24;
  CPanelTy *local_20;
  byte *local_1c;
  uint local_18;
  Global_sub_00529590_param_1Enum *local_14;
  byte *local_10;
  uint local_c;
  Global_sub_00529590_param_1Enum *local_8;

  local_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_10c;
  local_20 = this;
  iVar6 = st::fn_0072D7F0(local_10c.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_10c.previous;
    iVar17 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x94e,0,iVar6,
                                st::mutable_c_string("%s"),"CPanelTy::SetControlObjSI");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0x94e);
    return;
  }
  if (param_1 != '\0') {
    /* ST_CALLSITE[0050E81F]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
    st::fn_004040FC(g_cursorClass_00802A30);
  }
  this_00 = local_20;
  if (local_20->field_0302 != 0) {
    st::fn_006E56B0(local_20->field_000C,local_20->field_0302);
  }
  this_00->field_0302 = 0;
  if (this_00->field_0308[1] != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_0308[1]);
  }
  this_00->field_0308[1] = 0;
  if (this_00->field_0310[1] != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_0310[1]);
  }
  this_00->field_0310[1] = 0;
  if (this_00->field_0310[2] != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_0310[2]);
  }
  uVar8 = this_00->field_09D0;
  this_00->field_0310[2] = 0;
  if (uVar8 != 0) {
    st::fn_006E56B0(this_00->field_000C,uVar8);
  }
  this_00->field_09D0 = 0;
  puVar15 = this_00->field_0A15;
  iVar14 = 6;
  do {
    if (*puVar15 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar15);
      *puVar15 = 0;
    }
    puVar15 = puVar15 + 1;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  puVar15 = this_00->field_0B1F;
  iVar14 = 6;
  do {
    if (*puVar15 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar15);
      *puVar15 = 0;
    }
    puVar15 = puVar15 + 1;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  if (this_00->field_0B37 != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_0B37);
  }
  CVar1 = this_00->field_0BFA;
  this_00->field_0B37 = 0;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_3)) || (CVar1 == CASE_4)) {
    uVar8 = this_00->field_09C0[1];
    if (uVar8 != 0) {
      *(undefined4 *)&this_00->field_0x2c = 0;
      this_00->field_0028 = 0x20;
      st::fn_006E6080(this_00,2,uVar8,(undefined4 *)&this_00->field_0x18);
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
    g_currentExceptionFrame = local_10c.previous;
    return;
  }
  local_18 = local_18 & 0xffffff00;
  memset(local_70, 0, 0x50); /* compiler bulk-zero initialization */
  local_1c = &this_00->field_0x86a;
  local_8 = st::pointer_boundary_cast<Global_sub_00529590_param_1Enum *>(&this_00->field_0BFE);
  puVar11 = (undefined1 *)(-0xbfe - (int)this_00);
  local_10 = puVar11;
  do {
    if (*local_8 != 0) {
      local_14 = local_8 + (int)puVar11;
      iVar16 = 0xc;
      iVar14 = 0xd;
      if (local_14 == (Global_sub_00529590_param_1Enum *)0x1) {
        iVar16 = 0x49;
      }
      else if (local_14 == (Global_sub_00529590_param_1Enum *)0x2) {
        iVar16 = 0xc;
        iVar14 = 0x27;
      }
      else if (local_14 == (Global_sub_00529590_param_1Enum *)0x3) {
        iVar16 = 0x49;
        iVar14 = 0x27;
      }
      /* ST_CALLSITE[0050E99A]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
      st::fn_0040313E(this_00,0,(byte)local_18);
      if (this_00->field_0BFC == '\0') {
        local_c = 0;
      }
      else {
        local_c = (uint)local_8[6];
      }
      pcVar25 = nullptr;
      uVar23 = 0;
      uVar22 = 1;
      iVar21 = 0;
      puVar11 = local_1c;
      pcVar6_mg0 = st::fn_00405493(*local_8,this_00->field_0BF5);
      pCVar6 = st::fn_0040577C(pcVar6_mg0,iVar21);
      /* ST_CALLSITE[0050EA07]: CALL 0x004041ba; direct=004041BA CPanelTy::SetButStruct */
      st::fn_004041BA(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)local_84c + local_28 * 0x17c),5,
                   local_c,iVar16,iVar14,6,pCVar6,uVar22,uVar23,st::machine_word_boundary_cast<undefined4>(puVar11),pcVar25);
      pGVar5 = local_14;
      iVar14 = local_28;
      pAVar3 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02DE;
      *(undefined4 *)((int)local_84c + local_28 * 0x17c + 0x110) = 1;
      pBVar7 = st::fn_0070B3A0(pAVar3,(int)pGVar5);
      puVar11 = local_10;
      *(BITMAPINFO **)((int)local_84c + iVar14 * 0x17c + 0x124) = pBVar7;
      *(undefined4 *)((int)local_84c + iVar14 * 0x17c + 0x128) = 0x3c;
      local_28 = local_28 + 1;
    }
    bVar13 = (char)local_18 + 1;
    local_1c = local_1c + 0x27;
    local_8 = local_8 + 1;
    local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar13));
  } while (bVar13 < 4);
  local_60 = this_00->field_0008;
  local_24 = local_84c;
  local_70[0] = 1;
  local_70[1] = 0xffffffff;
  local_5c = 2;
  local_58 = 0xb20f;
  local_3c = 2;
  local_38 = 0xb210;
  local_40 = local_60;
  /* ST_CALLSITE[0050EACC]: CALL dword ptr [EDX + 0x8] */
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,9,&this_00->field_0302,nullptr,st::machine_word_boundary_cast<undefined4>(local_70),0);
  /* ST_CALLSITE[0050EAD3]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
  st::fn_00404BA1(this_00,'\0');
  uVar8 = this_00->field_09C0[1];
  if (uVar8 != 0) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar12 = 0;
    }
    else {
      uVar12 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar12;
    st::fn_006E6080(this_00,2,uVar8,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0BFB == '\x02') {
LAB_0050eb47:
    uVar26 = 0;
    uVar24 = 0;
    iVar16 = 0;
    pcVar25 = nullptr;
    iVar14 = 0;
    uVar22 = 0;
    sVar20 = 0;
    uVar19 = 0xb13f;
    uVar18 = 0xb12f;
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_SMALL"),0);
    uVar8 = (uint)(this_00->field_0BFC != '\0');
  }
  else {
    switch(this_00->field_0BF5) {
    case CASE_53:
      if (this_00->field_0C3C != CASE_1) {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      uVar26 = 0;
      uVar24 = 0;
      iVar16 = 0;
      pcVar25 = nullptr;
      iVar14 = 0;
      uVar22 = 0;
      sVar20 = 0;
      uVar19 = 0xb13f;
      uVar18 = 0xb12f;
      pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_SMALL"),0);
      uVar8 = (uint)(this_00->field_0BFC != '\0');
      break;
    case CASE_54:
    case CASE_55:
    case CASE_56:
    case CASE_57:
    case CASE_58:
    case CASE_59:
    case CASE_5A:
      if (this_00->field_0C31 == '\0') {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      goto LAB_0050eb47;
    case CASE_5B:
      local_c = 2;
      memset(local_c8, 0, 0x58); /* compiler bulk-zero initialization */
      iVar14 = 0;
      memset(local_25c, 0, 0x150); /* compiler bulk-zero initialization */
      local_10 = (undefined1 *)(this_00->field_0050 + 0x23);
      iVar16 = 0;
      local_14 = (Global_sub_00529590_param_1Enum *)this_00->field_0138;
      puVar9 = local_25c + 1;
      iVar14 = 0;
      do {
        puVar11 = local_10;
        puVar9[-1] = iVar14 + 1;
        *puVar9 = 0;
        puVar9[2] = st::machine_word_boundary_cast<uint>(puVar11);
        bVar17 = local_14 != nullptr;
        puVar9[4] = 0x1d;
        iVar21 = DAT_00806734;
        if (bVar17) {
          iVar21 = this_00->field_00A8;
        }
        puVar9[3] = iVar21 + 0x59 + iVar16;
        puVar9[5] = 0x11;
        puVar9[0x11] = 0;
        puVar9[0x15] = 0x101;
        puVar9[10] = 0x101;
        puVar9[0x16] = 3;
        puVar9[0xb] = 3;
        puVar9[0xc] = 0x4201;
        puVar9[0x17] = 0x4202;
        *(undefined2 *)(puVar9 + 0x18) = 0;
        *(undefined2 *)(puVar9 + 0xd) = 0;
        STField<undefined2>(puVar9,0x62) = 2;
        STField<undefined2>(puVar9,0x36) = 2;
        if (iVar14 == 0) {
          uVar18 = 0x3aa9;
LAB_0050edc5:
          puVar9[0x19] = uVar18;
          puVar9[0xe] = uVar18;
        }
        else if (iVar14 == 1) {
          uVar18 = 0x3aaa;
          goto LAB_0050edc5;
        }
        iVar16 = iVar16 + 0x12;
        puVar9 = puVar9 + 0x1c;
        local_c = local_c + -1;
        iVar14 = iVar14 + 1;
        if (local_c == 0) {
          local_7c = (uint)(byte)this_00->field_09D4;
          local_80 = local_25c;
          local_b8 = this_00->field_0008;
          local_c8[0] = 1;
          local_c8[1] = 1;
          local_78 = 1;
          local_74 = 1;
          local_b4 = 2;
          local_b0 = 0xb207;
          local_94 = 2;
          local_90 = 0xb206;
          local_98 = local_b8;
          /* ST_CALLSITE[0050EE58]: CALL dword ptr [EDX + 0x8] */
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,5,&this_00->field_09D0,nullptr,st::machine_word_boundary_cast<undefined4>(local_c8)
                     ,0);
          local_8 = (Global_sub_00529590_param_1Enum *)((uint)local_8 & 0xffffff00);
          memset(&this_00->field_0xa2d, 0, 0xea); /* compiler bulk-zero initialization */
          do {
            if ((this_00->field_09D4 == '\x01') &&
               ((Global_sub_00525EF0_param_2Enum)local_8 == CASE_3)) {
              uVar10 = 0;
            }
            else {
              uVar10 = 2;
            }
            uVar8 = (uint)local_8 & 0xff;
            local_10 = &this_00->field_0x0 + uVar8 * 0x27;
            puVar11 = local_10 + 0xa2d;
            *puVar11 = uVar10;
            uVar18 = st::fn_004034BD(this_00->field_09D4 + CASE_2,
                                        (Global_sub_00525EF0_param_2Enum)local_8);
            *(undefined4 *)(local_10 + 0xa2e) = uVar18;
            if ((this_00->field_09D4 == '\x01') &&
               ((Global_sub_00525EF0_param_2Enum)local_8 == '\x03')) {
              uVar12 = 0;
            }
            else {
              uVar12 = (uint)(this_00->field_0BFC != '\0');
            }
            /* ST_CALLSITE[0050EF1B]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
            uVar12 = st::fn_004017E9(this_00,5,0,uVar12,0xba,uVar8 * 0xb + 0x55,0,nullptr,
                               uVar8 + 0xb18f,uVar8 + 0xb19f,1,0,(int)puVar11,nullptr,0x11,10,0);
            this_00->field_0A15[uVar8] = uVar12;
            bVar13 = (Global_sub_00525EF0_param_2Enum)local_8 + 1;
            local_8 = (Global_sub_00529590_param_1Enum *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar13));
          } while (bVar13 < 4);
          g_currentExceptionFrame = local_10c.previous;
          return;
        }
      } while( true );
    case CASE_5C:
      if (*(int *)&this_00->field_0xc12 == 0) {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      uVar26 = 0;
      uVar24 = 0;
      iVar16 = 0;
      pcVar25 = nullptr;
      iVar14 = 0;
      uVar22 = 0;
      sVar20 = 0;
      uVar19 = 0xb13f;
      uVar18 = 0xb12f;
      pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_SMALL"),0);
      uVar8 = (uint)(this_00->field_0BFC != '\0');
      break;
    default:
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_67:
    case CASE_68:
      if (this_00->field_0BFC == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(byte)this_00->field_0C0B;
      }
      /* ST_CALLSITE[0050EC8C]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar8 = st::fn_004017E9(this_00,5,0,uVar8,0x1a,0x5d,1,st::mutable_c_string("BUT_MINUSSI"),0xb211,0xb212,0,0,0,
                        nullptr,0,0,0);
      this_00->field_0B1F[0] = uVar8;
      if (this_00->field_0BFC == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(byte)this_00->field_0C0C;
      }
      /* ST_CALLSITE[0050ECDA]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar8 = st::fn_004017E9(this_00,5,0,uVar8,0xba,0x5d,1,st::mutable_c_string("BUT_PLUSSI"),0xb213,0xb214,0,0,0,
                        nullptr,0,0,0);
      this_00->field_0B1F[1] = uVar8;
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_6D:
      /* ST_CALLSITE[0050EF83]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar8 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x2a,0x7b,1,
                        st::mutable_c_string("BUT_MINUSSI"),0xb211,0xb212,0,0,0,nullptr,0,0,0);
      this_00->field_0B1F[0] = uVar8;
      /* ST_CALLSITE[0050EFC5]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar8 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x45,0x7b,1,
                        st::mutable_c_string("BUT_PLUSSI"),0xb213,0xb214,0,0,0,nullptr,0,0,0);
      cVar2 = this_00->field_0BFC;
      this_00->field_0B1F[1] = uVar8;
      /* ST_CALLSITE[0050F00A]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar8 = st::fn_004017E9(this_00,5,0,(uint)(cVar2 != '\0'),0x8f,0x7b,1,st::mutable_c_string("BUT_MINUSSI"),0xb215,
                        0xb216,0,0,0,nullptr,0,0,0);
      this_00->field_0B1F[2] = uVar8;
      /* ST_CALLSITE[0050F04F]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar8 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0xaa,0x7b,1,
                        st::mutable_c_string("BUT_PLUSSI"),0xb217,0xb218,0,0,0,nullptr,0,0,0);
      cVar2 = this_00->field_0BFC;
      this_00->field_0B1F[3] = uVar8;
      /* ST_CALLSITE[0050F08E]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar8 = st::fn_004017E9(this_00,5,0,(uint)(cVar2 != '\0'),0x17,100,0,nullptr,0xb219,0xb21a,0,0,0
                        ,nullptr,0x11,10,0);
      cVar2 = this_00->field_0BFC;
      this_00->field_0B1F[4] = uVar8;
      /* ST_CALLSITE[0050F0D0]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar8 = st::fn_004017E9(this_00,5,0,(uint)(cVar2 != '\0'),0xc5,100,0,nullptr,0xb21b,0xb21c,0,0,0
                        ,nullptr,0x11,10,0);
      this_00->field_0B1F[5] = uVar8;
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
  }
  /* ST_CALLSITE[0050EB8C]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
  uVar8 = st::fn_004017E9(this_00,5,0,uVar8,0x9a,0x59,1,pCVar6,uVar18,uVar19,sVar20,uVar22,iVar14,pcVar25,
                    iVar16,uVar24,uVar26);
  this_00->field_0310[1] = uVar8;
  g_currentExceptionFrame = local_10c.previous;
  return;
}

// 0050F430 CPanelTy::SetCmdObj
#line 4 "decomp/ST.exe/functions/0050F430/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetCmdObj
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0050F587 MOV ECX,dword ptr [EBP + 0x8];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0050F430(CPanelTy *this,byte param_1)

{
  uint32_t _local_14;

  byte bVar1;
  bool bVar3;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  bool *pbVar7;
  bool *pbVar8;
  uint *puVar9;
  bool local_19c [36];
  bool local_178 [36];
  bool local_154 [36];
  bool local_130 [36];
  bool local_10c [36];
  InternalExceptionFrame local_e8;
  bool local_a4 [29];
  uint local_87;
  bool local_80 [29];
  uint local_63;
  bool local_5c [24];
  CPanelTy *local_44;
  bool local_40 [8];
  bool local_38 [12];
  bool local_2c [12];
  bool local_20 [12];
  bool local_14;
  int3 iStack_13;
  undefined1 local_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  bool local_8;
  bool local_7;
  bool local_6;
  bool local_5;

  if (DAT_00808784 != 0) {
    return;
  }
  if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return;
  }
  local_e8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e8;
  local_44 = this;
  iVar4 = st::fn_0072D7F0(local_e8.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0xa1a,0,iVar4,st::mutable_c_string("%s")
                               ,"CPanelTy::SetCmdObj");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel4.cpp"),0xa1a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00405E2F(0xae);
  this_00 = local_44;
  local_44->field_012C = 0;
  if (local_44->field_0C52 == '\0') {
    /* ST_CALLSITE[0050F4CC]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
    st::fn_00401E15(local_44,'\0',0);
  }
  this_00->field_012C = 1;
  if (g_researchPanel_008016E8 != nullptr) {
    /* ST_CALLSITE[0050F4E6]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
    st::fn_00401A73(g_researchPanel_008016E8,'\0');
  }
  if (g_bldBoatPanel_0080167C != nullptr) {
    /* ST_CALLSITE[0050F4F6]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
    st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
  }
  if (g_bldLabPanel_00801680 != nullptr) {
    /* ST_CALLSITE[0050F506]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
    st::fn_00401A73(g_bldLabPanel_00801680,'\0');
  }
  if (g_infocPanel_00801698 != nullptr) {
    /* ST_CALLSITE[0050F518]: CALL dword ptr [EAX + 0x1c] */
    (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
  }
  if (g_tradePanel_00802A44 != nullptr) {
    /* ST_CALLSITE[0050F527]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
    st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
  }
  if (g_bldObjPanel_00801684 != nullptr) {
    /* ST_CALLSITE[0050F537]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
    st::fn_00401A73(g_bldObjPanel_00801684,'\0');
  }
  if (g_behPanel_00801678 != nullptr) {
    /* ST_CALLSITE[0050F549]: CALL dword ptr [EDX + 0x1c] */
    (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
  }
  if (g_sAMPanel_008016EC != nullptr) {
    /* ST_CALLSITE[0050F559]: CALL dword ptr [EAX + 0x1c] */
    (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
  }
  if (g_upgPanel_00802A48 != nullptr) {
    /* ST_CALLSITE[0050F569]: CALL dword ptr [EDX + 0x1c] */
    (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
  }
  if (g_frmPanel_0080168C != nullptr) {
    /* ST_CALLSITE[0050F579]: CALL dword ptr [EAX + 0x1c] */
    (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
  }
  /* ST_CALLSITE[0050F582]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
  st::fn_004040FC(g_cursorClass_00802A30);
  bVar1 = (&this_00->field_0BFE)[param_1];
  switch((uint)bVar1) {
  case 1:
    pbVar7 = &local_6;
    local_6 = false;
    puVar9 = (undefined4 *)0x8;
    break;
  case 2:
  case 3:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x26:
  case 0x2a:
  case 0x34:
  case 0x37:
  case 0x42:
  case 0x43:
    /* ST_CALLSITE[0050F5E3]: CALL 0x004035ad; direct=004035AD CursorClassTy::sub_0054B630 */
    st::fn_004035AD(g_cursorClass_00802A30,(uint)bVar1,0);
    g_currentExceptionFrame = local_e8.previous;
    return;
  default:
    goto switchD_0050f5b2_caseD_4;
  case 0x15:
  case 0x16:
    local_5 = bVar1 != 0x15;
    pbVar7 = &local_5;
    puVar9 = (undefined4 *)0x28;
    break;
  case 0x1b:
    pbVar7 = local_38;
    local_38[4] = false;
    local_38[0] = true;
    local_38[1] = false;
    local_38[2] = false;
    local_38[3] = false;
    local_38[5] = true;
    local_38[6] = false;
    local_38[7] = true;
    local_38[8] = true;
    local_38[9] = true;
    local_38[10] = true;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x1c:
    pbVar7 = local_2c;
    local_2c[4] = false;
    local_2c[0] = true;
    local_2c[1] = false;
    local_2c[2] = false;
    local_2c[3] = false;
    local_2c[5] = true;
    local_2c[6] = false;
    local_2c[7] = true;
    local_2c[8] = true;
    local_2c[9] = true;
    local_2c[10] = true;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x1d:
  case 0x3d:
    if ((g_bldBoatPanel_0080167C != nullptr) &&
       (g_bldBoatPanel_0080167C->field_0172 == CASE_2)) {
      /* ST_CALLSITE[0050F720]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_bldBoatPanel_0080167C,'\x01');
    }
    /* ST_CALLSITE[0050F727]: CALL 0x00402798; direct=00402798 CPanelTy::sub_004FAD20 */
    st::fn_00402798(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x1e:
  case 0x1f:
    pbVar7 = &local_14;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_14 = CONCAT31((-(uint3)(bVar1 != 0x1e) & 0xc) + 9,1);
    local_10 = 0;
    uStack_f = 1;
    uStack_d = 0xff;
    local_c = 0xffff;
    local_a = 0xff;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x20:
  case 0x33:
    pbVar7 = &local_7;
    local_7 = false;
    puVar9 = (undefined4 *)0x22;
    break;
  case 0x21:
  case 0x41:
    if ((g_researchPanel_008016E8 != nullptr) &&
       (g_researchPanel_008016E8->field_0172 == CASE_2)) {
      /* ST_CALLSITE[0050F756]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_researchPanel_008016E8,'\x01');
    }
    /* ST_CALLSITE[0050F75D]: CALL 0x00402798; direct=00402798 CPanelTy::sub_004FAD20 */
    st::fn_00402798(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x22:
  case 0x3b:
  case 0x40:
    pbVar7 = local_40;
    local_40[4] = false;
    local_40[5] = false;
    local_40[6] = false;
    local_40[0] = true;
    local_40[1] = false;
    local_40[2] = false;
    local_40[3] = false;
    puVar9 = (undefined4 *)0x1f;
    break;
  case 0x23:
    pbVar7 = local_10c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    *pbVar7 = false;
    pbVar7 = local_10c;
    local_10c[0] = true;
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x24:
  case 0x25:
    pbVar8 = local_a4;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar8[0] = false;
      pbVar8[1] = false;
      pbVar8[2] = false;
      pbVar8[3] = false;
      pbVar8 = pbVar8 + 4;
    }
    pbVar7 = local_a4;
    *pbVar8 = false;
    local_a4[0] = true;
    puVar9 = (undefined4 *)0x17;
    local_87 = (uint)(bVar1 == 0x24);
    break;
  case 0x27:
  case 0x32:
    pbVar7 = &local_8;
    local_8 = false;
    puVar9 = (undefined4 *)0x9;
    break;
  case 0x28:
  case 0x29:
    pbVar7 = local_178;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    *pbVar7 = false;
    pbVar7 = local_178;
    local_178[0] = (bool)((bVar1 != 0x28) + '\f');
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x30:
  case 0x3f:
    if ((g_tradePanel_00802A44 != nullptr) && (g_tradePanel_00802A44->field_0172 == 2))
    {
      /* ST_CALLSITE[0050F7C3]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
      st::fn_00404AF7(g_tradePanel_00802A44,'\x01','\0');
    }
    /* ST_CALLSITE[0050F7CA]: CALL 0x00402798; direct=00402798 CPanelTy::sub_004FAD20 */
    st::fn_00402798(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x31:
    if ((g_tradePanel_00802A44 != nullptr) && (g_tradePanel_00802A44->field_0172 == 2))
    {
      /* ST_CALLSITE[0050F7FB]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
      st::fn_00404AF7(g_tradePanel_00802A44,'\x01','\x01');
    }
    /* ST_CALLSITE[0050F802]: CALL 0x00402798; direct=00402798 CPanelTy::sub_004FAD20 */
    st::fn_00402798(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x36:
    pbVar7 = local_130;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    *pbVar7 = false;
    pbVar7 = local_130;
    local_130[0] = true;
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x38:
  case 0x45:
    pbVar8 = local_80;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar8[0] = false;
      pbVar8[1] = false;
      pbVar8[2] = false;
      pbVar8[3] = false;
      pbVar8 = pbVar8 + 4;
    }
    pbVar7 = local_80;
    *pbVar8 = false;
    local_80[0] = true;
    puVar9 = (undefined4 *)0x17;
    local_63 = (uint)(bVar1 != 0x38);
    break;
  case 0x39:
  case 0x46:
    pbVar8 = local_19c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar8[0] = false;
      pbVar8[1] = false;
      pbVar8[2] = false;
      pbVar8[3] = false;
      pbVar8 = pbVar8 + 4;
    }
    pbVar7 = local_19c;
    *pbVar8 = false;
    puVar9 = (undefined4 *)0x17;
    local_19c[0] = (bool)((bVar1 != 0x39) + '\f');
    break;
  case 0x3e:
    /* ST_CALLSITE[0050F90B]: CALL 0x004035ad; direct=004035AD CursorClassTy::sub_0054B630 */
    st::fn_004035AD(g_cursorClass_00802A30,0xe,0x6c);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x44:
    if ((g_bldLabPanel_00801680 != nullptr) &&
       (g_bldLabPanel_00801680->field_0172 == CASE_2)) {
      /* ST_CALLSITE[0050F78C]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_bldLabPanel_00801680,'\x01');
    }
    /* ST_CALLSITE[0050F793]: CALL 0x00402798; direct=00402798 CPanelTy::sub_004FAD20 */
    st::fn_00402798(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x4f:
    pbVar7 = local_20;
    local_20[4] = false;
    local_20[0] = true;
    local_20[1] = false;
    local_20[2] = false;
    local_20[3] = false;
    local_20[5] = true;
    local_20[6] = false;
    local_20[7] = true;
    local_20[8] = true;
    local_20[9] = true;
    local_20[10] = true;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x50:
  case 0x51:
    pbVar7 = local_154;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    *pbVar7 = false;
    pbVar7 = local_154;
    local_154[0] = (bool)((bVar1 != 0x50) + '\x1b');
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x52:
    pbVar7 = local_5c;
    pbVar8 = local_5c;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar8[0] = false;
      pbVar8[1] = false;
      pbVar8[2] = false;
      pbVar8[3] = false;
      pbVar8 = pbVar8 + 4;
    }
    local_5c[0] = true;
    puVar9 = (undefined4 *)0x16;
  }
  st::fn_00403C33(puVar9,(uint *)pbVar7,0,0xffffffff);
switchD_0050f5b2_caseD_4:
  g_currentExceptionFrame = local_e8.previous;
  return;
}

