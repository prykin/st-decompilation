
int __cdecl
FUN_006eff90(short *param_1,int param_2,int param_3,int param_4,uint param_5,ushort param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  LPSTR pCVar4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == (short *)0x0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x17b);
    }
    if ((((param_2 < 0) || (*param_1 <= param_2)) || (param_3 < 0)) ||
       (((param_1[1] <= param_3 || (param_4 < 0)) || ((5 < param_4 || ((param_6 & 0x7fff) == 0))))))
    {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x17c);
    }
    FUN_006f01a0(param_1,param_2,param_3,param_4);
    local_8 = param_2 / 2;
    puVar3 = FUN_006aac10(0x50);
    *(undefined4 **)
     ((int)param_1 +
     ((((int)param_1[1] / 2) * param_4 + param_3 / 2) * ((int)*param_1 / 2) + local_8) * 4 + 0x459)
         = puVar3;
    local_c = ((int)param_1[1] / 2) * param_4 + param_3 / 2;
    iVar2 = *(int *)((int)param_1 + (local_c * ((int)*param_1 / 2) + local_8) * 4 + 0x459);
    *(uint *)(iVar2 + 0x4a) = param_5;
    *(ushort *)(iVar2 + 0x4e) = param_6;
    *(undefined2 *)(iVar2 + 4) = (undefined2)param_2;
    *(undefined2 *)(iVar2 + 6) = (undefined2)param_3;
    *(short *)(iVar2 + 8) = (short)param_4;
    if (param_5._2_2_ == 0) {
      pCVar4 = (char *)0x0;
    }
    else {
      pCVar4 = FUN_006f2c00(s_MAPTXTR_007dfab4,3,param_5._2_2_ & 0x7fff);
    }
    if ((short)param_5 == 0) {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = FUN_006f2c00(s_MAPTXTR_007dfab4,3,param_5 & 0x7fff);
    }
    FUN_006ef440((int)param_1,iVar2,pcVar5,pCVar4);
    pCVar4 = FUN_006f2c00(s_MAPMESH_007dfac0,3,param_6 & 0x7fff);
    FUN_006ef530((int)param_1,iVar2,pCVar4);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,400,0,iVar2,&DAT_007a4ccc,
                             s_mfTMapAddObj_007ef024);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x192);
  return iVar2;
}

