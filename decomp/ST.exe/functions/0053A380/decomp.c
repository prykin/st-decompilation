
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::DonePlayPanel */

void __thiscall PlayPanelTy::DonePlayPanel(PlayPanelTy *this)

{
  code *pcVar1;
  PlayPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  PlayPanelTy *pPVar5;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  PlayPanelTy *local_c;
  int local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pPVar2 = local_c;
  if (iVar3 == 0) {
    if (*(uint *)(local_c + 0x17c) != 0) {
      FUN_006e56b0(*(void **)(local_c + 0xc),*(uint *)(local_c + 0x17c));
    }
    *(undefined4 *)(pPVar2 + 0x17c) = 0;
    if (*(uint *)(pPVar2 + 0x1c5) != 0) {
      FUN_006e56b0(*(void **)(pPVar2 + 0xc),*(uint *)(pPVar2 + 0x1c5));
    }
    *(undefined4 *)(pPVar2 + 0x1c5) = 0;
    if (*(uint *)(pPVar2 + 0x1c1) != 0) {
      FUN_006e56b0(*(void **)(pPVar2 + 0xc),*(uint *)(pPVar2 + 0x1c1));
    }
    *(undefined4 *)(pPVar2 + 0x1c1) = 0;
    pPVar5 = pPVar2 + 0x181;
    local_8 = 2;
    do {
      iVar3 = 8;
      do {
        if (*(uint *)pPVar5 != 0) {
          FUN_006e56b0(*(void **)(pPVar2 + 0xc),*(uint *)pPVar5);
          *(uint *)pPVar5 = 0;
        }
        pPVar5 = pPVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(uint **)(pPVar2 + 0x1dd) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pPVar2 + 0x1dd));
      *(undefined4 *)(pPVar2 + 0x1dd) = 0;
    }
    if (*(int *)(pPVar2 + 0x1cd) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pPVar2 + 0x1cd));
    }
    *(undefined4 *)(pPVar2 + 0x1d9) = 0;
    *(undefined4 *)(pPVar2 + 0x1d5) = 0;
    *(undefined4 *)(pPVar2 + 0x1d1) = 0;
    DAT_008016e4 = 0;
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_playpan_cpp_007c7574,0x97,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c7574,0x97);
  return;
}

