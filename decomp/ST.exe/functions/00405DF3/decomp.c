
void thunk_FUN_0052edf0(byte param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  iStack_14 = (-(uint)(param_1 != 0) & 0xfffffffc) + 4;
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  iVar3 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    uVar2 = uStack_8._1_3_;
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    if (param_2 != 0) {
      iStack_c = iStack_14 + (uint)param_1 * 0xd + 0x5f;
      iVar3 = 0x80;
      uStack_10 = (uint)param_2;
      uStack_8 = CONCAT31(uVar2,param_2);
      do {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_18 + 0x198),6);
        thunk_FUN_00540760(*(undefined4 **)(iStack_18 + 0x68),iVar3,iStack_c,'\x01',pbVar4);
        iVar3 = iVar3 + 4;
        uStack_10 = uStack_10 - 1;
      } while (uStack_10 != 0);
    }
    if ((byte)uStack_8 < 0x1e) {
      iStack_c = iStack_14 + (uint)param_1 * 0xd + 0x5f;
      iVar5 = 0x1e - (uStack_8 & 0xff);
      iVar3 = (uStack_8 & 0xff) * 4 + 0x80;
      do {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_18 + 0x198),0);
        thunk_FUN_00540760(*(undefined4 **)(iStack_18 + 0x68),iVar3,iStack_c,'\x01',pbVar4);
        iVar3 = iVar3 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    DAT_00858df8 = (undefined4 *)uStack_5c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_5c;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0xac,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c70a0,0xac);
  return;
}

