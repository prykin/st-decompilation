
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2003 Debug */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int local_14;
  
  piVar4 = xcptlookup(_ExceptionNum);
  uVar3 = DAT_008572f4;
  if ((piVar4 == (int *)0x0) || (piVar4[2] == 0)) {
    iVar5 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (piVar4[2] == 5) {
    piVar4[2] = 0;
    iVar5 = 1;
  }
  else if (piVar4[2] == 1) {
    iVar5 = -1;
    DAT_008572f4 = (_EXCEPTION_POINTERS *)uVar3;
  }
  else {
    pcVar1 = (code *)piVar4[2];
    DAT_008572f4 = _ExceptionPtr;
    if (piVar4[1] == 8) {
      for (local_14 = DAT_007f1fe8; uVar2 = DAT_007f1ff4, local_14 < DAT_007f1fe8 + _DAT_007f1fec;
          local_14 = local_14 + 1) {
        *(undefined4 *)(local_14 * 0xc + 0x7f1f78) = 0;
      }
      if (*piVar4 == -0x3fffff72) {
        DAT_007f1ff4 = 0x83;
      }
      else if (*piVar4 == -0x3fffff70) {
        DAT_007f1ff4 = 0x81;
      }
      else if (*piVar4 == -0x3fffff6f) {
        DAT_007f1ff4 = 0x84;
      }
      else if (*piVar4 == -0x3fffff6d) {
        DAT_007f1ff4 = 0x85;
      }
      else if (*piVar4 == -0x3fffff73) {
        DAT_007f1ff4 = 0x82;
      }
      else if (*piVar4 == -0x3fffff71) {
        DAT_007f1ff4 = 0x86;
      }
      else if (*piVar4 == -0x3fffff6e) {
        DAT_007f1ff4 = 0x8a;
      }
      (*pcVar1)(8,DAT_007f1ff4);
      DAT_007f1ff4 = uVar2;
    }
    else {
      piVar4[2] = 0;
      (*pcVar1)(piVar4[1]);
    }
    iVar5 = -1;
    DAT_008572f4 = (_EXCEPTION_POINTERS *)uVar3;
  }
  return iVar5;
}

