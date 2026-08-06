#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_optic.cpp
   OpticClassC::InitOptic */

void __thiscall OpticClassC::InitOptic(OpticClassC *this)

{
  double dVar1;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  float10 fVar8;
  longlong lVar9;
  InternalExceptionFrame local_5c;
  float local_18;
  float local_14;
  OpticClassC *local_10;
  ushort *local_c;
  float local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_optic.cpp",0x107,0,iVar3,"%s",
                               "OpticClassC::InitOptic");
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\To_optic.cpp",0x108);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (g_cMf32_00806754 != nullptr) {
    local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,"opticsave",0,0);
  }
  if (local_c == nullptr) {
    DAT_00807400 = DAT_00807568;
    DAT_00807404 = DAT_0080756c;
    DAT_00807408 = DAT_00807570;
    DAT_00807420 = ((float)(int)DAT_00807568 * _DAT_007ac580) / (float)(int)DAT_00807568;
    DAT_0080740c = DAT_00807574;
    DAT_00807410 = DAT_00807568;
    DAT_00807414 = DAT_0080756c;
    DAT_00807418 = DAT_00807570;
    DAT_0080741c = DAT_00807574;
    DAT_0080745d = 0;
    DAT_008073d0 = 0x40a00000;
    _DAT_008073d4 = 0x40a00000;
    DAT_008073d8 = 0;
    DAT_008073dc = 0;
    _DAT_00807430 = 0x40200000;
    _DAT_00807434 = 0x3f800000;
    _DAT_00807438 = 0x3f800000;
    STPiece<0,1>(DAT_0080743c) = 0;
    dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
    fVar8 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    _DAT_00807428 = DAT_00807420;
    ram0x0080743d = 0;
    _DAT_00807441 = 0;
    _DAT_00807445 = 0;
    _DAT_00807449 = 0;
    _DAT_0080744d = 0;
    _DAT_00807451 = 0;
    _DAT_00807455 = 0;
    _DAT_00807459 = 0;
    fVar8 = ((float10)_DAT_00790580 / fVar8) * (float10)DAT_00807574;
    DAT_00807424 = (float)fVar8;
    _DAT_0080742c = (float)fVar8;
    Library::MSVCRT::FUN_0072e150(0xc0000000,0x403ccccc);
    lVar9 = Library::MSVCRT::__ftol();
    ST3DSMAPContext::sub_006DC050
              (g_sT3DSMAPContext_00807598,g_dDXContext_0080759C,DAT_00807568,DAT_0080756c,
               DAT_00807570,DAT_00807574,(double)(_DAT_00807428 * _DAT_00790780),
               (double)(_DAT_00807428 * _DAT_00790784),(double)(_DAT_0080742c * _DAT_00790780),
               (double)(_DAT_0080742c * _DAT_00790784),10.0,9.965999793052674,(int)lVar9);
    ST3DSMAPContext::sub_006DD530(g_sT3DSMAPContext_00807598,&local_18,&local_14,&local_8);
    ST3DSMAPContext::sub_006DD790
              (g_sT3DSMAPContext_00807598,
               ((local_8 - _DAT_0079077c) * (float)_DAT_00790770 - _DAT_0080742c * _DAT_00790784) -
               _DAT_0080742c * _DAT_0079070c);
    ST3DSMAPContext::sub_006DD800
              (g_sT3DSMAPContext_00807598,
               _DAT_0080742c * _DAT_00790784 + local_8 * (float)_DAT_00790770 + (float)_DAT_00790760
              );
    iVar3 = 0;
    pbVar4 = &g_bulkInitializedRecords_008087C7[0].field_0022;
    do {
      if (*pbVar4 == DAT_0080874d) {
        thunk_FUN_004ab470((uint *)g_bulkInitializedRecords_008087C7[iVar3].field_0024,
                           g_bulkInitializedRecords_008087C7[iVar3].field_0028);
        g_currentExceptionFrame = local_5c.previous;
        return;
      }
      pbVar4 = pbVar4 + 0x51;
      iVar3 = iVar3 + 1;
    } while ((int)pbVar4 < 0x808a71);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  puVar6 = local_c;
  puVar7 = (ushort *)&DAT_008073d0;
  for (iVar3 = 99; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
    puVar6 = puVar6 + 2;
    puVar7 = puVar7 + 2;
  }
  *puVar7 = *puVar6;
  *(char *)(puVar7 + 1) = (char)puVar6[1];
  Library::MSVCRT::FUN_0072e150(0xc0000000,0x403ccccc);
  lVar9 = Library::MSVCRT::__ftol();
  ST3DSMAPContext::sub_006DC050
            (g_sT3DSMAPContext_00807598,g_dDXContext_0080759C,DAT_00807568,DAT_0080756c,DAT_00807570
             ,DAT_00807574,(double)(DAT_00807420 * _DAT_00790780),
             (double)(DAT_00807420 * _DAT_00790784),(double)(DAT_00807424 * _DAT_00790780),
             (double)(DAT_00807424 * _DAT_00790784),10.0,9.965999793052674,(int)lVar9);
  thunk_FUN_004a9b60(DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c);
  thunk_FUN_004a8f20(1);
  DAT_0080674c = 2;
  DAT_0080745d = 0;
  cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_c);
  g_currentExceptionFrame = local_5c.previous;
  return;
}

