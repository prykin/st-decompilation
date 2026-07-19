
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::InitPanel */

void __thiscall PanelTy::InitPanel(PanelTy *this)

{
  PanelTy *pPVar1;
  code *pcVar2;
  PanelTy *this_00;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 == 0) {
    iVar3 = 1;
    puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar4 = FUN_006b4fe0(DAT_0080679c);
    iVar3 = FUN_006b50c0(*(int *)&this_00->field_0x40,*(int *)&this_00->field_0x48,
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5,iVar3);
    *(int *)&this_00[1].field_0x8 = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)&this_00->field_0x4c);
    pPVar1 = this_00 + 1;
    FUN_006b2330((uint)DAT_008075a8,(uint *)pPVar1,*(uint *)&this_00[1].field_0x4,0x4057ea,
                 *(uint *)&this_00->field_0x40,*(uint *)&this_00->field_0x48,
                 *(uint *)&this_00[1].field_0x8);
    FUN_006b1b10((int)DAT_008075a8,*(uint *)pPVar1,3);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)pPVar1,0xffffffff,this_00->field_003C,
               *(uint *)&this_00->field_0x44);
    puVar5 = (undefined4 *)&this_00->field_0x18;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)&this_00->field_0x2c = *(undefined4 *)&this_00->field_0x8;
    *(undefined4 *)&this_00->field_0x28 = 0x13;
    FUN_006e6000(this_00,3,1,(undefined4 *)&this_00->field_0x18);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_panel_cpp_007c7390,0x2a,0,iVar3,&DAT_007a4ccc,
                             s_PanelTy__InitPanel_007c73b4);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_panel_cpp_007c7390,0x2a);
  return;
}

