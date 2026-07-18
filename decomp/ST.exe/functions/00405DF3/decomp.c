
void __thiscall OptPanelTy::PaintVolume(OptPanelTy *this,byte param_1,byte param_2)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  uint3 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  OptPanelTy *pOStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  iStack_14 = (-(uint)(param_1 != 0) & 0xfffffffc) + 4;
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  pOStack_18 = this;
  iVar4 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  pOVar2 = pOStack_18;
  if (iVar4 == 0) {
    uVar3 = uStack_8._1_3_;
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    if (param_2 != 0) {
      iStack_c = iStack_14 + (uint)param_1 * 0xd + 0x5f;
      iVar4 = 0x80;
      uStack_10 = (uint)param_2;
      uStack_8 = CONCAT31(uVar3,param_2);
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pOVar2 + 0x198),6);
        thunk_FUN_00540760(*(undefined4 **)(pOVar2 + 0x68),iVar4,iStack_c,'\x01',pbVar5);
        iVar4 = iVar4 + 4;
        uStack_10 = uStack_10 - 1;
      } while (uStack_10 != 0);
    }
    if ((byte)uStack_8 < 0x1e) {
      iStack_c = iStack_14 + (uint)param_1 * 0xd + 0x5f;
      iVar6 = 0x1e - (uStack_8 & 0xff);
      iVar4 = (uStack_8 & 0xff) * 4 + 0x80;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pOVar2 + 0x198),0);
        thunk_FUN_00540760(*(undefined4 **)(pOVar2 + 0x68),iVar4,iStack_c,'\x01',pbVar5);
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    DAT_00858df8 = (undefined4 *)uStack_5c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_5c;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0xac,0,iVar4,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7c70a0,0xac);
  return;
}

