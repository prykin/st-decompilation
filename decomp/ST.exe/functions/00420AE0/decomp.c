#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::LoadLifeFrame
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall LoadLifeFrame(STSprGameObjC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=00420E2C RET | 00420E58 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall STSprGameObjC::LoadLifeFrame(STSprGameObjC *this)

{
  undefined4 *this_00;
  char cVar1;
  byte bVar3;
  STSprGameObjC_field_0259State SVar4;
  int iVar6;
  uint uVar5;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int _Radix;
  char local_38 [20];
  char local_24 [20];
  char local_10 [12];

  uVar5 = 0xffffffff;
  pcVar9 = "lifelev";
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_24[0] = '\0';
  iVar7 = -1;
  pcVar9 = local_24;
  do {
    pcVar10 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  local_38[0] = '\0';
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar9 = &CHAR_e_007a5044;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  _Radix = 10;
  iVar7 = -1;
  pcVar9 = local_38;
  do {
    pcVar10 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  pcVar10 = local_10;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  bVar3 = thunk_FUN_004ab030();
  Library::MSVCRT::__itoa((uint)bVar3,pcVar10,_Radix);
  uVar5 = this->field_0020;
  if ((((uVar5 == 0x14) || (uVar5 == 1000)) || (uVar5 == 0x172)) || (uVar5 == 0x1a4)) {
    /* ST_CALLSITE[00420B9E]: CALL dword ptr [EDX + 0x2c] */
    SVar4 = this->slot_2C();
  }
  else {
    if (uVar5 != 0x3e9) {
      return;
    }
    SVar4 = this->field_0259;
  }
  switch(SVar4) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
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
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
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
  case 0xfd:
  case 0xfe:
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = &CHAR_s_007a4fb4;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_38;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    pcVar9 = &CHAR_s_007a4fb4;
    break;
  default:

    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0xce5,0,0,"%s",
                               "STSprGameObjC::LoadLifeFrame unknown object type");
    if (iVar6 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x52:
  case 0x53:
  case 100:
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = &CHAR_b_007a4ff8;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_38;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    pcVar9 = &CHAR_b_007a4ff8;
    break;
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x41:
  case 0x43:
  case 0x48:
  case 0x4d:
  case 0x50:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x62:
  case 99:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x70:
  case 0x73:
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = &CHAR_a_007a4ff4;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_38;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    pcVar9 = &CHAR_a_007a4ff4;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar9 = local_38;
  do {
    pcVar10 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
  this_00 = &this->field_01D5;
  /* ST_CALLSITE[00420D97]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  STT3DSprC::LoadSequence((STT3DSprC *)this_00,1,PTR_00806774,local_24,CASE_1D);
  ST3DSMAPContext::sub_006EA5E0(this->field_0211,this->field_01ED,1,0);

  thunk_FUN_004ac610(this_00,'\x01');
  /* ST_CALLSITE[00420DCB]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  STT3DSprC::StartShow((STT3DSprC *)this_00,1,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[00420DD4]: CALL dword ptr [EDX + 0xc] */
  iVar7 = this->vfunc_0C();
  if (iVar7 != 3) {
    return;
  }
  /* ST_CALLSITE[00420DED]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  STT3DSprC::LoadSequence((STT3DSprC *)this_00,2,PTR_00806774,local_38,CASE_1D);
  ST3DSMAPContext::sub_006EA5E0(this->field_0211,this->field_01ED,2,0);

  thunk_FUN_004ac610(this_00,'\x02');
  /* ST_CALLSITE[00420E21]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  STT3DSprC::StartShow((STT3DSprC *)this_00,2,g_playSystem_00802A38->field_00E4);
  return;
}

