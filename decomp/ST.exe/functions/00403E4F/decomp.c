
void __thiscall CPanelTy::PaintMineInf(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  char *_Source;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  size_t _Count;
  CPanelTy *_Dest;
  undefined4 *puStack_54;
  undefined4 auStack_50 [16];
  CPanelTy *pCStack_10;
  undefined1 *puStack_c;
  UINT UStack_8;
  
  puStack_54 = DAT_00858df8;
  DAT_00858df8 = &puStack_54;
  pCStack_10 = this;
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_10;
  if (iVar3 == 0) {
    thunk_FUN_00540760(*(undefined4 **)(pCStack_10 + 0x194),param_1,0x50,'\x01',
                       *(byte **)(pCStack_10 + 0x9ed));
    if (*(int *)(pCVar2 + 0xbf5) == 0x38) {
      puStack_c = (undefined1 *)CONCAT31(puStack_c._1_3_,2);
    }
    else {
      puStack_c = (undefined1 *)CONCAT31(puStack_c._1_3_,*(int *)(pCVar2 + 0xbf5) == 0x4f);
    }
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2d2),(uint)puStack_c & 0xff);
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),param_1 + 3,0x53,'\x01',pbVar4);
    if (*(int *)(pCVar2 + 0xbf5) == 0x38) {
      puStack_c = &DAT_007aa024;
      UStack_8 = 0x271c;
    }
    else if (*(int *)(pCVar2 + 0xbf5) == 0x4f) {
      puStack_c = &DAT_007aa020;
      UStack_8 = 0x271e;
    }
    else {
      puStack_c = &DAT_007aa028;
      UStack_8 = 0x271d;
    }
    _Count = 0x32;
    _Dest = pCVar2 + 0x1e1;
    _Source = (char *)FUN_006b0140(0x2721,DAT_00807618);
    _strncpy((char *)_Dest,_Source,_Count);
    pCVar2[0x212] = (CPanelTy)0x0;
    for (puVar5 = FUN_0072e560((uint *)_Dest,'\n'); puVar5 != (uint *)0x0;
        puVar5 = FUN_0072e560(puVar5,'\n')) {
      *(undefined1 *)puVar5 = 0x20;
    }
    uVar6 = FUN_006b0140(UStack_8,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s___s_s__1_s_007c274c,puStack_c,uVar6,_Dest);
    iVar3 = param_1 + 0x40;
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),*(int *)(pCVar2 + 0x194),0,iVar3,0x57,0x75,0x16);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),&DAT_0080f33a,-2,-1,0,-1,-1);
    pbVar4 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(pCVar2 + 0x1c4),*(int *)(pCVar2 + 0x194),0,
                                         iVar3,0x6d,0x75,0xe,0);
    if (pbVar4 != (byte *)0x0) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c2744,(uint)*(ushort *)(pCVar2 + 0xc34));
      if (*(int *)(pCVar2 + 0xbf5) == 0x38) {
        iVar7 = 1;
      }
      else {
        iVar7 = (-(uint)(*(int *)(pCVar2 + 0xbf5) != 0x4f) & 0xfffffffe) + 2;
      }
      ccFntTy::WrStr(*(ccFntTy **)(pCVar2 + 0x1c4),&DAT_0080f33a,-1,-1,iVar7);
      thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),iVar3,0x6f,'\x01',pbVar4);
      ccFntTy::EraseSufr(*(ccFntTy **)(pCVar2 + 0x1c4));
    }
    DAT_00858df8 = puStack_54;
    return;
  }
  DAT_00858df8 = puStack_54;
  iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x47,0,iVar3,&DAT_007a4ccc);
  if (iVar7 == 0) {
    FUN_006a5e40(iVar3,0,0x7c2700,0x47);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

