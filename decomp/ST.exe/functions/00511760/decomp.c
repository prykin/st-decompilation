
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DoneHelpPanel */

void __thiscall HelpPanelTy::DoneHelpPanel(HelpPanelTy *this)

{
  code *pcVar1;
  HelpPanelTy *pHVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HelpPanelTy *pHVar5;
  undefined4 local_50;
  undefined4 local_4c [16];
  HelpPanelTy *local_c;
  int local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pHVar2 = local_c;
  if (iVar3 == 0) {
    if (*(uint *)(local_c + 0x17c) != 0) {
      FUN_006e56b0(*(void **)(local_c + 0xc),*(uint *)(local_c + 0x17c));
    }
    *(undefined4 *)(pHVar2 + 0x17c) = 0;
    pHVar5 = pHVar2 + 0x180;
    local_8 = 7;
    do {
      if (*(uint *)pHVar5 != 0) {
        FUN_006e56b0(*(void **)(pHVar2 + 0xc),*(uint *)pHVar5);
        *(uint *)pHVar5 = 0;
      }
      pHVar5 = pHVar5 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(uint *)(pHVar2 + 0x19c) != 0) {
      FUN_006e56b0(*(void **)(pHVar2 + 0xc),*(uint *)(pHVar2 + 0x19c));
    }
    *(undefined4 *)(pHVar2 + 0x19c) = 0;
    if (*(byte **)(pHVar2 + 0x1b3) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pHVar2 + 0x1b3));
    }
    *(undefined4 *)(pHVar2 + 0x1b3) = 0;
    if (*(byte **)(pHVar2 + 0x1bb) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pHVar2 + 0x1bb));
    }
    *(undefined4 *)(pHVar2 + 0x1bb) = 0;
    if (*(byte **)(pHVar2 + 0x1cb) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pHVar2 + 0x1cb));
    }
    *(undefined4 *)(pHVar2 + 0x1cb) = 0;
    if (*(byte **)(pHVar2 + 0x1d7) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pHVar2 + 0x1d7));
    }
    *(undefined4 *)(pHVar2 + 0x1d7) = 0;
    if (*(byte **)(pHVar2 + 0x1d3) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pHVar2 + 0x1d3));
    }
    *(undefined4 *)(pHVar2 + 0x1d3) = 0;
    pHVar5 = pHVar2 + 0x1f0;
    local_8 = 10;
    do {
      if (*(int *)pHVar5 != 0) {
        cMf32::RecMemFree(DAT_00806790,(uint *)pHVar5);
      }
      pHVar5 = pHVar5 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    *(undefined4 *)(pHVar2 + 0x238) = 0;
    *(undefined4 *)(pHVar2 + 0x248) = 0;
    *(undefined4 *)(pHVar2 + 0x22c) = 0;
    *(undefined4 *)(pHVar2 + 0x228) = 0;
    *(undefined4 *)(pHVar2 + 0x234) = 0;
    *(undefined4 *)(pHVar2 + 0x230) = 0;
    *(undefined4 *)(pHVar2 + 0x224) = 0;
    *(undefined4 *)(pHVar2 + 0x220) = 0;
    *(undefined4 *)(pHVar2 + 0x244) = 0;
    *(undefined4 *)(pHVar2 + 0x240) = 0;
    *(undefined4 *)(pHVar2 + 0x23c) = 0;
    if (*(uint **)(pHVar2 + 0x1e0) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pHVar2 + 0x1e0));
      *(undefined4 *)(pHVar2 + 0x1e0) = 0;
    }
    if (*(uint **)(pHVar2 + 0x1e4) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pHVar2 + 0x1e4));
      *(undefined4 *)(pHVar2 + 0x1e4) = 0;
    }
    if (*(uint **)(pHVar2 + 0x1e8) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pHVar2 + 0x1e8));
      *(undefined4 *)(pHVar2 + 0x1e8) = 0;
    }
    if (*(int *)(pHVar2 + 0x218) != 0) {
      FUN_006ab060((undefined4 *)(pHVar2 + 0x218));
    }
    if (*(int *)(pHVar2 + 0x1ec) != 0) {
      FUN_006ab060((undefined4 *)(pHVar2 + 0x1ec));
    }
    if (*(int *)(pHVar2 + 0x24c) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pHVar2 + 0x24c));
    }
    if (*(int *)(pHVar2 + 0x1dc) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pHVar2 + 0x1dc));
    }
    if (*(int *)(pHVar2 + 0x21c) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pHVar2 + 0x21c));
    }
    DAT_00801690 = 0;
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0xcf,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c383c,0xcf);
  return;
}

