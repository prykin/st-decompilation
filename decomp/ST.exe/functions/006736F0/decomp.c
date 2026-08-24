#include "../../pseudocode_runtime.h"


/* WARNING: Unable to use type for symbol pbVar9 */
/* WARNING: Unable to use type for symbol temp_3fbe8e62c1 */
/* WARNING: Unable to use type for symbol pbVar4 */

int FUN_006736f0(void)

{
  byte bVar1;
  char cVar2;
  int local_EAX_24;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6_mg1;
  char *pcVar6;
  int iVar3;
  uint uVar7;
  uint uVar8;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  InternalExceptionFrame local_54;
  uint local_10;
  byte *local_c;
  int *local_8;
  char *pbVar9;
  char *temp_3fbe8e62c1;
  char *pbVar4;

  local_8 = nullptr;
  local_10 = DAT_007d2d24;
  local_EAX_24 = FUN_00673d20();
  if (-1 < local_EAX_24) {
    do {
      if (DAT_007d2d18 != 0x2a) {
        DAT_007d2d24 = DAT_007d2d24 ^ (DAT_007d2d24 ^ local_10) & 1;
        if ((DAT_007d2d18 == 0x24) && ((DAT_007d2d24 & 0x200) != 0)) {
          if (DAT_00857558 <= DAT_00811914) goto LAB_006739be;
          goto LAB_00673990;
        }
        break;
      }
      DAT_007d2d24 = DAT_007d2d24 | 1;
      if (DAT_00811914 < DAT_00857558) {
        do {
          if ((DAT_007d2d18 == 0x3c) || (DAT_007d2d18 == 0x22)) break;
          if (DAT_007d2d18 == 0x1d) goto cf_common_exit_00673BA7;
          local_EAX_24 = FUN_00673d20();
          if (local_EAX_24 < 0) goto cf_common_exit_00673BB3;
        } while (DAT_00811914 < DAT_00857558);
      }
      if (DAT_007d2d18 == 0x1d) {
cf_common_exit_00673BA7:
        local_EAX_24 = -6;
        break;
      }
      if ((DAT_007d2d24 & 0x800) == 0) {
        local_8 = DAT_00811908;
        if (DAT_007d2d18 == 0x3c) {
          local_c = (byte *)PTR_00811948;
        }
        else {
          local_c = (byte *)PTR_00857528;
        }
        for (; local_8 != nullptr; local_8 = (int *)*local_8) {
          pbVar3 = (byte *)local_8[1];
          pbVar10 = local_c;
          do {
            bVar1 = *pbVar3;
            bVar12 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_006737e2:
              iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_006737e7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar12 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_006737e2;
            pbVar3 = pbVar3 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_006737e7:
          if (iVar4 == 0) break;
        }
        if (local_8 != nullptr) goto LAB_0067383b;
        piVar5 = Library::DKW::LIB::MemAlloc(0xc);
        if (piVar5 != nullptr) {
          local_8 = piVar5;
          pcVar6_mg1 = FUN_006c49b0((char *)local_c);
          piVar5[1] = (int)pcVar6_mg1;
          if (pcVar6_mg1 != nullptr) {
            piVar5[2] = 0;
            FUN_006b9910(&DAT_00811908,(int)piVar5);
            goto LAB_0067383b;
          }
        }
LAB_00673bae:
        local_EAX_24 = -2;
        break;
      }
LAB_0067383b:
      if (DAT_007d2d18 != 0x1d) {
        local_EAX_24 = FUN_00673d20();
        goto joined_r0x00673849;
      }
      while ((DAT_007d2d18 != 0x3c && (DAT_007d2d18 != 0x22))) {
        if (DAT_007d2d18 == 0x1d) goto cf_common_exit_00673BA7;
        local_EAX_24 = FUN_00673d20();
joined_r0x00673849:
        if (local_EAX_24 < 0) goto cf_common_exit_00673BB3;
      }
      if (DAT_007d2d18 == 0x1d) goto cf_common_exit_00673BA7;
      if ((DAT_007d2d24 & 0x800) == 0) {
        temp_3fbe8e62c1 = PTR_00811948;
        if (DAT_007d2d18 != 0x3c) {
          temp_3fbe8e62c1 = PTR_00857528;
        }
        pbVar3 = (byte *)FUN_006c49b0(temp_3fbe8e62c1);
        piVar5 = local_8;
        local_8[2] = (int)pbVar3;
        if (pbVar3 == nullptr) goto LAB_00673bae;
        pbVar10 = (byte *)local_8[1];
        do {
          bVar1 = *pbVar10;
          bVar12 = bVar1 < *pbVar3;
          if (bVar1 != *pbVar3) {
LAB_006738e9:
            iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_006738ee;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar12 = bVar1 < pbVar3[1];
          if (bVar1 != pbVar3[1]) goto LAB_006738e9;
          pbVar10 = pbVar10 + 2;
          pbVar3 = pbVar3 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_006738ee:
        if (iVar4 == 0) {
          FUN_006b98c0((int *)&DAT_00811908,local_8);
          FUN_006a5e90((short *)piVar5[1]);
          FUN_006a5e90((short *)piVar5[2]);
          FUN_006a5e90((short *)piVar5);
        }
      }
      while (DAT_007d2d18 != 0x1d) {
        local_EAX_24 = FUN_00673d20();
        if (local_EAX_24 < 0) goto cf_common_exit_00673BB3;
      }
      if ((local_10 & 1) != 0) {
        thunk_FUN_00673690(0x1d);
      }
      local_EAX_24 = FUN_00673d20();
      if (local_EAX_24 < 0) break;
    } while( true );
  }
  goto cf_common_exit_00673BB3;
  while( true ) {
    if (DAT_007d2d18 == 0x22) goto LAB_006739cd;
    local_EAX_24 = FUN_00673d20();
    if (local_EAX_24 < 0) {
      return local_EAX_24;
    }
    if (DAT_00857558 <= DAT_00811914) break;
LAB_00673990:
    if (DAT_007d2d18 == 0x3c) break;
  }
LAB_006739be:
  if (DAT_007d2d18 == 0x22) {
LAB_006739cd:
    for (; (cVar2 = PTR_0085755c[DAT_00811914], cVar2 == ' ' || (cVar2 == '\t'));
        DAT_00811914 = DAT_00811914 + 1) {
    }
    if (cVar2 == ']') {
      DAT_00811914 = DAT_00811914 + 1;
      /* ST_CALLSITE[006739FC]: CALL dword ptr [ECX + 0x10] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      pcVar6 = (char *)(**(code **)&PTR_0081194c->field_0x10)(PTR_00857528);
      if (pcVar6 == nullptr) {
        *PTR_00811948 = '\0';
      }
      else {
        uVar8 = 0xffffffff;
        do {
          pcVar11 = pcVar6;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar11;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8;
        pcVar6 = pcVar11 + -uVar8;
        pbVar9 = PTR_00811948;
        memmove(pbVar9, pcVar6, uVar8); /* compiler REP MOVS byte copy */
      }
      uVar7 = 0xffffffff;
      pbVar4 = PTR_00811948;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      uVar8 = uVar7 - 1;
      if (uVar8 != 0) {
        for (; (cVar2 = PTR_0085755c[DAT_00811914], cVar2 == ' ' || (cVar2 == '\t'));
            DAT_00811914 = DAT_00811914 + 1) {
        }
        if (cVar2 == '\\') {
          if (PTR_00811948[uVar7 - 2] == '\\') {
            uVar8 = uVar7 - 2;
          }
        }
        else if (((cVar2 != '>') && (cVar2 != '\0')) && (PTR_00811948[uVar7 - 2] != '\\')) {
          PTR_00811948[uVar8] = '\\';
          uVar8 = uVar7;
        }
      }
    }
    else {
      DAT_00811914 = DAT_00857544;
      uVar8 = 0;
    }
    cVar2 = PTR_0085755c[DAT_00811914];
    while (((cVar2 != '\0' && (cVar2 != '>')) && ((cVar2 != ' ' && (cVar2 != '\t'))))) {
      PTR_00811948[uVar8] = cVar2;
      DAT_00811914 = DAT_00811914 + 1;
      uVar8 = uVar8 + 1;
      cVar2 = PTR_0085755c[DAT_00811914];
    }
    PTR_00811948[uVar8] = '\0';
    DAT_007d2d18 = 0x3c;
  }
  if ((DAT_007d2d24 & 0x800) == 0) {
    if (DAT_007d2d18 == 0x3c) {
      local_54.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_54;
      iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
      if (iVar3 != 0) {
        g_currentExceptionFrame = local_54.previous;
        return iVar3;
      }
      thunk_FUN_00672b60(PTR_00811948,PTR_0081194c);
      if ((code *)PTR_0081194c->field_0014 != nullptr) {
        /* ST_CALLSITE[00673B50]: CALL EAX */
        (*STField<code *>(PTR_0081194c,0x14))(PTR_00811948,1);
      }
      DAT_007d2d24 = DAT_007d2d24 | 0x80;
      g_currentExceptionFrame = local_54.previous;
      local_EAX_24 = thunk_FUN_006736f0();
      if (local_EAX_24 < 0) {
        return local_EAX_24;
      }
    }
  }
  else {
    do {
      if (DAT_007d2d18 == 0x1d) break;
      local_EAX_24 = FUN_00673d20();
    } while (-1 < local_EAX_24);
  }
cf_common_exit_00673BB3:
  DAT_007d2d24 = DAT_007d2d24 ^ (DAT_007d2d24 ^ local_10) & 1;
  return local_EAX_24;
}

