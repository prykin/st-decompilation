
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\ourlib\Mfstmap.cpp
   Diagnostic line evidence: 498 | 500 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl mfTMapOptimize(short *param_1,undefined *param_2)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int iVar6;
  void *unaff_EDI;
  int iVar7;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_14 = 0;
  local_1c = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar7 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x1f2,0,iVar3,&DAT_007a4ccc,
                               s_mfTMapOptimize_007ef044);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    FUN_006f07e0((int *)&local_8);
    RaiseInternalException(iVar3,0,s_E__ourlib_Mfstmap_cpp_007eef88,500);
    if (-1 < iVar3) {
      return -1;
    }
    return iVar3;
  }
  if (param_2 != (undefined *)0x0) {
    iVar3 = FUN_006ef410((int)param_1);
    (*(code *)param_2)(-iVar3);
  }
  piVar4 = FUN_006f0620(param_1);
  local_c = 0;
  local_8 = piVar4;
  do {
    iVar7 = 0;
    iVar3 = local_c;
    if (0 < piVar4[1]) {
      do {
        iVar5 = *piVar4;
        iVar6 = 0;
        if (0 < iVar5) {
          do {
            uVar1 = *(ushort *)((int)piVar4 + ((piVar4[1] * iVar3 + iVar7) * iVar5 + 2 + iVar6) * 6)
            ;
            if ((uVar1 != 0) && ((uVar1 & 0xf00) != 0)) {
              local_10 = iVar3 + 1;
              if (local_10 < 6) {
                local_18 = local_10 * 4;
LAB_006f0419:
                iVar5 = FUN_006f02d0(piVar4,iVar6,iVar7,local_10,
                                     (uint)(0x200 < (*(ushort *)
                                                      ((int)piVar4 +
                                                      ((piVar4[1] * iVar3 + iVar7) * *piVar4 + 2 +
                                                      iVar6) * 6) & 0xf00)) +
                                     *(int *)(s_SprInRect_007eef64 + local_18 + iVar3 * -4 + 8));
                iVar3 = local_c;
                if (iVar5 == 0) goto code_r0x006f0465;
                local_10 = 0;
                iVar5 = local_c;
                if ((*(ushort *)
                      ((int)local_8 + ((local_8[1] * local_c + iVar7) * *local_8 + 2 + iVar6) * 6) &
                    0xf00) != 0) {
                  do {
                    if (-1 < iVar5) {
                      *(undefined2 *)
                       ((int)local_8 + ((iVar5 * local_8[1] + iVar7) * *local_8 + 2 + iVar6) * 6) =
                           0;
                      *(undefined2 *)
                       ((int)local_8 + ((local_8[1] * iVar5 + iVar7) * *local_8 + iVar6) * 6 + 10) =
                           0;
                      *(undefined2 *)
                       ((int)local_8 + ((local_8[1] * iVar5 + iVar7) * *local_8 + iVar6) * 6 + 8) =
                           0;
                    }
                    local_10 = local_10 + 1;
                    iVar5 = iVar5 + -1;
                  } while (local_10 <
                           (int)((*(ushort *)
                                   ((int)local_8 +
                                   ((local_8[1] * local_c + iVar7) * *local_8 + 2 + iVar6) * 6) &
                                 0xf00) >> 8));
                }
                FUN_006f0a50(param_1,local_8,iVar6,iVar7,1,1,local_c);
                local_14 = local_14 + 1;
                piVar4 = local_8;
              }
LAB_006f0559:
              if (param_2 != (undefined *)0x0) {
                local_1c = local_1c + 1;
                (*(code *)param_2)(local_1c);
                piVar4 = local_8;
              }
            }
            iVar5 = *piVar4;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar5);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < piVar4[1]);
    }
    local_c = iVar3 + 1;
    if (4 < local_c) {
      FUN_006f07e0((int *)&local_8);
      g_currentExceptionFrame = local_60.previous;
      return local_14;
    }
  } while( true );
code_r0x006f0465:
  local_10 = local_10 + 1;
  local_18 = local_18 + 4;
  piVar4 = local_8;
  if (0x17 < local_18) goto LAB_006f0559;
  goto LAB_006f0419;
}

