#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/cpanel2.cpp

// 00501000 CPanelTy::PaintBEnergy
#line 1 "decomp/ST.exe/functions/00501000/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBEnergy

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00501000(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    iVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)local_c->field_02B2,0);
    iVar3 = (pCVar2->field_018C->field_0004 - *(int *)(iVar3 + 4)) / 2;
    pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,
                                  -(uint)(DAT_0080874e != '\x01') & 6);
    st::fn_00403229(pCVar2->field_018C,iVar3,0x50,'\x01',pbVar4);
    if (pCVar2->field_0BCD != 0xff) {
      if (0x28 < (byte)pCVar2->field_0BCD) {
        pCVar2->field_0BCD = 0x28;
      }
      bVar6 = 0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2->field_0BCD != '\0') {
        do {
          pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,3);
          st::fn_00403229(pCVar2->field_018C,iVar3 + 3 + (local_8 & 0xff) * 4,0x53,'\x01',pbVar4);
          bVar6 = bVar6 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
        } while (bVar6 < (byte)pCVar2->field_0BCD);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel2.cpp",0x21,0,iVar3,"%s",
                             "CPanelTy::PaintBEnergy");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x21);
  return;
}

// 00501190 CPanelTy::PaintBCapacity
#line 1 "decomp/ST.exe/functions/00501190/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBCapacity

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00501190(CPanelTy *this)

{
  CPanelTy *pCVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  InternalExceptionFrame local_58;
  uint local_14;
  CPanelTy *local_10;
  uint local_c;
  uint local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pCVar2 = local_10;
  if (iVar4 == 0) {
    iVar4 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02B2,0);
    iVar4 = (pCVar2->field_018C->field_0004 - *(int *)(iVar4 + 4)) / 2;
    pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,
                                  -(uint)(DAT_0080874e != '\x01') & 6);
    st::fn_00403229(pCVar2->field_018C,iVar4,0x50,'\x01',pbVar5);
    local_8 = local_8 & 0xffffff00;
    if (pCVar2->field_0BB6 != '\0') {
      do {
        pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
        st::fn_00403229(pCVar2->field_018C,iVar4 + 3 + (local_8 & 0xff) * 4,0x53,'\x01',pbVar5);
        bVar3 = (byte)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < (byte)pCVar2->field_0BB6);
    }
    uVar7 = local_8 & 0xff;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((byte)local_8));
    local_14 = uVar7;
    if (uVar7 < (byte)pCVar2->field_0BB7 + uVar7) {
      do {
        pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,5);
        st::fn_00403229(pCVar2->field_018C,iVar4 + 3 + uVar7 * 4,0x53,'\x01',pbVar5);
        bVar3 = (byte)local_c + 1;
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar3));
        uVar7 = (uint)bVar3;
      } while ((int)uVar7 < (int)((byte)pCVar2->field_0BB7 + local_14));
    }
    uVar7 = local_c & 0xff;
    STPiece<0,1>(local_8) = (byte)local_c;
    local_14 = uVar7;
    if (uVar7 < (byte)pCVar2->field_0BB5 + uVar7) {
      do {
        pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,2);
        st::fn_00403229(pCVar2->field_018C,iVar4 + 3 + uVar7 * 4,0x53,'\x01',pbVar5);
        STPiece<0,1>(local_8) = (byte)local_8 + 1;
        uVar7 = (uint)(byte)local_8;
      } while ((int)uVar7 < (int)((byte)pCVar2->field_0BB5 + local_14));
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel2.cpp",0x32,0,iVar4,"%s",
                             "CPanelTy::PaintBCapacity");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x32);
  return;
}

// 00501410 CPanelTy::PaintBRLife
#line 1 "decomp/ST.exe/functions/00501410/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBRLife */

void __thiscall st::fn_00501410(CPanelTy *this,int param_1)

{
  byte bVar1;
  CPanelTy *pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pCVar3 = local_c;
  if (iVar4 == 0) {
    st::fn_006B4170(local_c->field_018C,0,param_1 + 0x35,0x70,7,0x21,0);
    bVar1 = pCVar3->field_0BC8;
    cVar7 = (char)(((uint)bVar1 * 0x21) / 100);
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(cVar7));
    if ((bVar1 != 0) && (cVar7 == '\0')) {
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
    }
    if (bVar1 < 0x46) {
      iVar4 = (-(uint)(bVar1 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = local_8 & 0xff;
    st::fn_006B55F0
              (pCVar3->field_018C,0,param_1 + 0x36,0x91 - uVar5,(byte *)pCVar3->field_028A,0,iVar4,
               *(int *)(pCVar3->field_028A + 4) - uVar5,5,uVar5);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel2.cpp",0x40,0,iVar4,"%s",
                             "CPanelTy::PaintBRLife");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x40);
  return;
}

// 00501590 CPanelTy::PaintCtrlBoat
#line 1 "decomp/ST.exe/functions/00501590/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintCtrlBoat

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_14=20;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37

   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00501590(CPanelTy *this)

{
  CPanelTy *this_00;
  int iVar2;
  int iVar3;
  RecoveredSourceFamily_dibcopy *pRVar4;
  byte *pbVar5;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel2.cpp",0x95,0,iVar2,"%s",
                               "CPanelTy::PaintCtrlBoat");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x95);
    return;
  }
  switch(local_8->field_0B9E) {
  case CASE_0:
  case CASE_4:
    pbVar5 = (byte *)local_8->field_0974[0];
    pRVar4 = local_8->field_018C;
    iVar3 = 0;
    iVar2 = 0;
    goto LAB_00501758;
  case CASE_1:
    if ((local_8->field_0B99 == CASE_9) || (local_8->field_0B99 == CASE_15)) {
      pbVar5 = (byte *)local_8->field_0974[1];
      pRVar4 = local_8->field_018C;
      iVar3 = 0;
      iVar2 = 0;
      goto LAB_00501758;
    }
    st::fn_00403229(local_8->field_018C,0,0,'\x01',(byte *)local_8->field_0974[2]);
    st::fn_00403229(this_00->field_018C,
           (this_00->field_018C->field_0004 - *(int *)((byte *)this_00->field_0974[4] + 4)) / 2,0x61
           ,'\x01',(byte *)this_00->field_0974[4]);
    st::fn_00403229(this_00->field_018C,
           (this_00->field_018C->field_0004 - *(int *)((byte *)this_00->field_0974[5] + 4)) / 2,0x7c
           ,'\x01',(byte *)this_00->field_0974[5]);
    break;
  case CASE_2:
    if ((local_8->field_0B99 == CASE_9) || (local_8->field_0B99 == CASE_15)) {
      st::fn_00403229(local_8->field_018C,0,0,'\x01',(byte *)local_8->field_0974[1]);
    }
    else {
      st::fn_00403229(local_8->field_018C,0,0,'\x01',(byte *)local_8->field_0974[2]);
      st::fn_00403229(this_00->field_018C,
             (this_00->field_018C->field_0004 - *(int *)((byte *)this_00->field_0974[5] + 4)) / 2,
             0x7c,'\x01',(byte *)this_00->field_0974[5]);
    }
switchD_0050162e_caseD_a:
    pbVar5 = (byte *)this_00->field_0974[4];
    pRVar4 = this_00->field_018C;
    iVar3 = 0x61;
    iVar2 = (pRVar4->field_0004 - *(int *)(pbVar5 + 4)) / 2;
LAB_00501758:
    st::fn_00403229(pRVar4,iVar2,iVar3,'\x01',pbVar5);
    break;
  case CASE_3:
    st::fn_00403229(local_8->field_018C,0,0,'\x01',(byte *)local_8->field_0974[0]);
    switch(this_00->field_0B99) {
    case CASE_9:
    case CASE_15:
    case CASE_A6:
    case CASE_A7:
    case CASE_AF:
    case CASE_BD:
      break;
    default:
      goto switchD_0050162e_caseD_a;
    }
  }
  if (this_00->field_0B9E == CASE_1) {
    switch(this_00->field_0B99) {
    case CASE_8:
    case CASE_14:
      st::fn_004017DF(this_00);
      break;
    case CASE_16:
    case CASE_17:
    case CASE_25:
      goto switchD_0050179b_caseD_16;
    }
  }
  else {
    if ((this_00->field_0B9E != CASE_4) || (this_00->field_0B99 != CASE_AF))
    goto switchD_0050179b_caseD_9;
switchD_0050179b_caseD_16:
    st::fn_004056AF(this_00);
  }
switchD_0050179b_caseD_9:
  if (-1 < (int)this_00->field_0148[3]) {
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[3],0xffffffff,
               this_00->field_0048,this_00->field_00A0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00501FF0 CPanelTy::Update2PanelWB
#line 1 "decomp/ST.exe/functions/00501FF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::Update2PanelWB

   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
    */

void __thiscall st::fn_00501FF0(CPanelTy *this)

{
  CPanelTy_field_0B99State *pCVar1;
  ushort *puVar2;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  CPanelTy_field_0B99State *pCVar6;
  RecoveredRecord_CPanelTy_00501D00 *pRVar7;
  InternalExceptionFrame local_a8;
  RecoveredRecord_CPanelTy_00501D00 local_64;
  CPanelTy *local_8;

  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_a8.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel2.cpp",0x13e,0,iVar4,"%s"
                               ,"CPanelTy::Update2PanelWB");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x13e);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pCVar1 = &local_8->field_0B99;
  pCVar6 = pCVar1;
  pRVar7 = &local_64;
  memmove(pRVar7, pCVar6, 0x5c); /* compiler REP MOVS byte copy */
  memset(pCVar1, 0, 0x5c); /* compiler bulk-zero initialization */
  st::fn_004035BC(g_allPlayers_007FA174,2,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  if (STPiece<5,1>(local_64) != this_00->field_0B9E) {
cf_common_exit_00502155:
    st::fn_004022CF(this_00);
    st::fn_0040556F(this_00);
    st::fn_0040135C(this_00);
    g_currentExceptionFrame = local_a8.previous;
    return;
  }
  switch(this_00->field_0B9E) {
  case CASE_1:
    if ((STPiece<0,4>(local_64) != this_00->field_0B99) || (STPiece<4,1>(local_64) != this_00->field_0B9D))
    goto cf_common_exit_00502155;
    st::fn_00403FEE(this_00,(AnonShape_00501D00_3942B646 *)&this_00->field_0B99,&local_64);
    switch(this_00->field_0B99) {
    case CASE_8:
    case CASE_14:
      if (((this_00->field_0BB6 == STPiece<29,1>(local_64)) && (this_00->field_0BB5 == STPiece<28,1>(local_64))) &&
         (this_00->field_0BB7 == STPiece<30,1>(local_64))) {
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      st::fn_004017DF(this_00);
      puVar2 = this_00->field_0148[3];
      break;
    default:
      goto switchD_0050207d_default;
    case CASE_16:
    case CASE_17:
    case CASE_25:
      if (this_00->field_0BCD == STPiece<52,1>(local_64)) {
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      st::fn_004056AF(this_00);
      puVar2 = this_00->field_0148[3];
    }
    break;
  case CASE_2:
  case CASE_3:
    if (STPiece<0,4>(local_64) == this_00->field_0B99) {
      st::fn_00403FEE(this_00,(AnonShape_00501D00_3942B646 *)&this_00->field_0B99,&local_64);
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    goto cf_common_exit_00502155;
  case CASE_4:
    if (STPiece<0,4>(local_64) != this_00->field_0B99) goto cf_common_exit_00502155;
    if (this_00->field_0B99 != CASE_AF) {
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    st::fn_004056AF(this_00);
    puVar2 = this_00->field_0148[3];
    break;
  default:
    goto switchD_0050207d_default;
  }
  if (-1 < (int)puVar2) {
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,(uint)puVar2,0xffffffff,this_00->field_0048,
               this_00->field_00A0);
  }
switchD_0050207d_default:
  g_currentExceptionFrame = local_a8.previous;
  return;
}

// 00502360 CPanelTy::SetControlBoat
#line 1 "decomp/ST.exe/functions/00502360/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetControlBoat */

void __thiscall st::fn_00502360(CPanelTy *this)

{
  CPanelTy_field_0B9EState CVar1;
  CPanelTy_field_0B99State CVar2;
  CPanelTy *this_00;
  char *pcVar4;
  LPSTR pCVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  short sVar16;
  ushort uVar17;
  ushort uVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  char *pcVar22;
  undefined4 uVar23;
  AnonShape_004F2E40_DC76A8C6 local_bb0 [7];
  undefined4 local_2c8 [112];
  undefined4 local_108 [22];
  InternalExceptionFrame local_b0;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_24;
  AnonShape_004F2E40_DC76A8C6 *local_20;
  CPanelTy *local_1c;
  int local_18;
  Global_sub_00529590_param_1Enum *local_14;
  uint local_10;
  uint *local_c;
  undefined1 *local_8;

  puVar12 = local_108;
  local_1c = this;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  memset(local_2c8, 0, 0x1c0); /* compiler bulk-zero initialization */
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar8 = st::fn_0072D7F0(local_b0.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    iVar10 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel2.cpp",0x1a0,0,iVar8,
                                "%s","CPanelTy::SetControlBoat");
    if (iVar10 == 0) {
      st::fn_006A5E40(iVar8,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x1a0);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_004040FC(g_cursorClass_00802A30);
  this_00 = local_1c;
  if (local_1c->field_02FE != 0) {
    st::fn_006E56B0(local_1c->field_000C,local_1c->field_02FE);
  }
  this_00->field_02FE = 0;
  puVar11 = this_00->field_0960;
  iVar8 = 4;
  do {
    if (*puVar11 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar11);
      *puVar11 = 0;
    }
    puVar11 = puVar11 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (this_00->field_0970 != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_0970);
  }
  CVar1 = this_00->field_0B9E;
  this_00->field_0970 = 0;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_4)) || (CVar1 == CASE_3)) {
    uVar7 = this_00->field_09C0[0];
    if (uVar7 == 0) goto LAB_00502622;
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 0;
  }
  else {
    local_c = (uint *)((uint)local_c & 0xffffff00);
    memset(local_6c, 0, 0x50); /* compiler bulk-zero initialization */
    local_8 = &this_00->field_0x780;
    local_14 = &this_00->field_0BA2;
    iVar8 = -0xba3 - (int)this_00;
    local_18 = iVar8;
    do {
      if (*local_14 == 0) goto LAB_0050254c;
      iVar13 = 2;
      iVar10 = 5;
      switch(local_14 + iVar8) {
      case nullptr:
        iVar13 = 0x3f;
        break;
      case (Global_sub_00529590_param_1Enum *)0x1:
        iVar13 = 0x7c;
        break;
      case (Global_sub_00529590_param_1Enum *)0x2:
        goto switchD_0050248c_caseD_2;
      case (Global_sub_00529590_param_1Enum *)0x3:
        iVar13 = 0x7c;
        goto switchD_0050248c_caseD_2;
      case (Global_sub_00529590_param_1Enum *)0x4:
        iVar13 = 0x3f;
switchD_0050248c_caseD_2:
        iVar10 = 0x29;
      }
      st::fn_0040313E(this_00,1,(byte)local_c);
      if (this_00->field_0BA0 == '\0') {
        local_10 = 0;
      }
      else {
        local_10 = (uint)local_14[6];
      }
      pcVar22 = nullptr;
      uVar18 = 0;
      uVar17 = 1;
      iVar8 = 0;
      puVar20 = local_8;
      pcVar4 = st::fn_00405493(*local_14,this_00->field_0B99);
      pCVar5 = st::fn_0040577C(pcVar4,iVar8);
      st::fn_004041BA(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)local_bb0 + local_24 * 0x17c),3,
                   local_10,iVar13,iVar10,1,pCVar5,uVar17,uVar18,puVar20,pcVar22);
      iVar8 = local_24 * 0x17c;
      local_24 = local_24 + 1;
      *(undefined4 *)((int)local_bb0 + iVar8 + 0x110) = 1;
      iVar8 = local_18;
LAB_0050254c:
      bVar9 = (char)local_c + 1;
      local_8 = local_8 + 0x27;
      local_14 = local_14 + 1;
      local_c = (uint *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar9));
    } while (bVar9 < 6);
    local_5c = this_00->field_0008;
    local_20 = local_bb0;
    local_6c[0] = 1;
    local_6c[1] = 0xffffffff;
    local_58 = 2;
    local_54 = 0xb1ff;
    local_38 = 2;
    local_34 = 0xb200;
    local_3c = local_5c;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,9,&this_00->field_02FE,nullptr,local_6c,0);
    st::fn_00404BA1(this_00,'\x01');
    uVar7 = this_00->field_09C0[0];
    if (uVar7 == 0) goto LAB_00502622;
    this_00->field_0028 = 0x20;
    if (this_00->field_0BA0 == '\0') {
      *(undefined4 *)&this_00->field_0x2c = 0;
    }
    else {
      *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    }
  }
  st::fn_006E6080(this_00,2,uVar7,(undefined4 *)&this_00->field_0x18);
LAB_00502622:
  if (((((this_00->field_0B9E == CASE_1) || (this_00->field_0B9E == CASE_3)) &&
       ((CVar2 = this_00->field_0B99, CVar2 != CASE_9 && ((CVar2 != CASE_15 && (CVar2 != CASE_BD))))
       )) && (CVar2 != CASE_A7)) && ((CVar2 != CASE_A6 && (CVar2 != CASE_AF)))) {
    uVar23 = 0;
    uVar21 = 0;
    iVar10 = 0;
    pcVar4 = nullptr;
    iVar8 = 0x3b04;
    uVar17 = 0;
    sVar16 = 2;
    uVar15 = 0xb118;
    uVar14 = 0xb117;
    pCVar5 = st::fn_0040577C("BUT_SHOWUPD",0);
    uVar14 = st::fn_004017E9(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x4a,100,1,pCVar5,uVar14,
                       uVar15,sVar16,uVar17,iVar8,pcVar4,iVar10,uVar21,uVar23);
    this_00->field_0970 = uVar14;
  }
  if (this_00->field_0B9E == CASE_2) {
    uVar23 = 0;
    uVar21 = 0;
    iVar10 = 0;
    pcVar4 = nullptr;
    iVar8 = 0x3b05;
    uVar17 = 0;
    sVar16 = 2;
    uVar15 = 0xb11a;
    uVar14 = 0xb119;
    pCVar5 = st::fn_0040577C("BUT_SHOWFRM",0);
    uVar14 = st::fn_004017E9(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x4a,100,1,pCVar5,uVar14,
                       uVar15,sVar16,uVar17,iVar8,pcVar4,iVar10,uVar21,uVar23);
    this_00->field_0970 = uVar14;
  }
  if ((((this_00->field_0B9E == CASE_1) && (this_00->field_0B99 != CASE_9)) &&
      (this_00->field_0B99 != CASE_15)) ||
     (((this_00->field_0B9E == CASE_2 && (this_00->field_0B99 != CASE_9)) &&
      (this_00->field_0B99 != CASE_15)))) {
    local_c = this_00->field_0960;
    bVar9 = 0;
    iVar8 = 0xb230;
    local_8 = (undefined1 *)0xf;
    do {
      if (this_00->field_0BA0 == '\0') {
        local_10 = 0;
      }
      else {
        local_10 = (uint)*(byte *)((int)this_00 + iVar8 + -0xa661);
      }
      uVar15 = 0;
      uVar14 = 0;
      iVar19 = 0;
      iVar6 = 0x4e36 - (uint)(bVar9 != 0);
      pcVar4 = nullptr;
      uVar17 = 0;
      sVar16 = 2;
      iVar10 = iVar8 + -0x10;
      iVar13 = iVar8;
      pCVar5 = st::fn_0040577C("BUT_BEHREPAIR0",0);
      uVar7 = st::fn_004017E9(this_00,3,0,local_10,(int)local_8,0x80,1,pCVar5,iVar10,iVar13,sVar16,uVar17,
                        iVar6,pcVar4,iVar19,uVar14,uVar15);
      bVar9 = bVar9 + 1;
      *local_c = uVar7;
      local_c = local_c + 1;
      iVar8 = iVar8 + 1;
      local_8 = (undefined1 *)((int)local_8 + 0x35);
    } while (bVar9 < 3);
  }
  g_currentExceptionFrame = local_b0.previous;
  return;
}

// 00502990 CPanelTy::PaintCtrlBoatSI
#line 1 "decomp/ST.exe/functions/00502990/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintCtrlBoatSI

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_14=20;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37

   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00502990(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  RecoveredSourceFamily_dibcopy *pRVar7;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel2.cpp",0x1ed,0,iVar3,"%s"
                               ,"CPanelTy::PaintCtrlBoatSI");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x1ed);
    return;
  }
  switch(local_c->field_0B9E) {
  case CASE_0:
    st::fn_00403229(local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974[0]);
    st::fn_00403229(pCVar2->field_018C,0x31,0,'\x06',(byte *)pCVar2->field_0974[2]);
    break;
  case CASE_1:
    st::fn_00403229(local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974[5]);
    if (pCVar2->field_0B99 == CASE_BD) {
      pbVar4 = (byte *)pCVar2->field_0974[2];
LAB_00502b2d:
      pRVar7 = pCVar2->field_018C;
    }
    else {
      pbVar4 = (byte *)pCVar2->field_0974[6];
      pRVar7 = pCVar2->field_018C;
    }
    goto LAB_00502b3b;
  case CASE_2:
    st::fn_00403229(local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974[5]);
    st::fn_00403229(pCVar2->field_018C,0x31,0,'\x06',(byte *)pCVar2->field_0974[6]);
    break;
  case CASE_3:
    st::fn_00403229(local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974[0]);
    switch(pCVar2->field_0B99) {
    case CASE_9:
    case CASE_15:
    case CASE_A6:
    case CASE_A7:
    case CASE_AF:
    case CASE_BD:
      pbVar4 = (byte *)pCVar2->field_0974[2];
      pRVar7 = pCVar2->field_018C;
      break;
    default:
      pbVar4 = (byte *)pCVar2->field_0974[7];
      goto LAB_00502b2d;
    }
LAB_00502b3b:
    st::fn_00403229(pRVar7,0x31,0,'\x06',pbVar4);
    break;
  case CASE_4:
    st::fn_00403229(local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974[0]);
    st::fn_00403229(pCVar2->field_018C,0x31,0,'\x06',(byte *)pCVar2->field_0974[2]);
  }
  if (pCVar2->field_0B9E == CASE_1) {
    switch(pCVar2->field_0B99) {
    case CASE_1A:
      pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,3);
      st::fn_00403229(pCVar2->field_018C,0x3c,0x84,'\x01',pbVar4);
      bVar6 = 0;
      local_8 = local_8 & 0xffffff00;
      if ((pCVar2->field_0BB6 & 0xfe) != 0) {
        do {
          pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,3);
          st::fn_00403229(pCVar2->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',pbVar4);
          bVar6 = bVar6 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
        } while (bVar6 < (byte)pCVar2->field_0BB6 >> 1);
      }
      if (bVar6 < 0x14) {
        iVar5 = 0x14 - (local_8 & 0xff);
        iVar3 = (local_8 & 0xff) * 4 + 0x3f;
        do {
          pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          st::fn_00403229(pCVar2->field_018C,iVar3,0x87,'\x01',pbVar4);
          iVar3 = iVar3 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      break;
    case CASE_1B:
    case CASE_1D:
    case CASE_23:
    case CASE_24:
      if (pCVar2->field_0BCD != -1) {
        pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,3);
        st::fn_00403229(pCVar2->field_018C,0x3c,0x84,'\x01',pbVar4);
        bVar6 = 0;
        local_8 = local_8 & 0xffffff00;
        if (pCVar2->field_0BCD != '\0') {
          do {
            pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1
                                         );
            st::fn_00403229(pCVar2->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',pbVar4);
            bVar6 = bVar6 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar6));
          } while (bVar6 < (byte)pCVar2->field_0BCD);
        }
        if (bVar6 < 0x14) {
          iVar5 = 0x14 - (local_8 & 0xff);
          iVar3 = (local_8 & 0xff) * 4 + 0x3f;
          do {
            pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0
                                         );
            st::fn_00403229(pCVar2->field_018C,iVar3,0x87,'\x01',pbVar4);
            iVar3 = iVar3 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
    }
  }
  if (-1 < (int)pCVar2->field_0148[3]) {
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,(uint)pCVar2->field_0148[3],0xffffffff,
               pCVar2->field_0048,pCVar2->field_00A0);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 00502FC0 CPanelTy::Update2PanelSI
#line 1 "decomp/ST.exe/functions/00502FC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::Update2PanelSI

   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
    */

void __thiscall st::fn_00502FC0(CPanelTy *this)

{
  CPanelTy_field_0B99State *pCVar1;
  char cVar2;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  CPanelTy_field_0B99State *pCVar8;
  RecoveredRecord_CPanelTy_00501D00 *pRVar9;
  InternalExceptionFrame local_ac;
  RecoveredRecord_CPanelTy_00501D00 local_68;
  CPanelTy *local_c;
  uint local_8;

  local_8 = local_8 & 0xffffff00;
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  local_c = this;
  iVar5 = st::fn_0072D7F0(local_ac.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel2.cpp",0x234,0,iVar5,"%s"
                               ,"CPanelTy::Update2PanelSI");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x234);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pCVar1 = &local_c->field_0B99;
  pCVar8 = pCVar1;
  pRVar9 = &local_68;
  memmove(pRVar9, pCVar8, 0x5c); /* compiler REP MOVS byte copy */
  memset(pCVar1, 0, 0x5c); /* compiler bulk-zero initialization */
  st::fn_004035BC(g_allPlayers_007FA174,2,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  if (STPiece<5,1>(local_68) == this_00->field_0B9E) {
    switch(this_00->field_0B9E) {
    case CASE_1:
      if ((STPiece<0,4>(local_68) == this_00->field_0B99) && (STPiece<4,1>(local_68) == this_00->field_0B9D)) {
        st::fn_00403FEE(this_00,(AnonShape_00501D00_3942B646 *)&this_00->field_0B99,&local_68);
        switch(this_00->field_0B99) {
        case CASE_1A:
          goto switchD_005030a2_caseD_1a;
        case CASE_1B:
        case CASE_1D:
        case CASE_23:
        case CASE_24:
          cVar2 = this_00->field_0BCD;
          if (cVar2 == STPiece<52,1>(local_68)) {
            g_currentExceptionFrame = local_ac.previous;
            return;
          }
          if ((cVar2 != -1) && (local_8 = (uint)STPiece<1,3>(local_8) << 8, cVar2 != '\0')) {
            do {
              pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                            this_00->field_02B6,1);
              st::fn_00403229(this_00->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',pbVar6);
              bVar4 = (byte)local_8 + 1;
              local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
            } while (bVar4 < (byte)this_00->field_0BCD);
          }
          if ((byte)local_8 < 0x14) {
            iVar7 = 0x14 - (local_8 & 0xff);
            iVar5 = (local_8 & 0xff) * 4 + 0x3f;
            do {
              pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                            this_00->field_02B6,0);
              st::fn_00403229(this_00->field_018C,iVar5,0x87,'\x01',pbVar6);
              iVar5 = iVar5 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if ((int)this_00->field_0148[3] < 0) {
            g_currentExceptionFrame = local_ac.previous;
            return;
          }
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[3],0xffffffff,
                     this_00->field_0048,this_00->field_00A0);
          g_currentExceptionFrame = local_ac.previous;
          return;
        default:
          g_currentExceptionFrame = local_ac.previous;
          return;
        }
      }
      break;
    case CASE_2:
    case CASE_3:
      if ((STPiece<0,4>(local_68) == this_00->field_0B99) && (STPiece<4,1>(local_68) == this_00->field_0B9D)) {
        st::fn_00403FEE(this_00,(AnonShape_00501D00_3942B646 *)&this_00->field_0B99,&local_68);
        g_currentExceptionFrame = local_ac.previous;
        return;
      }
      break;
    case CASE_4:
      if (STPiece<0,4>(local_68) == this_00->field_0B99) {
        g_currentExceptionFrame = local_ac.previous;
        return;
      }
      break;
    default:
      goto switchD_00503051_default;
    }
  }
  st::fn_00401AEB(this_00);
  st::fn_0040296E(this_00);
  st::fn_0040135C(this_00);
switchD_00503051_default:
  g_currentExceptionFrame = local_ac.previous;
  return;
switchD_005030a2_caseD_1a:
  if (this_00->field_0BB6 == STPiece<29,1>(local_68)) {
    g_currentExceptionFrame = local_ac.previous;
    return;
  }
  local_8 = (uint)STPiece<1,3>(local_8) << 8;
  if ((this_00->field_0BB6 & 0xfe) != 0) {
    do {
      pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
      st::fn_00403229(this_00->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',pbVar6);
      bVar4 = (byte)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
    } while (bVar4 < (byte)this_00->field_0BB6 >> 1);
  }
  if ((byte)local_8 < 0x14) {
    iVar7 = 0x14 - (local_8 & 0xff);
    iVar5 = (local_8 & 0xff) * 4 + 0x3f;
    do {
      pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
      st::fn_00403229(this_00->field_018C,iVar5,0x87,'\x01',pbVar6);
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((int)this_00->field_0148[3] < 0) {
    g_currentExceptionFrame = local_ac.previous;
    return;
  }
  st::fn_006B3640
            ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[3],0xffffffff,
             this_00->field_0048,this_00->field_00A0);
  g_currentExceptionFrame = local_ac.previous;
  return;
}

// 00503450 CPanelTy::SetControlBoatSI
#line 1 "decomp/ST.exe/functions/00503450/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetControlBoatSI */

void __thiscall st::fn_00503450(CPanelTy *this)

{
  CPanelTy_field_0B9EState CVar1;
  CPanelTy_field_0B99State CVar2;
  CPanelTy *this_00;
  byte bVar4;
  char *pcVar5;
  LPSTR pCVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  short sVar15;
  ushort uVar16;
  ushort uVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  int iVar20;
  char *pcVar21;
  undefined4 uVar22;
  undefined4 local_c28 [140];
  AnonShape_004F2E40_DC76A8C6 local_9f8 [7];
  undefined4 local_110 [22];
  InternalExceptionFrame local_b8;
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_2c;
  AnonShape_004F2E40_DC76A8C6 *local_28;
  CPanelTy *local_24;
  int local_20;
  LPSTR local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  uint local_c;
  int local_8;

  puVar12 = local_110;
  local_24 = this;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  memset(local_c28, 0, 0x230); /* compiler bulk-zero initialization */
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  iVar8 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel2.cpp",0x29d,0,iVar8,"%s"
                               ,"CPanelTy::SetControlBoatSI");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar8,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x29d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_004040FC(g_cursorClass_00802A30);
  this_00 = local_24;
  if (local_24->field_02FE != 0) {
    st::fn_006E56B0(local_24->field_000C,local_24->field_02FE);
  }
  this_00->field_02FE = 0;
  puVar11 = this_00->field_0960;
  iVar8 = 4;
  do {
    if (*puVar11 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar11);
      *puVar11 = 0;
    }
    puVar11 = puVar11 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (this_00->field_0970 != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_0970);
  }
  iVar8 = local_10;
  CVar1 = this_00->field_0B9E;
  this_00->field_0970 = 0;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_4)) || (CVar1 == CASE_3)) {
    uVar13 = this_00->field_09C0[0];
    if (uVar13 == 0) goto LAB_00503776;
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 0;
  }
  else {
    memset(local_74, 0, 0x50); /* compiler bulk-zero initialization */
    local_c = local_c & 0xffffff00;
    do {
      uVar13 = local_c & 0xff;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)this_00->field_0B1F + uVar13 + 0x83) == '\0') goto LAB_005036ae;
      switch(uVar13) {
      case 0:
        iVar8 = 0x10;
        local_8 = 0x4c;
        local_10 = 0x10;
        break;
      case 1:
        iVar8 = 0x4d;
        local_8 = 0x4c;
        local_10 = 0x4d;
        break;
      case 2:
        iVar8 = 0x82;
        local_8 = 0x4c;
        local_10 = 0x82;
        break;
      case 3:
        iVar8 = 0x10;
        goto LAB_005035b5;
      case 4:
        iVar8 = 0x82;
        goto LAB_005035b5;
      case 5:
        iVar8 = 0x4d;
LAB_005035b5:
        local_8 = 0x66;
        local_10 = iVar8;
      }
      st::fn_0040313E(this_00,1,(byte)local_c);
      if (this_00->field_0BA0 == '\0') {
        local_14 = nullptr;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_14 = (uint *)(uint)*(byte *)((int)this_00->field_0B1F + uVar13 + 0x89);
      }
      pcVar21 = nullptr;
      puVar18 = &this_00->field_0x780 + uVar13 * 0x27;
      uVar17 = 0;
      uVar16 = 1;
      iVar9 = 0;
      pcVar5 = st::fn_00405493(*(Global_sub_00529590_param_1Enum *)
                                   ((int)this_00->field_0B1F + uVar13 + 0x83),this_00->field_0B99);
      pCVar6 = st::fn_0040577C(pcVar5,iVar9);
      st::fn_004041BA(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)local_9f8 + local_2c * 0x17c),3,
                   local_14,iVar8,local_8,6,pCVar6,uVar16,uVar17,puVar18,pcVar21);
      iVar9 = local_2c;
      *(undefined4 *)((int)local_9f8 + local_2c * 0x17c + 0x110) = 1;
      if ((byte)local_c == 0) {
LAB_00503678:
        iVar10 = 0;
LAB_0050367a:
        uVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02DE,iVar10);
        *(undefined4 *)((int)local_9f8 + iVar9 * 0x17c + 0x124) = uVar7;
        *(undefined4 *)((int)local_9f8 + iVar9 * 0x17c + 0x128) = 0x3c;
        iVar9 = local_2c;
      }
      else if ((1 < (byte)local_c) && ((byte)local_c < 5)) {
        if ((byte)local_c == 0) goto LAB_00503678;
        iVar10 = uVar13 - 1;
        goto LAB_0050367a;
      }
      local_2c = iVar9 + 1;
LAB_005036ae:
      bVar4 = (byte)local_c + 1;
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar4));
    } while (bVar4 < 6);
    local_28 = local_9f8;
    local_64 = this_00->field_0008;
    local_74[0] = 1;
    local_74[1] = 0xffffffff;
    local_60 = 2;
    local_5c = 0xb20d;
    local_40 = 2;
    local_3c = 0xb20e;
    local_44 = local_64;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,9,&this_00->field_02FE,nullptr,local_74,0);
    st::fn_00404BA1(this_00,'\x01');
    uVar13 = this_00->field_09C0[0];
    if (uVar13 == 0) goto LAB_00503776;
    this_00->field_0028 = 0x20;
    if (this_00->field_0BA0 == '\0') {
      *(undefined4 *)&this_00->field_0x2c = 0;
    }
    else {
      *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    }
  }
  st::fn_006E6080(this_00,2,uVar13,(undefined4 *)&this_00->field_0x18);
LAB_00503776:
  if (((this_00->field_0B9E == CASE_1) || (this_00->field_0B9E == CASE_3)) &&
     ((CVar2 = this_00->field_0B99, CVar2 != CASE_9 &&
      ((((CVar2 != CASE_15 && (CVar2 != CASE_BD)) && (CVar2 != CASE_A7)) &&
       ((CVar2 != CASE_A6 && (CVar2 != CASE_AF)))))))) {
    uVar22 = 0;
    uVar19 = 0;
    iVar9 = 0;
    pcVar5 = "BUT_SHOWUPDMSK";
    iVar8 = 0x3b04;
    uVar16 = 0;
    sVar15 = 2;
    uVar14 = 0xb118;
    uVar7 = 0xb117;
    pCVar6 = st::fn_0040577C("BUT_SHOWUPD",0);
    uVar7 = st::fn_004017E9(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x40,0x2f,6,pCVar6,uVar7,
                      uVar14,sVar15,uVar16,iVar8,pcVar5,iVar9,uVar19,uVar22);
    this_00->field_0970 = uVar7;
  }
  if (this_00->field_0B9E == CASE_2) {
    uVar22 = 0;
    uVar19 = 0;
    iVar9 = 0;
    pcVar5 = "BUT_SHOWUPDMSK";
    iVar8 = 0x3b05;
    uVar16 = 0;
    sVar15 = 2;
    uVar14 = 0xb11a;
    uVar7 = 0xb119;
    pCVar6 = st::fn_0040577C("BUT_SHOWFRM",0);
    uVar7 = st::fn_004017E9(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x40,0x2f,6,pCVar6,uVar7,
                      uVar14,sVar15,uVar16,iVar8,pcVar5,iVar9,uVar19,uVar22);
    this_00->field_0970 = uVar7;
  }
  if (((this_00->field_0B9E == CASE_1) && (this_00->field_0B99 != CASE_BD)) ||
     (this_00->field_0B9E == CASE_2)) {
    local_14 = this_00->field_0960;
    local_c = local_c & 0xffffff00;
    local_8 = 0;
    iVar8 = local_20;
    iVar9 = local_18;
    do {
      switch(local_8) {
      case 0:
        iVar9 = 0x6a;
        iVar8 = 0xf;
        local_18 = 0x6a;
        local_20 = 0xf;
        pcVar5 = "BUT_BEHREPAIR0";
        break;
      case 1:
        iVar9 = 0x7a;
        iVar8 = 0x14;
        local_18 = 0x7a;
        local_20 = 0x14;
        pcVar5 = "BUT_BEHREPAIR20";
        break;
      case 2:
        iVar9 = 0x98;
        iVar8 = 0x14;
        local_18 = 0x98;
        local_20 = 0x14;
        pcVar5 = "BUT_BEHREPAIR50";
        break;
      case 3:
        iVar9 = 0x98;
        iVar8 = 0xf;
        local_18 = 0x98;
        local_20 = 0xf;
        pcVar5 = "BUT_BEHREPAIR80";
        break;
      default:
        goto switchD_0050389f_default;
      }
      local_1c = st::fn_0040577C(pcVar5,0);
switchD_0050389f_default:
      iVar20 = 1;
      iVar10 = local_8;
      pCVar6 = st::fn_0040577C("BUT_BEHRMSK",0);
      pCVar6 = st::fn_006F2C00(pCVar6,iVar20,iVar10);
      if (this_00->field_0BA0 == '\0') {
        uVar13 = 0;
      }
      else {
        uVar13 = (uint)(byte)(&this_00->field_0BCF)[local_8];
      }
      uVar13 = st::fn_004017E9(this_00,3,0,uVar13,iVar9,iVar8,6,local_1c,local_8 + 0xb220,local_8 + 0xb230
                         ,2,0,0x4e36 - (uint)((byte)local_c != '\0'),pCVar6,0,0,0);
      *local_14 = uVar13;
      bVar4 = (byte)local_c + 1;
      local_8 = local_8 + 1;
      local_14 = local_14 + 1;
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar4));
    } while (bVar4 < 4);
  }
  g_currentExceptionFrame = local_b8.previous;
  return;
}

// 00503BB0 CPanelTy::SetCmdBoat
#line 1 "decomp/ST.exe/functions/00503BB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetCmdBoat
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00503D0B MOV ECX,dword ptr [EBP + 0x8];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00503BB0(CPanelTy *this,byte param_1)

{
  byte bVar1;
  bool bVar3;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  uint local_9c [9];
  uint local_78 [9];
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  uint local_c;
  undefined1 local_8;
  bool local_6;
  undefined1 local_5;

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
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel2.cpp",0x2ff,0,iVar4,"%s"
                               ,"CPanelTy::SetCmdBoat");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x2ff);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00405E2F(0xae);
  this_00 = local_10;
  local_10->field_012C = 0;
  if (local_10->field_0B64 == '\0') {
    st::fn_00401E15(local_10,'\x01',0);
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
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  bVar1 = *(byte *)((int)this_00->field_0B1F + param_1 + 0x83);
  switch((uint)bVar1) {
  case 1:
    local_5 = 0;
    st::fn_00403C33((undefined4 *)0xa,(uint *)&stack0xfffffffb,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x18:
    st::fn_004035AD(g_cursorClass_00802A30,(uint)bVar1,0);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 4:
    memset(local_78, 0, 0x21); /* compiler bulk-zero initialization */
    STPiece<0,1>(local_78[0]) = 10;
    st::fn_00403C33((undefined4 *)0x17,local_78,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0xb:
  case 0xc:
    local_6 = bVar1 == 0xb;
    st::fn_00403C33((undefined4 *)0x28,(uint *)&local_6,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0xe:
    if ((g_prodPanel_00801684 != nullptr) && (g_prodPanel_00801684->field_0172 == 2)) {
      st::fn_00401A73(g_prodPanel_00801684,'\x01');
    }
    break;
  case 0x14:
    local_8 = 0;
    local_c = 3;
    st::fn_00403C33((undefined4 *)0x21,&local_c,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  default:
    goto switchD_00503d36_caseD_15;
  case 0x2f:
    if ((g_behPanel_00801678 != nullptr) && (g_behPanel_00801678->field_0172 == 2)) {
      (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\x01');
    }
    break;
  case 0x48:
    memset(local_9c, 0, 0x21); /* compiler bulk-zero initialization */
    STPiece<0,1>(local_9c[0]) = 0x14;
    st::fn_00403C33((undefined4 *)0x17,local_9c,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0x4c:
    if ((g_sAMPanel_008016EC != nullptr) && (g_sAMPanel_008016EC->field_0172 == 2)) {
      (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\x01');
    }
  }
  st::fn_00402798(this_00);
switchD_00503d36_caseD_15:
  g_currentExceptionFrame = local_54.previous;
  return;
}

