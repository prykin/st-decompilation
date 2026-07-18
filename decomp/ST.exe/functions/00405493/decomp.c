
char * __cdecl thunk_FUN_00529590(undefined1 param_1,int param_2)

{
  char *pcVar1;
  
  switch(param_1) {
  case 1:
    if (DAT_0080874e == '\x03') {
      return s_BUT_SISTOP_007c5200;
    }
    switch(param_2) {
    case 9:
      return s_BUT_STOPWORM_007c51f0;
    default:
      return s_BUT_DEFENCE_007c51bc;
    case 0x15:
      return s_BUT_STOPDOLPH_007c51e0;
    case 0x36:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x42:
    case 0x46:
    case 0x47:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x51:
      return s_BUT_STOPCONSTR_007c51cc;
    }
  case 2:
    if (DAT_0080874e == '\x03') {
      return s_BUT_SIMOVE_007c51ac;
    }
    switch(param_2) {
    case 9:
      return s_BUT_MOVEWORM_007c519c;
    case 0x15:
      return s_BUT_MOVEDOLPH_007c518c;
    case 0x36:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x42:
    case 0x46:
    case 0x47:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x51:
      return s_BUT_MOVECONSTR_007c5178;
    }
  default:
    pcVar1 = s_BUT_MOVEBOAT_007c4aa4;
    break;
  case 3:
    if (DAT_0080874e == '\x03') {
      return s_BUT_SIATTACK_007c5168;
    }
    if (param_2 != 9) {
      return s_BUT_ATTACK_007c5158;
    }
    return s_BUT_ATTACKWORM_007c5144;
  case 4:
    return s_BUT_RETREPAIR_007c5134;
  case 5:
    pcVar1 = s_BUT_SIGUARD_007c5124;
    if (DAT_0080874e != '\x03') {
      return s_BUT_GUARD_007c5118;
    }
    break;
  case 6:
    pcVar1 = s_BUT_SIPATROL_007c5108;
    if (DAT_0080874e != '\x03') {
      return s_BUT_PATROL_007c50f8;
    }
    break;
  case 7:
    pcVar1 = s_BUT_SICAPTURE_007c50e8;
    if (DAT_0080874e != '\x03') {
      return s_BUT_CAPTURE_007c50d8;
    }
    break;
  case 8:
    if (param_2 == 5) {
      return s_BUT_SETMINE_007c5088;
    }
    if (param_2 != 0xb) {
      if (param_2 != 0x11) {
        return s_BUT_ZAPADLO_007c50b8;
      }
      return s_BUT_SETSNARE_007c50a8;
    }
    return s_BUT_SETLIGHT_007c5098;
  case 9:
    return s_BUT_ATTACKDC_007c50c8;
  case 10:
    pcVar1 = s_BUT_SIPARSHELL_007c5074;
    if (DAT_0080874e != '\x03') {
      return s_BUT_ATTACKRAYS_007c5060;
    }
    break;
  case 0xb:
    return s_BUT_PHANTOMON_007c5050;
  case 0xc:
    return s_BUT_PHANTOMOFF_007c503c;
  case 0xd:
    return s_BUT_REPSUBM_007c502c;
  case 0xe:
    pcVar1 = s_BUT_SIBUILD_007c501c;
    if (DAT_0080874e != '\x03') {
      return s_BUT_BUILD_007c5010;
    }
    break;
  case 0xf:
    return s_BUT_COMPLETEBUILD_007c4ff8;
  case 0x10:
    return s_BUT_DISMANTLING_007c4fe4;
  case 0x11:
    pcVar1 = s_BUT_SIRCLOAD_007c4fd4;
    if (DAT_0080874e != '\x03') {
      return s_BUT_RCLOAD_007c4fc4;
    }
    break;
  case 0x12:
    pcVar1 = s_BUT_SIRCUNLOAD_007c4fb0;
    if (DAT_0080874e != '\x03') {
      return s_BUT_RCUNLOAD_007c4fa0;
    }
    break;
  case 0x13:
    pcVar1 = s_BUT_SIREPLOAD_007c4f90;
    if (DAT_0080874e != '\x03') {
      return s_BUT_REPLOAD_007c4f80;
    }
    break;
  case 0x14:
    pcVar1 = s_BUT_SIREPUNLOAD_007c4f6c;
    if (DAT_0080874e != '\x03') {
      return s_BUT_REPUNLOAD_007c4f5c;
    }
    break;
  case 0x15:
    return s_BUT_RISE_007c4f50;
  case 0x16:
    return s_BUT_FALL_007c4f44;
  case 0x17:
    return s_BUT_TELEOBJ_007c4f34;
  case 0x18:
    pcVar1 = s_BUT_SITELEPORT_007c4f20;
    if (DAT_0080874e != '\x03') goto switchD_005295a5_caseD_4d;
    break;
  case 0x19:
    return s_BUT_ATTACKLBOMB_007c4efc;
  case 0x1a:
    return s_BUT_ATTACKTLS_007c4eec;
  case 0x1b:
    return s_BUT_BLDMISSILE_007c4ed8;
  case 0x1c:
    return s_BUT_BLDLASBOMB_007c4ec4;
  case 0x1d:
    return s_BUT_BLDBOAT_007c4eb4;
  case 0x1e:
    return s_BUT_BLDWORM_007c4ea4;
  case 0x1f:
    return s_BUT_BLDDOLPH_007c4e94;
  case 0x20:
    return s_BUT_SELFREP_007c4e84;
  case 0x21:
    return s_BUT_RESEARCH_007c4e74;
  case 0x22:
    return s_BUT_TRGOLD_007c4e64;
  case 0x23:
    return s_BUT_ACTPSIHO_007c4e54;
  case 0x24:
    return s_BUT_ACTISO_007c4e44;
  case 0x25:
    return s_BUT_STOPISO_007c4e34;
  case 0x26:
    return s_BUT_SETDESTINATION_007c4e1c;
  case 0x27:
    pcVar1 = s_BUT_SIDISSASSEMBLE_007c4e04;
    if (DAT_0080874e != '\x03') {
      return s_BUT_BREAKBUILD_007c4df0;
    }
    break;
  case 0x28:
    return s_BUT_CRACKINFO_007c4de0;
  case 0x29:
    return s_BUT_GETINFO_007c4dd0;
  case 0x2a:
    return s_BUT_VIEWZONE_007c4dc0;
  case 0x2b:
    pcVar1 = s_BUT_SIATTACKZONE_007c4dac;
    if (DAT_0080874e != '\x03') {
      return s_BUT_ATTACKZONE_007c4d98;
    }
    break;
  case 0x2c:
    pcVar1 = s_BUT_SIGUARDZONE_007c4d84;
    if (DAT_0080874e != '\x03') {
      return s_BUT_GUARDZONE_007c4d74;
    }
    break;
  case 0x2d:
    pcVar1 = s_BUT_SISCOUT_007c4d64;
    if (DAT_0080874e != '\x03') {
      return s_BUT_SCOUT_007c4d58;
    }
    break;
  case 0x2e:
    return s_BUT_BREAKAWAY_007c4d48;
  case 0x2f:
    pcVar1 = s_BUT_SIAI_007c4d3c;
    if (DAT_0080874e != '\x03') {
      return s_BUT_BEHAVIOUR_007c4d2c;
    }
    break;
  case 0x30:
    return s_BUT_TRADE_007c4d20;
  case 0x31:
    return s_BUT_CONTAINER_007c4d10;
  case 0x32:
switchD_005295a5_caseD_32:
    return s_BUT_BREAK_007c4ab4;
  case 0x33:
    return s_BUT_REPLINISH_007c4d00;
  case 0x34:
    return s_BUT_ATTACKTRG_007c4cf0;
  case 0x35:
    return s_BUT_ENGACTIVEMODE_007c4cd8;
  case 0x36:
    return s_BUT_SATELLITE_007c4cc8;
  case 0x37:
    return s_BUT_SIDESTINATION_007c4cb0;
  case 0x38:
    return s_BUT_IFIELDOFF1_007c4c9c;
  case 0x39:
    return s_BUT_SICRACKINFO_007c4c88;
  case 0x3a:
    return s_BUT_TODIMENSION_007c4c74;
  case 0x3b:
    return s_BUT_GIVEENERGY_007c4c60;
  case 0x3c:
    return s_BUT_PRIORESTORATION_007c4c48;
  case 0x3d:
    return s_BUT_SIBUILDSUB_007c4c34;
  case 0x3e:
    return s_BUT_CREATEGATE_007c4c20;
  case 0x3f:
    return s_BUT_RCTOENERGY_007c4c0c;
  case 0x40:
    return s_BUT_SIGIVERC_007c4bfc;
  case 0x41:
    return s_BUT_SIRESEARCH_007c4be8;
  case 0x42:
    return s_BUT_IFIELDON_007c4bd8;
  case 0x43:
    return s_BUT_SIVIEWZONE_007c4bc4;
  case 0x44:
    return s_BUT_BUILDLAB_007c4bb4;
  case 0x45:
    return s_BUT_IFIELDOFF2_007c4ba0;
  case 0x46:
    return s_BUT_SIGETINFO_007c4b90;
  case 0x47:
    return s_BUT_FROMDIMENSION_007c4b78;
  case 0x48:
    return s_BUT_SIREPLINISH_007c4b64;
  case 0x49:
    return s_BUT_SINENGSHIELD_007c4b50;
  case 0x4a:
    return s_BUT_SIREPLPRIOR_007c4b3c;
  case 0x4b:
    return s_BUT_SIGHOST_007c4b2c;
  case 0x4c:
    return s_BUT_AMINE_007c4b20;
  case 0x4d:
switchD_005295a5_caseD_4d:
    return s_BUT_TELETO_007c4f10;
  case 0x4f:
    return s_BUT_VQB_007c4b14;
  case 0x50:
    pcVar1 = s_BUT_SIHOLD_007c4b04;
    if (DAT_0080874e != '\x03') {
      return s_BUT_HOLDBUILD_007c4af4;
    }
    break;
  case 0x51:
    pcVar1 = s_BUT_SIUNHOLD_007c4ae4;
    if (DAT_0080874e != '\x03') {
      return s_BUT_UNHOLDBUILD_007c4ad0;
    }
    break;
  case 0x52:
    pcVar1 = s_BUT_SISFIRE_007c4ac0;
    if (DAT_0080874e != '\x03') goto switchD_005295a5_caseD_32;
  }
  return pcVar1;
}

