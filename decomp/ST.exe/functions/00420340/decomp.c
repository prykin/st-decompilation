#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::LoadActFrame */

void __thiscall STSprGameObjC::LoadActFrame(STSprGameObjC *this,int *param_1)

{
  undefined4 *this_00;
  char cVar1;
  code *pcVar2;
  byte bVar3;
  STSprGameObjC_field_0259State SVar4;
  dword dVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char local_24 [20];
  char local_10 [12];

  uVar6 = 0xffffffff;
  pcVar10 = &DAT_007a5000;
  do {
    pcVar12 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  local_24[0] = '\0';
  iVar7 = -1;
  pcVar10 = local_24;
  do {
    pcVar11 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  pcVar10 = pcVar12 + -uVar6;
  pcVar12 = pcVar11 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  iVar7 = 10;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar10 = &DAT_007a4ffc;
  do {
    pcVar12 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar9 = -1;
  pcVar10 = local_24;
  do {
    pcVar11 = pcVar10;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  pcVar10 = pcVar12 + -uVar6;
  pcVar12 = pcVar11 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  pcVar11 = local_10;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  bVar3 = thunk_FUN_004ab030();
  Library::MSVCRT::__itoa((uint)bVar3,pcVar11,iVar7);
  iVar7 = this->field_0020;
  if ((((iVar7 != 0x1ae) && (iVar7 != 0x172)) && (iVar7 != 0x5a)) &&
     ((iVar7 != 0x1a4 && (iVar7 != 0x1b8)))) {
    if ((iVar7 == 0x14) || (iVar7 == 1000)) {
      SVar4 = (*this->vtable->slot_2C)(this);
    }
    else {
      if (iVar7 != 0x3e9) {
        return;
      }
      SVar4 = this->field_0259;
    }
    switch(SVar4) {
    case 1:
    case 9:
    case 0x15:
    case 0x24:
    case 0x25:
switchD_00420436_caseD_1:
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_007a4fb4;
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar10 = local_24;
      do {
        pcVar11 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar10 = local_10;
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar10 = local_24;
      do {
        pcVar11 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcVar10 = &DAT_007a4fb0;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x26:
    case 0x27:
    case 0x28:
      goto switchD_00420436_caseD_2;
    case 7:
    case 0x13:
    case 0x36:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5e:
    case 0x61:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6f:
    case 0x71:
    case 0x72:
      goto switchD_00420436_caseD_7;
    default:
      iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0xc45,0,0,"%s",
                                 "STSprGameObjC::LoadActFrame 2 unknown object type");
      if (iVar7 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x37:
    case 0x4d:
    case 0x52:
    case 0x53:
    case 0x5b:
    case 0x5c:
    case 0x5f:
    case 0x60:
    case 100:
    case 0x6e:
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_007a4ff8;
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar10 = local_24;
      do {
        pcVar11 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar10 = local_10;
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar10 = local_24;
      do {
        pcVar11 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcVar10 = &DAT_007a4ff8;
      break;
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x41:
    case 0x43:
    case 0x48:
    case 0x50:
    case 0x5d:
    case 0x62:
    case 99:
    case 0x6c:
    case 0x6d:
    case 0x70:
    case 0x73:
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_007a4ff8;
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar10 = local_24;
      do {
        pcVar11 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar10 = local_10;
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar10 = local_24;
      do {
        pcVar11 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcVar10 = &DAT_007a4ff4;
    }
LAB_00420678:
    uVar6 = 0xffffffff;
    do {
      pcVar12 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = local_24;
    do {
      pcVar11 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    pcVar10 = pcVar12 + -uVar6;
    pcVar12 = pcVar11 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    this_00 = &this->field_01D5;
    iVar7 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,0xf,DAT_00806774,local_24,0x1d);
    if (iVar7 != 0) {
      RaiseInternalException
                (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",
                 0xc4a);
    }
    iVar7 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,0,DAT_00806774,local_24,0x1d);
    if (iVar7 != 0) {
      RaiseInternalException
                (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",
                 0xc4b);
    }
    FUN_006ea5e0((void *)this->field_0211,this->field_01ED,0xf,0);
    FUN_006ea5e0((void *)this->field_0211,this->field_01ED,0,0);
    if (DAT_0080732c != 1) {
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xf);
      STT3DSprC::StopShow((STT3DSprC *)this_00,0);
      thunk_FUN_004abce0(this_00,0,0,0,'\0');
      thunk_FUN_004abce0(this_00,0xf,0x14,0x14,'\0');
      STT3DSprC::StartShow((STT3DSprC *)this_00,0,PTR_00802a38->field_00E4);
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xf,PTR_00802a38->field_00E4);
      return;
    }
    thunk_FUN_004abce0(this_00,0,0,0x13,'\0');
    thunk_FUN_004abce0(this_00,0xf,0x14,0x27,'\0');
    thunk_FUN_004acd60(this_00,'\0',PTR_00802a38->field_00E4 & 1);
    thunk_FUN_004acd60(this_00,'\x0f',PTR_00802a38->field_00E4 & 1);
    STT3DSprC::StartShow((STT3DSprC *)this_00,0,PTR_00802a38->field_00E4);
    STT3DSprC::StartShow((STT3DSprC *)this_00,0xf,PTR_00802a38->field_00E4);
    return;
  }
  dVar5 = (*this->vtable->slot_2C)(this);
  switch(dVar5) {
  case 0xa6:
  case 0xa7:
  case 0xaf:
  case 0xbd:
    goto switchD_00420436_caseD_1;
  default:
    iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0xbc0,0,0,"%s",
                               "STSprGameObjC::LoadActFrame 1 unknown object type");
    if (iVar7 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  case 0xdd:
  case 0xde:
  case 0xe0:
switchD_00420436_caseD_7:
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_007a4fb4;
    do {
      pcVar12 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = local_24;
    do {
      pcVar11 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    pcVar10 = pcVar12 + -uVar6;
    pcVar12 = pcVar11 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_10;
    do {
      pcVar12 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = local_24;
    do {
      pcVar11 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    pcVar10 = pcVar12 + -uVar6;
    pcVar12 = pcVar11 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    pcVar10 = &DAT_007a4fac;
    goto LAB_00420678;
  case 0xfd:
  case 0xfe:
switchD_00420436_caseD_2:
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_007a4fb4;
    do {
      pcVar12 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = local_24;
    do {
      pcVar11 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    pcVar10 = pcVar12 + -uVar6;
    pcVar12 = pcVar11 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_10;
    do {
      pcVar12 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = local_24;
    do {
      pcVar11 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    pcVar10 = pcVar12 + -uVar6;
    pcVar12 = pcVar11 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    pcVar10 = &DAT_007a4fb4;
    goto LAB_00420678;
  }
}

