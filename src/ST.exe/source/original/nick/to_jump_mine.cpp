#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_jump_mine.cpp

// 00618C00 STJumpMineC::GetMessage
#line 1 "decomp/ST.exe/functions/00618C00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402D6A|00618C00; family_names=STJumpMineC::GetMessage; ret4=10;
   direct_offsets={10:1,14:1,18:4,1c:2} */

int __thiscall st::fn_00618C00(STJumpMineC *this,STMessage *message)

{
  STMessageId SVar1;
  STJumpMineC *this_00;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *puVar6;
  byte *puVar7;
  InternalExceptionFrame local_58;
  void *local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  STJumpMineC *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\nick\\to_jump_mine.cpp",0xad,0,iVar4,
                               "%s","STJumpMineC::GetMessage");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\nick\\to_jump_mine.cpp",0xaf);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (SVar1 < MESS_TORPHIT) {
    if (SVar1 == MESS_SHARED_010F) {
      local_10 = st::fn_0040490D(local_8,&local_c);
      st::fn_004025F9(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
      st::fn_006AB060(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      iVar4 = st::fn_00404F8E(local_8);
      if (iVar4 != 0) {
        if (this_00->field_0150 == '\0') {
          bVar3 = st::fn_00401181(this_00,(int)this_00->field_00C9,(int)this_00->field_00CB);
          this_00->field_0150 = bVar3;
          if (bVar3 != 0) {
            st::fn_004056EB(this_00,1);
          }
          if (this_00->field_0150 == '\0') {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
        }
        st::fn_00402C48(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
    else if (SVar1 == MESS_ID_CREATE) {
      puVar6 = (byte *)((message->arg0).ptr);
      if (puVar6[3] == 2) {
        st::fn_00401F55(local_8,puVar6);
        puVar6 = (byte *)&this_00->field_0x20;
        memset(puVar6, 0, 0x2d); /* compiler bulk-zero initialization */
        puVar6 = (byte *)((byte *)puVar6 + 0x2c);
        iVar4 = 0;
        this_00->field_001C = this_00->field_014C;
        if ((this_00->field_0150 != '\0') && (this_00->field_0093 != CASE_5)) {
          st::fn_004056EB(this_00,1);
        }
        if ((this_00->field_0093 == CASE_5) || (this_00->field_0093 == CASE_0)) {
          st::fn_004023EC(this_00);
          this_00->field_0093 = CASE_6;
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
      else {
        puVar7 = (byte *)&local_8->field_0x4d;
        memmove(puVar7, puVar6, 0x42); /* compiler REP MOVS byte copy */
        local_8->field_001C = DAT_00808754;
        iVar4 = st::fn_00402F90(local_8);
        if (iVar4 == 0) {
LAB_00618ce0:
          st::fn_004023EC(this_00);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
        iVar4 = st::fn_00403E6D(this_00,CASE_0,this_00->field_00E7,this_00->field_00EB,
                                   this_00->field_00EF);
        if (iVar4 == 0) {
          iVar4 = st::fn_00403E6D(this_00,CASE_1,this_00->field_00E7,this_00->field_00EB,
                                     this_00->field_00EF);
          if (iVar4 == 0) goto LAB_00618ce0;
          this_00->field_0093 = CASE_1;
        }
        else {
          this_00->field_0093 = CASE_4;
        }
        bVar3 = st::fn_00401181(this_00,(int)this_00->field_00C9,(int)this_00->field_00CB);
        this_00->field_0150 = bVar3;
        if ((void *)this_00->field_007D != nullptr) {
          st::fn_00401E47((void *)this_00->field_007D,this_00->field_008B,this_00->field_0018,
                             this_00);
        }
        if (this_00->field_0150 != '\0') {
          st::fn_004056EB(this_00,1);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else if (SVar1 == MESS_SHARED_0003) {
      if ((void *)local_8->field_007D != nullptr) {
        if (local_8->field_014B != '\0') {
          st::fn_00405C59((void *)local_8->field_007D,local_8->field_0145,0);
        }
        this_00->field_014B = 0;
        st::fn_00403193((void *)this_00->field_007D,(int)this_00->field_0018);
      }
      st::fn_00404534((int)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_ID_ALLCREATE) {
    if (((local_8->field_007D != 0) &&
        (iVar4 = st::fn_006E62D0
                           (g_playSystem_00802A38,local_8->field_0079,(int *)&local_14), iVar4 != -4
        )) && (this_00->field_007D = local_14, local_14 != nullptr)) {
      st::fn_00401E47(local_14,this_00->field_008B,this_00->field_0018,this_00);
    }
  }
  else if (SVar1 == MESS_STOCTOPUSC_0112) {
    if ((-1 < (int)local_8->field_0097) && (local_8->field_0093 != CASE_5)) {
      st::fn_006E9520
                (g_sT3DSMAPContext_00807598,local_8->field_0097,0,0,(uint)local_8);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (((SVar1 == MESS_STSPRGAMEOBJC_0113) && (-1 < (int)local_8->field_0097)) &&
          (local_8->field_0093 != CASE_5)) {
    st::fn_006E9520
              (g_sT3DSMAPContext_00807598,local_8->field_0097,0,0x401109,(uint)&local_8->field_0x4d);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

// 006195E0 STJumpMineC::LoadImagJMine
#line 1 "decomp/ST.exe/functions/006195E0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::LoadImagJMine */

undefined4 __thiscall st::fn_006195E0(STJumpMineC *this,int param_1)

{
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  STJumpMineC *pSVar7;
  InternalExceptionFrame local_4c;
  STJumpMineC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar7 = local_8;
  if (iVar2 == 0) {
    if (param_1 == 1) {
      puVar3 = st::fn_00709AF0
                         (DAT_00806774,CASE_1D,"jmpmine",0xffffffff,0,1,0,nullptr
                         );
      pSVar7 = local_8;
      puVar6 = &local_8->field_0097;
      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,(int *)puVar6,1,0,STField<uint>(puVar3,9),
                 STField<uint>(puVar3,0xd),0x5a,0x45,0);
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar6,0,*(int *)puVar3,STField<int>(puVar3,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar6,0,pSVar7->field_00AB);
      iVar2 = *(int *)puVar3;
      pSVar7->field_009B = puVar3;
      pSVar7->field_00AF = iVar2;
      if (DAT_00807326 != '\0') {
        st::fn_006E9520
                  (g_sT3DSMAPContext_00807598,*puVar6,0,0x401109,(uint)&pSVar7->field_0x4d);
      }
    }
    else {
      puVar6 = &local_8->field_0097;
      if (-1 < (int)local_8->field_0097) {
        st::fn_006E9520
                  (g_sT3DSMAPContext_00807598,local_8->field_0097,0,0,(uint)local_8);
        st::fn_006E8BA0(g_sT3DSMAPContext_00807598,*puVar6);
      }
      puVar3 = st::fn_00709AF0
                         (DAT_00806774,CASE_1D,"exptme",0xffffffff,0,1,0,nullptr);
      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,(int *)puVar6,3,0,STField<uint>(puVar3,9),
                 STField<uint>(puVar3,0xd),0x5a,0x45,0);
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar6,0,*(int *)puVar3,STField<int>(puVar3,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar6,0,pSVar7->field_00AB);
      pSVar7->field_00AF = *(int *)puVar3;
      puVar3 = st::fn_00709AF0
                         (DAT_00806774,CASE_1D,"expmask2",0xffffffff,0,1,0,
                          nullptr);
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar6,1,*(int *)puVar3,STField<int>(puVar3,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar6,1,pSVar7->field_00BC);
      st::fn_006EA800(g_sT3DSMAPContext_00807598,*puVar6,1,1);
      st::fn_006EA790
                (g_sT3DSMAPContext_00807598,*puVar6,DAT_008032b8,0x10);
      pSVar7->field_00C0 = *(undefined4 *)puVar3;
      pSVar7->field_00BB = 1;
      puVar3 = st::fn_00709AF0
                         (DAT_00806764,CASE_1D,"bulb_n4",0xffffffff,0,1,0,nullptr
                         );
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar6,2,*(int *)puVar3,STField<int>(puVar3,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar6,2,pSVar7->field_00B7);
      st::fn_006E9D40(g_sT3DSMAPContext_00807598,(uint *)*puVar6,2);
      pSVar7->field_00B3 = *(int *)puVar3;
    }
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,*puVar6,
               (float)pSVar7->field_009F * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar7->field_00A3 * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar7->field_00A7 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*puVar6,0);
    pSVar7->field_00C4 = 1;
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\nick\\to_jump_mine.cpp",0x151,0,iVar2,"%s"
                             ,"STJumpMineC::LoadImagJMine");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\nick\\to_jump_mine.cpp",0x153);
  return 0xffff;
}

