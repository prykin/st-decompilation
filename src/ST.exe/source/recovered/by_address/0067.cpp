#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0067.cpp

// 006728F0 FUN_006728f0
#line 1 "decomp/ST.exe/functions/006728F0/decomp.c"
undefined4 st::fn_006728F0(undefined4 *param_1)

{
  undefined4 uVar1;
  byte *puVar3;

  uVar1 = DAT_00811910;
  DAT_00811910 = param_1;
  puVar3 = (byte *)(&DAT_00811918);
  memmove(puVar3, param_1, 0x28); /* compiler REP MOVS byte copy */
  return uVar1;
}

// 00672930 FUN_00672930
#line 1 "decomp/ST.exe/functions/00672930/decomp.c"
undefined4 st::fn_00672930(int param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_00811944;
  DAT_00811944 = param_1;
  PTR_thunk_FUN_00673160_007d2d1c = thunk_FUN_00673110;
  if (param_1 == 0) {
    PTR_thunk_FUN_00673160_007d2d1c = thunk_FUN_00673160;
  }
  return uVar1;
}

// 00672970 FUN_00672970
#line 1 "decomp/ST.exe/functions/00672970/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00672970(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = st::fn_006C8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),0x100,param_1);
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

// 006729B0 FUN_006729b0
#line 1 "decomp/ST.exe/functions/006729B0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_006729B0(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = st::fn_006C8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),1,param_1);
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

// 006729F0 FUN_006729f0
#line 1 "decomp/ST.exe/functions/006729F0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_006729F0(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = st::fn_006C8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),4,param_1);
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

// 00672A30 FUN_00672a30
#line 1 "decomp/ST.exe/functions/00672A30/decomp.c"
void __thiscall st::fn_00672A30(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = st::fn_006C8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),0x200,param_1);
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

// 00672A70 FUN_00672a70
#line 1 "decomp/ST.exe/functions/00672A70/decomp.c"
void __thiscall st::fn_00672A70(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = st::fn_006C8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),0x400,param_1);
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

// 00672AB0 FUN_00672ab0
#line 1 "decomp/ST.exe/functions/00672AB0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00672AB0(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = st::fn_006C8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),0x800,param_1);
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

// 00672AF0 FUN_00672af0
#line 1 "decomp/ST.exe/functions/00672AF0/decomp.c"
void __thiscall st::fn_00672AF0(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = st::fn_006C8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),0x1000,param_1
                      );
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

// 00672B30 FUN_00672b30
#line 1 "decomp/ST.exe/functions/00672B30/decomp.c"
undefined1 st::fn_00672B30(void)

{
  undefined1 uVar1;

  if (DAT_00857560 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (*(code *)PTR_0081194c->field_000C)(DAT_00857560);
    return uVar1;
  }
  return 0;
}

// 00672F00 FUN_00672f00
#line 1 "decomp/ST.exe/functions/00672F00/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (8), none consume AL/AX, and every RET path defines full EAX; sites=00683C70 @ 0068A720
   -> TEST TEST EAX,EAX | 00683C70 @ 0068A729 -> TEST TEST EAX,EAX | 00683C70 @ 0068A8C8 -> TEST
   TEST EAX,EAX | 00683C70 @ 0068A8D1 -> TEST TEST EAX,EAX | 0068CEC0 @ 0068D6D4 -> TEST TEST
   EAX,EAX | 0068CEC0 @ 0068D6DD -> TEST TEST EAX,EAX | 0068CEC0 @ 0068D7D5 -> TEST TEST EAX,EAX |
   0068CEC0 @ 0068D7E2 -> TEST TEST EAX,EAX */

int st::fn_00672F00(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;

  piVar3 = DAT_00811958;
  if (DAT_00857560 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)PTR_0081194c->field_0004)(DAT_00857560);
    DAT_00857560 = 0;
  }
  st::fn_006B98C0((int *)&DAT_00811958,piVar3);
  if (piVar3 != nullptr) {
    if ((DAT_00857528 != nullptr) && ((char *)piVar3[6] != nullptr)) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)piVar3[6];
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = DAT_00857528;
      memmove(pcVar7, pcVar6, uVar4); /* compiler REP MOVS byte copy */
      uVar5 = 0;
    }
    st::fn_006A5E90((short *)piVar3[6]);
    if ((DAT_00811948 != nullptr) && ((char *)piVar3[0xb] != nullptr)) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)piVar3[0xb];
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = DAT_00811948;
      memmove(pcVar7, pcVar6, uVar4); /* compiler REP MOVS byte copy */
      uVar5 = 0;
    }
    st::fn_006A5E90((short *)piVar3[0xb]);
    if ((DAT_0085753c != nullptr) && ((char *)piVar3[7] != nullptr)) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)piVar3[7];
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = DAT_0085753c;
      memmove(pcVar7, pcVar6, uVar4); /* compiler REP MOVS byte copy */
    }
    st::fn_006A5E90((short *)piVar3[7]);
    DAT_007d2d24 = piVar3[3];
    DAT_00857548 = piVar3[9];
    DAT_0085754c = piVar3[10];
    DAT_007d2d18 = piVar3[4];
    DAT_00811954 = piVar3[5];
    DAT_00857560 = piVar3[1];
    PTR_0081194c = (AnonShape_GLOBAL_0081194C_4D1525E6 *)piVar3[2];
    DAT_00857554 = piVar3[8];
  }
  if (DAT_00811958 == nullptr) {
    st::fn_006AB060(&DAT_00857528);
    st::fn_006AB060(&DAT_00811948);
    st::fn_006AB060((void **)&DAT_0085755c);
    st::fn_006AB060(&DAT_0085753c);
    for (puVar2 = DAT_00811908; puVar2 != nullptr; puVar2 = (undefined4 *)*puVar2) {
      st::fn_006A5E90((short *)puVar2[1]);
      st::fn_006A5E90((short *)puVar2[2]);
    }
    st::fn_006B9890((int *)&DAT_00811908);
  }
  st::fn_006A5E90((short *)piVar3);
  return (uint)(DAT_00811958 != nullptr);
}

// 00673110 FUN_00673110
#line 1 "decomp/ST.exe/functions/00673110/decomp.c"
int __cdecl st::fn_00673110(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;

  while( true ) {
    bVar1 = *param_1;
    bVar2 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar2 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar2) - (uint)(bVar2 != 0);
}

// 00673160 FUN_00673160
#line 1 "decomp/ST.exe/functions/00673160/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00673160 -> 0072E620 @ 0067316B

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00673160 -> 0072E620 @ 0067316B

   [STPrototypeApplier] Propagated return.
   Evidence: 00673160 returns return of Library::MSVCRT::__strcmpi @ 00673174 */

int __cdecl st::fn_00673160(char *str1,char *str2)

{
  int iVar1;

  iVar1 = st::fn_0072E620(str1,str2);
  return iVar1;
}

// 00673190 FUN_00673190
#line 1 "decomp/ST.exe/functions/00673190/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00673190(undefined4 param_1)

{
  if (0 < DAT_00811914) {
    DAT_00811914 = DAT_00811914 + -1;
    *(undefined1 *)(DAT_0085755c + DAT_00811914) = (undefined1)param_1;
    _DAT_00811950 = 0;
    return;
  }
  _DAT_00811950 = param_1;
  return;
}

// 00673210 FUN_00673210
#line 1 "decomp/ST.exe/functions/00673210/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int st::fn_00673210(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  iVar4 = DAT_00811914;
  iVar5 = DAT_00857558;
  uVar6 = DAT_007d2d24;
  iVar7 = DAT_0085755c;
  do {
    DAT_007d2d18 = 0x84e;
    if (iVar5 < iVar4) {
      if ((uVar6 & 0x10) != 0) {
        st::fn_00405ADD();
        DAT_007d2d18 = 0x84e;
        uVar2 = st::fn_0040521D();
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,uVar2) == 0) {
          return -0xe;
        }
      }
      DAT_00811940 = 0;
      iVar3 = st::fn_006734C0();
      iVar4 = DAT_00811914;
      iVar5 = DAT_00857558;
      iVar7 = DAT_0085755c;
      while (DAT_00811914 = iVar4, DAT_00857558 = iVar5, DAT_0085755c = iVar7, iVar3 != 0) {
        if (iVar3 != -1) {
          DAT_00811914 = iVar4;
          DAT_00857558 = iVar5;
          DAT_0085755c = iVar7;
          return iVar3;
        }
        if ((DAT_007d2d24 & 0x80) == 0) {
          DAT_007d2d24 = DAT_007d2d24 | 0x10;
          if (param_1 != 0) {
            return -1;
          }
          break;
        }
        if ((code *)PTR_0081194c->field_0014 != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)PTR_0081194c->field_0014)(DAT_0085753c,0);
        }
        st::fn_00404D90();
        DAT_007d2d18 = 0x84e;
        DAT_00811940 = 0;
        iVar3 = st::fn_006734C0();
        iVar4 = DAT_00811914;
        iVar5 = DAT_00857558;
        iVar7 = DAT_0085755c;
      }
      uVar6 = DAT_007d2d24;
      if (-1 < iVar5) {
        DAT_00857554 = DAT_00857554 + 1;
        DAT_00811914 = 0;
        DAT_0081190c = 0;
        _DAT_00857550 = 1;
        iVar4 = 0;
        if ((0 < iVar5) && (*(char *)(iVar7 + -1 + iVar5) == '\\')) {
          DAT_00857558 = iVar5 + -1;
          DAT_00811940 = 1;
          *(undefined1 *)(iVar7 + DAT_00857558) = 0;
          iVar4 = DAT_00811914;
          iVar5 = DAT_00857558;
          uVar6 = DAT_007d2d24;
          iVar7 = DAT_0085755c;
        }
      }
    }
    if ((uVar6 & 0x10) != 0) {
      DAT_007d2d18 = 0x1c;
      return 0;
    }
    if ((uVar6 & 8) != 0) {
      return 0;
    }
    if (param_1 == 0) {
      uVar1 = *(uint *)(DAT_00811924 + *(char *)(iVar7 + iVar4) * 4);
      while ((uVar1 & 0x401) != 0) {
        if (iVar5 <= iVar4) goto LAB_0067339a;
        iVar4 = iVar4 + 1;
        DAT_00811914 = iVar4;
        uVar1 = *(uint *)(DAT_00811924 + *(char *)(iVar7 + iVar4) * 4);
      }
    }
    if (iVar4 < iVar5) {
      if (param_1 != 0) {
        DAT_00811914 = iVar4 + 1;
        return (int)*(char *)(iVar7 + iVar4);
      }
      if (DAT_007d2d18 != 0x1d) {
        return 0;
      }
    }
    else {
LAB_0067339a:
      iVar4 = iVar4 + 1;
      DAT_007d2d18 = 0x1d;
      DAT_00811914 = iVar4;
      if (param_1 != 0) {
        return 10;
      }
    }
    if ((DAT_00811940 == 0) && ((uVar6 & 1) != 0)) {
      return 0;
    }
  } while( true );
}

// 006734C0 FUN_006734c0
#line 1 "decomp/ST.exe/functions/006734C0/decomp.c"
int st::fn_006734C0(void)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  int *local_8;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (*(code *)PTR_0081194c->field_0008)(DAT_00857560,DAT_0085755c,0x400);
  if ((-1 < iVar2) || (iVar2 == -1)) {
    DAT_00857558 = iVar2;
  }
  if ((((-1 < iVar2) && (iVar2 = 0, DAT_00811908 != nullptr)) && ((DAT_007d2d24 & 0x400) != 0))
     && (0 < DAT_00857558)) {
    local_8 = DAT_00811908;
    do {
      puVar3 = st::fn_00730590(DAT_0085755c,(char *)local_8[1]);
      if (puVar3 != nullptr) {
        uVar5 = 0xffffffff;
        pcVar8 = (char *)local_8[1];
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar2 = ~uVar5 - 1;
        uVar5 = 0xffffffff;
        pcVar8 = (char *)local_8[2];
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        do {
          uVar4 = (DAT_00857558 - iVar2) + uVar5;
          if (0x400 < (int)uVar4) {
            iVar6 = (int)puVar3 - (int)DAT_0085755c;
            DAT_0085755c = st::fn_006ACF50(DAT_0085755c,uVar4);
            puVar3 = (uint *)(iVar6 + (int)DAT_0085755c);
          }
          st::fn_0072DA70
                    ((undefined4 *)(uVar5 + (int)puVar3),
                     (AnonPointee_TLOBaseTy_0607 *)(iVar2 + (int)puVar3),
                     ((DAT_00857558 - iVar2) - (int)puVar3) + 1 + (int)DAT_0085755c);
          puVar7 = (uint *)local_8[2];
          puVar9 = puVar3;
          memmove(puVar9, puVar7, uVar5); /* compiler REP MOVS byte copy */
          DAT_00857558 = DAT_00857558 + (uVar5 - iVar2);
          puVar3 = st::fn_00730590((uint *)((int)puVar3 + 1),(char *)local_8[1]);
        } while (puVar3 != nullptr);
      }
      local_8 = (int *)*local_8;
    } while (local_8 != nullptr);
    iVar2 = 0;
  }
  return iVar2;
}

// 00673690 FUN_00673690
#line 1 "decomp/ST.exe/functions/00673690/decomp.c"
void st::fn_00673690(undefined4 param_1)

{
  DAT_007d2d20 = param_1;
  return;
}

// 006736B0 FUN_006736b0
#line 1 "decomp/ST.exe/functions/006736B0/decomp.c"

void st::fn_006736B0(void)

{
  DAT_00811914 = 1;
  DAT_00857558 = 0;
  DAT_007d2d24 = DAT_007d2d24 & 0xffffffef;
  return;
}

// 006736F0 FUN_006736f0
#line 1 "decomp/ST.exe/functions/006736F0/decomp.c"
int st::fn_006736F0(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  bool bVar11;
  InternalExceptionFrame local_54;
  uint local_10;
  byte *local_c;
  int *local_8;

  local_8 = nullptr;
  local_10 = DAT_007d2d24;
  iVar3 = st::fn_00673D20();
  if (-1 < iVar3) {
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
          iVar3 = st::fn_00673D20();
          if (iVar3 < 0) goto cf_common_exit_00673BB3;
        } while (DAT_00811914 < DAT_00857558);
      }
      if (DAT_007d2d18 == 0x1d) {
cf_common_exit_00673BA7:
        iVar3 = -6;
        break;
      }
      if ((DAT_007d2d24 & 0x800) == 0) {
        local_8 = DAT_00811908;
        if (DAT_007d2d18 == 0x3c) {
          local_c = DAT_00811948;
        }
        else {
          local_c = DAT_00857528;
        }
        for (; local_8 != nullptr; local_8 = (int *)*local_8) {
          pbVar4 = (byte *)local_8[1];
          pbVar9 = local_c;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_006737e2:
              iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_006737e7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_006737e2;
            pbVar4 = pbVar4 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_006737e7:
          if (iVar3 == 0) break;
        }
        if (local_8 != nullptr) goto LAB_0067383b;
        piVar5 = st::fn_006AAC70(0xc);
        if (piVar5 != nullptr) {
          local_8 = piVar5;
          pcVar6 = st::fn_006C49B0((char *)local_c);
          piVar5[1] = (int)pcVar6;
          if (pcVar6 != nullptr) {
            piVar5[2] = 0;
            st::fn_006B9910(&DAT_00811908,(int)piVar5);
            goto LAB_0067383b;
          }
        }
LAB_00673bae:
        iVar3 = -2;
        break;
      }
LAB_0067383b:
      if (DAT_007d2d18 != 0x1d) {
        iVar3 = st::fn_00673D20();
        goto joined_r0x00673849;
      }
      while ((DAT_007d2d18 != 0x3c && (DAT_007d2d18 != 0x22))) {
        if (DAT_007d2d18 == 0x1d) goto cf_common_exit_00673BA7;
        iVar3 = st::fn_00673D20();
joined_r0x00673849:
        if (iVar3 < 0) goto cf_common_exit_00673BB3;
      }
      if (DAT_007d2d18 == 0x1d) goto cf_common_exit_00673BA7;
      if ((DAT_007d2d24 & 0x800) == 0) {
        pbVar4 = DAT_00811948;
        if (DAT_007d2d18 != 0x3c) {
          pbVar4 = DAT_00857528;
        }
        pbVar4 = (byte *)st::fn_006C49B0((char *)pbVar4);
        piVar5 = local_8;
        local_8[2] = (int)pbVar4;
        if (pbVar4 == nullptr) goto LAB_00673bae;
        pbVar9 = (byte *)local_8[1];
        do {
          bVar1 = *pbVar9;
          bVar11 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_006738e9:
            iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_006738ee;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar11 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_006738e9;
          pbVar9 = pbVar9 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_006738ee:
        if (iVar3 == 0) {
          st::fn_006B98C0((int *)&DAT_00811908,local_8);
          st::fn_006A5E90((short *)piVar5[1]);
          st::fn_006A5E90((short *)piVar5[2]);
          st::fn_006A5E90((short *)piVar5);
        }
      }
      while (DAT_007d2d18 != 0x1d) {
        iVar3 = st::fn_00673D20();
        if (iVar3 < 0) goto cf_common_exit_00673BB3;
      }
      if ((local_10 & 1) != 0) {
        st::fn_00405C95(0x1d);
      }
      iVar3 = st::fn_00673D20();
      if (iVar3 < 0) break;
    } while( true );
  }
  goto cf_common_exit_00673BB3;
  while( true ) {
    if (DAT_007d2d18 == 0x22) goto LAB_006739cd;
    iVar3 = st::fn_00673D20();
    if (iVar3 < 0) {
      return iVar3;
    }
    if (DAT_00857558 <= DAT_00811914) break;
LAB_00673990:
    if (DAT_007d2d18 == 0x3c) break;
  }
LAB_006739be:
  if (DAT_007d2d18 == 0x22) {
LAB_006739cd:
    for (; (cVar2 = *(char *)(DAT_0085755c + DAT_00811914), cVar2 == ' ' || (cVar2 == '\t'));
        DAT_00811914 = DAT_00811914 + 1) {
    }
    if (cVar2 == ']') {
      DAT_00811914 = DAT_00811914 + 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      pcVar6 = (char *)(**(code **)&PTR_0081194c->field_0x10)(DAT_00857528);
      if (pcVar6 == nullptr) {
        *DAT_00811948 = 0;
      }
      else {
        uVar8 = 0xffffffff;
        do {
          pcVar10 = pcVar6;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar10 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar10;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8;
        pbVar4 = (byte *)(pcVar10 + -uVar8);
        pbVar9 = DAT_00811948;
        memmove(pbVar9, pbVar4, uVar8); /* compiler REP MOVS byte copy */
      }
      uVar7 = 0xffffffff;
      pbVar4 = DAT_00811948;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      uVar7 = ~uVar7;
      uVar8 = uVar7 - 1;
      if (uVar8 != 0) {
        for (; (cVar2 = *(char *)(DAT_0085755c + DAT_00811914), cVar2 == ' ' || (cVar2 == '\t'));
            DAT_00811914 = DAT_00811914 + 1) {
        }
        if (cVar2 == '\\') {
          if (DAT_00811948[uVar7 - 2] == 0x5c) {
            uVar8 = uVar7 - 2;
          }
        }
        else if (((cVar2 != '>') && (cVar2 != '\0')) && (DAT_00811948[uVar7 - 2] != 0x5c)) {
          DAT_00811948[uVar8] = 0x5c;
          uVar8 = uVar7;
        }
      }
    }
    else {
      DAT_00811914 = DAT_00857544;
      uVar8 = 0;
    }
    bVar1 = *(byte *)(DAT_0085755c + DAT_00811914);
    while (((bVar1 != 0 && (bVar1 != 0x3e)) && ((bVar1 != 0x20 && (bVar1 != 9))))) {
      DAT_00811948[uVar8] = bVar1;
      DAT_00811914 = DAT_00811914 + 1;
      uVar8 = uVar8 + 1;
      bVar1 = *(byte *)(DAT_0085755c + DAT_00811914);
    }
    DAT_00811948[uVar8] = 0;
    DAT_007d2d18 = 0x3c;
  }
  if ((DAT_007d2d24 & 0x800) == 0) {
    if (DAT_007d2d18 == 0x3c) {
      local_54.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_54;
      iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
      if (iVar3 != 0) {
        g_currentExceptionFrame = local_54.previous;
        return iVar3;
      }
      st::fn_00404426((char *)DAT_00811948,PTR_0081194c);
      if ((code *)PTR_0081194c->field_0014 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)PTR_0081194c->field_0014)(DAT_00811948,1);
      }
      DAT_007d2d24 = DAT_007d2d24 | 0x80;
      g_currentExceptionFrame = local_54.previous;
      iVar3 = st::fn_00401D7F();
      if (iVar3 < 0) {
        return iVar3;
      }
    }
  }
  else {
    do {
      if (DAT_007d2d18 == 0x1d) break;
      iVar3 = st::fn_00673D20();
    } while (-1 < iVar3);
  }
cf_common_exit_00673BB3:
  DAT_007d2d24 = DAT_007d2d24 ^ (DAT_007d2d24 ^ local_10) & 1;
  return iVar3;
}

// 00673D20 FUN_00673d20
#line 1 "decomp/ST.exe/functions/00673D20/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int st::fn_00673D20(void)

{
  ushort *puVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  byte bVar9;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  int local_14;
  uint local_10;

  DAT_00811954 = DAT_007d2d18;
  if (DAT_007d2d18 != 0x1d) {
    _DAT_00857550 = 0;
  }
  iVar8 = DAT_007d2d20;
  if (DAT_007d2d20 != -1) {
    DAT_007d2d18 = DAT_007d2d20;
    DAT_007d2d20 = 0xffffffff;
    return iVar8;
  }
  iVar8 = st::fn_00673210(0);
  if (iVar8 < 0) {
    return iVar8;
  }
LAB_00673d71:
  local_14 = 0;
  bVar7 = true;
  DAT_0081190c = DAT_00811914;
  DAT_00857544 = DAT_00811914;
  if ((DAT_007d2d24 & 8) == 0) {
LAB_00673e66:
    if ((DAT_007d2d18 != 0x84e) && (DAT_007d2d18 != 0x11)) goto cf_common_join_006743F6;
LAB_00673e7d:
    DAT_00811914 = DAT_0081190c + 1;
    bVar3 = *(byte *)(DAT_0085755c + DAT_0081190c);
    local_10 = (uint)bVar3;
    uVar11 = *(uint *)(DAT_00811924 + (uint)bVar3 * 4);
    if ((DAT_007d2d24 & 8) != 0) {
LAB_006741a7:
      if (DAT_007d2d18 != 0x84e) {
LAB_006741b3:
        if (DAT_007d2d18 != 0x11) goto cf_common_join_006743F6;
      }
LAB_006741c0:
      DAT_00811914 = DAT_0081190c + 1;
      if ((uVar11 & 0x100) != 0) {
        bVar3 = *(byte *)(DAT_0085755c + DAT_00811914);
        uVar12 = *(uint *)(DAT_00811924 + (uint)bVar3 * 4);
        if ((((uVar12 & 0x100) != 0) && (((uVar12 | uVar11) & 0x200) == 0)) &&
           ((DAT_0081193c != nullptr || (DAT_00811938 != nullptr)))) {
          uVar11 = (uint)bVar3 << 8 | local_10;
          if ((DAT_0081193c != nullptr) &&
             (cVar2 = *(char *)(DAT_0085755c + 1 + DAT_00811914),
             (*(byte *)(DAT_00811924 + 1 + cVar2 * 4) & 1) != 0)) {
            cVar4 = (char)*DAT_0081193c;
            puVar13 = DAT_0081193c;
            while (cVar4 != '\0') {
              if ((*puVar13 == uVar11) && ((char)puVar13[1] == cVar2)) {
                DAT_00811914 = DAT_0081190c + 3;
                if (DAT_007d2d18 == 0x11) goto LAB_00674360;
                DAT_007d2d18 = *(int *)(puVar13 + 2);
                goto LAB_00674334;
              }
              puVar1 = puVar13 + 4;
              puVar13 = puVar13 + 4;
              cVar4 = (char)*puVar1;
            }
          }
          cVar2 = (char)*DAT_00811938;
          puVar13 = DAT_00811938;
          while (cVar2 != '\0') {
            if (*puVar13 == uVar11) {
              DAT_00811914 = DAT_0081190c + 2;
              goto LAB_00674357;
            }
            puVar1 = puVar13 + 4;
            puVar13 = puVar13 + 4;
            cVar2 = (char)*puVar1;
          }
        }
        if (DAT_00811934 != nullptr) {
          cVar2 = (char)*DAT_00811934;
          puVar13 = DAT_00811934;
          while (cVar2 != '\0') {
            if ((int)cVar2 == local_10) goto LAB_00674357;
            puVar1 = puVar13 + 4;
            puVar13 = puVar13 + 4;
            cVar2 = (char)*puVar1;
          }
        }
        uVar11 = *(uint *)(DAT_00811924 + (char)bVar3 * 4);
        while (((uVar11 & 0x100) != 0 && ((uVar11 & 0x200) == 0))) {
          DAT_00811914 = DAT_00811914 + 1;
          uVar11 = *(uint *)(DAT_00811924 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
        }
      }
      goto LAB_00674334;
    }
    if (((uVar11 & 0x12) != 0) || ((DAT_0081190c == 0 && (DAT_00811930 != 0)))) {
      bVar9 = *(byte *)(DAT_00811924 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
      while ((bVar9 & 4) != 0) {
        DAT_00811914 = DAT_00811914 + 1;
        bVar9 = *(byte *)(DAT_00811924 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
      }
      if (((uVar11 & 0x10) != 0) && ((int)*(char *)(DAT_0085755c + DAT_00811914) == (uint)bVar3)) {
        DAT_00811914 = DAT_00811914 + 1;
        DAT_007d2d18 = 0x22;
      }
      if ((DAT_0081190c == 0) && (DAT_00811930 != 0)) {
        st::fn_006747E0(DAT_00811930,DAT_00811920);
      }
      if (((DAT_007d2d18 == 0x84e) || (DAT_007d2d18 == 0x22)) && ((uVar11 & 0x12) != 0)) {
        st::fn_006747E0(DAT_00811928,DAT_00811918);
      }
    }
    if (DAT_007d2d18 != 0x84e) goto LAB_006741b3;
    if (((uVar11 & 2) != 0) &&
       (((uVar11 & 0x100) == 0 ||
        ((1 < DAT_00811914 - DAT_0081190c &&
         ((*(uint *)(DAT_00811924 + *(char *)(DAT_0085755c + 1 + DAT_0081190c) * 4) & 0x100) == 0)))
        ))) {
      DAT_007d2d18 = 0x22;
      goto cf_common_join_006743F6;
    }
    DAT_00811914 = DAT_0081190c + 1;
    if ((uVar11 & 0x20) == 0) {
      if (((uVar11 & 0x1000) != 0) || ((uVar11 & 0x2800) != 0)) {
        if ((uVar11 & 0x1000) == 0) {
          DAT_007d2d18 = (-(uint)((uVar11 & 0x800) != 0) & 0xffffffec) + 0x22;
        }
        else {
          DAT_007d2d18 = 0x3c;
        }
        iVar8 = 0;
        *DAT_00811948 = 0;
LAB_00674017:
        bVar9 = *(byte *)(DAT_0085755c + DAT_00811914);
        iVar14 = iVar8;
        while ((bVar9 != bVar3 && (bVar9 != 0x5c))) {
          if (DAT_00857558 < DAT_00811914) goto LAB_00674068;
          DAT_00811914 = DAT_00811914 + 1;
          DAT_00811948[iVar14] = bVar9;
          iVar14 = iVar14 + 1;
          bVar9 = *(byte *)(DAT_0085755c + DAT_00811914);
        }
        if (DAT_00811914 < DAT_00857558) {
          DAT_00811914 = DAT_00811914 + 1;
        }
        else {
LAB_00674068:
          local_14 = -0xd2;
        }
        if (bVar9 == 0x5c) {
          if ((int)*(char *)(DAT_0085755c + DAT_00811914) == (uint)bVar3) {
            DAT_00811914 = DAT_00811914 + 1;
            iVar8 = iVar14 + 1;
            DAT_00811948[iVar14] = bVar3;
          }
          else {
            bVar9 = 0x5c;
            switch((int)*(char *)(DAT_0085755c + DAT_00811914)) {
            case 0x66:
              DAT_00811914 = DAT_00811914 + 1;
              DAT_00811948[iVar14] = 0xc;
              iVar8 = iVar14 + 1;
              break;
            case 0x6e:
              DAT_00811914 = DAT_00811914 + 1;
              DAT_00811948[iVar14] = 10;
              iVar8 = iVar14 + 1;
              break;
            case 0x72:
              bVar9 = 0xd;
            default:
              DAT_00811914 = DAT_00811914 + 1;
              iVar8 = iVar14 + 1;
              DAT_00811948[iVar14] = bVar9;
              break;
            case 0x74:
              DAT_00811914 = DAT_00811914 + 1;
              DAT_00811948[iVar14] = 9;
              iVar8 = iVar14 + 1;
            }
          }
          goto LAB_00674017;
        }
        bVar9 = *(byte *)(DAT_0085755c + -1 + DAT_00811914);
        local_10 = (uint)bVar9;
        if ((bVar9 == bVar3) && ((DAT_007d2d18 == 0x3c || (DAT_007d2d18 == 0x22)))) {
          DAT_00811948[iVar14] = 0;
          DAT_00857548 = DAT_00811948;
          if (DAT_007d2d18 == 0x22) {
            bVar7 = false;
            if ((DAT_007d2d24 & 0x100) == 0) {
              st::fn_006B77E0((char *)DAT_00857528,DAT_00811948);
            }
            else {
              if ((DAT_00857528 == nullptr) || (DAT_00811948 == nullptr))
              goto cf_common_join_006743F6;
              uVar12 = 0xffffffff;
              pbVar15 = DAT_00811948;
              do {
                pbVar16 = pbVar15;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pbVar16 = pbVar15 + 1;
                bVar3 = *pbVar15;
                pbVar15 = pbVar16;
              } while (bVar3 != 0);
              uVar12 = ~uVar12;
              pbVar15 = pbVar16 + -uVar12;
              pbVar16 = DAT_00857528;
              memmove(pbVar16, pbVar15, uVar12); /* compiler REP MOVS byte copy */
            }
          }
        }
        else {
          DAT_00857548 = (byte *)(int)(char)*DAT_00811948;
        }
        goto LAB_006741a7;
      }
      goto LAB_006741c0;
    }
    local_14 = st::fn_006748D0();
    goto LAB_0067447d;
  }
  if ((DAT_00811954 != 0x11) || (DAT_00811914 != 0)) {
    bVar3 = *(byte *)(DAT_00811924 + 1 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
    iVar8 = DAT_00811914;
    while (((bVar3 & 1) == 0 && (iVar8 < DAT_00857558))) {
      iVar8 = iVar8 + 1;
      bVar3 = *(byte *)(DAT_00811924 + 1 + *(char *)(DAT_0085755c + iVar8) * 4);
    }
    switch(DAT_00811954) {
    case 7:
      DAT_007d2d18 = 0x11;
      if (iVar8 != DAT_00857558) {
LAB_00673e50:
        bVar6 = DAT_00811914 < iVar8;
        DAT_00811914 = iVar8;
        if ((bVar6) && ((DAT_007d2d24 & 4) == 0)) {
          DAT_0081190c = iVar8 + -1;
        }
        goto LAB_00673e66;
      }
      DAT_00811914 = iVar8 + 1;
      break;
    default:
      if (iVar8 != DAT_00857558) goto LAB_00673e50;
      DAT_00811914 = iVar8 + 1;
      DAT_00811954 = 0x11;
      goto LAB_00674464;
    case 0x11:
      DAT_007d2d18 = 0x11;
      bVar6 = iVar8 <= DAT_00811914;
      DAT_00811914 = iVar8;
      if (bVar6) goto LAB_00673e7d;
      break;
    case 0x12:
      DAT_007d2d24 = DAT_007d2d24 & 0xfffffff7;
      DAT_007d2d18 = 0x11;
      DAT_00811914 = DAT_00857558;
      break;
    case 0x1d:
      if (iVar8 != DAT_00857558) {
        DAT_007d2d18 = 0x11;
        goto LAB_00673e50;
      }
      DAT_00811914 = iVar8 + 1;
      DAT_007d2d18 = 0x1d;
      goto cf_common_exit_00674486;
    }
    goto LAB_006744b5;
  }
LAB_00674464:
  DAT_007d2d18 = 0x1d;
  goto cf_common_exit_00674486;
LAB_00674357:
  if (DAT_007d2d18 == 0x11) {
LAB_00674360:
    if (*(int *)(puVar13 + 2) == 0x1b) {
      DAT_007d2d18 = 0x1b;
LAB_006743cd:
      uVar12 = DAT_007d2d24 & 0xfffffff7;
      uVar11 = DAT_007d2d24 & 4;
      DAT_007d2d24 = uVar12;
      if (uVar11 == 0) {
        DAT_00811954 = 0x1d;
        goto cf_continue_loop_006743FF;
      }
      goto cf_break_loop_006744A4;
    }
LAB_0067433f:
    if ((DAT_007d2d24 & 4) != 0) goto cf_break_loop_006744A4;
  }
  else {
    DAT_007d2d18 = *(int *)(puVar13 + 2);
LAB_00674334:
    if (DAT_007d2d18 == 0x11) goto LAB_0067433f;
    if (DAT_007d2d18 == 0x12) {
      if ((DAT_007d2d24 & 4) != 0) {
        DAT_007d2d24 = DAT_007d2d24 | 8;
        goto cf_break_loop_006744A4;
      }
      DAT_00811954 = 0x1d;
      DAT_00811914 = DAT_00857558;
      goto cf_continue_loop_006743FF;
    }
    if (DAT_007d2d18 == 7) {
      uVar12 = DAT_007d2d24 | 8;
      uVar11 = DAT_007d2d24 & 4;
      DAT_007d2d24 = uVar12;
      if (uVar11 == 0) goto cf_continue_loop_006743FF;
      goto cf_break_loop_006744A4;
    }
    if (DAT_007d2d18 == 0x1b) goto LAB_006743cd;
  }
cf_common_join_006743F6:
  if ((DAT_007d2d24 & 8) != 0) {
cf_continue_loop_006743FF:
    iVar8 = st::fn_00673210(0);
    if (iVar8 < 0) {
      return iVar8;
    }
    goto LAB_00673d71;
  }
LAB_0067447d:
  if (DAT_007d2d18 == 0x1d) {
cf_common_exit_00674486:
    *DAT_00857528 = 10;
    DAT_00857528[1] = 0;
    goto cf_common_exit_00674540;
  }
cf_break_loop_006744A4:
  if (!bVar7) goto cf_common_exit_00674540;
LAB_006744b5:
  uVar5 = *(undefined1 *)(DAT_0085755c + DAT_00811914);
  *(undefined1 *)(DAT_0085755c + DAT_00811914) = 0;
  if ((DAT_007d2d24 & 0x100) == 0) {
    st::fn_006B77E0((char *)DAT_00857528,(byte *)(DAT_0085755c + DAT_0081190c));
    goto cf_common_exit_00674521;
  }
  if ((DAT_00857528 == nullptr) || ((char *)(DAT_0085755c + DAT_0081190c) == nullptr))
  goto cf_common_exit_00674521;
  uVar11 = 0xffffffff;
  pcVar17 = (char *)(DAT_0085755c + DAT_0081190c);
  goto code_r0x006744e7;
  while( true ) {
    uVar11 = uVar11 - 1;
    pcVar18 = pcVar17 + 1;
    cVar2 = *pcVar17;
    pcVar17 = pcVar18;
    if (cVar2 == '\0') break;
code_r0x006744e7:
    pcVar18 = pcVar17;
    if (uVar11 == 0) break;
  }
  uVar11 = ~uVar11;
  pbVar15 = (byte *)(pcVar18 + -uVar11);
  pbVar16 = DAT_00857528;
  memmove(pbVar16, pbVar15, uVar11); /* compiler REP MOVS byte copy */
cf_common_exit_00674521:
  DAT_00857528[DAT_00811914 - DAT_0081190c] = 0;
  *(undefined1 *)(DAT_0085755c + DAT_00811914) = uVar5;
cf_common_exit_00674540:
  if (local_14 == 0) {
    local_14 = DAT_007d2d18;
  }
  DAT_00857540 = DAT_00857540 + 1;
  return local_14;
}

// 006747E0 FUN_006747e0
#line 1 "decomp/ST.exe/functions/006747E0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_006747E0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  uVar1 = *(undefined1 *)(DAT_00811914 + DAT_0085755c);
  *(undefined1 *)(DAT_00811914 + DAT_0085755c) = 0;
  iVar3 = 0;
  iVar5 = param_2 + -1;
  if (iVar5 < 0) {
    *(undefined1 *)(DAT_00811914 + DAT_0085755c) = uVar1;
    return;
  }
  do {
    iVar4 = iVar5 + iVar3 >> 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (*(code *)PTR_thunk_FUN_00673160_007d2d1c)
                      (DAT_0081190c + DAT_0085755c,*(undefined4 *)(param_1 + iVar4 * 8));
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        DAT_007d2d18 = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
        *(undefined1 *)(DAT_00811914 + DAT_0085755c) = uVar1;
        return;
      }
      iVar5 = iVar4 + -1;
    }
    else {
      iVar3 = iVar4 + 1;
    }
  } while (iVar3 <= iVar5);
  *(undefined1 *)(DAT_00811914 + DAT_0085755c) = uVar1;
  return;
}

// 006748D0 FUN_006748d0
#line 1 "decomp/ST.exe/functions/006748D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_006748D0(void)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  float10 fVar4;
  longlong lVar5;
  InternalExceptionFrame local_50;
  int local_c;
  int local_8;

  DAT_007d2d18 = 0x25;
  DAT_00811914 = DAT_0081190c;
  local_8 = 0;
  if (DAT_0085755c[DAT_0081190c] == 0x30) {
    uVar1 = st::fn_007306E0((uint)DAT_0085755c[DAT_0081190c + 1]);
    if (uVar1 == 0x62) {
      local_8 = 2;
    }
    else if (uVar1 == 0x78) {
      local_8 = 0x10;
    }
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    pbVar3 = DAT_0085755c;
    if (iVar2 == -0x3c) {
      while( true ) {
        if (DAT_007f148c < 2) {
          uVar1 = (byte)PTR_DAT_007f1280[(char)pbVar3[DAT_00811914] * 2] & 4;
        }
        else {
          uVar1 = st::fn_00730610((int)(char)pbVar3[DAT_00811914],4);
          pbVar3 = DAT_0085755c;
        }
        if (uVar1 == 0) break;
        DAT_00811914 = DAT_00811914 + 1;
      }
      DAT_007d2d18 = 0;
      return 0xffffffc4;
    }
    if (iVar2 == -4) {
      DAT_007d2d18 = 0x84e;
    }
    return 0;
  }
  if (local_8 != 0) {
    DAT_00811914 = DAT_00811914 + 2;
    uVar1 = st::fn_006B9770(DAT_0085755c,&DAT_00811914,local_8);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _DAT_00857548 = (double)CONCAT44(DAT_0085754c,uVar1);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  fVar4 = st::fn_006C8990(DAT_0085755c,&DAT_00811914,&local_c);
  _DAT_00857548 = (double)fVar4;
  if (local_c == 0) {
    lVar5 = st::fn_0072E288();
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _DAT_00857548 = (double)CONCAT44(DAT_0085754c,(int)lVar5);
    g_currentExceptionFrame = local_50.previous;
    DAT_007d2d18 = 0x25;
    return 0;
  }
  DAT_007d2d18 = 0x37;
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

// 00674AF0 FUN_00674af0
#line 1 "decomp/ST.exe/functions/00674AF0/decomp.c"

char * st::fn_00674AF0(int param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;

  pcVar5 = &DAT_008016a0;
  if (DAT_00811934 != nullptr) {
    cVar3 = *DAT_00811934;
    pcVar6 = DAT_00811934;
    while (cVar3 != '\0') {
      if (*(int *)(pcVar6 + 4) == param_1) {
        return pcVar6;
      }
      pcVar1 = pcVar6 + 8;
      pcVar6 = pcVar6 + 8;
      cVar3 = *pcVar1;
    }
  }
  if (DAT_00811938 != nullptr) {
    cVar3 = *DAT_00811938;
    pcVar6 = DAT_00811938;
    while (cVar3 != '\0') {
      if (*(int *)(pcVar6 + 4) == param_1) {
        return pcVar6;
      }
      pcVar1 = pcVar6 + 8;
      pcVar6 = pcVar6 + 8;
      cVar3 = *pcVar1;
    }
  }
  if (DAT_0081193c != nullptr) {
    cVar3 = *DAT_0081193c;
    pcVar6 = DAT_0081193c;
    while (cVar3 != '\0') {
      if (*(int *)(pcVar6 + 4) == param_1) {
        return pcVar6;
      }
      pcVar1 = pcVar6 + 8;
      pcVar6 = pcVar6 + 8;
      cVar3 = *pcVar1;
    }
  }
  if (DAT_00811928 != nullptr) {
    iVar4 = *DAT_00811928;
    piVar7 = DAT_00811928;
    while (iVar4 != 0) {
      if (piVar7[1] == param_1) goto cf_common_exit_00674BC4;
      piVar2 = piVar7 + 2;
      piVar7 = piVar7 + 2;
      iVar4 = *piVar2;
    }
  }
  if (DAT_0081192c != nullptr) {
    iVar4 = *DAT_0081192c;
    piVar7 = DAT_0081192c;
    while (iVar4 != 0) {
      if (piVar7[1] == param_1) goto cf_common_exit_00674BC4;
      piVar2 = piVar7 + 2;
      piVar7 = piVar7 + 2;
      iVar4 = *piVar2;
    }
  }
  if ((DAT_00811930 != nullptr) && (piVar7 = DAT_00811930, *DAT_00811930 != 0)) {
    while (piVar7[1] != param_1) {
      piVar2 = piVar7 + 2;
      piVar7 = piVar7 + 2;
      if (*piVar2 == 0) {
        return pcVar5;
      }
    }
cf_common_exit_00674BC4:
    pcVar5 = (char *)*piVar7;
  }
  return pcVar5;
}

// 00674C10 FUN_00674c10
#line 1 "decomp/ST.exe/functions/00674C10/decomp.c"
undefined4 __cdecl st::fn_00674C10(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_0081196c;
  DAT_0081196c = param_1;
  return uVar1;
}

// 00674C40 FUN_00674c40
#line 1 "decomp/ST.exe/functions/00674C40/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00674C40 -> 0072E730 @ 00674C73 | 00674C40 -> 0072F110 @ 00674C96

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_00674C40(byte *_Drive)

{
  char local_308 [260];
  byte local_204 [256];
  byte local_104 [256];

  if ((DAT_0081196c != 0) && (DAT_00811970 == 0)) {
    st::fn_0072E730(_Drive,(byte *)&_Drive,local_104,local_204,nullptr);
    st::fn_0072F110
              (local_308,(char *)&_Drive,(char *)local_104,(char *)local_204,&DAT_007d2d48);
    DAT_00811970 = st::fn_0072EA70(local_308,&DAT_007c8ff0);
  }
  return;
}

// 00674CE0 FUN_00674ce0
#line 1 "decomp/ST.exe/functions/00674CE0/decomp.c"

void st::fn_00674CE0(void)

{
  if ((DAT_0081196c != 0) && (DAT_00811970 != nullptr)) {
    st::fn_0072EA90(DAT_00811970);
    DAT_00811970 = nullptr;
  }
  return;
}

// 00674D20 FUN_00674d20
#line 1 "decomp/ST.exe/functions/00674D20/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_00674D20(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_108 [260];

  if ((DAT_0081196c != 0) && (DAT_00811970 != nullptr)) {
    uVar2 = 0xffffffff;
    do {
      pcVar5 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar5 + -uVar2;
    pcVar7 = local_108;
    memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_007c8ff4;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar5 = local_108;
    do {
      pcVar6 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
    st::fn_0072EB70(local_108,DAT_00811970);
  }
  return;
}

// 00674DE0 FUN_00674de0
#line 1 "decomp/ST.exe/functions/00674DE0/decomp.c"
undefined4 __cdecl st::fn_00674DE0(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_00811974;
  DAT_00811974 = param_1;
  return uVar1;
}

// 00674E10 FUN_00674e10
#line 1 "decomp/ST.exe/functions/00674E10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00674E10 -> 0072E730 @ 00674E43 | 00674E10 -> 0072F110 @ 00674E66

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_00674E10(byte *_Drive)

{
  char local_308 [260];
  byte local_204 [256];
  byte local_104 [256];

  if ((DAT_00811974 != 0) && (DAT_00811978 == 0)) {
    st::fn_0072E730(_Drive,(byte *)&_Drive,local_104,local_204,nullptr);
    st::fn_0072F110
              (local_308,(char *)&_Drive,(char *)local_104,(char *)local_204,&DAT_007d2d50);
    DAT_00811978 = st::fn_0072EA70(local_308,&DAT_007c8ff0);
  }
  return;
}

// 00674EB0 FUN_00674eb0
#line 1 "decomp/ST.exe/functions/00674EB0/decomp.c"

void st::fn_00674EB0(void)

{
  if ((DAT_00811974 != 0) && (DAT_00811978 != nullptr)) {
    st::fn_0072EA90(DAT_00811978);
    DAT_00811978 = nullptr;
  }
  return;
}

// 00674EF0 FUN_00674ef0
#line 1 "decomp/ST.exe/functions/00674EF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006807D0 -> 00674EF0 @ 006807F0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_00674EF0(char *resourceString)

{
  char cVar1;
  uint uVar2;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_108 [260];

  if ((DAT_00811974 != 0) && (DAT_00811978 != nullptr)) {
    uVar2 = 0xffffffff;
    do {
      pcVar5 = resourceString;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = resourceString + 1;
      cVar1 = *resourceString;
      resourceString = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar5 + -uVar2;
    pcVar7 = local_108;
    memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_007c8ff4;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar5 = local_108;
    do {
      pcVar6 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
    st::fn_0072EB70(local_108,DAT_00811978);
  }
  return;
}

// 00674FB0 FUN_00674fb0
#line 1 "decomp/ST.exe/functions/00674FB0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00674FB0 returns data at 00400000 @ 00675294 */

IMAGE_DOS_HEADER * __cdecl st::fn_00674FB0(int param_1)

{
  uint uVar1;
  byte bVar2;

  if ((param_1 < 0x32) || (0x73 < param_1)) {
    if ((param_1 < 1) || (0x28 < param_1)) {
      return nullptr;
    }
    uVar1 = param_1 + 0x41;
    bVar2 = (byte)uVar1;
    if (((&DAT_00801000)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x40000;
    }
    if (((&DAT_00801010)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x80000;
    }
    if (((&DAT_00800f00)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x10000;
    }
    if (((&DAT_00801370)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x20000;
    }
    if (((&DAT_00800fa0)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x100000;
    }
    if (((&DAT_00800ff0)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) == 0) {
      if ((*(uint *)(&DAT_00801460 + (uVar1 >> 5) * 4) & 1 << (bVar2 & 0x1f)) != 0) {
        return &IMAGE_DOS_HEADER_00400000;
      }
      return (IMAGE_DOS_HEADER *)
             ((-(uint)((1 << (bVar2 & 0x1f) & (&DAT_00800fe0)[uVar1 >> 5]) != 0) & 0x80800000) +
             0x80000000);
    }
    return (IMAGE_DOS_HEADER *)0x200000;
  }
  uVar1 = param_1 - 0x32;
  bVar2 = (byte)uVar1;
  if (((&DAT_00801420)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x1;
  }
  if (((&DAT_008013e0)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x2;
  }
  if (((&DAT_00800ee0)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x4;
  }
  if (((&DAT_00801490)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x8;
  }
  if (((&DAT_00800f20)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x10;
  }
  if (((&DAT_00800ef0)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x20;
  }
  if (((&DAT_00801430)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x40;
  }
  if (((&DAT_00801440)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x80;
  }
  return (IMAGE_DOS_HEADER *)
         ((-(uint)((1 << (bVar2 & 0x1f) & (&DAT_00800f60)[uVar1 >> 5]) != 0) & 0xffff8100) + 0x8000);
}

// 006753A0 FUN_006753a0
#line 1 "decomp/ST.exe/functions/006753A0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006753A0_param_1Enum. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_49=73;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_52=82
    */

int __cdecl st::fn_006753A0(Global_sub_006753A0_param_1Enum param_1)

{
  uint3 uVar1;

  uVar1 = (uint3)(param_1 - CASE_32 >> 8);
  switch(param_1) {
  case CASE_32:
  case CASE_33:
  case CASE_34:
  case CASE_38:
  case CASE_39:
  case CASE_3A:
  case CASE_3B:
  case CASE_4F:
  case CASE_50:
    return (uint)uVar1 << 8;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case CASE_35:
  case CASE_37:
  case CASE_3C:
  case CASE_40:
  case CASE_41:
  case CASE_44:
  case CASE_49:
  case CASE_4E:
  case CASE_52:
    return CONCAT31(uVar1,1);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case CASE_36:
  case CASE_3D:
  case CASE_42:
  case CASE_43:
  case CASE_4D:
    return CONCAT31(uVar1,2);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  default:
    return CONCAT31(uVar1,0x7f);
  }
}

// 00675430 FUN_00675430
#line 1 "decomp/ST.exe/functions/00675430/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00675430_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8;CASE_10=16;CASE_20=32;CASE_40=64;CASE_80=128

   [STPrototypeApplier] Propagated return.
   Evidence: 00675430 returns partial register write at 00675458 @ 0067545D | 00675430 returns
   partial register write at 0067545E @ 00675463 | 00675430 returns partial register write at
   00675464 @ 00675469 | 00675430 returns partial register write at 0067546A @ 0067546F | 00675430
   returns partial register write at 00675470 @ 00675475 | 00675430 returns partial register write
   at 00675476 @ 0067547B | 00675430 returns partial register write at 0067547C @ 00675481 |
   00675430 returns partial register write at 00675482 @ 00675487 | 00675430 returns partial
   register write at 006754A8 @ 006754AD | 00675430 returns partial register write at 006754AE @
   006754B3 | 00675430 returns partial register write at 006754BB @ 006754C0
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/ushort Evidence:
   all resolved direct callers consume only AX or kill the result; narrow_uses=2, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=0067C180 @ 0067C3FD -> read as AX on every CFG path | 0067C180 @
   0067C5B1 -> read as AX on every CFG path */

ushort __cdecl st::fn_00675430(Global_sub_00675430_param_1Enum param_1)

{
  if (param_1 < 0x101) {
    if (param_1 == 0x100) {
      return 0x32;
    }
    switch(param_1) {
    case CASE_1:
    case CASE_2:
      return 0x1e;
    case CASE_4:
      return 0x5f;
    case CASE_8:
      return 100;
    case CASE_10:
      return 0x46;
    case CASE_20:
      return 0x28;
    case CASE_40:
      return 0x5a;
    case CASE_80:
      return 0x6e;
    }
  }
  else if (param_1 < 0x100001) {
    if (param_1 == 0x100000) {
      return 10;
    }
    if (param_1 < 0x40001) {
      if (param_1 == 0x40000) {
        return 0x3c;
      }
      if (param_1 == 0x10000) {
        return 10;
      }
      if (param_1 == 0x20000) {
        return 10;
      }
    }
    else if (param_1 == 0x80000) {
      return 0x50;
    }
  }
  else {
    if (param_1 == 0x200000) {
      return 10;
    }
    if (param_1 == 0x400000) {
      return 10;
    }
    if (param_1 == 0x800000) {
      return 10;
    }
  }
  return 0;
}

// 006755E0 FUN_006755e0
#line 1 "decomp/ST.exe/functions/006755E0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006755E0 returns partial register write at 006755F0 @ 006755F5 | 006755E0 returns
   partial register write at 00675662 @ 00675667 | 006755E0 returns partial register write at
   00675668 @ 0067566D | 006755E0 returns partial register write at 0067566E @ 00675673 | 006755E0
   returns partial register write at 00675674 @ 00675679 | 006755E0 returns partial register write
   at 0067567A @ 0067567F | 006755E0 returns partial register write at 00675680 @ 00675685 |
   006755E0 returns partial register write at 00675686 @ 0067568B | 006755E0 returns partial
   register write at 0067568C @ 00675691 */

uint __cdecl st::fn_006755E0(int param_1)

{
  undefined2 uVar1;

  uVar1 = (undefined2)((uint)param_1 >> 0x10);
  if ((0x31 < param_1) && (param_1 < 0x74)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    return CONCAT22(uVar1,1);
  }
  if ((param_1 == 8) || ((param_1 == 0x14 || (param_1 == 0x1a)))) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    return CONCAT22(uVar1,2);
  }
  if (((param_1 == 0x19) || (param_1 == 0xc)) || (param_1 == 0x18)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    return CONCAT22(uVar1,4);
  }
  if (((param_1 != 7) && (param_1 != 0x13)) && (param_1 != 0x1b)) {
    if (((param_1 == 5) || (param_1 == 0x11)) || (param_1 == 0x21)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return CONCAT22(uVar1,0x40);
    }
    if (((param_1 == 6) || (param_1 == 0x12)) || (param_1 == 0x22)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return CONCAT22(uVar1,0x80);
    }
    if ((param_1 == 9) || (param_1 == 0x15)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return CONCAT22(uVar1,0x100);
    }
    if (((param_1 != 4) && (param_1 != 0x16)) && (param_1 != 0x1c)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return CONCAT22(uVar1,0x10);
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    return CONCAT22(uVar1,0x20);
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT22(uVar1,8);
}

// 006756D0 FUN_006756d0
#line 1 "decomp/ST.exe/functions/006756D0/decomp.c"
void __cdecl st::fn_006756D0(short *param_1,short *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  sVar1 = g_worldGrid.sizeY;
  sVar3 = g_worldGrid.sizeX;
  iVar4 = (int)g_worldGrid.sizeY;
  iVar6 = (int)g_worldGrid.sizeX;
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  iVar5 = (int)*param_1 + (int)*param_3;
  while ((iVar6 < iVar5 && (0 < *param_1))) {
    sVar2 = *param_1 + -1;
    *param_1 = sVar2;
    iVar5 = (int)*param_3 + (int)sVar2;
  }
  if (iVar6 < (int)*param_3 + (int)*param_1) {
    *param_3 = sVar3 - *param_1;
  }
  iVar6 = (int)*param_2 + (int)*param_4;
  while ((iVar4 < iVar6 && (0 < *param_2))) {
    sVar3 = *param_2 + -1;
    *param_2 = sVar3;
    iVar6 = (int)sVar3 + (int)*param_4;
  }
  if (iVar4 < (int)*param_2 + (int)*param_4) {
    *param_4 = sVar1 - *param_2;
  }
  return;
}

// 006757C0 FUN_006757c0
#line 1 "decomp/ST.exe/functions/006757C0/decomp.c"
void __cdecl
st::fn_006757C0(short *param_1,short *param_2,short *param_3,short *param_4,short *param_5,
            short *param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  sVar2 = g_worldGrid.sizeZ;
  sVar1 = g_worldGrid.sizeY;
  sVar4 = g_worldGrid.sizeX;
  iVar7 = (int)g_worldGrid.sizeZ;
  iVar5 = (int)g_worldGrid.sizeY;
  iVar8 = (int)g_worldGrid.sizeX;
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  if (*param_4 < 0) {
    *param_4 = 0;
  }
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  if (*param_5 < 0) {
    *param_5 = 0;
  }
  if (*param_3 < 0) {
    *param_3 = 0;
  }
  if (*param_6 < 0) {
    *param_6 = 0;
  }
  iVar6 = (int)*param_1 + (int)*param_4;
  while ((iVar8 < iVar6 && (0 < *param_1))) {
    sVar3 = *param_1 + -1;
    *param_1 = sVar3;
    iVar6 = (int)*param_4 + (int)sVar3;
  }
  if (iVar8 < (int)*param_4 + (int)*param_1) {
    *param_4 = sVar4 - *param_1;
  }
  iVar8 = (int)*param_2 + (int)*param_5;
  while ((iVar5 < iVar8 && (0 < *param_2))) {
    sVar4 = *param_2 + -1;
    *param_2 = sVar4;
    iVar8 = (int)sVar4 + (int)*param_5;
  }
  if (iVar5 < (int)*param_5 + (int)*param_2) {
    *param_5 = sVar1 - *param_2;
  }
  iVar5 = (int)*param_3 + (int)*param_6;
  while ((iVar7 < iVar5 && (0 < *param_3))) {
    sVar4 = *param_3 + -1;
    *param_3 = sVar4;
    iVar5 = (int)sVar4 + (int)*param_6;
  }
  if (iVar7 < (int)*param_3 + (int)*param_6) {
    *param_6 = sVar2 - *param_3;
  }
  return;
}

// 00675950 FUN_00675950
#line 1 "decomp/ST.exe/functions/00675950/decomp.c"
undefined4 __cdecl
st::fn_00675950(int param_1,int param_2,short param_3,short *param_4,short *param_5,short *param_6,
            int param_7)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int local_24;
  short local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_24 = 1;
  local_c = param_2;
  do {
    local_10 = (param_1 - param_2) + local_c;
    local_18 = local_24;
    local_14 = local_24;
    local_8 = local_c;
    st::fn_00401906((short *)&local_10,(short *)&local_8,(short *)&local_14,(short *)&local_18);
    sVar3 = (short)local_10;
    sVar1 = (short)local_14 + -1 + sVar3;
    local_20 = (short)local_18 + -1 + (short)local_8;
    iVar4 = local_10;
    iVar2 = local_8;
    while (sVar3 <= sVar1) {
      sVar3 = (short)iVar2;
      iVar6 = iVar2;
      while (sVar3 <= local_20) {
        sVar3 = 0;
        sVar5 = param_3;
        do {
          sVar7 = (short)iVar4;
          sVar8 = (short)iVar6;
          iVar2 = st::fn_00404D3B(sVar7,sVar8,sVar5);
          if ((iVar2 != 0) &&
             (STGridAt3D(g_worldGrid, sVar7, sVar8, sVar5).objects[param_7] == nullptr)) {
            *param_4 = sVar7;
            *param_5 = sVar8;
            *param_6 = sVar5;
            return 1;
          }
          sVar5 = sVar5 + 1;
          if (4 < sVar5) {
            sVar5 = 0;
          }
          sVar3 = sVar3 + 1;
        } while (sVar3 < 5);
        iVar6 = iVar6 + 1;
        iVar2 = local_8;
        sVar3 = (short)iVar6;
      }
      iVar4 = iVar4 + 1;
      sVar3 = (short)iVar4;
    }
    local_24 = local_24 + 2;
    local_c = local_c + -1;
    if (8 < (short)local_24) {
      *param_4 = (short)param_1;
      *param_5 = (short)param_2;
      *param_6 = param_3;
      return 0;
    }
  } while( true );
}

// 00675B10 FUN_00675b10
#line 1 "decomp/ST.exe/functions/00675B10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0064D270 -> 00675B10 @ 0064D376; MOVSX at 0064D35A establishes signed source width 2 */

undefined4 __cdecl
st::fn_00675B10(int param_1,int param_2,short param_3,short *param_4,short *param_5,short *param_6,
            int param_7)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int local_24;
  short local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_24 = 1;
  local_c = param_2;
  do {
    local_10 = (param_1 - param_2) + local_c;
    local_18 = local_24;
    local_14 = local_24;
    local_8 = local_c;
    st::fn_00401906((short *)&local_10,(short *)&local_8,(short *)&local_14,(short *)&local_18);
    sVar3 = (short)local_10;
    sVar1 = (short)local_14 + -1 + sVar3;
    local_20 = (short)local_18 + -1 + (short)local_8;
    iVar6 = local_10;
    iVar2 = local_8;
    while (sVar3 <= sVar1) {
      sVar3 = (short)iVar2;
      iVar4 = iVar2;
      while (sVar3 <= local_20) {
        sVar3 = 0;
        sVar5 = param_3;
        do {
          sVar7 = (short)iVar6;
          sVar8 = (short)iVar4;
          iVar2 = st::fn_00404D3B(sVar7,sVar8,sVar5);
          if ((iVar2 != 0) &&
             (((((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7)) || (sVar8 < 0)) ||
               ((g_worldGrid.sizeY <= sVar8 || (sVar5 < 0)))) ||
              ((g_worldGrid.sizeZ <= sVar5 ||
               ((STGridAt3D(g_worldGrid, sVar7, sVar8, sVar5).objects[0] == nullptr ||
                (iVar2 = (*STGridAt3D(g_worldGrid, sVar7, sVar8, sVar5).objects[0]->vtable[5].
                           slots_00_28[9])(param_7), iVar2 != 0)))))))) {
            *param_4 = sVar7;
            *param_5 = sVar8;
            *param_6 = sVar5;
            return 1;
          }
          sVar5 = sVar5 + 1;
          if (4 < sVar5) {
            sVar5 = 0;
          }
          sVar3 = sVar3 + 1;
        } while (sVar3 < 5);
        iVar4 = iVar4 + 1;
        iVar2 = local_8;
        sVar3 = (short)iVar4;
      }
      iVar6 = iVar6 + 1;
      sVar3 = (short)iVar6;
    }
    local_24 = local_24 + 2;
    local_c = local_c + -1;
    if (8 < (short)local_24) {
      *param_4 = (short)param_1;
      *param_5 = (short)param_2;
      *param_6 = param_3;
      return 0;
    }
  } while( true );
}

// 00675D30 FUN_00675d30
#line 1 "decomp/ST.exe/functions/00675D30/decomp.c"
void __cdecl st::fn_00675D30(short param_1,short param_2,short param_3,short param_4,short *param_5)

{
  short sVar1;

  *param_5 = param_1 - param_4;
  param_5[1] = param_2 - param_4;
  param_5[2] = param_3 - param_4;
  if ((short)(param_3 - param_4) < 0) {
    param_5[2] = 0;
  }
  sVar1 = param_4 * 2 + 1;
  param_5[3] = sVar1;
  param_5[5] = sVar1;
  param_5[4] = sVar1;
  if (5 < sVar1) {
    param_5[5] = 5;
  }
  st::fn_00401906(param_5,param_5 + 1,param_5 + 3,param_5 + 4);
  return;
}

// 00675DC0 FUN_00675dc0
#line 1 "decomp/ST.exe/functions/00675DC0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00675EA0 -> 00675DC0 @ 00675F34

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_00675DC0(uint param_1,DArrayTy *param_2)

{
  dword dVar1;
  ushort *puVar2;
  STGameObjC *pSVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if (((g_allPlayers_007FA174 != nullptr) && (param_2 != nullptr)) &&
     (dVar1 = param_2->count, dVar1 != 0)) {
    uVar6 = 0;
    if (dVar1 != 0) {
      uVar5 = 0;
      if (dVar1 == 0) {
        puVar2 = nullptr;
        goto LAB_00675dfe;
      }
      do {
        puVar2 = DArrayAt<ushort>(param_2, uVar5);
LAB_00675dfe:
        pSVar3 = st::fn_004028BA(g_allPlayers_007FA174,(char)param_1,*puVar2,CASE_1);
        if (((pSVar3 != nullptr) && (iVar4 = (*pSVar3->vtable->vfunc_2C)(), iVar4 == 0x78)
            ) && (iVar4 = (*pSVar3->vtable->vfunc_2C)(), iVar4 == 0x78)) {
          pSVar3->field_0269 = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar6 & 0xffff;
      } while (uVar5 < param_2->count);
    }
    st::fn_0040178F
              (g_allPlayers_007FA174,(char)param_1,0,&param_2->flags,nullptr);
  }
  return;
}

// 006765B0 FUN_006765b0
#line 1 "decomp/ST.exe/functions/006765B0/decomp.c"
void st::fn_006765B0(void)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)&g_packedRecords_A62x8[DAT_0080874d].field_0x2eb;
  puVar3 = (byte *)(&DAT_0080e83b);
  memmove(puVar3, puVar2, 0x14); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field376_0x2ff);
  puVar3 = (byte *)(&DAT_0080e84f);
  memmove(puVar3, puVar2, 0x14); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field410_0x327);
  puVar3 = (byte *)(&DAT_0080e863);
  memmove(puVar3, puVar2, 0x26c); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field1024_0x593);
  puVar3 = (byte *)(&DAT_0080eacf);
  memmove(puVar3, puVar2, 0x1a8); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)&g_packedRecords_A62x8[DAT_0080874d].field1445_0x73b;
  puVar3 = (byte *)(&DAT_0080ec77);
  memmove(puVar3, puVar2, 0x9b); /* compiler REP MOVS byte copy */
  return;
}

// 006766C0 FUN_006766c0
#line 1 "decomp/ST.exe/functions/006766C0/decomp.c"
void st::fn_006766C0(void)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)(&DAT_0080e83b);
  puVar3 = (byte *)&g_packedRecords_A62x8[DAT_0080874d].field_0x2eb;
  memmove(puVar3, puVar2, 0x14); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&DAT_0080e84f);
  puVar3 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field376_0x2ff);
  memmove(puVar3, puVar2, 0x14); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&DAT_0080e863);
  puVar3 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field410_0x327);
  memmove(puVar3, puVar2, 0x26c); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&DAT_0080eacf);
  puVar3 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field1024_0x593);
  memmove(puVar3, puVar2, 0x1a8); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&DAT_0080ec77);
  puVar3 = (byte *)&g_packedRecords_A62x8[DAT_0080874d].field1445_0x73b;
  memmove(puVar3, puVar2, 0x9b); /* compiler REP MOVS byte copy */
  return;
}

// 006767D0 FUN_006767d0
#line 1 "decomp/ST.exe/functions/006767D0/decomp.c"

int st::fn_006767D0(void)

{
  int iVar1;
  cMf32 *this;
  byte local_150 [260];
  InternalExceptionFrame local_4c;
  cMf32 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    st::external_00000080((LPSTR)local_150,"%s%s%s\\%s",&DAT_00807680,PTR_s_SAVEGAME__0079d6c0,
              &DAT_00807ddd,PTR_s_PL_LOG_0079d6c4);
    this = (cMf32 *)st::fn_006F0EC0(0x345,local_150,2,0,0);
    local_8 = this;
    st::external_00000080((LPSTR)local_150,"%s%d%02d",PTR_DAT_0079d6c8,(uint)DAT_0080874e,DAT_0080c52a);
    st::fn_006F13F0(this,0xc,(char *)local_150,(byte *)&DAT_0080c522,0x27f0,nullptr,'\0',
                  nullptr);
    st::fn_006F1170(this);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_006F1170(local_8);
  if (iVar1 < 0) {
    return iVar1;
  }
  return -1;
}

// 00676930 FUN_00676930
#line 1 "decomp/ST.exe/functions/00676930/decomp.c"
void __cdecl st::fn_00676930(uint param_1)

{
  byte *puVar1;
  uint uVar2;
  ushort *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte *puVar7;
  undefined4 local_298 [78];
  uint local_160 [8];
  undefined4 local_140 [43];
  int local_94;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint *local_8;

  if (g_allPlayers_007FA174 != nullptr) {
    puVar5 = &DAT_0080c947;
    puVar6 = local_160;
    memmove(puVar6, puVar5, 0x20); /* compiler REP MOVS byte copy */
    st::fn_00404048(g_allPlayers_007FA174,param_1,&DAT_0080c83e,0);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    local_8 = &DAT_0080c947;
    puVar4 = &DAT_0080c8cd;
    do {
      if ((byte)(&DAT_0080c83f)[param_1] < 8) {
        puVar1 = (byte *)st::fn_004044E4(local_298,(&DAT_0080c83f)[param_1]);
        puVar7 = (byte *)(local_140);
        memmove(puVar7, puVar1, 0x138); /* compiler REP MOVS byte copy */
        puVar4[-2] = (short)local_140[0x25] + (short)local_140[0x21] + (short)local_140[0x1d] +
                     (short)local_140[0x19] + (short)local_140[0x15] + (short)local_140[0x11] +
                     (short)local_140[0xd] + (short)local_140[9];
        puVar4[-1] = (short)local_140[0x26] + (short)local_140[0x22] + (short)local_140[0x1e] +
                     (short)local_140[0x1a] + (short)local_140[0x16] + (short)local_140[0x12] +
                     (short)local_140[0xe] + (short)local_140[10];
        *puVar4 = (short)local_140[0x27] + (short)local_140[0x23] + (short)local_140[0x1f] +
                  (short)local_140[0x1b] + (short)local_140[0x17] + (short)local_140[0x13] +
                  (short)local_140[0xf] + (short)local_140[0xb];
        puVar4[2] = (short)local_1c + (short)local_2c + (short)local_3c + (short)local_4c +
                    (short)local_5c + (short)local_6c + (short)local_7c + (short)local_8c +
                    (short)local_140[0x29];
        puVar4[3] = (short)local_18 + (short)local_28 + (short)local_38 + (short)local_48 +
                    (short)local_58 + (short)local_68 + (short)local_78 + (short)local_88 +
                    (short)local_140[0x2a];
        uVar2 = local_14 + local_24 + local_34 + local_44 + local_54 + local_64 + local_74 +
                local_84 + local_94;
        puVar4[4] = (ushort)uVar2;
        uVar2 = (((uVar2 & 0xffff) + (uint)*puVar4) * 3 + ((uint)puVar4[-1] + (uint)puVar4[3]) * -2
                 + (uint)puVar4[-2] + (uint)puVar4[2]) * 5;
        if ((int)local_160[(byte)(&DAT_0080c83f)[param_1]] < 0) {
          *local_8 = ((int)uVar2 < 0) - 1 & uVar2;
        }
        else {
          *local_8 = local_160[(byte)(&DAT_0080c83f)[param_1]];
        }
      }
      puVar4 = puVar4 + 8;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
      local_8 = local_8 + 1;
    } while ((int)puVar4 < 0x80c94d);
  }
  return;
}

// 00676C40 FUN_00676c40
#line 1 "decomp/ST.exe/functions/00676C40/decomp.c"
void __cdecl st::fn_00676C40(DArrayTy *param_1,callback_00676C40_p1 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  void *arg_1;
  int iVar4;
  void *arg_2;
  uint uVar5;

  uVar3 = param_1->count;
  if (1 < uVar3) {
    do {
      bVar2 = false;
      uVar5 = 0;
      if ((int)(uVar3 - 1) < 1) {
        return;
      }
      do {
        if (uVar5 < uVar3) {
          arg_2 = DArrayAt<void>(param_1, uVar5);
        }
        else {
          arg_2 = nullptr;
        }
        uVar1 = uVar5 + 1;
        if (uVar1 < uVar3) {
          arg_1 = DArrayAt<void>(param_1, uVar1);
        }
        else {
          arg_1 = nullptr;
        }
        iVar4 = (*param_2)(arg_1,arg_2);
        if (0 < iVar4) {
          st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)param_1,uVar5,uVar1);
          bVar2 = true;
        }
        uVar3 = param_1->count;
        uVar5 = uVar1;
      } while ((int)uVar1 < (int)(uVar3 - 1));
    } while (bVar2);
  }
  return;
}

// 00676CE0 FUN_00676ce0
#line 1 "decomp/ST.exe/functions/00676CE0/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __cdecl st::fn_00676CE0(DArrayTy *param_1,undefined *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;

  uVar3 = param_1->count;
  if (1 < uVar3) {
    do {
      bVar2 = false;
      uVar7 = 0;
      if ((int)(uVar3 - 1) < 1) {
        return;
      }
      do {
        if (uVar7 < uVar3) {
          pvVar6 = DArrayAt<void>(param_1, uVar7);
        }
        else {
          pvVar6 = nullptr;
        }
        uVar1 = uVar7 + 1;
        if (uVar1 < uVar3) {
          pvVar4 = DArrayAt<void>(param_1, uVar1);
        }
        else {
          pvVar4 = nullptr;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (*(code *)param_2)(pvVar4,pvVar6);
        if (iVar5 < 0) {
          st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)param_1,uVar7,uVar1);
          bVar2 = true;
        }
        uVar3 = param_1->count;
        uVar7 = uVar1;
      } while ((int)uVar1 < (int)(uVar3 - 1));
    } while (bVar2);
  }
  return;
}

// 006771E0 FUN_006771e0
#line 1 "decomp/ST.exe/functions/006771E0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0066C416>00401E8D | D:0066C5BE>00401E8D | D:0066C811>00401E8D */

undefined4 st::fn_006771E0(void)

{
  DAT_00811980 = DAT_00811980 + 1;
  return 0;
}

// 00677200 FUN_00677200
#line 1 "decomp/ST.exe/functions/00677200/decomp.c"
undefined4 __cdecl st::fn_00677200(undefined4 param_1,undefined4 param_2,STFishC *param_3)

{
  g_fish_00811984 = param_3;
  return 0xffffffff;
}

// 00677220 FUN_00677220
#line 1 "decomp/ST.exe/functions/00677220/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 00677220 returns zeroed full register at 00677234 @ 00677237 */

uint st::fn_00677220(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  DArrayTy *in_stack_00000010;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (in_stack_00000010 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006AE1C0(in_stack_00000010,&stack0x00000008);
  }
  return 0;
}

// 00677250 FUN_00677250
#line 1 "decomp/ST.exe/functions/00677250/decomp.c"
undefined4 __cdecl st::fn_00677250(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  uint *array;
  uint uVar1;

  array = param_4;
  if (param_4 != nullptr) {
    uVar1 = st::fn_0040579F(param_3);
    if ((uVar1 & 8) == 0) {
      st::fn_006AE1C0((DArrayTy *)array,&param_2);
    }
  }
  return 0;
}

// 00677700 FUN_00677700
#line 1 "decomp/ST.exe/functions/00677700/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00677700_param_2Enum. Cases:
   CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_DF=223;CASE_E2=226;CASE_E3=227 */

int __cdecl st::fn_00677700(int param_1,Global_sub_00677700_param_2Enum param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;

  uVar1 = 0;
  if (g_allPlayers_007FA174 == nullptr) {
    return uVar1;
  }
  cVar4 = (char)param_1;
  switch(param_2) {
  case CASE_DC:
    iVar2 = st::fn_004016E0(cVar4);
    return iVar2;
  case CASE_DD:
    iVar2 = st::fn_00403954(cVar4);
    return iVar2;
  case CASE_DE:
    iVar2 = st::fn_00402284(cVar4);
    return iVar2;
  case CASE_DF:
    iVar2 = st::fn_00403ADF(cVar4);
    iVar3 = st::fn_0040291E(cVar4);
    return iVar3 - iVar2;
  case CASE_E2:
    iVar2 = st::fn_00401E6A((byte *)param_1);
    return iVar2;
  case CASE_E3:
    uVar1 = st::fn_004036A7(param_1);
  }
  return uVar1;
}

// 006777D0 FUN_006777d0
#line 1 "decomp/ST.exe/functions/006777D0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006777D0_param_1Enum. Cases:
   CASE_DD=221;CASE_DE=222;CASE_E1=225;CASE_E2=226 */

int __cdecl
st::fn_006777D0(Global_sub_006777D0_param_1Enum param_1,int param_2,int param_3,undefined4 param_4,
            int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;

  local_8 = 0;
  if (g_allPlayers_007FA174 == nullptr) {
    return 0;
  }
  iVar3 = param_2;
  if (param_2 < 0) {
    iVar3 = 0;
  }
  iVar1 = param_3;
  if (param_3 < 0) {
    iVar1 = 0;
  }
  iVar4 = param_5;
  if (param_5 < 1) {
    iVar4 = (int)g_worldGrid.sizeX;
  }
  iVar2 = param_6;
  if (param_6 < 1) {
    iVar2 = (int)g_worldGrid.sizeY;
  }
  switch(param_1) {
  case CASE_DD:
  case CASE_DE:
  case CASE_E2:
    iVar3 = st::fn_00401F4B(param_1,&param_3,&param_2,iVar3,iVar1,iVar4,iVar2);
    if (iVar3 == 0) {
      return param_2;
    }
    break;
  case CASE_E1:
    local_8 = st::fn_00401177(0);
  }
  return local_8;
}

// 006778C0 FUN_006778c0
#line 1 "decomp/ST.exe/functions/006778C0/decomp.c"
int __cdecl
st::fn_006778C0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar3 = 0;
  if (g_allPlayers_007FA174 == nullptr) {
    return 0;
  }
  iVar5 = param_2;
  if (param_2 < 0) {
    iVar5 = 0;
  }
  iVar4 = param_3;
  if (param_3 < 0) {
    iVar4 = 0;
  }
  iVar2 = param_5;
  if (param_5 < 1) {
    iVar2 = (int)g_worldGrid.sizeX;
  }
  iVar1 = param_6;
  if (param_6 < 1) {
    iVar1 = (int)g_worldGrid.sizeY;
  }
  if ((0xdc < param_1) && (param_1 < 0xdf)) {
    iVar5 = st::fn_00401F4B(param_1,&param_2,&param_3,iVar5,iVar4,iVar2,iVar1);
    if (iVar5 == 0) {
      iVar3 = param_2;
    }
  }
  return iVar3;
}

// 00677BC0 FUN_00677bc0
#line 1 "decomp/ST.exe/functions/00677BC0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0066D761>00401F7D */

undefined4 st::fn_00677BC0(void)

{
  DAT_00811980 = DAT_00811980 + 1;
  return 0;
}

// 00677ED0 FUN_00677ed0
#line 1 "decomp/ST.exe/functions/00677ED0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0066D3D6>00405628 */

undefined4 st::fn_00677ED0(void)

{
  DAT_00811980 = DAT_00811980 + 1;
  return 0;
}

// 00677EF0 FUN_00677ef0
#line 1 "decomp/ST.exe/functions/00677EF0/decomp.c"
undefined4 __cdecl st::fn_00677EF0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_3 + 0x138))();
  DAT_00811980 = DAT_00811980 + iVar1;
  return 0;
}

// 00677F20 FUN_00677f20
#line 1 "decomp/ST.exe/functions/00677F20/decomp.c"
undefined4 __cdecl st::fn_00677F20(undefined4 param_1,undefined4 param_2,STFishC *param_3)

{
  g_fish_00811984 = param_3;
  return 0xffffffff;
}

// 00678200 FUN_00678200
#line 1 "decomp/ST.exe/functions/00678200/decomp.c"
undefined4 st::fn_00678200(void)

{
  DAT_00811980 = DAT_00811980 + 1;
  return 0;
}

// 00678220 FUN_00678220
#line 1 "decomp/ST.exe/functions/00678220/decomp.c"
undefined4 __cdecl st::fn_00678220(undefined4 param_1,undefined4 param_2,STFishC *param_3)

{
  g_fish_00811984 = param_3;
  return 0xffffffff;
}

// 00678560 FUN_00678560
#line 1 "decomp/ST.exe/functions/00678560/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0066DEE9>004027A7 */

undefined4 st::fn_00678560(void)

{
  DAT_00811980 = DAT_00811980 + 1;
  return 0;
}

// 00678580 FUN_00678580
#line 1 "decomp/ST.exe/functions/00678580/decomp.c"
undefined4 __cdecl st::fn_00678580(undefined4 param_1,undefined4 param_2,STFishC *param_3)

{
  g_fish_00811984 = param_3;
  return 0xffffffff;
}

// 00678870 FUN_00678870
#line 1 "decomp/ST.exe/functions/00678870/decomp.c"
undefined4 st::fn_00678870(void)

{
  DAT_00811980 = DAT_00811980 + 1;
  return 0;
}

// 00678890 FUN_00678890
#line 1 "decomp/ST.exe/functions/00678890/decomp.c"
undefined4 __cdecl st::fn_00678890(undefined4 param_1,undefined4 param_2,STFishC *param_3)

{
  g_fish_00811984 = param_3;
  return 0xffffffff;
}

// 00678950 FUN_00678950
#line 1 "decomp/ST.exe/functions/00678950/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00678950 returns return of FUN_006e6000 @ 00678968 */

int __thiscall st::fn_00678950(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;

  iVar1 = st::fn_006E6000((void *)((int)this + -0x1c),param_1,param_2,param_3);
  return iVar1;
}

// 00678BA0 FUN_00678ba0
#line 1 "decomp/ST.exe/functions/00678BA0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00678980 -> 00678BA0 @ 00678AE8

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_00678BA0(AiPlrClassTy *param_1)

{
  st::fn_00402E14((AiEventClassTy *)&param_1->vtable_at_1c);
  if (param_1 != nullptr) {
    st::fn_004043D6((AnonShape_0067D0A0_8092D907 *)&param_1->field_05D3);
    return;
  }
  st::fn_004043D6(nullptr);
  return;
}

// 00678D20 FUN_00678d20
#line 1 "decomp/ST.exe/functions/00678D20/decomp.c"
uint __thiscall st::fn_00678D20(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x695);
  uVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        piVar4 = (int *)(*(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c));
      }
      else {
        piVar4 = nullptr;
      }
      if (((piVar4[1] != 0) && (piVar4[1] == param_1)) && (*piVar4 != 0)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while ((int)uVar3 < (int)uVar2);
  }
  return 0xffffffff;
}

// 00678D90 FUN_00678d90
#line 1 "decomp/ST.exe/functions/00678D90/decomp.c"
undefined4 __thiscall st::fn_00678D90(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x695);
  uVar4 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        puVar3 = (undefined4 *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c));
      }
      else {
        puVar3 = nullptr;
      }
      if ((puVar3[1] != 0) && (puVar3[1] == param_1)) {
        return *puVar3;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return 0;
}

// 00678E00 FUN_00678e00
#line 1 "decomp/ST.exe/functions/00678E00/decomp.c"
uint __thiscall st::fn_00678E00(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;

  iVar2 = STField<int>(this,0x695);
  uVar6 = *(uint *)(iVar2 + 0xc);
  uVar8 = 0;
  if (0 < (int)uVar6) {
    bVar9 = uVar6 != 0;
    do {
      if (bVar9) {
        piVar3 = (int *)(*(int *)(iVar2 + 8) * uVar8 + *(int *)(iVar2 + 0x1c));
      }
      else {
        piVar3 = nullptr;
      }
      if (*piVar3 != 0) {
        if (((iVar2 == 0) || ((int)uVar8 < 0)) || ((int)uVar6 <= (int)uVar8)) {
LAB_00678e60:
          iVar4 = 0;
        }
        else {
          if (uVar8 < uVar6) {
            piVar3 = (int *)(*(int *)(iVar2 + 8) * uVar8 + *(int *)(iVar2 + 0x1c));
          }
          else {
            piVar3 = nullptr;
          }
          iVar4 = *piVar3;
          if (piVar3[1] != 0) {
            if (iVar4 == 0) goto LAB_00678e60;
            iVar4 = iVar4 + 0x20;
          }
        }
        pbVar7 = (byte *)(iVar4 + 0x1b);
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00678e8c:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00678e91;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00678e8c;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00678e91:
        if (iVar4 == 0) {
          return uVar8;
        }
      }
      uVar6 = *(uint *)(iVar2 + 0xc);
      uVar8 = uVar8 + 1;
      bVar9 = uVar8 < uVar6;
    } while ((int)uVar8 < (int)uVar6);
  }
  return 0xffffffff;
}

// 00678EF0 FUN_00678ef0
#line 1 "decomp/ST.exe/functions/00678EF0/decomp.c"
int __thiscall st::fn_00678EF0(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;

  iVar2 = STField<int>(this,0x695);
  uVar8 = 0;
  uVar3 = *(uint *)(iVar2 + 0xc);
  if (0 < (int)uVar3) {
    do {
      if (((iVar2 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar3)) {
        if (uVar8 < uVar3) {
          piVar5 = (int *)(*(int *)(iVar2 + 8) * uVar8 + *(int *)(iVar2 + 0x1c));
        }
        else {
          piVar5 = nullptr;
        }
        if ((piVar5[1] != 0) && (iVar4 = *piVar5, iVar4 != 0)) {
          pbVar9 = (byte *)(iVar4 + 0x3b);
          pbVar6 = param_1;
          do {
            bVar1 = *pbVar6;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_00678f62:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00678f67;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_00678f62;
            pbVar6 = pbVar6 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00678f67:
          if (iVar7 == 0) {
            return iVar4;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar3);
  }
  return 0;
}

// 00679600 FUN_00679600
#line 1 "decomp/ST.exe/functions/00679600/decomp.c"
void __fastcall st::fn_00679600(AnonShape_00679600_B8E418A8 *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  AnonShape_0068FD00_A5257008 *pAVar9;
  bool bVar10;
  int local_1a8;
  undefined4 local_1a4 [87];
  AnonShape_0068FD00_A5257008 local_48 [3];
  uint local_14;
  byte *local_10;
  byte local_c;
  undefined3 uStack_b;
  AnonShape_00679600_B8E418A8 *local_8;

  local_14 = param_1->field_0640;
  if (8 < local_14) {
    param_1->field_0640 = 0xff;
  }
  if (param_1->field_0640 == 8) {
    param_1->field_0640 = (uint)DAT_0080874d;
  }
  local_8 = param_1;
  if (param_1->field_0644 != '\x01') goto cf_common_exit_0067989B;
  uVar4 = param_1->field_0640;
  uVar7 = param_1->field_05D7;
  if ((uVar4 != uVar7) && (uVar4 != 0xff)) {
    cVar2 = (char)uVar4;
    local_10 = (byte *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(cVar2));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_c = CONCAT31(uStack_b,(char)uVar7);
    if (DAT_00808a8f == '\0') {
      if (cVar2 == (char)uVar7) {
LAB_0067971a:
        iVar6 = 0;
      }
      else {
        uVar4 = uVar4 & 0xff;
        uVar7 = uVar7 & 0xff;
        bVar1 = g_playerRelationMatrix[uVar4][uVar7];
        if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
          iVar6 = -2;
        }
        else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
          iVar6 = -1;
        }
        else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 1)) {
          iVar6 = 1;
        }
        else {
          if ((bVar1 != 1) || (g_playerRelationMatrix[uVar7][uVar4] != 1)) goto LAB_0067971a;
          iVar6 = 2;
        }
      }
      bVar10 = iVar6 < 0;
    }
    else {
      bVar10 = g_bulkInitializedRecords_008087C7[uVar7 & 0xff].field_0023 !=
               g_bulkInitializedRecords_008087C7[uVar4 & 0xff].field_0023;
    }
    if ((bVar10) && (sVar3 = st::fn_00401E7E(cVar2), param_1 = local_8, sVar3 != 0))
    goto cf_common_exit_0067989B;
  }
  iVar6 = 0;
  piVar8 = &local_1a8;
  local_10 = &g_bulkInitializedRecords_008087C7[0].field_0022;
  param_1 = local_8;
  do {
    uVar4 = (uint)*local_10;
    if ((uVar4 != 0xff) && (uVar7 = param_1->field_05D7, uVar4 != uVar7)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,(byte)uVar7);
      if (DAT_00808a8f == '\0') {
        if (*local_10 == (byte)uVar7) {
          iVar5 = 0;
        }
        else {
          uVar7 = uVar7 & 0xff;
          bVar1 = g_playerRelationMatrix[uVar4][uVar7];
          if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
            iVar5 = -2;
            param_1 = local_8;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
            iVar5 = -1;
            param_1 = local_8;
          }
          else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 1)) {
            iVar5 = 1;
            param_1 = local_8;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar4] == 1)) {
            iVar5 = 2;
            param_1 = local_8;
          }
          else {
            iVar5 = 0;
            param_1 = local_8;
          }
        }
        bVar10 = iVar5 < 0;
      }
      else {
        bVar10 = g_bulkInitializedRecords_008087C7[uVar7 & 0xff].field_0023 !=
                 g_bulkInitializedRecords_008087C7[uVar4].field_0023;
        param_1 = local_8;
      }
      if (bVar10) {
        piVar8[1] = uVar4;
        iVar6 = iVar6 + 1;
        *piVar8 = (-(uint)(*(char *)(g_bulkInitializedRecords_008087C7 + uVar4) != '\0') &
                  0xffffffa6) + 100;
        piVar8 = piVar8 + 0xb;
      }
    }
    local_10 = local_10 + 0x51;
  } while ((int)local_10 < 0x808a71);
  if (iVar6 < 1) {
    param_1->field_0640 = 0xff;
  }
  else {
    iVar6 = st::fn_00402423(&param_1->field_0xa4,&local_1a8,iVar6);
    param_1->field_0640 = local_1a4[iVar6 * 0xb];
  }
cf_common_exit_0067989B:
  uVar4 = param_1->field_0640;
  if (uVar4 != local_14) {
    pAVar9 = local_48;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pAVar9 = 0;
      pAVar9 = (AnonShape_0068FD00_A5257008 *)&pAVar9->field_0x4;
    }
    STPiece<4,4>(local_48[0]) = param_1->field_06FE;
    STPiece<0,4>(local_48[0]) = 0x6a;
    STPiece<8,4>(local_48[0]) = uVar4;
    st::fn_00405DC6((AiPlrClassTy *)param_1,local_48,-1);
    st::fn_0040394F((AiPlrClassTy *)param_1);
  }
  return;
}

// 006799B0 FUN_006799b0
#line 1 "decomp/ST.exe/functions/006799B0/decomp.c"
void __thiscall st::fn_006799B0(void *this,uint param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  AnonShape_0068FD00_A5257008 *pAVar5;
  bool bVar6;
  AnonShape_0068FD00_A5257008 local_3c [3];
  uint local_8;

  local_8 = STField<uint>(this,0x640);
  if (STField<char>(this,0x644) == '\x01') {
    uVar1 = (ushort)param_1;
    if ((uVar1 < 8) &&
       ((((g_playSystem_00802A38 == nullptr ||
          (g_bulkInitializedRecords_008087C7[(short)uVar1].field_0022 < 8)) &&
         (uVar4 = (uint)(short)uVar1, uVar4 != local_8)) &&
        (uVar2 = STField<uint>(this,0x5d7), uVar4 != uVar2)))) {
      if (DAT_00808a8f == '\0') {
        iVar3 = st::fn_00405D8F(&DAT_00807620,(byte)param_1,(byte)uVar2);
        bVar6 = iVar3 < 0;
      }
      else {
        bVar6 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023;
      }
      if (bVar6) {
        if (STField<uint>(this,0x649) == uVar4) {
          STField<short>(this,0x64d) = STField<short>(this,0x64d) + 1;
          uVar2 = STField<uint>(this,0x640);
          if (*(char *)(g_bulkInitializedRecords_008087C7 + uVar4) == '\0') {
            if ((uVar2 < 8) && (*(char *)(g_bulkInitializedRecords_008087C7 + uVar2) == '\0')) {
              uVar2 = STField<int>(this,0xa4) * 0x41c64e6d + 0x3039;
              STField<uint>(this,0xa4) = uVar2;
              iVar3 = (uVar2 >> 0x10 & 7) + 8;
            }
            else {
              uVar2 = STField<int>(this,0xa4) * 0x41c64e6d + 0x3039;
              STField<uint>(this,0xa4) = uVar2;
              iVar3 = (uVar2 >> 0x10) % 3 + 1;
            }
          }
          else if ((uVar2 < 8) && (*(char *)(g_bulkInitializedRecords_008087C7 + uVar2) == '\0')) {
            uVar2 = STField<int>(this,0xa4) * 0x41c64e6d + 0x3039;
            STField<uint>(this,0xa4) = uVar2;
            iVar3 = (uVar2 >> 0x10) % 0xb + 0x14;
          }
          else {
            uVar2 = STField<int>(this,0xa4) * 0x41c64e6d + 0x3039;
            STField<uint>(this,0xa4) = uVar2;
            iVar3 = (uVar2 >> 0x10 & 7) + 8;
          }
          if (iVar3 < STField<short>(this,0x64d)) {
            STField<uint>(this,0x640) = uVar4;
            STField<uint>(this,0x649) = uVar4;
            STField<undefined2>(this,0x64d) = 0;
          }
        }
        else {
          STField<uint>(this,0x649) = uVar4;
          STField<undefined2>(this,0x64d) = 1;
        }
      }
    }
  }
  STPiece<8,4>(local_3c[0]) = STField<uint>(this,0x640);
  if (STPiece<8,4>(local_3c[0]) != local_8) {
    pAVar5 = local_3c;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pAVar5 = 0;
      pAVar5 = (AnonShape_0068FD00_A5257008 *)&pAVar5->field_0x4;
    }
    STPiece<4,4>(local_3c[0]) = STField<undefined4>(this,0x6fe);
    STPiece<0,4>(local_3c[0]) = 0x6a;
    st::fn_00405DC6(this,local_3c,-1);
  }
  return;
}

// 00679C50 FUN_00679c50
#line 1 "decomp/ST.exe/functions/00679C50/decomp.c"
uint __thiscall st::fn_00679C50(void *this,byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  void *this_00;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;

  if ((param_1 == nullptr) || (param_2 == nullptr)) {
LAB_00679d08:
    uVar6 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(STField<int>(this,0x695) + 0xc);
joined_r0x00679c7c:
    do {
      do {
        do {
          uVar2 = uVar2 - 1;
          if ((int)uVar2 < 0) goto LAB_00679d08;
          iVar5 = STField<int>(this,0x695);
        } while (((iVar5 == 0) || ((int)uVar2 < 0)) || ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar2));
        if (uVar2 < *(uint *)(iVar5 + 0xc)) {
          puVar3 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar2 + *(int *)(iVar5 + 0x1c));
        }
        else {
          puVar3 = nullptr;
        }
      } while ((puVar3[1] == 0) || (this_00 = (void *)*puVar3, this_00 == nullptr));
      if (*param_2 != 0) {
        pbVar7 = (byte *)((int)this_00 + 0x3b);
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00679ce3:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00679ce8;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00679ce3;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00679ce8:
        if (iVar5 != 0) goto joined_r0x00679c7c;
      }
      uVar6 = st::fn_00405A9C(this_00,param_1);
    } while ((int)uVar6 < 0);
  }
  return uVar6;
}

// 00679D60 FUN_00679d60
#line 1 "decomp/ST.exe/functions/00679D60/decomp.c"
int __thiscall st::fn_00679D60(void *this,byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  void *this_00;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;

  if ((param_1 == nullptr) || (param_2 == nullptr)) {
LAB_00679e18:
    iVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(STField<int>(this,0x695) + 0xc);
joined_r0x00679d8c:
    do {
      do {
        do {
          uVar2 = uVar2 - 1;
          if ((int)uVar2 < 0) goto LAB_00679e18;
          iVar5 = STField<int>(this,0x695);
        } while (((iVar5 == 0) || ((int)uVar2 < 0)) || ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar2));
        if (uVar2 < *(uint *)(iVar5 + 0xc)) {
          puVar3 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar2 + *(int *)(iVar5 + 0x1c));
        }
        else {
          puVar3 = nullptr;
        }
      } while ((puVar3[1] == 0) || (this_00 = (void *)*puVar3, this_00 == nullptr));
      if (*param_2 != 0) {
        pbVar6 = (byte *)((int)this_00 + 0x3b);
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00679df3:
            iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_00679df8;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00679df3;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00679df8:
        if (iVar5 != 0) goto joined_r0x00679d8c;
      }
      iVar5 = st::fn_00404A6B(this_00,param_1);
    } while (iVar5 == 0);
  }
  return iVar5;
}

// 00679E70 FUN_00679e70
#line 1 "decomp/ST.exe/functions/00679E70/decomp.c"
int __thiscall st::fn_00679E70(void *this,short param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;

  uVar4 = 0;
  iVar3 = STField<int>(this,0x695);
  uVar1 = *(uint *)(iVar3 + 0xc);
  if (0 < (int)uVar1) {
    do {
      if (((iVar3 != 0) && (-1 < (int)uVar4)) && ((int)uVar4 < (int)uVar1)) {
        if (uVar4 < uVar1) {
          puVar2 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
        }
        else {
          puVar2 = nullptr;
        }
        if (((puVar2[1] != 0) && ((AiTactClassTy *)*puVar2 != nullptr)) &&
           (iVar3 = st::fn_00405B23((AiTactClassTy *)*puVar2,param_1), iVar3 != 0)) {
          return iVar3;
        }
      }
      iVar3 = STField<int>(this,0x695);
      uVar4 = uVar4 + 1;
      uVar1 = *(uint *)(iVar3 + 0xc);
    } while ((int)uVar4 < (int)uVar1);
  }
  return 0;
}

// 00679F00 FUN_00679f00
#line 1 "decomp/ST.exe/functions/00679F00/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 00679FE0 -> 00679F00 @ 00679FFA */

int __thiscall
st::fn_00679F00(void *this,uint param_1,AnonShape_0068FD00_A5257008 *param_2,int param_3)

{
  AiTactClassTy *this_00;
  undefined4 *puVar1;
  int iVar2;

  iVar2 = STField<int>(this,0x695);
  if (((iVar2 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)*(uint *)(iVar2 + 0xc))) {
    if (param_1 < *(uint *)(iVar2 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar1 = (undefined4 *)(*(int *)(iVar2 + 8) * param_1 + *(int *)(iVar2 + 0x1c));
    }
    else {
      puVar1 = nullptr;
    }
    if (((puVar1[1] != 0) && (this_00 = (AiTactClassTy *)*puVar1, this_00 != nullptr))
       && (param_2 != nullptr)) {
      if (param_3 < 0) {
        iVar2 = st::fn_004010E1(this_00,param_2);
        return iVar2;
      }
      iVar2 = st::fn_00403C42(this_00,(int)param_2,(short)param_3);
      return iVar2;
    }
  }
  return -0x34;
}

// 00679F90 FUN_00679f90
#line 1 "decomp/ST.exe/functions/00679F90/decomp.c"
int __thiscall st::fn_00679F90(void *this,int param_1,uint *param_2,int param_3)

{
  AiTactClassTy *this_00;
  int iVar1;

  this_00 = (AiTactClassTy *)st::fn_00401EB0(this,param_1);
  if ((this_00 != nullptr) && (param_2 != nullptr)) {
    if (param_3 < 0) {
      iVar1 = st::fn_004010E1(this_00,(AnonShape_0068FD00_A5257008 *)param_2);
      return iVar1;
    }
    iVar1 = st::fn_00403C42(this_00,(int)param_2,(short)param_3);
    return iVar1;
  }
  return -0x34;
}

// 00679FE0 FUN_00679fe0
#line 1 "decomp/ST.exe/functions/00679FE0/decomp.c"
void __thiscall st::fn_00679FE0(void *this,byte *param_1,uint *param_2,int param_3)

{
  uint uVar1;

  uVar1 = st::fn_00402464(this,param_1);
  st::fn_00405E4D(this,uVar1,(AnonShape_0068FD00_A5257008 *)param_2,param_3);
  return;
}

// 0067A0C0 FUN_0067a0c0
#line 1 "decomp/ST.exe/functions/0067A0C0/decomp.c"
undefined4 __thiscall st::fn_0067A0C0(void *this,uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;

  iVar1 = STField<int>(this,0x695);
  if (((iVar1 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)*(uint *)(iVar1 + 0xc))) {
    if (param_1 < *(uint *)(iVar1 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar2 = (int *)(*(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c));
    }
    else {
      piVar2 = nullptr;
    }
    if (((piVar2[1] != 0) && ((undefined4 *)*piVar2 != nullptr)) && (param_2 != 0)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar3 = (*(code *)**(undefined4 **)*piVar2)(param_2);
      return uVar3;
    }
  }
  return 0xffff;
}

// 0067A140 FUN_0067a140
#line 1 "decomp/ST.exe/functions/0067A140/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0067A140 returns literal 65535 at 0067A162 @ 0067A168 */

uint __thiscall st::fn_0067A140(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;

  puVar1 = (undefined4 *)st::fn_00401EB0(this,param_1);
  if ((puVar1 != nullptr) && (param_2 != 0)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)*puVar1)(param_2);
    return uVar2;
  }
  return 0xffff;
}

// 0067A180 FUN_0067a180
#line 1 "decomp/ST.exe/functions/0067A180/decomp.c"
void __thiscall st::fn_0067A180(void *this,byte *param_1,int param_2)

{
  uint uVar1;

  uVar1 = st::fn_00402464(this,param_1);
  st::fn_004049DA(this,uVar1,param_2);
  return;
}

// 0067A1B0 FUN_0067a1b0
#line 1 "decomp/ST.exe/functions/0067A1B0/decomp.c"
void __thiscall st::fn_0067A1B0(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;

  iVar3 = STField<int>(this,0x695);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        if (((iVar3 != 0) && (-1 < (int)uVar4)) && ((int)uVar4 < (int)uVar1)) {
          if (uVar4 < uVar1) {
            piVar2 = (int *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
          }
          else {
            piVar2 = nullptr;
          }
          if (((piVar2[1] != 0) && ((undefined4 *)*piVar2 != nullptr)) && (param_1 != 0))
          {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)**(undefined4 **)*piVar2)(param_1);
          }
        }
        iVar3 = STField<int>(this,0x695);
        uVar4 = uVar4 + 1;
        uVar1 = *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  return;
}

// 0067A2D0 FUN_0067a2d0
#line 1 "decomp/ST.exe/functions/0067A2D0/decomp.c"
void __fastcall st::fn_0067A2D0(AnonShape_0067A2D0_742706D4 *param_1)

{
  uint uVar1;

  uVar1 = param_1->field_00A4 * 0x41c64e6d + 0x3039;
  param_1->field_00A4 = uVar1;
  param_1->field_0650 = (uVar1 >> 0x10 & 7) + 8;
  uVar1 = param_1->field_00A4 * 0x41c64e6d + 0x3039;
  param_1->field_00A4 = uVar1;
  param_1->field_066E = (uVar1 >> 0x10) % 0x1a + 0x19;
  uVar1 = param_1->field_00A4 * 0x41c64e6d + 0x3039;
  param_1->field_00A4 = uVar1;
  param_1->field_0681 = (uVar1 >> 0x10) % 0x1a + 0x32;
  st::fn_00401DB6((AnonShape_00679600_B8E418A8 *)param_1);
  return;
}

// 0067A390 FUN_0067a390
#line 1 "decomp/ST.exe/functions/0067A390/decomp.c"
void __fastcall st::fn_0067A390(AnonShape_00679600_B8E418A8 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  short local_AX_518;
  short uVar3;
  short local_AX_1386;
  short local_AX_1503;
  short local_AX_1643;
  short local_AX_1855;
  short local_AX_1953;
  short local_AX_2077;
  short local_AX_2340;
  short local_AX_2459;
  short local_AX_2599;
  short local_AX_2742;
  int iVar3;
  int iVar4;
  Global_sub_0043E640_param_2Enum GVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  AnonShape_0068FD00_A5257008 **ppAVar9;
  uint uVar10;
  AnonShape_0068FD00_A5257008 *local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 *local_68;
  undefined4 local_40 [3];
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined1 local_2c;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;

  if ((*(int *)&param_1->field_0x650 != 0) &&
     ((uint)param_1->field_06FE <
      (uint)(*(int *)&param_1->field_0x654 + *(int *)&param_1->field_0x650))) {
    return;
  }
  *(undefined4 *)&param_1->field_0x654 = param_1->field_06FE;
  st::fn_00401DB6(param_1);
  if (g_allPlayers_007FA174 == nullptr) {
    return;
  }
  if (*(short *)&param_1->field_0x5ec != 3) {
    iVar3 = st::fn_0040291E((char)param_1->field_05D7);
    iVar4 = st::fn_00403ADF((char)param_1->field_05D7);
    if ((iVar3 <= iVar4) && (0 < iVar4)) {
      uVar2 = param_1->field_06FE;
      ppAVar9 = &local_74;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppAVar9 = nullptr;
        ppAVar9 = ppAVar9 + 1;
      }
      local_74 = (AnonShape_0068FD00_A5257008 *)0x6f;
      local_68 = (undefined4 *)0x50;
      local_70 = uVar2;
      st::fn_00405DC6
                ((AiPlrClassTy *)param_1,(AnonShape_0068FD00_A5257008 *)&local_74,-1);
      iVar3 = st::fn_004041D8(param_1->field_05D7,0x50);
      if (iVar3 + local_6c < iVar4 / 0x28 + 1) {
        memset(local_40, 0, 0x2c); /* compiler bulk-zero initialization */
        iVar3 = 0;
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        ppAVar9 = &local_74;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppAVar9 = nullptr;
          ppAVar9 = ppAVar9 + 1;
        }
        local_70 = param_1->field_06FE;
        local_68 = local_40;
        iVar3 = *(int *)&param_1->field_0x695;
        local_40[0] = 0x50;
        local_34 = 0x31;
        local_2c = 0xff;
        local_74 = (AnonShape_0068FD00_A5257008 *)0x70;
        uVar10 = *(uint *)(iVar3 + 0xc);
        uVar8 = 0;
        if (0 < (int)uVar10) {
          do {
            if (((iVar3 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar10)) {
              if (uVar8 < uVar10) {
                puVar7 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
              }
              else {
                puVar7 = nullptr;
              }
              if (((puVar7[1] != 0) && ((AiTactClassTy *)*puVar7 != nullptr)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                st::fn_004010E1
                          ((AiTactClassTy *)*puVar7,(AnonShape_0068FD00_A5257008 *)&local_74);
              }
            }
            if (0 < local_6c) break;
            iVar3 = *(int *)&param_1->field_0x695;
            uVar8 = uVar8 + 1;
            uVar10 = *(uint *)(iVar3 + 0xc);
          } while ((int)uVar8 < (int)uVar10);
        }
      }
    }
    uVar10 = *(int *)&param_1->field_0xa4 * 0x41c64e6d + 0x3039;
    *(uint *)&param_1->field_0xa4 = uVar10;
    if (((uVar10 >> 0x10) % 0x5dd + 0x1d4c < (uint)param_1->field_06FE) &&
       (local_10 = st::fn_00401D2F(g_allPlayers_007FA174,param_1->field_05D7), 0 < (int)local_10)
       ) {
      local_AX_518 = st::fn_00401023((char)param_1->field_05D7,0x34,0,-1);
      ppAVar9 = &local_74;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppAVar9 = nullptr;
        ppAVar9 = ppAVar9 + 1;
      }
      local_70 = param_1->field_06FE;
      local_74 = (AnonShape_0068FD00_A5257008 *)0x6f;
      local_68 = (undefined4 *)0x34;
      st::fn_00405DC6
                ((AiPlrClassTy *)param_1,(AnonShape_0068FD00_A5257008 *)&local_74,-1);
      iVar3 = st::fn_004041D8(param_1->field_05D7,0x34);
      if (iVar3 + local_6c < (int)((ushort)local_AX_518 + local_10)) {
        local_70 = param_1->field_06FE;
        memset(local_40, 0, 0x2c); /* compiler bulk-zero initialization */
        iVar3 = 0;
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        ppAVar9 = &local_74;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppAVar9 = nullptr;
          ppAVar9 = ppAVar9 + 1;
        }
        local_68 = local_40;
        local_40[0] = 0x34;
        iVar3 = *(int *)&param_1->field_0x695;
        local_34 = 0x19;
        local_2c = 0xff;
        local_74 = (AnonShape_0068FD00_A5257008 *)0x70;
        uVar10 = *(uint *)(iVar3 + 0xc);
        uVar8 = 0;
        if (0 < (int)uVar10) {
          do {
            if (((iVar3 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar10)) {
              if (uVar8 < uVar10) {
                puVar7 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
              }
              else {
                puVar7 = nullptr;
              }
              if (((puVar7[1] != 0) && ((AiTactClassTy *)*puVar7 != nullptr)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                st::fn_004010E1
                          ((AiTactClassTy *)*puVar7,(AnonShape_0068FD00_A5257008 *)&local_74);
              }
            }
            if (0 < local_6c) break;
            iVar3 = *(int *)&param_1->field_0x695;
            uVar8 = uVar8 + 1;
            uVar10 = *(uint *)(iVar3 + 0xc);
          } while ((int)uVar8 < (int)uVar10);
        }
      }
    }
    uVar10 = *(int *)&param_1->field_0xa4 * 0x41c64e6d + 0x3039;
    *(uint *)&param_1->field_0xa4 = uVar10;
    if (((uVar10 >> 0x10) % 0x5dd + 0x1d4c < (uint)param_1->field_06FE) &&
       (local_10 = st::fn_004016D1(g_allPlayers_007FA174,(int *)param_1->field_05D7),
       0 < (int)local_10)) {
      uVar3 = st::fn_00401023((char)param_1->field_05D7,0x48,0,-1);
      ppAVar9 = &local_74;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppAVar9 = nullptr;
        ppAVar9 = ppAVar9 + 1;
      }
      local_70 = param_1->field_06FE;
      local_74 = (AnonShape_0068FD00_A5257008 *)0x6f;
      local_68 = (undefined4 *)0x48;
      st::fn_00405DC6
                ((AiPlrClassTy *)param_1,(AnonShape_0068FD00_A5257008 *)&local_74,-1);
      iVar3 = st::fn_004041D8(param_1->field_05D7,0x48);
      if (iVar3 + local_6c < (int)((ushort)uVar3 + local_10)) {
        local_70 = param_1->field_06FE;
        memset(local_40, 0, 0x2c); /* compiler bulk-zero initialization */
        iVar3 = 0;
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        ppAVar9 = &local_74;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppAVar9 = nullptr;
          ppAVar9 = ppAVar9 + 1;
        }
        local_68 = local_40;
        local_40[0] = 0x48;
        iVar3 = *(int *)&param_1->field_0x695;
        local_34 = 0x19;
        local_2c = 0xff;
        local_74 = (AnonShape_0068FD00_A5257008 *)0x70;
        uVar10 = *(uint *)(iVar3 + 0xc);
        uVar8 = 0;
        if (0 < (int)uVar10) {
          do {
            if (((iVar3 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar10)) {
              if (uVar8 < uVar10) {
                puVar7 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
              }
              else {
                puVar7 = nullptr;
              }
              if (((puVar7[1] != 0) && ((AiTactClassTy *)*puVar7 != nullptr)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                st::fn_004010E1
                          ((AiTactClassTy *)*puVar7,(AnonShape_0068FD00_A5257008 *)&local_74);
              }
            }
            if (0 < local_6c) break;
            iVar3 = *(int *)&param_1->field_0x695;
            uVar8 = uVar8 + 1;
            uVar10 = *(uint *)(iVar3 + 0xc);
          } while ((int)uVar8 < (int)uVar10);
        }
      }
    }
  }
  if (g_allPlayers_007FA174 == nullptr) {
    return;
  }
  if (*(short *)&param_1->field_0x5ec != 3) {
    uVar10 = 0xffffffff;
    iVar3 = st::fn_00402F7C(param_1->field_05D7);
    local_8 = st::fn_004016E0((char)param_1->field_05D7);
    local_10 = st::fn_00403954((char)param_1->field_05D7);
    local_c = st::fn_00402284((char)param_1->field_05D7);
    local_14 = ((iVar3 < 100) - 1 & 0xffffffce) + 0x32;
    iVar3 = ((iVar3 < 100) - 1 & 0xfffffe0c) + 500;
    if ((int)local_10 < 0x32) {
      if (iVar3 < local_8) {
        sVar1 = *(short *)&param_1->field_0x5ec;
        if (sVar1 < 1) {
LAB_0067a8e6:
          GVar5 = 0;
        }
        else if (sVar1 < 3) {
          GVar5 = 0x52;
        }
        else {
          if (sVar1 != 3) goto LAB_0067a8e6;
          GVar5 = 0x5f;
        }
        local_AX_1386 = st::fn_00401023((char)param_1->field_05D7,GVar5,0,-1);
        uVar10 = (uint)(ushort)local_AX_1386;
        if (uVar10 != 0) {
          uVar8 = local_8;
          if (100 < local_8) {
            uVar8 = 100;
          }
          uVar6 = param_1->field_05D7;
          iVar4 = 0xdc;
LAB_0067a9a0:
          st::fn_004034DB(uVar6,iVar4,0xdd,uVar8);
        }
      }
      else if (2000 < (int)local_c) {
        sVar1 = *(short *)&param_1->field_0x5ec;
        if (sVar1 < 1) {
LAB_0067a95b:
          GVar5 = 0;
        }
        else if (sVar1 < 3) {
          GVar5 = 0x52;
        }
        else {
          if (sVar1 != 3) goto LAB_0067a95b;
          GVar5 = 0x5f;
        }
        local_AX_1503 = st::fn_00401023((char)param_1->field_05D7,GVar5,0,-1);
        uVar10 = (uint)(ushort)local_AX_1503;
        if (uVar10 != 0) {
          uVar8 = local_c;
          if (500 < (int)local_c) {
            uVar8 = 500;
          }
          uVar6 = param_1->field_05D7;
          iVar4 = 0xde;
          goto LAB_0067a9a0;
        }
      }
    }
    uVar8 = local_10;
    if ((int)local_c < 0x32) {
      if (iVar3 < local_8) {
        if ((int)uVar10 < 0) {
          sVar1 = *(short *)&param_1->field_0x5ec;
          if (sVar1 < 1) {
LAB_0067a9e7:
            GVar5 = 0;
          }
          else if (sVar1 < 3) {
            GVar5 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067a9e7;
            GVar5 = 0x5f;
          }
          local_AX_1643 = st::fn_00401023((char)param_1->field_05D7,GVar5,0,-1);
          uVar10 = (uint)(ushort)local_AX_1643;
        }
        uVar8 = local_10;
        if (uVar10 != 0) {
          iVar3 = local_8;
          if (100 < local_8) {
            iVar3 = 100;
          }
          st::fn_004034DB(param_1->field_05D7,0xdc,0xde,iVar3);
          uVar8 = local_10;
        }
      }
      else if (0x5dc < (int)local_10) {
        if ((int)uVar10 < 0) {
          sVar1 = *(short *)&param_1->field_0x5ec;
          if (sVar1 < 1) {
LAB_0067aabb:
            GVar5 = 0;
          }
          else if (sVar1 < 3) {
            GVar5 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067aabb;
            GVar5 = 0x5f;
          }
          local_AX_1855 = st::fn_00401023((char)param_1->field_05D7,GVar5,0,-1);
          uVar10 = (uint)(ushort)local_AX_1855;
        }
        if (uVar10 != 0) {
          uVar6 = 500;
          if ((int)uVar8 < 0x1f5) {
            uVar6 = uVar8;
          }
          st::fn_004034DB(param_1->field_05D7,0xdd,0xde,uVar6);
        }
      }
    }
    if (local_8 < local_14) {
      if ((int)local_c < 0x7d1) {
        if (0x5dc < (int)uVar8) {
          if ((int)uVar10 < 0) {
            sVar1 = *(short *)&param_1->field_0x5ec;
            if (sVar1 < 1) {
LAB_0067ab99:
              GVar5 = 0;
            }
            else if (sVar1 < 3) {
              GVar5 = 0x52;
            }
            else {
              if (sVar1 != 3) goto LAB_0067ab99;
              GVar5 = 0x5f;
            }
            local_AX_2077 = st::fn_00401023((char)param_1->field_05D7,GVar5,0,-1);
            uVar10 = (uint)(ushort)local_AX_2077;
          }
          if (uVar10 != 0) {
            uVar10 = 100;
            if (local_8 < 0x65) {
              uVar10 = local_8;
            }
            uVar8 = param_1->field_05D7;
            iVar3 = 0xdd;
            goto LAB_0067abe0;
          }
        }
      }
      else {
        if ((int)uVar10 < 0) {
          sVar1 = *(short *)&param_1->field_0x5ec;
          if (sVar1 < 1) {
LAB_0067ab1d:
            GVar5 = 0;
          }
          else if (sVar1 < 3) {
            GVar5 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067ab1d;
            GVar5 = 0x5f;
          }
          local_AX_1953 = st::fn_00401023((char)param_1->field_05D7,GVar5,0,-1);
          uVar10 = (uint)(ushort)local_AX_1953;
        }
        if (uVar10 != 0) {
          uVar10 = local_c;
          if (500 < (int)local_c) {
            uVar10 = 500;
          }
          uVar8 = param_1->field_05D7;
          iVar3 = 0xde;
LAB_0067abe0:
          st::fn_004034DB(uVar8,iVar3,0xdc,uVar10);
        }
      }
    }
  }
  if (g_allPlayers_007FA174 == nullptr) {
    return;
  }
  if (*(short *)&param_1->field_0x5ec != 3) {
    return;
  }
  uVar10 = 0xffffffff;
  iVar3 = st::fn_00402F7C(param_1->field_05D7);
  local_10 = st::fn_004036A7(param_1->field_05D7);
  local_8 = st::fn_00403954((char)param_1->field_05D7);
  local_c = st::fn_00401E6A((byte *)param_1->field_05D7);
  iVar3 = ((iVar3 < 100) - 1 & 0xfffffc18) + 3000;
  if (local_8 < 0x32) {
    if (iVar3 < (int)local_10) {
      sVar1 = *(short *)&param_1->field_0x5ec;
      if (sVar1 < 1) {
LAB_0067aca0:
        GVar5 = 0;
      }
      else if (sVar1 < 3) {
        GVar5 = 0x52;
      }
      else {
        if (sVar1 != 3) goto LAB_0067aca0;
        GVar5 = 0x5f;
      }
      local_AX_2340 = st::fn_00401023((char)param_1->field_05D7,GVar5,0,-1);
      uVar10 = (uint)(ushort)local_AX_2340;
      if (uVar10 != 0) {
        uVar8 = local_10;
        if (1000 < (int)local_10) {
          uVar8 = 1000;
        }
        uVar6 = param_1->field_05D7;
        iVar4 = 0xe3;
LAB_0067ad5c:
        st::fn_004034DB(uVar6,iVar4,0xdd,uVar8);
      }
    }
    else if (0x9c4 < (int)local_c) {
      sVar1 = *(short *)&param_1->field_0x5ec;
      if (sVar1 < 1) {
LAB_0067ad17:
        GVar5 = 0;
      }
      else if (sVar1 < 3) {
        GVar5 = 0x52;
      }
      else {
        if (sVar1 != 3) goto LAB_0067ad17;
        GVar5 = 0x5f;
      }
      local_AX_2459 = st::fn_00401023((char)param_1->field_05D7,GVar5,0,-1);
      uVar10 = (uint)(ushort)local_AX_2459;
      if (uVar10 != 0) {
        uVar8 = local_c;
        if (1000 < (int)local_c) {
          uVar8 = 1000;
        }
        uVar6 = param_1->field_05D7;
        iVar4 = 0xe2;
        goto LAB_0067ad5c;
      }
    }
  }
  iVar4 = local_8;
  if (0x31 < (int)local_c) {
    return;
  }
  if ((int)local_10 <= iVar3) {
    if (local_8 < 0x5dd) {
      return;
    }
    if (-1 < (int)uVar10) goto LAB_0067ae56;
    sVar1 = *(short *)&param_1->field_0x5ec;
    if (sVar1 < 1) {
LAB_0067ae32:
      GVar5 = 0;
    }
    else if (sVar1 < 3) {
      GVar5 = 0x52;
    }
    else {
      if (sVar1 != 3) goto LAB_0067ae32;
      GVar5 = 0x5f;
    }
    local_AX_2742 = st::fn_00401023((char)param_1->field_05D7,GVar5,0,-1);
    uVar10 = (uint)(ushort)local_AX_2742;
LAB_0067ae56:
    if (uVar10 == 0) {
      return;
    }
    iVar3 = 700;
    if (iVar4 < 0x2bd) {
      iVar3 = iVar4;
    }
    st::fn_004034DB(param_1->field_05D7,0xdd,0xe2,iVar3);
    return;
  }
  if (-1 < (int)uVar10) goto LAB_0067adca;
  sVar1 = *(short *)&param_1->field_0x5ec;
  if (sVar1 < 1) {
LAB_0067ada3:
    GVar5 = 0;
  }
  else if (sVar1 < 3) {
    GVar5 = 0x52;
  }
  else {
    if (sVar1 != 3) goto LAB_0067ada3;
    GVar5 = 0x5f;
  }
  local_AX_2599 = st::fn_00401023((char)param_1->field_05D7,GVar5,0,-1);
  uVar10 = (uint)(ushort)local_AX_2599;
LAB_0067adca:
  if (uVar10 == 0) {
    return;
  }
  uVar10 = local_10;
  if (1000 < (int)local_10) {
    uVar10 = 1000;
  }
  st::fn_004034DB(param_1->field_05D7,0xe3,0xe2,uVar10);
  return;
}

// 0067B150 FUN_0067b150
#line 1 "decomp/ST.exe/functions/0067B150/decomp.c"
int __thiscall st::fn_0067B150(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;

  iVar1 = STField<int>(this,0x6a1);
  iVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar6 = uVar2 != 0;
    do {
      if (((bVar6) &&
          (pcVar4 = (char *)(*(int *)(iVar1 + 8) * uVar5 + *(int *)(iVar1 + 0x1c)),
          pcVar4 != nullptr)) && (*pcVar4 == param_1)) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return iVar3;
}

// 0067B1A0 FUN_0067b1a0
#line 1 "decomp/ST.exe/functions/0067B1A0/decomp.c"
int __thiscall st::fn_0067B1A0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;

  iVar1 = STField<int>(this,0x6a1);
  iVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar6 = uVar2 != 0;
    do {
      if ((((bVar6) &&
           (pcVar4 = (char *)(*(int *)(iVar1 + 8) * uVar5 + *(int *)(iVar1 + 0x1c)),
           pcVar4 != nullptr)) && (*pcVar4 == param_1)) && (pcVar4[7] == '\0')) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return iVar3;
}

// 0067B210 FUN_0067b210
#line 1 "decomp/ST.exe/functions/0067B210/decomp.c"
void __thiscall st::fn_0067B210(void *this,int param_1,int param_2)

{
  if ((-1 < param_1) && (param_1 < 3)) {
    st::fn_00402CC5((int)this);
    STField<undefined1>(this,0x662) = 1;
    STField<short>(this,0x660) = (short)param_1;
    if (param_2 < 1) {
      param_2 = 1;
    }
    STField<short>(this,0x663) = (short)param_2;
  }
  return;
}

// 0067B260 FUN_0067b260
#line 1 "decomp/ST.exe/functions/0067B260/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_0067B260(int param_1)

{
  uint index;
  DArrayTy *array;
  char *pcVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(char *)(param_1 + 0x662) == '\x01') {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    index = *(uint *)(*(int *)(param_1 + 0x6a1) + 0xc);
    while (index = index - 1, -1 < (int)index) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      array = *(DArrayTy **)(param_1 + 0x6a1);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((index < array->count) &&
           (pcVar1 = DArrayAt<char>(array, index), pcVar1 != nullptr)
           ) && ((short)*pcVar1 == *(short *)(param_1 + 0x660))) && (pcVar1[7] == '\0')) {
        st::fn_006B0C70(array,index);
      }
    }
    *(undefined1 *)(param_1 + 0x662) = 0;
  }
  return;
}

// 0067B2E0 FUN_0067b2e0
#line 1 "decomp/ST.exe/functions/0067B2E0/decomp.c"
int __thiscall st::fn_0067B2E0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  iVar1 = STField<int>(this,0x6a1);
  iVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar6 = uVar2 != 0;
    do {
      if (bVar6) {
        iVar4 = *(int *)(iVar1 + 8) * uVar5 + *(int *)(iVar1 + 0x1c);
      }
      else {
        iVar4 = 0;
      }
      if ((*(short *)(iVar4 + 1) == param_1) && (*(short *)(iVar4 + 3) == param_2)) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return iVar3;
}

// 0067B350 FUN_0067b350
#line 1 "decomp/ST.exe/functions/0067B350/decomp.c"
int __cdecl st::fn_0067B350(int param_1,int param_2)

{
  return (int)*(short *)(param_1 + 5) - (int)*(short *)(param_2 + 5);
}

// 0067B380 FUN_0067b380
#line 1 "decomp/ST.exe/functions/0067B380/decomp.c"
void __fastcall st::fn_0067B380(int param_1)

{
  DArrayTy *pDVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(DArrayTy **)(param_1 + 0x6a1) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006AE110(*(DArrayTy **)(param_1 + 0x6a1));
    pDVar1 = st::fn_006AE290(nullptr,10,0x12,10);
    *(DArrayTy **)(param_1 + 0x6a1) = pDVar1;
  }
  return;
}

// 0067BA50 FUN_0067ba50
#line 1 "decomp/ST.exe/functions/0067BA50/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067BA50 parameter used as this of AiFltClassTy::GetAiMess @ 0067BA7A */

undefined4 __cdecl st::fn_0067BA50(AiFltClassTy *param_1,uint *param_2)

{
  uint local_48 [2];
  char local_40;
  undefined2 local_3f;
  undefined4 local_3d;
  undefined4 local_39;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_48, 0, 0x34); /* compiler bulk-zero initialization */
  local_48[0] = 0x66;
  local_48[1] = 0xffffffff;
  st::fn_00401555(param_1,local_48);
  if (('\0' < local_40) && (param_2 != nullptr)) {
    local_10 = local_3d;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_14 = CONCAT22(local_3f,param_1->field_007D);
    local_c = local_39;
    local_8 = 0xffffffff;
    st::fn_006AE1C0((DArrayTy *)param_2,&local_14);
  }
  return 0;
}

// 0067BAF0 FUN_0067baf0
#line 1 "decomp/ST.exe/functions/0067BAF0/decomp.c"
int __cdecl st::fn_0067BAF0(int param_1,int param_2)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (int)*(short *)(param_1 + 0x18) - (int)*(short *)(param_2 + 0x18);
}

// 0067BB20 FUN_0067bb20
#line 1 "decomp/ST.exe/functions/0067BB20/decomp.c"
int __cdecl st::fn_0067BB20(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) - *(int *)(param_2 + 4);
}

// 0067BB50 FUN_0067bb50
#line 1 "decomp/ST.exe/functions/0067BB50/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

short * __cdecl st::fn_0067BB50(DArrayTy *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  uVar1 = param_1->count;
  if (0 < (int)uVar1) {
    bVar4 = uVar1 != 0;
    do {
      if ((((bVar4) &&
           (psVar2 = DArrayAt<short>(param_1, uVar3),
           psVar2 != nullptr)) && (*psVar2 != 0)) && (*(int *)(psVar2 + 6) < 0)) {
        return psVar2;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return nullptr;
}

// 0067BBA0 FUN_0067bba0
#line 1 "decomp/ST.exe/functions/0067BBA0/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

short * __cdecl st::fn_0067BBA0(DArrayTy *param_1,uint param_2)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  uVar1 = param_1->count;
  if (0 < (int)uVar1) {
    bVar4 = uVar1 != 0;
    do {
      if ((((bVar4) &&
           (psVar2 = DArrayAt<short>(param_1, uVar3),
           psVar2 != nullptr)) && (*psVar2 != 0)) &&
         ((*(int *)(psVar2 + 6) < 0 && ((*(uint *)(psVar2 + 4) & param_2) != 0)))) {
        return psVar2;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return nullptr;
}

// 0067BC10 FUN_0067bc10
#line 1 "decomp/ST.exe/functions/0067BC10/decomp.c"
int __cdecl st::fn_0067BC10(DArrayTy *param_1)

{
  short sVar1;
  uint uVar2;
  void *pvVar3;
  short sVar4;
  uint uVar5;
  bool bVar6;
  void *local_8;

  uVar5 = 0;
  sVar4 = 10000;
  uVar2 = param_1->count;
  local_8 = nullptr;
  bVar6 = uVar2 != 0;
  if (0 < (int)uVar2) {
    do {
      if ((((bVar6) &&
           (pvVar3 = DArrayAt<void>(param_1, uVar5),
           pvVar3 != nullptr)) && (sVar1 = STField<short>(pvVar3,0x1a), sVar1 < sVar4)) &&
         (sVar4 = sVar1, local_8 = pvVar3, sVar1 == 0)) {
        return (int)pvVar3;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return (int)local_8;
}

// 0067BC80 FUN_0067bc80
#line 1 "decomp/ST.exe/functions/0067BC80/decomp.c"
int __cdecl st::fn_0067BC80(DArrayTy *param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  void *pvVar3;
  short sVar4;
  uint uVar5;
  bool bVar6;
  void *local_8;

  uVar5 = 0;
  sVar4 = 10000;
  uVar2 = param_1->count;
  local_8 = nullptr;
  bVar6 = uVar2 != 0;
  if (0 < (int)uVar2) {
    do {
      if ((((bVar6) &&
           (pvVar3 = DArrayAt<void>(param_1, uVar5),
           pvVar3 != nullptr)) && ((STField<uint>(pvVar3,0x14) & param_2) != 0)) &&
         ((sVar1 = STField<short>(pvVar3,0x1a), sVar1 < sVar4 &&
          (sVar4 = sVar1, local_8 = pvVar3, sVar1 == 0)))) {
        return (int)pvVar3;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return (int)local_8;
}

// 0067BD00 FUN_0067bd00
#line 1 "decomp/ST.exe/functions/0067BD00/decomp.c"
ushort * __cdecl st::fn_0067BD00(DArrayTy *param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  uVar1 = param_1->count;
  if (0 < (int)uVar1) {
    bVar4 = uVar1 != 0;
    do {
      if (((bVar4) &&
          (puVar2 = DArrayAt<ushort>(param_1, uVar3),
          puVar2 != nullptr)) && (*puVar2 == param_2)) {
        return puVar2;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return nullptr;
}

// 0067BD50 FUN_0067bd50
#line 1 "decomp/ST.exe/functions/0067BD50/decomp.c"
int __cdecl st::fn_0067BD50(DArrayTy *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  bool bVar5;

  iVar2 = 0;
  uVar1 = param_1->count;
  uVar4 = 0;
  if (0 < (int)uVar1) {
    bVar5 = uVar1 != 0;
    do {
      if ((bVar5) &&
         (pvVar3 = DArrayAt<void>(param_1, uVar4),
         pvVar3 != nullptr)) {
        iVar2 = iVar2 + STField<short>(pvVar3,0x1a);
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar1;
    } while ((int)uVar4 < (int)uVar1);
  }
  return iVar2;
}

// 0067BDA0 FUN_0067bda0
#line 1 "decomp/ST.exe/functions/0067BDA0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0067BDA0 parameter used as this of STFishC::sub_004162B0 @ 0067BDB6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_0067BDA0(short *param_1,STFishC *objPtr)

{
  short local_c [2];
  short local_8 [2];

  st::fn_004018C5(objPtr,local_8,local_c,(undefined2 *)((int)&objPtr + 2));
  *param_1 = local_8[0] + -1;
  param_1[2] = 0;
  param_1[1] = local_c[0] + -1;
  param_1[3] = 3;
  param_1[4] = 3;
  param_1[5] = 5;
  st::fn_00401906(param_1,param_1 + 1,param_1 + 3,param_1 + 4);
  return;
}

// 0067BE20 FUN_0067be20
#line 1 "decomp/ST.exe/functions/0067BE20/decomp.c"
void __fastcall st::fn_0067BE20(int param_1,undefined4 param_2,DArrayTy *param_3)

{
  uint index;
  STGameObjC *objPtr;
  ushort *puVar1;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  ushort local_c;
  ushort local_a;
  int local_8;

  index = param_3->count;
  local_8 = param_1;
  while (index = index - 1, -1 < (int)index) {
    if ((index < param_3->count) &&
       (puVar1 = DArrayAt<ushort>(param_3, index),
       puVar1 != nullptr)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      objPtr = st::fn_004028BA
                         (g_allPlayers_007FA174,*(char *)(local_8 + 0x640),*puVar1,CASE_1);
      if (objPtr == nullptr) {
        st::fn_006B0C70(param_3,index);
      }
      else {
        st::fn_004057C2((short *)&local_14,(STFishC *)objPtr);
        puVar1[2] = local_14;
        puVar1[3] = local_12;
        puVar1[4] = local_10;
        puVar1[5] = local_e;
        puVar1[6] = local_c;
        puVar1[7] = local_a;
      }
    }
  }
  return;
}

// 0067BF60 FUN_0067bf60
#line 1 "decomp/ST.exe/functions/0067BF60/decomp.c"
void __thiscall st::fn_0067BF60(void *this,char param_1,uint param_2)

{
  ushort *puVar1;

  puVar1 = st::fn_00405CAE(STField<DArrayTy *>(this,0x6ad),param_2);
  if (puVar1 != nullptr) {
    if (param_1 != -1) {
      if (param_1 == '\0') {
        puVar1[0xd] = puVar1[0xd] + 1;
        return;
      }
      if (param_1 != '\x01') {
        return;
      }
    }
    if (0 < (short)puVar1[0xd]) {
      puVar1[0xd] = puVar1[0xd] - 1;
    }
  }
  return;
}

// 0067CF00 CreateAiPlr
#line 1 "decomp/ST.exe/functions/0067CF00/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9C4>00405916

   [STObjectFactoryApplier] Central object factory for 0x0402 (ST_OBJECT_TYPE_0402).
   Evidence: registry[84] at 007CA9C0 stores type 0x0402 and executable pointer 00405916; allocation
   size 1794 has no unique current class-layout match */

AiPlrClassTy * __cdecl st::fn_0067CF00(void)

{
  AiPlrClassTy *pAVar1;

  pAVar1 = (AiPlrClassTy *)st::fn_006B04D0(0x702);
  if (pAVar1 != nullptr) {
    pAVar1 = st::fn_004039E0(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

// 0067D0A0 FUN_0067d0a0
#line 1 "decomp/ST.exe/functions/0067D0A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_0067D0A0(AnonShape_0067D0A0_8092D907 *param_1)

{
  DArrayTy *pDVar1;
  int *piVar2;
  DArrayTy **ppDVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  ppDVar3 = &param_1->field_00C2;
  pDVar1 = param_1->field_00C2;
  if (pDVar1 != nullptr) {
    uVar4 = 0;
    if (0 < (int)pDVar1->count) {
      bVar6 = pDVar1->count != 0;
      do {
        if (bVar6) {
          piVar2 = DArrayAt<int>(pDVar1, uVar4);
        }
        else {
          piVar2 = nullptr;
        }
        if (((AnonShape_0067D0A0_8092D907 *)*piVar2 != nullptr) &&
           (piVar2[1] == 0)) {
          param_1 = (AnonShape_0067D0A0_8092D907 *)*piVar2;
          st::fn_00402E00((int *)&param_1);
          *piVar2 = 0;
        }
        pDVar1 = *ppDVar3;
        uVar4 = uVar4 + 1;
        bVar6 = uVar4 < pDVar1->count;
      } while ((int)uVar4 < (int)pDVar1->count);
    }
  }
  iVar5 = 5;
  do {
    if (*ppDVar3 != nullptr) {
      st::fn_006AE110(*ppDVar3);
      *ppDVar3 = nullptr;
    }
    ppDVar3 = ppDVar3 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

// 0067D160 FUN_0067d160
#line 1 "decomp/ST.exe/functions/0067D160/decomp.c"
void __cdecl st::fn_0067D160(int *param_1)

{
  AnonShape_0067D0A0_8092D907 *pAVar1;
  int iVar2;

  pAVar1 = (AnonShape_0067D0A0_8092D907 *)*param_1;
  if (pAVar1 != nullptr) {
    if (pAVar1->field_0x18 != '\0') {
      st::fn_004043D6(pAVar1);
    }
    iVar2 = *param_1;
    if ((*(char *)(iVar2 + 0x18) == '\x02') && (*(int *)(iVar2 + 0x106) != 0)) {
      st::fn_00401537((int *)(iVar2 + 0x106));
    }
    st::fn_006AB060((void **)param_1);
  }
  return;
}

// 0067EC60 FUN_0067ec60
#line 1 "decomp/ST.exe/functions/0067EC60/decomp.c"
undefined * __cdecl st::fn_0067EC60(undefined4 param_1)

{
  st::external_00000080(&DAT_00848890,"__PARAM__%03d",param_1);
  return &DAT_00848890;
}

// 0067ECA0 FUN_0067eca0
#line 1 "decomp/ST.exe/functions/0067ECA0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 0067ECA0 returns used as parameter 0 of FUN_0067f180 @ 00682514 */

byte * st::fn_0067ECA0(void)

{
  DAT_00848a20 = DAT_00848a20 + 1;
  st::external_00000080(&DAT_0084850c,PTR_s___CONST___03d_0079d738,DAT_00848a20);
  return &DAT_0084850c;
}

// 0067ECE0 FUN_0067ece0
#line 1 "decomp/ST.exe/functions/0067ECE0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0067ECE0 returns used as parameter 0 of FUN_0067eea0 @ 0067F399 */

byte * __cdecl st::fn_0067ECE0(undefined4 param_1)

{
  st::external_00000080(&DAT_0084850c,PTR_s___INCLUDE___03d_0079d73c,param_1);
  return &DAT_0084850c;
}

// 0067ED20 FUN_0067ed20
#line 1 "decomp/ST.exe/functions/0067ED20/decomp.c"
int __cdecl st::fn_0067ED20(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  AnonNested_AnonShape_GLOBAL_00848A1C_B6E50991_0014_BB282182 *pAVar5;
  int iVar6;
  bool bVar7;

  iVar2 = PTR_00848a1c->entryCount;
  iVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pAVar5 = nullptr;
      pbVar3 = param_1;
      goto LAB_0067ed4b;
    }
    do {
      pAVar5 = PTR_00848a1c->entries_0014[iVar6];
      pbVar3 = param_1;
LAB_0067ed4b:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < pAVar5->field_0000;
        if (bVar1 != pAVar5->field_0000) {
LAB_0067ed6f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067ed74;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pAVar5->field_0001;
        if (bVar1 != pAVar5->field_0001) goto LAB_0067ed6f;
        pAVar5 = pAVar5 + 1;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067ed74:
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return -1;
}

// 0067EDB0 FUN_0067edb0
#line 1 "decomp/ST.exe/functions/0067EDB0/decomp.c"
int __cdecl st::fn_0067EDB0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  AnonNested_AnonShape_GLOBAL_00848A18_1B9B27FE_0014_B23B2AAD *pAVar5;
  int iVar6;
  bool bVar7;

  iVar2 = PTR_00848a18->entryCount;
  iVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pAVar5 = nullptr;
      pbVar3 = param_1;
      goto LAB_0067eddb;
    }
    do {
      pAVar5 = PTR_00848a18->entries_0014[iVar6];
      pbVar3 = param_1;
LAB_0067eddb:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < pAVar5->field_0000;
        if (bVar1 != pAVar5->field_0000) {
LAB_0067edff:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067ee04;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pAVar5->field_0001;
        if (bVar1 != pAVar5->field_0001) goto LAB_0067edff;
        pAVar5 = pAVar5 + 1;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067ee04:
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return -1;
}

// 0067EE40 FUN_0067ee40
#line 1 "decomp/ST.exe/functions/0067EE40/decomp.c"
AnonNested_AnonShape_GLOBAL_00848A18_1B9B27FE_0014_B23B2AAD * __cdecl st::fn_0067EE40(int param_1)

{
  if (param_1 < PTR_00848a18->entryCount) {
    return PTR_00848a18->entries_0014[param_1];
  }
  return (AnonNested_AnonShape_GLOBAL_00848A18_1B9B27FE_0014_B23B2AAD *)0;
}

// 0067EE70 FUN_0067ee70
#line 1 "decomp/ST.exe/functions/0067EE70/decomp.c"
AnonNested_AnonShape_GLOBAL_00848A1C_B6E50991_0014_BB282182 * __cdecl st::fn_0067EE70(int param_1)

{
  if (param_1 < PTR_00848a1c->entryCount) {
    return PTR_00848a1c->entries_0014[param_1];
  }
  return (AnonNested_AnonShape_GLOBAL_00848A1C_B6E50991_0014_BB282182 *)0;
}

// 0067EEA0 FUN_0067eea0
#line 1 "decomp/ST.exe/functions/0067EEA0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 0067EEA0 returns used as parameter 1 of FUN_0067f030 @ 0067F3A4 */

char * st::fn_0067EEA0(byte *param_1)

{
  int iVar1;
  char *pcVar2;

  iVar1 = st::fn_00405CB8(param_1);
  if (-1 < iVar1) {
    pcVar2 = (char *)st::fn_0040353A(iVar1);
    return pcVar2;
  }
  return nullptr;
}

// 0067EEE0 FUN_0067eee0
#line 1 "decomp/ST.exe/functions/0067EEE0/decomp.c"

void st::fn_0067EEE0(byte *param_1)

{
  int iVar1;

  iVar1 = st::fn_00405CB8(param_1);
  if (-1 < iVar1) {
    st::fn_0040353A(iVar1);
    return;
  }
  st::fn_0040353A(0);
  return;
}

// 0067EF20 FUN_0067ef20
#line 1 "decomp/ST.exe/functions/0067EF20/decomp.c"
undefined4 st::fn_0067EF20(byte *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = st::fn_00402432(param_1);
  if (-1 < iVar1) {
    if (param_2 != nullptr) {
      *param_2 = iVar1;
    }
    uVar2 = st::fn_00404642(iVar1);
    return uVar2;
  }
  return 0;
}

// 0067EF60 FUN_0067ef60
#line 1 "decomp/ST.exe/functions/0067EF60/decomp.c"
int __cdecl st::fn_0067EF60(byte *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    pcVar2 = st::fn_00403E36(param_1);
    if (pcVar2 == nullptr) {
      st::fn_006B5AA0((uint *)PTR_00848a1c,(char *)param_1);
      iVar1 = st::fn_006B5AA0((uint *)PTR_00848a18,&DAT_008016a0);
      pcVar2 = (char *)st::fn_0040353A(iVar1);
    }
    else {
      iVar1 = st::fn_00405CB8(param_1);
    }
    if (param_2 != nullptr) {
      *param_2 = iVar1;
    }
    g_currentExceptionFrame = local_48.previous;
    return (int)pcVar2;
  }
  g_currentExceptionFrame = local_48.previous;
  return 0;
}

// 0067F030 FUN_0067f030
#line 1 "decomp/ST.exe/functions/0067F030/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0067F2B0 -> 0067F030 @ 0067F316 | 00683C70 -> 0067F030 @ 00683E1A | 00683C70 ->
   0067F030 @ 00683E4B | 00683C70 -> 0067F030 @ 00683E7C | 00683C70 -> 0067F030 @ 00683F96 |
   0068CEC0 -> 0067F030 @ 0068CFF3 | 0068CEC0 -> 0067F030 @ 0068D023 | 0068CEC0 -> 0067F030 @
   0068D054 | 0068CEC0 -> 0067F030 @ 0068D15B */

undefined4 __cdecl st::fn_0067F030(char *text,char *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  InternalExceptionFrame local_4c;
  uint local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    iVar1 = st::fn_004028C9((byte *)text,(int *)&local_8);
    if ((iVar1 != 0) && (-1 < (int)local_8)) {
      local_8 = st::fn_006B6020((uint *)PTR_00848a18,local_8,param_2);
      if (param_3 != nullptr) {
        *param_3 = local_8;
      }
      g_currentExceptionFrame = local_4c.previous;
      uVar2 = st::fn_0040353A(local_8);
      return uVar2;
    }
  }
  else {
    g_currentExceptionFrame = local_4c.previous;
  }
  return 0;
}

// 0067F0F0 FUN_0067f0f0
#line 1 "decomp/ST.exe/functions/0067F0F0/decomp.c"
undefined4 __cdecl st::fn_0067F0F0(char *param_1,uint param_2)

{
  int iVar1;
  InternalExceptionFrame local_48;

  iVar1 = st::fn_00404642(param_2);
  if (iVar1 != 0) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    iVar1 = st::fn_0072D7F0(local_48.jumpBuffer,0);
    if (iVar1 == 0) {
      st::fn_006B6020((uint *)PTR_00848a1c,param_2,param_1);
      g_currentExceptionFrame = local_48.previous;
      return 1;
    }
    g_currentExceptionFrame = local_48.previous;
  }
  return 0;
}

// 0067F180 FUN_0067f180
#line 1 "decomp/ST.exe/functions/0067F180/decomp.c"
undefined4 __cdecl st::fn_0067F180(byte *param_1,char *param_2)

{
  int iVar1;
  uint local_8;

  local_8 = 0xffffffff;
  iVar1 = st::fn_00402F40((char *)param_1,param_2,&local_8);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return local_8;
}

// 0067F1D0 FUN_0067f1d0
#line 1 "decomp/ST.exe/functions/0067F1D0/decomp.c"

void st::fn_0067F1D0(void)

{
  int iVar1;

  DAT_00848a20 = 0;
  DAT_00848a24 = 0;
  PTR_00848a1c = (AnonShape_GLOBAL_00848A1C_B6E50991 *)
                 st::fn_006B54F0(nullptr,10,10);
  PTR_00848a18 = (AnonShape_GLOBAL_00848A18_1B9B27FE *)
                 st::fn_006B54F0(nullptr,10,10);
  iVar1 = st::fn_004028C9(PTR_s___EMPTY___0079d734,nullptr);
  if (iVar1 == 0) {
    st::fn_006A5E40(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0xa6);
  }
  return;
}

// 0067F260 FUN_0067f260
#line 1 "decomp/ST.exe/functions/0067F260/decomp.c"

void st::fn_0067F260(void)

{
  if (PTR_00848a1c != nullptr) {
    st::fn_006B5570((DArrayTy *)PTR_00848a1c);
  }
  PTR_00848a1c = nullptr;
  if (PTR_00848a18 != nullptr) {
    st::fn_006B5570((DArrayTy *)PTR_00848a18);
  }
  PTR_00848a18 = nullptr;
  return;
}

// 0067F2B0 FUN_0067f2b0
#line 1 "decomp/ST.exe/functions/0067F2B0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067F2B0 -> EXTERNAL:0000001F @ 0067F2CE */

void st::fn_0067F2B0(LPCSTR lpFileName,int param_2)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;
  uint *puVar4;

  if (param_2 == 0) {
    if (0 < DAT_00848a24) {
      DAT_00848a24 = DAT_00848a24 + -1;
      puVar4 = nullptr;
      pbVar2 = st::fn_00401AA5(DAT_00848a24);
      pcVar3 = st::fn_00403E36(pbVar2);
      iVar1 = st::fn_00402F40("_curr_path",pcVar3,puVar4);
      if (iVar1 == 0) {
        st::fn_006A5E40(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0xbb);
      }
    }
  }
  else {
    st::external_0000001F(lpFileName,0x104,&DAT_0084868c,nullptr);
    st::fn_0072E730
              (&DAT_0084868c,&DAT_008478a8,&DAT_00848790,&DAT_0084858c,&DAT_00811990);
    st::fn_0072F110(&DAT_0084868c,&DAT_008478a8,&DAT_00848790,nullptr,nullptr);
    iVar1 = st::fn_00402F40("_curr_path",&DAT_0084868c,nullptr);
    if (iVar1 == 0) {
      st::fn_006A5E40(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0xb5);
    }
    puVar4 = nullptr;
    DAT_00848a24 = DAT_00848a24 + 1;
    pcVar3 = &DAT_0084868c;
    pbVar2 = st::fn_00401AA5(DAT_00848a24);
    iVar1 = st::fn_00402F40((char *)pbVar2,pcVar3,puVar4);
    if (iVar1 == 0) {
      st::fn_006A5E40(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0xb6);
      return;
    }
  }
  return;
}

// 0067F420 FUN_0067f420
#line 1 "decomp/ST.exe/functions/0067F420/decomp.c"

void st::fn_0067F420(void)

{
  g_array_00848A28 = st::fn_006AE290(nullptr,10,4,10);
  PTR_00848a2c = (AnonShape_GLOBAL_00848A2C_50EB5CD1 *)
                 st::fn_006B54F0(nullptr,10,10);
  return;
}

// 0067F460 FUN_0067f460
#line 1 "decomp/ST.exe/functions/0067F460/decomp.c"

void st::fn_0067F460(void)

{
  if (g_array_00848A28 != nullptr) {
    st::fn_006AE110(g_array_00848A28);
  }
  g_array_00848A28 = nullptr;
  if (PTR_00848a2c != nullptr) {
    st::fn_006B5570((DArrayTy *)PTR_00848a2c);
  }
  PTR_00848a2c = nullptr;
  return;
}

// 0067F4B0 FUN_0067f4b0
#line 1 "decomp/ST.exe/functions/0067F4B0/decomp.c"
undefined4 __cdecl st::fn_0067F4B0(uint param_1)

{
  undefined4 *puVar1;

  if ((param_1 < g_array_00848A28->count) &&
     (puVar1 = DArrayAt<undefined4>(g_array_00848A28, param_1)
     , puVar1 != nullptr)) {
    return *puVar1;
  }
  return 0;
}

// 0067F4F0 FUN_0067f4f0
#line 1 "decomp/ST.exe/functions/0067F4F0/decomp.c"
int __cdecl st::fn_0067F4F0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  AnonNested_AnonShape_GLOBAL_00848A2C_50EB5CD1_0014_282260F2 *pAVar5;
  uint uVar6;
  bool bVar7;

  iVar2 = PTR_00848a2c->field_0008;
  uVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pAVar5 = nullptr;
      pbVar3 = param_1;
      goto LAB_0067f51b;
    }
    do {
      pAVar5 = PTR_00848a2c->entries_0014[uVar6];
      pbVar3 = param_1;
LAB_0067f51b:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < pAVar5->field_0000;
        if (bVar1 != pAVar5->field_0000) {
LAB_0067f53f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067f544;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pAVar5->field_0001;
        if (bVar1 != pAVar5->field_0001) goto LAB_0067f53f;
        pAVar5 = pAVar5 + 1;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067f544:
      if (iVar4 == 0) {
        if ((int)uVar6 < 0) {
          return 0;
        }
        if (g_array_00848A28->count <= uVar6) {
          return 0;
        }
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(g_array_00848A28, uVar6) (runtime stride) */
        return (int)(g_array_00848A28->elementSize * uVar6 + (int)g_array_00848A28->data);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  return 0;
}

// 0067F5B0 FUN_0067f5b0
#line 1 "decomp/ST.exe/functions/0067F5B0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0067F5B0 returns zeroed full register at 0067F5C7 @ 0067F5CA */

uint __cdecl st::fn_0067F5B0(byte *param_1)

{
  uint *puVar1;

  puVar1 = (uint *)st::fn_00404A57(param_1);
  if (puVar1 != nullptr) {
    return *puVar1;
  }
  return 0;
}

// 0067F5E0 FUN_0067f5e0
#line 1 "decomp/ST.exe/functions/0067F5E0/decomp.c"
uint __cdecl st::fn_0067F5E0(byte *param_1)

{
  byte bVar1;
  int local_EAX_39;
  byte *pbVar2;
  int iVar3;
  int uVar3;
  int iVar4;
  AnonNested_AnonShape_GLOBAL_00848A2C_50EB5CD1_0014_282260F2 *pAVar5;
  bool bVar6;
  InternalExceptionFrame local_4c;
  undefined4 local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_EAX_39 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (-1 < local_EAX_39) {
      local_EAX_39 = 0xffffffff;
    }
    return local_EAX_39;
  }
  uVar3 = 0;
  iVar4 = PTR_00848a2c->field_0008;
  if (0 < iVar4) {
    if (iVar4 < 1) {
      pAVar5 = nullptr;
      pbVar2 = param_1;
      goto LAB_0067f63c;
    }
    do {
      pAVar5 = PTR_00848a2c->entries_0014[uVar3];
      pbVar2 = param_1;
LAB_0067f63c:
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < pAVar5->field_0000;
        if (bVar1 != pAVar5->field_0000) {
LAB_0067f660:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_0067f665;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pAVar5->field_0001;
        if (bVar1 != pAVar5->field_0001) goto LAB_0067f660;
        pAVar5 = pAVar5 + 1;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0067f665:
      if (iVar3 == 0) goto LAB_0067f671;
      uVar3 = uVar3 + 1;
    } while (uVar3 < iVar4);
  }
  uVar3 = 0xffffffff;
LAB_0067f671:
  if (uVar3 < 0) {
    uVar3 = st::fn_006B5AA0((uint *)PTR_00848a2c,(char *)param_1);
    local_8 = 0;
    iVar4 = st::fn_006AE1C0(g_array_00848A28,&local_8);
    if (iVar4 != uVar3) {
      st::fn_006A5E40(-5,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x126);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return uVar3;
}

// 0067F740 FUN_0067f740
#line 1 "decomp/ST.exe/functions/0067F740/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 0067F740 @ 00683EAB | 00683C70 -> 0067F740 @ 00683EDB | 00683C70 ->
   0067F740 @ 00683F0B | 0068CEC0 -> 0067F740 @ 0068D084 | 0068CEC0 -> 0067F740 @ 0068D0B3 |
   0068CEC0 -> 0067F740 @ 0068D0E3 */

uint __cdecl st::fn_0067F740(char *text,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;

  uVar1 = st::fn_00405A10((byte *)text);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if ((uVar1 < g_array_00848A28->count) &&
     (puVar2 = DArrayAt<undefined4>(g_array_00848A28, uVar1),
     puVar2 != nullptr)) {
    *puVar2 = param_2;
    return uVar1;
  }
  return 0xfffffffc;
}

// 0067F790 FUN_0067f790
#line 1 "decomp/ST.exe/functions/0067F790/decomp.c"

void st::fn_0067F790(void)

{
  g_array_00848A30 = st::fn_006AE290(nullptr,10,4,10);
  PTR_00848a34 = (AnonShape_GLOBAL_00848A34_1A834A18 *)
                 st::fn_006B54F0(nullptr,10,10);
  return;
}

// 0067F7D0 FUN_0067f7d0
#line 1 "decomp/ST.exe/functions/0067F7D0/decomp.c"

void st::fn_0067F7D0(void)

{
  if (g_array_00848A30 != nullptr) {
    st::fn_006AE110(g_array_00848A30);
  }
  g_array_00848A30 = nullptr;
  if (PTR_00848a34 != nullptr) {
    st::fn_006B5570((DArrayTy *)PTR_00848a34);
  }
  PTR_00848a34 = nullptr;
  return;
}

// 0067F820 FUN_0067f820
#line 1 "decomp/ST.exe/functions/0067F820/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl st::fn_0067F820(uint param_1)

{
  float *pfVar1;

  if ((param_1 < g_array_00848A30->count) &&
     (pfVar1 = DArrayAt<float>(g_array_00848A30, param_1),
     pfVar1 != nullptr)) {
    return (float10)*pfVar1;
  }
  return (float10)_DAT_0079034c;
}

// 0067F860 FUN_0067f860
#line 1 "decomp/ST.exe/functions/0067F860/decomp.c"
int __cdecl st::fn_0067F860(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  AnonNested_AnonShape_GLOBAL_00848A34_1A834A18_0014_B03F56A9 *pAVar5;
  uint uVar6;
  bool bVar7;

  iVar2 = PTR_00848a34->field_0008;
  uVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pAVar5 = nullptr;
      pbVar3 = param_1;
      goto LAB_0067f88b;
    }
    do {
      pAVar5 = PTR_00848a34->entries_0014[uVar6];
      pbVar3 = param_1;
LAB_0067f88b:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < pAVar5->field_0000;
        if (bVar1 != pAVar5->field_0000) {
LAB_0067f8af:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067f8b4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pAVar5->field_0001;
        if (bVar1 != pAVar5->field_0001) goto LAB_0067f8af;
        pAVar5 = pAVar5 + 1;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067f8b4:
      if (iVar4 == 0) {
        if ((int)uVar6 < 0) {
          return 0;
        }
        if (g_array_00848A30->count <= uVar6) {
          return 0;
        }
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(g_array_00848A30, uVar6) (runtime stride) */
        return (int)(g_array_00848A30->elementSize * uVar6 + (int)g_array_00848A30->data);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  return 0;
}

// 0067F920 FUN_0067f920
#line 1 "decomp/ST.exe/functions/0067F920/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl st::fn_0067F920(byte *param_1)

{
  float *pfVar1;

  pfVar1 = (float *)st::fn_0040351C(param_1);
  if (pfVar1 != nullptr) {
    return (float10)*pfVar1;
  }
  return (float10)_DAT_0079034c;
}

// 0067F950 FUN_0067f950
#line 1 "decomp/ST.exe/functions/0067F950/decomp.c"
uint __cdecl st::fn_0067F950(byte *param_1)

{
  byte bVar1;
  int local_EAX_39;
  byte *pbVar2;
  int iVar3;
  int uVar3;
  int iVar4;
  AnonNested_AnonShape_GLOBAL_00848A34_1A834A18_0014_B03F56A9 *pAVar5;
  bool bVar6;
  InternalExceptionFrame local_4c;
  undefined4 local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_EAX_39 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (-1 < local_EAX_39) {
      local_EAX_39 = 0xffffffff;
    }
    return local_EAX_39;
  }
  uVar3 = 0;
  iVar4 = PTR_00848a34->field_0008;
  if (0 < iVar4) {
    if (iVar4 < 1) {
      pAVar5 = nullptr;
      pbVar2 = param_1;
      goto LAB_0067f9ac;
    }
    do {
      pAVar5 = PTR_00848a34->entries_0014[uVar3];
      pbVar2 = param_1;
LAB_0067f9ac:
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < pAVar5->field_0000;
        if (bVar1 != pAVar5->field_0000) {
LAB_0067f9d0:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_0067f9d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pAVar5->field_0001;
        if (bVar1 != pAVar5->field_0001) goto LAB_0067f9d0;
        pAVar5 = pAVar5 + 1;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0067f9d5:
      if (iVar3 == 0) goto LAB_0067f9e1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < iVar4);
  }
  uVar3 = 0xffffffff;
LAB_0067f9e1:
  if (uVar3 < 0) {
    uVar3 = st::fn_006B5AA0((uint *)PTR_00848a34,(char *)param_1);
    local_8 = 0;
    iVar4 = st::fn_006AE1C0(g_array_00848A30,&local_8);
    if (iVar4 != uVar3) {
      st::fn_006A5E40(-5,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x195);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return uVar3;
}

// 0067FAB0 FUN_0067fab0
#line 1 "decomp/ST.exe/functions/0067FAB0/decomp.c"
uint __cdecl st::fn_0067FAB0(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;

  uVar1 = st::fn_00401D25(param_1);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if ((uVar1 < g_array_00848A30->count) &&
     (puVar2 = DArrayAt<undefined4>(g_array_00848A30, uVar1),
     puVar2 != nullptr)) {
    *puVar2 = param_2;
    return uVar1;
  }
  return 0xfffffffc;
}

// 0067FB00 FUN_0067fb00
#line 1 "decomp/ST.exe/functions/0067FB00/decomp.c"

void st::fn_0067FB00(void)

{
  g_array_00848A38 = st::fn_006AE290(nullptr,0x14,4,10);
  DAT_00848a3c = st::fn_006B54F0(nullptr,0x14,10);
  return;
}

// 0067FB40 FUN_0067fb40
#line 1 "decomp/ST.exe/functions/0067FB40/decomp.c"
void st::fn_0067FB40(void)

{
  int *piVar1;
  DArrayTy *array;
  uint uVar2;
  bool bVar3;

  if (g_array_00848A38 != nullptr) {
    uVar2 = 0;
    array = g_array_00848A38;
    if (0 < (int)g_array_00848A38->count) {
      bVar3 = g_array_00848A38->count != 0;
      do {
        if (((bVar3) &&
            (piVar1 = DArrayAt<int>(array, uVar2), piVar1 != nullptr))
           && (*piVar1 != 0)) {
          st::fn_0040193D(piVar1);
          array = g_array_00848A38;
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < array->count;
      } while ((int)uVar2 < (int)array->count);
    }
    st::fn_006AE110(array);
    g_array_00848A38 = nullptr;
  }
  if (DAT_00848a3c != nullptr) {
    st::fn_006B5570(DAT_00848a3c);
  }
  DAT_00848a3c = nullptr;
  return;
}

// 0067FBD0 FUN_0067fbd0
#line 1 "decomp/ST.exe/functions/0067FBD0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 0067FBD0 returns used as parameter 1 of FUN_0067fd20 @ 0068A4D6 */

char * st::fn_0067FBD0(void)

{
  DAT_00848a40 = DAT_00848a40 + 1;
  st::external_00000080(&DAT_0084854c,PTR_s___EXPAR___03d_0079d740,DAT_00848a40);
  return &DAT_0084854c;
}

// 0067FC10 FUN_0067fc10
#line 1 "decomp/ST.exe/functions/0067FC10/decomp.c"
int __cdecl st::fn_0067FC10(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;

  iVar2 = *(int *)(DAT_00848a3c + 8);
  iVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pbVar5 = nullptr;
      pbVar3 = param_1;
      goto LAB_0067fc3b;
    }
    do {
      pbVar5 = *(byte **)(*(int *)(DAT_00848a3c + 0x14) + iVar6 * 4);
      pbVar3 = param_1;
LAB_0067fc3b:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0067fc5f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067fc64;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0067fc5f;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067fc64:
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return -1;
}

// 0067FCA0 FUN_0067fca0
#line 1 "decomp/ST.exe/functions/0067FCA0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0067FCA0 returns used as parameter 1 of FUN_00683780 @ 00683B20 | 0067FCA0 returns used
   as parameter 1 of FUN_00683780 @ 00685F71 */

AnonShape_00683780_11EA4E23 * __cdecl st::fn_0067FCA0(uint param_1)

{
  int *piVar1;
  AnonShape_00683780_11EA4E23 *pAVar2;

  if (((g_array_00848A38->count <= param_1) ||
      (piVar1 = DArrayAt<int>(g_array_00848A38, param_1),
      piVar1 == nullptr)) ||
     (pAVar2 = (AnonShape_00683780_11EA4E23 *)*piVar1, pAVar2 == nullptr)
     ) {
    pAVar2 = nullptr;
  }
  return pAVar2;
}

// 0067FCE0 FUN_0067fce0
#line 1 "decomp/ST.exe/functions/0067FCE0/decomp.c"
int __cdecl st::fn_0067FCE0(byte *param_1)

{
  uint uVar1;
  AnonShape_00683780_11EA4E23 *pAVar2;

  uVar1 = st::fn_004056A5(param_1);
  if (-1 < (int)uVar1) {
    pAVar2 = st::fn_00404273(uVar1);
    return (int)pAVar2;
  }
  return 0;
}

// 0067FD20 FUN_0067fd20
#line 1 "decomp/ST.exe/functions/0067FD20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 0067FD20 @ 0068A4D6 */

uint __cdecl st::fn_0067FD20(int *param_1,char *param_2)

{
  int uVar1;
  uint uVar2;
  uint uVar3;
  InternalExceptionFrame local_4c;
  int *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  uVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (uVar1 == 0) {
    local_8 = param_1;
    uVar2 = st::fn_006AE1C0(g_array_00848A38,&local_8);
    uVar3 = st::fn_006B5AA0(DAT_00848a3c,param_2);
    if (uVar2 != uVar3) {
      st::fn_006A5E40(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x203);
    }
    g_currentExceptionFrame = local_4c.previous;
    return uVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  if (-1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0067FDF0 FUN_0067fdf0
#line 1 "decomp/ST.exe/functions/0067FDF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 0067FDF0 @ 00689D7E */

uint __cdecl st::fn_0067FDF0(int *param_1,byte *param_2)

{
  int local_EAX_31;
  int uVar1;
  uint uVar2;
  undefined4 *puVar3;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  local_EAX_31 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (local_EAX_31 != 0) {
    g_currentExceptionFrame = local_48.previous;
    if (-1 < local_EAX_31) {
      local_EAX_31 = 0xffffffff;
    }
    return local_EAX_31;
  }
  uVar1 = st::fn_004056A5(param_2);
  if (uVar1 < 0) {
    uVar2 = st::fn_00404976(param_1,(char *)param_2);
    g_currentExceptionFrame = local_48.previous;
    return uVar2;
  }
  if ((uint)uVar1 < g_array_00848A38->count) {
    puVar3 = DArrayAt<undefined4>(g_array_00848A38, uVar1);
  }
  else {
    puVar3 = nullptr;
  }
  if (puVar3 == nullptr) {
    st::fn_006A5E40(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x21a);
  }
  st::fn_0040193D(puVar3);
  *puVar3 = param_1;
  g_currentExceptionFrame = local_48.previous;
  return uVar1;
}

// 0067FF00 FUN_0067ff00
#line 1 "decomp/ST.exe/functions/0067FF00/decomp.c"
/* WARNING: Removing unreachable block (ram,0x0067ff2e) */

undefined4 __cdecl st::fn_0067FF00(char *param_1)

{
  st::fn_0072EE80(param_1,PTR_s__RT_d_0079d744);
  return 0xffffffff;
}

// 0067FF50 FUN_0067ff50
#line 1 "decomp/ST.exe/functions/0067FF50/decomp.c"
/* WARNING: Removing unreachable block (ram,0x0067ff7e) */

undefined4 __cdecl st::fn_0067FF50(char *param_1)

{
  st::fn_0072EE80(param_1,PTR_s__GL_d_0079d748);
  return 0xffffffff;
}

// 0067FFA0 FUN_0067ffa0
#line 1 "decomp/ST.exe/functions/0067FFA0/decomp.c"
/* WARNING: Removing unreachable block (ram,0x0067ffce) */

undefined4 __cdecl st::fn_0067FFA0(char *param_1)

{
  st::fn_0072EE80(param_1,PTR_s__PI_d_0079d74c);
  return 0xffffffff;
}

// 0067FFF0 FUN_0067fff0
#line 1 "decomp/ST.exe/functions/0067FFF0/decomp.c"
/* WARNING: Removing unreachable block (ram,0x0068001e) */

undefined4 __cdecl st::fn_0067FFF0(char *param_1)

{
  st::fn_0072EE80(param_1,PTR_s__PS_d_0079d750);
  return 0xffffffff;
}

