
short * __cdecl FUN_006ef640(int param_1,char *param_2,int param_3,int param_4,undefined *param_5)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ushort uVar3;
  code *pcVar4;
  int iVar5;
  LPSTR pCVar6;
  undefined4 uVar7;
  char *pcVar8;
  short *psVar9;
  undefined4 unaff_ESI;
  int iVar10;
  void *unaff_EDI;
  byte bVar11;
  int iVar12;
  InternalExceptionFrame local_64;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  ushort *local_14;
  short *local_10;
  short local_a;
  short local_8;
  undefined1 local_6;
  byte local_5;
  
  local_10 = (short *)0x0;
  local_14 = (ushort *)0x0;
  local_5 = 0;
  local_6 = 0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar5 = __setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 == 0) {
    if (param_1 == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x8b);
    }
    if (param_3 == 0) {
      param_3 = param_1;
    }
    if (param_4 == 0) {
      param_4 = param_3;
    }
    iVar5 = FUN_006ef300(param_1,param_2,&local_a,&local_8,(undefined1 *)0x0,&local_6,&local_5);
    local_20 = iVar5;
    if (param_5 != (undefined *)0x0) {
      (*(code *)param_5)(-iVar5);
    }
    local_10 = (short *)FUN_006aac10(((int)local_a / 2) * ((int)local_8 / 2) * 0x18 + 0x45d);
    *local_10 = local_a;
    local_10[1] = local_8;
    *(undefined1 *)(local_10 + 2) = local_6;
    *(int *)((int)local_10 + 5) = param_3;
    *(int *)((int)local_10 + 9) = param_4;
    *(int *)((int)local_10 + 0x455) = ((int)local_a / 2) * ((int)local_8 / 2) * 6;
    iVar10 = 0;
    do {
      iVar12 = 1;
      bVar11 = 0;
      pCVar6 = FUN_006f2c00(s_BRDTXTR_007eefe4,3,iVar10);
      uVar7 = FUN_0070aa30(*(undefined4 *)((int)local_10 + 5),pCVar6,bVar11,iVar12);
      *(undefined4 *)((int)local_10 + iVar10 * 4 + 0x40d) = uVar7;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x10);
    if (local_5 < 5) {
      RaiseInternalException(-5,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x9e);
    }
    local_14 = FUN_006f1ce0(0xf,param_2,(int *)0x0,1);
    local_18 = 0;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        pbVar1 = (byte *)(iVar5 + (int)local_14);
        local_1c = FUN_006aac10(0x50);
        *(undefined4 **)
         ((int)local_10 +
         ((((int)local_10[1] / 2) * (uint)*pbVar1 + (uint)(pbVar1[2] >> 1)) * ((int)*local_10 / 2) +
         (uint)(pbVar1[1] >> 1)) * 4 + 0x459) = local_1c;
        puVar2 = (undefined4 *)(iVar5 + 3 + (int)local_14);
        iVar10 = *(int *)((int)local_10 +
                         ((((int)local_10[1] / 2) * (uint)*(byte *)(iVar5 + (int)local_14) +
                          (uint)(*(byte *)(iVar5 + 2 + (int)local_14) >> 1)) * ((int)*local_10 / 2)
                         + (uint)(*(byte *)(iVar5 + 1 + (int)local_14) >> 1)) * 4 + 0x459);
        *(undefined4 *)(iVar10 + 0x4a) = *puVar2;
        *(undefined2 *)(iVar10 + 0x4e) = *(undefined2 *)(puVar2 + 1);
        *(ushort *)(iVar10 + 4) = (ushort)*(byte *)(iVar5 + 1 + (int)local_14);
        *(ushort *)(iVar10 + 6) = (ushort)*(byte *)(iVar5 + 2 + (int)local_14);
        *(ushort *)(iVar10 + 8) = (ushort)*(byte *)(iVar5 + (int)local_14);
        uVar3 = *(ushort *)(iVar5 + 5 + (int)local_14);
        if (uVar3 == 0) {
          pCVar6 = (char *)0x0;
        }
        else {
          pCVar6 = FUN_006f2c00(s_MAPTXTR_007dfab4,3,uVar3 & 0x7fff);
        }
        uVar3 = *(ushort *)(iVar5 + 3 + (int)local_14);
        if (uVar3 == 0) {
          pcVar8 = (char *)0x0;
        }
        else {
          pcVar8 = FUN_006f2c00(s_MAPTXTR_007dfab4,3,uVar3 & 0x7fff);
        }
        FUN_006ef440((int)local_10,iVar10,pcVar8,pCVar6);
        pCVar6 = FUN_006f2c00(s_MAPMESH_007dfac0,3,*(ushort *)(iVar5 + 7 + (int)local_14) & 0x7fff);
        FUN_006ef530((int)local_10,iVar10,pCVar6);
        if (param_5 != (undefined *)0x0) {
          (*(code *)param_5)(local_18);
        }
        local_18 = local_18 + 1;
        iVar5 = iVar5 + 9;
      } while (local_18 < local_20);
    }
    cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_14);
    g_currentExceptionFrame = local_64.previous;
    return local_10;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar10 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0xba,0,iVar5,&DAT_007a4ccc,
                              s_mfTMapLoad_007eefd8);
  if (iVar10 != 0) {
    pcVar4 = (code *)swi(3);
    psVar9 = (short *)(*pcVar4)();
    return psVar9;
  }
  cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_14);
  FUN_006efb70((int *)&local_10);
  RaiseInternalException(iVar5,0,s_E__ourlib_Mfstmap_cpp_007eef88,0xbf);
  return (short *)0x0;
}

