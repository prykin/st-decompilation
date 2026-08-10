#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=43;
   incoming_edx_uses=0; incoming_stack_parameter_uses=36; direct_non_thunk_callers=7;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004A8FC0 -> 006DC050 @ 004A90C9; data at 00807598 | 004A8FC0 -> 006DC050 @ 004A9301;
   data at 00807598
   [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=void
   __thiscall sub_006DC050(ST3DSMAPContext * param_1, undefined4 param_2, uint param_3, undefined4
   param_4, int param_5, int param_6, double param_7, double param_8, double param_9, double
   param_10, double param_11, double param_12, int param_13) Evidence: x87 double-width accesses or
   exact split stores into an owner field independently typed or consumed as double prove physical
   EBP slot boundaries; merged_slots={10=1, 11=1}; sites=incoming qword stored into
   /SubmarineTitans/Recovered/LibraryContexts/ST3DSMAPContext+0xc8 and independently consumed as
   double; sites=006DC0A7 stores incoming qword half 0, 006DC0B0 stores incoming qword half 1,
   006DC140 reads owner field as double | 006DC23E forwards adjacent incoming dwords to
   ST3DSMAPContext::sub_006DBD20 parameter stack slot +0x14 typed /double | 006DC23E forwards
   adjacent incoming dwords to ST3DSMAPContext::sub_006DBD20 parameter stack slot +0x24 typed
   /double | incoming qword stored into
   /SubmarineTitans/Recovered/LibraryContexts/ST3DSMAPContext+0xd0 and independently consumed as
   double; sites=006DC0B9 stores incoming qword half 0, 006DC0C2 stores incoming qword half 1,
   006DC158 reads owner field as double, 006DC243 reads owner field as double, 006DC264 reads owner
   field as double, 006DC2BA reads owner field as double, 006DC2D2 reads owner field as double |
   006DC23E forwards adjacent incoming dwords to ST3DSMAPContext::sub_006DBD20 parameter stack slot
   +0x1c typed /double | 006DC23E forwards adjacent incoming dwords to ST3DSMAPContext::sub_006DBD20
   parameter stack slot +0x2c typed /double */

void __thiscall
ST3DSMAPContext::sub_006DC050
          (ST3DSMAPContext *param_1,DDXContext *param_2,uint param_3,undefined4 param_4,int param_5,
          int param_6,double param_7,double param_8,double param_9,double param_10,double param_11,
          double param_12,int param_13)

{
  double dVar1;
  double dVar2;
  undefined4 *puVar3;
  AnonShape_006DBCA0_EF06575F *pAVar4;
  AnonShape_006DBCA0_EF06575F *pAVar5;
  longlong lVar6;

  puVar3 = Library::DKW::LIB::MemRealloc(param_1->field_0350,0x658);
  pAVar5 = nullptr;
  param_1->field_0350 = puVar3;
  *puVar3 = 0;
  *(undefined4 *)((int)param_1->field_0350 + 4) = 0;
  puVar3 = Library::DKW::LIB::MemRealloc(param_1->field_0354,0x658);
  param_1->field_0354 = puVar3;
  *puVar3 = 0;
  *(undefined4 *)((int)param_1->field_0354 + 4) = 0;
  param_1->field_00C8 = param_11;
  param_1->field_00D0 = param_12;
  param_1->field_0128 = 0;
  param_1->field_041C = 0;
  param_1->field_0124 = 0;
  sub_006DBD20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  if (0 < param_13) {
    pAVar4 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar4 != nullptr) {
      pAVar5 = FUN_006dbca0(pAVar4);
    }
    param_1->field_0358 = pAVar5;
    param_1->field_0380 = param_13;
    param_1->field_0368 = param_1->field_00C8 / (double)param_13;
    lVar6 = Library::MSVCRT::__ftol();
    param_1->field_0370 = (int)lVar6;
    param_1->field_0360 = (double)((float10)(int)lVar6 * param_1->field_0368);
    *(double *)&pAVar5->field_0xc8 = param_11;
    *(double *)(param_1->field_0358 + 0xd0) = param_12;
    *(undefined4 *)(param_1->field_0358 + 0x128) = 0;
    *(undefined4 *)(param_1->field_0358 + 0x41c) = 0;
    *(undefined4 *)(param_1->field_0358 + 0x124) = 1;
    dVar1 = param_1->field_0360 * _DAT_007901c0;
    dVar2 = param_1->field_0360 * _DAT_0079df58;
    sub_006DBD20((ST3DSMAPContext *)param_1->field_0358,nullptr,0,0,param_1->field_0370,
                 param_1->field_0370,dVar2,dVar1,dVar2,dVar1);
    sub_006DD790((ST3DSMAPContext *)param_1->field_0358,
                 (float)((float10)_DAT_0079df88 -
                        (float10)param_1->field_00D0 * (float10)_DAT_0079df90));
    sub_006DD800((ST3DSMAPContext *)param_1->field_0358,
                 (float)((float10)param_1->field_00D0 + (float10)param_1->field_00D0 +
                        (float10)_DAT_0079df88));
    *(undefined4 *)(param_1->field_0358 + 0x128) = 0x70;
    *(int *)(param_1->field_0358 + 0x380) = param_13;
    *(undefined4 *)(param_1->field_0358 + 0x370) = param_1->field_0370;
    dVar1 = param_1->field_00D0 * _DAT_0079df80;
    param_1->field_0384 = 0x20;
    param_1->field_0394 = dVar1;
    dVar2 = param_1->field_00D0 * _DAT_0079df90;
    param_1->field_039C = dVar2;
    param_1->field_03A4 = dVar2 - dVar1;
    *(undefined4 *)(param_1->field_0358 + 900) = 0x20;
  }
  return;
}

