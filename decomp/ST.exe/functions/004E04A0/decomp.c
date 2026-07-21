
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_rc.cpp
   Diagnostic line evidence: 195 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004e04a0(AnonShape_004E04A0_3A5B2D2E *param_1)

{
  undefined1 *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  char *local_8;

  uVar3 = 0;
  iVar2 = 0;
  iVar1 = param_1->field_05AC;
  local_8 = (char *)0x0;
  switch(iVar1) {
  case 0x38:
  case 0x39:
  case 0x4f:
  case 0x5e:
    switch(param_1->field_04E8) {
    case 0:
switchD_004e04e5_caseD_0:
      STT3DSprC::StopShow((STT3DSprC *)&param_1->field_0x1d5,0xb);
      break;
    case 1:
      if (iVar1 == 0x5e) {
        local_8 = "corisi_lid";
      }
      else {
LAB_004e05d3:
        local_8 = "mine_ani1_lid";
      }
      break;
    case 2:
      switch(iVar1) {
      case 0x38:
        local_8 = "mine_ani1_gld";
        break;
      case 0x39:
        local_8 = "mine_ani1_cor";
        break;
      case 0x4f:
        local_8 = "mine_ani1_met";
        break;
      case 0x5e:
        local_8 = "corisi_ani1_cor";
      }
      break;
    case 3:
      if (iVar1 != 0x5e) goto LAB_004e05d3;
      local_8 = "corisi_lid";
    }
    break;
  case 0x3b:
  case 0x52:
    switch(param_1->field_04E8) {
    case 0:
      goto switchD_004e04e5_caseD_0;
    case 1:
    case 3:
      local_8 = "depo_ani1_lid";
      break;
    case 2:
      iVar1 = param_1->field_04DC;
      if (iVar1 == 0xdc) {
        local_8 = "depo_ani1_gld";
      }
      else if (iVar1 == 0xdd) {
        local_8 = "depo_ani1_cor";
      }
      else if (iVar1 == 0xde) {
        local_8 = "depo_ani1_met";
      }
    }
    break;
  case 0x60:
    switch(param_1->field_04E8) {
    case 0:
      goto switchD_004e04e5_caseD_0;
    case 1:
    case 3:
      local_8 = "silo_ani1_lid";
      break;
    case 2:
      local_8 = "silo_ani1_cor";
    }
  }
  if (param_1->field_04E8 == 0) {
    return 0;
  }
  this = &param_1->field_0x1d5;
  iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this,0xb,DAT_0080678c,local_8,0x1d);
  if (iVar1 != 0) {
    RaiseInternalException
              (iVar1,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_rc.cpp",0xc3);
  }
  iVar1 = param_1->field_04E8;
  if (iVar1 == 1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = **(int **)(param_1->field_01F5 + 0x18c);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar3 = **(int **)(param_1->field_01F5 + 0x18c) - 1;
        iVar2 = 0;
      }
      goto cf_common_exit_004E068C;
    }
    iVar1 = param_1->field_05AC;
    if (((iVar1 != 0x3b) && (iVar1 != 0x60)) && (iVar1 != 0x52)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = **(int **)(param_1->field_01F5 + 0x18c) - 1;
      iVar2 = 0;
      goto cf_common_exit_004E068C;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = **(int **)(param_1->field_01F5 + 0x18c);
  }
  uVar3 = 0;
  iVar2 = iVar2 + -1;
cf_common_exit_004E068C:
  thunk_FUN_004abce0(this,0xb,uVar3,iVar2,'\0');
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\v',uVar3);
  STT3DSprC::StartShow((STT3DSprC *)this,0xb,PTR_00802a38->field_00E4);
  return 0;
}

