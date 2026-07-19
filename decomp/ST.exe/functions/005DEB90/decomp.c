
undefined4 __fastcall FUN_005deb90(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  HANDLE pvVar4;
  BOOL BVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  _WIN32_FIND_DATAA local_5b0;
  byte local_470 [260];
  byte local_36c [260];
  char local_268 [259];
  byte abStack_165 [261];
  InternalExceptionFrame local_60;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  HANDLE local_c;
  DWORD local_8;
  
  local_c = (HANDLE)0xffffffff;
  local_8 = 0;
  local_14 = 1;
  local_10 = -1;
  local_18 = 0;
  if (*(uint *)(param_1 + 0x69e) < (uint)(*(int *)(param_1 + 0x6b2) + *(int *)(param_1 + 0x6ae))) {
    return 0;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_1c = param_1;
  iVar3 = __setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar2 = local_1c;
  if (iVar3 == 0) {
    local_8 = (*(int *)(local_1c + 0x69e) - *(int *)(local_1c + 0x6ae)) - *(int *)(local_1c + 0x6b2)
    ;
    _strncpy((char *)(abStack_165 + 1),
             (char *)(*(int *)(local_1c + 0x6ae) + *(int *)(local_1c + 0x6b2) +
                     *(int *)(local_1c + 0x69a)),local_8);
    uVar1 = local_14;
    abStack_165[local_8] = 0;
    iVar3 = local_10;
    while (uVar1 != 0) {
      if (iVar3 < 0) {
        wsprintfA(&DAT_0080ed16,s__s_s_s_s_007cd140,&DAT_00807680,PTR_s_CUSTOM__0079c1bc,
                  abStack_165 + 1);
      }
      else {
        wsprintfA(&DAT_0080ed16,s__s_s_s_d_s_007cd930,&DAT_00807680,PTR_s_CUSTOM__0079c1bc,
                  abStack_165 + 1,iVar3,PTR_DAT_0079c1c0);
      }
      iVar3 = iVar3 + 1;
      local_10 = iVar3;
      pvVar4 = FindFirstFileA(&DAT_0080ed16,&local_5b0);
      local_14 = (uint)(pvVar4 != (HANDLE)0xffffffff);
      uVar1 = local_14;
    }
    FUN_0072e730(&DAT_0080ed16,local_36c,local_470,abStack_165 + 1,(byte *)0x0);
    __makepath(local_268,(char *)local_36c,(char *)local_470,(char *)(abStack_165 + 1),
               PTR_DAT_0079c1c0);
    pvVar4 = CreateFileA(local_268,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    local_c = pvVar4;
    if (pvVar4 == (HANDLE)0xffffffff) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Start_startsys_cpp_007cd718,0x458);
    }
    local_8 = SetFilePointer(pvVar4,0,(PLONG)0x0,0);
    if (local_8 == 0xffffffff) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Start_startsys_cpp_007cd718,0x459);
    }
    BVar5 = WriteFile(pvVar4,*(LPCVOID *)(iVar2 + 0x69a),*(DWORD *)(iVar2 + 0x6ae),&local_8,
                      (LPOVERLAPPED)0x0);
    if ((BVar5 == 0) || (*(DWORD *)(iVar2 + 0x6ae) != local_8)) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Start_startsys_cpp_007cd718,0x45a);
    }
    FlushFileBuffers(pvVar4);
    CloseHandle(pvVar4);
    __makepath(local_268,(char *)local_36c,(char *)local_470,(char *)(abStack_165 + 1),
               PTR_DAT_0079c1c4);
    pvVar4 = CreateFileA(local_268,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    local_c = pvVar4;
    if (pvVar4 == (HANDLE)0xffffffff) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Start_startsys_cpp_007cd718,0x45f);
    }
    local_8 = SetFilePointer(pvVar4,0,(PLONG)0x0,0);
    if (local_8 == 0xffffffff) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Start_startsys_cpp_007cd718,0x460);
    }
    BVar5 = WriteFile(pvVar4,(LPCVOID)(*(int *)(iVar2 + 0x6ae) + *(int *)(iVar2 + 0x69a)),
                      *(DWORD *)(iVar2 + 0x6b2),&local_8,(LPOVERLAPPED)0x0);
    if ((BVar5 == 0) || (*(DWORD *)(iVar2 + 0x6b2) != local_8)) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Start_startsys_cpp_007cd718,0x461);
    }
    FlushFileBuffers(pvVar4);
    CloseHandle(pvVar4);
    g_currentExceptionFrame = local_60.previous;
    return 1;
  }
  g_currentExceptionFrame = local_60.previous;
  if (local_c != (HANDLE)0xffffffff) {
    CloseHandle(local_c);
  }
  return local_18;
}

