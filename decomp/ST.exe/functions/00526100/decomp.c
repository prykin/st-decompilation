
char * __cdecl FUN_00526100(undefined1 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;

  pcVar2 = "TV_NONE";
  if (param_1 == (undefined1 *)0x0) {
    return "TV_ONOFF";
  }
  if (param_2 != 0) {
    return "TV_SWITCH";
  }
  switch(*param_1) {
  case 1:
  case 3:
  case 4:
    if (param_1[1] != '\0') {
      switch(*(undefined4 *)(param_1 + 3)) {
      case 1:
        return "TV_SENTINEL";
      case 2:
        return "TV_HUNTER";
      case 3:
        return "TV_CRUISER";
      case 4:
        return "TV_DCBOMBER";
      case 5:
        return "TV_MINELAYER";
      case 6:
        return "TV_RAIDER1";
      case 7:
        return "TV_REPPLATFORM";
      case 8:
        return "TV_TRANSPORT1";
      case 9:
        return "TV_CYBERWORM";
      case 10:
        return "TV_TERMINATOR";
      case 0xb:
        return "TV_LIBERATOR";
      case 0xc:
        return "TV_CONSTRPLATFORM1";
      case 0xd:
        return "TV_CYBERKILLER";
      case 0xe:
        return "TV_DESTROYER";
      case 0xf:
        return "TV_HCRUISER";
      case 0x10:
        return "TV_INVADER";
      case 0x11:
        return "TV_DEFENDER";
      case 0x12:
      case 0x27:
        return "TV_RAIDER2";
      case 0x13:
        return "TV_REPPOWPLATFORM";
      case 0x14:
        return "TV_TRANSPORT2";
      case 0x15:
        return "TV_CYBERDOLPHIN";
      case 0x16:
        return "TV_PHANTOM";
      case 0x17:
        return "TV_AVENGER";
      case 0x18:
        return "TV_CONSTRPLATFORM2";
      case 0x19:
        return "TV_CAPSULE";
      case 0x1a:
        return "TV_TRANSPORT3";
      case 0x1b:
        return "TV_SUPPLYSUB";
      case 0x1c:
        return "TV_PPROBE";
      case 0x1d:
        return "TV_REPLINISHER";
      case 0x1e:
        return "TV_SHSSUB";
      case 0x1f:
        return "TV_DREDNOUGHT";
      case 0x20:
        return "TV_ESCORT";
      case 0x21:
        return "TV_ASSAULTER";
      case 0x22:
      case 0x28:
        return "TV_USUPPER";
      case 0x23:
        return "TV_GHOSTMAKER";
      case 0x24:
        return "TV_EXPLORER";
      case 0x25:
        return "TV_STEALTHSCOUT";
      case 0x26:
        return "TV_FLAGWS";
      case 0x32:
        if (param_1[7] == '\x01') {
          return "TV_WSDOCKYARD";
        }
        return "TV_BODOCKYARD";
      case 0x33:
        if (param_1[7] == '\x01') {
          return "TV_WSRDOCK";
        }
        return "TV_BORDOCK";
      case 0x34:
        if (param_1[7] == '\x01') {
          return "TV_WSMFACTORY";
        }
        return "TV_BOMFACTORY";
      case 0x35:
        if (param_1[7] == '\x01') {
          return "TV_WSREASLAB";
        }
        return "TV_BOREASLAB";
      case 0x36:
        if (param_1[2] == '\x01') {
          return "TV_SWIM1";
        }
        if (param_1[7] == '\x01') {
          return "TV_WSSONAR";
        }
        return "TV_BOSONAR";
      case 0x37:
        if (param_1[7] == '\x01') {
          return "TV_WSTELEPORT";
        }
        return "TV_BOTELEPORT";
      case 0x39:
        if (param_1[7] == '\x01') {
          return "TV_WSCMINE";
        }
        return "TV_BOCMINE";
      case 0x3a:
        if (param_1[7] == '\x01') {
          return "TV_WSGOLDPLANT";
        }
        return "TV_BOGOLDPLANT";
      case 0x3b:
        if (param_1[7] == '\x01') {
          return "TV_WSDEPOT";
        }
        return "TV_BODEPOT";
      case 0x3c:
        if (param_1[7] == '\x01') {
          return "TV_WSINFOCENTER";
        }
        return "TV_BOINFOCENTER";
      case 0x3d:
        if (param_1[2] == '\x01') {
          return "TV_SWIM1";
        }
        if (param_1[7] == '\x01') {
          return "TV_WSDISPERSER";
        }
        return "TV_BODISPERSER";
      case 0x3e:
        if (param_1[2] == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_HFCANNON";
      case 0x3f:
        if (param_1[2] == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_STOLP";
      case 0x40:
        return "TV_CCENTEREWS";
      case 0x41:
        return "TV_SHARKCTRL";
      case 0x42:
        return "TV_USGENERATOR";
      case 0x43:
        return "TV_PSYCHOTRON";
      case 0x44:
        return "TV_PLASMATRON";
      case 0x45:
        return "TV_TLS";
      case 0x46:
        if (param_1[2] == '\x01') {
          return "TV_SWIM2";
        }
        return "TV_LLASER";
      case 0x47:
        if (param_1[2] == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_CSCANNON";
      case 0x48:
        return "TV_PSTATION";
      case 0x49:
        return "TV_CCENTERBO";
      case 0x4a:
        if (param_1[2] == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_HLASER";
      case 0x4b:
        if (param_1[2] == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_ELP";
      case 0x4c:
        return "TV_ISO";
      case 0x4d:
        return "TV_PPROTECT";
      case 0x4e:
        return "TV_LBL";
      case 0x4f:
        if (param_1[7] == '\x01') {
          return "TV_WSMMINE";
        }
      case 0x38:
        return "TV_BOMMINE";
      case 0x50:
        if (param_1[7] == '\x01') {
          return "TV_WSAIRPLANT";
        }
        return "TV_BOAIRPLANT";
      case 0x51:
        if (param_1[2] == '\x01') {
          return "TV_SWIM1";
        }
        return "TV_PLASMACANN";
      case 0x52:
        if (param_1[7] == '\x01') {
          return "TV_WSRCTELEPORT";
        }
        return "TV_BORCTELEPORT";
      case 0x53:
        return "TV_COMMANDHUB";
      case 0x54:
        return "TV_CMDHUB_MOB";
      case 0x55:
        return "TV_CMDHUB_MIL";
      case 0x56:
        return "TV_CMDHUB_EN";
      case 0x57:
        return "TV_CMDHUB_PROT";
      case 0x58:
        return "TV_CMDHUB_DEF";
      case 0x59:
        return "TV_CMDHUB_PROSP";
      case 0x5a:
        return "TV_CMDHUB_BIOP";
      case 0x5b:
        return "TV_ARSENAL";
      case 0x5c:
        return "TV_PROTOPLASMAGEN";
      case 0x5d:
        return "TV_BIOSONAR";
      case 0x5e:
        return "TV_SCORIUMMINE";
      case 0x5f:
        return "TV_ENERGYCONVERTER";
      case 0x60:
        return "TV_CORIUMSILO";
      case 0x61:
        return "TV_ENERGYACCUMULATOR";
      case 0x62:
        return "TV_REPLENISHPOD";
      case 99:
        return "TV_RECYCLOTRON";
      case 100:
        return "TV_SILICONEXTRACTOR";
      case 0x65:
        return "TV_GAMMAOSCILLATOR";
      case 0x66:
        return "TV_GASCANNON";
      case 0x67:
        return "TV_PARALYSER";
      case 0x68:
        return "TV_IONREFLECTOR";
      case 0x69:
        return "TV_JUMPMINE";
      case 0x6a:
        return "TV_BIOACID";
      case 0x6b:
        return "TV_SPLASMACANNON";
      case 0x6c:
        return "TV_GATE1";
      case 0x6d:
        return "TV_IONFIELDGEN";
      case 0x6e:
        return "TV_MOLECULARREP";
      case 0x6f:
        return "TV_TELESHIELD";
      case 0x70:
        return "TV_GLSATLUNCHER";
      case 0x71:
        return "TV_PARCHER";
      case 0x72:
        return "TV_VBLAUNCHER";
      case 0x73:
        return "TV_QPARALISER";
      case 0xa6:
        return "TV_DMINE";
      case 0xa7:
        return "TV_LSNARE";
      case 0xaf:
        pcVar2 = "TV_BEACON";
        break;
      case 0xbd:
        return "TV_AMINE";
      case 0xdd:
        return "TV_CORIUMSRC";
      case 0xde:
        return "TV_METALSRC";
      case 0xe0:
        return "TV_TERMOSRC";
      case 0xfd:
        if (param_1[7] == '\x01') {
          return "TV_ARTEFACTWS";
        }
        if (param_1[7] != '\x02') {
          return "TV_ARTEFACTSI";
        }
        return "TV_ARTEFACTBO";
      case 0xfe:
        cVar1 = param_1[7];
        if (cVar1 == '\x01') {
          return "TV_CONTAINER1";
        }
        if (cVar1 == '\x02') {
          return "TV_CONTAINER2";
        }
        if (cVar1 == '\x03') {
          return "TV_CONTAINER3";
        }
      }
    }
    break;
  case 2:
    if (param_1[1] != '\0') {
      cVar1 = param_1[7];
      if (cVar1 == '\x01') {
        return "TV_GROUPWS";
      }
      if (cVar1 == '\x02') {
        return "TV_GROUPBO";
      }
      if (cVar1 == '\x03') {
        return "TV_GROUPSI";
      }
    }
  }
  return pcVar2;
}

