
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_00718500(undefined4 param_1,int param_2,int param_3,byte param_4,byte param_5,byte param_6,
            int param_7)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 unaff_ESI;
  float *pfVar6;
  void *unaff_EDI;
  int iVar7;
  float afStackY_1888 [768];
  float afStackY_c88 [768];
  InternalExceptionFrame local_88;
  float *local_44;
  float local_40;
  float *local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float *pfVar8;
  float *in_stack_ffffffe0;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  undefined1 uVar13;
  
  FUN_0072da40();
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  iVar3 = __setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (param_7 == 0) {
      param_7 = FUN_006aac70(param_2 + param_3);
    }
    iVar3 = param_2 + param_3;
    if (param_2 < iVar3) {
      iVar7 = param_2 * 0xc;
      do {
        pfVar8 = (float *)((int)afStackY_1888 + iVar7);
        FUN_00718130(&stack0xfffffff0,pfVar8);
        in_stack_ffffffe0 = (float *)((int)afStackY_1888 + iVar7);
        iVar3 = 0x7185ab;
        FUN_007184b0(in_stack_ffffffe0,(float *)((int)afStackY_c88 + iVar7));
        iVar7 = iVar7 + 0xc;
      } while (pfVar8 != (float *)0x1);
    }
    if (param_2 < iVar3) {
      local_40 = (float)param_5;
      pfVar8 = afStackY_c88 + param_2 * 3 + 2;
      local_2c = (float)param_6;
      local_3c = afStackY_c88 + param_2 * 3 + 1;
      local_44 = afStackY_c88 + param_2 * 3;
      pfVar6 = afStackY_1888 + param_2 * 3;
      do {
        if (*pfVar6 == 999.0) {
          local_38 = *pfVar6;
        }
        else {
          local_38 = (float)param_4 * *pfVar6 * (float)_DAT_0079b168;
        }
        pfVar11 = (float *)&stack0xffffffe0;
        pfVar10 = &local_38;
        local_34 = local_40 * pfVar6[1] * (float)_DAT_0079b168;
        local_30 = local_2c * pfVar6[2] * (float)_DAT_0079b168;
        fVar9 = 1.0425631e-38;
        FUN_007184b0(pfVar10,pfVar11);
        pfVar4 = (float *)(param_2 + 1);
        iVar7 = param_2 << 0x18;
        uVar13 = (undefined1)param_2;
        fVar12 = ((float)pfVar10 - *pfVar8) * ((float)pfVar10 - *pfVar8) +
                 (fVar9 - *local_3c) * (fVar9 - *local_3c) +
                 ((float)in_stack_ffffffe0 - *local_44) * ((float)in_stack_ffffffe0 - *local_44);
        if ((int)pfVar4 < iVar3) {
          pfVar5 = afStackY_c88 + (int)pfVar4 * 3 + 1;
          do {
            if ((pfVar4 != pfVar11) &&
               (fVar2 = (fVar9 - *pfVar5) * (fVar9 - *pfVar5) +
                        ((float)pfVar10 - pfVar5[1]) * ((float)pfVar10 - pfVar5[1]) +
                        ((float)in_stack_ffffffe0 - pfVar5[-1]) *
                        ((float)in_stack_ffffffe0 - pfVar5[-1]), fVar2 <= fVar12)) {
              iVar7 = (int)pfVar4 << 0x18;
              fVar12 = fVar2;
            }
            uVar13 = (undefined1)((uint)iVar7 >> 0x18);
            pfVar4 = (float *)((int)pfVar4 + 1);
            pfVar5 = pfVar5 + 3;
          } while ((int)pfVar4 < iVar3);
        }
        pfVar6 = pfVar6 + 3;
        *(undefined1 *)((int)pfVar11 + param_7) = uVar13;
      } while ((int)pfVar11 + 1 < iVar3);
    }
    g_currentExceptionFrame = local_88.previous;
    return param_7;
  }
  g_currentExceptionFrame = local_88.previous;
  local_2c = 1.042596e-38;
  iVar7 = ReportDebugMessage(s_E__Ourlib_Palette_cpp_007f0718,0x93,0,iVar3,&DAT_007a4ccc);
  if (iVar7 == 0) {
    RaiseInternalException(iVar3,0,s_E__Ourlib_Palette_cpp_007f0718,0x94);
    return 0;
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

