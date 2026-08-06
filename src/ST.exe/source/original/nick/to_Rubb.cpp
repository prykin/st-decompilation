#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_Rubb.cpp

// 0062E740 STRubbishC::GetMessage
#line 1 "decomp/ST.exe/functions/0062E740/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040231F|0062E740; family_names=STRubbishC::GetMessage; ret4=8;
   direct_offsets={10:1,14:3,18:4,1c:2} */

int __thiscall st::fn_0062E740(STRubbishC *this,STMessage *message)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STMessageId SVar4;
  STGameObjC *this_00;
  int iVar6;
  STWorldObject *pSVar7;
  int iVar8;
  int iVar9;
  AnonShape_0062FA80_0B91B2B9 *pAVar10;
  InternalExceptionFrame local_58;
  STGameObjC *local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  AnonShape_0062E740_213F21A8 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = (STGameObjC *)this;
  iVar6 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\nick\\to_Rubb.cpp",0xa6,0,iVar6,"%s",
                               "STRubbishC::GetMessage");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar6,0,"E:\\__titans\\nick\\to_Rubb.cpp",0xa8);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar6 = st::fn_00403EBD(local_14,message);
  if (iVar6 == 0xffff) {
    return 0xffff;
  }
  SVar4 = message->id;
  if (MESS_SHARED_0003 < SVar4) {
    if (SVar4 == MESS_SHARED_0108) {
      iVar6 = st::fn_0040581C();
      st::fn_00402E0A(this_00,iVar6);
    }
    else if (SVar4 == MESS_SHARED_010F) {
      local_10 = (byte *)st::fn_00404719(this_00,(uint *)&local_c);
      st::fn_004025F9(g_playSystem_00802A38,(int *)this_00->field_0018,local_10,local_c);
      st::fn_006AB060(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar4 == MESS_SHARED_0003) {
    st::fn_00401D1B((AnonShape_0062F7A0_700302F7 *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar4 == MESS_ID_NONE) {
    if (*(int *)&this_00->field_0x1fa == 1) {
      if ((this_00->field_0x1f9 == '\0') &&
         (iVar6 = st::fn_00401D39((STRubbishC *)this_00,*(int *)&this_00->field_0x1d5,
                               *(int *)&this_00->field_0x1d9), iVar6 != 0)) {
        st::fn_00405533((STJellyGunC *)this_00);
        this_00->field_0x1f9 = 1;
      }
      st::fn_0040131B((RecoveredRecord_STRubbishC_0062F150 *)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (*(int *)&this_00->field_0x1fa != 2) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    st::fn_00405885((STRubbishC *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar4 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar10 = (message->arg0).ptr;
  local_8 = (AnonShape_0062E740_213F21A8 *)pAVar10;
  if (*(int *)&pAVar10->field_0xc == 2) {
    st::fn_004032AB(this_00,pAVar10);
    if (this_00->field_0x1f9 == '\0') {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    st::fn_00405533((STJellyGunC *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (((*(int *)&this_00->field_0x1d5 < 0) || (*(int *)&this_00->field_0x1d9 < 0)) ||
     (*(int *)&this_00->field_0x1dd < 0)) {
    iVar6 = pAVar10->field_0014;
    sVar1 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar1) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar1) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    *(int *)&this_00->field_0x1d5 = iVar6;
    iVar6 = pAVar10->field_0018;
    sVar1 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar1) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar1) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    *(int *)&this_00->field_0x1d9 = iVar6;
    iVar6 = pAVar10->field_001C;
    if (iVar6 < 0) {
      iVar6 = (short)(iVar6 / 200) + -1;
    }
    else {
      iVar6 = (int)(short)(iVar6 / 200);
    }
    *(int *)&this_00->field_0x1dd = iVar6;
    iVar6 = st::fn_00404D3B(*(short *)&this_00->field_0x1d5,*(short *)&this_00->field_0x1d9,
                               (short)iVar6);
    if (iVar6 != 0) {
      sVar1 = *(short *)&this_00->field_0x1d5;
      sVar2 = *(short *)&this_00->field_0x1dd;
      sVar3 = *(short *)&this_00->field_0x1d9;
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
          ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar2)) {
        pSVar7 = nullptr;
      }
      else {
        pSVar7 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[1];
        pAVar10 = (AnonShape_0062FA80_0B91B2B9 *)local_8;
      }
      if ((pSVar7 == nullptr) &&
         (iVar6 = st::fn_00401325
                            ((short)*(undefined4 *)&this_00->field_0x1d5,
                             (short)*(undefined4 *)&this_00->field_0x1d9,
                             (short)*(undefined4 *)&this_00->field_0x1dd,1,
                             (RecoveredRecord_DumpClassC_00495EC0 *)this_00),
         pAVar10 = (AnonShape_0062FA80_0B91B2B9 *)local_8, iVar6 == 0)) {
        iVar6 = local_8->field_0014;
        sVar1 = (short)(iVar6 >> 0x1f);
        if (iVar6 < 0) {
          iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar1) -
                         (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar1) -
                              (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
        }
        *(int *)&this_00->field_0x1d5 = iVar6;
        iVar9 = local_8->field_0018;
        sVar1 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar1) -
                         (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar1) -
                              (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
        }
        *(int *)&this_00->field_0x1d9 = iVar9;
        iVar8 = local_8->field_001C;
        sVar1 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 200) + sVar1) -
                         (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 200) + sVar1) -
                              (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
        }
        *(int *)&this_00->field_0x1dd = iVar8;
        iVar6 = st::fn_00401D39((STRubbishC *)this_00,iVar6,iVar9);
        this_00->field_0x1f9 = (char)iVar6;
        goto LAB_0062ea02;
      }
    }
    st::fn_00405885((STRubbishC *)this_00);
  }
LAB_0062ea02:
  iVar6 = st::fn_00403EDB((STRubbishC *)this_00,(AnonShape_0062FCA0_22A9EE35 *)pAVar10);
  if (iVar6 == 0xffff) {
    return 0xffff;
  }
  *(undefined4 *)&this_00->field_0x1fa = 1;
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

// 0062ED90 STRubbishC::RubbishCreatePart
#line 1 "decomp/ST.exe/functions/0062ED90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::RubbishCreatePart */

int __thiscall st::fn_0062ED90(STRubbishC *this)

{
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  AnonShape_004AB810_8E5693D5 *pAVar5;
  undefined4 uVar6;
  int iVar7;
  InternalExceptionFrame local_50;
  STRubbishC *local_c;
  int local_8;

  local_8 = -1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\nick\\to_Rubb.cpp",0xd9,0,iVar2,"%s",
                               "STRubbishC::RubbishCreatePart");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar2,0,"E:\\__titans\\nick\\to_Rubb.cpp",0xdb);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  piVar3 = &local_c->field_01E5;
  iVar2 = 0;
  iVar7 = local_8;
  do {
    if (*piVar3 == 0) {
      local_8 = iVar7;
      puVar4 = st::fn_006AAC70(0x3e);
      (&local_c->field_01E5)[iVar2] = puVar4;
      if (puVar4 != nullptr) {
        for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined2 *)puVar4 = 0;
        iVar7 = iVar2;
        if (local_c->field_01F9 != '\0') {
          pAVar5 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
          if (pAVar5 == nullptr) {
            uVar6 = 0;
          }
          else {
            uVar6 = st::fn_00401316(pAVar5);
          }
          *(undefined4 *)((&local_c->field_01E5)[iVar2] + 0x10) = uVar6;
        }
      }
      g_currentExceptionFrame = local_50.previous;
      return iVar7;
    }
    iVar7 = 5;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 5);
  g_currentExceptionFrame = local_50.previous;
  return 5;
}

// 0062F3B0 STRubbishC::LoadImagSpr
#line 1 "decomp/ST.exe/functions/0062F3B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::LoadImagSpr

   [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/STRubbishC_LoadImagSpr_param_4Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

undefined4 __thiscall
st::fn_0062F3B0
          (STRubbishC *this,void *param_1,int *param_2,undefined4 param_3,
          STRubbishC_LoadImagSpr_param_4Enum param_4)

{
  STT3DSprC *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  STT3DSprC *local_14;
  int local_10;
  int local_c;
  undefined **local_8;

  local_18 = 0;
  switch(param_4) {
  case CASE_1:
    local_10 = *(int *)(&DAT_007d1530 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1534 + *param_2 * 8);
  default:
    local_8 = &PTR_s_rubb_w0_007d1480;
    break;
  case CASE_2:
    local_8 = &PTR_s_rubb_g0_007d14a8;
    local_10 = *(int *)(&DAT_007d1530 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1534 + *param_2 * 8);
    break;
  case CASE_3:
    local_8 = &PTR_s_rubb3_007d14d0;
    local_10 = 0xf;
    local_c = 0xf;
    break;
  case CASE_4:
    local_8 = &PTR_s_rubb_gw0_007d1514;
    goto LAB_0062f450;
  case CASE_5:
    local_8 = &PTR_s_rubb_gb0_007d14f8;
LAB_0062f450:
    local_10 = *(int *)(&DAT_007d1580 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1584 + *param_2 * 8);
    break;
  case CASE_6:
    local_8 = &PTR_s_rubb3_007d14d0;
    local_10 = *(int *)(&DAT_007d1580 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1584 + *param_2 * 8);
  }
  local_14 = param_1;
  if (param_1 == nullptr) {
    return 0xffffffff;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar2 == 0) {
    iVar2 = st::fn_0040537B(local_14,DAT_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar2 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_Rubb.cpp",0x17b);
      return 0xffff;
    }
    iVar2 = st::fn_00404183(this_00,0xe,DAT_00806774,local_8[*param_2],0x1d);
    if (iVar2 == 0) {
      st::fn_00401064(this_00,'\x0e',param_2[6]);
      st::fn_004023C4(this_00,local_10 / 2,local_c / 2 - 0xe);
      st::fn_004045D9
                (this_00,(float)param_2[3] * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_2[4] * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_2[5] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      g_currentExceptionFrame = local_5c.previous;
      return local_18;
    }
  }
  else {
    g_currentExceptionFrame = local_5c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\nick\\to_Rubb.cpp",0x189,0,iVar2,"%s",
                               "STRubbishC::LoadImagSpr");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\nick\\to_Rubb.cpp",0x18b);
  }
  return 0xffff;
}

