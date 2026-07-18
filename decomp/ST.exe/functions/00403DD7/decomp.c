
void __thiscall
InfocPanelTy::PaintInfocObj(InfocPanelTy *this,ushort param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  InfocPanelTy *pIVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puStack_4c;
  undefined4 auStack_48 [16];
  InfocPanelTy *pIStack_8;
  
  puStack_4c = DAT_00858df8;
  DAT_00858df8 = &puStack_4c;
  pIStack_8 = this;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pIVar2 = pIStack_8;
  if (iVar4 == 0) {
    if ((pIStack_8[0x3d4] == (InfocPanelTy)0xff) && (param_1 == 0xffff)) {
      wsprintfA((LPSTR)(pIStack_8 + 0x18d),s_______d_007c3fc0,param_2 & 0xffff);
    }
    else {
      wsprintfA((LPSTR)(pIStack_8 + 0x18d),s__d__d_007c3fb8,param_1,param_2 & 0xffff);
    }
    if (DAT_0080874e == '\x03') {
      cVar3 = 's';
    }
    else {
      cVar3 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
    }
    FUN_006b4170(*(int *)(pIVar2 + 0x68),0,param_3,param_4,0x2d,0xc,cVar3);
    ccFntTy::SetSurf(*(ccFntTy **)(pIVar2 + 0x189),*(int *)(pIVar2 + 0x68),0,param_3,param_4,0x2d,
                     0xc);
    ccFntTy::WrStr(*(ccFntTy **)(pIVar2 + 0x189),(uint *)(pIVar2 + 0x18d),-1,-1,
                   (DAT_0080874e != '\x03') - 1 & 5);
    DAT_00858df8 = puStack_4c;
    return;
  }
  DAT_00858df8 = puStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_infocen_cpp_007c3eb0,0xa9,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7c3eb0,0xa9);
  return;
}

