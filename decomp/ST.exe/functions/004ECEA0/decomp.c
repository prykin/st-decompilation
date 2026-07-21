
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_vqb.cpp
   Diagnostic line evidence: 63 | 88 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004ecea0(AnonShape_004D9C80_80F657D3 *param_1)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  STT3DSprC *this;
  int iVar2;
  uint uVar3;
  uint uVar4;

  if (param_1->field_05FF == 0) {
    pAVar1 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (pAVar1 == (AnonShape_004AB810_8E5693D5 *)0x0) {
      this = (STT3DSprC *)0x0;
    }
    else {
      this = (STT3DSprC *)thunk_FUN_004ab810(pAVar1);
    }
    param_1->field_05FF = this;
    iVar2 = STT3DSprC::Init(this,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_vqb.cpp",0x3f);
    }
  }
  switch(param_1->field_0245) {
  case 0:
    param_1->field_0261 = 0;
    iVar2 = *(int *)&param_1->field_0x4d0;
    if (iVar2 == 4) {
      *(undefined4 *)&param_1->field_0x4d0 = 5;
      break;
    }
    if (iVar2 != 5) {
      if (iVar2 == 1) {
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
    iVar2 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_05FF,0xe,DAT_00806774,"vacmine",0x1d);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_vqb.cpp",0x58);
    }
    thunk_FUN_004ad5e0(param_1->field_05FF);
    uVar4 = 10;
    iVar2 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
    uVar3 = thunk_FUN_004ad650(param_1->field_05FF);
    FUN_006ea340(param_1->field_0211,uVar3,iVar2,uVar4);
    thunk_FUN_004abce0((void *)param_1->field_05FF,0xe,0,0,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\x0e',0);
    STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xe,PTR_00802a38->field_00E4);
    *(undefined4 *)&param_1->field_0x4d4 = 0;
    uVar3 = PTR_00802a38->field_00E4;
    *(undefined4 *)&param_1->field_0x4dc = 1;
    iVar2 = *(int *)&param_1->field_0x4d0 * 0x18;
    *(uint *)&param_1->field_0x4d8 = uVar3;
    thunk_FUN_004ad3c0((void *)param_1->field_05FF,
                       (float)(*(int *)(&DAT_0079aac0 + iVar2) + (int)param_1->field_0041) *
                       _DAT_007904f8 * _DAT_007904f0,
                       (float)(*(int *)(&DAT_0079aac4 + iVar2) + (int)param_1->field_0043) *
                       _DAT_007904f8 * _DAT_007904f0,
                       (float)(*(int *)(&DAT_0079aac8 + iVar2) + (int)param_1->field_0045) *
                       _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    thunk_FUN_004ad460((void *)param_1->field_05FF,1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0x90))(3,0x42a);
    return 0;
  }
  thunk_FUN_004ad430(param_1->field_05FF);
  return 0;
}

