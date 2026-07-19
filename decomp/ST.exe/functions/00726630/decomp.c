
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\mfspr.cpp
   Diagnostic line evidence: 322 | 324 | 337 | 355 | 357 (metadata/report site, not the function
   definition)
   [STSourceProvenanceApplier end] */

int * __cdecl mfUSprLoad(int param_1,char *param_2,byte param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  InternalExceptionFrame local_5c;
  short local_18 [3];
  undefined1 local_12;
  ushort *local_c;
  int *local_8;
  
  local_c = (ushort *)0x0;
  local_8 = (int *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (param_1 == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfspr_cpp_007f0c8c,0x142);
    }
    local_c = cMf32::RecGet((cMf32 *)param_1,0x15,param_2,(int *)0x0,param_4);
    if (local_c == (ushort *)0x0) {
      RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mfspr_cpp_007f0c8c,0x144);
    }
    cMf32::RecGetParam((cMf32 *)param_1,0x15,param_2,(undefined4 *)local_18,1);
    local_8 = Library::DKW::LIB::FUN_006aac10(local_18[0] * 4 + 0x19);
    *local_8 = (int)local_18[0];
    *(int *)((int)local_8 + 5) = param_1;
    *(undefined1 *)(local_8 + 1) = local_12;
    puVar4 = Library::DKW::LIB::FUN_006aac10(*local_8 << 2);
    iVar3 = 0;
    *(undefined4 **)((int)local_8 + 0x11) = puVar4;
    if (0 < *local_8) {
      iVar7 = 0;
      do {
        puVar5 = mfImgLoad(param_1,*(byte *)(iVar7 + (int)local_c),
                           (char *)(iVar7 + 1 + (int)local_c),param_3,param_4);
        *(ushort **)(*(int *)((int)local_8 + 0x11) + iVar3 * 4) = puVar5;
        if (*(int *)(*(int *)((int)local_8 + 0x11) + iVar3 * 4) == 0) {
          RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mfspr_cpp_007f0c8c,0x151);
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar7 + 0x21;
        iVar7 = iVar7 + 0x25;
        *(undefined4 *)((int)local_8 + iVar3 * 4 + 0x11) = *(undefined4 *)(iVar1 + (int)local_c);
      } while (iVar3 < *local_8);
    }
    iVar3 = mfImgGetWidth(param_1,(byte)*local_c,(char *)((int)local_c + 1),1);
    *(int *)((int)local_8 + 9) = iVar3;
    iVar3 = mfImgGetHeight(param_1,(byte)*local_c,(char *)((int)local_c + 1),1);
    *(int *)((int)local_8 + 0xd) = iVar3;
    g_currentExceptionFrame = local_5c.previous;
    cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_c);
    return local_8;
  }
  g_currentExceptionFrame = local_5c.previous;
  cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_c);
  if (local_8 != (int *)0x0) {
    if (*(int *)((int)local_8 + 0x11) != 0) {
      iVar7 = 0;
      if (0 < *local_8) {
        do {
          cMf32::RecMemFree((cMf32 *)param_1,(uint *)(*(int *)((int)local_8 + 0x11) + iVar7 * 4));
          iVar7 = iVar7 + 1;
        } while (iVar7 < *local_8);
      }
      FUN_006ab060((undefined4 *)((int)local_8 + 0x11));
    }
    FUN_006ab060(&local_8);
  }
  if ((param_4 != 0) || (iVar3 != -4)) {
    iVar7 = ReportDebugMessage(s_E__Ourlib_mfspr_cpp_007f0c8c,0x163,0,iVar3,&DAT_007a4ccc,
                               s_mfUSprLoad_007f0d00);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      piVar6 = (int *)(*pcVar2)();
      return piVar6;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_mfspr_cpp_007f0c8c,0x165);
  }
  return (int *)0x0;
}

