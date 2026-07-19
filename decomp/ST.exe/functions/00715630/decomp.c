
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\ourlib\connect.cpp
   Diagnostic line evidence: 151 | 187 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __cdecl
FUN_00715630(int *param_1,int param_2,uint *param_3,int *param_4,undefined4 *param_5,uint *param_6,
            int param_7,int param_8)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  byte *pbVar4;
  void *unaff_EDI;
  InternalExceptionFrame local_a8;
  InternalExceptionFrame local_64;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  byte *local_c;
  byte *local_8;
  
  local_14 = 0;
  local_8 = (byte *)0x0;
  local_c = (byte *)0x0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar1 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    if ((local_10 != 0) && (local_c != (byte *)0x0)) {
      FUN_006ab060(&local_c);
    }
    if (iVar1 != -0x4d) {
      RaiseInternalException(iVar1,0,s_E__ourlib_connect_cpp_007f043c,0xbb);
      return 0xffffffff;
    }
    return 0xffffffb3;
  }
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar1 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    local_14 = Library::DKW::DDX::FUN_006b7400
                         (param_1,param_2,param_4,(int *)&local_8,(int *)&local_18,param_7,param_8);
    g_currentExceptionFrame = local_a8.previous;
  }
  else {
    g_currentExceptionFrame = local_a8.previous;
    RaiseInternalException(-0x4d,0,s_E__ourlib_connect_cpp_007f043c,0x97);
  }
  if (local_14 == 0) {
    local_c = cnUnPackMess(local_8,local_18,(byte *)&local_20,(int *)&local_10,&local_1c);
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = local_10;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = local_20 & 0xff;
    }
    if (local_10 != 0) {
      if (param_5 == (undefined4 *)0x0) {
        if (local_c != (byte *)0x0) {
          FUN_006ab060(&local_c);
        }
      }
      else if (local_1c == 0) {
        pbVar2 = (byte *)Library::DKW::LIB::FUN_006aac70(local_10);
        *param_5 = pbVar2;
        pbVar4 = local_c;
        for (uVar3 = local_10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
          pbVar4 = pbVar4 + 4;
          pbVar2 = pbVar2 + 4;
        }
        for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
          *pbVar2 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          pbVar2 = pbVar2 + 1;
        }
      }
      else {
        *param_5 = local_c;
      }
    }
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    g_currentExceptionFrame = local_64.previous;
    return 1;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

