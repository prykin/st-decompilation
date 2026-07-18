
void FUN_00744e70(void)

{
  uint *_Str1;
  DWORD DVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  DAT_00857438 = 0;
  DAT_007f27e8 = 0xffffffff;
  DAT_007f27d8 = 0xffffffff;
  _Str1 = (uint *)FID_conflict___getenv_lk("TZ");
  if (_Str1 == (uint *)0x0) {
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00857440);
    if (DVar1 != 0xffffffff) {
      DAT_00857438 = 1;
      DAT_007f2740 = DAT_00857440 * 0x3c;
      if (DAT_00857486 != 0) {
        DAT_007f2740 = DAT_007f2740 + DAT_00857494 * 0x3c;
      }
      if ((DAT_008574da == 0) || (DAT_008574e8 == 0)) {
        DAT_007f2744 = 0;
        DAT_007f2748 = 0;
      }
      else {
        DAT_007f2744 = 1;
        DAT_007f2748 = (DAT_008574e8 - DAT_00857494) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(DAT_00857220,0x220,(LPCWSTR)&DAT_00857444,-1,PTR_DAT_007f27cc,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_007f27cc = 0;
      }
      else {
        PTR_DAT_007f27cc[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(DAT_00857220,0x220,(LPCWSTR)&DAT_00857498,-1,PTR_DAT_007f27d0,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_007f27d0 = 0;
      }
      else {
        PTR_DAT_007f27d0[0x3f] = 0;
      }
    }
  }
  else if (((char)*_Str1 != '\0') &&
          ((DAT_008574ec == (uint *)0x0 ||
           (iVar2 = _strcmp((char *)_Str1,(char *)DAT_008574ec), iVar2 != 0)))) {
    thunk_FUN_006a49c0(DAT_008574ec,2);
    iVar2 = 0x10c;
    pcVar5 = "tzset.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)_Str1);
    DAT_008574ec = (uint *)thunk_FUN_006a3c10(sVar3 + 1,uVar4,pcVar5,iVar2);
    if (DAT_008574ec != (uint *)0x0) {
      FUN_0073a240(DAT_008574ec,_Str1);
      _strncpy(PTR_DAT_007f27cc,(char *)_Str1,3);
      PTR_DAT_007f27cc[3] = 0;
      local_10 = (uint *)((int)_Str1 + 3);
      if (*(char *)local_10 == '-') {
        local_8 = local_8 + 1;
        local_10 = _Str1 + 1;
      }
      iVar2 = FUN_0072fe00((byte *)local_10);
      DAT_007f2740 = iVar2 * 0xe10;
      for (; ((char)*local_10 == '+' || (('/' < (char)*local_10 && ((char)*local_10 < ':'))));
          local_10 = (uint *)((int)local_10 + 1)) {
      }
      if ((char)*local_10 == ':') {
        local_10 = (uint *)((int)local_10 + 1);
        iVar2 = FUN_0072fe00((byte *)local_10);
        DAT_007f2740 = DAT_007f2740 + iVar2 * 0x3c;
        for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
            local_10 = (uint *)((int)local_10 + 1)) {
        }
        if ((char)*local_10 == ':') {
          local_10 = (uint *)((int)local_10 + 1);
          iVar2 = FUN_0072fe00((byte *)local_10);
          DAT_007f2740 = DAT_007f2740 + iVar2;
          for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
              local_10 = (uint *)((int)local_10 + 1)) {
          }
        }
      }
      if (local_8 != 0) {
        DAT_007f2740 = -DAT_007f2740;
      }
      DAT_007f2744 = (int)(char)*local_10;
      if (DAT_007f2744 == 0) {
        *PTR_DAT_007f27d0 = 0;
      }
      else {
        _strncpy(PTR_DAT_007f27d0,(char *)local_10,3);
        PTR_DAT_007f27d0[3] = 0;
      }
    }
  }
  return;
}

