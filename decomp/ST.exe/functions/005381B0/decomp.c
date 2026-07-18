
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::InitPanel */

void __thiscall PanelTy::InitPanel(PanelTy *this)

{
  code *pcVar1;
  PanelTy *this_00;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  PanelTy *pPVar7;
  undefined4 local_4c;
  undefined4 local_48 [16];
  PanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    iVar2 = 1;
    puVar4 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar3 = FUN_006b4fe0(DAT_0080679c);
    iVar2 = FUN_006b50c0(*(int *)(this_00 + 0x40),*(int *)(this_00 + 0x48),
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar3,puVar4,iVar2);
    *(int *)(this_00 + 0x68) = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)(this_00 + 0x4c));
    pPVar7 = this_00 + 0x60;
    FUN_006b2330((uint)DAT_008075a8,(uint *)pPVar7,*(uint *)(this_00 + 100),0x4057ea,
                 *(uint *)(this_00 + 0x40),*(uint *)(this_00 + 0x48),*(uint *)(this_00 + 0x68));
    FUN_006b1b10((int)DAT_008075a8,*(uint *)pPVar7,3);
    FUN_006b3640(DAT_008075a8,*(uint *)pPVar7,0xffffffff,*(uint *)(this_00 + 0x3c),
                 *(uint *)(this_00 + 0x44));
    pPVar7 = this_00 + 0x18;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pPVar7 = 0;
      pPVar7 = pPVar7 + 4;
    }
    *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this_00 + 8);
    *(undefined4 *)(this_00 + 0x28) = 0x13;
    FUN_006e6000(this_00,3,1,(undefined4 *)(this_00 + 0x18));
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_panel_cpp_007c7390,0x2a,0,iVar2,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7390,0x2a);
  return;
}

