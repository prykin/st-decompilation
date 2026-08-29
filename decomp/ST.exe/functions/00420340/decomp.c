#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::LoadActFrame

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=void __thiscall
   LoadActFrame(STSprGameObjC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=004207C7 RET | 00420829 RET | 00420855 RET */

void __thiscall STSprGameObjC::LoadActFrame(STSprGameObjC *this)

{
  undefined4 *this_00;
  char cVar1;
  byte bVar3;
  STSprGameObjC_field_0259State SVar4;
  int iVar7;
  dword dVar5;
  int local_EAX_1282;
  uint uVar6;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char local_24 [20];
  char local_10 [12];

  uVar6 = 0xffffffff;
  pcVar11 = &CHAR_a_007a5000;
  do {
    pcVar13 = pcVar11;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  local_24[0] = '\0';
  iVar8 = -1;
  pcVar11 = local_24;
  do {
    pcVar12 = pcVar11;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  pcVar11 = pcVar13 + -uVar6;
  pcVar13 = pcVar12 + -1;
  for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar13 = pcVar13 + 4;
  }
  iVar8 = 10;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar11 = &CHAR_1_007a4ffc;
  do {
    pcVar13 = pcVar11;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar10 = -1;
  pcVar11 = local_24;
  do {
    pcVar12 = pcVar11;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  pcVar11 = pcVar13 + -uVar6;
  pcVar13 = pcVar12 + -1;
  for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar13 = pcVar13 + 4;
  }
  pcVar12 = local_10;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar13 = pcVar13 + 1;
  }
  bVar3 = thunk_FUN_004ab030();
  Library::MSVCRT::__itoa((uint)bVar3,pcVar12,iVar8);
  uVar6 = this->field_0020;
  if ((((uVar6 != 0x1ae) && (uVar6 != 0x172)) && (uVar6 != 0x5a)) &&
     ((uVar6 != 0x1a4 && (uVar6 != 0x1b8)))) {
    if ((uVar6 == 0x14) || (uVar6 == 1000)) {
      /* ST_CALLSITE[00420421]: CALL dword ptr [EDX + 0x2c] */
      SVar4 = this->slot_2C();
    }
    else {
      if (uVar6 != 0x3e9) {
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
      pcVar11 = &CHAR_s_007a4fb4;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      uVar6 = 0xffffffff;
      pcVar11 = local_10;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      pcVar11 = &CHAR_c_007a4fb0;
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
      pcVar11 = &CHAR_b_007a4ff8;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      uVar6 = 0xffffffff;
      pcVar11 = local_10;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      pcVar11 = &CHAR_b_007a4ff8;
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
      pcVar11 = &CHAR_b_007a4ff8;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      uVar6 = 0xffffffff;
      pcVar11 = local_10;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      pcVar11 = &CHAR_a_007a4ff4;
    }
LAB_00420678:
    uVar6 = 0xffffffff;
    do {
      pcVar13 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar11 = local_24;
    do {
      pcVar12 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
    this_00 = &this->field_01D5;
    /* ST_CALLSITE[004206B4]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar8 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,0xf,PTR_00806774,local_24,CASE_1D);
    if (iVar8 != 0) {
      RaiseInternalException
                (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",
                 0xc4a);
    }
    /* ST_CALLSITE[004206E9]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar8 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,0,PTR_00806774,local_24,CASE_1D);
    if (iVar8 != 0) {
      RaiseInternalException
                (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",
                 0xc4b);
    }
    ST3DSMAPContext::sub_006EA5E0(this->field_0211,this->field_01ED,0xf,0);
    ST3DSMAPContext::sub_006EA5E0(this->field_0211,this->field_01ED,0,0);
    if (DAT_0080732c != 1) {
      /* ST_CALLSITE[004207CC]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xf);
      /* ST_CALLSITE[004207D5]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)this_00,0);

      thunk_FUN_004abce0(this_00,0,0,0,'\0');

      thunk_FUN_004abce0(this_00,0xf,0x14,0x14,'\0');
      /* ST_CALLSITE[00420809]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)this_00,0,g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[0042081E]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xf,g_playSystem_00802A38->field_00E4);
      return;
    }

    thunk_FUN_004abce0(this_00,0,0,0x13,'\0');

    thunk_FUN_004abce0(this_00,0xf,0x14,0x27,'\0');
    thunk_FUN_004acd60(this_00,'\0',g_playSystem_00802A38->field_00E4 & 1);
    thunk_FUN_004acd60(this_00,'\x0f',g_playSystem_00802A38->field_00E4 & 1);
    /* ST_CALLSITE[004207A6]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this_00,0,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[004207BC]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this_00,0xf,g_playSystem_00802A38->field_00E4);
    return;
  }
  /* ST_CALLSITE[00420537]: CALL dword ptr [EAX + 0x2c] */
  dVar5 = this->slot_2C();
  switch(dVar5) {
  case 0xa6:
  case 0xa7:
  case 0xaf:
  case 0xbd:
    goto switchD_00420436_caseD_1;
  default:

    local_EAX_1282 =
         ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0xbc0,0,0,"%s",
                            "STSprGameObjC::LoadActFrame 1 unknown object type");
    if (local_EAX_1282 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  case 0xdd:
  case 0xde:
  case 0xe0:
switchD_00420436_caseD_7:
    uVar6 = 0xffffffff;
    pcVar11 = &CHAR_s_007a4fb4;
    do {
      pcVar13 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar11 = local_24;
    do {
      pcVar12 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    uVar6 = 0xffffffff;
    pcVar11 = local_10;
    do {
      pcVar13 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar11 = local_24;
    do {
      pcVar12 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    pcVar11 = &CHAR_o_007a4fac;
    goto LAB_00420678;
  case 0xfd:
  case 0xfe:
switchD_00420436_caseD_2:
    uVar6 = 0xffffffff;
    pcVar11 = &CHAR_s_007a4fb4;
    do {
      pcVar13 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar11 = local_24;
    do {
      pcVar12 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    uVar6 = 0xffffffff;
    pcVar11 = local_10;
    do {
      pcVar13 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar11 = local_24;
    do {
      pcVar12 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
    pcVar11 = &CHAR_s_007a4fb4;
    goto LAB_00420678;
  }
}

