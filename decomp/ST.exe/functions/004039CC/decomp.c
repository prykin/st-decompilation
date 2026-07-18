
void __thiscall HelpPanelTy::FwdBut(HelpPanelTy *this)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  undefined1 *puVar6;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  HelpPanelTy *pHStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pHStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = *(int *)(pHStack_8 + 0x1cb);
    if (*(int *)(pHStack_8 + 0x1cf) < *(int *)(iVar3 + 0xc) + -1) {
      uVar5 = *(int *)(pHStack_8 + 0x1cf) + 1;
      *(uint *)(pHStack_8 + 0x1cf) = uVar5;
      if (uVar5 < *(uint *)(iVar3 + 0xc)) {
        puVar6 = (undefined1 *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c));
      }
      else {
        puVar6 = (undefined1 *)0x0;
      }
      if (puVar6 != (undefined1 *)0x0) {
        pHStack_8[0x1a1] = (HelpPanelTy)0x0;
        *(undefined4 *)(pHStack_8 + 0x1a7) = 0;
        *(undefined4 *)(pHStack_8 + 0x1a3) = 0;
        uVar5 = *(uint *)(puVar6 + 5);
        pvVar1 = *(void **)(puVar6 + 1);
        switch(*puVar6) {
        case 0:
          HomeBut(pHStack_8);
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 1:
          RCProc(pHStack_8,(int)pvVar1,uVar5,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 2:
          ObjProc(pHStack_8,(int)pvVar1,uVar5,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 3:
          SubProc(pHStack_8,(int)pvVar1,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 4:
          ArmProc(pHStack_8,(int)pvVar1,uVar5,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 5:
          TechProc(pHStack_8,(uint)pvVar1,(byte)uVar5,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 6:
          TTreeProc(pHStack_8,(uint)pvVar1,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 7:
          MObjProc(pHStack_8);
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 8:
          TipProc(pHStack_8,pvVar1,uVar5,'\0');
          break;
        case 10:
          IndexBut(pHStack_8);
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 0xb:
          SpecProc(pHStack_8,(int)pvVar1,uVar5,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 0xc:
          NatProc(pHStack_8,(int)pvVar1,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        }
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x327,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c383c,0x327);
  return;
}

