
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::InitFrmPanel */

void __thiscall FrmPanelTy::InitFrmPanel(FrmPanelTy *this)

{
  code *pcVar1;
  SpecPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  UINT UVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_4c;
  undefined4 local_48 [16];
  SpecPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = (SpecPanelTy *)this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    uVar13 = 0x77;
    uVar11 = 0xc9;
    UVar9 = 0x2736;
    iVar8 = 0xc;
    iVar2 = 0xc6;
    uVar7 = 2;
    uVar6 = 0x31;
    DAT_0080168c = local_8;
    pCVar3 = thunk_FUN_00571240(s_BKG_FORMATIONW_007c2a58,0);
    SpecPanelTy::InitPanel(this_00,pCVar3,uVar6,uVar7,iVar2,iVar8,UVar9,uVar11,uVar13);
    uVar14 = 1;
    iVar2 = *(int *)this_00;
    uVar12 = 0;
    uVar10 = 0x2774;
    uVar13 = 0;
    uVar11 = 2;
    uVar7 = 0xc0af;
    uVar6 = 0xc09f;
    pCVar3 = thunk_FUN_00571240(s_BUT_FLINE_007c2a4c,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0x2b,0x19,0,1,1,pCVar3,uVar6,uVar7,uVar11,uVar13,uVar10,uVar12,uVar14);
    uVar5 = 1;
    iVar2 = *(int *)this_00;
    uVar14 = 0;
    uVar12 = 0x2775;
    uVar10 = 0;
    uVar13 = 2;
    uVar11 = 0xc0b0;
    uVar7 = 0xc0a0;
    *(undefined4 *)(this_00 + 0x1b3) = uVar6;
    pCVar3 = thunk_FUN_00571240(s_BUT_FBENDUP_007c2a3c,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0x60,0x19,0,1,1,pCVar3,uVar7,uVar11,uVar13,uVar10,uVar12,uVar14,uVar5);
    uVar5 = 1;
    iVar2 = *(int *)this_00;
    uVar14 = 0;
    uVar12 = 0x2779;
    uVar10 = 0;
    uVar13 = 2;
    uVar11 = 0xc0b1;
    uVar7 = 0xc0a1;
    *(undefined4 *)(this_00 + 0x1b7) = uVar6;
    pCVar3 = thunk_FUN_00571240(s_BUT_FHOLD_007c2a30,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0x95,0x19,0,1,1,pCVar3,uVar7,uVar11,uVar13,uVar10,uVar12,uVar14,uVar5);
    uVar5 = 1;
    iVar2 = *(int *)this_00;
    uVar14 = 0;
    uVar12 = 0x277a;
    uVar10 = 0;
    uVar13 = 2;
    uVar11 = 0xc0b2;
    uVar7 = 0xc0a2;
    *(undefined4 *)(this_00 + 0x1bb) = uVar6;
    pCVar3 = thunk_FUN_00571240(s_BUT_FLOCK_007c2a24,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0xca,0x19,0,1,1,pCVar3,uVar7,uVar11,uVar13,uVar10,uVar12,uVar14,uVar5);
    uVar5 = 1;
    iVar2 = *(int *)this_00;
    uVar14 = 0;
    uVar12 = 0x2777;
    uVar10 = 0;
    uVar13 = 2;
    uVar11 = 0xc0b3;
    uVar7 = 0xc0a3;
    *(undefined4 *)(this_00 + 0x1bf) = uVar6;
    pCVar3 = thunk_FUN_00571240(s_BUT_FWALL_007c2a18,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0x2b,0x31,0,1,1,pCVar3,uVar7,uVar11,uVar13,uVar10,uVar12,uVar14,uVar5);
    uVar5 = 1;
    iVar2 = *(int *)this_00;
    uVar14 = 0;
    uVar12 = 0x2776;
    uVar10 = 0;
    uVar13 = 2;
    uVar11 = 0xc0b4;
    uVar7 = 0xc0a4;
    *(undefined4 *)(this_00 + 0x1c3) = uVar6;
    pCVar3 = thunk_FUN_00571240(s_BUT_FBENDDN_007c2a08,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0x60,0x31,0,1,1,pCVar3,uVar7,uVar11,uVar13,uVar10,uVar12,uVar14,uVar5);
    iVar2 = *(int *)this_00;
    uVar14 = 1;
    uVar12 = 0;
    uVar10 = 0x2778;
    uVar13 = 0;
    uVar11 = 2;
    uVar7 = 0xc0b5;
    *(undefined4 *)(this_00 + 0x1c7) = uVar6;
    uVar6 = 0xc0a5;
    pCVar3 = thunk_FUN_00571240(s_BUT_FSQUARE_007c29f8,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0x95,0x31,0,1,1,pCVar3,uVar6,uVar7,uVar11,uVar13,uVar10,uVar12,uVar14);
    uVar5 = 1;
    iVar2 = *(int *)this_00;
    uVar14 = 0;
    uVar12 = 0x277b;
    uVar10 = 0;
    uVar13 = 2;
    uVar11 = 0xc0b6;
    uVar7 = 0xc0a6;
    *(undefined4 *)(this_00 + 0x1cb) = uVar6;
    pCVar3 = thunk_FUN_00571240(s_BUT_FBREAK_007c29e8,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0xca,0x31,0,1,1,pCVar3,uVar7,uVar11,uVar13,uVar10,uVar12,uVar14,uVar5);
    uVar14 = 1;
    iVar2 = *(int *)this_00;
    pcVar4 = s_MSK_FRLFT_007c29dc;
    uVar12 = 0x277c;
    uVar10 = 0;
    uVar13 = 2;
    uVar11 = 0xb109;
    uVar7 = 0xb108;
    *(undefined4 *)(this_00 + 0x1cf) = uVar6;
    pCVar3 = thunk_FUN_00571240(s_BUT_FINC_007c29d0,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0x2b,0x52,0,1,6,pCVar3,uVar7,uVar11,uVar13,uVar10,uVar12,pcVar4,uVar14);
    uVar14 = 1;
    iVar2 = *(int *)this_00;
    pcVar4 = s_MSK_FRRT_007c29c4;
    uVar12 = 0x277d;
    uVar10 = 0;
    uVar13 = 2;
    uVar11 = 0xb10b;
    uVar7 = 0xb10a;
    *(undefined4 *)(this_00 + 0x1d3) = uVar6;
    pCVar3 = thunk_FUN_00571240(s_BUT_FDEC_007c29b8,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0x4d,0x52,0,1,6,pCVar3,uVar7,uVar11,uVar13,uVar10,uVar12,pcVar4,uVar14);
    uVar14 = 1;
    iVar2 = *(int *)this_00;
    pcVar4 = s_MSK_FRLFT_007c29dc;
    uVar12 = 0x277e;
    uVar10 = 0;
    uVar13 = 2;
    uVar11 = 0xb10d;
    uVar7 = 0xb10c;
    *(undefined4 *)(this_00 + 0x1d7) = uVar6;
    pCVar3 = thunk_FUN_00571240(s_BUT_FRLFT_007c29ac,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0xaa,0x52,0,1,6,pCVar3,uVar7,uVar11,uVar13,uVar10,uVar12,pcVar4,uVar14);
    uVar14 = 1;
    iVar2 = *(int *)this_00;
    pcVar4 = s_MSK_FRRT_007c29c4;
    uVar12 = 0x277f;
    uVar10 = 0;
    uVar13 = 2;
    uVar11 = 0xb10f;
    uVar7 = 0xb10e;
    *(undefined4 *)(this_00 + 0x1db) = uVar6;
    pCVar3 = thunk_FUN_00571240(s_BUT_FRRT_007c29a0,0);
    uVar6 = (**(code **)(iVar2 + 4))
                      (0,1,0xcc,0x52,0,1,6,pCVar3,uVar7,uVar11,uVar13,uVar10,uVar12,pcVar4,uVar14);
    *(undefined4 *)(this_00 + 0x1df) = uVar6;
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar8 = FUN_006ad4d0(s_E____titans_Andrey_frmpanel_cpp_007c2958,0x43,0,iVar2,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c2958,0x43);
  return;
}

