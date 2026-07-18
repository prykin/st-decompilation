
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::InitResearchPanel */

void __thiscall ResearchPanelTy::InitResearchPanel(ResearchPanelTy *this)

{
  code *pcVar1;
  ResearchPanelTy *this_00;
  int iVar2;
  uint *puVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ProdPanelTy *pPVar10;
  int iVar11;
  int *piVar12;
  undefined4 local_1fc [84];
  undefined4 local_ac;
  undefined4 local_a8 [16];
  undefined4 local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ResearchPanelTy *local_10;
  int local_c;
  int local_8;
  
  puVar6 = local_68;
  local_10 = this;
  for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_1fc;
  for (iVar7 = 0x54; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_ac = DAT_00858df8;
  DAT_00858df8 = &local_ac;
  iVar7 = __setjmp3(local_a8,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)local_ac;
    iVar9 = FUN_006ad4d0(s_E____titans_Andrey_research_cpp_007c76c8,0x39,0,iVar7,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar7,0,0x7c76c8,0x39);
    return;
  }
  iVar7 = 2;
  DAT_008016e8 = (ProdPanelTy *)local_10;
  pPVar10 = (ProdPanelTy *)(local_10 + 0x27a);
  do {
    puVar3 = FUN_006ae290((uint *)0x0,0x28,0x30,10);
    *(uint **)pPVar10 = puVar3;
    pPVar10 = pPVar10 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 1;
  piVar12 = (int *)0x0;
  *(int *)(this_00 + 0x3c) = *(int *)(this_00 + 0x3c) + (DAT_00806730 + -800) / 2;
  pCVar4 = thunk_FUN_00571240(s_BKG_RESEARCHW_007c7724,0);
  puVar5 = FUN_006f1ce0(1,pCVar4,piVar12,iVar7);
  *(ushort **)(this_00 + 0x184) = puVar5;
  puVar5 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(this_00 + 0x188) = puVar5;
  puVar5 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c38c8,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(this_00 + 0x18c) = puVar5;
  ProdPanelTy::InitProdPanel
            ((ProdPanelTy *)this_00,0x2722,0x3f,2,0xc1,0xc,0x85,0x4f,0x68,0xc4,0x4f,0x20,0x13,0x33,
             s_UPG_00_007c771c);
  if (DAT_0080874e != '\x03') {
    local_c = *(int *)(this_00 + 0x5c);
    puVar6 = local_1fc + 1;
    iVar9 = *(int *)(this_00 + 0x3c) + 0x70;
    local_8 = 2;
    iVar7 = 0;
    do {
      iVar2 = local_c;
      puVar6[-1] = iVar7 + 1;
      *puVar6 = 0;
      puVar6[2] = iVar9;
      puVar6[4] = 0x2e;
      iVar11 = DAT_00806734;
      if (iVar2 != 0) {
        iVar11 = *(int *)(this_00 + 0x44);
      }
      puVar6[3] = iVar11 + 0x34;
      puVar6[5] = 0x10;
      puVar6[0x11] = 0;
      puVar6[0x15] = 0x101;
      puVar6[10] = 0x101;
      puVar6[0x16] = 3;
      puVar6[0xb] = 3;
      puVar6[0xc] = 0x4201;
      puVar6[0x17] = 0x4202;
      *(undefined2 *)(puVar6 + 0x18) = 0;
      *(undefined2 *)(puVar6 + 0xd) = 0;
      *(undefined2 *)((int)puVar6 + 0x62) = 2;
      *(undefined2 *)((int)puVar6 + 0x36) = 2;
      if (iVar7 == 0) {
        uVar8 = 0x3aab;
LAB_0053c30d:
        puVar6[0x19] = uVar8;
        puVar6[0xe] = uVar8;
      }
      else if (iVar7 == 1) {
        uVar8 = 0x3aac;
        goto LAB_0053c30d;
      }
      iVar9 = iVar9 + 0x31;
      puVar6 = puVar6 + 0x1c;
      local_8 = local_8 + -1;
      iVar7 = iVar7 + 1;
    } while (local_8 != 0);
    local_20 = local_1fc;
    local_58 = *(undefined4 *)(this_00 + 8);
    local_1c = (byte)*(ProdPanelTy *)(this_00 + 0x278) + 1;
    local_68[0] = 1;
    local_68[1] = 1;
    local_18 = 1;
    local_14 = 1;
    local_54 = 2;
    local_50 = 0xb207;
    local_34 = 2;
    local_30 = 0xc0b4;
    local_38 = local_58;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(5,(ProdPanelTy *)(this_00 + 0x282),0,local_68,0);
  }
  DAT_00858df8 = (undefined4 *)local_ac;
  return;
}

