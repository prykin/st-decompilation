
void __thiscall CampaignTy::LightPalette(CampaignTy *this)

{
  CampaignTy *pCVar1;
  code *pcVar2;
  CampaignTy *pCVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  CampaignTy *pCStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pCStack_8 = this;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pCVar3 = pCStack_8;
  if (iVar4 == 0) {
    if (*(int *)(pCStack_8 + 0x1bec) != 0) {
      pCVar1 = pCStack_8 + 0x1bf8;
      iVar4 = FUN_00718f40(DAT_0080759c,(undefined4 *)pCVar1,0,0x100,10,(int *)(pCStack_8 + 0x1bf4),
                           2,*(uint *)(pCStack_8 + 0x61),(uint *)(pCStack_8 + 0x1bf0));
      if (iVar4 == -4) {
        FUN_006b0a20(DAT_0080759c,(int)pCVar1,0,0x100,0);
        *(undefined4 *)(pCVar3 + 0x1bec) = 0;
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x12d,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7cbcd4,0x12d);
  return;
}

