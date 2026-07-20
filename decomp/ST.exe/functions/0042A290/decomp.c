
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tload.cpp
   Diagnostic line evidence: 1166 | 1282 | 1283 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00576EF0 -> 0042A290 @ 00576F31
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00576EF0 -> 0042A290 @ 00576F31 */

short * __cdecl LoadLand(cMf32 *param_1,char *text)

{
  code *pcVar1;
  int iVar2;
  short *psVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  HoloTy *this;
  void *unaff_EDI;
  uint uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  CHAR local_f4 [128];
  InternalExceptionFrame local_74;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 *local_20;
  short *local_1c;
  int local_18;
  int *local_14;
  HoloTy *local_10;
  uint *local_c;
  uint local_8;
  
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  iVar2 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    psVar3 = Library::Ourlib::MFSTMAP::mfTMapLoad
                       ((int)param_1,text,g_cMf32_00806760,g_cMf32_00806760,&LAB_00403dff);
    local_1c = psVar3;
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      iVar2 = DAT_007f4e00;
      pcVar4 = (char *)FUN_006b0140(0x2685,HINSTANCE_00807618);
      wsprintfA(local_f4,pcVar4,iVar2);
      cLoadingTy::SetState(DAT_00802a58,CASE_2,0,local_f4);
      if (DAT_00802a58 != (cLoadingTy *)0x0) {
        iVar2 = DAT_007f4e00 / 2;
        pcVar4 = (char *)FUN_006b0140(0x268c,HINSTANCE_00807618);
        cLoadingTy::SetProcess(DAT_00802a58,0,pcVar4,iVar2);
        cLoadingTy::SetState(DAT_00802a58,CASE_0,0,(char *)0x0);
      }
    }
    psVar9 = psVar3 + 7;
    iVar2 = 0x100;
    puVar5 = (undefined1 *)(DAT_0080679c + 0x29);
    do {
      *(undefined1 *)((int)psVar9 + -1) = puVar5[1];
      *(undefined1 *)psVar9 = *puVar5;
      *(undefined1 *)((int)psVar9 + 1) = puVar5[-1];
      psVar9 = psVar9 + 2;
      iVar2 = iVar2 + -1;
      puVar5 = puVar5 + 4;
    } while (iVar2 != 0);
    *(undefined1 *)((int)psVar3 + 0x409) = 0xff;
    *(undefined1 *)(psVar3 + 0x205) = 0xff;
    *(undefined1 *)((int)psVar3 + 0x40b) = 0xff;
    puVar6 = FUN_006b04d0(0x4f2);
    if (puVar6 == (undefined4 *)0x0) {
      local_10 = (HoloTy *)0x0;
    }
    else {
      local_10 = (HoloTy *)FUN_006dbca0((int)puVar6);
    }
    this = local_10;
    if (local_10 == (HoloTy *)0x0) {
      RaiseInternalException(-2,g_overwriteContext_007ED77C,s_E____titans_tload_cpp_007a5fdc,0x48e);
    }
    Library::MSVCRT::FUN_0072e150(0xc0000000,0x403ccccc);
    lVar14 = Library::MSVCRT::__ftol();
    iVar2 = (int)lVar14;
    local_30 = iVar2;
    FUN_006dc050(this,0,0,0,iVar2,iVar2,0,0xc0240000,0,0x40240000,0,0xc0240000,0,0x40240000,
                 0x4024000000000000,0x4023ee97865e3540,0);
    *(undefined4 *)((int)&this[5].field_0027 + 2) = 0;
    FUN_006dd790(this,140.204);
    FUN_006dd800(this,219.932);
    *(undefined4 *)((int)&this[5].field_0023 + 2) = 5;
    FUN_006dd610(this,4,0,0x40240000,0,0x40240000);
    local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,100,8,100);
    local_18 = 0;
    if (0 < *(int *)((int)psVar3 + 0x455)) {
      local_14 = (int *)((int)psVar3 + 0x459);
      do {
        puVar6 = (undefined4 *)*local_14;
        if (puVar6 != (undefined4 *)0x0) {
          local_8 = local_c[3];
          local_c[1] = 0;
          do {
            uVar10 = local_c[1];
            if (uVar10 < local_8) {
              piVar7 = (int *)(local_c[2] * uVar10 + local_c[7]);
              local_c[1] = uVar10 + 1;
            }
            else {
              piVar7 = (int *)0x0;
            }
          } while ((piVar7 != (int *)0x0) && (puVar6[10] != *piVar7));
          if (piVar7 == (int *)0x0) {
            local_8 = (uint)*(short *)(puVar6 + 1);
            local_28 = (int)*(short *)((int)puVar6 + 6);
            *(undefined2 *)(puVar6 + 1) = 0;
            *(undefined2 *)((int)puVar6 + 6) = 0;
            local_2c = (int)*(short *)(puVar6 + 2);
            *(ushort *)(puVar6 + 2) = (ushort)*(byte *)(puVar6 + 0x12);
            *puVar6 = *(undefined4 *)((int)&this[6].field_000B + 3);
            *(undefined4 **)((int)&this[6].field_000B + 3) = puVar6;
            *(int *)((int)&this[6].field_0007 + 3) = *(int *)((int)&this[6].field_0007 + 3) + 1;
            FUN_006ddbe0((int)this);
            FUN_006ddd50(this);
            uVar12 = iVar2 * iVar2;
            *(undefined4 *)((int)&this[6].field_000B + 3) = 0;
            *(undefined4 *)((int)&this[6].field_0007 + 3) = 0;
            *(undefined2 *)((int)puVar6 + 6) = (undefined2)local_28;
            *(undefined2 *)(puVar6 + 1) = (undefined2)local_8;
            local_24 = puVar6[10];
            *(undefined2 *)(puVar6 + 2) = (undefined2)local_2c;
            local_20 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar12);
            puVar11 = *(undefined4 **)((int)&this->field_000B + 1);
            puVar13 = local_20;
            for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar13 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar13 = puVar13 + 1;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
              puVar11 = (undefined4 *)((int)puVar11 + 1);
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            puVar6[0x10] = local_20;
            Library::DKW::TBL::FUN_006ae1c0(local_c,&local_24);
            this = local_10;
            iVar2 = local_30;
          }
          else {
            puVar6[0x10] = piVar7[1];
          }
        }
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
        psVar3 = local_1c;
      } while (local_18 < *(int *)((int)local_1c + 0x455));
    }
    if (this != (HoloTy *)0x0) {
      FUN_006dbcf0((int *)this);
      Library::MSVCRT::FUN_0072e2b0(this);
    }
    FUN_006ae110((byte *)local_c);
    thunk_FUN_00428e50(psVar3);
    LandInit(psVar3);
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      cLoadingTy::SetState(DAT_00802a58,CASE_2,0,(char *)0x0);
    }
    g_currentExceptionFrame = local_74.previous;
    return psVar3;
  }
  g_currentExceptionFrame = local_74.previous;
  iVar8 = ReportDebugMessage(s_E____titans_tload_cpp_007a5fdc,0x502,0,iVar2,&DAT_007a4ccc,
                             s_LoadLand_007a5ff8);
  if (iVar8 == 0) {
    RaiseInternalException(iVar2,0,s_E____titans_tload_cpp_007a5fdc,0x503);
    return (short *)0x0;
  }
  pcVar1 = (code *)swi(3);
  psVar3 = (short *)(*pcVar1)();
  return psVar3;
}

