
/* WARNING: Type propagation algorithm not settling */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event.cpp
   Diagnostic line evidence: 436 | 440 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0064E300 -> 00668180 @ 0064E399

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0064E300 -> 00668180 @ 0064E399 */

uint FUN_0064e300(int param_1,char *param_2,ushort param_3,char param_4,ushort param_5,char param_6,
                 uint param_7)

{
  int uVar1;
  int iVar1;
  DArrayTy *array;
  uint uVar2;
  bool bVar3;
  InternalExceptionFrame local_64;
  uint local_20 [3];
  void *local_14;
  uint local_10;
  byte *local_c;
  AnonShape_GLOBAL_008489C4_F7BABFAC *local_8;

  local_10 = param_7;
  local_8 = nullptr;
  local_c = nullptr;
  local_20[2] = 0xffffffff;
  local_20[1] = 0;
  local_14 = nullptr;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  uVar1 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  if (uVar1 != 0) {
    g_currentExceptionFrame = local_64.previous;
    thunk_FUN_006686c0((int *)&local_8);
    thunk_FUN_006686c0((int *)&local_c);
    RaiseInternalException(uVar1,0,"E:\\__titans\\ai\\ai_event.cpp",0x1b8);
    return uVar1;
  }
  if (((int)local_10 < 0) || (bVar3 = local_10 == 8, 8 < (int)local_10)) {
    local_10 = 0xff;
    bVar3 = false;
  }
  if (bVar3) {
    local_10 = (uint)DAT_0080874d;
  }
  uVar2 = local_10;
  if ((param_6 < '\0') || (iVar1 = (int)param_6, '\a' < param_6)) {
    iVar1 = param_1;
  }
  local_8 = thunk_FUN_00668180(param_2,param_3,(short)param_4,param_5,(byte)iVar1);
  *(int *)&local_8->field_0x4 = param_1;
  *(uint *)&local_8->field_0x77 = uVar2;
  local_c = FltDataPack(local_8,local_20);
  thunk_FUN_006686c0((int *)&local_8);
  STPlaySystemC::CreateGameObject(g_playSystem_00802A38,900,local_20 + 1,&local_14,local_c,0);
  thunk_FUN_006686c0((int *)&local_c);
  if (local_14 == nullptr) {
    RaiseInternalException
              (-0xab,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_event.cpp",0x1b4);
    uVar2 = local_20[2];
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = (uint)*(ushort *)((int)local_14 + 0x7d);
    local_20[2] = uVar2;
    array = (DArrayTy *)_GetStaffGrpExch(param_1);
    if (array != nullptr) {
      thunk_FUN_0065d940(local_14,array,0);
      DArrayDestroy(array);
      g_currentExceptionFrame = local_64.previous;
      return uVar2;
    }
  }
  g_currentExceptionFrame = local_64.previous;
  return uVar2;
}

