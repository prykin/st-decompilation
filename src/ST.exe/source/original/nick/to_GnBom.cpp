#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_GnBom.cpp

// 006132F0 STGenBombC::LoadImagSpr
#line 4 "decomp/ST.exe/functions/006132F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_GnBom.cpp
   STGenBombC::LoadImagSpr */

undefined4 __thiscall st::fn_006132F0(STGenBombC *this,int param_1,int param_2)

{
  short sVar2;
  VisibleClassTy *pVVar3;
  STGenBombC *pSVar4;
  int iVar5;
  AnonShape_004AB810_8E5693D5 *pAVar6;
  STT3DSprC *this_00;
  uint uVar7;
  int iVar8;
  bool bVar9;
  char *text;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  STGenBombC *local_10;
  int local_c;
  undefined4 local_8;

  local_8 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar5 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pSVar4 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\nick\\to_GnBom.cpp",0x54b,0,iVar5,"%s",
                               "STGenBombC::LoadImagSpr()");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\nick\\to_GnBom.cpp",0x54d);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_10->field_0252 == nullptr) {
    pAVar6 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
    if (pAVar6 == nullptr) {
      this_00 = nullptr;
    }
    else {
      this_00 = (STT3DSprC *)st::fn_00401316(pAVar6);
    }
    pSVar4->field_0252 = this_00;
    if (this_00 == nullptr) {
      return 0xffffffff;
    }
    iVar5 = st::fn_0040537B(this_00,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar5 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_GnBom.cpp",0x509);
      return 0xffff;
    }
  }
  if (param_1 == 0) {
    if (param_2 != 0) goto LAB_0061364b;
    iVar5 = st::fn_00404183(pSVar4->field_0252,0xd,PTR_00806774,"exptem",0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    iVar5 = st::fn_00404183(pSVar4->field_0252,0xf,PTR_00806764,"bulb_n5",0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    iVar5 = st::fn_00404183(pSVar4->field_0252,0xe,PTR_00806774,"expmask2",0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    st::fn_00405240(pSVar4->field_0252,0xe,g_playSystem_00802A38->field_00E4);
    uVar12 = 0x53;
    uVar10 = 0x5a;
    iVar5 = 1;
    pSVar4->field_0251 = 1;
    uVar7 = st::fn_004052CC(pSVar4->field_0252);
    st::fn_006EA4E0
              (g_sT3DSMAPContext_00807598,uVar7,iVar5,uVar10,uVar12);
    st::fn_004022D4(pSVar4->field_0252,'\x0f');
    st::fn_00405240(pSVar4->field_0252,0xd,g_playSystem_00802A38->field_00E4);
    iVar5 = (int)PTR_00806724->field_002C;
    uVar11 = 0;
    uVar7 = st::fn_004052CC(pSVar4->field_0252);
    st::fn_006E9350(g_sT3DSMAPContext_00807598,uVar7,uVar11,iVar5);
    pSVar4->field_0250 = 1;
    st::fn_004044EE(pSVar4->field_0252,PTR_008032b8,0x10);
    pSVar4->field_0237 = 0;
    st::fn_00401064(pSVar4->field_0252,'\r',0);
    st::fn_004030BC(pSVar4->field_0252,'\r');
    st::fn_00403233(pSVar4->field_0252,'\x0e');
    st::fn_004045D9
              (pSVar4->field_0252,(float)pSVar4->field_022B * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_022F * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  }
  else {
    iVar5 = pSVar4->field_01F7;
    if (iVar5 == 0) {
      iVar5 = st::fn_00404183(pSVar4->field_0252,0xd,PTR_00806774,"den_bmb",0x1d);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
    else {
      if (iVar5 == 1) {
        text = "ionbomb";
      }
      else {
        if (iVar5 != 2) goto LAB_00613424;
        text = "den_bmb";
      }
      iVar5 = st::fn_00404183(pSVar4->field_0252,0xd,PTR_00806774,text,0x1d);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
LAB_00613424:
    st::fn_00401064(pSVar4->field_0252,'\r',pSVar4->field_0237);
    st::fn_004045D9
              (pSVar4->field_0252,(float)pSVar4->field_022B * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_022F * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_00405240(pSVar4->field_0252,0xd,g_playSystem_00802A38->field_00E4);
    pSVar4->field_0250 = 1;
  }
  local_8 = 1;
LAB_0061364b:
  pVVar3 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == nullptr) {
    g_currentExceptionFrame = local_5c.previous;
    return local_8;
  }
  iVar5 = pSVar4->field_0233;
  sVar2 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    local_c = (short)(((short)(iVar5 / 200) + sVar2) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_c = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                          (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
  }
  iVar5 = pSVar4->field_022F;
  sVar2 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar8 = pSVar4->field_022B;
  sVar2 = (short)(iVar8 >> 0x1f);
  if (iVar8 < 0) {
    iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar2) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar2) -
                        (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
  }
  if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
      (st::fn_00403F53
                 (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar5,&local_14,
                  &local_18), local_c < 0)) || (4 < local_c)) {
    bVar9 = true;
  }
  else {
    if (((local_14 < 0) || (pVVar3->field_0030 <= local_14)) ||
       ((g_centeredOffsets5[local_c] + local_18 < 0 ||
        (pVVar3->field_0034 <= g_centeredOffsets5[local_c] + local_18)))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((bVar9) && (pVVar3->field_004C != nullptr)) {
      bVar9 = pVVar3->field_004C
              [local_14 + (g_centeredOffsets5[local_c] + local_18) * pVVar3->field_0030] != 0;
    }
    else {
      bVar9 = true;
    }
  }
  if (bVar9) {
    if (pSVar4->field_0250 == '\0') {
      st::fn_00402982(pSVar4->field_0252,0);
      pSVar4->field_0250 = 1;
      g_currentExceptionFrame = local_5c.previous;
      return local_8;
    }
  }
  else if (pSVar4->field_0250 != '\0') {
    st::fn_00403D0F(pSVar4->field_0252);
    pSVar4->field_0250 = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_8;
}

