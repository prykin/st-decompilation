
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::InitUpgPanel */

void __thiscall UpgPanelTy::InitUpgPanel(UpgPanelTy *this)

{
  code *pcVar1;
  SpecPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  byte *pbVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  UINT UVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 local_48 [16];
  SpecPanelTy *local_8;
  
  uVar15 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = (SpecPanelTy *)this;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar15);
  this_00 = local_8;
  if (iVar2 == 0) {
    uVar13 = 0x77;
    uVar12 = 0xc9;
    UVar11 = 0x36c1;
    iVar10 = 0xc;
    iVar2 = 0xc6;
    uVar7 = 2;
    uVar6 = 0x31;
    DAT_00802a48 = local_8;
    pCVar3 = thunk_FUN_00571240(s_BKG_UPDATESW_007c8800,0);
    SpecPanelTy::InitPanel(this_00,pCVar3,uVar6,uVar7,iVar2,iVar10,UVar11,uVar12,uVar13);
    puVar4 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)(this_00 + 0x3eb) = puVar4;
    puVar4 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c38c8,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)(this_00 + 0x3ef) = puVar4;
    puVar14 = (undefined4 *)0x0;
    iVar10 = 0;
    iVar2 = 1;
    bVar9 = 0;
    uVar8 = 0xffffffff;
    pbVar5 = (byte *)thunk_FUN_00571240(s_FRAMES_007c205c,0);
    puVar4 = FUN_00709af0(DAT_00806794,0xb,pbVar5,uVar8,bVar9,iVar2,iVar10,puVar14);
    *(ushort **)(this_00 + 0x3f3) = puVar4;
    DAT_00858df8 = (undefined1 *)uVar15;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar15;
  iVar10 = FUN_006ad4d0(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x1d,0,iVar2,&DAT_007a4ccc);
  if (iVar10 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c87b8,0x1d);
  return;
}

