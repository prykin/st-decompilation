
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00514BC0_param_1Enum. Cases:
   CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247;CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251
    */

void __thiscall FUN_00514bc0(void *this,Global_sub_00514BC0_param_1Enum param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  uint local_c;

  bVar5 = false;
  local_c = 0;
  if (*(int *)sizeHelp_exref == 0) {
    return;
  }
LAB_00514be2:
  iVar6 = local_c * 0x11 + *(int *)((int)this + 0x1c7);
  cVar1 = *(char *)(iVar6 + 8);
  switch(cVar1) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\v':
    if ((*(Global_sub_00514BC0_param_1Enum *)(iVar6 + 9) == param_1) &&
       ((cVar1 == '\x03' || (*(int *)(iVar6 + 0xd) == param_2)))) {
      bVar5 = true;
      goto LAB_00514d04;
    }
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
    break;
  case '\f':
    switch(param_1) {
    case CASE_F2:
    case CASE_F3:
    case CASE_F4:
    case CASE_F5:
      iVar2 = *(int *)(iVar6 + 9);
      if ((((iVar2 != 0xf2) && (iVar2 != 0xf3)) && (iVar2 != 0xf4)) && (iVar2 != 0xf5))
      goto cf_common_join_00514CF6;
      bVar5 = true;
      break;
    case CASE_F6:
    case CASE_F7:
      if ((*(int *)(iVar6 + 9) != 0xf6) && (*(int *)(iVar6 + 9) != 0xf7))
      goto cf_common_join_00514CF6;
      bVar5 = true;
      break;
    case CASE_F8:
    case CASE_F9:
      if ((*(int *)(iVar6 + 9) != 0xf8) && (*(int *)(iVar6 + 9) != 0xf9))
      goto cf_common_join_00514CF6;
      bVar5 = true;
      break;
    case CASE_FA:
    case CASE_FB:
      if ((*(int *)(iVar6 + 9) != 0xfa) && (*(int *)(iVar6 + 9) != 0xfb))
      goto cf_common_join_00514CF6;
      bVar5 = true;
      break;
    default:
      if (*(Global_sub_00514BC0_param_1Enum *)(iVar6 + 9) != param_1) goto cf_common_join_00514CF6;
      bVar5 = true;
    }
    goto LAB_00514d04;
  default:
    goto switchD_00514c13_default;
  }
cf_common_join_00514CF6:
switchD_00514c13_default:
  if (bVar5) {
LAB_00514d04:
    uVar3 = *(uint *)(iVar6 + 0xd);
    pvVar4 = *(void **)(iVar6 + 9);
    switch(cVar1) {
    case '\x01':
      HelpPanelTy::RCProc(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\x02':
      HelpPanelTy::ObjProc(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\x03':
      HelpPanelTy::SubProc(this,(int)pvVar4,'\0');
      break;
    case '\x04':
      HelpPanelTy::ArmProc(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\x05':
      HelpPanelTy::TechProc(this,(uint)pvVar4,(byte)uVar3,'\0');
      break;
    case '\x06':
      HelpPanelTy::TTreeProc(this,(uint)pvVar4,'\0');
      break;
    case '\a':
      HelpPanelTy::MObjProc(this);
      break;
    case '\b':
      HelpPanelTy::TipProc(this,pvVar4,uVar3,'\0');
      break;
    case '\n':
      HelpPanelTy::IndexBut(this);
      break;
    case '\v':
      HelpPanelTy::SpecProc(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\f':
      HelpPanelTy::NatProc(this,(int)pvVar4,'\0');
    }
    iVar6 = *(int *)((int)this + 0x1c7) + local_c * 0x11;
    HelpPanelTy::LinkAct(this,*(int *)(iVar6 + 9),*(int *)(iVar6 + 0xd));
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    HelpPanelTy::PutToSHlp(this,unaff_EDI);
    local_c = *(uint *)sizeHelp_exref;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x18))(1);
  }
  local_c = local_c + 1;
  if (*(uint *)sizeHelp_exref <= local_c) {
    return;
  }
  goto LAB_00514be2;
}

