
int __cdecl
thunk_FUN_006785a0(byte *param_1,char param_2,short param_3,short param_4,short param_5,
                  short param_6,short param_7,short param_8,undefined *param_9,undefined4 param_10)

{
  byte bVar1;
  int *this;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 unaff_ESI;
  byte *pbVar7;
  void *unaff_EDI;
  bool bVar8;
  InternalExceptionFrame IStack_6c;
  byte abStack_28 [16];
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  short sStack_c;
  short sStack_a;
  short sStack_8;
  char cStack_5;
  
  iStack_18 = 0;
  if ((param_2 < '\0') || (cStack_5 = param_2, '\a' < param_2)) {
    cStack_5 = -1;
  }
  IStack_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_6c;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_6c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x470,0,iVar3,&DAT_007a4ccc,
                               s__EnumDest_007d2e40);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x471);
    return iVar3;
  }
  if (DAT_007fa164 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x459);
  }
  uStack_10 = *(int *)(DAT_007fa164 + 0xc) - 1;
  if ((int)uStack_10 < 0) {
    g_currentExceptionFrame = IStack_6c.previous;
    return iStack_18;
  }
  do {
    if (uStack_10 < *(uint *)(DAT_007fa164 + 0xc)) {
      puVar4 = (undefined4 *)
               (*(int *)(DAT_007fa164 + 8) * uStack_10 + *(int *)(DAT_007fa164 + 0x1c));
    }
    else {
      puVar4 = (undefined4 *)0x0;
    }
    this = (int *)*puVar4;
    if (this != (int *)0x0) {
      iVar3 = 1;
      iStack_14 = 1;
      if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
        (**(code **)(*this + 0x74))(abStack_28);
        pbVar7 = abStack_28;
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_0067868d:
            iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00678692;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_0067868d;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00678692:
        if (iVar6 != 0) {
          iVar3 = 0;
          iStack_14 = 0;
        }
      }
      if ((iVar3 != 0) &&
         ((cStack_5 == -1 || (iVar6 = (**(code **)(*this + 0x6c))(), cStack_5 == iVar6)))) {
        if ((0 < param_6) &&
           (((0 < param_7 && (0 < param_8)) &&
            ((thunk_FUN_004162b0(this,&sStack_8,&sStack_a,&sStack_c), sStack_8 < param_3 ||
             ((((sStack_a < param_4 || (sStack_c < param_5)) ||
               ((int)param_3 + (int)param_6 <= (int)sStack_8)) ||
              (((int)param_4 + (int)param_7 <= (int)sStack_a ||
               (iVar3 = iStack_14, (int)param_5 + (int)param_8 <= (int)sStack_c)))))))))) {
          iVar3 = 0;
        }
        if (((iVar3 != 0) && (param_9 != (undefined *)0x0)) &&
           (iVar3 = (*(code *)param_9)(0,uStack_10,this,param_10), iVar3 != 0)) {
          g_currentExceptionFrame = IStack_6c.previous;
          return -1;
        }
      }
    }
    uStack_10 = uStack_10 - 1;
    if ((int)uStack_10 < 0) {
      g_currentExceptionFrame = IStack_6c.previous;
      return iStack_18;
    }
  } while( true );
}

