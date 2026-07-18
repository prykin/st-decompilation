
undefined4 __thiscall
HelpPanelTy::DrawWeapon
          (HelpPanelTy *this,int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  UINT UVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined2 uVar8;
  HINSTANCE pHVar9;
  undefined4 *puStack_6c;
  undefined4 auStack_68 [16];
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  int iStack_17;
  uint uStack_13;
  undefined4 uStack_c;
  HelpPanelTy *pHStack_8;
  
  uStack_c = 0;
  puStack_6c = DAT_00858df8;
  DAT_00858df8 = &puStack_6c;
  pHStack_8 = this;
  iVar2 = __setjmp3(auStack_68,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = puStack_6c;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x412,0,iVar2,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    FUN_006a5e40(iVar2,0,0x7c383c,0x412);
    return 0;
  }
  if (param_3 != 0) {
    uVar8 = (undefined2)param_3;
    uVar3 = thunk_FUN_005259b0(uVar8,0,'\x01');
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pHStack_8 + 0x244),uVar3);
    if (pbVar4 != (byte *)0x0) {
      if (*(int *)(pbVar4 + 8) + -0xf < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(pbVar4 + 8) + -0xf) / 2;
      }
      iVar7 = *param_2;
      *param_2 = iVar7 + iVar2;
      ccFntTy::SetSurf(*(ccFntTy **)(pHStack_8 + 0x1e0),*(int *)(pHStack_8 + 0x218),0,param_1,
                       iVar7 + iVar2,0x19c - param_1,0xf);
      if (param_4 == 0) {
        pHVar9 = DAT_00807618;
        UVar5 = thunk_FUN_00524fe0(uVar8);
        uVar6 = FUN_006b0140(UVar5,pHVar9);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007a4ccc,uVar6);
      }
      else {
        pHVar9 = DAT_00807618;
        UVar5 = thunk_FUN_00524fe0(uVar8);
        uVar6 = FUN_006b0140(UVar5,pHVar9);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s___d__007c3bc0,uVar6,param_4);
      }
      ccFntTy::WrStr(*(ccFntTy **)(pHStack_8 + 0x1e0),&DAT_0080f33a,1,-1,
                     (DAT_0080874e != '\x03') - 1 & 5);
      thunk_FUN_00540760(*(undefined4 **)(pHStack_8 + 0x218),(param_1 - *(int *)(pbVar4 + 4)) + -5,
                         (0xf - *(int *)(pbVar4 + 8)) / 2 + *param_2,'\x06',pbVar4);
      iStack_28 = (param_1 - *(int *)(pbVar4 + 4)) + -5;
      uStack_20 = *(undefined4 *)(pbVar4 + 4);
      iStack_24 = (0xf - *(int *)(pbVar4 + 8)) / 2 + *param_2;
      uStack_1c = *(undefined4 *)(pbVar4 + 8);
      iStack_17 = param_3;
      uStack_13 = param_5 & 0xff;
      uStack_18 = 4;
      FUN_006ae1c0(*(uint **)(pHStack_8 + 0x1d7),&iStack_28);
      iVar2 = *(int *)(pbVar4 + 8);
      if (iVar2 < 0x10) {
        iVar2 = 0xf;
      }
      *param_2 = *param_2 + iVar2;
      DAT_00858df8 = puStack_6c;
      return 1;
    }
  }
  DAT_00858df8 = puStack_6c;
  return uStack_c;
}

