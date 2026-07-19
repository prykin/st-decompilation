
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecGetOrigLen */

int __thiscall
cMf32::RecGetOrigLen(cMf32 *this,byte param_1,char *param_2,undefined1 *param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  ushort *puVar8;
  CHAR local_158 [260];
  InternalExceptionFrame local_54;
  cMf32 *local_10;
  undefined4 local_c;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    if ((param_4 == 0) && (iVar4 == -4)) {
      return -4;
    }
    wsprintfA(local_158,s_cMf32__RecGetOrigLen_File___s__S_007efc90,&local_10[0xb].field_0x21,
              s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
    iVar5 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x2e7,0,iVar4,&DAT_007a4ccc,
                               local_158);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    RaiseInternalException(iVar4,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x2e9);
    if (iVar4 < 0) {
      return iVar4;
    }
    return -1;
  }
  uVar6 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_8 = (ushort *)Library::DKW::LIB::FUN_006aac10(~uVar6 + 0x17);
  *(byte *)local_8 = param_1;
  iVar4 = -1;
  pcVar7 = param_2;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_8[0xb] = ~(ushort)iVar4 - 1;
  uVar2 = local_8[0xb];
  puVar8 = local_8 + 0xc;
  for (uVar6 = (uint)(int)(short)uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    puVar8 = puVar8 + 2;
  }
  for (uVar6 = (int)(short)uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = (ushort *)((int)puVar8 + 1);
  }
  iVar4 = Library::DKW::DB::FUN_00751b60(*(int *)local_10->field_0000,local_8,&local_c);
  if (iVar4 == -4) {
    RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0x2dd);
  }
  iVar4 = *(int *)(local_8 + 3);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = *(undefined1 *)((int)local_8 + 5);
  }
  if (local_8 != (ushort *)0x0) {
    FUN_006ab060(&local_8);
  }
  g_currentExceptionFrame = local_54.previous;
  return iVar4;
}

