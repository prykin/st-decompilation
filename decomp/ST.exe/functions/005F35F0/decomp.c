#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005F35F0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=21; incoming_edx_uses=0; calls=4;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=4

   [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=2; incoming_this_accesses=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STBHEShellC::sub_005F35F0(STBHEShellC *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  InternalExceptionFrame local_54;
  uint local_10;
  char **local_c;
  uint local_8;

  local_10 = 0;
  local_c = &PTR_s_adcbo_007ce5a0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = (uint)this;

  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  uVar2 = local_8;
  if (iVar3 == 0) {
    if (param_1 == 1) {
      /* ST_CALLSITE[005F365D]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806774,CASE_1D,local_c[STField<int>(local_8,0x87)],0xffffffff,0,1,0,
                          nullptr);
      puVar1 = (uint *)(uVar2 + 0x8f);

      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,(int *)puVar1,1,0,STField<uint>(puVar4,9),
                 STField<uint>(puVar4,0xd),0x5a,0x45,0);

      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)puVar4,STField<int>(puVar4,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,STField<uint>(uVar2,0xAB));
      *(ushort **)(uVar2 + 0x171) = puVar4;
      if (DAT_00807326 != '\0') {
        Library::Ourlib::ST3DSMAP::SprSetShadow(g_sT3DSMAPContext_00807598,*puVar1,0,0x403170,uVar2);
      }
    }
    else {
      puVar1 = (uint *)(local_8 + 0x8f);
      if (-1 < (int)STField<uint>(local_8,0x8F)) {
        Library::Ourlib::ST3DSMAP::SprSetShadow
                  (g_sT3DSMAPContext_00807598,STField<uint>(local_8,0x8F),0,0,local_8);
        Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,*puVar1);
      }
      /* ST_CALLSITE[005F3733]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806774,CASE_1D,"expl_i13",0xffffffff,0,1,0,
                          nullptr);

      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,(int *)puVar1,3,0,STField<uint>(puVar4,9),
                 STField<uint>(puVar4,0xd),0x5a,0x45,0);

      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)puVar4,STField<int>(puVar4,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,STField<uint>(uVar2,0xAB));
      /* ST_CALLSITE[005F37A2]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806764,CASE_1D,"expl_s0",0xffffffff,0,1,0,nullptr
                         );

      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar1,2,*(int *)puVar4,STField<int>(puVar4,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*puVar1,2,STField<uint>(uVar2,0xC0));
      ST3DSMAPContext::sub_006E9D40(g_sT3DSMAPContext_00807598,(uint *)*puVar1,2);
    }
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,STField<uint>(uVar2,0x8F),
               (float)STField<int>(uVar2,0x93) * _DAT_007904f8 * _DAT_007904f0,
               (float)STField<int>(uVar2,0x97) * _DAT_007904f8 * _DAT_007904f0,
               (float)STField<int>(uVar2,0x9B) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,STField<uint>(uVar2,0x8F),0);
    STField<undefined1>(uVar2,0xC4) = 1;
    g_currentExceptionFrame = local_54.previous;
    return 1;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_10;
}

