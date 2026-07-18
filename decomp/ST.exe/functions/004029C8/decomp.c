
void __thiscall HelpPanelTy::HomeBut(HelpPanelTy *this)

{
  HelpPanelTy HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_64;
  undefined4 auStack_60 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  HelpPanelTy *pHStack_c;
  uint uStack_8;
  
  uStack_64 = DAT_00858df8;
  DAT_00858df8 = &uStack_64;
  pHStack_c = this;
  iVar3 = __setjmp3(auStack_60,0,unaff_EDI,unaff_ESI);
  this_00 = pHStack_c;
  if (iVar3 == 0) {
    HVar1 = pHStack_c[0x1a1];
    if (((HVar1 == (HelpPanelTy)0x0) || (HVar1 == (HelpPanelTy)0x6)) || (HVar1 == (HelpPanelTy)0xa))
    {
      pHStack_c[0x1a2] = HVar1;
      *(undefined4 *)(pHStack_c + 0x1ab) = *(undefined4 *)(pHStack_c + 0x1a3);
    }
    else {
      pHStack_c[0x1a2] = (HelpPanelTy)0x0;
      *(undefined4 *)(pHStack_c + 0x1ab) = 0;
    }
    pHStack_c[0x1a1] = (HelpPanelTy)0x0;
    *(undefined4 *)(pHStack_c + 0x1a3) = 0;
    if (*(int *)(pHStack_c + 0x178) != 0) {
      *(undefined4 *)(pHStack_c + 0x28) = 0x4202;
      *(undefined2 *)(pHStack_c + 0x2c) = 0;
      *(undefined2 *)(pHStack_c + 0x2e) = 2;
      *(int *)(pHStack_c + 0x30) = *(int *)(pHStack_c + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(pHStack_c + 0x18);
      }
    }
    *(undefined4 *)(this_00 + 0x1cf) = 0xffffffff;
    *(undefined4 *)(*(int *)(this_00 + 0x1cb) + 0xc) = 0;
    FUN_006b55f0(*(undefined4 **)(this_00 + 0x68),0,0x21,0x16,*(int *)(this_00 + 0x1dc),0,0x21,0x16,
                 0x1b8,0x118);
    uStack_8 = 0;
    *(undefined4 *)(*(int *)(this_00 + 0x1b3) + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x1b7) = 0;
    if (*(int *)sizeHelp_exref != 0) {
      iVar3 = 0;
      do {
        puVar4 = (undefined4 *)(*(int *)(this_00 + 0x1c7) + iVar3);
        if (puVar4[1] == 0) {
          uStack_20 = *puVar4;
          uStack_1c = puVar4[1];
          uStack_18 = puVar4[2];
          uStack_14 = puVar4[3];
          uStack_10 = *(undefined1 *)(puVar4 + 4);
          uStack_f = 0;
          uStack_e = 0;
          uStack_d = 0;
          FUN_006ae1c0(*(uint **)(this_00 + 0x1b3),&uStack_20);
        }
        uStack_8 = uStack_8 + 1;
        iVar3 = iVar3 + 0x11;
      } while (uStack_8 < *(uint *)sizeHelp_exref);
    }
    CreateList(this_00);
    DAT_00858df8 = (undefined4 *)uStack_64;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_64;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x295,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c383c,0x295);
  return;
}

