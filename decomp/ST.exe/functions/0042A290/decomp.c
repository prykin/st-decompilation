
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tload.cpp
   Diagnostic line evidence: 1166 | 1282 | 1283 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

short * __cdecl LoadLand(int param_1,char *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  short *psVar4;
  LPCSTR pCVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  short *psVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  int *this;
  void *unaff_EDI;
  uint uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  CHAR local_f4 [128];
  InternalExceptionFrame local_74;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  short *local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  uint *local_c;
  uint local_8;
  
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  iVar3 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    psVar4 = Library::Ourlib::MFSTMAP::mfTMapLoad
                       (param_1,param_2,DAT_00806760,DAT_00806760,&LAB_00403dff);
    local_1c = psVar4;
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      iVar3 = DAT_007f4e00;
      pCVar5 = (LPCSTR)FUN_006b0140(0x2685,DAT_00807618);
      wsprintfA(local_f4,pCVar5,iVar3);
      cLoadingTy::SetState(DAT_00802a58,CASE_2,0,local_f4);
      if (DAT_00802a58 != (cLoadingTy *)0x0) {
        iVar3 = DAT_007f4e00 / 2;
        puVar6 = (uint *)FUN_006b0140(0x268c,DAT_00807618);
        cLoadingTy::SetProcess(DAT_00802a58,0,puVar6,iVar3);
        cLoadingTy::SetState(DAT_00802a58,CASE_0,0,(char *)0x0);
      }
    }
    psVar11 = psVar4 + 7;
    iVar3 = 0x100;
    puVar7 = (undefined1 *)(DAT_0080679c + 0x29);
    do {
      *(undefined1 *)((int)psVar11 + -1) = puVar7[1];
      *(undefined1 *)psVar11 = *puVar7;
      *(undefined1 *)((int)psVar11 + 1) = puVar7[-1];
      psVar11 = psVar11 + 2;
      iVar3 = iVar3 + -1;
      puVar7 = puVar7 + 4;
    } while (iVar3 != 0);
    *(undefined1 *)((int)psVar4 + 0x409) = 0xff;
    *(undefined1 *)(psVar4 + 0x205) = 0xff;
    *(undefined1 *)((int)psVar4 + 0x40b) = 0xff;
    puVar8 = FUN_006b04d0(0x4f2);
    if (puVar8 == (undefined4 *)0x0) {
      local_10 = (int *)0x0;
    }
    else {
      local_10 = (int *)FUN_006dbca0((int)puVar8);
    }
    this = local_10;
    if (local_10 == (int *)0x0) {
      RaiseInternalException(-2,DAT_007ed77c,s_E____titans_tload_cpp_007a5fdc,0x48e);
    }
    Library::MSVCRT::FUN_0072e150(0xc0000000,0x403ccccc);
    lVar15 = Library::MSVCRT::__ftol();
    iVar3 = (int)lVar15;
    local_30 = iVar3;
    FUN_006dc050(this,0,0,0,iVar3,iVar3,0,0xc0240000,0,0x40240000,0,0xc0240000,0,0x40240000,
                 0x4024000000000000,0x4023ee97865e3540,0);
    this[0x4a] = 0;
    FUN_006dd790(this,140.204);
    FUN_006dd800(this,219.932);
    this[0x49] = 5;
    FUN_006dd610(this,4,0,0x40240000,0,0x40240000);
    local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,100,8,100);
    local_18 = 0;
    if (0 < *(int *)((int)psVar4 + 0x455)) {
      local_14 = (int *)((int)psVar4 + 0x459);
      do {
        piVar1 = (int *)*local_14;
        if (piVar1 != (int *)0x0) {
          local_8 = local_c[3];
          local_c[1] = 0;
          do {
            uVar12 = local_c[1];
            if (uVar12 < local_8) {
              piVar9 = (int *)(local_c[2] * uVar12 + local_c[7]);
              local_c[1] = uVar12 + 1;
            }
            else {
              piVar9 = (int *)0x0;
            }
          } while ((piVar9 != (int *)0x0) && (piVar1[10] != *piVar9));
          if (piVar9 == (int *)0x0) {
            local_8 = (uint)(short)piVar1[1];
            local_28 = (int)*(short *)((int)piVar1 + 6);
            *(undefined2 *)(piVar1 + 1) = 0;
            *(undefined2 *)((int)piVar1 + 6) = 0;
            local_2c = (int)(short)piVar1[2];
            *(ushort *)(piVar1 + 2) = (ushort)*(byte *)(piVar1 + 0x12);
            *piVar1 = this[0x50];
            this[0x50] = (int)piVar1;
            this[0x4f] = this[0x4f] + 1;
            FUN_006ddbe0((int)this);
            FUN_006ddd50(this);
            uVar13 = iVar3 * iVar3;
            this[0x50] = 0;
            this[0x4f] = 0;
            *(undefined2 *)((int)piVar1 + 6) = (undefined2)local_28;
            *(undefined2 *)(piVar1 + 1) = (undefined2)local_8;
            local_24 = piVar1[10];
            *(undefined2 *)(piVar1 + 2) = (undefined2)local_2c;
            local_20 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar13);
            puVar8 = (undefined4 *)this[3];
            puVar14 = local_20;
            for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar14 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar14 + 1;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined1 *)puVar14 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar14 = (undefined4 *)((int)puVar14 + 1);
            }
            piVar1[0x10] = (int)local_20;
            Library::DKW::TBL::FUN_006ae1c0(local_c,&local_24);
            this = local_10;
            iVar3 = local_30;
          }
          else {
            piVar1[0x10] = piVar9[1];
          }
        }
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
        psVar4 = local_1c;
      } while (local_18 < *(int *)((int)local_1c + 0x455));
    }
    if (this != (int *)0x0) {
      FUN_006dbcf0(this);
      Library::MSVCRT::FUN_0072e2b0(this);
    }
    FUN_006ae110((byte *)local_c);
    thunk_FUN_00428e50(psVar4);
    LandInit(psVar4);
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      cLoadingTy::SetState(DAT_00802a58,CASE_2,0,(char *)0x0);
    }
    g_currentExceptionFrame = local_74.previous;
    return psVar4;
  }
  g_currentExceptionFrame = local_74.previous;
  iVar10 = ReportDebugMessage(s_E____titans_tload_cpp_007a5fdc,0x502,0,iVar3,&DAT_007a4ccc,
                              s_LoadLand_007a5ff8);
  if (iVar10 == 0) {
    RaiseInternalException(iVar3,0,s_E____titans_tload_cpp_007a5fdc,0x503);
    return (short *)0x0;
  }
  pcVar2 = (code *)swi(3);
  psVar4 = (short *)(*pcVar2)();
  return psVar4;
}

