
void __thiscall HelpPanelTy::NextBut(HelpPanelTy *this)

{
  uint uVar1;
  void *pvVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  HelpPanelTy *pHStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pHStack_8 = this;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  this_00 = pHStack_8;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x307,0,iVar4,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar4,0,0x7c383c,0x307);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = *(int *)(pHStack_8 + 0x1b3);
  uVar7 = *(uint *)(pHStack_8 + 0x1b7);
  uVar1 = *(uint *)(iVar4 + 0xc);
  if (uVar7 < uVar1 - 1) {
    uVar7 = uVar7 + 1;
    if (uVar7 < uVar1) {
      piVar5 = (int *)(*(int *)(iVar4 + 8) * uVar7 + *(int *)(iVar4 + 0x1c));
    }
    else {
      piVar5 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    *(uint *)(pHStack_8 + 0x1b7) = uVar7;
    if ((char)piVar5[2] != '\0') {
      pHStack_8[0x1a1] = (HelpPanelTy)0x0;
      *(undefined4 *)(pHStack_8 + 0x1a7) = 0;
      *(undefined4 *)(pHStack_8 + 0x1a3) = 0;
      uVar7 = *(uint *)((int)piVar5 + 0xd);
      pvVar2 = *(void **)((int)piVar5 + 9);
      switch((char)piVar5[2]) {
      case '\x01':
        RCProc(pHStack_8,(int)pvVar2,uVar7,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      case '\x02':
        ObjProc(pHStack_8,(int)pvVar2,uVar7,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      case '\x03':
        SubProc(pHStack_8,(int)pvVar2,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      case '\x04':
        ArmProc(pHStack_8,(int)pvVar2,uVar7,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      case '\x05':
        TechProc(pHStack_8,(uint)pvVar2,(byte)uVar7,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      case '\x06':
        TTreeProc(pHStack_8,(uint)pvVar2,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      case '\a':
        MObjProc(pHStack_8);
        PutToSHlp(this_00,(int)unaff_EDI);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      case '\b':
        TipProc(pHStack_8,pvVar2,uVar7,'\0');
        break;
      case '\n':
        IndexBut(pHStack_8);
        PutToSHlp(this_00,(int)unaff_EDI);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      case '\v':
        SpecProc(pHStack_8,(int)pvVar2,uVar7,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      case '\f':
        NatProc(pHStack_8,(int)pvVar2,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return;
      }
      PutToSHlp(this_00,(int)unaff_EDI);
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    if (*(char *)((int)piVar5 + 0x12) != '\0') goto LAB_005141e1;
  }
  else {
    if (uVar7 < uVar1) {
      piVar5 = (int *)(*(int *)(iVar4 + 8) * uVar7 + *(int *)(iVar4 + 0x1c));
    }
    else {
      piVar5 = (int *)0x0;
    }
    if ((char)piVar5[2] != '\0') {
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    if (*(char *)((int)piVar5 + 0x12) != '\0') {
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
  }
  ChangeTree(pHStack_8,piVar5,uVar7);
LAB_005141e1:
  NextBut(this_00);
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return;
}

