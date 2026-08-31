#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_tls.cpp

// 004EAA20 TLOBaseTy::sub_004EAA20
#line 4 "decomp/ST.exe/functions/004EAA20/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_tls.cpp
   Diagnostic line evidence: 86 | 99 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

undefined4 __fastcall st::fn_004EAA20(RecoveredRecordView_004D9C80_63C53606 *param_1)

{
  STT3DSprC *pSVar1;
  int iVar3;
  STT3DSprC *iVar2;
  int uVar3;
  uint uVar4;
  CHAR local_108 [256];
  int local_8;

  if (param_1->field_05FF == 0) {
    /* ST_CALLSITE[004EAA39]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__cdecl;pointer:/STT3DSprC;/uint */
    pSVar1 = st::pointer_boundary_cast<STT3DSprC *>(st::fn_0072E530(0x40));
    if (pSVar1 == nullptr) {
      pSVar1 = nullptr;
    }
    else {
      /* ST_CALLSITE[004EAA47]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
      pSVar1 = st::fn_00401316(pSVar1);
    }
    param_1->field_05FF = st::machine_word_boundary_cast<undefined4>(pSVar1);
    /* ST_CALLSITE[004EAA70]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    iVar3 = st::fn_0040537B(pSVar1,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_tls.cpp"),0x56);
    }
  }
  switch(param_1->field_0245) {
  case 0:
    if (*(int *)&param_1->field_0x4d0 == 3) {
      *(undefined4 *)&param_1->field_0x4d0 = 0;
    }
    if (*(int *)&param_1->field_0x4d0 == 1) {
      param_1->field_0261 = 1;
    }
    break;
  case 1:
  case 6:
    *(undefined4 *)&param_1->field_0x4d0 = 0;
    break;
  case 5:
    *(undefined4 *)&param_1->field_0x4d0 = 3;
    param_1->field_0261 = 0;
    param_1->field_0265 = param_1->field_0265 & 0xfffffffd;
    param_1->field_026D = 0;
    /* ST_CALLSITE[004EAAFC]: CALL dword ptr [EAX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<void>(param_1, 0x90, 3, 0x279);
  }
  if ((*(int *)&param_1->field_0x4d0 != 1) && (*(int *)&param_1->field_0x4d0 != 3)) {
    /* ST_CALLSITE[004EAB18]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
    st::fn_00403D0F((STT3DSprC *)param_1->field_05FF);
    return 0;
  }
  /* ST_CALLSITE[004EAB36]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(local_108),st::mutable_c_string("%s"),"trmmine");
  /* ST_CALLSITE[004EAB56]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar3 = st::fn_00404183
                    ((STT3DSprC *)param_1->field_05FF,0xe,PTR_00806774,reinterpret_cast<char *>(local_108),CASE_1D);
  if (iVar3 != 0) {
    st::fn_006A5E40
              (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_tls.cpp"),99);
  }
  uVar4 = 10;
  /* ST_CALLSITE[004EAB7B]: CALL 0x004052cc; direct=004052CC thunk_FUN_004ad650; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__fastcall;pointer:/STT3DSprC;pointer:/STT3DSprC */
  iVar2 = st::pointer_boundary_cast<STT3DSprC *>(st::fn_004052CC(reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5)));

  uVar3 = st::fn_004052CC((STT3DSprC *)param_1->field_05FF);
  st::fn_006EA340(param_1->field_0211,uVar3,(int)iVar2,uVar4);

  st::fn_00401EBA((void *)param_1->field_05FF,0xe,0x28,
                     (-st::storage_bit_cast<uint>(static_cast<uint32_t>(*(int *)&param_1->field_0x4d0 != 3)) & 0xffffffed) + 0x3b,'\0');
  /* ST_CALLSITE[004EABC6]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\x0e',0x28);
  /* ST_CALLSITE[004EABDF]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  *(undefined4 *)&param_1->field_0x4d4 = 0;
  uVar4 = g_playSystem_00802A38->field_00E4;
  *(undefined4 *)&param_1->field_0x4dc = 1;
  *(uint *)&param_1->field_0x4d8 = uVar4;
  iVar3 = *(int *)&param_1->field_0x4d0 * 0x18;
  local_8 = *(int *)(&DAT_0079aa18 + iVar3) + (int)param_1->field_0041;
  /* ST_CALLSITE[004EAC84]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  st::fn_004045D9
            ((STT3DSprC *)param_1->field_05FF,(float)local_8 * _DAT_007904f8 * _DAT_007904f0,
             (float)(*(int *)(&DAT_0079aa1c + iVar3) + (int)param_1->field_0043) * _DAT_007904f8 *
             _DAT_007904f0,
             (float)(*(int *)(&DAT_0079aa20 + iVar3) + (int)param_1->field_0045) * _DAT_007904f8 *
             _DAT_007904f0 + _DAT_007904fc);
  st::fn_00402982((void *)param_1->field_05FF,1);
  if (*(int *)&param_1->field_0x4d0 == 3) {
    /* ST_CALLSITE[004EACAA]: CALL dword ptr [EAX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<undefined4>(param_1, 0x90, 3, 0x279);
  }
  return 0;
}
