#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_bspr.cpp

// 004C9770 TLOBaseTy::LoadImages
#line 1 "decomp/ST.exe/functions/004C9770/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::LoadImages
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   LoadImages(TLOBaseTy * this) Evidence: every machine RET purges exactly 0 explicit stack bytes;
   current signature describes 4; removed trailing parameter slots have no listing references;
   ret_sites=004C9DB7 RET | 004CA0F2 RET | 004CA139 RET */

int __thiscall st::fn_004C9770(TLOBaseTy *this)

{
  TLOBaseTy *this_00;
  byte bVar2;
  int local_EAX_28;
  int iVar3;
  int uVar2;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  TLOBaseTy_field_0245State TVar7;
  undefined4 *this_01;
  uint uVar8;
  char cVar9;
  char *text;
  CHAR local_154 [256];
  InternalExceptionFrame local_54;
  TLOBaseTy *local_10;
  TLOBaseTy_field_0245State local_c;
  int local_8;

  local_10 = this;
  local_EAX_28 = st::fn_004049B7(*(char *)&this->field_023D);
  local_EAX_28 = (int)(byte)local_EAX_28;
  local_8 = local_EAX_28 + -1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_bspr.cpp",0xbb,0,iVar3,"%s",
                               "TLOBaseTy::LoadImages error");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Artem\\TLO_bspr.cpp",0xbc);
    return iVar3;
  }
  TVar7 = local_10->field_0245;
  local_c = TVar7;
  st::fn_00404A11(local_10);
  if ((TVar7 == CASE_1) && (this_00->field_024D == 4)) {
    iVar3 = (local_8 + this_00->field_0235 * 3) * 0xc;
    this_00->field_05EF = *(char **)(PTR_DAT_007bb1a8 + iVar3);
    this_00->field_05F3 = *(undefined4 *)(PTR_DAT_007bb1a8 + iVar3 + 4);
    this_00->field_05F7 = *(char **)(PTR_DAT_007bb1a8 + iVar3 + 8);
  }
  if (this_00->field_05EF != nullptr) {
    iVar3 = st::fn_00404183
                      ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080678c,this_00->field_05EF,0x1d);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x1f);
    }
  }
  if (this_00->field_05F3 == 0) {
    st::fn_00404264((STT3DSprC *)&this_00->field_01D5,0xd);
    this_00->field_01F5->field_01E8 = 0;
    this_00->field_01F5->field_01E4 = 0;
  }
  else {
    st::external_00000080(local_154,"%s%1i",this_00->field_05F3,this_00->field_05C0);
    iVar3 = st::fn_00404183
                      ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080678c,local_154,0x1d);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x23);
    }
  }
  this_01 = &this_00->field_01D5;
  if (this_00->field_05F7 == nullptr) {
    st::fn_00404264((STT3DSprC *)this_01,0xc);
    this_00->field_01F5->field_01C4 = 0;
    this_00->field_01F5->field_01C0 = 0;
  }
  else {
    iVar3 = st::fn_00404183((STT3DSprC *)this_01,0xc,DAT_0080678c,this_00->field_05F7,0x1d);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x28);
    }
    if (*(int *)(&DAT_00790c2c + this_00->field_0235 * 4) != 0) {
      iVar3 = 1;
      uVar8 = 0xc;
      uVar2 = st::fn_004052CC((STT3DSprC *)this_01);
      st::fn_006EA190((void *)this_00->field_0211,uVar2,uVar8,iVar3);
    }
  }
  if (*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) {
    st::external_00000080(local_154,"%s_cover",this_00->field_05EF);
    iVar3 = st::fn_00404183((STT3DSprC *)this_01,9,DAT_0080678c,local_154,0x1d);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x31);
    }
    if ((this_00->field_05AC != CASE_40) && (this_00->field_05AC != CASE_49)) {
      st::external_00000080(local_154,"%s_cover%1i",this_00->field_05F3,this_00->field_05C0);
      iVar3 = st::fn_00404183((STT3DSprC *)this_01,8,DAT_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        st::fn_006A5E40
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x35);
      }
    }
    if (this_00->field_05AC == CASE_4E) {
      st::external_00000080(local_154,"htec_ani_cover");
      iVar3 = st::fn_00404183((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        st::fn_006A5E40
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x3a);
      }
    }
    if (this_00->field_05AC == CASE_72) {
      st::external_00000080(local_154,"vqb_ani_cover");
      iVar3 = st::fn_00404183((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        st::fn_006A5E40
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x3e);
      }
    }
    if (this_00->field_05AC == CASE_70) {
      st::external_00000080(local_154,"glsat_ani_cover");
      iVar3 = st::fn_00404183((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        st::fn_006A5E40
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x42);
      }
    }
    if (this_00->field_05AC == CASE_52) {
      bVar2 = st::fn_004049B7(*(char *)&this_00->field_0024);
      if (bVar2 == 1) {
        text = "traws_ani";
      }
      else {
        text = "trabo_ani";
      }
      st::external_00000080(local_154,text);
      iVar3 = st::fn_00404183((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        st::fn_006A5E40
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x46);
      }
    }
  }
  st::fn_00403ED6(this_01,'\r');
  iVar3 = st::fn_004022AC((STT3DSprC *)this_01,'\x0e');
  iVar4 = st::fn_004022AC((STT3DSprC *)this_01,'\r');
  if ((iVar4 < iVar3) &&
     (uVar8 = this_00->field_01F5->field_01E4 - this_00->field_01F5->field_01E8,
     uVar6 = (int)uVar8 >> 0x1f, 1 < (int)((uVar8 ^ uVar6) - uVar6))) {
    iVar3 = st::fn_0040448F();
    if (iVar3 == 2) {
      st::fn_00404264((STT3DSprC *)this_01,0xd);
    }
    else {
      st::fn_004022D4(this_01,'\r');
    }
  }
  st::fn_00402CF7(this_00,1);
  TVar7 = local_c;
  if ((local_c == CASE_1) && (this_00->field_024D == 4)) {
    TVar7 = CASE_4;
  }
  if (*(int *)(&DAT_00791b18 + (this_00->field_0235 * 3 + this_00->field_0239) * 4) != 0) {
    if (((int)TVar7 < 2) || (4 < (int)TVar7)) {
      st::fn_00402A90((STT3DSprC *)this_01);
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*this_01)();
    }
  }
  if ((((TVar7 == CASE_0) || (TVar7 == CASE_5)) || ((TVar7 == CASE_1 && (this_00->field_024D == 0)))
      ) || (TVar7 == CASE_6)) {
    st::fn_00405CA9((STT3DSprC *)this_01,DAT_008073cc);
    iVar3 = st::fn_00404183
                      ((STT3DSprC *)this_01,0x10,DAT_0080678c,(&PTR_s_tlo_sha_ws_007bb1b4)[local_8],
                       0x1d);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x6a);
    }
    st::fn_00401EBA(this_01,0x10,*(int *)(&DAT_0079104c + this_00->field_0235 * 4),
                       *(int *)(&DAT_0079104c + this_00->field_0235 * 4),'\0');
    st::fn_00401064
              ((STT3DSprC *)this_01,'\x10',*(uint *)(&DAT_0079104c + this_00->field_0235 * 4));
    DVar5 = st::fn_006E51B0(this_00->field_0010);
    st::fn_00405240((STT3DSprC *)this_01,0x10,DVar5);
    st::fn_00403AFD((STT3DSprC *)this_01,'\x10');
  }
  else {
    st::fn_0040461F((STT3DSprC *)this_01,'\x10');
    st::fn_00404264((STT3DSprC *)this_01,0x10);
  }
  if (this_00->field_0245 == CASE_1) {
    if (this_00->field_05DF == 5) {
      this_00->field_04C8 = 0;
      this_00->field_04CC = g_playSystem_00802A38->field_00E4;
      st::fn_00401BAE((STT3DSprC *)this_01,'\x0e');
      st::fn_00401BAE((STT3DSprC *)this_01,'\r');
      st::fn_00401BAE((STT3DSprC *)this_01,'\f');
      st::fn_00401BAE((STT3DSprC *)this_01,'\v');
      st::fn_00401BAE((STT3DSprC *)this_01,'\t');
      st::fn_00401BAE((STT3DSprC *)this_01,'\b');
      st::fn_00401BAE((STT3DSprC *)this_01,'\a');
      st::fn_0040116D
                ((STT3DSprC *)this_01,PTR_00806724->entries[this_00->field_04C8],
                 (int)PTR_00806724->field_002C);
    }
    else {
      iVar3 = st::fn_00404183
                        ((STT3DSprC *)this_01,4,DAT_00806774,
                         "expl_bt0" +
                         *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32,0x1d);
      if (iVar3 != 0) {
        return 0xffff;
      }
      st::fn_004022D4(this_01,'\x04');
      cVar9 = '\0';
      iVar3 = st::fn_004022AC((STT3DSprC *)this_01,'\x04');
      st::fn_00401EBA(this_01,4,0,iVar3,cVar9);
      st::fn_00401064((STT3DSprC *)this_01,'\x04',0);
      st::fn_00405240((STT3DSprC *)this_01,4,g_playSystem_00802A38->field_00E4);
      st::fn_00404183
                ((STT3DSprC *)this_01,6,DAT_00806774,
                 "expmask3" + *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32,0x1d
                );
      st::fn_004022D4(this_01,'\x06');
      st::fn_00405240((STT3DSprC *)this_01,6,g_playSystem_00802A38->field_00E4);
      st::fn_004044EE((STT3DSprC *)this_01,DAT_008032b8,0x10);
      st::fn_00403233((STT3DSprC *)this_01,'\x06');
    }
  }
  if (this_00->field_0245 != CASE_6) goto LAB_004ca0a2;
  if (this_00->field_04BC == 4) {
    if (this_00->field_002C == 0) {
      iVar3 = st::fn_00404183((STT3DSprC *)this_01,4,DAT_00806764,"tlo_emb5",0x1d);
      if (iVar3 != 0) {
        iVar4 = 0x91;
LAB_004c9eda:
        st::fn_006A5E40
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",iVar4
                  );
      }
    }
    else if (this_00->field_002C == 1) {
      iVar3 = st::fn_00404183
                        ((STT3DSprC *)this_01,4,DAT_00806764,"tlo_emb5_big",0x1d);
      if (iVar3 != 0) {
        iVar4 = 0x92;
        goto LAB_004c9eda;
      }
    }
    st::fn_00405240((STT3DSprC *)this_01,4,g_playSystem_00802A38->field_00E4);
    st::fn_00401EBA(this_01,5,*(int *)(&DAT_007976e4 + this_00->field_002C * 0x20),
                       *(int *)(&DAT_007976e4 + this_00->field_002C * 0x20),'\0');
    st::fn_00401064
              ((STT3DSprC *)this_01,'\x05',*(uint *)(&DAT_007976e4 + this_00->field_002C * 0x20));
    uVar8 = g_playSystem_00802A38->field_00E4;
  }
  else {
    bVar2 = st::fn_004049B7(*(char *)&this_00->field_023D);
    iVar3 = this_00->field_002C;
    if (bVar2 == 3) {
      if (iVar3 == 0) {
        iVar3 = st::fn_00404183((STT3DSprC *)this_01,5,DAT_0080678c,"si_emb5",0x1d);
        if (iVar3 != 0) {
          iVar4 = 0x9e;
LAB_004c9fb1:
          st::fn_006A5E40
                    (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",
                     iVar4);
        }
      }
      else if (iVar3 == 1) {
        iVar3 = st::fn_00404183((STT3DSprC *)this_01,5,DAT_0080678c,"si_emb6",0x1d);
        if (iVar3 != 0) {
          iVar4 = 0x9f;
          goto LAB_004c9fb1;
        }
      }
      uVar8 = g_playSystem_00802A38->field_00E4;
    }
    else {
      if (iVar3 == 0) {
        iVar3 = st::fn_00404183
                          ((STT3DSprC *)this_01,5,DAT_0080678c,"tlo_emb2",0x1d);
        if (iVar3 != 0) {
          iVar4 = 0xa5;
LAB_004ca02a:
          st::fn_006A5E40
                    (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",
                     iVar4);
        }
      }
      else if (iVar3 == 1) {
        iVar3 = st::fn_00404183
                          ((STT3DSprC *)this_01,5,DAT_0080678c,"tlo_emb3",0x1d);
        if (iVar3 != 0) {
          iVar4 = 0xa6;
          goto LAB_004ca02a;
        }
      }
      iVar3 = this_00->field_04BC;
      iVar4 = 0;
      if (iVar3 == 1) {
        iVar4 = 1;
      }
      else if (iVar3 == 2) {
        iVar4 = 2;
      }
      else if (iVar3 == 3) {
        iVar4 = 3;
      }
      iVar3 = (iVar4 + this_00->field_002C * 4) * 8;
      st::fn_00401EBA(this_01,5,*(int *)(&DAT_007976c8 + iVar3),*(int *)(&DAT_007976cc + iVar3),
                         '\0');
      st::fn_00401064
                ((STT3DSprC *)this_01,'\x05',
                 *(uint *)(&DAT_007976c8 + (iVar4 + this_00->field_002C * 4) * 8));
      uVar8 = g_playSystem_00802A38->field_00E4;
    }
  }
  st::fn_00405240((STT3DSprC *)this_01,5,uVar8);
LAB_004ca0a2:
  st::fn_00402455(this_00,*(short *)&this_00->field_05B0 * 0xc9 + 100,
               *(short *)&this_00->field_05B4 * 0xc9 + 100,
               *(short *)&this_00->field_05B8 * 200 + 100,0,0,0,1);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

// 004CA3C0 TLOBaseTy::ReloadLogoPlane
#line 1 "decomp/ST.exe/functions/004CA3C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::ReloadLogoPlane */

int __thiscall st::fn_004CA3C0(TLOBaseTy *this)

{
  undefined4 *puVar1;
  AnonPointee_TLOBaseTy_01F5 *pAVar2;
  TLOBaseTy *pTVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  CHAR local_15c [256];
  InternalExceptionFrame local_5c;
  TLOBaseTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  void *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar5 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pTVar4 = local_18;
  if (iVar5 == 0) {
    if (local_18->field_05F3 != 0) {
      pAVar2 = local_18->field_01F5;
      puVar1 = &local_18->field_01D5;
      local_10 = pAVar2->field_01E4;
      local_14 = pAVar2->field_01E8;
      local_c = pAVar2->field_01EC;
      iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
      if (iVar5 != 0) {
        iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
        local_8 = st::fn_006AAC10(iVar5 << 2);
        iVar7 = 0;
        iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
        if (0 < iVar5) {
          do {
            uVar6 = st::fn_00405A29(puVar1,'\r',iVar7);
            *(undefined4 *)((int)local_8 + iVar7 * 4) = uVar6;
            iVar7 = iVar7 + 1;
            iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
          } while (iVar7 < iVar5);
        }
      }
      st::external_00000080(local_15c,"%s%1i",pTVar4->field_05F3,pTVar4->field_05C0);
      iVar5 = st::fn_00404183((STT3DSprC *)puVar1,0xd,DAT_0080678c,local_15c,0x1d);
      if (iVar5 != 0) {
        st::fn_006A5E40
                  (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0xd3);
      }
      st::fn_00401EBA(puVar1,0xd,local_10,local_14,'\0');
      st::fn_00401064((STT3DSprC *)puVar1,'\r',local_c);
      iVar7 = 0;
      iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
      if (0 < iVar5) {
        do {
          st::fn_00405141(puVar1,'\r',iVar7,*(undefined4 *)((int)local_8 + iVar7 * 4));
          iVar7 = iVar7 + 1;
          iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
        } while (iVar7 < iVar5);
      }
      st::fn_006AB060(&local_8);
    }
    if (((*(int *)(&DAT_00791a10 + pTVar4->field_0235 * 4) != 0) && (pTVar4->field_05AC != CASE_40))
       && (pTVar4->field_05AC != CASE_49)) {
      pAVar2 = pTVar4->field_01F5;
      puVar1 = &pTVar4->field_01D5;
      local_10 = pAVar2->field_0130;
      local_14 = pAVar2->field_0134;
      local_c = pAVar2->field_0138;
      iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\b');
      if (iVar5 != 0) {
        iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\b');
        local_8 = st::fn_006AAC10(iVar5 << 2);
        iVar7 = 0;
        iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\b');
        if (0 < iVar5) {
          do {
            uVar6 = st::fn_00405A29(puVar1,'\b',iVar7);
            *(undefined4 *)((int)local_8 + iVar7 * 4) = uVar6;
            iVar7 = iVar7 + 1;
            iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\b');
          } while (iVar7 < iVar5);
        }
      }
      st::external_00000080(local_15c,"%s_cover%1i",pTVar4->field_05F3,pTVar4->field_05C0);
      iVar5 = st::fn_00404183((STT3DSprC *)puVar1,8,DAT_0080678c,local_15c,0x1d);
      if (iVar5 != 0) {
        st::fn_006A5E40
                  (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0xea);
      }
      st::fn_00401EBA(puVar1,8,local_10,local_14,'\0');
      st::fn_00401064((STT3DSprC *)puVar1,'\b',local_c);
      iVar7 = 0;
      iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\b');
      if (0 < iVar5) {
        do {
          st::fn_00405141(puVar1,'\b',iVar7,*(undefined4 *)((int)local_8 + iVar7 * 4));
          iVar7 = iVar7 + 1;
          iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\b');
        } while (iVar7 < iVar5);
      }
      st::fn_006AB060(&local_8);
    }
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_bspr.cpp",0xf6,0,iVar5,"%s",
                             "TLOBaseTy::ReloadLogoPlane error");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,"E:\\__titans\\Artem\\TLO_bspr.cpp",0xf7);
  return iVar5;
}

// 004CABB0 TLOBaseTy::RotateSpr
#line 1 "decomp/ST.exe/functions/004CABB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::RotateSpr

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

int __thiscall st::fn_004CABB0(TLOBaseTy *this,int param_1)

{
  undefined4 *puVar1;
  AnonPointee_TLOBaseTy_01F5 *pAVar2;
  TLOBaseTy *this_00;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_50;
  int local_c;
  TLOBaseTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_bspr.cpp",0x1a7,0,iVar4,"%s"
                               ,"TLOBaseTy::RotateSpr error");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x1a8);
      return iVar4;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((local_8->field_0245 == CASE_1) && (local_8->field_05DF != 5)) &&
     (iVar4 = st::fn_004042AF(&local_8->field_01D5,'\x04'),
     *(int *)(&DAT_007cdf52 + *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32) < iVar4)) {
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  if (this_00->field_05EF != nullptr) {
    st::fn_0040384B(this_00,(uint *)0xe,param_1);
  }
  if (*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) {
    st::fn_0040384B(this_00,(uint *)0x9,param_1);
    st::fn_0040384B(this_00,(uint *)0x8,param_1);
    if (this_00->field_05AC == CASE_4E) {
      st::fn_0040384B(this_00,(uint *)0x7,param_1);
      if (this_00->field_04D0 == CASE_1) {
        st::fn_00403ED6(&this_00->field_01D5,'\a');
      }
      else {
        st::fn_00404264((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
    if (this_00->field_05AC == CASE_72) {
      st::fn_0040384B(this_00,(uint *)0x7,param_1);
      if (this_00->field_04D0 == CASE_1) {
        st::fn_00403ED6(&this_00->field_01D5,'\a');
      }
      else {
        st::fn_00404264((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
    if (this_00->field_05AC == CASE_70) {
      st::fn_0040384B(this_00,(uint *)0x7,param_1);
      if (this_00->field_04D0 == CASE_1) {
        st::fn_00403ED6(&this_00->field_01D5,'\a');
      }
      else {
        st::fn_00404264((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
  }
  if (this_00->field_05F3 != 0) {
    puVar1 = &this_00->field_01D5;
    iVar4 = st::fn_004022AC((STT3DSprC *)puVar1,'\x0e');
    iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
    if (((iVar5 < iVar4) && (iVar4 = st::fn_004022AC((STT3DSprC *)puVar1,'\r'), 1 < iVar4))
       && (iVar4 = st::fn_0040448F(), iVar4 == 2)) {
      pAVar2 = this_00->field_01F5;
      iVar4 = pAVar2->field_0208;
      if (iVar4 < (int)pAVar2->field_020C) {
        iVar4 = pAVar2->field_0210 - iVar4;
      }
      else {
        iVar4 = iVar4 - pAVar2->field_0210;
      }
      local_c = st::fn_004022AC((STT3DSprC *)puVar1,'\x0e');
      iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
      if ((iVar4 < (local_c - iVar5) + -1) || ((this_00->field_01F1 & 0x2000) != 0))
      goto LAB_004cadb1;
    }
    st::fn_0040384B(this_00,(uint *)0xd,param_1);
  }
LAB_004cadb1:
  if (this_00->field_05F7 != nullptr) {
    st::fn_0040384B(this_00,(uint *)&DAT_0000000c,param_1);
  }
  if (this_00->field_05FF != nullptr) {
    st::fn_00404F34((int)this_00);
  }
  switch(this_00->field_05AC) {
  case CASE_40:
  case CASE_49:
    if (this_00->field_04D0 == CASE_1) {
      st::fn_004017D5(&this_00->field_01D5,'\x0e');
      st::fn_004017D5(&this_00->field_01D5,'\t');
      break;
    }
  default:
    st::fn_00403ED6(&this_00->field_01D5,'\x0e');
    st::fn_00403ED6(&this_00->field_01D5,'\t');
    break;
  case CASE_52:
  case CASE_5F:
    puVar1 = &this_00->field_01D5;
    st::fn_004017D5(puVar1,'\x0e');
    st::fn_004017D5(puVar1,'\r');
    st::fn_004017D5(puVar1,'\t');
    st::fn_004017D5(puVar1,'\b');
  }
  st::fn_0040197E(this_00);
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

// 004CBC10 TLOBaseTy::AddSprInit
#line 1 "decomp/ST.exe/functions/004CBC10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::AddSprInit

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

int __thiscall st::fn_004CBC10(TLOBaseTy *this)

{
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  TLOBaseTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    switch(local_8->field_05AC) {
    case CASE_32:
    case CASE_40:
    case CASE_49:
    case CASE_5C:
      st::fn_0040330F(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case CASE_45:
      st::fn_00404886((AnonShape_004D9C80_80F657D3 *)local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case CASE_4E:
      st::fn_00405BA5((AnonShape_004D9C80_80F657D3 *)local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case CASE_52:
    case CASE_5F:
      st::fn_00401302((int)local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case CASE_69:
      st::fn_00401320((int *)local_8);
      break;
    case CASE_70:
      st::fn_00402B17((AnonShape_004D9000_7AA66E43 *)local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case CASE_72:
      st::fn_00401866((AnonShape_004D9C80_80F657D3 *)local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_bspr.cpp",0x2c5,0,iVar2,"%s",
                             "TLOBaseTy::AddSprInit error");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x2c6);
  return iVar2;
}

// 004CC220 FUN_004cc220
#line 1 "decomp/ST.exe/functions/004CC220/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bspr.cpp
   Diagnostic line evidence: 853 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004CC220(AnonShape_004CC220_7DEF08C7 *param_1)

{
  uint uVar1;
  AnonShape_004AB810_8E5693D5 *pAVar2;
  STT3DSprC *this;
  int exceptionCode;

  param_1->field_0444 = 0;
  param_1->field_0448 = 0;
  param_1->field_044C = 0xffffffff;
  uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar1;
  param_1->field_0450 = (uVar1 >> 0x10) % 0x33 + g_playSystem_00802A38->field_00E4;
  pAVar2 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
  if (pAVar2 == nullptr) {
    this = nullptr;
  }
  else {
    this = (STT3DSprC *)st::fn_00401316(pAVar2);
  }
  param_1->field_0603 = this;
  exceptionCode =
       st::fn_0040537B(this,DAT_008073cc,param_1->field_0613,param_1->field_0617,nullptr
                       ,param_1->field_060B,param_1->field_060F,0x11);
  if (exceptionCode != 0) {
    st::fn_006A5E40
              (exceptionCode,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",
               0x355);
  }
  param_1->field_0440 = 0;
  param_1->field_043C = 0;
  return 0;
}

// 004CC370 FUN_004cc370
#line 1 "decomp/ST.exe/functions/004CC370/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bspr.cpp
   Diagnostic line evidence: 895 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004CC370(AnonShape_004CC370_02CE3D17 *param_1)

{
  AnonPointee_STT3DSprC_0020 *pAVar1;
  uint uVar3;
  int iVar4;
  int uVar2;
  uint uVar5;
  int local_EAX_774;
  int local_EAX_824;
  int iVar6;
  int iVar7;

  if ((*(int *)&param_1->field_0x444 == 0) || (*(int *)&param_1->field_0x448 == 0)) {
    return 0;
  }
  if (-1 < *(int *)&param_1->field_0x44c) {
    pAVar1 = ((STT3DSprC *)param_1->field_0603)->field_0020;
    if ((int)pAVar1->field_020C <= (int)pAVar1->field_0210) {
      st::fn_00404264((STT3DSprC *)param_1->field_0603,0xe);
      st::fn_00403D0F((STT3DSprC *)param_1->field_0603);
      st::fn_0040498A((STT3DSprC *)param_1->field_0603,0xe);
      uVar3 = st::fn_004052CC((STT3DSprC *)param_1->field_0603);
      st::fn_006EA2F0(param_1->field_0211,uVar3);
      *(undefined4 *)&param_1->field_0x44c = 0xffffffff;
      *(uint *)&param_1->field_0x450 = g_playSystem_00802A38->field_00E4;
    }
    goto cf_common_exit_004CC6D2;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*(int *)param_1 + 0x7c))();
  if ((3 < iVar4 / 0x14) && (*(int *)&param_1->field_0x43c == 1)) {
    st::fn_00405768((TLOBaseTy *)param_1);
    goto cf_common_exit_004CC6D2;
  }
  st::fn_0040498A((STT3DSprC *)&param_1->field_0x1d5,6);
  iVar4 = *(int *)&param_1->field_0x440;
  *(int *)&param_1->field_0x43c = iVar4;
  if (g_playSystem_00802A38->field_00E4 <
      *(int *)&param_1->field_0x450 + (~-(uint)(iVar4 != 1) & DAT_00790c14))
  goto cf_common_exit_004CC6D2;
  if (iVar4 == 2) {
    iVar4 = st::fn_00404183
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_0080678c,PTR_s_tlo_capture_00790c28,
                       0x1d);
    if (iVar4 != 0) {
      iVar7 = 0x37c;
      goto cf_error_exit_004CC50A;
    }
  }
  else if ((iVar4 == 3) || (iVar4 == 4)) {
    iVar4 = st::fn_00404183
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_0080678c,PTR_s_tlo_emb6_00790c20,
                       0x1d);
    if (iVar4 != 0) {
      iVar7 = 0x37f;
      goto cf_error_exit_004CC50A;
    }
  }
  else {
    iVar4 = st::fn_00404183
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_00806764,PTR_s_tlo_bubbles_00790c1c,
                       0x1d);
    if (iVar4 != 0) {
      iVar7 = 0x381;
cf_error_exit_004CC50A:
      st::fn_006A5E40
                (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",iVar7);
    }
  }
  uVar3 = 6;
  iVar4 = st::fn_004052CC((STT3DSprC *)&param_1->field_0x1d5);
  uVar2 = st::fn_004052CC((STT3DSprC *)param_1->field_0603);
  st::fn_006EA340(param_1->field_0211,uVar2,iVar4,uVar3);
  st::fn_004045D9
            ((STT3DSprC *)param_1->field_0603,param_1->field_01F9,param_1->field_01FD,
             param_1->field_0201);
  uVar3 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
  *(uint *)&param_1->field_0x1c = uVar3;
  iVar7 = param_1->field_0235 * 0x44;
  uVar3 = (uVar3 >> 0x10) % *(uint *)(&DAT_00797748 + iVar7);
  *(uint *)&param_1->field_0x44c = uVar3;
  iVar4 = *(int *)&param_1->field_0x43c;
  if (iVar4 == 2) {
    uVar5 = (param_1->field_0613 - *(int *)(&DAT_0079774c + uVar3 * 8 + iVar7)) + 0x28;
    uVar3 = (param_1->field_0617 - *(int *)(&DAT_00797750 + uVar3 * 8 + iVar7)) + 0x1f;
  }
  else {
    if ((iVar4 == 3) || (iVar6 = 0x17, iVar4 == 4)) {
      iVar6 = 0x10;
    }
    uVar5 = (param_1->field_0613 - *(int *)(&DAT_0079774c + uVar3 * 8 + iVar7)) + iVar6;
    if ((iVar4 == 3) || (iVar6 = 0x5c, iVar4 == 4)) {
      iVar6 = 0x15;
    }
    uVar3 = (param_1->field_0617 - *(int *)(&DAT_00797750 + uVar3 * 8 + iVar7)) + iVar6;
  }
  st::fn_004023C4((void *)param_1->field_0603,uVar5,uVar3);
  st::fn_00401064((STT3DSprC *)param_1->field_0603,'\x0e',0);
  st::fn_00405240((STT3DSprC *)param_1->field_0603,0xe,g_playSystem_00802A38->field_00E4);
  st::fn_00402982((void *)param_1->field_0603,1);
  if ((*(int *)&param_1->field_0x43c == 3) || (*(int *)&param_1->field_0x43c == 4)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0x90))(3,0x363);
  }
  if (*(int *)&param_1->field_0x43c == 2) {
    local_EAX_774 = st::fn_004049B7(param_1->field_023D);
    if (*(int *)(&DAT_00795f18 + ((uint)(byte)local_EAX_774 + param_1->field_0235 * 3) * 4) != 0) {
      iVar4 = *(int *)param_1;
      local_EAX_824 = st::fn_004049B7(param_1->field_023D);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(iVar4 + 0x90))
                (3,*(undefined4 *)
                    (&DAT_00795f18 + ((uint)(byte)local_EAX_824 + param_1->field_0235 * 3) * 4));
    }
  }
cf_common_exit_004CC6D2:
  st::fn_004033AA((void *)param_1->field_0603,g_playSystem_00802A38->field_00E4);
  return 0;
}

