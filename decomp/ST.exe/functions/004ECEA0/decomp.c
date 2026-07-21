
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_vqb.cpp
   Diagnostic line evidence: 63 | 88 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004ecea0(AnonShape_004D9C80_80F657D3 *param_1)

{
  undefined4 uVar1;
  AnonShape_004AB810_8E5693D5 *pAVar2;
  STT3DSprC *this;
  int iVar3;
  uint uVar4;
  uint uVar5;

  if (param_1->field_05FF == 0) {
    pAVar2 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (pAVar2 == (AnonShape_004AB810_8E5693D5 *)0x0) {
      this = (STT3DSprC *)0x0;
    }
    else {
      this = (STT3DSprC *)thunk_FUN_004ab810(pAVar2);
    }
    param_1->field_05FF = this;
    iVar3 = STT3DSprC::Init(this,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_vqb_cpp_007c1670,0x3f);
    }
  }
  switch(param_1->field_0245) {
  case 0:
    param_1->field_0261 = 0;
    iVar3 = *(int *)&param_1->field_0x4d0;
    if (iVar3 == 4) {
      *(undefined4 *)&param_1->field_0x4d0 = 5;
      break;
    }
    if (iVar3 != 5) {
      if (iVar3 == 1) {
        param_1->field_0261 = 1;
      }
      break;
    }
  case 1:
  case 6:
    *(undefined4 *)&param_1->field_0x4d0 = 0;
    break;
  case 5:
    switch(*(undefined4 *)&param_1->field_0x4d0) {
    case 1:
      *(undefined4 *)&param_1->field_0x4d0 = 3;
      break;
    case 3:
      *(undefined4 *)&param_1->field_0x4d0 = 4;
      break;
    case 4:
      *(undefined4 *)&param_1->field_0x4d0 = 5;
      break;
    case 5:
      *(undefined4 *)&param_1->field_0x4d0 = 0;
    }
    param_1->field_0261 = 0;
    param_1->field_0265 = param_1->field_0265 & 0xfffffffd;
    param_1->field_026D = 0;
  }
  if (*(int *)&param_1->field_0x4d0 == 4) {
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_05FF,0xe,DAT_00806774,s_vacmine_007d1f38,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_vqb_cpp_007c1670,0x58);
    }
    thunk_FUN_004ad5e0(param_1->field_05FF);
    uVar5 = 10;
    iVar3 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
    uVar4 = thunk_FUN_004ad650(param_1->field_05FF);
    FUN_006ea340(param_1->field_0211,uVar4,iVar3,uVar5);
    thunk_FUN_004abce0((void *)param_1->field_05FF,0xe,0,0,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\x0e',0);
    STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xe,PTR_00802a38->field_00E4);
    *(undefined4 *)&param_1->field_0x4d4 = 0;
    uVar1 = PTR_00802a38->field_00E4;
    *(undefined4 *)&param_1->field_0x4dc = 1;
    iVar3 = *(int *)&param_1->field_0x4d0 * 0x18;
    *(undefined4 *)&param_1->field_0x4d8 = uVar1;
    thunk_FUN_004ad3c0((void *)param_1->field_05FF,
                       (float)(*(int *)(&DAT_0079aac0 + iVar3) + (int)param_1->field_0041) *
                       _DAT_007904f8 * _DAT_007904f0,
                       (float)(*(int *)(&DAT_0079aac4 + iVar3) + (int)param_1->field_0043) *
                       _DAT_007904f8 * _DAT_007904f0,
                       (float)(*(int *)(&DAT_0079aac8 + iVar3) + (int)param_1->field_0045) *
                       _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    thunk_FUN_004ad460((void *)param_1->field_05FF,1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0x90))(3,0x42a);
    return 0;
  }
  thunk_FUN_004ad430(param_1->field_05FF);
  return 0;
}

