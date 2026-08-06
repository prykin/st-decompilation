#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/cpanel4.cpp

// 005044B0 CPanelTy::PaintMineInf
#line 1 "decomp/ST.exe/functions/005044B0/decomp.c"
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
  byte *pbVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  size_t _Count;
  undefined1 *_Dest;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  undefined1 *local_c;
  UINT local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pCVar2 = local_10;
  if (iVar3 == 0) {
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_10->field_0194,param_1,0x50,'\x01',
           (byte *)local_10->field_09D9[5]);
    if (pCVar2->field_0BF5 == CASE_38) {
      local_c = (undefined1 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(2));
    }
    else {
      local_c = (undefined1 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(pCVar2->field_0BF5 == CASE_4F));
    }
    pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02D2,
                                  (uint)local_c & 0xff);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,param_1 + 3,0x53,'\x01',pbVar4);
    if (pCVar2->field_0BF5 == CASE_38) {
      local_c = &DAT_007aa024;
      local_8 = 0x271c;
    }
    else if (pCVar2->field_0BF5 == CASE_4F) {
      local_c = &DAT_007aa020;
      local_8 = 0x271e;
    }
    else {
      local_c = &DAT_007aa028;
      local_8 = 0x271d;
    }
    _Count = 0x32;
    _Dest = &pCVar2->field_01E1;
    pcVar5 = st::fn_006B0140(0x2721,g_module_00807618);
    st::fn_0072E340(_Dest,pcVar5,_Count);
    pCVar2->field_0x212 = 0;
    for (puVar6 = st::fn_0072E560((uint *)_Dest,'\n'); puVar6 != nullptr;
        puVar6 = st::fn_0072E560(puVar6,'\n')) {
      *(undefined1 *)puVar6 = 0x20;
    }
    pcVar5 = st::fn_006B0140(local_8,g_module_00807618);
    st::external_00000080((LPSTR)&DAT_0080f33a,"&%s%s\n&1%s",local_c,pcVar5,_Dest);
    iVar3 = param_1 + 0x40;
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,iVar3,0x57,0x75,0x16);
    st::fn_00711B70(pCVar2->field_01B8,&DAT_0080f33a,-2,-1,0,-1,-1);
    pbVar4 = (byte *)st::fn_00710BA0(pCVar2->field_01C4,pCVar2->field_0194,0,iVar3,0x6d,0x75,0xe
                                         ,0);
    if (pbVar4 != nullptr) {
      st::external_00000080((LPSTR)&DAT_0080f33a,"%06d",(uint)(ushort)pCVar2->field_0C34);
      if (pCVar2->field_0BF5 == CASE_38) {
        uVar7 = 1;
      }
      else {
        uVar7 = (-(uint)(pCVar2->field_0BF5 != CASE_4F) & 0xfffffffe) + 2;
      }
      st::fn_007119C0(pCVar2->field_01C4,&DAT_0080f33a,-1,-1,uVar7);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar3,0x6f,'\x01',pbVar4);
      st::fn_00710F00(pCVar2->field_01C4);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar8 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x47,0,iVar3,"%s",
                             "CPanelTy::PaintMineInf");
  if (iVar8 == 0) {
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x47);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005047C0 CPanelTy::PaintPerRes
#line 1 "decomp/ST.exe/functions/005047C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintPerRes */

uint __thiscall st::fn_005047C0(CPanelTy *this,int param_1)

{
  CPanelTy *this_00;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EAX;
  byte bVar5;
  int iVar6;
  uint uVar7;
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
    st::fn_00404C7D(local_c,local_c->field_0194,param_1 + 0x39,0x65,local_c->field_0C33,0x2714);
    st::fn_00405A8D(this_00,this_00->field_0194,param_1 + 0x39,0x70,this_00->field_0C1C,0xffff,3,0);
    local_8 = local_8 & 0xffffff00;
    local_10 = ((uint)(byte)this_00->field_0C33 * 0x28) / 100;
    uVar4 = (uint)(byte)this_00->field_0C33 * -0x33333328;
    if (local_10 != 0) {
      uVar7 = 0;
      do {
        pbVar3 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,param_1 + 0xb + uVar7 * 4,0x5c,
               '\x01',pbVar3);
        bVar5 = (byte)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
        uVar7 = (uint)bVar5;
        uVar4 = local_10;
      } while (uVar7 < local_10);
    }
    if ((byte)local_8 < 0x28) {
      iVar2 = param_1 + 0xb + (local_8 & 0xff) * 4;
      iVar6 = 0x28 - (local_8 & 0xff);
      do {
        pbVar3 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        uVar4 = st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar2,0x5c,'\x01',pbVar3
                      );
        iVar2 = iVar2 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    g_currentExceptionFrame = local_54.previous;
    return uVar4;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x57,0,iVar2,"%s",
                             "CPanelTy::PaintPerRes");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x57);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  return extraout_EAX;
}

// 005049A0 CPanelTy::PaintPerResSI
#line 1 "decomp/ST.exe/functions/005049A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintPerResSI */

uint __thiscall st::fn_005049A0(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EAX;
  byte bVar6;
  int iVar7;
  uint uVar8;
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
    st::fn_00404F1B(local_c,local_c->field_0194,0x5c,0x50,local_c->field_0C33,0x2714);
    pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x33,0x7b,'\x01',pbVar4);
    bVar6 = 0;
    local_8 = local_8 & 0xffffff00;
    local_10 = ((uint)(byte)pCVar2->field_0C33 * 0x21) / 100;
    uVar5 = (uint)(byte)pCVar2->field_0C33 * -0x70a3d701;
    if (local_10 != 0) {
      uVar8 = 0;
      do {
        pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,uVar8 * 4 + 0x35,0x7d,'\x01',
               pbVar4);
        bVar6 = bVar6 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
        uVar8 = (uint)bVar6;
        uVar5 = local_10;
      } while (uVar8 < local_10);
    }
    if (bVar6 < 0x21) {
      iVar7 = 0x21 - (local_8 & 0xff);
      iVar3 = (local_8 & 0xff) * 4 + 0x35;
      do {
        pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
        uVar5 = st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar3,0x7d,'\x01',pbVar4);
        iVar3 = iVar3 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    g_currentExceptionFrame = local_54.previous;
    return uVar5;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x68,0,iVar3,"%s",
                             "CPanelTy::PaintPerResSI");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x68);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  return extraout_EAX;
}

// 00504B80 CPanelTy::PaintNameRes
#line 1 "decomp/ST.exe/functions/00504B80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintNameRes */

void __thiscall st::fn_00504B80(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  UINT resourceId;
  uint *resourceString;
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
    pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_029A,uVar4);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,param_1 + 5,0x65,'\x01',pbVar5);
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,param_1 + 2,0x52,0xb2,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar4 = 0;
    iVar6 = -1;
    iVar3 = -2;
    module = g_module_00807618;
    resourceId = st::fn_00404B29(pCVar2->field_0C31,pCVar2->field_0C32);
    resourceString = (uint *)st::fn_006B0140(resourceId,module);
    st::fn_00711B70(pCVar2->field_01B8,resourceString,iVar3,iVar6,uVar4,iVar7,iVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x76,0,iVar3,"%s",
                             "CPanelTy::PaintNameRes");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x76);
  return;
}

// 00504CF0 CPanelTy::PaintNameResSI
#line 1 "decomp/ST.exe/functions/00504CF0/decomp.c"
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
  byte *pbVar5;
  UINT resourceId;
  uint *resourceString;
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
    pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_029A,uVar4);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x26,0x50,'\x01',pbVar5);
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,0x15,0x6c,0xc3,0xb);
    iVar8 = -1;
    iVar7 = -1;
    uVar4 = 5;
    iVar6 = -1;
    iVar3 = -2;
    module = g_module_00807618;
    resourceId = st::fn_00404B29(pCVar2->field_0C31,pCVar2->field_0C32);
    resourceString = (uint *)st::fn_006B0140(resourceId,module);
    st::fn_00711B70(pCVar2->field_01B8,resourceString,iVar3,iVar6,uVar4,iVar7,iVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x84,0,iVar3,"%s",
                             "CPanelTy::PaintNameResSI");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x84);
  return;
}

// 00504E60 CPanelTy::PaintIDSObj
#line 1 "decomp/ST.exe/functions/00504E60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintIDSObj */

void __thiscall st::fn_00504E60(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  uint *resourceString;
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
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0xa0,0,iVar3,"%s",
                               "CPanelTy::PaintIDSObj");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0xa0);
    return;
  }
  if (DAT_0080874e == '\x03') {
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_8->field_0194,0xf,0x8d,'\x01',
           (byte *)local_8->field_09D9[6]);
    if (pCVar2->field_0C4D == 0) goto cf_common_exit_00504F81;
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,0x10,0x8e,
                     *(int *)(pCVar2->field_09D9[6] + 4),0xb);
    resourceId = pCVar2->field_0C4D;
  }
  else {
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
  resourceString = (uint *)st::fn_006B0140(resourceId,g_module_00807618);
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
#line 1 "decomp/ST.exe/functions/00505230/decomp.c"
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
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
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
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x153,0,iVar4,"%s"
                               ,"CPanelTy::PaintMunition");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x153);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_2c->field_0194,param_1,0x36,'\x01',
         (byte *)local_2c->field_09D9[8]);
  pCVar9 = &pCVar2->field_0C11;
  local_6 = 0;
  local_28 = -1;
  do {
    pbVar5 = nullptr;
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
          iVar4 = 1;
        }
        else {
          if (DAT_0080874e == '\x01') {
            iVar4 = 6;
          }
          else {
            if (DAT_0080874e != '\x02') goto LAB_005053b0;
            iVar4 = 0x83;
          }
          iVar4 = st::fn_0040186B((uint)DAT_0080874d,iVar4);
          iVar4 = iVar4 + 5;
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        }
        break;
      case 1:
        local_10 = 0xf;
        local_c = 0x1a;
        if (*pCVar9 == CASE_0) {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar4 = 2;
        }
        else if (DAT_0080874e == '\x01') {
          iVar4 = st::fn_0040186B((uint)DAT_0080874d,6);
          iVar4 = iVar4 + 10;
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        }
        else if (DAT_0080874e == '\x02') {
          iVar4 = st::fn_0040186B((uint)DAT_0080874d,0x83);
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar4 = iVar4 + 10;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar4 = 2;
        }
        break;
      case 2:
        local_10 = 0x16;
        local_c = 0xf;
        if (*pCVar9 == CASE_0) {
          iVar4 = 9;
LAB_00505581:
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar4 = 0x1d;
        }
        break;
      case 3:
        local_10 = 0x1d;
        local_c = 0x31;
        if (*pCVar9 == CASE_0) {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar4 = 4;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar4 = 0x10;
        }
        break;
      case 4:
        local_10 = 0x1b;
        local_c = 0x25;
        if (*pCVar9 == CASE_0) {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar4 = 6;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar4 = 0x17;
        }
        break;
      case 5:
        local_10 = 0x28;
        local_c = 0x32;
        if (*pCVar9 == CASE_0) {
          iVar4 = 5;
          goto LAB_00505581;
        }
        pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        iVar4 = 0x19;
        break;
      case 6:
        local_10 = 0x1f;
        local_c = 0x22;
        if (*pCVar9 == CASE_0) {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar4 = 7;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar4 = 0x18;
        }
        break;
      case 7:
        local_10 = 0x1e;
        local_c = 0x3b;
        if (*pCVar9 == CASE_0) {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar4 = 8;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
          iVar4 = 0x16;
        }
        break;
      case 8:
        local_10 = 0x28;
        local_c = 0x19;
        if (*pCVar9 == CASE_0) {
          iVar4 = 3;
          goto LAB_00505581;
        }
        pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        iVar4 = 0xf;
        break;
      case -1:
        local_10 = 0xf;
        local_c = 4;
        if (DAT_0080874e == '\x01') {
          iVar4 = st::fn_0040186B((uint)DAT_0080874d,6);
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        }
        else if (DAT_0080874e == '\x02') {
          iVar4 = st::fn_0040186B((uint)DAT_0080874d,0x83);
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
        }
        else {
          pAVar11 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
          iVar4 = 0;
        }
        break;
      default:
        goto switchD_00505324_default;
      }
      pbVar5 = (byte *)st::fn_0070B3A0(pAVar11,iVar4);
    }
switchD_00505324_default:
    if (pbVar5 != nullptr) {
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,local_10 + 0xf + param_1,
             local_c + 0x36,'\x06',pbVar5);
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
      uVar8 = 0;
      local_20 = (local_14 & 0xff) * 0xb + 0x3b;
      do {
        pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,3);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,param_1 + 0x4d + uVar8 * 4,
               local_20,'\x01',pbVar5);
        bVar7 = (byte)local_18 + 1;
        local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar7));
        uVar8 = (uint)bVar7;
      } while (uVar8 < local_1c);
    }
    if ((byte)local_18 < 0xf) {
      local_20 = (uVar3 & 0xff) * 0xb + 0x3b;
      iVar4 = 0xf - (local_18 & 0xff);
      local_1c = param_1 + 0x4d + (local_18 & 0xff) * 4;
      do {
        pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,local_1c,local_20,'\x01',pbVar5);
        local_1c = local_1c + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    st::external_00000080(&pCVar2->field_01E1,"%d",(uint)*(ushort *)(local_24 + 2));
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,param_1 + 0x8f,
                     (uVar3 & 0xff) * 0xb + 0x39,0x23,0xc);
    st::fn_00711B70(pCVar2->field_01B8,(uint *)&pCVar2->field_01E1,-3,-1,0,-1,-1);
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
#line 1 "decomp/ST.exe/functions/00505960/decomp.c"
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
  uint uVar4;
  byte *pbVar5;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
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
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x184,0,iVar3,"%s"
                               ,"CPanelTy::PaintArsenal");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x184);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_28->field_0194,0,0x49,0x50,0x6f,0x37,0x3d);
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0,0x4a,0x51,0x29,0x34,0x3f);
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0,0x4b,0x52,0x27,0x32,0x3a);
  if (pCVar2->field_09D4 == '\x01') {
    local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)(4));
    bVar7 = 3;
  }
  else {
    local_20 = (uint)STPiece<1,3>(local_20) << 8;
    bVar7 = 4;
  }
  local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar7));
  if (bVar7 != 0) {
    local_14 = 0;
    local_2c = local_20 & 0xff;
    local_1c = 0x54;
    local_18 = (AnonShape_00505960_269BEFC9 *)(&pCVar2->field_0C11 + local_2c * 6);
    local_24 = (uint)bVar7;
    do {
      if (*(CPanelTy_field_0C11State *)local_18 == CASE_0) {
        uVar4 = 0;
      }
      else {
        uVar4 = ((uint)local_18->field_0002 * 10) / (uint)local_18->field_0004;
      }
      pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,5);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x74,local_1c,'\x01',pbVar5);
      local_10 = local_10 & 0xffffff00;
      if (uVar4 != 0) {
        uVar8 = 0;
        do {
          pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,uVar8 * 4 + 0x76,local_1c + 2,
                 '\x01',pbVar5);
          bVar7 = (byte)local_10 + 1;
          local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar7));
          uVar8 = (uint)bVar7;
        } while (uVar8 < uVar4);
      }
      if ((byte)local_10 < 10) {
        iVar9 = 10 - (local_10 & 0xff);
        iVar3 = (local_10 & 0xff) * 4 + 0x76;
        do {
          pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar3,local_1c + 2,'\x01',
                 pbVar5);
          iVar3 = iVar3 + 4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      st::external_00000080(&pCVar2->field_01E1,"%3d",(uint)local_18->field_0002);
      uVar4 = local_1c;
      st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,0xa2,local_1c,0x15,0xc);
      st::fn_007119C0(pCVar2->field_01B8,(uint *)&pCVar2->field_01E1,-3,-1,5);
      if ((char)local_20 == '\0') {
        if ((int)uVar4 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)(&PTR_DAT_00505cec)[local_14])();
          return;
        }
      }
      else if ((int)uVar4 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)(&PTR_DAT_00505cdc)[local_14])();
        return;
      }
      if (*(char *)local_18 == '\0') {
        pAVar6 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
      }
      else {
        pAVar6 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
      }
      pbVar5 = (byte *)st::fn_0070B3A0(pAVar6,(-(uint)(*(char *)local_18 != '\0') & 0x14) + 0xb +
                                           local_14 + local_2c);
      if (pbVar5 != nullptr) {
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,local_c,local_8,'\x06',pbVar5);
      }
      local_14 = local_14 + 1;
      local_18 = (AnonShape_00505960_269BEFC9 *)&local_18->field_0x6;
      local_1c = uVar4 + 0xb;
      local_24 = local_24 - 1;
    } while (local_24 != 0);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

// 00505DF0 CPanelTy::PaintBioSonar
#line 1 "decomp/ST.exe/functions/00505DF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintBioSonar

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00505DF0(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  byte bVar6;
  int iVar7;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)local_c->field_02B2,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x33,0x7b,'\x01',pbVar4);
    if (pCVar2->field_0C2F != 0) {
      st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0194,0,0x24,0x4c,0xa4,0x2b);
      pcVar5 = st::fn_006B0140(0x38ae,g_module_00807618);
      st::external_00000080((LPSTR)&DAT_0080f33a,"%d\n%s",(uint)(ushort)pCVar2->field_0C2F,pcVar5);
      st::fn_00711B70(pCVar2->field_01B8,&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    if (pCVar2->field_0C29 != 0xff) {
      if (0x21 < pCVar2->field_0C29) {
        pCVar2->field_0C29 = 0x21;
      }
      bVar6 = 0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2->field_0C29 != 0) {
        do {
          pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,(local_8 & 0xff) * 4 + 0x35,
                 0x7d,'\x01',pbVar4);
          bVar6 = bVar6 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
        } while (bVar6 < pCVar2->field_0C29);
      }
      if (bVar6 < 0x21) {
        iVar7 = 0x21 - (local_8 & 0xff);
        iVar3 = (local_8 & 0xff) * 4 + 0x35;
        do {
          pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar3,0x7d,'\x01',pbVar4);
          iVar3 = iVar3 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x19a,0,iVar3,"%s",
                             "CPanelTy::PaintBioSonar");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x19a);
  return;
}

// 005061C0 CPanelTy::PaintCtrlObj
#line 1 "decomp/ST.exe/functions/005061C0/decomp.c"
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
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall st::fn_005061C0(CPanelTy *this,int param_1)

{
  CPanelTy_field_0C11State CVar1;
  CPanelTy *this_00;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  UINT UVar7;
  char *pcVar8;
  uint *puVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  Global_sub_00529500_param_1Enum GVar15;
  int GVar14;
  char *pcVar16;
  HINSTANCE pHVar17;
  RecoveredSourceFamily_dibcopy *pRVar18;
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
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x348,0,iVar4,
                                "%s","CPanelTy::PaintCtrlObj");
    if (iVar11 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x348);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 0) goto switchD_00506214_caseD_2;
  switch(local_20->field_0BFA) {
  case CASE_0:
  case CASE_3:
  case CASE_4:
    pbVar6 = (byte *)local_20->field_09D9[0];
    pRVar18 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    iVar11 = 0;
    iVar4 = 0;
    goto LAB_0050633b;
  case CASE_1:
    if (local_20->field_0BFB == '\x02') {
      pbVar6 = (byte *)local_20->field_09D9[1];
      pRVar18 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
      iVar11 = 0;
      iVar4 = 0;
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
    pbVar6 = (byte *)local_20->field_09D9[3];
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
    pbVar6 = (byte *)local_20->field_09D9[2];
LAB_005062d5:
    pRVar18 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
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
    pbVar6 = (byte *)local_20->field_09D9[1];
    pRVar18 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    break;
  case CASE_36:
    if (local_20->field_0BF9 == '\x01') {
      pbVar6 = (byte *)local_20->field_09D9[3];
      pRVar18 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    }
    else {
      if (local_20->field_0BF9 != '\x02') goto switchD_00506270_caseD_53;
      pbVar6 = (byte *)local_20->field_09D9[2];
      pRVar18 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    }
    break;
  default:
    goto switchD_00506270_caseD_53;
  }
  st::fn_00403229(pRVar18,0,0,'\x01',pbVar6);
switchD_00506270_caseD_53:
  switch(this_00->field_0BF5) {
  case CASE_36:
    if (this_00->field_0BF9 == '\x01') {
      pbVar6 = (byte *)this_00->field_09D9[4];
      pRVar18 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      iVar11 = 0x35;
      iVar4 = 0xc;
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
    pbVar6 = (byte *)this_00->field_09D9[4];
    pRVar18 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
    iVar11 = 0x35;
    iVar4 = 0xc;
LAB_0050633b:
    st::fn_00403229(pRVar18,iVar4,iVar11,'\x01',pbVar6);
  }
switchD_00506214_caseD_2:
  if (this_00->field_0BFA != CASE_1) {
    if (this_00->field_0BFA == CASE_4) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FE:
        iVar4 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
                *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4,0x50,'\x01',
               (byte *)this_00->field_09D9[5]);
        pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,
                                      (uint)this_00->field_0C11);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4 + 3,0x53,'\x01',pbVar6);
        pbVar6 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[5],0,0x49,7,
                                             0x67,0xc,0);
        if (pbVar6 != nullptr) {
          if (this_00->field_0BF5 == 0xfe) {
            local_8 = st::fn_004054CA(this_00->field_0C11);
          }
          else {
            local_8 = st::fn_004019BF(this_00->field_0BF5);
          }
          uVar5 = st::fn_004040C5(local_8);
          iVar19 = -1;
          iVar11 = -1;
          puVar9 = (uint *)st::fn_006B0140(local_8,g_module_00807618);
          st::fn_007119C0(this_00->field_01B8,puVar9,iVar11,iVar19,uVar5);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4 + 0x49,0x57,'\x01',
                 pbVar6);
          st::fn_00710F00(this_00->field_01B8);
        }
        local_1c = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[5],0,100,0x14
                                               ,0x3c,0x14,0);
        if (local_1c != nullptr) {
          uVar5 = 0;
          st::external_00000080((LPSTR)&DAT_0080f33a,"%06d",*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0C11) {
          case CASE_0:
            uVar5 = 0;
            break;
          case CASE_1:
            uVar5 = 2;
            break;
          case CASE_2:
            uVar5 = 1;
            break;
          case CASE_3:
            uVar5 = 7;
            break;
          case CASE_4:
            uVar5 = 3;
          }
          st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,uVar5);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4 + 100,100,'\x01',
                 local_1c);
          st::fn_00710F00(this_00->field_01C4);
        }
        break;
      case CASE_FD:
        iVar4 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
                *(int *)((byte *)this_00->field_09D9[0xe] + 4)) / 2;
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4,0x3f,'\x01',
               (byte *)this_00->field_09D9[0xe]);
        CVar1 = this_00->field_0C11;
        if ((CVar1 != CASE_0) && (CVar1 < 0x16)) {
          pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CE,
                                        CVar1 - 1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4 + 6,0x44,'\x01',pbVar6);
        }
        pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,10);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4 + 4,0x42,'\x06',pbVar6);
        pbVar6 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[0xe],0,0x38,4,
                                             0x7b,0x19,0);
        if (pbVar6 != nullptr) {
          iVar21 = -1;
          iVar20 = -1;
          uVar5 = 0;
          iVar19 = -1;
          iVar11 = -2;
          pHVar17 = g_module_00807618;
          UVar7 = st::fn_0040270C(this_00->field_0C11);
          puVar9 = (uint *)st::fn_006B0140(UVar7,pHVar17);
          st::fn_00711B70(this_00->field_01B8,puVar9,iVar11,iVar19,uVar5,iVar20,iVar21);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4 + 0x38,0x43,'\x01',
                 pbVar6);
          st::fn_00710F00(this_00->field_01B8);
        }
        pbVar6 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[0xe],0,2,0x1e,
                                             0xb2,0x22,0);
        if (pbVar6 != nullptr) {
          st::fn_00711B70(this_00->field_01B8,(uint *)this_00->field_0C16,-2,-1,1,-1,-1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4 + 2,0x5d,'\x01',pbVar6);
          st::fn_00710F00(this_00->field_01B8);
        }
      }
    }
    goto switchD_00506377_caseD_df;
  }
  if (this_00->field_0BFB == '\x02') {
    GVar15 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    local_8 = GVar15;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar15,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != 0) {
      uVar5 = st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A);
      pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,uVar5);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar15 + 6,0x5d,'\x01',pbVar6);
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,GVar15 + 0x36,0x5d,7,0x21,
                   0);
      GVar15 = local_8;
      bVar3 = this_00->field_0C24;
      local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar3));
      cVar13 = (char)(((uint)bVar3 * 0x21) / 100);
      local_10 = (Global_sub_00526BA0_param_1Enum *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(cVar13));
      if ((bVar3 != 0) && (cVar13 == '\0')) {
        local_10 = (Global_sub_00526BA0_param_1Enum *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(1));
      }
      if (bVar3 < 0x46) {
        iVar4 = (-(uint)(bVar3 < 0x14) & 5) + 5;
      }
      else {
        iVar4 = 0;
      }
      uVar5 = (uint)local_10 & 0xff;
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar5,
                 (byte *)this_00->field_028A,0,iVar4,*(int *)(this_00->field_028A + 4) - uVar5,5,
                 uVar5);
      pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar15 + 5,0x5c,'\x06',pbVar6);
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,GVar15 + 2,0x52,0xb2,10);
      pHVar17 = g_module_00807618;
      UVar7 = st::fn_00403684(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A,0);
      pcVar8 = st::fn_006B0140(UVar7,pHVar17);
      uVar5 = 0xffffffff;
      do {
        pcVar16 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar16 = pcVar8 + 1;
        cVar13 = *pcVar8;
        pcVar8 = pcVar16;
      } while (cVar13 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar16 + -uVar5;
      pcVar16 = &this_00->field_01E1;
      memmove(pcVar16, pcVar8, uVar5); /* compiler REP MOVS byte copy */
      uVar12 = 0;
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
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == 0) {
LAB_0050709d:
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,GVar14 + 2,0x52,0xb2,0x2f);
LAB_005070be:
      uVar5 = 0;
      UVar7 = 0x2713;
      goto LAB_0050777e;
    }
    uVar5 = st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A);
    pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,uVar5);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14 + 6,0x5d,'\x01',pbVar6);
    if (this_00->field_0C26 != 0) {
      st::external_00000080(&this_00->field_01E1,"%d",(uint)(byte)this_00->field_0C26);
      st::fn_00710A90(this_00->field_01C8,this_00->field_0194,0,GVar14 + 6,0x5d,0x30,0x21);
      st::fn_007119C0(this_00->field_01C8,(uint *)&this_00->field_01E1,-2,-1,0);
    }
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,GVar14 + 0x36,0x5d,7,0x21,0);
    GVar15 = local_8;
    bVar3 = this_00->field_0C24;
    cVar13 = (char)(((uint)bVar3 * 0x21) / 100);
    local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(cVar13));
    if ((bVar3 != 0) && (cVar13 == '\0')) {
      local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(1));
    }
    if (bVar3 < 0x46) {
      iVar4 = (-(uint)(bVar3 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = (uint)local_1c & 0xff;
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar5,
               (byte *)this_00->field_028A,0,iVar4,*(int *)(this_00->field_028A + 4) - uVar5,5,uVar5
              );
    pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar15 + 5,0x5c,'\x06',pbVar6);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,GVar15 + 2,0x52,0xb2,10);
    pHVar17 = g_module_00807618;
    UVar7 = st::fn_00403684(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A,0);
    pcVar8 = st::fn_006B0140(UVar7,pHVar17);
    uVar5 = 0xffffffff;
    do {
      pcVar16 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar16 = pcVar8 + 1;
      cVar13 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar13 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar16 + -uVar5;
    pcVar16 = &this_00->field_01E1;
    memmove(pcVar16, pcVar8, uVar5); /* compiler REP MOVS byte copy */
    uVar12 = 0;
    for (puVar9 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
        puVar9 != nullptr; puVar9 = st::fn_0072E560(puVar9,'\n')) {
      *(undefined1 *)puVar9 = 0x20;
    }
    goto cf_common_exit_00507034;
  case CASE_33:
    iVar11 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[8] + 4)) / 2;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar11,0x36,'\x01',
           (byte *)this_00->field_09D9[8]);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar11 + 5,0x39,'\x01',
           (byte *)this_00->field_09D9[9]);
    local_c = &this_00->field_0C1C;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_8 = 0;
    iVar4 = 0x3a;
    do {
      if (*local_10 == 0) {
        st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar11 + 2,iVar4 - 2,0xb2,0x2f);
        iVar22 = -1;
        iVar21 = -1;
        uVar5 = 0;
        iVar20 = -1;
        iVar19 = -2;
        puVar9 = (uint *)st::fn_006B0140(0x2713,g_module_00807618);
        st::fn_00711B70(this_00->field_01B8,puVar9,iVar19,iVar20,uVar5,iVar21,iVar22);
      }
      else {
        uVar5 = st::fn_004056F5(*local_10,(&this_00->field_0C1A)[local_8]);
        pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,
                                      uVar5);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar11 + 6,iVar4,'\x01',pbVar6);
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar11 + 0x36,iVar4,7,
                     0x21,0);
        bVar3 = (&this_00->field_0C24)[local_8];
        local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(bVar3));
        cVar13 = (char)(((uint)bVar3 * 0x21) / 100);
        local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(cVar13));
        if ((bVar3 != 0) && (cVar13 == '\0')) {
          local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(1));
        }
        if (bVar3 < 0x46) {
          local_1c = (byte *)((-(uint)(bVar3 < 0x14) & 5) + 5);
        }
        else {
          local_1c = nullptr;
        }
        uVar5 = local_18 & 0xff;
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar11 + 0x37,
                   (iVar4 - uVar5) + 0x21,(byte *)this_00->field_028A,0,(int)local_1c,
                   *(int *)(this_00->field_028A + 4) - uVar5,5,uVar5);
        pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar11 + 5,iVar4 + -1,'\x06',
               pbVar6);
        st::fn_00404C7D(this_00,this_00->field_0194,iVar11 + 0x41,iVar4,
                      100 - (&this_00->field_0C24)[local_8],0x36b1);
        st::fn_00405A8D(this_00,this_00->field_0194,iVar11 + 0x41,iVar4 + 0xb,*local_c,local_c[2],4,2);
      }
      iVar4 = iVar4 + 0x23;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    } while (iVar4 < 0x80);
    break;
  case CASE_34:
    iVar4 = ((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004;
    iVar11 = *(int *)(this_00->field_09D9[8] + 4);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x60,0x1f,'\x01',
           (byte *)this_00->field_09D9[0xb]);
    st::fn_00403526(this_00,(iVar4 - iVar11) / 2);
    break;
  case CASE_35:
    iVar4 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
            *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    if (this_00->field_0C31 != '\0') {
      st::fn_004057BD(this_00,iVar4);
      st::fn_00405862(this_00,iVar4);
      break;
    }
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar4 + 2,0x52,0xb2,0x2f);
    if (this_00->field_0C2F == 0) goto LAB_005070be;
    pcVar8 = st::fn_006B0140(0x273c,g_module_00807618);
    st::external_00000080((LPSTR)&DAT_0080f33a,"%d %s",(uint)(ushort)this_00->field_0C2F,pcVar8);
    iVar20 = -1;
    iVar19 = -1;
    uVar5 = 0;
    iVar11 = -1;
    iVar4 = -2;
    puVar9 = &DAT_0080f33a;
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
    iVar4 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
            *(int *)((byte *)this_00->field_09D9[7] + 4)) / 2;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4,0x67,'\x01',
           (byte *)this_00->field_09D9[7]);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar4 + 2,0x69,0xa7,0xc);
    iVar21 = -1;
    iVar20 = -1;
    uVar5 = 0;
    iVar19 = -1;
    iVar11 = -2;
    pHVar17 = g_module_00807618;
    UVar7 = st::fn_00405B00(this_00->field_0BF5);
    puVar9 = (uint *)st::fn_006B0140(UVar7,pHVar17);
    st::fn_00711B70(this_00->field_01B8,puVar9,iVar11,iVar19,uVar5,iVar20,iVar21);
    if (this_00->field_0C29 != 0xff) {
      if (0x28 < this_00->field_0C29) {
        this_00->field_0C29 = 0x28;
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0C29 != 0) {
        do {
          if ((this_00->field_0BF5 != CASE_4D) || (iVar11 = 4, this_00->field_0C28 == '\0')) {
            iVar11 = 3;
          }
          pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                        iVar11);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
                 iVar4 + 6 + (local_8 & 0xff) * 4,0x75,'\x01',pbVar6);
          bVar3 = (undefined1)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        } while (bVar3 < this_00->field_0C29);
      }
      if ((byte)(undefined1)local_8 < 0x28) {
        iVar11 = 0x28 - (local_8 & 0xff);
        iVar4 = iVar4 + 6 + (local_8 & 0xff) * 4;
        do {
          pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4,0x75,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    break;
  case CASE_38:
  case CASE_39:
  case CASE_4F:
    st::fn_00403E4F(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4))
                         / 2);
    break;
  case CASE_3A:
    iVar11 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar11,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    iVar4 = iVar11 + 2;
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar4,0x52,0x69,0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar5 = 1;
    iVar20 = -1;
    iVar19 = -3;
    puVar9 = (uint *)st::fn_006B0140(0x36b7,g_module_00807618);
    st::fn_00711B70(this_00->field_01B8,puVar9,iVar19,iVar20,uVar5,iVar21,iVar22);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar4,0x5d,0x69,0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar5 = 1;
    iVar20 = -1;
    iVar19 = -3;
    puVar9 = (uint *)st::fn_006B0140(0x36b8,g_module_00807618);
    st::fn_00711B70(this_00->field_01B8,puVar9,iVar19,iVar20,uVar5,iVar21,iVar22);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar4,0x69,0xb2,0xc);
    iVar21 = -1;
    iVar20 = -1;
    uVar5 = 1;
    iVar19 = -1;
    iVar4 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x36b6,g_module_00807618);
    st::fn_00711B70(this_00->field_01B8,puVar9,iVar4,iVar19,uVar5,iVar20,iVar21);
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0C3A != '\0') {
      do {
        pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
               iVar11 + 0x70 + (local_8 & 0xff) * 4,0x54,'\x01',pbVar6);
        bVar3 = (undefined1)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < (byte)this_00->field_0C3A);
    }
    if ((byte)(undefined1)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar4 = iVar11 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4,0x54,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        local_1c = local_1c + -1;
      } while (local_1c != nullptr);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0C3B != '\0') {
      do {
        pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
               iVar11 + 0x70 + (local_8 & 0xff) * 4,0x5f,'\x01',pbVar6);
        bVar3 = (undefined1)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < (byte)this_00->field_0C3B);
    }
    if ((byte)(undefined1)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar4 = iVar11 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4,0x5f,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        local_1c = (byte *)((int)local_1c + -1);
      } while (local_1c != nullptr);
    }
    local_8 = local_8 & 0xffffff00;
    local_1c = (byte *)(((uint)(ushort)this_00->field_0C34 * 0x28) / 400);
    if (local_1c != nullptr) {
      pbVar6 = nullptr;
      do {
        pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,2);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar11 + 0xb + (int)pbVar6 * 4,
               0x76,'\x01',pbVar10);
        bVar3 = (undefined1)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        pbVar6 = (byte *)(uint)bVar3;
      } while (pbVar6 < local_1c);
    }
    if ((byte)(undefined1)local_8 < 0x28) {
      iVar19 = 0x28 - (local_8 & 0xff);
      iVar4 = iVar11 + 0xb + (local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4,0x76,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    break;
  case CASE_3C:
    iVar4 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
            *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    switch(this_00->field_0C3C) {
    case CASE_0:
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar4,0x50,
                       *(int *)(this_00->field_09D9[5] + 4),*(int *)(this_00->field_09D9[5] + 8));
      uVar5 = 1;
      UVar7 = 0x36bb;
      goto LAB_0050777e;
    case CASE_1:
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4 + 5,0x65,'\x01',
             (byte *)this_00->field_09D9[0xd]);
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar4 + 2,0x52,0xb2,10);
      iVar21 = -1;
      iVar20 = -1;
      uVar5 = 0;
      iVar19 = -1;
      iVar11 = -2;
      puVar9 = (uint *)st::fn_006B0140(0x36bd,g_module_00807618);
      st::fn_00711B70(this_00->field_01B8,puVar9,iVar11,iVar19,uVar5,iVar20,iVar21);
      st::fn_00404C7D(this_00,this_00->field_0194,iVar4 + 0x39,0x65,*(byte *)&this_00->field_0C3D,
                    0x2714);
      uVar5 = (uint)(this_00->field_0C3D * 0x28) / 100;
      local_18 = 0;
      if (uVar5 != 0) {
        iVar11 = iVar4 + 0xb;
        local_1c = (byte *)uVar5;
        local_18 = uVar5;
        do {
          pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar11,0x5c,'\x01',pbVar6);
          iVar11 = iVar11 + 4;
          local_1c = (byte *)((int)local_1c - 1);
        } while (local_1c != nullptr);
        local_1c = nullptr;
      }
      if (local_18 < 0x28) {
        iVar4 = iVar4 + 0xb + local_18 * 4;
        iVar11 = 0x28 - local_18;
        do {
          pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar4,0x5c,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      break;
    case CASE_2:
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar4,0x54,
                       *(int *)(this_00->field_09D9[5] + 4),0x21);
      iVar21 = -1;
      iVar20 = -1;
      uVar5 = 1;
      iVar19 = -1;
      iVar11 = -2;
      puVar9 = (uint *)st::fn_006B0140(0x36bc,g_module_00807618);
      st::fn_00711B70(this_00->field_01B8,puVar9,iVar11,iVar19,uVar5,iVar20,iVar21);
      st::external_00000080(&this_00->field_01E1,"%4d",this_00->field_0C3D);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00710A90(this_00->field_01BC,this_00->field_0194,0,iVar4,0x71,
                       *(int *)(this_00->field_09D9[5] + 4),
                       *(int *)(this_00->field_09D9[5] + 8) + -0x21);
      st::fn_007119C0(this_00->field_01BC,(uint *)&this_00->field_01E1,-1,-1,0);
      break;
    case CASE_3:
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,iVar4,0x50,
                       *(int *)(this_00->field_09D9[5] + 4),*(int *)(this_00->field_09D9[5] + 8));
      uVar5 = 1;
      UVar7 = 0x36be;
LAB_0050777e:
      iVar20 = -1;
      iVar19 = -1;
      iVar11 = -1;
      iVar4 = -2;
      puVar9 = (uint *)st::fn_006B0140(UVar7,g_module_00807618);
LAB_00507784:
      st::fn_00711B70(this_00->field_01B8,puVar9,iVar4,iVar11,uVar5,iVar19,iVar20);
    }
    break;
  case CASE_44:
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
           (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
           *(int *)((byte *)this_00->field_09D9[10] + 4)) / 2,0x37,'\x01',
           (byte *)this_00->field_09D9[10]);
    GVar14 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    local_8 = GVar14;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    uVar5 = (uint)(ushort)this_00->field_0C34;
    pcVar8 = st::fn_006B0140(0x2725,g_module_00807618);
    st::external_00000080((LPSTR)&DAT_0080f33a,"&1%s &0%d",pcVar8,uVar5);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x56,0x39,0x6d,0x15);
    st::fn_00711B70(this_00->field_01B8,&DAT_0080f33a,-2,-1,0,-1,-1);
    if (*(int *)&this_00->field_0xc12 == 0) goto LAB_0050709d;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14 + 6,0x5d,'\x01',
           (byte *)this_00->field_09D9[0xc]);
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,GVar14 + 0x36,0x5d,7,0x21,0);
    GVar15 = local_8;
    bVar3 = this_00->field_0C24;
    cVar13 = (char)(((uint)bVar3 * 0x21) / 100);
    local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(cVar13));
    if ((bVar3 != 0) && (cVar13 == '\0')) {
      local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(1));
    }
    if (bVar3 < 0x46) {
      iVar4 = (-(uint)(bVar3 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = (uint)local_1c & 0xff;
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar5,
               (byte *)this_00->field_028A,0,iVar4,*(int *)(this_00->field_028A + 4) - uVar5,5,uVar5
              );
    pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar15 + 5,0x5c,'\x06',pbVar6);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,GVar15 + 2,0x52,0xb2,10);
    pcVar8 = st::fn_006B0140(0x2b2c,g_module_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar16 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar16 = pcVar8 + 1;
      cVar13 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar13 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar16 + -uVar5;
    pcVar16 = &this_00->field_01E1;
    memmove(pcVar16, pcVar8, uVar5); /* compiler REP MOVS byte copy */
    for (puVar9 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
        puVar9 != nullptr; puVar9 = st::fn_0072E560(puVar9,'\n')) {
      *(undefined1 *)puVar9 = 0x20;
    }
cf_common_exit_00507034:
    st::fn_00711B70(this_00->field_01B8,(uint *)&this_00->field_01E1,-2,-1,0,-1,-1);
    iVar4 = local_8 + 0x41;
    st::fn_00404C7D(this_00,this_00->field_0194,iVar4,0x5d,this_00->field_0C24,0x2714);
    st::fn_00405A8D(this_00,this_00->field_0194,iVar4,0x68,this_00->field_0C1C,this_00->field_0C20,4,2);
    break;
  case CASE_50:
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
           (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
           *(int *)((byte *)this_00->field_09D9[8] + 4)) / 2,0x36,'\x01',
           (byte *)this_00->field_09D9[8]);
  }
switchD_00506878_caseD_3b:
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
#line 1 "decomp/ST.exe/functions/00507F60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::Update4PanelWB

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall st::fn_00507F60(CPanelTy *this)

{
  CPanelTy_field_0BF5State *pCVar1;
  CPanelTy_field_0BFAState CVar2;
  CPanelTy_field_0C3CState CVar3;
  RecoveredSourceFamily_dibcopy *pRVar4;
  CPanelTy *this_00;
  byte bVar6;
  Global_sub_00525EF0_param_1Enum GVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  ushort *puVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  CPanelTy_field_0BF5State *pCVar16;
  char *pcVar17;
  short *psVar18;
  CPanelTy_field_0C11State *pCVar19;
  uint *puVar20;
  CPanelTy_field_0BF5State *pCVar21;
  short *psVar22;
  CPanelTy_field_0C11State *pCVar24;
  bool bVar25;
  uint uVar26;
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
  byte local_48;
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
    iVar15 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x497,0,iVar8,
                                "%s","CPanelTy::Update4PanelWB");
    if (iVar15 == 0) {
      st::fn_006A5E40(iVar8,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x497);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pCVar1 = &local_80->field_0BF5;
  pCVar16 = pCVar1;
  pCVar21 = &local_7c;
  memmove(pCVar21, pCVar16, 0x5c); /* compiler REP MOVS byte copy */
  iVar8 = 0;
  pCVar16 = pCVar1;
  for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pCVar16 = CASE_0;
    pCVar16 = pCVar16 + 1;
  }
  st::fn_004035BC(g_allPlayers_007FA174,4,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  CVar2 = this_00->field_0BFA;
  if ((local_77 != CVar2) || (local_76 != this_00->field_0BFB)) {
cf_common_exit_005091B9:
    st::fn_004046BF(this_00,1);
    st::fn_00402D83(this_00,'\x01');
    st::fn_00405BA0(this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if ((this_00->field_0BFB == '\x02') && (CVar2 == CASE_1)) {
    cVar13 = '\0';
    cVar14 = '\0';
    iVar8 = 0;
    do {
      if ((&this_00->field_0BFE)[iVar8] != '\0') {
        cVar14 = cVar14 + '\x01';
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 6);
    iVar8 = 0;
    do {
      if (*(char *)((int)local_73 + iVar8) != '\0') {
        cVar13 = cVar13 + '\x01';
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 6);
    if (cVar14 == cVar13) {
      iVar8 = 3;
      bVar25 = true;
      psVar18 = (short *)&this_00->field_0BFE;
      psVar22 = local_73;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar25 = *psVar18 == *psVar22;
        psVar18 = psVar18 + 1;
        psVar22 = psVar22 + 1;
      } while (bVar25);
      if (bVar25) {
        if (this_00->field_0BFD != local_74) {
          st::fn_00404BA1(this_00,'\0');
        }
      }
      else {
        this_00->field_0028 = 5;
        st::fn_006E6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
        local_8 = (byte *)((uint)local_8 & 0xffffff00);
        pcVar17 = &this_00->field_0BFE;
        do {
          if (*pcVar17 != '\0') {
            st::fn_0040313E(this_00,0,(byte)local_8);
          }
          bVar6 = (byte)local_8 + 1;
          pcVar17 = pcVar17 + 1;
          local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
        } while (bVar6 < 6);
        st::fn_00404BA1(this_00,'\0');
        st::fn_004040FC(g_cursorClass_00802A30);
      }
      iVar8 = 3;
      bVar25 = true;
      psVar18 = (short *)&this_00->field_0C04;
      psVar22 = local_73 + 3;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar25 = *psVar18 == *psVar22;
        psVar18 = psVar18 + 1;
        psVar22 = psVar22 + 1;
      } while (bVar25);
      if ((!bVar25) || (this_00->field_0BFC != local_75)) {
        st::fn_00404F89(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_7c);
      }
    }
    else {
      st::fn_00402D83(this_00,'\x01');
    }
    if (((this_00->field_0C0A != local_67) || (this_00->field_0BFC != local_75)) &&
       (this_00->field_09C0[1] != 0)) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar9;
      st::fn_006E6080(this_00,2,this_00->field_09C0[1],(undefined4 *)&this_00->field_0x18);
    }
    if (*(int *)&this_00->field_0xc12 == local_5f) {
      iVar8 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
              *(int *)(this_00->field_09D9[5] + 4)) / 2;
      if (this_00->field_0C24 != local_4d[0]) {
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar8 + 0x36,0x5d,7,0x21
                     ,0);
        bVar6 = this_00->field_0C24;
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar6));
        cVar13 = (char)(((uint)bVar6 * 0x21) / 100);
        local_10 = (byte *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(cVar13));
        if ((bVar6 != 0) && (cVar13 == '\0')) {
          local_10 = (byte *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(1));
        }
        if (bVar6 < 0x46) {
          iVar15 = (-(uint)(bVar6 < 0x14) & 5) + 5;
        }
        else {
          iVar15 = 0;
        }
        uVar9 = (uint)local_10 & 0xff;
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar8 + 0x37,0x7e - uVar9,
                   (byte *)this_00->field_028A,0,iVar15,*(int *)(this_00->field_028A + 4) - uVar9,5,
                   uVar9);
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar8 + 0x3f,0x5c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0xc,0x75,0x11);
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar8 + 0x3f,0x6c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0x1c,0x44,0x13);
        st::fn_00404C7D(this_00,this_00->field_0194,iVar8 + 0x41,0x5d,this_00->field_0C24,0x2714);
        st::fn_00405A8D(this_00,this_00->field_0194,iVar8 + 0x41,0x68,this_00->field_0C1C,
                     this_00->field_0C20,4,2);
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
    }
    else {
      st::fn_004046BF(this_00,1);
      st::fn_00402D83(this_00,'\0');
      st::fn_00405BA0(this_00);
    }
    if (this_00->field_0C4D == local_24) {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
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
  cVar13 = '\0';
  cVar14 = '\0';
  iVar8 = 0;
  do {
    if ((&this_00->field_0BFE)[iVar8] != '\0') {
      cVar14 = cVar14 + '\x01';
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  iVar8 = 0;
  do {
    if (*(char *)((int)local_73 + iVar8) != '\0') {
      cVar13 = cVar13 + '\x01';
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  if (cVar14 == cVar13) {
    iVar8 = 3;
    bVar25 = true;
    psVar18 = (short *)&this_00->field_0BFE;
    psVar22 = local_73;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar25 = *psVar18 == *psVar22;
      psVar18 = psVar18 + 1;
      psVar22 = psVar22 + 1;
    } while (bVar25);
    if (bVar25) {
      if (this_00->field_0BFD != local_74) {
        st::fn_00404BA1(this_00,'\0');
      }
    }
    else {
      this_00->field_0028 = 5;
      st::fn_006E6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
      local_8 = (byte *)((uint)local_8 & 0xffffff00);
      pcVar17 = &this_00->field_0BFE;
      do {
        if (*pcVar17 != '\0') {
          st::fn_0040313E(this_00,0,(byte)local_8);
        }
        bVar6 = (byte)local_8 + 1;
        pcVar17 = pcVar17 + 1;
        local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
      } while (bVar6 < 6);
      st::fn_00404BA1(this_00,'\0');
      st::fn_004040FC(g_cursorClass_00802A30);
    }
    iVar8 = 3;
    bVar25 = true;
    psVar18 = (short *)&this_00->field_0C04;
    psVar22 = local_73 + 3;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar25 = *psVar18 == *psVar22;
      psVar18 = psVar18 + 1;
      psVar22 = psVar22 + 1;
    } while (bVar25);
    if ((!bVar25) || (this_00->field_0BFC != local_75)) {
      st::fn_00404F89(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_7c);
    }
  }
  else {
    st::fn_00402D83(this_00,'\x01');
  }
  if (((this_00->field_0C0A != local_67) || (this_00->field_0BFC != local_75)) &&
     (this_00->field_09C0[1] != 0)) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar9;
    st::fn_006E6080(this_00,2,this_00->field_09C0[1],(undefined4 *)&this_00->field_0x18);
  }
  if (((this_00->field_0BF5 == CASE_43) || (this_00->field_0BF5 == CASE_4C)) &&
     ((this_00->field_0C11 != local_60 || (this_00->field_0BFC != local_75)))) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      iVar8 = 0;
    }
    else {
      iVar8 = (-(uint)(this_00->field_0C11 != CASE_0) & 2) + 1;
    }
    *(int *)&this_00->field_0x2c = iVar8;
    st::fn_006E6080(this_00,2,this_00->field_0308[1],(undefined4 *)&this_00->field_0x18);
  }
  switch(this_00->field_0BF5) {
  case CASE_32:
  case CASE_40:
  case CASE_44:
  case CASE_49:
    if ((*(int *)&this_00->field_0xc12 == local_5f) && (this_00->field_0C26 == local_4b)) {
      iVar8 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
              *(int *)(this_00->field_09D9[5] + 4)) / 2;
      if (this_00->field_0C24 != local_4d[0]) {
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar8 + 0x36,0x5d,7,0x21
                     ,0);
        bVar6 = this_00->field_0C24;
        cVar13 = (char)(((uint)bVar6 * 0x21) / 100);
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(cVar13));
        if ((bVar6 != 0) && (cVar13 == '\0')) {
          local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
        }
        if (bVar6 < 0x46) {
          iVar15 = (-(uint)(bVar6 < 0x14) & 5) + 5;
        }
        else {
          iVar15 = 0;
        }
        uVar9 = local_c & 0xff;
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar8 + 0x37,0x7e - uVar9,
                   (byte *)this_00->field_028A,0,iVar15,*(int *)(this_00->field_028A + 4) - uVar9,5,
                   uVar9);
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar8 + 0x3f,0x5c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0xc,0x75,0x11);
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar8 + 0x3f,0x6c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0x1c,0x44,0x13);
        st::fn_00404C7D(this_00,this_00->field_0194,iVar8 + 0x41,0x5d,this_00->field_0C24,0x2714);
        st::fn_00405A8D(this_00,this_00->field_0194,iVar8 + 0x41,0x68,this_00->field_0C1C,
                     this_00->field_0C20,4,2);
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
      if ((this_00->field_0BF5 != CASE_44) || (this_00->field_0C34 == local_3d))
      goto cf_common_exit_00509192;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
             (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[10] + 4)) / 2,0x37,'\x01',
             (byte *)this_00->field_09D9[10]);
      uVar9 = (uint)(ushort)this_00->field_0C34;
      pcVar17 = st::fn_006B0140(0x2725,g_module_00807618);
      st::external_00000080((LPSTR)&DAT_0080f33a,"&1%s &0%d",pcVar17,uVar9);
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x56,0x39,0x6d,0x15);
      st::fn_00711B70(this_00->field_01B8,&DAT_0080f33a,-2,-1,0,-1,-1);
      puVar12 = this_00->field_0148[5];
      if ((int)puVar12 < 0) goto cf_common_exit_00509192;
      uVar9 = this_00->field_00A8;
      uVar26 = this_00->field_0050;
      goto cf_common_exit_0050918D;
    }
    iVar8 = 0;
    goto LAB_00508b35;
  case CASE_33:
    if ((*(int *)&this_00->field_0xc12 == local_5f) && (this_00->field_0C16 == local_5b)) {
      iVar8 = 0x3a;
      local_c = 2;
      local_18 = &this_00->field_0C1C;
      local_10 = local_4d;
      local_8 = &this_00->field_0C24;
      iVar15 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4)) / 2;
      do {
        if (*local_8 != *local_10) {
          st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar15 + 0x36,iVar8,7,
                       0x21,0);
          bVar6 = *local_8;
          local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar6));
          cVar13 = (char)(((uint)bVar6 * 0x21) / 100);
          local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)(cVar13));
          if ((bVar6 != 0) && (cVar13 == '\0')) {
            local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)(1));
          }
          if (bVar6 < 0x46) {
            local_14 = (-(uint)(bVar6 < 0x14) & 5) + 5;
          }
          else {
            local_14 = 0;
          }
          uVar9 = local_20 & 0xff;
          st::fn_006B55F0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar15 + 0x37,
                     (iVar8 - uVar9) + 0x21,(byte *)this_00->field_028A,0,local_14,
                     *(int *)(this_00->field_028A + 4) - uVar9,5,uVar9);
          st::fn_006B55F0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar15 + 0x3f,iVar8 + -1
                     ,(byte *)this_00->field_09D9[5],0,0x3f,0xc,0x75,0x11);
          st::fn_006B55F0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar15 + 0x3f,
                     iVar8 + 0xf,(byte *)this_00->field_09D9[5],0,0x3f,0x1c,0x44,0x13);
          st::fn_00404C7D(this_00,this_00->field_0194,iVar15 + 0x41,iVar8,100 - *local_8,0x36b1);
          st::fn_00405A8D(this_00,this_00->field_0194,iVar15 + 0x41,iVar8 + 0xb,*local_18,local_18[2],4
                       ,2);
          if (-1 < (int)this_00->field_0148[5]) {
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                       this_00->field_0050,this_00->field_00A8);
          }
        }
        local_18 = local_18 + 1;
        local_10 = local_10 + 1;
        local_8 = local_8 + 1;
        iVar8 = iVar8 + 0x23;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      goto cf_common_exit_00509192;
    }
    break;
  case CASE_34:
    st::fn_00403526(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[8] + 4))
                          / 2);
    local_10 = &this_00->field_0xa2e;
    iVar8 = 0;
    puVar20 = this_00->field_0A15;
    do {
      if (*puVar20 != 0) {
        if (DAT_0080874e == '\x01') {
          GVar7 = (this_00->field_09D4 != '\x01') + CASE_1;
        }
        else {
          GVar7 = CASE_2 - (this_00->field_09D4 != '\x01');
        }
        uVar11 = st::fn_004034BD(GVar7,(Global_sub_00525EF0_param_2Enum)iVar8);
        *(undefined4 *)local_10 = uVar11;
        if (this_00->field_0BFC == local_75) {
          this_00->field_0028 = 5;
          uVar9 = *puVar20;
        }
        else {
          this_00->field_0028 = 0x20;
          *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
          uVar9 = *puVar20;
        }
        st::fn_006E6080(this_00,2,uVar9,(undefined4 *)&this_00->field_0x18);
      }
      iVar8 = iVar8 + 1;
      local_10 = local_10 + 0x27;
      puVar20 = puVar20 + 1;
    } while (iVar8 < 6);
    puVar12 = this_00->field_0148[5];
    if ((int)puVar12 < 0) goto cf_common_exit_00509192;
    uVar9 = this_00->field_00A8;
    uVar26 = this_00->field_0050;
    goto cf_common_exit_0050918D;
  case CASE_35:
    iVar8 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
            *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    if (this_00->field_0C31 == local_40) {
      if (this_00->field_0C31 == '\0') {
        if (this_00->field_0C2F != local_42) {
          st::fn_004046BF(this_00,1);
          iVar8 = this_00->field_0302;
          if (iVar8 != 0) {
            memset(local_e4, 0, 0x20); /* compiler bulk-zero initialization */
            local_d4 = 5;
            st::fn_006E6080(this_00,2,iVar8,local_e4);
          }
        }
        goto cf_common_exit_00509192;
      }
      if (this_00->field_0C33 == local_3e) goto cf_common_exit_00509192;
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar8 + 0x39,0x65,
                 (byte *)this_00->field_09D9[5],0,0x39,0x15,0x4c,0x1b);
      st::fn_00405862(this_00,iVar8);
      puVar12 = this_00->field_0148[5];
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
    iVar8 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[7] + 4)) / 2;
    if (this_00->field_0C29 == 0xff) {
      this_00->field_0C29 = 0;
    }
    if (0x28 < this_00->field_0C29) {
      this_00->field_0C29 = 0x28;
    }
    local_8 = (byte *)((uint)STPiece<1,3>(local_8) << 8);
    if (this_00->field_0C29 != 0) {
      do {
        pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
               iVar8 + 6 + ((uint)local_8 & 0xff) * 4,0x75,'\x01',pbVar10);
        bVar6 = (byte)local_8 + 1;
        local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
      } while (bVar6 < this_00->field_0C29);
    }
    if ((byte)local_8 < 0x28) {
      iVar15 = 0x28 - ((uint)local_8 & 0xff);
      iVar8 = iVar8 + 6 + ((uint)local_8 & 0xff) * 4;
      do {
        pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar8,0x75,'\x01',pbVar10);
        iVar8 = iVar8 + 4;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    puVar12 = this_00->field_0148[5];
    goto joined_r0x00508b00;
  case CASE_38:
  case CASE_39:
  case CASE_4F:
    st::fn_00403E4F(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4))
                         / 2);
    puVar12 = this_00->field_0148[5];
joined_r0x00508b00:
    if (-1 < (int)puVar12) {
LAB_00509179:
      uVar9 = this_00->field_00A8;
      uVar26 = this_00->field_0050;
cf_common_exit_0050918D:
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,(uint)puVar12,0xffffffff,uVar26,uVar9);
    }
    goto cf_common_exit_00509192;
  case CASE_3A:
    iVar8 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4)) / 2;
    if (this_00->field_0C3A != local_37) {
      local_8 = (byte *)((uint)STPiece<1,3>(local_8) << 8);
      if (this_00->field_0C3A != '\0') {
        do {
          pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3
                                        );
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
                 iVar8 + 0x70 + ((uint)local_8 & 0xff) * 4,0x54,'\x01',pbVar10);
          bVar6 = (byte)local_8 + 1;
          local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
        } while (bVar6 < (byte)this_00->field_0C3A);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar15 = iVar8 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0
                                        );
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar15,0x54,'\x01',pbVar10);
          iVar15 = iVar15 + 4;
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
          pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3
                                        );
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
                 iVar8 + 0x70 + ((uint)local_8 & 0xff) * 4,0x5f,'\x01',pbVar10);
          bVar6 = (byte)local_8 + 1;
          local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
        } while (bVar6 < (byte)this_00->field_0C3B);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar15 = iVar8 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0
                                        );
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar15,0x5f,'\x01',pbVar10);
          iVar15 = iVar15 + 4;
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
      uVar9 = 0;
      do {
        pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,2);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar8 + 0xb + uVar9 * 4,0x76,
               '\x01',pbVar10);
        bVar6 = (byte)local_8 + 1;
        local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
        uVar9 = (uint)bVar6;
      } while (uVar9 < local_c);
    }
    if ((byte)local_8 < 0x28) {
      iVar8 = iVar8 + 0xb + ((uint)local_8 & 0xff) * 4;
      iVar15 = 0x28 - ((uint)local_8 & 0xff);
      do {
        pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar8,0x76,'\x01',pbVar10);
        iVar8 = iVar8 + 4;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    puVar12 = this_00->field_0148[5];
    goto joined_r0x00509177;
  default:
    goto cf_common_exit_00509192;
  case CASE_3C:
    CVar3 = this_00->field_0C3C;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(CVar3));
    if (local_35 != CVar3) {
      st::fn_004046BF(this_00,1);
      st::fn_00402D83(this_00,'\x01');
      st::fn_00405BA0(this_00);
      goto cf_common_exit_00509192;
    }
    pbVar10 = (byte *)this_00->field_09D9[5];
    pRVar4 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
    iVar8 = (pRVar4->field_0004 - *(int *)(pbVar10 + 4)) / 2;
    if (CVar3 == CASE_1) {
      st::fn_006B55F0(pRVar4,0,iVar8 + 0x39,0x65,pbVar10,0,0x39,0x15,0x4c,0x1b);
      st::fn_00404C7D(this_00,this_00->field_0194,iVar8 + 0x39,0x65,*(byte *)&this_00->field_0C3D,
                    0x2714);
      local_14 = 0;
      uVar9 = (uint)(this_00->field_0C3D * 0x28) / 100;
      if (uVar9 != 0) {
        iVar15 = iVar8 + 0xb;
        local_14 = uVar9;
        local_c = uVar9;
        do {
          pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3
                                        );
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar15,0x5c,'\x01',pbVar10);
          iVar15 = iVar15 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (local_14 < 0x28) {
        iVar8 = iVar8 + 0xb + local_14 * 4;
        iVar15 = 0x28 - local_14;
        do {
          pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0
                                        );
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar8,0x5c,'\x01',pbVar10);
          iVar8 = iVar8 + 4;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
    }
    else if (CVar3 == CASE_2) {
      st::fn_006B55F0
                (pRVar4,0,iVar8,0x71,pbVar10,0,0,0x21,*(int *)(pbVar10 + 4),
                 *(int *)(pbVar10 + 8) + -0x21);
      st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",this_00->field_0C3D);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00710A90(this_00->field_01BC,this_00->field_0194,0,iVar8,0x71,
                       *(int *)(this_00->field_09D9[5] + 4),
                       *(int *)(this_00->field_09D9[5] + 8) + -0x21);
      st::fn_007119C0(this_00->field_01BC,&DAT_0080f33a,-1,-1,0);
    }
    puVar12 = this_00->field_0148[5];
joined_r0x00509177:
    if ((int)puVar12 < 0) goto cf_common_exit_00509192;
    goto LAB_00509179;
  case CASE_50:
    iVar8 = 3;
    bVar25 = true;
    pCVar19 = &this_00->field_0C11;
    pCVar24 = &local_60;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar25 = *(undefined2 *)pCVar19 == *(undefined2 *)pCVar24;
      pCVar19 = pCVar19 + 2;
      pCVar24 = pCVar24 + 2;
    } while (bVar25);
    if (!bVar25) {
      puVar20 = this_00->field_0A15;
      iVar8 = 6;
      do {
        if (*puVar20 != 0) {
          if (this_00->field_0BFC == local_75) {
            this_00->field_0028 = 5;
            uVar9 = *puVar20;
          }
          else {
            this_00->field_0028 = 0x20;
            *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
            uVar9 = *puVar20;
          }
          st::fn_006E6080(this_00,2,uVar9,(undefined4 *)&this_00->field_0x18);
        }
        puVar20 = puVar20 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    goto cf_common_exit_00509192;
  }
  iVar8 = 1;
LAB_00508b35:
  st::fn_004046BF(this_00,iVar8);
  st::fn_00402D83(this_00,'\0');
  st::fn_00405BA0(this_00);
cf_common_exit_00509192:
  if (this_00->field_0C4D == local_24) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  st::fn_004019B5(this_00);
  g_currentExceptionFrame = local_c4.previous;
  return;
switchD_00508349_caseD_dd:
  st::fn_004046BF(this_00,1);
  iVar8 = this_00->field_0302;
  if (iVar8 == 0) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  memset(local_104, 0, 0x20); /* compiler bulk-zero initialization */
  local_f4 = 5;
  st::fn_006E6080(this_00,2,iVar8,local_104);
  g_currentExceptionFrame = local_c4.previous;
  return;
}

// 005097E0 CPanelTy::SetControlObj
#line 1 "decomp/ST.exe/functions/005097E0/decomp.c"
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
  char *pcVar6;
  LPSTR pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  short sVar18;
  ushort uVar19;
  ushort uVar20;
  int iVar21;
  undefined4 uVar22;
  char *pcVar23;
  undefined4 uVar24;
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
  undefined1 *local_c;
  uint *local_8;

  local_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_10c;
  local_20 = this;
  iVar5 = st::fn_0072D7F0(local_10c.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_10c.previous;
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x53e,0,iVar5,
                                "%s","CPanelTy::SetControlObj");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x53e);
    return;
  }
  if (param_1 != '\0') {
    st::fn_004040FC(g_cursorClass_00802A30);
  }
  this_00 = local_20;
  if (local_20->field_0302 != 0) {
    st::fn_006E56B0(local_20->field_000C,local_20->field_0302);
  }
  uVar8 = this_00->field_0308[1];
  this_00->field_0302 = 0;
  if (uVar8 != 0) {
    st::fn_006E56B0(this_00->field_000C,uVar8);
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
  uVar8 = this_00->field_09D0;
  this_00->field_0310[2] = 0;
  if (uVar8 != 0) {
    st::fn_006E56B0(this_00->field_000C,uVar8);
  }
  this_00->field_09D0 = 0;
  puVar14 = this_00->field_0A15;
  iVar5 = 6;
  do {
    if (*puVar14 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar14);
      *puVar14 = 0;
    }
    puVar14 = puVar14 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  CVar1 = this_00->field_0BFA;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_3)) || (CVar1 == CASE_4)) {
    uVar8 = this_00->field_09C0[1];
    if (uVar8 != 0) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 0;
      st::fn_006E6080(this_00,2,uVar8,(undefined4 *)&this_00->field_0x18);
    }
  }
  else {
    local_10 = local_10 & 0xffffff00;
    memset(local_70, 0, 0x50); /* compiler bulk-zero initialization */
    local_c = &this_00->field_0x86a;
    local_1c = &this_00->field_0BFE;
    iVar5 = -0xbff - (int)this_00;
    local_14 = iVar5;
    do {
      if (*local_1c == 0) goto LAB_00509a02;
      iVar13 = 0xe;
      iVar12 = 0xf;
      switch(local_1c + iVar5) {
      case nullptr:
        iVar13 = 0x4b;
        break;
      case (Global_sub_00529590_param_1Enum *)0x1:
        iVar13 = 0x88;
        break;
      case (Global_sub_00529590_param_1Enum *)0x2:
        goto switchD_00509942_caseD_2;
      case (Global_sub_00529590_param_1Enum *)0x3:
        iVar13 = 0x88;
        goto switchD_00509942_caseD_2;
      case (Global_sub_00529590_param_1Enum *)0x4:
        iVar13 = 0x4b;
switchD_00509942_caseD_2:
        iVar12 = 0x37;
      }
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
      iVar5 = 0;
      puVar15 = local_c;
      pcVar6 = st::fn_00405493(*local_1c,this_00->field_0BF5);
      pCVar7 = st::fn_0040577C(pcVar6,iVar5);
      st::fn_004041BA(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)local_b44 + local_28 * 0x17c),5,
                   local_8,iVar13,iVar12,1,pCVar7,uVar19,uVar20,puVar15,pcVar23);
      iVar5 = local_28 * 0x17c;
      local_28 = local_28 + 1;
      *(undefined4 *)((int)local_b44 + iVar5 + 0x110) = 1;
      iVar5 = local_14;
LAB_00509a02:
      bVar11 = (char)local_10 + 1;
      local_c = local_c + 0x27;
      local_1c = local_1c + 1;
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar11));
    } while (bVar11 < 6);
    local_60 = this_00->field_0008;
    local_24 = local_b44;
    local_70[0] = 1;
    local_70[1] = 0xffffffff;
    local_5c = 2;
    local_58 = 0xb203;
    local_3c = 2;
    local_38 = 0xb204;
    local_40 = local_60;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,9,&this_00->field_0302,nullptr,local_70,0);
    st::fn_00404BA1(this_00,'\0');
    uVar8 = this_00->field_09C0[1];
    if (uVar8 != 0) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar10;
      st::fn_006E6080(this_00,2,uVar8,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_0BFB == '\x02') {
LAB_00509b60:
      uVar24 = 0;
      uVar22 = 0;
      iVar12 = 0;
      pcVar6 = nullptr;
      iVar5 = 0;
      uVar19 = 0;
      sVar18 = 0;
      uVar17 = 0xb13f;
      uVar16 = 0xb12f;
      pCVar7 = st::fn_0040577C("BUT_SMALL",0);
      uVar8 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x92,0x6e,1,pCVar7,uVar16,
                        uVar17,sVar18,uVar19,iVar5,pcVar6,iVar12,uVar22,uVar24);
      *local_18 = uVar8;
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
      iVar5 = 0xb12f;
      local_c = (undefined1 *)0x4c;
      local_8 = (uint *)0x2;
      puVar14 = local_18;
      do {
        if (STField<int>(puVar14,0x8fe) != 0) {
          uVar22 = 0;
          uVar17 = 0;
          iVar21 = 0;
          pcVar6 = nullptr;
          iVar13 = 0;
          uVar19 = 0;
          sVar18 = 0;
          uVar16 = 0xb13f;
          iVar12 = iVar5;
          pCVar7 = st::fn_0040577C("BUT_SMALL",0);
          uVar8 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x92,(int)local_c,1,
                            pCVar7,iVar12,uVar16,sVar18,uVar19,iVar13,pcVar6,iVar21,uVar17,uVar22);
          *puVar14 = uVar8;
        }
        puVar14 = puVar14 + 1;
        iVar5 = iVar5 + 1;
        local_c = (undefined1 *)((int)local_c + 0x22);
        local_8 = (uint *)((int)local_8 + -1);
      } while (local_8 != nullptr);
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_34:
      local_8 = (uint *)0x2;
      memset(local_c8, 0, 0x58); /* compiler bulk-zero initialization */
      iVar5 = 0;
      memset(local_25c, 0, 0x150); /* compiler bulk-zero initialization */
      local_14 = this_00->field_0138;
      puVar9 = local_25c + 1;
      iVar12 = this_00->field_0050 + 99;
      iVar5 = 0;
      do {
        iVar13 = local_14;
        puVar9[-1] = iVar5 + 1;
        *puVar9 = 0;
        puVar9[2] = iVar12;
        puVar9[4] = 0x2e;
        iVar21 = DAT_00806734;
        if (iVar13 != 0) {
          iVar21 = this_00->field_00A8;
        }
        puVar9[3] = iVar21 + 0x22;
        puVar9[5] = 0x10;
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
        if (iVar5 == 0) {
          uVar16 = 0x3aa6;
LAB_00509ddd:
          puVar9[0x19] = uVar16;
          puVar9[0xe] = uVar16;
        }
        else if (iVar5 == 1) {
          uVar16 = 0x3aa7;
          goto LAB_00509ddd;
        }
        iVar12 = iVar12 + 0x31;
        puVar9 = puVar9 + 0x1c;
        local_8 = (uint *)((int)local_8 + -1);
        iVar5 = iVar5 + 1;
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
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,5,&this_00->field_09D0,nullptr,local_c8
                     ,0);
          local_c = (undefined1 *)((uint)local_c & 0xffffff00);
          local_10 = 0x3b;
          iVar5 = *(int *)(this_00->field_0194 + 4);
          iVar12 = *(int *)(this_00->field_09D9[8] + 4);
          puVar15 = &this_00->field_0xa2d;
          memset((void *)puVar15, 0, 0xea); /* compiler bulk-zero initialization */
          local_14 = (iVar5 - iVar12) / 2 + 8;
          local_8 = this_00->field_0A15;
          iVar5 = 0xb18f;
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
            uVar8 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),local_14,local_10,0,
                              nullptr,iVar5,iVar5 + 0x10,1,0,(int)puVar15,nullptr,0x11,10,0);
            puVar15 = puVar15 + 0x27;
            local_10 = local_10 + 0xb;
            *local_8 = uVar8;
            bVar11 = (char)local_c + 1;
            iVar5 = iVar5 + 1;
            local_8 = local_8 + 1;
            local_c = (undefined1 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar11));
          } while (bVar11 < 6);
          g_currentExceptionFrame = local_10c.previous;
          return;
        }
      } while( true );
    case CASE_35:
      if (this_00->field_0C31 != '\0') {
        uVar24 = 0;
        uVar22 = 0;
        iVar12 = 0;
        pcVar6 = nullptr;
        iVar5 = 0;
        uVar19 = 0;
        sVar18 = 0;
        uVar17 = 0xb13f;
        uVar16 = 0xb12f;
        pCVar7 = st::fn_0040577C("BUT_SMALL",0);
        cVar2 = this_00->field_0BFC;
LAB_00509c11:
        uVar8 = st::fn_004017E9(this_00,5,0,(uint)(cVar2 != '\0'),0x92,0x6e,1,pCVar7,uVar16,uVar17,sVar18,
                          uVar19,iVar5,pcVar6,iVar12,uVar22,uVar24);
        *local_18 = uVar8;
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      break;
    case CASE_3C:
      if (this_00->field_0C3C == CASE_1) {
        uVar24 = 0;
        uVar22 = 0;
        iVar12 = 0;
        pcVar6 = nullptr;
        iVar5 = 0;
        uVar19 = 0;
        sVar18 = 0;
        uVar17 = 0xb13f;
        uVar16 = 0xb12f;
        pCVar7 = st::fn_0040577C("BUT_SMALL",0);
        cVar2 = this_00->field_0BFC;
        goto LAB_00509c11;
      }
      break;
    case CASE_43:
    case CASE_4C:
      if (this_00->field_0BFC == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (-(uint)(this_00->field_0C11 != CASE_0) & 2) + 1;
      }
      uVar24 = 0;
      uVar22 = 0;
      iVar13 = 0;
      pcVar6 = nullptr;
      iVar12 = 0;
      uVar19 = 0;
      sVar18 = 0;
      uVar17 = 0xb12e;
      uVar16 = 0xb12d;
      pCVar7 = st::fn_0040577C("BUT_AUTO",0);
      uVar8 = st::fn_004017E9(this_00,5,3,iVar5,-1,0x58,1,pCVar7,uVar16,uVar17,sVar18,uVar19,iVar12,pcVar6
                        ,iVar13,uVar22,uVar24);
      this_00->field_0308[1] = uVar8;
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_50:
      iVar12 = 0xb17f;
      local_c = (undefined1 *)0x6;
      iVar5 = 0x3b;
      local_14 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[8] + 4)) / 2 + 8;
      local_8 = this_00->field_0A15;
      do {
        uVar8 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),local_14,iVar5,0,
                          nullptr,iVar12 + -0x20,iVar12,2,0,0x4f20,nullptr,0xaa,10,
                          iVar12 + -0x10);
        iVar12 = iVar12 + 1;
        iVar5 = iVar5 + 0xb;
        *local_8 = uVar8;
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
#line 1 "decomp/ST.exe/functions/0050A340/decomp.c"
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
  undefined1 *resourceString;
  char cVar1;
  CPanelTy_field_0C11State CVar2;
  CPanelTy_field_0BF5State CVar3;
  CPanelTy *this_00;
  int iVar5;
  Global_sub_00529500_param_1Enum resourceId;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  UINT UVar9;
  char *pcVar10;
  uint *puVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  ccFntTy *this_01;
  char *pcVar15;
  HINSTANCE pHVar16;
  RecoveredSourceFamily_dibcopy *pRVar17;
  int iVar18;
  int iVar19;
  InternalExceptionFrame local_64;
  int local_20;
  CPanelTy *local_1c;
  uint local_18;
  byte *local_14;
  Global_sub_00526BA0_param_1Enum *local_10;
  uint local_c;
  byte *local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_1c = this;
  iVar5 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar13 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x6f0,0,iVar5,
                                "%s","CPanelTy::PaintCtrlObjSI");
    if (iVar13 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x6f0);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(local_1c->field_0BFA) {
  case CASE_0:
  case CASE_3:
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0x46,'\x01',
           (byte *)local_1c->field_09D9[0]);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0,'\x06',
           (byte *)this_00->field_09D9[9]);
    break;
  case CASE_1:
    if (local_1c->field_0BFB == '\x02') {
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0,'\x06',
             (byte *)local_1c->field_09D9[0xb]);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x46,'\x01',
             (byte *)this_00->field_09D9[2]);
      break;
    }
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
      pbVar7 = (byte *)this_00->field_09D9[2];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    case CASE_5B:
      pbVar7 = (byte *)this_00->field_09D9[3];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    case CASE_5E:
    case CASE_6D:
      pbVar7 = (byte *)this_00->field_09D9[1];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    default:
      pbVar7 = (byte *)this_00->field_09D9[0];
      goto LAB_0050a4e4;
    case CASE_62:
      pbVar7 = (byte *)this_00->field_09D9[7];
LAB_0050a4e4:
      pRVar17 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    case CASE_67:
    case CASE_68:
      pbVar7 = (byte *)this_00->field_09D9[5];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
    }
    st::fn_00403229(pRVar17,0,0x46,'\x01',pbVar7);
    break;
  case CASE_4:
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0,'\x06',
           (byte *)local_1c->field_09D9[9]);
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
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2c,0x52,'\x01',
               (byte *)this_00->field_09D9[0xc]);
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,
                                      (uint)this_00->field_0C11);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2e,0x54,'\x01',pbVar7);
        pbVar7 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[1],0,0x70,0x12,
                                             0x62,0xd,0);
        if (pbVar7 != nullptr) {
          if (this_00->field_0BF5 == 0xfe) {
            resourceId = st::fn_004054CA(this_00->field_0C11);
          }
          else {
            resourceId = st::fn_004019BF(this_00->field_0BF5);
          }
          uVar6 = st::fn_004040C5(resourceId);
          iVar13 = -1;
          iVar5 = -1;
          puVar11 = (uint *)st::fn_006B0140(resourceId,g_module_00807618);
          st::fn_007119C0(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x70,0x58,'\x01',pbVar7);
          st::fn_00710F00(this_00->field_01B8);
        }
        pbVar7 = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[1],0,0x78,0x23,
                                             0x5a,0x14,0);
        if (pbVar7 != nullptr) {
          uVar6 = 0;
          st::external_00000080((LPSTR)&DAT_0080f33a,"%06d",*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0C11) {
          case CASE_0:
            uVar6 = 4;
            break;
          case CASE_1:
          case CASE_3:
            uVar6 = 7;
            break;
          case CASE_2:
            uVar6 = 6;
            break;
          case CASE_4:
            uVar6 = 5;
          }
          st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,uVar6);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x78,0x69,'\x01',pbVar7);
          st::fn_00710F00(this_00->field_01C4);
        }
        break;
      case CASE_FD:
        CVar2 = this_00->field_0C11;
        if ((CVar2 != CASE_0) && (CVar2 < 0x16)) {
          pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CE,
                                        CVar2 - 1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x29,0x51,'\x01',pbVar7);
        }
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,10);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x27,0x4f,'\x06',pbVar7);
        pbVar7 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[1],0,0x5d,0xb,
                                             0x73,0x19,0);
        if (pbVar7 != nullptr) {
          iVar19 = -1;
          iVar18 = -1;
          uVar6 = 5;
          iVar13 = -1;
          iVar5 = -2;
          pHVar16 = g_module_00807618;
          UVar9 = st::fn_0040270C(this_00->field_0C11);
          puVar11 = (uint *)st::fn_006B0140(UVar9,pHVar16);
          st::fn_00711B70(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar18,iVar19);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x5d,0x51,'\x01',pbVar7);
          st::fn_00710F00(this_00->field_01B8);
        }
        pbVar7 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[1],0,0x27,0x26,
                                             0x9f,0x1c,0);
        if (pbVar7 != nullptr) {
          st::fn_00711B70(this_00->field_01B8,(uint *)this_00->field_0C16,-2,-1,3,-1,-1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x27,0x6c,'\x01',pbVar7);
          st::fn_00710F00(this_00->field_01B8);
        }
      }
    }
    goto switchD_0050a52e_caseD_df;
  }
  if (this_00->field_0BFB == '\x02') {
    if (*(int *)&this_00->field_0xc12 != 0) {
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x28,0x50,'\x01',
             (byte *)this_00->field_09D9[0xe]);
      uVar6 = st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A);
      pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,uVar6);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2a,0x52,'\x01',pbVar7);
      pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
      pbVar7 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
      local_14 = nullptr;
      if (pbVar7 != nullptr) {
        iVar5 = 0x35;
        local_14 = pbVar7;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != nullptr);
      }
      if (local_14 < (byte *)0x21) {
        iVar5 = (int)local_14 * 4 + 0x35;
        do {
          pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar16 = g_module_00807618;
      UVar9 = st::fn_00403684(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A,0);
      pcVar10 = st::fn_006B0140(UVar9,pHVar16);
      uVar6 = 0xffffffff;
      do {
        pcVar15 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar15 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar15;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar15 + -uVar6;
      pcVar15 = &this_00->field_01E1;
      memmove(pcVar15, pcVar10, uVar6); /* compiler REP MOVS byte copy */
      uVar14 = 0;
      for (puVar11 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
          puVar11 != nullptr; puVar11 = st::fn_0072E560(puVar11,'\n')) {
        *(undefined1 *)puVar11 = 0x20;
      }
LAB_0050af64:
      st::fn_00711B70(this_00->field_01B8,(uint *)&this_00->field_01E1,-2,-1,5,-1,-1);
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
      UVar9 = 0x36bb;
      goto cf_common_exit_0050B38B;
    case CASE_1:
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x27,0x51,'\x01',
             (byte *)this_00->field_09D9[0xd]);
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x15,0x6c,0xc3,0xb);
      iVar19 = -1;
      iVar18 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -2;
      puVar11 = (uint *)st::fn_006B0140(0x36bd,g_module_00807618);
      st::fn_00711B70(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar18,iVar19);
      st::fn_00404F1B(this_00,this_00->field_0194,0x5c,0x50,*(byte *)&this_00->field_0C3D,0x2714);
      pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
      pbVar7 = (byte *)((uint)(this_00->field_0C3D * 0x21) / 100);
      local_8 = nullptr;
      if (pbVar7 != nullptr) {
        iVar5 = 0x35;
        local_8 = pbVar7;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != nullptr);
      }
      if (local_8 < (byte *)0x21) {
        iVar5 = (int)local_8 * 4 + 0x35;
        do {
          pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      break;
    case CASE_2:
      iVar19 = -1;
      iVar18 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -2;
      puVar11 = (uint *)st::fn_006B0140(0x36bc,g_module_00807618);
      st::fn_00711B70(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar18,iVar19);
      puVar11 = (uint *)&this_00->field_01E1;
      st::external_00000080((LPSTR)puVar11,"%4d",this_00->field_0C3D);
      st::fn_00710A90(this_00->field_01BC,this_00->field_0194,0,0x28,0x79,0x9b,0xf);
      this_01 = this_00->field_01BC;
      uVar6 = 1;
      goto cf_common_exit_0050BD93;
    case CASE_3:
      UVar9 = 0x36be;
cf_common_exit_0050B38B:
      iVar19 = -1;
      iVar18 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -2;
      puVar11 = (uint *)st::fn_006B0140(UVar9,g_module_00807618);
      st::fn_00711B70(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar18,iVar19);
      break;
    case CASE_4:
      if (this_00->field_0C31 != '\0') {
        st::fn_004052D6(this_00);
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
      pcVar10 = st::fn_006B0140(0x273c,g_module_00807618);
      st::external_00000080((LPSTR)&DAT_0080f33a,"%d %s",(uint)(ushort)this_00->field_0C2F,pcVar10);
      st::fn_00711B70(this_00->field_01B8,&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    else {
      st::fn_004052D6(this_00);
      st::fn_00403ED1(this_00);
    }
    break;
  case CASE_5B:
    st::fn_00404697(this_00);
    break;
  case CASE_5C:
  case CASE_6E:
    if (*(int *)&this_00->field_0xc12 != 0) {
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x28,0x50,'\x01',
             (byte *)this_00->field_09D9[0xe]);
      uVar6 = st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A);
      pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,uVar6);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2a,0x52,'\x01',pbVar7);
      pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
      pbVar7 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
      local_14 = nullptr;
      if (pbVar7 != nullptr) {
        iVar5 = 0x35;
        local_14 = pbVar7;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != nullptr);
      }
      if (local_14 < (byte *)0x21) {
        iVar5 = (int)local_14 * 4 + 0x35;
        do {
          pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar16 = g_module_00807618;
      UVar9 = st::fn_00403684(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A,0);
      pcVar10 = st::fn_006B0140(UVar9,pHVar16);
      uVar6 = 0xffffffff;
      do {
        pcVar15 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar15 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar15;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar15 + -uVar6;
      pcVar15 = &this_00->field_01E1;
      memmove(pcVar15, pcVar10, uVar6); /* compiler REP MOVS byte copy */
      uVar14 = 0;
      for (puVar11 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
          puVar11 != nullptr; puVar11 = st::fn_0072E560(puVar11,'\n')) {
        *(undefined1 *)puVar11 = 0x20;
      }
      goto LAB_0050af64;
    }
    if (CVar3 == CASE_5C) {
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
      goto LAB_0050b386;
    }
    if (CVar3 == CASE_6E) {
      st::external_00000080(&this_00->field_01E1,"%d",(uint)(ushort)this_00->field_0C2F);
      st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x1c,0x58,0xb7,0xf);
      st::fn_007119C0(this_00->field_01C4,(uint *)&this_00->field_01E1,-1,-1,5);
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x16,0x69,0xc3,0xe);
      UVar9 = 0x273b;
      goto cf_common_exit_0050B38B;
    }
    break;
  case CASE_5D:
    st::fn_00403B16(this_00);
    break;
  case CASE_5E:
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2c,0x52,'\x01',
           (byte *)this_00->field_09D9[0xc]);
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,0);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2e,0x54,'\x01',pbVar7);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x73,0x50,0x5f,0xb);
    iVar19 = -1;
    iVar18 = -1;
    uVar6 = 2;
    iVar13 = -1;
    iVar5 = -2;
    puVar11 = (uint *)st::fn_006B0140(0x271d,g_module_00807618);
    st::fn_00711B70(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar18,iVar19);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x73,0x5d,0x5f,0x17);
    iVar19 = -1;
    iVar18 = -1;
    uVar6 = 5;
    iVar13 = -1;
    iVar5 = -2;
    puVar11 = (uint *)st::fn_006B0140(0x2721,g_module_00807618);
    st::fn_00711B70(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar18,iVar19);
    puVar11 = (uint *)&this_00->field_01E1;
    st::external_00000080((LPSTR)puVar11,"%6d",(uint)(ushort)this_00->field_0C34);
    st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x91,0x73,0x26,0xf);
    uVar6 = 4;
    this_01 = this_00->field_01C4;
    goto cf_common_exit_0050BD93;
  case CASE_61:
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x25,0x50,0xa5,0xc);
    uVar6 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)st::fn_006B0140(0x2738,g_module_00807618);
    st::fn_007119C0(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6);
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x5b,'\x01',pbVar7);
    pbVar7 = (byte *)(((uint)(byte)this_00->field_0C2A * 0x21) / 100);
    pbVar8 = nullptr;
    if (pbVar7 != nullptr) {
      iVar5 = 0x35;
      local_14 = pbVar7;
      do {
        pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x5d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        local_14 = local_14 + -1;
        pbVar8 = pbVar7;
      } while (local_14 != nullptr);
    }
    if (pbVar8 < (byte *)0x21) {
      iVar5 = (int)pbVar8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x5d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    st::external_00000080(&this_00->field_01E1,"%d%%",(uint)(byte)this_00->field_0C2A);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x15,0x68,0xc3,0xc);
    st::fn_007119C0(this_00->field_01B8,(uint *)&this_00->field_01E1,-1,-1,5);
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    pbVar7 = (byte *)(uint)this_00->field_0C29;
    local_8 = nullptr;
    if (pbVar7 != nullptr) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != nullptr);
    }
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case CASE_62:
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x15,0x66,0x66,0xb);
    uVar6 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)st::fn_006B0140(0x2725,g_module_00807618);
    st::fn_007119C0(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6);
    resourceString = &this_00->field_01E1;
    st::external_00000080(resourceString,"%d",*(undefined4 *)&this_00->field_0xc12);
    st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x7f,0x66,0x24,0xb);
    st::fn_007119C0(this_00->field_01C4,(uint *)resourceString,-1,-1,5);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x8e,0x4f,0x17,0xb);
    uVar6 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)st::fn_006B0140(0x2740,g_module_00807618);
    st::fn_007119C0(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6);
    st::external_00000080(resourceString,"%d",this_00->field_0C16);
    st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0xa5,0x4f,0x24,0xb);
    st::fn_007119C0(this_00->field_01C4,(uint *)resourceString,-1,-1,4);
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    uVar6 = this_00->field_0C16;
    if (uVar6 < *(uint *)&this_00->field_0xc12) {
      pbVar7 = (byte *)0x21;
    }
    else if (uVar6 == 0) {
      pbVar7 = nullptr;
    }
    else {
      pbVar7 = (byte *)((*(uint *)&this_00->field_0xc12 * 0x21) / uVar6);
    }
    pbVar8 = nullptr;
    if (pbVar7 != nullptr) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
        pbVar8 = local_8;
      } while (pbVar7 != nullptr);
    }
    if (pbVar8 < (byte *)0x21) {
      iVar5 = (int)pbVar8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case CASE_63:
    if (*(int *)&this_00->field_0xc12 == 0) {
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
LAB_0050b386:
      UVar9 = 0x2713;
      goto cf_common_exit_0050B38B;
    }
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x28,0x50,'\x01',
           (byte *)this_00->field_09D9[0xe]);
    uVar6 = st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A);
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,uVar6);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2a,0x52,'\x01',pbVar7);
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    pbVar7 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
    local_14 = nullptr;
    if (pbVar7 != nullptr) {
      iVar5 = 0x35;
      local_14 = pbVar7;
      do {
        pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != nullptr);
    }
    if (local_14 < (byte *)0x21) {
      iVar5 = (int)local_14 * 4 + 0x35;
      do {
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x5c,0x69,0x7a,0xb);
    pHVar16 = g_module_00807618;
    UVar9 = st::fn_00403684(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A,0);
    pcVar10 = st::fn_006B0140(UVar9,pHVar16);
    uVar6 = 0xffffffff;
    do {
      pcVar15 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar15 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar15;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar15 + -uVar6;
    pcVar15 = &this_00->field_01E1;
    memmove(pcVar15, pcVar10, uVar6); /* compiler REP MOVS byte copy */
    for (puVar11 = st::fn_0072E560((uint *)&this_00->field_01E1,'\n');
        puVar11 != nullptr; puVar11 = st::fn_0072E560(puVar11,'\n')) {
      *(undefined1 *)puVar11 = 0x20;
    }
    st::fn_00711B70(this_00->field_01B8,(uint *)&this_00->field_01E1,-2,-1,5,-1,-1);
    pbVar7 = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[1],0,100,0x13,0x18,
                                         0xc,0);
    if (pbVar7 != nullptr) {
      st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",(uint)(ushort)this_00->field_0C1C);
      st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,7);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,100,0x59,'\x01',pbVar7);
      st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",(uint)(ushort)this_00->field_0C20);
      st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0xaf,0x59,'\x01',pbVar7);
      st::fn_00710F00(this_00->field_01C4);
    }
    puVar12 = st::fn_00709AF0
                        (DAT_00806794,CASE_1,"BUT_RCTTYPESI04",0xffffffff,0,1,0,
                         nullptr);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x82,0x56,'\x01',(byte *)puVar12);
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0B1B,0);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0xa1,0x56,'\x01',pbVar7);
    break;
  case CASE_64:
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x19,0x59,0xbb,0xb);
    uVar6 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)st::fn_006B0140(0x272d,g_module_00807618);
    st::fn_007119C0(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6);
    st::external_00000080(&this_00->field_01E1,"%4d",*(undefined4 *)&this_00->field_0xc12);
    st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x66,0x65,0x24,0xb);
    st::fn_007119C0(this_00->field_01C4,(uint *)&this_00->field_01E1,-1,-1,7);
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    if (this_00->field_0C16 == 0) {
      pbVar7 = nullptr;
    }
    else {
      pbVar7 = (byte *)((uint)(*(int *)&this_00->field_0xc12 * 0x21) / this_00->field_0C16);
    }
    local_8 = nullptr;
    if (pbVar7 != nullptr) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != nullptr);
    }
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case CASE_67:
  case CASE_68:
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x34,0x5d,0x85,0xb);
    uVar6 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)st::fn_006B0140(0x272b,g_module_00807618);
    st::fn_007119C0(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6);
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x50,'\x01',pbVar7);
    uVar6 = 0;
    if (this_00->field_0C11 != CASE_0) {
      iVar5 = 0x35;
      do {
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x52,'\x01',pbVar7);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar6 < this_00->field_0C11);
    }
    if (uVar6 < 0x21) {
      iVar5 = uVar6 * 4 + 0x35;
      do {
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x52,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x34,0x7d,0x85,0xb);
    uVar6 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)st::fn_006B0140(0x272c,g_module_00807618);
    st::fn_007119C0(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6);
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x71,'\x01',pbVar7);
    uVar6 = 0;
    if (*(int *)&this_00->field_0xc12 != 0) {
      iVar5 = 0x35;
      do {
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x73,'\x01',pbVar7);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar6 < *(uint *)&this_00->field_0xc12);
    }
    if (uVar6 < 0x21) {
      iVar5 = uVar6 * 4 + 0x35;
      do {
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x73,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case CASE_6D:
    local_8 = &this_00->field_0C24;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_20 = -0xc24 - (int)this_00;
    iVar5 = 99;
    local_14 = (byte *)0x2c;
    do {
      pbVar7 = local_14;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,(int)(local_14 + -2),0x55,'\x01',
             (byte *)this_00->field_09D9[0xe]);
      uVar6 = st::fn_004056F5(*local_10,local_8[-10]);
      pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,uVar6);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,(int)pbVar7,0x57,'\x01',pbVar8);
      pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,4);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5 + -2,0x58,'\x01',pbVar7);
      local_c = 0;
      uVar6 = *local_8 / 10;
      if (uVar6 != 0) {
        iVar13 = 0x7e;
        local_18 = uVar6;
        local_c = uVar6;
        do {
          pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,7);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,iVar13,'\x01',pbVar7);
          iVar13 = iVar13 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      if (local_c < 10) {
        iVar13 = local_c * -4 + 0x7e;
        local_18 = 10 - local_c;
        do {
          pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,8);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,iVar13,'\x01',pbVar7);
          iVar13 = iVar13 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x1a;
    } while (local_8 + local_20 < (byte *)0x2);
    st::external_00000080((LPSTR)&DAT_0080f33a,"%d %% %d",(uint)(byte)this_00->field_0C24,
              (uint)(byte)this_00->field_0C25);
    st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,0x5f,0x4d,0x2f,0xb);
    this_01 = this_00->field_01B8;
    uVar6 = 5;
    puVar11 = &DAT_0080f33a;
cf_common_exit_0050BD93:
    st::fn_007119C0(this_01,puVar11,-1,-1,uVar6);
    break;
  case CASE_70:
  case CASE_72:
  case CASE_73:
    pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    pbVar7 = (byte *)(uint)this_00->field_0C29;
    local_8 = nullptr;
    local_14 = pbVar7;
    if (pbVar7 != nullptr) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != nullptr);
    }
    pbVar7 = local_14;
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    pbVar8 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[2],0,0x24,6,0xa4,
                                         0x2b,0);
    if (pbVar8 != nullptr) {
      iVar19 = -1;
      iVar18 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -1;
      puVar11 = (uint *)st::fn_006B0140(0x36c4 - (pbVar7 < (byte *)0x21),g_module_00807618);
      st::fn_00711B70(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar18,iVar19);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x24,0x4c,'\x01',pbVar8);
      st::fn_00710F00(this_00->field_01B8);
    }
  }
switchD_0050a9c9_caseD_5f:
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
#line 1 "decomp/ST.exe/functions/0050C620/decomp.c"
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
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  ccFntTy *this_01;
  char cVar15;
  CPanelTy_field_0BF5State *pCVar16;
  char *pcVar17;
  short *psVar18;
  CPanelTy_field_0BF5State *pCVar19;
  short *psVar20;
  bool bVar22;
  int iVar23;
  int iVar24;
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
  byte local_44;
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
    iVar13 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x8ae,0,iVar6,
                                "%s","CPanelTy::Update4PanelSI");
    if (iVar13 == 0) {
      st::fn_006A5E40(iVar6,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x8ae);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pCVar1 = &local_7c->field_0BF5;
  pCVar16 = pCVar1;
  pCVar19 = &local_78;
  memmove(pCVar19, pCVar16, 0x5c); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  pCVar16 = pCVar1;
  for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pCVar16 = CASE_0;
    pCVar16 = pCVar16 + 1;
  }
  st::fn_004035BC(g_allPlayers_007FA174,4,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  CVar2 = this_00->field_0BFA;
  if ((local_73 != CVar2) || (local_72 != this_00->field_0BFB)) {
cf_common_exit_0050E007:
    st::fn_00402590(this_00);
    st::fn_00403602(this_00,'\x01');
    st::fn_00405BA0(this_00);
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  if ((this_00->field_0BFB == '\x02') && (CVar2 == CASE_1)) {
    cVar14 = '\0';
    cVar15 = '\0';
    uVar7 = 0;
    do {
      if ((&this_00->field_0BFE)[uVar7] != '\0') {
        cVar15 = cVar15 + '\x01';
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 6);
    uVar7 = 0;
    do {
      if (*(char *)((int)local_6f + uVar7) != '\0') {
        cVar14 = cVar14 + '\x01';
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 6);
    if (cVar15 == cVar14) {
      iVar6 = 3;
      bVar22 = true;
      psVar18 = (short *)&this_00->field_0BFE;
      psVar20 = local_6f;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar22 = *psVar18 == *psVar20;
        psVar18 = psVar18 + 1;
        psVar20 = psVar20 + 1;
      } while (bVar22);
      if (bVar22) {
        if (this_00->field_0BFD != local_70) {
          st::fn_00404BA1(this_00,'\0');
        }
      }
      else {
        this_00->field_0028 = 5;
        st::fn_006E6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
        local_c = local_c & 0xffffff00;
        pcVar17 = &this_00->field_0BFE;
        do {
          if (*pcVar17 != '\0') {
            st::fn_0040313E(this_00,0,(byte)local_c);
          }
          bVar5 = (char)local_c + 1;
          pcVar17 = pcVar17 + 1;
          local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar5));
        } while (bVar5 < 6);
        st::fn_00404BA1(this_00,'\0');
        st::fn_004040FC(g_cursorClass_00802A30);
      }
      iVar6 = 3;
      bVar22 = true;
      psVar18 = (short *)&this_00->field_0C04;
      psVar20 = local_6f + 3;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar22 = *psVar18 == *psVar20;
        psVar18 = psVar18 + 1;
        psVar20 = psVar20 + 1;
      } while (bVar22);
      if ((!bVar22) || (this_00->field_0BFC != local_71)) {
        st::fn_00404F89(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_78);
      }
    }
    else {
      st::fn_00403602(this_00,'\x01');
    }
    if (((this_00->field_0C0A != local_63) || (this_00->field_0BFC != local_71)) &&
       (this_00->field_09C0[1] != 0)) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = (uint)(byte)this_00->field_0C0A;
      }
      uVar9 = this_00->field_09C0[1];
      *(uint *)&this_00->field_0x2c = uVar7;
      st::fn_006E6080(this_00,2,uVar9,(undefined4 *)&this_00->field_0x18);
    }
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (this_00->field_0C24 != local_49[0]) {
        uVar7 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar7 != 0) {
          iVar6 = 0x35;
          local_8 = uVar7;
          do {
            pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          1);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
            iVar6 = iVar6 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (local_8 < 0x21) {
          iVar6 = local_8 * 4 + 0x35;
          do {
            pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          0);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
            iVar6 = iVar6 + 4;
          } while (iVar6 < 0xb9);
        }
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09D9[2],0,0x5c,10,0x3c,0x1e);
        st::fn_00402A3B(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
    }
    else {
      st::fn_00402590(this_00);
      st::fn_00403602(this_00,'\0');
      st::fn_00405BA0(this_00);
    }
    if (this_00->field_0C4D == local_20) {
      g_currentExceptionFrame = local_c0.previous;
      return;
    }
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
  cVar14 = '\0';
  cVar15 = '\0';
  uVar7 = 0;
  do {
    if ((&this_00->field_0BFE)[uVar7] != '\0') {
      cVar15 = cVar15 + '\x01';
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  uVar7 = 0;
  do {
    if (*(char *)((int)local_6f + uVar7) != '\0') {
      cVar14 = cVar14 + '\x01';
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  if (cVar15 == cVar14) {
    iVar6 = 3;
    bVar22 = true;
    psVar18 = (short *)&this_00->field_0BFE;
    psVar20 = local_6f;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar22 = *psVar18 == *psVar20;
      psVar18 = psVar18 + 1;
      psVar20 = psVar20 + 1;
    } while (bVar22);
    if (bVar22) {
      if (this_00->field_0BFD != local_70) {
        st::fn_00404BA1(this_00,'\0');
      }
    }
    else {
      this_00->field_0028 = 5;
      st::fn_006E6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
      local_c = local_c & 0xffffff00;
      pcVar17 = &this_00->field_0BFE;
      do {
        if (*pcVar17 != '\0') {
          st::fn_0040313E(this_00,0,(byte)local_c);
        }
        bVar5 = (char)local_c + 1;
        pcVar17 = pcVar17 + 1;
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar5));
      } while (bVar5 < 6);
      st::fn_00404BA1(this_00,'\0');
      st::fn_004040FC(g_cursorClass_00802A30);
    }
    iVar6 = 3;
    bVar22 = true;
    psVar18 = (short *)&this_00->field_0C04;
    psVar20 = local_6f + 3;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar22 = *psVar18 == *psVar20;
      psVar18 = psVar18 + 1;
      psVar20 = psVar20 + 1;
    } while (bVar22);
    if ((!bVar22) || (this_00->field_0BFC != local_71)) {
      st::fn_00404F89(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_78);
    }
  }
  else {
    st::fn_00403602(this_00,'\x01');
  }
  if (((this_00->field_0C0A != local_63) || (this_00->field_0BFC != local_71)) &&
     (this_00->field_09C0[1] != 0)) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)(byte)this_00->field_0C0A;
    }
    uVar9 = this_00->field_09C0[1];
    *(uint *)&this_00->field_0x2c = uVar7;
    st::fn_006E6080(this_00,2,uVar9,(undefined4 *)&this_00->field_0x18);
  }
  iVar6 = 3;
  bVar22 = true;
  psVar18 = (short *)&this_00->field_0C0B;
  psVar20 = local_62;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar22 = *psVar18 == *psVar20;
    psVar18 = psVar18 + 1;
    psVar20 = psVar20 + 1;
  } while (bVar22);
  if ((!bVar22) || (this_00->field_0BFC != local_71)) {
    uVar7 = 0;
    puVar10 = this_00->field_0B1F;
    do {
      if (*puVar10 != 0) {
        this_00->field_0028 = 0x20;
        if (this_00->field_0BFC == '\0') {
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)(byte)(&this_00->field_0C0B)[uVar7];
        }
        *(uint *)&this_00->field_0x2c = uVar9;
        st::fn_006E6080(this_00,2,*puVar10,(undefined4 *)&this_00->field_0x18);
      }
      uVar7 = uVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar7 < 6);
  }
  switch(this_00->field_0BF5) {
  case CASE_53:
    CVar3 = this_00->field_0C3C;
    if (local_31 == CVar3) {
      if (CVar3 == CASE_1) {
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09D9[2],0,0x5c,10,0x32,0x19);
        st::fn_00404F1B(this_00,this_00->field_0194,0x5c,0x50,*(byte *)&this_00->field_0C3D,0x2714);
        uVar7 = (uint)(this_00->field_0C3D * 0x21) / 100;
        local_8 = 0;
        if (uVar7 != 0) {
          iVar6 = 0x35;
          local_8 = uVar7;
          do {
            pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          1);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
            iVar6 = iVar6 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (local_8 < 0x21) {
          iVar6 = local_8 * 4 + 0x35;
          do {
            pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          0);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
            iVar6 = iVar6 + 4;
          } while (iVar6 < 0xb9);
        }
      }
      else if (CVar3 == CASE_2) {
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x28,0x79,
                   (byte *)this_00->field_09D9[2],0,0x28,0x33,0x9b,0xf);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",this_00->field_0C3D);
        st::fn_00710A90(this_00->field_01BC,this_00->field_0194,0,0x28,0x79,0x9b,0xf);
        st::fn_007119C0(this_00->field_01BC,&DAT_0080f33a,-1,-1,1);
      }
      else if (CVar3 == CASE_4) {
        if (this_00->field_0C31 == local_3c) {
          if (this_00->field_0C33 != local_3a) {
            st::fn_006B55F0
                      ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x5c,0x50,
                       (byte *)this_00->field_09D9[2],0,0x5c,10,0x32,0x19);
            st::fn_00403ED1(this_00);
          }
        }
        else {
          st::fn_00402590(this_00);
          st::fn_00403602(this_00,'\x01');
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
          st::fn_004046BF(this_00,1);
          iVar6 = this_00->field_0302;
          if (iVar6 != 0) {
            memset(local_120, 0, 0x20); /* compiler bulk-zero initialization */
            iVar13 = 0;
            local_110 = 5;
            st::fn_006E6080(this_00,2,iVar6,local_120);
          }
        }
      }
      else if (this_00->field_0C33 != local_3a) {
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09D9[2],0,0x5c,10,0x32,0x19);
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
    st::fn_00402590(this_00);
    st::fn_00403602(this_00,'\x01');
    st::fn_00405BA0(this_00);
    break;
  case CASE_5B:
    st::fn_00404697(this_00);
    uVar7 = 0;
    do {
      if (this_00->field_0A15[uVar7] != 0) {
        if (uVar7 == 3) {
          if (this_00->field_09D4 == '\x01') {
            this_00->field_0AA2 = 0;
            this_00->field_0028 = 0x20;
            *(undefined4 *)&this_00->field_0x2c = 0;
            uVar9 = this_00->field_0A15[3];
          }
          else {
            this_00->field_0AA2 = 2;
            uVar11 = st::fn_004034BD(this_00->field_09D4 + CASE_2,CASE_3);
            this_00->field_0AA3 = uVar11;
            if (this_00->field_0BFC == local_71) {
              this_00->field_0028 = 5;
              uVar9 = this_00->field_0A15[3];
            }
            else {
              this_00->field_0028 = 0x20;
              *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
              uVar9 = this_00->field_0A15[3];
            }
          }
        }
        else {
          uVar11 = st::fn_004034BD(this_00->field_09D4 + CASE_2,
                                      (Global_sub_00525EF0_param_2Enum)uVar7);
          *(undefined4 *)((int)this_00->field_0A15 + uVar7 * 0x27 + 0x19) = uVar11;
          if (this_00->field_0BFC == local_71) {
            this_00->field_0028 = 5;
            uVar9 = this_00->field_0A15[uVar7];
          }
          else {
            this_00->field_0028 = 0x20;
            *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
            uVar9 = this_00->field_0A15[uVar7];
          }
        }
        st::fn_006E6080(this_00,2,uVar9,(undefined4 *)&this_00->field_0x18);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    if (-1 < (int)this_00->field_0148[5]) {
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                 this_00->field_0050,this_00->field_00A8);
    }
    break;
  case CASE_5C:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (this_00->field_0C24 != local_49[0]) {
        uVar7 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar7 != 0) {
          iVar6 = 0x35;
          local_8 = uVar7;
          do {
            pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          1);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
            iVar6 = iVar6 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (local_8 < 0x21) {
          iVar6 = local_8 * 4 + 0x35;
          do {
            pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          0);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
            iVar6 = iVar6 + 4;
          } while (iVar6 < 0xb9);
        }
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09D9[2],0,0x5c,10,0x3c,0x1e);
        st::fn_00402A3B(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
    }
    else {
      st::fn_00402590(this_00);
      st::fn_00403602(this_00,'\0');
      st::fn_00405BA0(this_00);
    }
    break;
  case CASE_5D:
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x46,'\x01',
           (byte *)this_00->field_09D9[2]);
    st::fn_00403B16(this_00);
    break;
  case CASE_5E:
    st::external_00000080((LPSTR)&DAT_0080f33a,"%6d",(uint)(ushort)this_00->field_0C34);
    st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x91,0x73,0x26,0xf);
    st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,4);
    if (-1 < (int)this_00->field_0148[5]) {
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                 this_00->field_0050,this_00->field_00A8);
    }
    break;
  case CASE_61:
    if (this_00->field_0C2A != local_43) {
      uVar7 = ((uint)(byte)this_00->field_0C2A * 0x21) / 100;
      local_8 = 0;
      if (uVar7 != 0) {
        iVar6 = 0x35;
        local_8 = uVar7;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x5d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (local_8 < 0x21) {
        iVar6 = local_8 * 4 + 0x35;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x5d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
        } while (iVar6 < 0xb9);
      }
      pbVar8 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[2],0,0x15,0x22,
                                           0xc3,0xc,0);
      if (pbVar8 != nullptr) {
        st::external_00000080((LPSTR)&DAT_0080f33a,"%d%%",(uint)(byte)this_00->field_0C2A);
        st::fn_007119C0(this_00->field_01B8,&DAT_0080f33a,-1,-1,5);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x15,0x68,'\x01',pbVar8);
        st::fn_00710F00(this_00->field_01B8);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (this_00->field_0C29 != local_44) {
      uVar7 = (uint)this_00->field_0C29;
      local_8 = 0;
      if (uVar7 != 0) {
        iVar6 = 0x35;
        local_8 = uVar7;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (local_8 < 0x21) {
        iVar6 = local_8 * 4 + 0x35;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
        } while (iVar6 < 0xb9);
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
      pbVar8 = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[7],0,0x7f,0x20,
                                           0x24,0xb,0);
      if (pbVar8 != nullptr) {
        st::external_00000080((LPSTR)&DAT_0080f33a,"%d",*(undefined4 *)&this_00->field_0xc12);
        st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x7f,0x66,'\x01',pbVar8);
        st::fn_00710F00(this_00->field_01C4);
      }
      pbVar8 = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[7],0,0xa5,9,0x24,
                                           0xb,0);
      if (pbVar8 != nullptr) {
        st::external_00000080((LPSTR)&DAT_0080f33a,"%d",this_00->field_0C16);
        st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,4);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0xa5,0x4f,'\x01',pbVar8);
        st::fn_00710F00(this_00->field_01C4);
      }
      uVar7 = this_00->field_0C16;
      if (uVar7 < *(uint *)&this_00->field_0xc12) {
        uVar7 = 0x21;
      }
      else if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (*(uint *)&this_00->field_0xc12 * 0x21) / uVar7;
      }
      local_8 = 0;
      if (uVar7 != 0) {
        iVar6 = 0x35;
        local_8 = uVar7;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (local_8 < 0x21) {
        iVar6 = local_8 * 4 + 0x35;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
        } while (iVar6 < 0xb9);
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
      st::fn_00402590(this_00);
      iVar6 = this_00->field_0302;
      if (iVar6 != 0) {
        memset(local_e0, 0, 0x20); /* compiler bulk-zero initialization */
        local_d0 = 5;
        st::fn_006E6080(this_00,2,iVar6,local_e0);
      }
      break;
    }
    if (this_00->field_0C24 != local_49[0]) {
      uVar7 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
      local_8 = 0;
      if (uVar7 != 0) {
        iVar6 = 0x35;
        local_8 = uVar7;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (local_8 < 0x21) {
        iVar6 = local_8 * 4 + 0x35;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
        } while (iVar6 < 0xb9);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (((this_00->field_0C1C == local_51) && (this_00->field_0C20 == local_4d)) ||
       (pbVar8 = (byte *)st::fn_00710BA0(this_00->field_01C4,this_00->field_09D9[1],0,100,0x13,
                                             0x18,0xc,0), pbVar8 == nullptr)) break;
    if (this_00->field_0C1C != local_51) {
      st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",(uint)(ushort)this_00->field_0C1C);
      st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,7);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,100,0x59,'\x01',pbVar8);
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (this_00->field_0C20 != local_4d) {
      st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",(uint)(ushort)this_00->field_0C20);
      st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0xaf,0x59,'\x01',pbVar8);
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
      st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",
                *(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12);
      st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x66,0x65,0x24,0xb);
      st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,7);
      if (this_00->field_0C16 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (uint)(*(int *)&this_00->field_0xc12 * 0x21) / this_00->field_0C16;
      }
      local_8 = 0;
      if (uVar7 != 0) {
        iVar6 = 0x35;
        local_8 = uVar7;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (local_8 < 0x21) {
        iVar6 = local_8 * 4 + 0x35;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
        } while (iVar6 < 0xb9);
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
      uVar7 = 0;
      if (this_00->field_0C11 != CASE_0) {
        iVar6 = 0x35;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x52,'\x01',pbVar8);
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar7 < this_00->field_0C11);
      }
      if (uVar7 < 0x21) {
        iVar6 = uVar7 * 4 + 0x35;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x52,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
        } while (iVar6 < 0xb9);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) {
      uVar7 = 0;
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != 0) {
        iVar6 = 0x35;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x73,'\x01',pbVar8);
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar7 < *(uint *)&this_00->field_0xc12);
      }
      if (uVar7 < 0x21) {
        iVar6 = uVar7 * 4 + 0x35;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x73,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
        } while (iVar6 < 0xb9);
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
      uVar9 = local_8;
      uVar7 = local_14;
      if (*local_1c != *local_10) {
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,local_14 - 2,0x55,'\x01',
               (byte *)this_00->field_09D9[0xe]);
        uVar12 = st::fn_004056F5(*local_10,(&this_00->field_0C1A)[uVar9]);
        pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,
                                      uVar12);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,uVar7,0x57,'\x01',pbVar8);
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
      if (local_49[uVar9] != (&this_00->field_0C24)[uVar9]) {
        local_18 = 0;
        uVar7 = (byte)(&this_00->field_0C24)[uVar9] / 10;
        if (uVar7 != 0) {
          iVar6 = 0x7e;
          local_18 = uVar7;
          do {
            pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          7);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,local_c,iVar6,'\x01',pbVar8);
            iVar6 = iVar6 + -4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (local_18 < 10) {
          iVar6 = local_18 * -4 + 0x7e;
          iVar13 = 10 - local_18;
          do {
            pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          8);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,local_c,iVar6,'\x01',pbVar8);
            iVar6 = iVar6 + -4;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
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
    st::external_00000080((LPSTR)&DAT_0080f33a,"%d %% %d",(uint)(byte)this_00->field_0C24,
              (uint)(byte)this_00->field_0C25);
    pbVar8 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[1],0,0x5f,7,0x2f,
                                         0xb,0);
    if (pbVar8 == nullptr) break;
    st::fn_007119C0(this_00->field_01B8,&DAT_0080f33a,-1,-1,5);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x5f,0x4d,'\x01',pbVar8);
    this_01 = this_00->field_01B8;
LAB_0050dfdc:
    st::fn_00710F00(this_01);
    break;
  case CASE_6E:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == 0) {
        st::external_00000080((LPSTR)&DAT_0080f33a,"%d",(uint)(ushort)this_00->field_0C2F);
        st::fn_00710A90(this_00->field_01C4,this_00->field_0194,0,0x1c,0x58,0xb7,0xf);
        st::fn_007119C0(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
      }
      else if (this_00->field_0C24 != local_49[0]) {
        uVar7 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar7 != 0) {
          iVar6 = 0x35;
          local_8 = uVar7;
          do {
            pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          1);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
            iVar6 = iVar6 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (local_8 < 0x21) {
          iVar6 = local_8 * 4 + 0x35;
          do {
            pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          0);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
            iVar6 = iVar6 + 4;
          } while (iVar6 < 0xb9);
        }
        if (-1 < (int)this_00->field_0148[5]) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
    }
    else {
      st::fn_00402590(this_00);
      iVar6 = this_00->field_0302;
      if (iVar6 != 0) {
        memset(local_100, 0, 0x20); /* compiler bulk-zero initialization */
        local_f0 = 5;
        st::fn_006E6080(this_00,2,iVar6,local_100);
      }
    }
    break;
  case CASE_70:
  case CASE_72:
  case CASE_73:
    if (this_00->field_0C29 != local_44) {
      uVar7 = (uint)this_00->field_0C29;
      local_8 = 0;
      local_14 = uVar7;
      if (uVar7 != 0) {
        iVar6 = 0x35;
        local_8 = uVar7;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (local_8 < 0x21) {
        iVar6 = local_8 * 4 + 0x35;
        do {
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar6,0x7d,'\x01',pbVar8);
          iVar6 = iVar6 + 4;
        } while (iVar6 < 0xb9);
      }
      pbVar8 = (byte *)st::fn_00710BA0(this_00->field_01B8,this_00->field_09D9[2],0,0x24,6,0xa4,
                                           0x2b,0);
      if (pbVar8 != nullptr) {
        iVar24 = -1;
        iVar23 = -1;
        uVar7 = 5;
        iVar13 = -1;
        iVar6 = -1;
        puVar10 = (uint *)st::fn_006B0140(0x36c4 - (local_14 < 0x21),g_module_00807618);
        st::fn_00711B70(this_00->field_01B8,puVar10,iVar6,iVar13,uVar7,iVar23,iVar24);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x24,0x4c,'\x01',pbVar8);
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
  st::fn_004019B5(this_00);
  g_currentExceptionFrame = local_c0.previous;
  return;
switchD_0050c9ae_caseD_dd:
  st::fn_00402590(this_00);
  iVar6 = this_00->field_0302;
  if (iVar6 == 0) {
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  memset(local_140, 0, 0x20); /* compiler bulk-zero initialization */
  local_130 = 5;
  st::fn_006E6080(this_00,2,iVar6,local_140);
  g_currentExceptionFrame = local_c0.previous;
  return;
}

// 0050E7D0 CPanelTy::SetControlObjSI
#line 1 "decomp/ST.exe/functions/0050E7D0/decomp.c"
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
  char *pcVar7;
  LPSTR pCVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  byte bVar15;
  uint *puVar16;
  int iVar17;
  bool bVar18;
  undefined4 uVar19;
  short sVar20;
  int iVar21;
  ushort uVar22;
  ushort uVar23;
  undefined4 uVar24;
  char *pcVar25;
  undefined4 uVar26;
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
  undefined1 *local_1c;
  uint local_18;
  Global_sub_00529590_param_1Enum *local_14;
  undefined1 *local_10;
  uint local_c;
  Global_sub_00529590_param_1Enum *local_8;

  local_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_10c;
  local_20 = this;
  iVar6 = st::fn_0072D7F0(local_10c.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_10c.previous;
    iVar17 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0x94e,0,iVar6,
                                "%s","CPanelTy::SetControlObjSI");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x94e);
    return;
  }
  if (param_1 != '\0') {
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
  uVar10 = this_00->field_09D0;
  this_00->field_0310[2] = 0;
  if (uVar10 != 0) {
    st::fn_006E56B0(this_00->field_000C,uVar10);
  }
  this_00->field_09D0 = 0;
  puVar16 = this_00->field_0A15;
  iVar6 = 6;
  do {
    if (*puVar16 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar16);
      *puVar16 = 0;
    }
    puVar16 = puVar16 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar16 = this_00->field_0B1F;
  iVar6 = 6;
  do {
    if (*puVar16 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar16);
      *puVar16 = 0;
    }
    puVar16 = puVar16 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (this_00->field_0B37 != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_0B37);
  }
  CVar1 = this_00->field_0BFA;
  this_00->field_0B37 = 0;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_3)) || (CVar1 == CASE_4)) {
    uVar10 = this_00->field_09C0[1];
    if (uVar10 != 0) {
      *(undefined4 *)&this_00->field_0x2c = 0;
      this_00->field_0028 = 0x20;
      st::fn_006E6080(this_00,2,uVar10,(undefined4 *)&this_00->field_0x18);
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
    g_currentExceptionFrame = local_10c.previous;
    return;
  }
  local_18 = local_18 & 0xffffff00;
  memset(local_70, 0, 0x50); /* compiler bulk-zero initialization */
  local_1c = &this_00->field_0x86a;
  local_8 = &this_00->field_0BFE;
  puVar13 = (undefined1 *)(-0xbfe - (int)this_00);
  local_10 = puVar13;
  do {
    if (*local_8 != 0) {
      local_14 = local_8 + (int)puVar13;
      iVar17 = 0xc;
      iVar6 = 0xd;
      if (local_14 == (Global_sub_00529590_param_1Enum *)0x1) {
        iVar17 = 0x49;
      }
      else if (local_14 == (Global_sub_00529590_param_1Enum *)0x2) {
        iVar17 = 0xc;
        iVar6 = 0x27;
      }
      else if (local_14 == (Global_sub_00529590_param_1Enum *)0x3) {
        iVar17 = 0x49;
        iVar6 = 0x27;
      }
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
      puVar13 = local_1c;
      pcVar7 = st::fn_00405493(*local_8,this_00->field_0BF5);
      pCVar8 = st::fn_0040577C(pcVar7,iVar21);
      st::fn_004041BA(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)local_84c + local_28 * 0x17c),5,
                   local_c,iVar17,iVar6,6,pCVar8,uVar22,uVar23,puVar13,pcVar25);
      pGVar5 = local_14;
      iVar6 = local_28;
      pAVar3 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02DE;
      *(undefined4 *)((int)local_84c + local_28 * 0x17c + 0x110) = 1;
      uVar9 = st::fn_0070B3A0(pAVar3,(int)pGVar5);
      puVar13 = local_10;
      *(undefined4 *)((int)local_84c + iVar6 * 0x17c + 0x124) = uVar9;
      *(undefined4 *)((int)local_84c + iVar6 * 0x17c + 0x128) = 0x3c;
      local_28 = local_28 + 1;
    }
    bVar15 = (char)local_18 + 1;
    local_1c = local_1c + 0x27;
    local_8 = local_8 + 1;
    local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar15));
  } while (bVar15 < 4);
  local_60 = this_00->field_0008;
  local_24 = local_84c;
  local_70[0] = 1;
  local_70[1] = 0xffffffff;
  local_5c = 2;
  local_58 = 0xb20f;
  local_3c = 2;
  local_38 = 0xb210;
  local_40 = local_60;
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,9,&this_00->field_0302,nullptr,local_70,0);
  st::fn_00404BA1(this_00,'\0');
  uVar10 = this_00->field_09C0[1];
  if (uVar10 != 0) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar14 = 0;
    }
    else {
      uVar14 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar14;
    st::fn_006E6080(this_00,2,uVar10,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0BFB == '\x02') {
LAB_0050eb47:
    uVar26 = 0;
    uVar24 = 0;
    iVar17 = 0;
    pcVar7 = nullptr;
    iVar6 = 0;
    uVar22 = 0;
    sVar20 = 0;
    uVar19 = 0xb13f;
    uVar9 = 0xb12f;
    pCVar8 = st::fn_0040577C("BUT_SMALL",0);
    uVar10 = (uint)(this_00->field_0BFC != '\0');
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
      iVar17 = 0;
      pcVar7 = nullptr;
      iVar6 = 0;
      uVar22 = 0;
      sVar20 = 0;
      uVar19 = 0xb13f;
      uVar9 = 0xb12f;
      pCVar8 = st::fn_0040577C("BUT_SMALL",0);
      uVar10 = (uint)(this_00->field_0BFC != '\0');
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
      iVar6 = 0;
      memset(local_25c, 0, 0x150); /* compiler bulk-zero initialization */
      local_10 = (undefined1 *)(this_00->field_0050 + 0x23);
      iVar17 = 0;
      local_14 = (Global_sub_00529590_param_1Enum *)this_00->field_0138;
      puVar11 = local_25c + 1;
      iVar6 = 0;
      do {
        puVar13 = local_10;
        puVar11[-1] = iVar6 + 1;
        *puVar11 = 0;
        puVar11[2] = puVar13;
        bVar18 = local_14 != nullptr;
        puVar11[4] = 0x1d;
        iVar21 = DAT_00806734;
        if (bVar18) {
          iVar21 = this_00->field_00A8;
        }
        puVar11[3] = iVar21 + 0x59 + iVar17;
        puVar11[5] = 0x11;
        puVar11[0x11] = 0;
        puVar11[0x15] = 0x101;
        puVar11[10] = 0x101;
        puVar11[0x16] = 3;
        puVar11[0xb] = 3;
        puVar11[0xc] = 0x4201;
        puVar11[0x17] = 0x4202;
        *(undefined2 *)(puVar11 + 0x18) = 0;
        *(undefined2 *)(puVar11 + 0xd) = 0;
        STField<undefined2>(puVar11,0x62) = 2;
        STField<undefined2>(puVar11,0x36) = 2;
        if (iVar6 == 0) {
          uVar9 = 0x3aa9;
LAB_0050edc5:
          puVar11[0x19] = uVar9;
          puVar11[0xe] = uVar9;
        }
        else if (iVar6 == 1) {
          uVar9 = 0x3aaa;
          goto LAB_0050edc5;
        }
        iVar17 = iVar17 + 0x12;
        puVar11 = puVar11 + 0x1c;
        local_c = local_c + -1;
        iVar6 = iVar6 + 1;
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
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,5,&this_00->field_09D0,nullptr,local_c8
                     ,0);
          local_8 = (Global_sub_00529590_param_1Enum *)((uint)local_8 & 0xffffff00);
          memset(&this_00->field_0xa2d, 0, 0xea); /* compiler bulk-zero initialization */
          do {
            if ((this_00->field_09D4 == '\x01') &&
               ((Global_sub_00525EF0_param_2Enum)local_8 == CASE_3)) {
              uVar12 = 0;
            }
            else {
              uVar12 = 2;
            }
            uVar10 = (uint)local_8 & 0xff;
            local_10 = &this_00->field_0x0 + uVar10 * 0x27;
            puVar13 = local_10 + 0xa2d;
            *puVar13 = uVar12;
            uVar9 = st::fn_004034BD(this_00->field_09D4 + CASE_2,
                                       (Global_sub_00525EF0_param_2Enum)local_8);
            *(undefined4 *)(local_10 + 0xa2e) = uVar9;
            if ((this_00->field_09D4 == '\x01') &&
               ((Global_sub_00525EF0_param_2Enum)local_8 == '\x03')) {
              uVar14 = 0;
            }
            else {
              uVar14 = (uint)(this_00->field_0BFC != '\0');
            }
            uVar14 = st::fn_004017E9(this_00,5,0,uVar14,0xba,uVar10 * 0xb + 0x55,0,nullptr,
                               uVar10 + 0xb18f,uVar10 + 0xb19f,1,0,(int)puVar13,nullptr,0x11,10,
                               0);
            this_00->field_0A15[uVar10] = uVar14;
            bVar15 = (Global_sub_00525EF0_param_2Enum)local_8 + 1;
            local_8 = (Global_sub_00529590_param_1Enum *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar15));
          } while (bVar15 < 4);
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
      iVar17 = 0;
      pcVar7 = nullptr;
      iVar6 = 0;
      uVar22 = 0;
      sVar20 = 0;
      uVar19 = 0xb13f;
      uVar9 = 0xb12f;
      pCVar8 = st::fn_0040577C("BUT_SMALL",0);
      uVar10 = (uint)(this_00->field_0BFC != '\0');
      break;
    default:
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_67:
    case CASE_68:
      if (this_00->field_0BFC == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = (uint)(byte)this_00->field_0C0B;
      }
      uVar10 = st::fn_004017E9(this_00,5,0,uVar10,0x1a,0x5d,1,"BUT_MINUSSI",0xb211,0xb212,0,0,0,
                         nullptr,0,0,0);
      this_00->field_0B1F[0] = uVar10;
      if (this_00->field_0BFC == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = (uint)(byte)this_00->field_0C0C;
      }
      uVar10 = st::fn_004017E9(this_00,5,0,uVar10,0xba,0x5d,1,"BUT_PLUSSI",0xb213,0xb214,0,0,0,
                         nullptr,0,0,0);
      this_00->field_0B1F[1] = uVar10;
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_6D:
      uVar10 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x2a,0x7b,1,
                         "BUT_MINUSSI",0xb211,0xb212,0,0,0,nullptr,0,0,0);
      this_00->field_0B1F[0] = uVar10;
      uVar10 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x45,0x7b,1,
                         "BUT_PLUSSI",0xb213,0xb214,0,0,0,nullptr,0,0,0);
      cVar2 = this_00->field_0BFC;
      this_00->field_0B1F[1] = uVar10;
      uVar10 = st::fn_004017E9(this_00,5,0,(uint)(cVar2 != '\0'),0x8f,0x7b,1,"BUT_MINUSSI",0xb215
                         ,0xb216,0,0,0,nullptr,0,0,0);
      this_00->field_0B1F[2] = uVar10;
      uVar10 = st::fn_004017E9(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0xaa,0x7b,1,
                         "BUT_PLUSSI",0xb217,0xb218,0,0,0,nullptr,0,0,0);
      cVar2 = this_00->field_0BFC;
      this_00->field_0B1F[3] = uVar10;
      uVar10 = st::fn_004017E9(this_00,5,0,(uint)(cVar2 != '\0'),0x17,100,0,nullptr,0xb219,0xb21a,0,0,
                         0,nullptr,0x11,10,0);
      cVar2 = this_00->field_0BFC;
      this_00->field_0B1F[4] = uVar10;
      uVar10 = st::fn_004017E9(this_00,5,0,(uint)(cVar2 != '\0'),0xc5,100,0,nullptr,0xb21b,0xb21c,0,0,
                         0,nullptr,0x11,10,0);
      this_00->field_0B1F[5] = uVar10;
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
  }
  uVar10 = st::fn_004017E9(this_00,5,0,uVar10,0x9a,0x59,1,pCVar8,uVar9,uVar19,sVar20,uVar22,iVar6,pcVar7,
                     iVar17,uVar24,uVar26);
  this_00->field_0310[1] = uVar10;
  g_currentExceptionFrame = local_10c.previous;
  return;
}

// 0050F430 CPanelTy::SetCmdObj
#line 1 "decomp/ST.exe/functions/0050F430/decomp.c"
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
  byte bVar1;
  bool bVar3;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  bool *pbVar6;
  bool *pbVar7;
  undefined4 *puVar8;
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
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel4.cpp",0xa1a,0,iVar4,"%s"
                               ,"CPanelTy::SetCmdObj");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0xa1a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00405E2F(0xae);
  this_00 = local_44;
  local_44->field_012C = 0;
  if (local_44->field_0C52 == '\0') {
    st::fn_00401E15(local_44,'\0',0);
  }
  this_00->field_012C = 1;
  if (g_prodPanel_008016E8 != nullptr) {
    st::fn_00401A73(g_prodPanel_008016E8,'\0');
  }
  if (g_prodPanel_0080167C != nullptr) {
    st::fn_00401A73(g_prodPanel_0080167C,'\0');
  }
  if (g_prodPanel_00801680 != nullptr) {
    st::fn_00401A73(g_prodPanel_00801680,'\0');
  }
  if (g_infocPanel_00801698 != nullptr) {
    (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
  }
  if (g_tradePanel_00802A44 != nullptr) {
    st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
  }
  if (g_prodPanel_00801684 != nullptr) {
    st::fn_00401A73(g_prodPanel_00801684,'\0');
  }
  if (g_behPanel_00801678 != nullptr) {
    (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
  }
  if (g_sAMPanel_008016EC != nullptr) {
    (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
  }
  if (g_upgPanel_00802A48 != nullptr) {
    (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
  }
  if (g_frmPanel_0080168C != nullptr) {
    (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
  }
  st::fn_004040FC(g_cursorClass_00802A30);
  bVar1 = (&this_00->field_0BFE)[param_1];
  switch((uint)bVar1) {
  case 1:
    pbVar6 = &local_6;
    local_6 = false;
    puVar8 = (undefined4 *)0x8;
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
    st::fn_004035AD(g_cursorClass_00802A30,(uint)bVar1,0);
    g_currentExceptionFrame = local_e8.previous;
    return;
  default:
    goto switchD_0050f5b2_caseD_4;
  case 0x15:
  case 0x16:
    local_5 = bVar1 != 0x15;
    pbVar6 = &local_5;
    puVar8 = (undefined4 *)0x28;
    break;
  case 0x1b:
    pbVar6 = local_38;
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
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x1c:
    pbVar6 = local_2c;
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
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x1d:
  case 0x3d:
    if ((g_prodPanel_0080167C != nullptr) && (g_prodPanel_0080167C->field_0172 == 2)) {
      st::fn_00401A73(g_prodPanel_0080167C,'\x01');
    }
    st::fn_00402798(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x1e:
  case 0x1f:
    pbVar6 = &local_14;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_14 = CONCAT31((-(uint3)(bVar1 != 0x1e) & 0xc) + 9,1);
    local_10 = 0;
    uStack_f = 1;
    uStack_d = 0xff;
    local_c = 0xffff;
    local_a = 0xff;
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x20:
  case 0x33:
    pbVar6 = &local_7;
    local_7 = false;
    puVar8 = (undefined4 *)0x22;
    break;
  case 0x21:
  case 0x41:
    if ((g_prodPanel_008016E8 != nullptr) && (g_prodPanel_008016E8->field_0172 == 2)) {
      st::fn_00401A73(g_prodPanel_008016E8,'\x01');
    }
    st::fn_00402798(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x22:
  case 0x3b:
  case 0x40:
    pbVar6 = local_40;
    local_40[4] = false;
    local_40[5] = false;
    local_40[6] = false;
    local_40[0] = true;
    local_40[1] = false;
    local_40[2] = false;
    local_40[3] = false;
    puVar8 = (undefined4 *)0x1f;
    break;
  case 0x23:
    pbVar6 = local_10c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar6[0] = false;
      pbVar6[1] = false;
      pbVar6[2] = false;
      pbVar6[3] = false;
      pbVar6 = pbVar6 + 4;
    }
    *pbVar6 = false;
    pbVar6 = local_10c;
    local_10c[0] = true;
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x24:
  case 0x25:
    pbVar7 = local_a4;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    pbVar6 = local_a4;
    *pbVar7 = false;
    local_a4[0] = true;
    puVar8 = (undefined4 *)0x17;
    local_87 = (uint)(bVar1 == 0x24);
    break;
  case 0x27:
  case 0x32:
    pbVar6 = &local_8;
    local_8 = false;
    puVar8 = (undefined4 *)0x9;
    break;
  case 0x28:
  case 0x29:
    pbVar6 = local_178;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar6[0] = false;
      pbVar6[1] = false;
      pbVar6[2] = false;
      pbVar6[3] = false;
      pbVar6 = pbVar6 + 4;
    }
    *pbVar6 = false;
    pbVar6 = local_178;
    local_178[0] = (bool)((bVar1 != 0x28) + '\f');
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x30:
  case 0x3f:
    if ((g_tradePanel_00802A44 != nullptr) && (g_tradePanel_00802A44->field_0172 == 2))
    {
      st::fn_00404AF7(g_tradePanel_00802A44,'\x01','\0');
    }
    st::fn_00402798(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x31:
    if ((g_tradePanel_00802A44 != nullptr) && (g_tradePanel_00802A44->field_0172 == 2))
    {
      st::fn_00404AF7(g_tradePanel_00802A44,'\x01','\x01');
    }
    st::fn_00402798(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x36:
    pbVar6 = local_130;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar6[0] = false;
      pbVar6[1] = false;
      pbVar6[2] = false;
      pbVar6[3] = false;
      pbVar6 = pbVar6 + 4;
    }
    *pbVar6 = false;
    pbVar6 = local_130;
    local_130[0] = true;
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x38:
  case 0x45:
    pbVar7 = local_80;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    pbVar6 = local_80;
    *pbVar7 = false;
    local_80[0] = true;
    puVar8 = (undefined4 *)0x17;
    local_63 = (uint)(bVar1 != 0x38);
    break;
  case 0x39:
  case 0x46:
    pbVar7 = local_19c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    pbVar6 = local_19c;
    *pbVar7 = false;
    puVar8 = (undefined4 *)0x17;
    local_19c[0] = (bool)((bVar1 != 0x39) + '\f');
    break;
  case 0x3e:
    st::fn_004035AD(g_cursorClass_00802A30,0xe,0x6c);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x44:
    if ((g_prodPanel_00801680 != nullptr) && (g_prodPanel_00801680->field_0172 == 2)) {
      st::fn_00401A73(g_prodPanel_00801680,'\x01');
    }
    st::fn_00402798(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x4f:
    pbVar6 = local_20;
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
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x50:
  case 0x51:
    pbVar6 = local_154;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar6[0] = false;
      pbVar6[1] = false;
      pbVar6[2] = false;
      pbVar6[3] = false;
      pbVar6 = pbVar6 + 4;
    }
    *pbVar6 = false;
    pbVar6 = local_154;
    local_154[0] = (bool)((bVar1 != 0x50) + '\x1b');
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x52:
    pbVar6 = local_5c;
    pbVar7 = local_5c;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    local_5c[0] = true;
    puVar8 = (undefined4 *)0x16;
  }
  st::fn_00403C33(puVar8,(uint *)pbVar6,0,0xffffffff);
switchD_0050f5b2_caseD_4:
  g_currentExceptionFrame = local_e8.previous;
  return;
}

