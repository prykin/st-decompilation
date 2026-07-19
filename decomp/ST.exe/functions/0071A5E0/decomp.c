
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\mfwav.cpp
   Diagnostic line evidence: 328 | 367 | 391 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int * __cdecl mfSndTblLoad(int param_1,char *param_2,byte param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  uint uVar7;
  ushort *puVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar14;
  int iVar15;
  bool bVar16;
  InternalExceptionFrame local_58;
  int local_14;
  int local_10;
  uint *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (uint *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  local_14 = iVar3;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar12 = ReportDebugMessage(s_E__Ourlib_mfwav_cpp_007f0800,0x16f,0,iVar3,&DAT_007a4ccc,
                                s_mfSndTblLoad_007f0870);
    if (iVar12 == 0) {
      if (local_8 != (int *)0x0) {
        if (local_8[3] != 0) {
          local_10 = 0;
          piVar9 = local_8;
          if (0 < local_8[2]) {
            iVar12 = 0;
            do {
              iVar10 = piVar9[3];
              if (*(int **)(iVar12 + iVar10) != (int *)0x0) {
                iVar13 = 0;
                if (0 < **(int **)(iVar12 + iVar10)) {
                  iVar15 = 5;
                  do {
                    if (*(int *)(*(int *)(iVar12 + iVar10) + iVar15) != 0) {
                      cMf32::RecMemFree((cMf32 *)*piVar9,
                                        (uint *)(*(int *)(iVar12 + iVar10) + iVar15));
                      piVar9 = local_8;
                    }
                    iVar10 = piVar9[3];
                    iVar13 = iVar13 + 1;
                    iVar15 = iVar15 + 5;
                    iVar3 = local_14;
                  } while (iVar13 < **(int **)(iVar12 + iVar10));
                }
                FUN_006ab060((undefined4 *)(piVar9[3] + iVar12));
                piVar9 = local_8;
              }
              local_10 = local_10 + 1;
              iVar12 = iVar12 + 4;
            } while (local_10 < piVar9[2]);
          }
          FUN_006ab060(piVar9 + 3);
        }
        if ((byte *)local_8[1] != (byte *)0x0) {
          FUN_006b5570((byte *)local_8[1]);
        }
        FUN_006ab060(&local_8);
      }
      if (local_c != (uint *)0x0) {
        FUN_006b5570((byte *)local_c);
      }
      RaiseInternalException(iVar3,0,s_E__Ourlib_mfwav_cpp_007f0800,0x187);
      return (int *)0x0;
    }
    pcVar2 = (code *)swi(3);
    piVar9 = (int *)(*pcVar2)();
    return piVar9;
  }
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfwav_cpp_007f0800,0x148);
  }
  local_8 = Library::DKW::LIB::FUN_006aac10(0x10);
  *local_8 = param_1;
  puVar4 = mfSarLoad(param_1,param_2,1);
  local_8[1] = (int)puVar4;
  local_8[2] = *(int *)(local_8[1] + 8);
  puVar5 = Library::DKW::LIB::FUN_006aac10(local_8[2] << 2);
  iVar3 = 0;
  local_8[3] = (int)puVar5;
  piVar9 = local_8;
  if (0 < local_8[2]) {
    do {
      if (iVar3 < *(int *)(piVar9[1] + 8)) {
        pbVar6 = *(byte **)(*(int *)(piVar9[1] + 0x14) + iVar3 * 4);
      }
      else {
        pbVar6 = (byte *)0x0;
      }
      if (pbVar6 != (byte *)0x0) {
        pcVar14 = s_NO_SOUND_007f0880;
        pbVar11 = pbVar6;
        do {
          bVar1 = *pbVar11;
          bVar16 = bVar1 < (byte)*pcVar14;
          if (bVar1 != *pcVar14) {
LAB_0071a6d3:
            iVar12 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_0071a6d8;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar16 = bVar1 < (byte)pcVar14[1];
          if (bVar1 != pcVar14[1]) goto LAB_0071a6d3;
          pbVar11 = pbVar11 + 2;
          pcVar14 = pcVar14 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_0071a6d8:
        piVar9 = local_8;
        if (iVar12 != 0) {
          puVar4 = mfSarLoad(param_1,(char *)pbVar6,1);
          local_c = puVar4;
          puVar5 = Library::DKW::LIB::FUN_006aac10(puVar4[2] * 5 + 9);
          *(undefined4 **)(local_8[3] + iVar3 * 4) = puVar5;
          **(undefined4 **)(local_8[3] + iVar3 * 4) = 0;
          puVar4[1] = 0;
          while( true ) {
            if ((int)puVar4[1] < (int)puVar4[2]) {
              uVar7 = puVar4[1] + 1;
              pcVar14 = *(char **)((puVar4[5] - 4) + uVar7 * 4);
              puVar4[1] = uVar7;
            }
            else {
              pcVar14 = (char *)0x0;
            }
            if (pcVar14 == (char *)0x0) break;
            piVar9 = *(int **)(local_8[3] + iVar3 * 4);
            puVar8 = mfWavLoad(param_1,pcVar14,param_3,0);
            *(ushort **)((int)piVar9 + (*piVar9 + 1) * 5) = puVar8;
            piVar9 = *(int **)(local_8[3] + iVar3 * 4);
            puVar4 = local_c;
            if (*(int *)((int)piVar9 + (*piVar9 + 1) * 5) != 0) {
              piVar9 = *(int **)(local_8[3] + iVar3 * 4);
              iVar12 = mfWavGetType(param_1,pcVar14,0);
              *(char *)(*piVar9 * 5 + 4 + (int)piVar9) = (char)iVar12;
              piVar9 = *(int **)(local_8[3] + iVar3 * 4);
              *piVar9 = *piVar9 + 1;
              puVar4 = local_c;
            }
          }
          FUN_006b5570((byte *)puVar4);
          local_c = (uint *)0x0;
          piVar9 = local_8;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar9[2]);
  }
  g_currentExceptionFrame = local_58.previous;
  return piVar9;
}

