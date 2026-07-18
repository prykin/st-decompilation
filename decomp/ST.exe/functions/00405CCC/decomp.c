
void __thiscall BldLabPanelTy::InitBldLabPanel(BldLabPanelTy *this)

{
  code *pcVar1;
  ProdPanelTy *this_00;
  int iVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 auStack_48 [16];
  ProdPanelTy *pPStack_8;
  
  uVar6 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pPStack_8 = (ProdPanelTy *)this;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar6);
  this_00 = pPStack_8;
  if (iVar2 == 0) {
    DAT_00801680 = pPStack_8;
    puVar3 = FUN_006ae290((uint *)0x0,0x28,0x30,10);
    *(uint **)(this_00 + 0x27a) = puVar3;
    *(int *)(this_00 + 0x3c) = *(int *)(this_00 + 0x3c) + (DAT_00806730 + -800) / 2;
    puVar4 = FUN_006f1ce0(1,s_BKG_BUILDLABW_007c1918,(int *)0x0,1);
    *(ushort **)(this_00 + 0x184) = puVar4;
    puVar4 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)(this_00 + 0x188) = puVar4;
    puVar4 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_OBJSD_007c1908,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)(this_00 + 0x18c) = puVar4;
    ProdPanelTy::InitProdPanel
              (this_00,0x2726,0x3f,2,0xc1,0xc,0x81,99,100,0xc0,99,0x25,0x14,0x31,s_OBJS_0_007c1900);
    DAT_00858df8 = (undefined1 *)uVar6;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_bldlab_cpp_007c18b4,0x1d,0,iVar2,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c18b4,0x1d);
  return;
}

