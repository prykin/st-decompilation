
int __cdecl FUN_006ef530(int param_1,int param_2,char *param_3)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar7;
  undefined4 local_44 [16];
  
  pIVar7 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  iVar2 = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar7);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x66);
    }
    puVar3 = FUN_006f0cd0(*(undefined4 *)(param_1 + 9),param_3,1);
    *(int *)(param_2 + 0x1c) = (int)(short)*puVar3;
    *(ushort **)(param_2 + 0x20) = puVar3 + 10;
    *(int *)(param_2 + 0x24) = (int)(short)puVar3[1];
    *(ushort **)(param_2 + 0x28) = puVar3 + (short)*puVar3 * 6 + 10;
    bVar6 = (byte)(*(ushort *)(param_2 + 0x4e) >> 8);
    if ((*(ushort *)(param_2 + 0x4e) & 0x1000) == 0) {
      bVar6 = bVar6 & 0xf;
    }
    else {
      bVar6 = (bVar6 & 0xf) - 1;
    }
    *(byte *)(param_2 + 0x48) = bVar6;
    puVar5 = (undefined4 *)(param_2 + 0x2c);
    iVar2 = 4;
    do {
      puVar3 = puVar3 + 2;
      *puVar5 = *(undefined4 *)puVar3;
      puVar5 = puVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    g_currentExceptionFrame = pIVar7;
    return 0;
  }
  g_currentExceptionFrame = pIVar7;
  iVar4 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x70,0,iVar2,&DAT_007a4ccc,
                             s__mfTMapSetMeshParam_007eefc4);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x72);
  return iVar2;
}

