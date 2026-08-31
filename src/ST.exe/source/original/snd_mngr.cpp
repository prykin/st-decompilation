#include "st/generated.hpp"
// Generated translation unit: source/original/snd_mngr.cpp

// 00566600 FUN_00566600
#line 4 "decomp/ST.exe/functions/00566600/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\snd_mngr.cpp
   Diagnostic line evidence: 37 | 50 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int st::fn_00566600(int param_1)

{
  char cVar1;
  int iVar2;
  cMf32 *pcVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  byte bVar11;
  int iVar12;
  byte local_368;
  char local_367 [515];
  byte local_164 [260];
  InternalExceptionFrame local_60;
  int local_1c;
  char *local_18;
  cMf32 *local_14;
  SoundManagerTy *local_10;
  uint local_c;
  byte *local_8;
  char *pcVar9_mg1;
  char *pcVar9_mg2;

  local_1c = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;

  iVar2 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_60.previous;
    /* ST_CALLSITE[0056684D]: CALL 0x00403c01; direct=00403C01 SoundManagerTy::sub_00566900 */
    st::fn_00403C01(local_10);
    return iVar2;
  }
  if (local_10->field_0018 != nullptr) {
    g_currentExceptionFrame = local_60.previous;
    return local_1c;
  }
  uVar5 = 0xffffffff;
  pcVar4 = &CHAR_00h_0080798c;
  do {
    pcVar10 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar8 = reinterpret_cast<byte *>((pcVar10 + -uVar5));
  pbVar9 = local_164;
  memmove(pbVar9, pbVar8, uVar5); /* compiler REP MOVS byte copy */
  uVar6 = 0;
  st::fn_006B8280(reinterpret_cast<char *>(local_164),reinterpret_cast<char *>(local_164));
  uVar5 = 0xffffffff;
  pcVar9_mg1 = PTR_s_music_0079b00c;
  do {
    pcVar4 = pcVar9_mg1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar4 = pcVar9_mg1 + 1;
    cVar1 = *pcVar9_mg1;
    pcVar9_mg1 = pcVar4;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pbVar8 = local_164;
  do {
    pbVar9 = pbVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pbVar9 = pbVar8 + 1;
    bVar11 = *pbVar8;
    pbVar8 = pbVar9;
  } while (bVar11 != 0);
  pbVar8 = reinterpret_cast<byte *>((pcVar4 + -uVar5));
  pbVar9 = pbVar9 + -1;
  memmove(pbVar9, pbVar8, uVar5); /* compiler REP MOVS byte copy */
  uVar6 = 0;
  /* ST_CALLSITE[005666C9]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
  pcVar2 = st::pointer_boundary_cast<cMf32 *>(st::fn_006F0EC0(0x345,local_164,3,0,0));
  uVar5 = 0xffffffff;
  local_10->field_0018 = pcVar2;
  pcVar9_mg2 = PTR_s_GM_SET_0079b010;
  do {
    pcVar4 = pcVar9_mg2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar4 = pcVar9_mg2 + 1;
    cVar1 = *pcVar9_mg2;
    pcVar9_mg2 = pcVar4;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_368 = 0xc;
  pcVar4 = pcVar4 + -uVar5;
  pcVar10 = local_367;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar10 = pcVar10 + 4;
  }
  local_c = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar10 = pcVar10 + 1;
  }
  local_18 = local_367;
  local_14 = pcVar2;
  st::fn_006F12B0(pcVar2,st::machine_word_boundary_cast<undefined4>(st::fn_006F2D10),st::machine_word_boundary_cast<undefined4>(&local_368));
  pcVar2 = local_14;

  puVar3 = st::fn_006F2790(local_14);
  uVar5 = local_c;
  while (puVar3 != nullptr) {
    local_c = uVar5 + 1;

    puVar3 = st::fn_006F2790(pcVar2);
    uVar5 = local_c;
  }
  local_c = uVar5;
  if (uVar5 == 0) {
    st::fn_006A5E40(-4,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\snd_mngr.cpp"),0x25);
  }
  if ((param_1 == 0) || ((param_1 < 0 && ((int)local_10->field_0028 < 1)))) {

    uVar6 = st::fn_0072E6C0();
    local_10->field_0028 = uVar6 % uVar5 + 1;
  }
  if (0 < param_1) {
    local_10->field_0028 = param_1;
  }
  iVar7 = 0;
  bVar11 = 0;
  /* ST_CALLSITE[00566798]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
  pcVar4 = st::pointer_boundary_cast<char *>(st::fn_006F2C00(PTR_s_GM_SET_0079b010,1,local_10->field_0028));
  local_8 = st::fn_006F2D90(local_10->field_0018,pcVar4,bVar11,iVar7);
  if (local_8 == nullptr) {

    uVar6 = st::fn_0072E6C0();
    iVar12 = 0;
    bVar11 = 0;
    iVar7 = uVar6 % uVar5 + 1;
    local_10->field_0028 = iVar7;
    /* ST_CALLSITE[005667E8]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
    pcVar4 = st::pointer_boundary_cast<char *>(st::fn_006F2C00(PTR_s_GM_SET_0079b010,1,iVar7));
    local_8 = st::fn_006F2D90(local_10->field_0018,pcVar4,bVar11,iVar12);
    if (local_8 == nullptr) {
      st::fn_006A5E40
                (-4,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\snd_mngr.cpp"),0x32);
      goto LAB_0056681c;
    }
  }
  local_10->field_002C = *(int *)local_8;
  local_10->field_0030 = *(int *)(local_8 + 4);
  local_10->field_0034 = *(int *)(local_8 + 8);
LAB_0056681c:
  if (local_8 != nullptr) {
    st::fn_006F20E0(local_10->field_0018,reinterpret_cast<uint *>(&local_8));
  }
  g_currentExceptionFrame = local_60.previous;
  return local_1c;
}

// 00566C20 SoundManagerTy::GetMessage
#line 4 "decomp/ST.exe/functions/00566C20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\snd_mngr.cpp
   SoundManagerTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00566C20; family_names=SoundManagerTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:0,1c:5} */

int __thiscall st::fn_00566C20(SoundManagerTy *this,STMessage *message)

{
  SoundManagerTy_field_0038State SVar1;
  STMessageId SVar2;
  SoundManagerTy *this_00;
  int iVar4;
  int local_EAX_48;
  int iVar5;
  int iVar6;
  uint uVar5;
  InternalExceptionFrame local_4c;
  SoundManagerTy *local_8;

  local_8 = this;

  iVar4 = st::fn_006E51B0(this->field_0010);
  this->field_001C = iVar4;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  local_EAX_48 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_48 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\snd_mngr.cpp"),0xdc,0,local_EAX_48,st::mutable_c_string("%s")
                               ,"SoundManagerTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_48,0,st::mutable_c_string("E:\\__titans\\snd_mngr.cpp"),0xdc);
    return 0xffff;
  }
  SVar2 = message->id;
  if (SVar2 != MESS_ID_NONE) {
    if (SVar2 == MESS_ID_CREATE) {
      g_soundManager_008033F0 = local_8;
      local_8->field_0028 = ((message->arg0).u32);
    }
    else if (SVar2 == MESS_SHARED_0003) {
      g_soundManager_008033F0 = nullptr;
      /* ST_CALLSITE[00566C87]: CALL 0x00403c01; direct=00403C01 SoundManagerTy::sub_00566900 */
      st::fn_00403C01(local_8);
    }
    goto LAB_00566d75;
  }
  SVar1 = local_8->field_0038;
  switch(SVar1) {
  case CASE_0:
    if (SVar1 != CASE_1) {
      local_8->field_0038 = CASE_1;
      local_8->field_0039 = -1;
    }
    local_8->field_0024 = local_8->field_001C;
    local_8->field_0020 = local_8->field_001C;
    break;
  case CASE_1:
    iVar4 = local_8->field_001C;
    if ((4999 < (uint)(iVar4 - local_8->field_0020)) &&
       ((uint)(iVar4 - local_8->field_0024) < 0x3e9)) {
      local_8->field_0024 = iVar4;
      local_8->field_0020 = iVar4;
joined_r0x00566d57:
      if (SVar1 != CASE_3) {
        local_8->field_0038 = CASE_3;
LAB_00566d5d:
        local_8->field_0039 = -1;
      }
    }
    break;
  case CASE_2:
    iVar4 = local_8->field_001C;
    if (4999 < (uint)(iVar4 - local_8->field_0020)) {
      uVar5 = iVar4 - local_8->field_0024;
      if (19999 < uVar5) goto LAB_00566d35;
      if (uVar5 < 0x3e9) {
        local_8->field_0024 = iVar4;
        local_8->field_0020 = iVar4;
        goto joined_r0x00566d57;
      }
    }
    break;
  case CASE_3:
    iVar4 = local_8->field_001C;
    if (14999 < (uint)(iVar4 - local_8->field_0024)) {
LAB_00566d35:
      local_8->field_0024 = iVar4;
      local_8->field_0020 = iVar4;
      if (SVar1 != CASE_1) {
        local_8->field_0038 = CASE_1;
        goto LAB_00566d5d;
      }
    }
  }
  /* ST_CALLSITE[00566D66]: CALL 0x00401609; direct=00401609 SoundManagerTy::sub_00566AA0 */
  st::fn_00401609(local_8);
  /* ST_CALLSITE[00566D70]: CALL 0x00401253; direct=00401253 SoundClassTy::CheckFader */
  st::fn_00401253(reinterpret_cast<SoundClassTy *>(&g_sound));
LAB_00566d75:
  g_currentExceptionFrame = local_4c.previous;

  iVar5 = st::fn_006E5FD0(this_00,message);
  return iVar5;
}
