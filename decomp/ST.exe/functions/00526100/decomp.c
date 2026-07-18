
char * __cdecl FUN_00526100(undefined1 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_TV_NONE_007c4a98;
  if (param_1 == (undefined1 *)0x0) {
    return s_TV_ONOFF_007c4a8c;
  }
  if (param_2 != 0) {
    return s_TV_SWITCH_007c4a80;
  }
  switch(*param_1) {
  case 1:
  case 3:
  case 4:
    if (param_1[1] != '\0') {
      switch(*(undefined4 *)(param_1 + 3)) {
      case 1:
        return s_TV_SENTINEL_007c4a40;
      case 2:
        return s_TV_HUNTER_007c4a34;
      case 3:
        return s_TV_CRUISER_007c4a24;
      case 4:
        return s_TV_DCBOMBER_007c4a14;
      case 5:
        return s_TV_MINELAYER_007c4a04;
      case 6:
        return s_TV_RAIDER1_007c49f4;
      case 7:
        return s_TV_REPPLATFORM_007c49e0;
      case 8:
        return s_TV_TRANSPORT1_007c49d0;
      case 9:
        return s_TV_CYBERWORM_007c49c0;
      case 10:
        return s_TV_TERMINATOR_007c49a0;
      case 0xb:
        return s_TV_LIBERATOR_007c48ec;
      case 0xc:
        return s_TV_CONSTRPLATFORM1_007c4894;
      case 0xd:
        return s_TV_CYBERKILLER_007c4978;
      case 0xe:
        return s_TV_DESTROYER_007c4968;
      case 0xf:
        return s_TV_HCRUISER_007c4958;
      case 0x10:
        return s_TV_INVADER_007c4948;
      case 0x11:
        return s_TV_DEFENDER_007c4938;
      case 0x12:
      case 0x27:
        return s_TV_RAIDER2_007c4860;
      case 0x13:
        return s_TV_REPPOWPLATFORM_007c4920;
      case 0x14:
        return s_TV_TRANSPORT2_007c4910;
      case 0x15:
        return s_TV_CYBERDOLPHIN_007c48fc;
      case 0x16:
        return s_TV_PHANTOM_007c49b0;
      case 0x17:
        return s_TV_AVENGER_007c48dc;
      case 0x18:
        return s_TV_CONSTRPLATFORM2_007c487c;
      case 0x19:
        return s_TV_CAPSULE_007c4520;
      case 0x1a:
        return s_TV_TRANSPORT3_007c4510;
      case 0x1b:
        return s_TV_SUPPLYSUB_007c44b8;
      case 0x1c:
        return s_TV_PPROBE_007c44ac;
      case 0x1d:
        return s_TV_REPLINISHER_007c4498;
      case 0x1e:
        return s_TV_SHSSUB_007c4504;
      case 0x1f:
        return s_TV_DREDNOUGHT_007c44f4;
      case 0x20:
        return s_TV_ESCORT_007c44e8;
      case 0x21:
        return s_TV_ASSAULTER_007c44d8;
      case 0x22:
      case 0x28:
        return s_TV_USUPPER_007c44c8;
      case 0x23:
        return s_TV_GHOSTMAKER_007c4478;
      case 0x24:
        return s_TV_EXPLORER_007c4488;
      case 0x25:
        return s_TV_STEALTHSCOUT_007c498c;
      case 0x26:
        return s_TV_FLAGWS_007c4870;
      case 0x32:
        if (param_1[7] == '\x01') {
          return s_TV_WSDOCKYARD_007c4820;
        }
        return s_TV_BODOCKYARD_007c4810;
      case 0x33:
        if (param_1[7] == '\x01') {
          return s_TV_WSRDOCK_007c4800;
        }
        return s_TV_BORDOCK_007c47f0;
      case 0x34:
        if (param_1[7] == '\x01') {
          return s_TV_WSMFACTORY_007c47e0;
        }
        return s_TV_BOMFACTORY_007c47d0;
      case 0x35:
        if (param_1[7] == '\x01') {
          return s_TV_WSREASLAB_007c47c0;
        }
        return s_TV_BOREASLAB_007c47b0;
      case 0x36:
        if (param_1[2] == '\x01') {
          return s_TV_SWIM1_007c47a4;
        }
        if (param_1[7] == '\x01') {
          return s_TV_WSSONAR_007c4794;
        }
        return s_TV_BOSONAR_007c4784;
      case 0x37:
        if (param_1[7] == '\x01') {
          return s_TV_WSTELEPORT_007c4774;
        }
        return s_TV_BOTELEPORT_007c4764;
      case 0x39:
        if (param_1[7] == '\x01') {
          return s_TV_WSCMINE_007c4754;
        }
        return s_TV_BOCMINE_007c4744;
      case 0x3a:
        if (param_1[7] == '\x01') {
          return s_TV_WSGOLDPLANT_007c4710;
        }
        return s_TV_BOGOLDPLANT_007c46fc;
      case 0x3b:
        if (param_1[7] == '\x01') {
          return s_TV_WSDEPOT_007c46cc;
        }
        return s_TV_BODEPOT_007c46bc;
      case 0x3c:
        if (param_1[7] == '\x01') {
          return s_TV_WSINFOCENTER_007c46a8;
        }
        return s_TV_BOINFOCENTER_007c4694;
      case 0x3d:
        if (param_1[2] == '\x01') {
          return s_TV_SWIM1_007c47a4;
        }
        if (param_1[7] == '\x01') {
          return s_TV_WSDISPERSER_007c4680;
        }
        return s_TV_BODISPERSER_007c466c;
      case 0x3e:
        if (param_1[2] == '\x01') {
          return s_TV_SWIM1_007c47a4;
        }
        return s_TV_HFCANNON_007c465c;
      case 0x3f:
        if (param_1[2] == '\x01') {
          return s_TV_SWIM1_007c47a4;
        }
        return s_TV_STOLP_007c4650;
      case 0x40:
        return s_TV_CCENTEREWS_007c4640;
      case 0x41:
        return s_TV_SHARKCTRL_007c4630;
      case 0x42:
        return s_TV_USGENERATOR_007c461c;
      case 0x43:
        return s_TV_PSYCHOTRON_007c460c;
      case 0x44:
        return s_TV_PLASMATRON_007c45fc;
      case 0x45:
        return s_TV_TLS_007c45f4;
      case 0x46:
        if (param_1[2] == '\x01') {
          return s_TV_SWIM2_007c45d8;
        }
        return s_TV_LLASER_007c45cc;
      case 0x47:
        if (param_1[2] == '\x01') {
          return s_TV_SWIM1_007c47a4;
        }
        return s_TV_CSCANNON_007c45bc;
      case 0x48:
        return s_TV_PSTATION_007c45ac;
      case 0x49:
        return s_TV_CCENTERBO_007c459c;
      case 0x4a:
        if (param_1[2] == '\x01') {
          return s_TV_SWIM1_007c47a4;
        }
        return s_TV_HLASER_007c4590;
      case 0x4b:
        if (param_1[2] == '\x01') {
          return s_TV_SWIM1_007c47a4;
        }
        return s_TV_ELP_007c4588;
      case 0x4c:
        return s_TV_ISO_007c4580;
      case 0x4d:
        return s_TV_PPROTECT_007c4570;
      case 0x4e:
        return s_TV_LBL_007c4568;
      case 0x4f:
        if (param_1[7] == '\x01') {
          return s_TV_WSMMINE_007c4734;
        }
      case 0x38:
        return s_TV_BOMMINE_007c4724;
      case 0x50:
        if (param_1[7] == '\x01') {
          return s_TV_WSAIRPLANT_007c46ec;
        }
        return s_TV_BOAIRPLANT_007c46dc;
      case 0x51:
        if (param_1[2] == '\x01') {
          return s_TV_SWIM1_007c47a4;
        }
        return s_TV_PLASMACANN_007c4558;
      case 0x52:
        if (param_1[7] == '\x01') {
          return s_TV_WSRCTELEPORT_007c4544;
        }
        return s_TV_BORCTELEPORT_007c4530;
      case 0x53:
        return s_TV_COMMANDHUB_007c4468;
      case 0x54:
        return s_TV_CMDHUB_MOB_007c4458;
      case 0x55:
        return s_TV_CMDHUB_MIL_007c4448;
      case 0x56:
        return s_TV_CMDHUB_EN_007c4438;
      case 0x57:
        return s_TV_CMDHUB_PROT_007c4424;
      case 0x58:
        return s_TV_CMDHUB_DEF_007c4414;
      case 0x59:
        return s_TV_CMDHUB_PROSP_007c4400;
      case 0x5a:
        return s_TV_CMDHUB_BIOP_007c43ec;
      case 0x5b:
        return s_TV_ARSENAL_007c43dc;
      case 0x5c:
        return s_TV_PROTOPLASMAGEN_007c43c4;
      case 0x5d:
        return s_TV_BIOSONAR_007c43b4;
      case 0x5e:
        return s_TV_SCORIUMMINE_007c43a0;
      case 0x5f:
        return s_TV_ENERGYCONVERTER_007c4388;
      case 0x60:
        return s_TV_CORIUMSILO_007c4378;
      case 0x61:
        return s_TV_ENERGYACCUMULATOR_007c435c;
      case 0x62:
        return s_TV_REPLENISHPOD_007c4348;
      case 99:
        return s_TV_RECYCLOTRON_007c4334;
      case 100:
        return s_TV_SILICONEXTRACTOR_007c431c;
      case 0x65:
        return s_TV_GAMMAOSCILLATOR_007c4304;
      case 0x66:
        return s_TV_GASCANNON_007c42f4;
      case 0x67:
        return s_TV_PARALYSER_007c42e4;
      case 0x68:
        return s_TV_IONREFLECTOR_007c42d0;
      case 0x69:
        return s_TV_JUMPMINE_007c42c0;
      case 0x6a:
        return s_TV_BIOACID_007c42b0;
      case 0x6b:
        return s_TV_SPLASMACANNON_007c429c;
      case 0x6c:
        return s_TV_GATE1_007c4290;
      case 0x6d:
        return s_TV_IONFIELDGEN_007c427c;
      case 0x6e:
        return s_TV_MOLECULARREP_007c4268;
      case 0x6f:
        return s_TV_TELESHIELD_007c45e4;
      case 0x70:
        return s_TV_GLSATLUNCHER_007c4254;
      case 0x71:
        return s_TV_PARCHER_007c4234;
      case 0x72:
        return s_TV_VBLAUNCHER_007c4244;
      case 0x73:
        return s_TV_QPARALISER_007c4224;
      case 0xa6:
        return s_TV_DMINE_007c41e8;
      case 0xa7:
        return s_TV_LSNARE_007c41dc;
      case 0xaf:
        pcVar2 = s_TV_BEACON_007c41c4;
        break;
      case 0xbd:
        return s_TV_AMINE_007c41d0;
      case 0xdd:
        return s_TV_CORIUMSRC_007c4204;
      case 0xde:
        return s_TV_METALSRC_007c41f4;
      case 0xe0:
        return s_TV_TERMOSRC_007c4214;
      case 0xfd:
        if (param_1[7] == '\x01') {
          return s_TV_ARTEFACTWS_007c4830;
        }
        if (param_1[7] != '\x02') {
          return s_TV_ARTEFACTSI_007c4850;
        }
        return s_TV_ARTEFACTBO_007c4840;
      case 0xfe:
        cVar1 = param_1[7];
        if (cVar1 == '\x01') {
          return s_TV_CONTAINER1_007c48ac;
        }
        if (cVar1 == '\x02') {
          return s_TV_CONTAINER2_007c48bc;
        }
        if (cVar1 == '\x03') {
          return s_TV_CONTAINER3_007c48cc;
        }
      }
    }
    break;
  case 2:
    if (param_1[1] != '\0') {
      cVar1 = param_1[7];
      if (cVar1 == '\x01') {
        return s_TV_GROUPWS_007c4a50;
      }
      if (cVar1 == '\x02') {
        return s_TV_GROUPBO_007c4a60;
      }
      if (cVar1 == '\x03') {
        return s_TV_GROUPSI_007c4a70;
      }
    }
  }
  return pcVar2;
}

