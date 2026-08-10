#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00593040; family_names=CampaignTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:6,18:0,1c:0} */

int __thiscall CampaignTy::GetMessage(CampaignTy *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  int *piVar3;
  MMsgTy *pMVar4;
  CampaignTy *this_00;
  DWORD DVar6;
  int local_EAX_49;
  LPSTR text;
  BITMAPINFO *pBVar7;
  int iVar8;
  int iVar7;
  char *pcVar9_mg1;
  int iVar11;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar13;
  char *pcVar14;
  byte bVar16;
  int iVar17;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  int *local_c;
  CampaignTy *local_8;
  char *pcVar9_mg0;

  local_8 = this;
  DVar6 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar6;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_EAX_49 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_49 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Start\\camp_obj.cpp",0x24f,0,local_EAX_49,
                                "%s","CampaignTy::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_49,0,"E:\\__titans\\Start\\camp_obj.cpp",0x24f);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,message);
  SVar2 = message->id;
  if (SVar2 < MESS_FSGSTY_6941) {
    if (SVar2 == MESS_SHARED_6940) {
      sub_00592620(this_00);
    }
    else if (SVar2 < 6) {
      if (SVar2 == MESS_SHARED_0005) {
        PaintCampaign(this_00);
      }
      else if (SVar2 == MESS_ID_NONE) {
        NoneCampaign(this_00);
      }
      else if (SVar2 == MESS_ID_CREATE) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        InitCampaign(this_00,*(undefined4 *)((message->arg0).u32 + 0x14));
      }
      else if (SVar2 == MESS_SHARED_0003) {
        DoneCampaign(this_00);
      }
    }
    else if (SVar2 == MESS_MMSGTY_68FF) {
      DAT_0080874e = *(byte *)(message->arg0).ptr;
      if (g_startSystem_0081176C->field_0028 == 0) {
        FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
        iVar17 = 0;
        bVar16 = 0;
        text = FUN_006f2c00("CMPG_BKG",1,(uint)DAT_0080874e);
        pBVar7 = (BITMAPINFO *)FUN_0070a9f0(g_cMf32_00806780,text,bVar16,iVar17);
        PutDDX(0xa5,0x37,'\x01',pBVar7);
      }
      thunk_FUN_005b6730(this_00,4,'\x01',-1);
    }
    else if (SVar2 == MESS_PRIVIDERTY_693F) {
      sub_005925A0(this_00);
    }
    goto switchD_005931ad_caseD_6944;
  }
  switch(SVar2) {
  case MESS_CHOOSEMAPTY_6942:
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = 0x6102;
    this_00->field_0051 = message->arg0;
    thunk_FUN_005b66e0((MTaskTy *)this_00);
    break;
  case MESS_WAITTY_6943:
    thunk_FUN_005b6350(this_00,0x6942,(message->arg0).u32,0);
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pMVar4 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
    if (pMVar4 != nullptr) {
      MMsgTy::HidePanel(pMVar4,1,0,1);
    }
    break;
  case MESS_SHARED_6940|MESS_SHARED_0008:
    wsprintfA(&CHAR_00h_0080f22a,"%sMISS%d00.AVI",&CHAR_00h_00807784,(uint)DAT_0080874e);
    this_00->field_0049 = 1;
    this_00->field_004D = 0x7101;
    this_00->field_0051 = 3;
    this_00->field_0055 = 1;
    thunk_FUN_005b66e0((MTaskTy *)this_00);
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case MESS_FSGSTY_694A:
    if ((((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (DAT_0080874e == 3)) &&
       (pMVar4 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6), pMVar4 != nullptr)) {
      MMsgTy::SetMessage(pMVar4,0x2530,'\0',nullptr,nullptr,nullptr,0,
                         0);
    }
    else {
      pcVar9_mg0 = PTR_s_TUTOR_0079bff0;
      if (this_00->field_1FFC == 0) {
        pcVar9_mg0 = PTR_DAT_0079bfec;
      }
      wsprintfA(&CHAR_00h_0080ed16,"%s%s%s%d01",&CHAR_00h_00807680,PTR_s_MISSIONS__0079bfe8
                ,pcVar9_mg0,(uint)DAT_0080874e);
      pcVar9_mg1 = PTR_s_TUTOR_0079bff0;
      if (this_00->field_1FFC == 0) {
        pcVar9_mg1 = PTR_DAT_0079bfec;
      }
      wsprintfA(&CHAR_00h_0080ef1e,"%s%s%d01",PTR_s_MISSIONS__0079bfe8,pcVar9_mg1,
                (uint)DAT_0080874e);
      uVar11 = 0xffffffff;
      pcVar13 = &CHAR_00h_0080ed16;
      do {
        pcVar14 = pcVar13;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar13 = pcVar14 + -uVar11;
      pcVar14 = (char *)&DAT_0080ee1a;
      memmove(pcVar14, pcVar13, uVar11); /* compiler REP MOVS byte copy */
      STPiece<0,1>(DAT_008087a0) = 8;
      iVar17 = STAppC::sub_0056E9E0((STAppC *)&DAT_00807620,1);
      if (iVar17 != 0) {
        memset(&DAT_0080c522, 0, 0x27f0); /* compiler bulk-zero initialization */
        thunk_FUN_005b6350(this_00,(-(uint)(this_00->field_1FFC != 0) & 8) + 0x6948,0,0);
        this_00->CloseButtons();
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pMVar4 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
        if (pMVar4 != nullptr) {
          MMsgTy::HidePanel(pMVar4,1,0,1);
        }
      }
    }
    break;
  case 0x6950:
    this_00->field_0049 = 1;
    this_00->field_004D = 0x6104;
    this_00->field_0051 = 0;
    this_00->field_0055 = 1;
    thunk_FUN_005b66e0((MTaskTy *)this_00);
    break;
  case MESS_SHARED_697F:
    piVar3 = (message->arg0).ptr;
    if (*piVar3 == 1) {
      iVar17 = 2;
    }
    else {
      iVar17 = (*piVar3 != 2) + 3;
    }
    switch(piVar3[1]) {
    case 0:
    case 2:
    case 3:
      iVar9 = (int)this_00->field_0066 + iVar17 * 0x1fb + -0x66;
      iVar8 = *(int *)(iVar9 + 0xef) + -1;
      break;
    case 1:
      iVar9 = (int)this_00->field_0066 + iVar17 * 0x1fb + -0x66;
      iVar8 = *(int *)(iVar9 + 0xef) + -2;
      break;
    default:
      goto switchD_005931dd_default;
    }
    *(int *)(iVar9 + 0xeb) = iVar8;
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
switchD_005931dd_default:
    uVar11 = *(uint *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x81);
    local_c = piVar3;
    if (uVar11 != 0xffffffff) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      Library::DKW::DDX::FUN_006b3730
                (*(uint **)((int)&this_00->field_012B + iVar17 * 0x1fb),uVar11,
                 *(uint *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x85),
                 *(uint *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x99),
                 *(uint *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x9d));
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x7c) != '\0') {
      switch(piVar3[1]) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 0:
      case 2:
      case 3:
        *(int *)(&this_00->field_0x221 + iVar17 * 0x1fb) =
             *(int *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x99) +
             *(int *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x45);
        *(int *)(&this_00->field_0x225 + iVar17 * 0x1fb) =
             *(int *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x9d) +
             *(int *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x49);
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 1:
        *(int *)(&this_00->field_0x221 + iVar17 * 0x1fb) =
             *(int *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x99) +
             *(int *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x4d);
        *(int *)(&this_00->field_0x225 + iVar17 * 0x1fb) =
             *(int *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x9d) +
             *(int *)((int)this_00->field_0066 + iVar17 * 0x1fb + 0x51);
      }
      uVar11 = *(uint *)((int)&this_00->field_0209 + iVar17 * 0x1fb);
      if (uVar11 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)((int)&this_00->field_024D + iVar17 * 0x1fb),uVar11,
                   *(uint *)(&this_00->field_0x20d + iVar17 * 0x1fb),
                   *(uint *)(&this_00->field_0x221 + iVar17 * 0x1fb),
                   *(uint *)(&this_00->field_0x225 + iVar17 * 0x1fb));
      }
    }
    local_10 = *(undefined4 *)((int)&this_00->field_0194 + iVar17 * 0x1fb);
    iVar9 = *(int *)((int)&this_00->field_0190 + iVar17 * 0x1fb);
    if (*local_c == 2) {
      iVar8 = 0;
LAB_0059332b:
      iVar10 = -2;
    }
    else {
      if (*local_c != 3) {
        iVar8 = 2;
        goto LAB_0059332b;
      }
      iVar8 = 0;
      iVar10 = -3;
    }
    switch(local_c[1]) {
    case 0:
      *(int *)((int)&this_00->field_017C + iVar17 * 0x1fb) =
           *(int *)(&this_00->field_0x180 + iVar17 * 0x1fb) + -3;
      break;
    case 1:
      *(int *)((int)&this_00->field_0190 + iVar17 * 0x1fb) = iVar8 + iVar9;
      *(int *)((int)&this_00->field_0194 + iVar17 * 0x1fb) =
           *(int *)((int)&this_00->field_0194 + iVar17 * 0x1fb) + iVar10;
    case 3:
      iVar8 = *(int *)(&this_00->field_0x180 + iVar17 * 0x1fb) + -2;
LAB_00593378:
      *(int *)((int)&this_00->field_017C + iVar17 * 0x1fb) = iVar8;
      break;
    case 2:
      iVar8 = *(int *)(&this_00->field_0x180 + iVar17 * 0x1fb) + -1;
      goto LAB_00593378;
    }
    uVar11 = *(uint *)((int)&this_00->field_0178 + iVar17 * 0x1fb);
    if (uVar11 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                (*(uint **)((int)&this_00->field_01BC + iVar17 * 0x1fb),uVar11,
                 *(uint *)((int)&this_00->field_017C + iVar17 * 0x1fb),
                 *(uint *)((int)&this_00->field_0190 + iVar17 * 0x1fb),
                 *(uint *)((int)&this_00->field_0194 + iVar17 * 0x1fb));
    }
    *(int *)((int)&this_00->field_0190 + iVar17 * 0x1fb) = iVar9;
    *(undefined4 *)((int)&this_00->field_0194 + iVar17 * 0x1fb) = local_10;
  }
switchD_005931ad_caseD_6944:
  g_currentExceptionFrame = local_54.previous;
  iVar7 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar7;
}

