#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0071.cpp

// 00710790 FUN_00710790
#line 4 "decomp/ST.exe/functions/00710790/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007140E0 -> 00710790 @ 00714523 */

void __cdecl st::fn_00710790(AnonShape_00710790_4CBB90D4 *param_1)

{
  AnonShape_00710790_4CBB90D4 *pAVar1;
  AnonShape_00710790_4CBB90D4 *pAVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  if (((param_1 != nullptr) && (*(int *)(param_1 + 1) != 0)) &&
     (iVar3 = *(int *)&param_1[1].field_0x8, iVar3 != 0)) {
    iVar6 = 0;
    param_1->field_009A = *(undefined4 *)(iVar3 + 0x9a);
    if (0 < **(short **)(iVar3 + 0x9a)) {
      iVar5 = 4;
      do {
        if ((iVar5 < 4) || (0x43 < iVar5)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar5 + iVar3);
        }
        *(undefined4 *)(&param_1->field_0x0 + iVar5) = uVar4;
        iVar3 = *(int *)&param_1[1].field_0x8;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < **(short **)(iVar3 + 0x9a));
    }
    pAVar1 = *(AnonShape_00710790_4CBB90D4 **)&param_1[1].field_0x8;
    if (*(int *)(pAVar1 + 1) != 0) {
      st::fn_00710790(pAVar1);
    }
    pAVar2 = *(AnonShape_00710790_4CBB90D4 **)&param_1[1].field_0x8;
    param_1->field_008A = pAVar1->field_008A;
    if (*(int *)(pAVar2 + 1) != 0) {
      st::fn_00710790(pAVar2);
    }
    pAVar1 = *(AnonShape_00710790_4CBB90D4 **)&param_1[1].field_0x8;
    param_1->field_0086 = pAVar2->field_0086;
    if (*(int *)(pAVar1 + 1) != 0) {
      st::fn_00710790(pAVar1);
    }
    pAVar2 = *(AnonShape_00710790_4CBB90D4 **)&param_1[1].field_0x8;
    param_1->field_0092 = pAVar1->field_0092;
    if (*(int *)(pAVar2 + 1) != 0) {
      st::fn_00710790(pAVar2);
    }
    iVar3 = *(int *)&param_1[1].field_0x8;
    param_1->field_008E = pAVar2->field_008E;
    *(undefined4 *)&param_1[1].field_0xc = *(undefined4 *)(iVar3 + 0xac);
  }
  return;
}

// 007109F0 FUN_007109f0
#line 4 "decomp/ST.exe/functions/007109F0/decomp.c"
void __thiscall st::fn_007109F0(void *this,AnonShape_007109F0_BD33A2FF *param_1)

{
  if (param_1 != nullptr) {
    STField<undefined4>(this,0x44) = *(undefined4 *)param_1;
    STField<undefined4>(this,0x48) = *(undefined4 *)((int)&param_1->field_0001 + 3);
    STField<undefined4>(this,0x4c) = *(undefined4 *)&param_1->field_0x8;
    STField<undefined4>(this,0x50) = *(undefined4 *)((int)&param_1->field_000B + 1);
    STField<undefined4>(this,0x54) = *(undefined4 *)&param_1->field_0x10;
    STField<undefined4>(this,0x58) = *(undefined4 *)&param_1->field_0x14;
    STField<undefined4>(this,0x5c) = *(undefined4 *)&param_1->field_0x18;
    STField<undefined4>(this,0x60) = *(undefined4 *)&param_1->field_0x1c;
    STField<undefined4>(this,100) = *(undefined4 *)&param_1->field_0x20;
    STField<undefined4>(this,0x68) = *(undefined4 *)&param_1->field_0x24;
    STField<undefined4>(this,0x6c) = *(undefined4 *)&param_1->field_0x28;
    STField<undefined2>(this,0x70) = *(undefined2 *)&param_1->field_0x2c;
    STField<undefined4>(this,0x72) = param_1->field_002E;
    STField<undefined4>(this,0x76) = param_1->field_0032;
    STField<undefined4>(this,0x7a) = param_1->field_0036;
    STField<undefined4>(this,0x7e) = param_1->field_003A;
    STField<undefined2>(this,0x9e) = param_1->field_003E;
    STField<undefined4>(this,0x82) = *(undefined4 *)(param_1 + 1);
    STField<undefined4>(this,0x96) = *(undefined4 *)((int)&param_1[1].field_0001 + 3);
  }
  return;
}

// 00710FB0 FUN_00710fb0
#line 4 "decomp/ST.exe/functions/00710FB0/decomp.c"
void __thiscall st::fn_00710FB0(void *this,byte *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint local_8;

  local_8 = (uint)*param_1;
  if (STField<int>(this,0x96) == 1) {
    local_8 = st::fn_00734030(local_8);
  }
  else if (STField<int>(this,0x96) == 2) {
    local_8 = st::fn_007306E0(local_8);
  }
  if (((STField<int>(this,0xa0) != 0) && (STField<int>(this,0xa8) != 0)) &&
     (STField<int>(this,0xac) != *(int *)(STField<int>(this,0xa8) + 0xac))) {
    st::fn_00710790(this);
  }
  uVar2 = STField<ushort>(this,0x70);
  uVar3 = (uint)uVar2;
  iVar1 = STField<int>(this,0x9a);
  if (*(short *)(iVar1 + (uVar3 + 0xb) * 10) != (short)local_8) {
    while( true ) {
      uVar3 = uVar3 + 1;
      if (*(ushort *)(iVar1 + 100) <= (ushort)uVar3) {
        uVar3 = 0;
      }
      if ((short)uVar3 == STField<short>(this,0x70)) break;
      if (*(short *)(iVar1 + ((uVar3 & 0xffff) + 0xb) * 10) == (short)local_8) {
        STField<short>(this,0x70) = (short)uVar3;
        return;
      }
    }
    if (STField<int>(this,0xa0) == 0) {
      if ((STField<byte>(this,0x18d) & 8) != 0) {
        uVar3 = st::fn_0070E030(this,local_8,0);
        STField<ushort>(this,0x70) = (ushort)uVar3 & ((int)uVar3 < 1) - 1;
        return;
      }
    }
    else if ((*(byte *)((int)STField<int *>(this,0xa8) + 0x18d) & 8) != 0) {
      uVar3 = st::fn_0070E030(STField<int *>(this,0xa8),local_8,0);
      st::fn_00710790(this);
      STField<ushort>(this,0x70) = ((int)uVar3 < 1) - 1 & (ushort)uVar3;
      return;
    }
    uVar2 = 0;
  }
  STField<ushort>(this,0x70) = uVar2;
  return;
}

// 00711110 FUN_00711110
#line 4 "decomp/ST.exe/functions/00711110/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005E1330 -> 00711110 @ 005E2065 */

int __thiscall st::fn_00711110(void *this,char *resourceString)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_8;

  iVar5 = 0;
  local_8 = 0;
  bVar2 = false;
  if (resourceString == nullptr) {
    return 0;
  }
  if (*resourceString != '\0') {
    do {
      if (bVar2) {
        bVar2 = false;
        iVar3 = st::fn_0070CDC0((byte *)resourceString);
        if (iVar3 < 0) {
LAB_00711153:
          uVar4 = st::fn_00710FB0(this,(byte *)resourceString);
          local_8 = local_8 + *(short *)(STField<int>(this,0x9a) + 0x6a + (uVar4 & 0xffff) * 10);
          iVar5 = iVar5 + 1;
        }
      }
      else {
        iVar3 = st::fn_0070CD90((char *)((int)this + 0x9e),(uint *)resourceString);
        if ((iVar3 != 0) || (STField<int>(this,0x7e) == 0)) goto LAB_00711153;
        bVar2 = true;
      }
      pcVar1 = (char *)((int)resourceString + 1);
      resourceString = (char *)((int)resourceString + 1);
    } while (*pcVar1 != '\0');
    if (0 < iVar5) {
      local_8 = local_8 + STField<int>(this,0x58) * (iVar5 + -1);
    }
  }
  return local_8;
}

// 007111C0 FUN_007111c0
#line 4 "decomp/ST.exe/functions/007111C0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005545C0 -> 007111C0 @ 0055460C | 00554800 -> 007111C0 @ 005548F6 */

int __thiscall st::fn_007111C0(void *this,char *resourceString)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  iVar5 = 0;
  bVar2 = false;
  if (resourceString == nullptr) {
    return 0;
  }
  cVar1 = *resourceString;
  do {
    if (cVar1 == '\0') {
      return iVar5;
    }
    if (bVar2) {
      bVar2 = false;
      iVar3 = st::fn_0070CDC0((byte *)resourceString);
      if (iVar3 < 0) {
LAB_00711200:
        uVar4 = st::fn_00710FB0(this,(byte *)resourceString);
        iVar3 = (int)*(short *)(STField<int>(this,0x9a) + 0x6c + (uVar4 & 0xffff) * 10);
        if (iVar5 < iVar3) {
          iVar5 = iVar3;
        }
      }
    }
    else {
      iVar3 = st::fn_0070CD90((char *)((int)this + 0x9e),(uint *)resourceString);
      if ((iVar3 != 0) || (STField<int>(this,0x7e) == 0)) goto LAB_00711200;
      bVar2 = true;
    }
    cVar1 = STField<char>(resourceString,1);
    resourceString = (char *)((int)resourceString + 1);
  } while( true );
}

// 00711260 FUN_00711260
#line 4 "decomp/ST.exe/functions/00711260/decomp.c"
int __thiscall st::fn_00711260(void *this,uint *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_8;

  bVar2 = false;
  local_8 = 0;
  if (param_1 == nullptr) {
    return 0;
  }
  cVar1 = (char)*param_1;
  do {
    if (cVar1 == '\0') {
      return local_8;
    }
    if (bVar2) {
      bVar2 = false;
      iVar3 = st::fn_0070CDC0((byte *)param_1);
      if (iVar3 < 0) {
LAB_00711298:
        local_8 = local_8 + 1;
      }
    }
    else {
      iVar3 = st::fn_0070CD90((char *)((int)this + 0x9e),param_1);
      if ((iVar3 != 0) || (STField<int>(this,0x7e) == 0)) goto LAB_00711298;
      bVar2 = true;
    }
    cVar1 = STField<char>(param_1,1);
    param_1 = (uint *)((int)param_1 + 1);
  } while( true );
}

// 007112E0 FUN_007112e0
#line 4 "decomp/ST.exe/functions/007112E0/decomp.c"
int __thiscall st::fn_007112E0(void *this,uint *param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int local_8;

  iVar4 = -1;
  bVar3 = false;
  local_8 = -1;
  if (((param_1 != nullptr) && (STField<int>(this,0x7e) != 0)) &&
     (STField<int>(this,0x82) < 0)) {
    cVar2 = (char)*param_1;
    iVar4 = local_8;
    while (cVar2 != '\0') {
      local_8 = iVar4;
      if (bVar3) {
        bVar3 = false;
        iVar4 = st::fn_0070CDC0((byte *)param_1);
        if ((-1 < iVar4) && (local_8 = iVar4, 0xe < iVar4)) {
          local_8 = STField<int>(this,0x48);
        }
      }
      else {
        iVar4 = st::fn_0070CD90((char *)((int)this + 0x9e),param_1);
        if ((iVar4 == 0) && (STField<int>(this,0x7e) != 0)) {
          bVar3 = true;
        }
      }
      pcVar1 = (char *)((int)param_1 + 1);
      param_1 = (uint *)((int)param_1 + 1);
      iVar4 = local_8;
      cVar2 = *pcVar1;
    }
  }
  return iVar4;
}

// 00711370 FUN_00711370
#line 4 "decomp/ST.exe/functions/00711370/decomp.c"
int __thiscall st::fn_00711370(void *this,uint *param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  undefined1 uVar4;
  int local_8;

  uVar4 = 0;
  local_8 = 0;
  if (param_1 == nullptr) {
    return 0;
  }
  cVar1 = (char)*param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return local_8;
    }
    puVar2 = st::fn_00730590(param_1,&DAT_007c8ff4);
    if (puVar2 != nullptr) {
      uVar4 = (undefined1)*puVar2;
      *(undefined1 *)puVar2 = 0;
    }
    iVar3 = st::fn_00711110(this,(char *)param_1);
    if (local_8 < iVar3) {
      local_8 = iVar3;
    }
    if (puVar2 == nullptr) break;
    param_1 = (uint *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = uVar4;
    cVar1 = *(char *)param_1;
  }
  return local_8;
}

// 007113E0 FUN_007113e0
#line 4 "decomp/ST.exe/functions/007113E0/decomp.c"
int __thiscall st::fn_007113E0(void *this,uint *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int local_c;
  undefined1 local_5;

  local_5 = 0;
  local_c = 0;
  if (param_1 == nullptr) {
    return 0;
  }
  iVar2 = 0;
  if ((char)*param_1 != '\0') {
    do {
      iVar3 = iVar2;
      puVar1 = st::fn_00730590(param_1,&DAT_007c8ff4);
      if (puVar1 != nullptr) {
        local_5 = (undefined1)*puVar1;
        *(undefined1 *)puVar1 = 0;
      }
      iVar2 = st::fn_007111C0(this,(char *)param_1);
      local_c = local_c + iVar2;
      iVar2 = iVar3 + 1;
      if (puVar1 == nullptr) break;
      param_1 = (uint *)((int)puVar1 + 1);
      *(undefined1 *)puVar1 = local_5;
    } while (*(char *)param_1 != '\0');
    if (iVar2 != 0) {
      local_c = local_c + STField<int>(this,0x5c) * iVar3;
    }
  }
  return local_c;
}

// 00711470 FUN_00711470
#line 4 "decomp/ST.exe/functions/00711470/decomp.c"
int st::fn_00711470(uint *param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;

  iVar4 = 0;
  if (param_1 == nullptr) {
    return 0;
  }
  cVar1 = (char)*param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return iVar4;
    }
    puVar3 = st::fn_00730590(param_1,&DAT_007c8ff4);
    iVar5 = iVar4 + 1;
    iVar4 = iVar4 + 1;
    if (puVar3 == nullptr) break;
    uVar2 = *puVar3;
    *(undefined1 *)puVar3 = 0;
    *(char *)puVar3 = (char)uVar2;
    cVar1 = STField<char>(puVar3,1);
    param_1 = (uint *)((int)puVar3 + 1);
  }
  return iVar5;
}

// 007114C0 FUN_007114c0
#line 4 "decomp/ST.exe/functions/007114C0/decomp.c"
int __thiscall st::fn_007114C0(void *this,uint *param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_5;

  iVar4 = 0;
  local_5 = 0;
  if (param_1 == nullptr) {
    return 0;
  }
  cVar1 = (char)*param_1;
  while (cVar1 != '\0') {
    puVar2 = st::fn_00730590(param_1,&DAT_007c8ff4);
    if (puVar2 != nullptr) {
      local_5 = (undefined1)*puVar2;
      *(undefined1 *)puVar2 = 0;
    }
    iVar3 = st::fn_00711260(this,param_1);
    iVar4 = iVar4 + 1 + iVar3;
    if (puVar2 == nullptr) break;
    param_1 = (uint *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = local_5;
    cVar1 = *(char *)param_1;
  }
  return iVar4 + -1;
}

// 00711530 FUN_00711530
#line 4 "decomp/ST.exe/functions/00711530/decomp.c"
int __thiscall st::fn_00711530(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  if (param_1 == nullptr) {
    return 0;
  }
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar2 = st::fn_00711110(this,(char *)*param_1);
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar2 = *piVar1;
  }
  return iVar3;
}

// 00711580 FUN_00711580
#line 4 "decomp/ST.exe/functions/00711580/decomp.c"
int __thiscall st::fn_00711580(void *this,int *param_1)

{
  char *resourceString;
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  if (param_1 == nullptr) {
    return 0;
  }
  resourceString = (char *)*param_1;
  iVar1 = 0;
  if (resourceString != nullptr) {
    do {
      iVar3 = iVar1;
      iVar1 = st::fn_007111C0(this,resourceString);
      param_1 = param_1 + 1;
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar3 + 1;
      resourceString = (char *)*param_1;
    } while (resourceString != nullptr);
    if (iVar1 != 0) {
      iVar2 = iVar2 + STField<int>(this,0x5c) * iVar3;
    }
  }
  return iVar2;
}

// 007115E0 FUN_007115e0
#line 4 "decomp/ST.exe/functions/007115E0/decomp.c"
int __thiscall st::fn_007115E0(void *this,AnonShape_007115E0_FC3147FF *param_1,int param_2,int param_3)

{
  int iVar1;
  char *resourceString;
  int iVar2;
  int local_8;

  local_8 = 0;
  if (param_1 != nullptr) {
    iVar1 = param_1->field_0008;
    if (param_3 == -1) {
      param_3 = iVar1;
    }
    if ((param_2 < iVar1) && (param_3 != 0)) {
      if (iVar1 < param_2 + param_3) {
        param_3 = iVar1 - param_2;
      }
      iVar1 = param_2 + param_3;
      for (; param_2 < iVar1; param_2 = param_2 + 1) {
        if (param_2 < param_1->field_0008) {
          resourceString = *(char **)(param_1->field_0014 + param_2 * 4);
        }
        else {
          resourceString = nullptr;
        }
        iVar2 = st::fn_007111C0(this,resourceString);
        local_8 = local_8 + iVar2;
      }
      return STField<int>(this,0x5c) * (param_3 + -1) + local_8;
    }
  }
  return 0;
}

// 00711670 FUN_00711670
#line 4 "decomp/ST.exe/functions/00711670/decomp.c"
int __thiscall st::fn_00711670(void *this,AnonShape_00711670_5F8DCCF2 *param_1,int param_2,int param_3)

{
  int iVar1;
  char *resourceString;
  int iVar2;
  int local_8;

  local_8 = 0;
  if (param_1 != nullptr) {
    iVar1 = param_1->field_0008;
    if (param_3 == -1) {
      param_3 = iVar1;
    }
    if ((param_2 < iVar1) && (param_3 != 0)) {
      if (iVar1 < param_2 + param_3) {
        param_3 = iVar1 - param_2;
      }
      iVar1 = param_2 + param_3;
      for (; param_2 < iVar1; param_2 = param_2 + 1) {
        if (param_2 < param_1->field_0008) {
          resourceString = *(char **)(param_1->field_0014 + param_2 * 4);
        }
        else {
          resourceString = nullptr;
        }
        iVar2 = st::fn_00711110(this,resourceString);
        if (local_8 < iVar2) {
          local_8 = iVar2;
        }
      }
      return local_8;
    }
  }
  return 0;
}

// 007121A0 FUN_007121a0
#line 4 "decomp/ST.exe/functions/007121A0/decomp.c"
undefined4 __cdecl st::fn_007121A0(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;

  iVar1 = param_2 + param_3;
  if (param_2 < iVar1) {
    do {
      if (*(int *)(param_1 + 8) <= param_2) {
        return 0;
      }
      if (param_2 < 0) {
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar2 = *(char **)(*(int *)(param_1 + 0x14) + param_2 * 4);
      if ((pcVar2 != nullptr) && (*pcVar2 != '\0')) {
        return 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 < iVar1);
  }
  return 0;
}

// 00714060 FUN_00714060
#line 4 "decomp/ST.exe/functions/00714060/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_00714060(int *param_1)

{
  AnonShape_007109F0_BD33A2FF local_4c;

  if ((param_1[0x16] != 0) && ((ccFntTy *)*param_1 != nullptr)) {
    st::fn_007108B0((ccFntTy *)*param_1,(undefined4 *)&local_4c);
    st::fn_007109F0((void *)*param_1,(AnonShape_007109F0_BD33A2FF *)(param_1 + 4));
    st::fn_00710F00((ccFntTy *)*param_1);
    if (param_1[0x22] != 0) {
      st::fn_006AB060((void **)(param_1 + 0x22));
    }
    if (param_1[0x2a] != 0) {
      st::fn_006AB060((void **)(param_1 + 0x2a));
    }
    if ((void *)param_1[0x16] != nullptr) {
      st::fn_006AB060((void **)(param_1 + 0x16));
    }
    st::fn_007109F0((void *)*param_1,&local_4c);
  }
  return;
}

// 007140E0 FUN_007140e0
#line 4 "decomp/ST.exe/functions/007140E0/decomp.c"
int __thiscall st::fn_007140E0(void *this,int param_1,char param_2)

{
  char cVar1;
  ccFntTy *this_00;
  AnonShape_00710790_4CBB90D4 *pAVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *puVar11;
  char *pcVar12;
  char *pcVar13;
  AnonShape_007109F0_BD33A2FF local_6c;
  char local_24 [12];
  int local_18;
  int local_14;
  int local_10;
  RecoveredSourceFamily_dibcopy *local_c;
  undefined1 local_5;

  iVar9 = 0;
  local_c = nullptr;
  local_10 = 0;
  local_5 = 0;
  if ((((STField<char *>(this,0x58) == nullptr) || (*(ccFntTy **)this == nullptr)) ||
      (STField<int>(this,8) <= STField<int>(this,4))) ||
     (*STField<char *>(this,0x58) == '\0')) {
    return 0;
  }
  st::fn_007108B0(*(ccFntTy **)this,(undefined4 *)&local_6c);
  st::fn_007109F0(*(void **)this,(AnonShape_007109F0_BD33A2FF *)((int)this + 0x10));
  this_00 = *(ccFntTy **)this;
  if (&stack0x00000000 != &DAT_0000000c) {
    local_c = (RecoveredSourceFamily_dibcopy *)this_00->field_0072;
  }
  if (&stack0x00000000 != (undefined1 *)0x10) {
    iVar9 = this_00->field_0076;
    local_10 = iVar9;
  }
  if (this_00->field_007A == 0) {
    iVar9 = STField<int>(this,8) + -3;
    if (iVar9 <= STField<int>(this,4)) {
      if (param_1 != 0) {
        if (STField<int>(this,4) == iVar9) {
          st::fn_00711B70(this_00,STField<uint *>(this,0x58),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x94),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -2) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x98);
          st::fn_00711B70(*(ccFntTy **)this,STField<uint *>(this,0x58),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x98),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -1) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x9c);
          st::fn_00711B70(*(ccFntTy **)this,STField<uint *>(this,0x58),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x9c),-1,-1);
        }
        *(undefined4 *)(*(int *)this + 0x82) = 0xffffffff;
      }
      goto cf_common_exit_00714ACB;
    }
    iVar9 = STField<int>(this,0x7c);
    if (-1 < iVar9) {
      STField<undefined4>(this,0x7c) = 0xffffffff;
      STField<int>(this,0x8c) = iVar9 + 1 + STField<int>(this,0x58);
    }
    bVar3 = false;
    local_18 = 0;
    iVar9 = st::fn_0070CD90(&this_00->field_0x9e,
                         (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
    if (iVar9 == 0) {
      iVar9 = STField<int>(this,0xc) + 1;
      STField<int>(this,0xc) = iVar9;
      iVar9 = st::fn_0070CDC0((byte *)(iVar9 + STField<int>(this,0x58)));
      if (iVar9 < 0) {
        iVar9 = st::fn_0070CD90((char *)(*(int *)this + 0x9e),
                             (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
        if (iVar9 == 0) {
          bVar3 = true;
        }
        else {
          local_18 = 1;
        }
      }
      else {
        STField<int>(this,0xc) = STField<int>(this,0xc) + 1;
      }
    }
    uVar7 = STField<int>(this,8) * 2 + 10;
    puVar11 = (byte *)(STField<undefined4 *>(this,0x88));
    memset(puVar11, 0, uVar7); /* compiler bulk-zero initialization */
    uVar6 = 0;
    st::fn_0072E340
              (STField<char *>(this,0x88),STField<char *>(this,0x58),
               STField<size_t>(this,0xc));
    uVar7 = 0xffffffff;
    pcVar4 = &DAT_007c8ff4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar9 = st::fn_0072E6F0
                      ((char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),
                       &DAT_007c8ff4,~uVar7 - 1);
    if (iVar9 == 0) {
      STField<undefined4>(this,0x7c) = STField<undefined4>(this,0xc);
    }
    else {
      if ((!bVar3) && (local_18 == 0)) {
        uVar7 = 0xffffffff;
        pcVar4 = (char *)(*(int *)this + 0x9e);
        do {
          pcVar13 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar4 = STField<char *>(this,0x88);
        do {
          pcVar12 = pcVar4;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar12;
        } while (cVar1 != '\0');
        pcVar4 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        memmove(pcVar13, pcVar4, uVar7); /* compiler REP MOVS byte copy */
        uVar6 = 0;
      }
      pcVar4 = st::fn_0072DE60(STField<int>(this,0x98),local_24,0x10);
      uVar7 = 0xffffffff;
      do {
        pcVar13 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar4 = STField<char *>(this,0x88);
      do {
        pcVar12 = pcVar4;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      pcVar4 = pcVar13 + -uVar7;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar4, uVar7); /* compiler REP MOVS byte copy */
      st::fn_0072ED50
                (STField<char *>(this,0x88),
                 (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      if (bVar3) {
        st::fn_0072ED50
                  (STField<char *>(this,0x88),
                   (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      }
    }
    iVar9 = -1;
    iVar10 = -1;
    switch(STField<undefined4>(this,0x74)) {
    case 0xfffffffc:
      puVar5 = st::fn_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = st::fn_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = (STField<int>(this,0x5c) + STField<int>(this,100)) / 2 - iVar9;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
    case 0xfffffff9:
      iVar10 = STField<int>(this,100);
      break;
    case 0xfffffffd:
      puVar5 = st::fn_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = st::fn_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = STField<int>(this,0x5c) - iVar9;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
      break;
    case 0xfffffffe:
      puVar5 = st::fn_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = st::fn_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = (STField<int>(this,0x5c) - iVar9) / 2;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
    }
    if (param_1 == 0) goto cf_common_exit_00714ACB;
    iVar8 = STField<int>(this,0x70);
    uVar7 = STField<uint>(this,0x94);
  }
  else {
    if (STField<int>(this,8) + -3 <= STField<int>(this,4)) {
      if (param_1 != 0) {
        st::fn_006B4170(local_c,iVar9,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                     (byte)STField<undefined4>(this,0xa0));
        if (STField<int>(this,4) == STField<int>(this,8) + -3) {
          st::fn_00711B70(*(ccFntTy **)this,STField<uint *>(this,0x90),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x94),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -2) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x98);
          st::fn_00711B70(*(ccFntTy **)this,STField<uint *>(this,0x90),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x98),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -1) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x9c);
          st::fn_00711B70(*(ccFntTy **)this,STField<uint *>(this,0x90),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x9c),-1,-1);
        }
        *(undefined4 *)(*(int *)this + 0x82) = 0xffffffff;
      }
      goto cf_common_exit_00714ACB;
    }
    if (((int)this_00->field_005C < 0) && (STField<int>(this,0x74) < -4)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = '\x01';
    }
    if (-1 < STField<int>(this,0x7c)) {
      if (this_00->field_00A0 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)this_00);
      }
      iVar10 = *(int *)(*(int *)this + 0x5c) + *(int *)&this_00->field_0x8a +
               STField<int>(this,0xa4);
      iVar9 = STField<int>(this,0x7c) + 1;
      STField<undefined4>(this,0x7c) = 0xffffffff;
      STField<int>(this,0x80) = iVar9;
      *(int *)(STField<int>(this,0xa8) + STField<int>(this,0xb0) * 4) = iVar9;
      pAVar2 = *(AnonShape_00710790_4CBB90D4 **)this;
      STField<int>(this,0xb0) = STField<int>(this,0xb0) + 1;
      STField<int>(this,0x8c) = STField<int>(this,0x80) + STField<int>(this,0x58);
      if (*(int *)(pAVar2 + 1) != 0) {
        st::fn_00710790(pAVar2);
      }
      if (pAVar2->field_008A + -1 + iVar10 < STField<int>(this,0x60)) {
        STField<int>(this,0xa4) = iVar10;
      }
      else {
        iVar9 = *(int *)(STField<int>(this,0xa8) + STField<int>(this,0xac) * 4);
        STField<int>(this,0x84) = iVar9;
        STField<int>(this,0xac) = STField<int>(this,0xac) + 1;
        STField<int>(this,0x90) = iVar9 + STField<int>(this,0x58);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_2 == '\0') {
          uVar7 = STField<int>(this,8) * 2 + 10;
          puVar11 = (byte *)(STField<undefined4 *>(this,0x88));
          memset(puVar11, 0, uVar7); /* compiler bulk-zero initialization */
          uVar6 = 0;
          st::fn_0072E340
                    (STField<char *>(this,0x88),STField<char *>(this,0x90),
                     STField<int>(this,0xc) - STField<int>(this,0x84));
          st::fn_006B4170(local_c,local_10,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                       (byte)STField<undefined4>(this,0xa0));
          if ((STField<int>(this,0x74) == -4) || (STField<int>(this,0x74) == -7)) {
            iVar9 = STField<int>(this,100);
          }
          else {
            iVar9 = -1;
          }
          st::fn_00711B70(*(ccFntTy **)this,STField<uint *>(this,0x88),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x94),-1,iVar9);
        }
      }
    }
    bVar3 = false;
    local_14 = 0;
    local_18 = 0;
    iVar9 = st::fn_0070CD90((char *)(*(int *)this + 0x9e),
                         (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
    if (iVar9 == 0) {
      iVar9 = STField<int>(this,0xc) + 1;
      STField<int>(this,0xc) = iVar9;
      iVar9 = st::fn_0070CDC0((byte *)(iVar9 + STField<int>(this,0x58)));
      if (iVar9 < 0) {
        iVar9 = st::fn_0070CD90((char *)(*(int *)this + 0x9e),
                             (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
        if (iVar9 == 0) {
          bVar3 = true;
          local_14 = 1;
        }
        else {
          local_18 = 1;
        }
      }
      else {
        STField<int>(this,0xc) = STField<int>(this,0xc) + 1;
      }
    }
    uVar7 = STField<int>(this,8) * 2 + 10;
    puVar11 = (byte *)(STField<undefined4 *>(this,0x88));
    memset(puVar11, 0, uVar7); /* compiler bulk-zero initialization */
    uVar6 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == '\x01') {
      iVar9 = STField<int>(this,0x84);
      pcVar4 = STField<char *>(this,0x90);
    }
    else {
      iVar9 = STField<int>(this,0x80);
      pcVar4 = STField<char *>(this,0x8c);
    }
    st::fn_0072E340(STField<char *>(this,0x88),pcVar4,STField<int>(this,0xc) - iVar9);
    uVar7 = 0xffffffff;
    pcVar4 = &DAT_007c8ff4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar9 = st::fn_0072E6F0
                      ((char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),
                       &DAT_007c8ff4,~uVar7 - 1);
    if (iVar9 == 0) {
      STField<undefined4>(this,0x7c) = STField<undefined4>(this,0xc);
    }
    else {
      if ((!bVar3) && (local_18 == 0)) {
        uVar7 = 0xffffffff;
        pcVar4 = (char *)(*(int *)this + 0x9e);
        do {
          pcVar13 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar4 = STField<char *>(this,0x88);
        do {
          pcVar12 = pcVar4;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar12;
        } while (cVar1 != '\0');
        pcVar4 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        memmove(pcVar13, pcVar4, uVar7); /* compiler REP MOVS byte copy */
        uVar6 = 0;
      }
      pcVar4 = st::fn_0072DE60(STField<int>(this,0x98),local_24,0x10);
      uVar7 = 0xffffffff;
      do {
        pcVar13 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar4 = STField<char *>(this,0x88);
      do {
        pcVar12 = pcVar4;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      pcVar4 = pcVar13 + -uVar7;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar4, uVar7); /* compiler REP MOVS byte copy */
      st::fn_0072ED50
                (STField<char *>(this,0x88),
                 (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      if (local_14 != 0) {
        st::fn_0072ED50
                  (STField<char *>(this,0x88),
                   (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      }
    }
    iVar9 = -1;
    local_14 = -1;
    local_18 = 0;
    switch(STField<undefined4>(this,0x74)) {
    case 0xfffffff9:
      local_14 = STField<int>(this,100);
    case 0xfffffffa:
    case 0xfffffffb:
      local_18 = 1;
      break;
    case 0xfffffffc:
      puVar5 = st::fn_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = st::fn_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = (STField<int>(this,0x5c) + STField<int>(this,100)) / 2 - iVar9;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
      local_14 = STField<int>(this,100);
      break;
    case 0xfffffffd:
      puVar5 = st::fn_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = st::fn_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = STField<int>(this,0x5c) - iVar9;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
      break;
    case 0xfffffffe:
      puVar5 = st::fn_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = st::fn_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = (STField<int>(this,0x5c) - iVar9) / 2;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
    }
    if (param_1 == 0) goto cf_common_exit_00714ACB;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == '\x01') {
      st::fn_006B4170(local_c,local_10,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                   (byte)STField<undefined4>(this,0xa0));
      st::fn_00711B70(*(ccFntTy **)this,STField<uint *>(this,0x88),STField<int>(this,0x6c),
                     STField<int>(this,0x70),STField<uint>(this,0x94),iVar9,local_14);
      goto cf_common_exit_00714ACB;
    }
    if (local_18 != 0) {
      pAVar2 = *(AnonShape_00710790_4CBB90D4 **)this;
      if (*(int *)(pAVar2 + 1) != 0) {
        st::fn_00710790(pAVar2);
      }
      st::fn_006B4170(local_c,local_10,0,STField<int>(this,0xa4),STField<int>(this,0x5c),
                   pAVar2->field_008A,(byte)STField<undefined4>(this,0xa0));
    }
    uVar7 = STField<uint>(this,0x94);
    iVar8 = STField<int>(this,0xa4);
    iVar10 = local_14;
  }
  st::fn_00711B70(*(ccFntTy **)this,STField<uint *>(this,0x88),STField<int>(this,0x6c),iVar8,
                 uVar7,iVar9,iVar10);
cf_common_exit_00714ACB:
  STField<int>(this,0xc) = STField<int>(this,0xc) + 1;
  STField<int>(this,4) = STField<int>(this,4) + 1;
  st::fn_007109F0(*(void **)this,&local_6c);
  return (int)local_c;
}

// 00714B30 FUN_00714b30
#line 4 "decomp/ST.exe/functions/00714B30/decomp.c"
undefined4 __thiscall st::fn_00714B30(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RecoveredSourceFamily_dibcopy *pRVar4;
  int iVar5;
  AnonShape_007109F0_BD33A2FF local_54;
  int local_c;
  RecoveredSourceFamily_dibcopy *local_8;

  iVar2 = param_1;
  iVar5 = 0;
  local_8 = nullptr;
  local_c = 0;
  if (((STField<int>(this,0x58) == 0) || (*(ccFntTy **)this == nullptr)) ||
     (STField<int>(this,8) <= param_1)) {
    return 0xffffffcc;
  }
  st::fn_007108B0(*(ccFntTy **)this,(undefined4 *)&local_54);
  st::fn_007109F0(*(void **)this,(AnonShape_007109F0_BD33A2FF *)((int)this + 0x10));
  STField<undefined4>(this,0x90) = STField<undefined4>(this,0x58);
  STField<undefined4>(this,0x8c) = STField<undefined4>(this,0x58);
  iVar1 = *(int *)this;
  STField<undefined4>(this,0xc) = 0;
  STField<undefined4>(this,4) = 0;
  STField<undefined4>(this,0x7c) = 0xffffffff;
  STField<undefined4>(this,0x84) = 0;
  STField<undefined4>(this,0x80) = 0;
  STField<undefined4>(this,0xb0) = 0;
  STField<undefined4>(this,0xac) = 0;
  STField<undefined4>(this,0xa4) = STField<undefined4>(this,0x70);
  pRVar4 = local_8;
  if (&stack0x00000000 != (undefined1 *)0x8) {
    pRVar4 = *(RecoveredSourceFamily_dibcopy **)(iVar1 + 0x72);
  }
  iVar3 = local_c;
  if (&stack0x00000000 != &DAT_0000000c) {
    iVar3 = *(int *)(iVar1 + 0x76);
  }
  if (*(int *)(iVar1 + 0x7a) == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    if (0 < iVar2) {
      do {
        iVar5 = st::fn_007140E0(this,0,'\0');
        if (iVar5 == 0) {
          return 0xfffffffc;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (param_1 < iVar2);
    }
  }
  else {
    st::fn_006B4170(pRVar4,iVar3,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                 (byte)STField<undefined4>(this,0xa0));
    if (0 < param_1) {
      if (0 < param_1 + -1) {
        do {
          iVar2 = st::fn_007140E0(this,0,'\0');
          if (iVar2 == 0) {
            return 0xfffffffc;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1 + -1);
      }
      iVar2 = st::fn_007140E0(this,1,'\x01');
      if (iVar2 == 0) {
        return 0xfffffffc;
      }
    }
  }
  st::fn_007109F0(*(void **)this,&local_54);
  return 0;
}

// 00714C80 FUN_00714c80
#line 4 "decomp/ST.exe/functions/00714C80/decomp.c"
undefined4 __fastcall st::fn_00714C80(int *param_1)

{
  undefined4 uVar1;
  AnonShape_007109F0_BD33A2FF local_50;

  uVar1 = 0;
  if ((param_1[0x16] != 0) && ((ccFntTy *)*param_1 != nullptr)) {
    st::fn_007108B0((ccFntTy *)*param_1,(undefined4 *)&local_50);
    st::fn_007109F0((void *)*param_1,(AnonShape_007109F0_BD33A2FF *)(param_1 + 4));
    if (&stack0x00000000 != (undefined1 *)0x8) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar1 = *(undefined4 *)(*param_1 + 0x72);
    }
    st::fn_007109F0((void *)*param_1,&local_50);
    return uVar1;
  }
  return 0;
}

// 00714DA0 FUN_00714da0
#line 4 "decomp/ST.exe/functions/00714DA0/decomp.c"
int __fastcall st::fn_00714DA0(undefined4 *param_1)

{
  int iVar1;

  if ((param_1[1] == 0) &&
     (iVar1 = st::fn_00714CE0
                        ((AnonReceiver_00714CE0 *)param_1,1), iVar1 != 0)) {
    return iVar1;
  }
  *(undefined1 *)*param_1 = 0;
  return 0;
}

// 00714DC0 FUN_00714dc0
#line 4 "decomp/ST.exe/functions/00714DC0/decomp.c"
int __thiscall st::fn_00714DC0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar6;

  if (param_1 == nullptr) {
    return -0x34;
  }
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = st::fn_00714CE0(this,~uVar3);
  if (iVar2 == 0) {
    if (*(char **)this != nullptr) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = *(char **)this;
      memmove(pcVar6, pcVar5, uVar3); /* compiler REP MOVS byte copy */
    }
    iVar2 = 0;
  }
  return iVar2;
}

// 00714E20 FUN_00714e20
#line 4 "decomp/ST.exe/functions/00714E20/decomp.c"
int __thiscall st::fn_00714E20(void *this,char *param_1,size_t param_2)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;

  if (param_1 == nullptr) {
    return -0x34;
  }
  uVar4 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  sVar2 = ~uVar4 - 1;
  if ((int)param_2 <= (int)(~uVar4 - 1)) {
    sVar2 = param_2;
  }
  iVar3 = st::fn_00714CE0
                    (this,sVar2 + 1);
  if (iVar3 == 0) {
    st::fn_0072E340(*(char **)this,param_1,param_2);
    iVar3 = 0;
  }
  return iVar3;
}

// 00714E80 FUN_00714e80
#line 4 "decomp/ST.exe/functions/00714E80/decomp.c"
int __thiscall st::fn_00714E80(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;

  if (param_1 == nullptr) {
    return -0x34;
  }
  if (*(char **)this == nullptr) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar6 = *(char **)this;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
  }
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar2 = st::fn_00714CE0
                    (this,~uVar4 + uVar3);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
    do {
      pcVar6 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar8 = *(char **)this;
    do {
      pcVar7 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -uVar3;
    pcVar8 = pcVar7 + -1;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  }
  return iVar2;
}

// 00714F00 FUN_00714f00
#line 4 "decomp/ST.exe/functions/00714F00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00714F00 -> 0072ED50 @ 00714F5B */

int __thiscall st::fn_00714F00(void *this,char *source,size_t param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;

  if (source == nullptr) {
    return -0x34;
  }
  uVar3 = 0xffffffff;
  pcVar5 = source;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  sVar4 = ~uVar3 - 1;
  if ((int)param_2 <= (int)(~uVar3 - 1)) {
    sVar4 = param_2;
  }
  if (*(char **)this == nullptr) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar5 = *(char **)this;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
  }
  iVar2 = st::fn_00714CE0
                    (this,uVar3 + 1 + sVar4);
  if (iVar2 == 0) {
    st::fn_0072ED50(*(char **)this,source,param_2);
    iVar2 = 0;
  }
  return iVar2;
}

// 00714F70 FUN_00714f70
#line 4 "decomp/ST.exe/functions/00714F70/decomp.c"
int __thiscall st::fn_00714F70(void *this,char *param_1)

{
  char cVar1;
  int iVar2;

  if ((param_1 != nullptr) && (*param_1 != '\0')) {
    cVar1 = param_1[1];
    param_1[1] = '\0';
    iVar2 = st::fn_00714E80(this,param_1);
    param_1[1] = cVar1;
    return iVar2;
  }
  return -0x34;
}

// 00714FB0 FUN_00714fb0
#line 4 "decomp/ST.exe/functions/00714FB0/decomp.c"
undefined4 __thiscall st::fn_00714FB0(void *this,int param_1,uint *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;

  bVar2 = false;
  if (param_1 != 0) {
    STField<int>(this,8) = param_1;
  }
  puVar6 = STField<uint *>(this,8);
  cVar1 = (char)*puVar6;
  do {
    if (cVar1 == '\0') {
LAB_00715017:
      if (puVar6 != STField<uint *>(this,8)) {
        uVar3 = *puVar6;
        *(undefined1 *)puVar6 = 0;
        st::fn_00714DC0(this,STField<char *>(this,8));
        *(char *)puVar6 = (char)uVar3;
        STField<uint *>(this,8) = puVar6;
        return *(undefined4 *)this;
      }
      return 0;
    }
    if (bVar2) {
      bVar2 = false;
      iVar4 = st::fn_0070CDC0((byte *)puVar6);
      if (iVar4 < 0) {
LAB_00714fdf:
        puVar5 = st::fn_0070CE00(param_2,(char *)puVar6);
        if (puVar5 != nullptr) {
          puVar6 = (uint *)((int)puVar6 + 1);
          goto LAB_00715017;
        }
      }
    }
    else {
      if ((param_3 == nullptr) || (iVar4 = st::fn_0070CD90(param_3,puVar6), iVar4 != 0))
      goto LAB_00714fdf;
      bVar2 = true;
    }
    cVar1 = STField<char>(puVar6,1);
    puVar6 = (uint *)((int)puVar6 + 1);
  } while( true );
}

// 00715360 FUN_00715360
#line 4 "decomp/ST.exe/functions/00715360/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00521CF0 -> 00715360 @ 00522425 | 00521CF0 -> 00715360 @ 005224DC | 0054D640 ->
   00715360 @ 0054D6E4 | 0054D640 -> 00715360 @ 0054DABF | 0054D640 -> 00715360 @ 0054DEFA |
   0054E4F0 -> 00715360 @ 0054E5AD | 0054EBB0 -> 00715360 @ 0054EBEC | 0054EC20 -> 00715360 @
   0054ED22 | 0054F1D0 -> 00715360 @ 0054F7C9 | 0054F1D0 -> 00715360 @ 0054F84E | 0054F1D0 ->
   00715360 @ 0054FA3D | 0054F1D0 -> 00715360 @ 0054FA89 | 005505D0 -> 00715360 @ 00550616 |
   005505D0 -> 00715360 @ 00550794 | 00550BB0 -> 00715360 @ 00550C0F | 0056A500 -> 00715360 @
   0056A55F | 0056A500 -> 00715360 @ 0056A582 | 005ACB30 -> 00715360 @ 005ACB95 | 005AD390 ->
   00715360 @ 005ADB64 | 005B0BA0 -> 00715360 @ 005B2007 | 005BAE00 -> 00715360 @ 005BB1CA |
   005C7800 -> 00715360 @ 005C7BE7 | 005C7800 -> 00715360 @ 005C7C04 | 005CD9A0 -> 00715360 @
   005CDA56 | 005CDB20 -> 00715360 @ 005CDC9D | 005CDB20 -> 00715360 @ 005CDDF5 | 005CDF60 ->
   00715360 @ 005CE02D | 005CE0E0 -> 00715360 @ 005CE2AA | 005CE0E0 -> 00715360 @ 005CE519 |
   005CE0E0 -> 00715360 @ 005CE5AA | 005CE0E0 -> 00715360 @ 005CEAB5 | 005CE0E0 -> 00715360 @
   005CEB25 | 005CE0E0 -> 00715360 @ 005CEBC7 | 005CE0E0 -> 00715360 @ 005CEBDF | 005CE0E0 ->
   00715360 @ 005CEC46 | 005CE0E0 -> 00715360 @ 005CECAE | 005CE0E0 -> 00715360 @ 005CF57F |
   005CFE50 -> 00715360 @ 005CFEAD | 005D1400 -> 00715360 @ 005D1694 | 005D1400 -> 00715360 @
   005D2160 | 005D1400 -> 00715360 @ 005D25BA | 005D1400 -> 00715360 @ 005D2743 | 005D1400 ->
   00715360 @ 005D28BA | 005DAF20 -> 00715360 @ 005DAF6D | 005DAF20 -> 00715360 @ 005DAF91 |
   005E84D0 -> 00715360 @ 005E8AA1 | 005E84D0 -> 00715360 @ 005E8E96 | 005E84D0 -> 00715360 @
   005E9367 | 005EA680 -> 00715360 @ 005EAB1B */

int __cdecl
st::fn_00715360(int *param_1,int param_2,char param_3,char *param_4,uint param_5,int param_6,
            undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  InternalExceptionFrame local_6c;
  char local_28;
  undefined4 local_27;
  char local_23 [23];
  uint local_c;
  AnonShape_00715360_91615618 *local_8;

  local_8 = nullptr;
  if (param_1 == nullptr) {
    return 0;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar1 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
    }
    return iVar1;
  }
  if (((int)param_5 < 0x16) || (param_4 == nullptr)) {
    local_28 = param_3;
    local_27 = param_7;
    if ((0 < (int)param_5) && (param_4 != nullptr)) {
      pcVar5 = local_23;
      memmove(pcVar5, param_4, param_5); /* compiler REP MOVS byte copy */
      param_4 = (char *)((byte *)param_4 + param_5);
    }
    st::fn_006B7650(param_1,param_2,&local_28,param_5 + 5);
  }
  else {
    if (param_6 == 0) {
      uVar2 = param_5 + 5;
      local_c = uVar2;
      local_8 = st::fn_006AAC10(uVar2);
      *(char *)local_8 = param_3;
      local_8->field_0001 = param_7;
      if (0 < (int)param_5) {
        puVar4 = &local_8->field_0005;
        for (uVar2 = param_5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *(uint *)param_4;
          param_4 = (char *)((int)param_4 + 4);
          puVar4 = puVar4 + 1;
        }
        for (uVar3 = param_5 & 3; uVar2 = local_c, uVar3 != 0; uVar3 = uVar3 - 1) {
          *(char *)puVar4 = (char)*(uint *)param_4;
          param_4 = (char *)((int)param_4 + 1);
          puVar4 = (uint *)((int)puVar4 + 1);
        }
      }
    }
    else {
      local_8 = st::fn_006AAC10(param_5 * 2 + 9);
      *(char *)local_8 = param_3 + -0x80;
      local_8->field_0001 = param_7;
      local_8->field_0005 = param_5;
      iVar1 = st::fn_00751140(param_4,param_5,&local_8->field_0x9,param_5 * 2);
      uVar2 = iVar1 + 9;
    }
    st::fn_006B7650(param_1,param_2,local_8,uVar2);
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

// 00716820 FUN_00716820
#line 4 "decomp/ST.exe/functions/00716820/decomp.c"
int * __cdecl st::fn_00716820(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;

  if (((param_1 != nullptr) && (param_3 < param_2)) && (-1 < param_3)) {
    iVar2 = param_3 + 1;
    do {
      piVar1 = param_1 + 1;
      param_1 = (int *)(*param_1 + (int)piVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return piVar1;
  }
  return nullptr;
}

// 00716DB0 FUN_00716db0
#line 4 "decomp/ST.exe/functions/00716DB0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_00716DB0(int *param_1)

{
  int *piVar1;
  int iVar2;

  piVar1 = (int *)*param_1;
  if (piVar1 != nullptr) {
    if (STField<uint *>(piVar1,0x21) != nullptr) {
      if ((char)piVar1[2] == '\x1d') {
        st::fn_006F20E0((cMf32 *)piVar1[1],STField<uint *>(piVar1,0x21));
      }
      else {
        iVar2 = 0;
        if (0 < *piVar1) {
          do {
            st::fn_006F20E0((cMf32 *)piVar1[1],(uint *)(STField<int>(piVar1,0x21) + iVar2 * 4));
            piVar1 = (int *)*param_1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *piVar1);
        }
      }
      st::fn_006AB060((void **)(*param_1 + 0x21));
    }
    piVar1 = (int *)*param_1;
    if (STField<int>(piVar1,0x29) != 0) {
      if ((char)piVar1[2] == '\x1d') {
        st::fn_006F20E0((cMf32 *)piVar1[1],(uint *)((int)piVar1 + 0x25));
      }
      else {
        iVar2 = 0;
        if (0 < *piVar1) {
          do {
            st::fn_006F20E0((cMf32 *)piVar1[1],(uint *)(STField<int>(piVar1,0x29) + iVar2 * 4));
            piVar1 = (int *)*param_1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *piVar1);
        }
      }
      st::fn_006AB060((void **)(*param_1 + 0x29));
    }
    st::fn_006AB060((void **)param_1);
  }
  return;
}

// 00717380 FUN_00717380
#line 4 "decomp/ST.exe/functions/00717380/decomp.c"
void __fastcall st::fn_00717380(AnonShape_00717380_FEFD061B *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *local_8;

  if (param_1->field_0466 != 0) {
    iVar8 = 10000;
    iVar9 = *(int *)param_1->field_04D6;
    param_1->field_04DE = 0;
    iVar6 = 0;
    if (0 < param_1->field_04CE) {
      local_8 = (int *)param_1->field_04D6;
      do {
        uVar1 = (param_1->field_02F0 * iVar9) / 100 - *local_8;
        uVar7 = (int)uVar1 >> 0x1f;
        iVar2 = (uVar1 ^ uVar7) - uVar7;
        if (iVar2 < iVar8) {
          param_1->field_04DE = iVar6;
          iVar8 = iVar2;
        }
        iVar6 = iVar6 + 1;
        local_8 = local_8 + 1;
      } while (iVar6 < param_1->field_04CE);
    }
    iVar8 = param_1->field_04DE * 4;
    iVar9 = *(int *)(iVar8 + param_1->field_04D6);
    if ((param_1->field_04E2 != iVar9) ||
       (param_1->field_04E6 != *(int *)(param_1->field_04DA + iVar8))) {
      param_1->field_04E2 = iVar9;
      iVar9 = 0;
      param_1->field_04E6 = *(undefined4 *)(param_1->field_04DA + iVar8);
      do {
        st::fn_006AB060((void **)(iVar9 + param_1->field_0472));
        iVar9 = iVar9 + 4;
      } while (iVar9 < 0x140);
      iVar9 = param_1->field_04D2;
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          uVar3 = st::fn_007175D0(*(byte **)(param_1->field_04CA +
                                         (param_1->field_04DE * iVar9 + iVar8) * 4),
                               param_1->field_04E2,param_1->field_04E6,0x18);
          iVar8 = iVar8 + 1;
          *(undefined4 *)(param_1->field_0472 + -4 + iVar8 * 4) = uVar3;
          iVar9 = param_1->field_04D2;
        } while (iVar8 < iVar9);
      }
      iVar9 = param_1->field_04D2;
      iVar8 = 0;
      if (0 < iVar9) {
        iVar6 = 0x40;
        do {
          pbVar4 = st::fn_00717620(*(byte **)(param_1->field_04CA +
                                          (param_1->field_04DE * iVar9 + iVar8) * 4),
                                param_1->field_04E2,param_1->field_04E6,0x18,0x10);
          iVar8 = iVar8 + 1;
          *(byte **)(iVar6 + param_1->field_0472) = pbVar4;
          iVar9 = param_1->field_04D2;
          iVar6 = iVar6 + 4;
        } while (iVar8 < iVar9);
      }
      iVar9 = param_1->field_04D2;
      iVar8 = 0;
      if (0 < iVar9) {
        iVar6 = 0x80;
        do {
          uVar3 = st::fn_007175D0(*(byte **)(param_1->field_04C6 +
                                         (param_1->field_04DE * iVar9 + iVar8) * 4),
                               param_1->field_04E2,param_1->field_04E6,0x10);
          iVar8 = iVar8 + 1;
          *(undefined4 *)(iVar6 + param_1->field_0472) = uVar3;
          iVar9 = param_1->field_04D2;
          iVar6 = iVar6 + 4;
        } while (iVar8 < iVar9);
      }
      pbVar4 = &DAT_007f0554;
      iVar9 = 0xc0;
      do {
        iVar8 = param_1->field_04DE * param_1->field_04D2;
        pbVar5 = st::fn_00717680(*(int *)(param_1->field_04CA + ((uint)*pbVar4 + iVar8) * 4),
                              *(byte **)(param_1->field_04C6 + ((uint)pbVar4[1] + iVar8) * 4),
                              param_1->field_04E2,param_1->field_04E6,0x18,0x10);
        iVar8 = iVar9 + 4;
        pbVar4 = pbVar4 + 2;
        *(byte **)(iVar9 + param_1->field_0472) = pbVar5;
        iVar9 = iVar8;
      } while (iVar8 < 0x140);
    }
  }
  return;
}

// 007175D0 FUN_007175d0
#line 4 "decomp/ST.exe/functions/007175D0/decomp.c"
void st::fn_007175D0(byte *param_1,int param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  uint size;
  byte *pbVar3;

  size = param_2 * param_3;
  pbVar1 = st::fn_006AAC70(size);
  pbVar3 = pbVar1;
  memmove(pbVar3, param_1, size); /* compiler REP MOVS byte copy */
  if (-1 < (int)(size - 1)) {
    do {
      if (param_4 < *pbVar1) {
        *pbVar1 = param_4;
      }
      pbVar1 = pbVar1 + 1;
      size = size - 1;
    } while (size != 0);
  }
  return;
}

// 00717620 FUN_00717620
#line 4 "decomp/ST.exe/functions/00717620/decomp.c"
byte * st::fn_00717620(byte *param_1,int param_2,int param_3,byte param_4,byte param_5)

{
  byte *pbVar1;
  byte *pbVar3;
  uint size;

  size = param_2 * param_3;
  pbVar1 = st::fn_006AAC70(size);
  pbVar3 = pbVar1;
  memmove(pbVar3, param_1, size); /* compiler REP MOVS byte copy */
  pbVar3 = pbVar1;
  if (-1 < (int)(size - 1)) {
    do {
      if (*pbVar3 < param_5) {
        *pbVar3 = param_5;
      }
      else if (param_4 < *pbVar3) {
        *pbVar3 = param_4;
      }
      size = size - 1;
      pbVar3 = pbVar3 + 1;
    } while (size != 0);
  }
  return pbVar1;
}

// 00717680 FUN_00717680
#line 4 "decomp/ST.exe/functions/00717680/decomp.c"
byte * st::fn_00717680(int param_1,byte *param_2,int param_3,int param_4,byte param_5,byte param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar4;
  byte bVar5;
  uint size;

  size = param_3 * param_4;
  pbVar2 = st::fn_006AAC70(size);
  pbVar4 = pbVar2;
  memmove(pbVar4, param_2, size); /* compiler REP MOVS byte copy */
  if (-1 < (int)(size - 1)) {
    pbVar4 = pbVar2;
    do {
      bVar1 = pbVar4[param_1 - (int)pbVar2];
      if (param_5 < bVar1) {
        *pbVar4 = param_5;
      }
      else {
        bVar5 = *pbVar4;
        if (param_6 < *pbVar4) {
          *pbVar4 = param_6;
          bVar5 = param_6;
        }
        if (bVar5 < bVar1) {
          *pbVar4 = bVar1;
        }
      }
      pbVar4 = pbVar4 + 1;
      size = size - 1;
    } while (size != 0);
  }
  return pbVar2;
}

// 00717910 FUN_00717910
#line 4 "decomp/ST.exe/functions/00717910/decomp.c"
void __thiscall
st::fn_00717910(void *this,byte *param_1,int param_2,int param_3,byte *param_4,int param_5,uint param_6
            ,uint param_7,uint param_8)

{
  if (*(int **)this != nullptr) {
    st::fn_006B5F80(*(int **)this,STField<int>(this,0x20) + param_2,
                 STField<int>(this,0x24) + param_3,param_7,param_8);
  }
  st::fn_006D2820(param_1,STField<RecoveredSourceFamily_dibcopy *>(this,0x28),param_4,param_5,param_6
               ,param_7,param_8,0,nullptr,0,0,nullptr);
  return;
}

// 00717970 FUN_00717970
#line 4 "decomp/ST.exe/functions/00717970/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target field_00A8 uses
   /SubmarineTitans/Recovered/Enums/ST3DSMAPContext_field_00A8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __fastcall st::fn_00717970(ST3DSMAPContext *param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_02;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar10;
  char *pcVar11;
  void *pvVar12;
  int iVar13;
  byte *puVar14;
  longlong lVar15;
  int local_5c;
  double local_44;
  int local_30;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  float local_c;
  float local_8;

  if ((param_1->field_04BA == 0) || (param_1->field_04A2 == 0)) {
switchD_007179c7_default:
    return 0;
  }
  st::fn_006E1C20
            (param_1,(float)param_1->field_0030,param_1->field_0034,
             (float)((float10)param_1->field_00D0 + (float10)param_1->field_00D0),&local_8,&local_c);
  switch(param_1->field_00A8) {
  case CASE_0:
    local_44 = (double)((param_1->field_04B2 * 10) / 2) +
               ((double)local_8 - (double)local_c) * _DAT_0079df60;
    dVar4 = (param_1->field_00C8 * _DAT_0079e248 + (double)local_8 + (double)local_c) *
            _DAT_0079df60 - _DAT_0079e240;
    goto LAB_00717b22;
  case CASE_1:
    iVar5 = param_1->field_04B6;
    local_44 = (param_1->field_00C8 * _DAT_0079e248 + (double)local_8 + (double)local_c) *
               _DAT_0079df60 - _DAT_0079e240;
    dVar4 = (double)local_c - (double)local_8;
    break;
  case CASE_2:
    local_44 = (double)((param_1->field_04B2 * 10) / 2) +
               ((double)local_c - (double)local_8) * _DAT_0079df60;
    dVar4 = (double)(param_1->field_04B6 * 10 + -10) +
            ((-(double)local_8 - (double)local_c) - param_1->field_00C8 * _DAT_0079e248) *
            _DAT_0079df60 + _DAT_0079e240;
    goto LAB_00717b22;
  case CASE_3:
    iVar5 = param_1->field_04B6;
    local_44 = (double)(param_1->field_04B2 * 10 + -10) +
               ((-(double)local_8 - (double)local_c) - param_1->field_00C8 * _DAT_0079e248) *
               _DAT_0079df60 + _DAT_0079e240;
    dVar4 = (double)local_8 - (double)local_c;
    break;
  default:
    goto switchD_007179c7_default;
  }
  dVar4 = (double)((iVar5 * 10) / 2) + dVar4 * _DAT_0079df60;
LAB_00717b22:
  if (local_44 < _DAT_0079d670) {
    lVar15 = st::fn_0072E288();
    param_1->field_047E = (int)lVar15;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_0073459A(extraout_ECX_00);
  }
  else {
    lVar15 = st::fn_0072E288();
    param_1->field_047E = (int)lVar15;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_0073459A(extraout_ECX);
  }
  lVar15 = st::fn_0072E288();
  iVar5 = (int)lVar15;
  dVar4 = dVar4 * _DAT_0079df60;
  param_1->field_0476 = iVar5;
  if (dVar4 < _DAT_0079d670) {
    lVar15 = st::fn_0072E288();
    param_1->field_0482 = (int)lVar15;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_0073459A(extraout_ECX_02);
  }
  else {
    lVar15 = st::fn_0072E288();
    param_1->field_0482 = (int)lVar15;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_0073459A(extraout_ECX_01);
  }
  lVar15 = st::fn_0072E288();
  iVar7 = (int)lVar15;
  iVar6 = param_1->field_0030;
  param_1->field_047A = iVar7;
  iVar3 = param_1->field_04E6;
  param_1->field_048E = iVar6;
  iVar10 = param_1->field_0034;
  param_1->field_0492 = iVar10;
  if (param_1->field_047E < 0) {
    param_1->field_0476 = 0;
    param_1->field_048E = (iVar6 - param_1->field_047E * param_1->field_04E2) + iVar5;
    param_1->field_047E = 0;
  }
  local_1c = param_1->field_04B2;
  iVar5 = param_1->field_047E +
          (((param_1->field_04E2 - iVar6) - iVar5) + -1 + param_1->field_0038) / param_1->field_04E2
  ;
  param_1->field_0486 = iVar5;
  if (local_1c < iVar5) {
    param_1->field_0486 = local_1c;
  }
  if (param_1->field_0482 < 0) {
    param_1->field_047A = 0;
    param_1->field_0492 = (iVar10 - param_1->field_0482 * iVar3) + iVar7;
    param_1->field_0482 = 0;
  }
  local_30 = param_1->field_0482;
  iVar5 = (((iVar3 - iVar10) - iVar7) + -1 + param_1->field_003C) / iVar3 + local_30;
  param_1->field_048A = iVar5;
  if ((int)param_1->field_04B6 < iVar5) {
    param_1->field_048A = param_1->field_04B6;
  }
  local_1c = local_30 * local_1c;
  iVar5 = local_30 * param_1->field_04BE + param_1->field_04BA;
  pvVar12 = (void *)((int)param_1->field_0018 + local_1c);
  iVar6 = (&param_1->field_04A2)[param_1->field_00A8] + local_1c;
  local_10 = param_1->field_0492 + param_1->field_047A;
  if (local_30 < param_1->field_048A) {
    do {
      local_14 = param_1->field_0476 + param_1->field_048E;
      local_20 = param_1->field_047E;
      if (local_20 < (int)param_1->field_0486) {
        pcVar11 = (char *)(local_20 + (int)pvVar12);
        do {
          pbVar1 = (byte *)(pcVar11 + (iVar6 - (int)pvVar12));
          if ((*(byte *)((int)param_1->field_046E +
                        ((int)((uint)(pbVar1 + (local_1c - iVar6)) ^ 7) >> 3)) >>
               (((uint)(pbVar1 + (local_1c - iVar6)) ^ 7) & 7) & 1) != 0) {
            cVar2 = (&DAT_007f0594)[(uint)*pbVar1 * 0x10 + (uint)pbVar1[iVar5 - iVar6]];
            if ((param_1->field_02D8 == 0) && (cVar2 != *pcVar11)) {
              *pcVar11 = cVar2;
              iVar3 = param_1->field_0030;
              iVar10 = param_1->field_04E2;
              iVar7 = param_1->field_04E6;
              local_5c = local_14;
              if (local_14 < iVar3) {
                iVar10 = (iVar10 - iVar3) + local_14;
                local_5c = iVar3;
              }
              if (param_1->field_0038 < local_5c + iVar10) {
                iVar10 = param_1->field_0038 - local_5c;
              }
              iVar3 = param_1->field_0034;
              iVar13 = local_10;
              if (local_10 < iVar3) {
                iVar7 = (iVar7 - iVar3) + local_10;
                iVar13 = iVar3;
              }
              if (param_1->field_003C < iVar7 + iVar13) {
                iVar7 = param_1->field_003C - iVar13;
              }
              if ((0 < iVar10) && (0 < iVar7)) {
                st::fn_006B5F80(param_1->field_0000,param_1->field_0020 + local_5c,
                             param_1->field_0024 + iVar13,iVar10,iVar7);
              }
            }
            else {
              *pcVar11 = cVar2;
            }
          }
          local_14 = local_14 + param_1->field_04E2;
          local_20 = local_20 + 1;
          pcVar11 = pcVar11 + 1;
        } while (local_20 < (int)param_1->field_0486);
      }
      iVar3 = param_1->field_04B2;
      iVar5 = iVar5 + param_1->field_04BE;
      local_1c = local_1c + iVar3;
      pvVar12 = (void *)((int)pvVar12 + iVar3);
      iVar6 = iVar6 + iVar3;
      local_10 = local_10 + param_1->field_04E6;
      local_30 = local_30 + 1;
    } while (local_30 < param_1->field_048A);
  }
  iVar5 = param_1->field_048E;
  iVar6 = param_1->field_0476 + (param_1->field_0486 - param_1->field_047E) * param_1->field_04E2;
  param_1->field_0496 = iVar6;
  if (param_1->field_0038 < iVar6 + iVar5) {
    param_1->field_0496 = param_1->field_0038 - iVar5;
  }
  iVar6 = (param_1->field_048A - param_1->field_0482) * param_1->field_04E6 + param_1->field_047A;
  iVar3 = param_1->field_0492;
  param_1->field_049A = iVar6;
  if (param_1->field_003C < iVar6 + iVar3) {
    param_1->field_049A = param_1->field_003C - iVar3;
  }
  iVar6 = param_1->field_04C2 * param_1->field_04BE + 7;
  param_1->field_0492 = param_1->field_0024 + iVar3;
  param_1->field_048E = param_1->field_0020 + iVar5;
  uVar8 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
  puVar14 = (byte *)(param_1->field_046E);
  memset(puVar14, 0, uVar8); /* compiler bulk-zero initialization */
  param_1->field_046A = 0;
  return 0;
}

// 00718130 FUN_00718130
#line 4 "decomp/ST.exe/functions/00718130/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_00718130(byte *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar3 = (float)*param_1 * _DAT_0079e25c;
  fVar4 = (float)param_1[1] * _DAT_0079e25c;
  fVar5 = (float)param_1[2] * _DAT_0079e25c;
  fVar2 = fVar5;
  if (fVar5 < fVar4) {
    fVar2 = fVar4;
  }
  fVar6 = fVar3;
  if ((fVar3 <= fVar2) && (fVar6 = fVar5, fVar5 < fVar4)) {
    fVar6 = fVar4;
  }
  fVar2 = fVar5;
  if (fVar4 < fVar5) {
    fVar2 = fVar4;
  }
  fVar8 = fVar3;
  if ((fVar2 <= fVar3) && (fVar8 = fVar5, fVar4 < fVar5)) {
    fVar8 = fVar4;
  }
  fVar2 = (fVar8 + fVar6) * _DAT_00790784;
  param_2[1] = fVar2;
  if (fVar6 == fVar8) {
    param_2[2] = 0.0;
    *param_2 = 999.0;
    return;
  }
  fVar7 = fVar6 - fVar8;
  if ((float)_DAT_007901c0 < fVar2) {
    param_2[2] = fVar7 / ((_DAT_0079e258 - fVar6) - fVar8);
  }
  else {
    param_2[2] = fVar7 / (fVar8 + fVar6);
  }
  fVar8 = (fVar6 - fVar3) / fVar7;
  fVar2 = (fVar6 - fVar4) / fVar7;
  fVar7 = (fVar6 - fVar5) / fVar7;
  if (fVar3 == fVar6) {
    fVar7 = fVar7 - fVar2;
  }
  else if (fVar4 == fVar6) {
    fVar7 = (fVar8 + _DAT_0079e258) - fVar7;
  }
  else {
    if (fVar5 != fVar6) goto LAB_007182c7;
    fVar7 = (fVar2 + _DAT_0079d074) - fVar8;
  }
  *param_2 = fVar7;
LAB_007182c7:
  fVar2 = *param_2 * _DAT_0079e254;
  bVar1 = _DAT_0079034c <= fVar2;
  *param_2 = fVar2;
  if (bVar1) {
    return;
  }
  *param_2 = fVar2 + _DAT_0079e250;
  return;
}

// 007182F0 FUN_007182f0
#line 4 "decomp/ST.exe/functions/007182F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl st::fn_007182F0(float param_1,float param_2,float param_3)

{
  float10 fVar1;

  if (param_1 < _DAT_0079034c) {
    param_1 = param_1 + _DAT_0079e250;
  }
  if (_DAT_0079e250 < param_1) {
    param_1 = param_1 - _DAT_0079e250;
  }
  if (_DAT_0079e254 <= param_1) {
    if (param_1 < _DAT_0079e264) {
      fVar1 = (float10)param_3;
      goto LAB_00718362;
    }
LAB_00718374:
    if (_DAT_0079e260 <= param_1) goto LAB_007183b0;
    fVar1 = ((float10)_DAT_0079e260 - (float10)param_1) * ((float10)param_3 - (float10)param_2) *
            (float10)_DAT_0079e268 + (float10)param_2;
  }
  else {
    fVar1 = ((float10)param_3 - (float10)param_2) * (float10)param_1 * (float10)_DAT_0079e268 +
            (float10)param_2;
LAB_00718362:
    if (_DAT_0079e264 <= param_1) goto LAB_00718374;
  }
  if (param_1 < _DAT_0079e260) {
    return fVar1;
  }
LAB_007183b0:
  return (float10)param_2;
}

// 007183C0 FUN_007183c0
#line 4 "decomp/ST.exe/functions/007183C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __fastcall
st::fn_007183C0(undefined4 param_1,undefined4 param_2,float *param_3,undefined1 *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;

  if ((float)_DAT_007901c0 <= param_3[1]) {
    fVar2 = (param_3[2] + param_3[1]) - param_3[2] * param_3[1];
  }
  else {
    fVar2 = (param_3[2] + _DAT_0079dfd0) * param_3[1];
  }
  fVar1 = (param_3[1] + param_3[1]) - fVar2;
  if (param_3[2] == _DAT_0079034c) {
    if (*param_3 != 999.0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return CONCAT44(param_2,0xfffffffb);
    }
  }
  else {
    st::fn_007182F0(*param_3 + _DAT_0079e270,fVar1,fVar2);
    st::fn_007182F0(*param_3,fVar1,fVar2);
    st::fn_007182F0(*param_3 - _DAT_0079e270,fVar1,fVar2);
  }
  lVar3 = st::fn_0072E288();
  *param_4 = (char)lVar3;
  lVar3 = st::fn_0072E288();
  param_4[1] = (char)lVar3;
  uVar4 = st::fn_0072E288();
  param_4[2] = (char)uVar4;
  return uVar4 & 0xffffffff00000000;
}

// 007184B0 FUN_007184b0
#line 4 "decomp/ST.exe/functions/007184B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_007184B0(float *param_1,float *param_2)

{
  float10 fVar1;

  *param_2 = param_1[1];
  if (*param_1 == 999.0) {
    param_2[2] = 0.0;
    param_2[1] = 0.0;
    return;
  }
  fVar1 = (float10)fcos((float10)*param_1 * (float10)_DAT_0079e278);
  param_2[1] = (float)(fVar1 * (float10)param_1[2]);
  fVar1 = (float10)fsin((float10)*param_1 * (float10)_DAT_0079e278);
  param_2[2] = (float)(fVar1 * (float10)param_1[2]);
  return;
}

// 007193F0 FUN_007193f0
#line 1 "decomp/ST.exe/functions/007193F0/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_007193F0(void)

{
  DAT_007f07c4 = 0;
  return;
}

// 00719410 FUN_00719410
#line 4 "decomp/ST.exe/functions/00719410/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00719410_param_2Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __cdecl
st::fn_00719410(undefined4 param_1,Global_sub_00719410_param_2Enum param_2,undefined4 param_3)

{
  MCIERROR mcierr;
  DWORD_PTR dwParam1;
  undefined4 local_18;
  MCIDEVICEID local_14;
  char *local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_18 = 0;
  dwParam1 = 0;
  local_14 = 0;
  local_10 = nullptr;
  local_c = 0;
  local_8 = 0;
  switch(param_2) {
  case CASE_0:
    local_10 = "sequencer";
    break;
  case CASE_1:
    local_10 = "waveaudio";
    break;
  case CASE_2:
    local_10 = "avivideo";
    break;
  case CASE_3:
    local_10 = "cdaudio";
    local_c = param_3;
  }
  if (param_2 < CASE_3) {
    local_c = param_1;
    dwParam1 = 0x2202;
  }
  else if (param_2 == CASE_3) {
    dwParam1 = 0x2300;
  }
  mcierr = st::external_000000D3(0,0x803,dwParam1,(DWORD_PTR)&local_18);
  if (mcierr == 0) {
    return local_14;
  }
  st::fn_00719C90(mcierr,&local_14);
  return 0;
}

// 007194D0 FUN_007194d0
#line 4 "decomp/ST.exe/functions/007194D0/decomp.c"
undefined4 __cdecl st::fn_007194D0(undefined4 param_1,MCIDEVICEID *param_2)

{
  MCIERROR MVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_2 == 0) {
    return 1;
  }
  MVar1 = st::external_000000D3(*param_2,0x807,0x102,0);
  if (MVar1 != 0) {
    st::fn_00719C90(MVar1,param_2);
    return 1;
  }
  local_c = 0;
  local_8 = 0;
  local_10 = param_1;
  MVar1 = st::external_000000D3(*param_2,0x806,1,(DWORD_PTR)&local_10);
  if (MVar1 != 0) {
    st::fn_00719C90(MVar1,param_2);
    return 1;
  }
  return 0;
}

// 00719560 FUN_00719560
#line 4 "decomp/ST.exe/functions/00719560/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00719560 -> EXTERNAL:000000D3 @ 00719588 */

undefined4 __cdecl st::fn_00719560(DWORD_PTR dwParam2)

{
  MCIDEVICEID mciId;
  DWORD_PTR DVar1;
  MCIERROR mcierr;

  DVar1 = dwParam2;
  mciId = *(MCIDEVICEID *)dwParam2;
  if (mciId == 0) {
    return 1;
  }
  dwParam2 = 0;
  mcierr = st::external_000000D3(mciId,0x808,2,(DWORD_PTR)&dwParam2);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,(MCIDEVICEID *)DVar1);
    return 1;
  }
  return 0;
}

// 007195B0 FUN_007195b0
#line 4 "decomp/ST.exe/functions/007195B0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 007195B0 -> EXTERNAL:000000D3 @ 007195D8 */

undefined4 __cdecl st::fn_007195B0(DWORD_PTR dwParam2)

{
  MCIDEVICEID mciId;
  DWORD_PTR DVar1;
  MCIERROR mcierr;

  DVar1 = dwParam2;
  mciId = *(MCIDEVICEID *)dwParam2;
  if (mciId == 0) {
    return 1;
  }
  dwParam2 = 0;
  mcierr = st::external_000000D3(mciId,0x855,2,(DWORD_PTR)&dwParam2);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,(MCIDEVICEID *)DVar1);
    return 1;
  }
  return 0;
}

// 00719600 FUN_00719600
#line 4 "decomp/ST.exe/functions/00719600/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00719600 -> EXTERNAL:000000D3 @ 00719628 */

undefined4 __cdecl st::fn_00719600(DWORD_PTR dwParam2)

{
  MCIDEVICEID mciId;
  DWORD_PTR DVar1;
  MCIERROR mcierr;

  DVar1 = dwParam2;
  mciId = *(MCIDEVICEID *)dwParam2;
  if (mciId == 0) {
    return 1;
  }
  dwParam2 = 0;
  mcierr = st::external_000000D3(mciId,0x809,2,(DWORD_PTR)&dwParam2);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,(MCIDEVICEID *)DVar1);
    return 1;
  }
  return 0;
}

// 00719650 FUN_00719650
#line 4 "decomp/ST.exe/functions/00719650/decomp.c"
bool __cdecl st::fn_00719650(MCIDEVICEID *param_1)

{
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_1 == 0) {
    return false;
  }
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_c = 4;
  st::external_000000D3(*param_1,0x814,0x102,(DWORD_PTR)&local_14);
  return local_10 == 0x20e;
}

// 007196A0 FUN_007196a0
#line 4 "decomp/ST.exe/functions/007196A0/decomp.c"
undefined4 __cdecl st::fn_007196A0(undefined4 param_1,MCIDEVICEID *param_2)

{
  MCIERROR mcierr;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_2 == 0) {
    return 1;
  }
  local_14 = 0;
  local_10 = param_1;
  local_c = 0;
  local_8 = 0;
  mcierr = st::external_000000D3(*param_2,0x841,0x10000,(DWORD_PTR)&local_14);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,param_2);
    return 1;
  }
  return 0;
}

// 00719710 FUN_00719710
#line 4 "decomp/ST.exe/functions/00719710/decomp.c"
undefined4 __cdecl st::fn_00719710(undefined4 *param_1,MCIDEVICEID *param_2)

{
  MCIERROR mcierr;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_2 == 0) {
    return 1;
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  mcierr = st::external_000000D3(*param_2,0x843,0x20002,(DWORD_PTR)&local_18);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,param_2);
    return 1;
  }
  *param_1 = local_14;
  param_1[1] = local_10;
  param_1[2] = local_c;
  param_1[3] = local_8;
  return 0;
}

// 00719790 FUN_00719790
#line 4 "decomp/ST.exe/functions/00719790/decomp.c"
undefined4 __cdecl st::fn_00719790(undefined4 *param_1,MCIDEVICEID *param_2)

{
  MCIERROR mcierr;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_2 == 0) {
    return 1;
  }
  local_18 = 0;
  local_14 = *param_1;
  local_10 = param_1[1];
  local_c = param_1[2];
  local_8 = param_1[3];
  mcierr = st::external_000000D3(*param_2,0x842,0x50002,(DWORD_PTR)&local_18);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,param_2);
    return 1;
  }
  return 0;
}

// 00719810 FUN_00719810
#line 4 "decomp/ST.exe/functions/00719810/decomp.c"
undefined4 __cdecl st::fn_00719810(MCIDEVICEID *param_1,int param_2)

{
  MCIERROR mcierr;
  MCIDEVICEID mciId;
  DWORD_PTR dwParam1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (param_2 == 0) {
    dwParam1 = 0x5002;
    mciId = *param_1;
  }
  else {
    dwParam1 = 0x3002;
    mciId = *param_1;
  }
  mcierr = st::external_000000D3(mciId,0x80d,dwParam1,(DWORD_PTR)&local_10);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,param_1);
    return 1;
  }
  return 0;
}

// 00719880 FUN_00719880
#line 4 "decomp/ST.exe/functions/00719880/decomp.c"
undefined4 __cdecl st::fn_00719880(MCIDEVICEID *param_1,int param_2)

{
  MCIERROR mcierr;
  MCIDEVICEID mciId;
  DWORD_PTR dwParam1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (param_2 == 0) {
    dwParam1 = 0x4802;
    mciId = *param_1;
  }
  else {
    dwParam1 = 0x2802;
    mciId = *param_1;
  }
  mcierr = st::external_000000D3(mciId,0x80d,dwParam1,(DWORD_PTR)&local_10);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,param_1);
    return 1;
  }
  return 0;
}

// 00719900 FUN_00719900
#line 4 "decomp/ST.exe/functions/00719900/decomp.c"
undefined4 __cdecl st::fn_00719900(MCIDEVICEID *param_1)

{
  MCIERROR mcierr;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_1 == 0) {
    return 1;
  }
  local_10 = 0;
  local_8 = 0;
  local_c = 10;
  mcierr = st::external_000000D3(*param_1,0x80d,0x400,(DWORD_PTR)&local_10);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,param_1);
    return 1;
  }
  return 0;
}

// 00719960 FUN_00719960
#line 4 "decomp/ST.exe/functions/00719960/decomp.c"
undefined4 __cdecl st::fn_00719960(MCIDEVICEID *param_1)

{
  MCIERROR mcierr;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_1 == 0) {
    return 1;
  }
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_c = 3;
  mcierr = st::external_000000D3(*param_1,0x814,0x100,(DWORD_PTR)&local_14);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,param_1);
    return 1;
  }
  DAT_00857038 = local_10;
  if (local_10 == 0) {
    st::fn_00719C60((DWORD_PTR)param_1);
    return 1;
  }
  return 0;
}

// 007199F0 FUN_007199f0
#line 4 "decomp/ST.exe/functions/007199F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007199F0 -> EXTERNAL:000000D3 @ 00719A33
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00719A1E MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 __cdecl st::fn_007199F0(DWORD_PTR dwParam2,byte param_2,MCIDEVICEID *param_3)

{
  MCIERROR mcierr;
  DWORD_PTR local_10;
  uint local_c;
  undefined4 local_8;

  if (*param_3 == 0) {
    return 1;
  }
  local_10 = dwParam2;
  local_8 = 0;
  local_c = (uint)param_2;
  mcierr = st::external_000000D3(*param_3,0x806,5,(DWORD_PTR)&local_10);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,param_3);
    return 1;
  }
  return 0;
}

// 00719A60 FUN_00719a60
#line 4 "decomp/ST.exe/functions/00719A60/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00719A60 -> EXTERNAL:000000D3 @ 00719AAF */

undefined4 __cdecl st::fn_00719A60(DWORD_PTR dwParam2,byte param_2,MCIDEVICEID *param_3)

{
  MCIERROR mcierr;
  DWORD_PTR local_10;
  uint local_c;
  uint local_8;

  if (*param_3 == 0) {
    return 1;
  }
  local_10 = dwParam2;
  local_c = (uint)param_2;
  local_8 = (uint)(byte)(param_2 + 1);
  mcierr = st::external_000000D3(*param_3,0x806,0xd,(DWORD_PTR)&local_10);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,param_3);
    return 1;
  }
  return 0;
}

// 00719AE0 FUN_00719ae0
#line 4 "decomp/ST.exe/functions/00719AE0/decomp.c"
undefined4 __cdecl st::fn_00719AE0(uint param_1,MCIDEVICEID *param_2)

{
  MCIERROR mcierr;
  undefined4 local_c;
  uint local_8;

  if (*param_2 != 0) {
    local_c = 0;
    if ((param_1 != 0) && (param_1 <= DAT_00857038)) {
      local_8 = param_1;
      mcierr = st::external_000000D3(*param_2,0x807,8,(DWORD_PTR)&local_c);
      if (mcierr == 0) {
        return 0;
      }
      st::fn_00719C90(mcierr,param_2);
    }
  }
  return 1;
}

// 00719B40 FUN_00719b40
#line 4 "decomp/ST.exe/functions/00719B40/decomp.c"
bool __cdecl st::fn_00719B40(MCIDEVICEID *param_1,undefined4 param_2)

{
  MCIERROR mcierr;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_1 == 0) {
    return false;
  }
  local_14 = 0;
  local_10 = 0;
  local_c = 0x4001;
  local_8 = param_2;
  mcierr = st::external_000000D3(*param_1,0x814,0x112,(DWORD_PTR)&local_14);
  if (mcierr != 0) {
    st::fn_00719C90(mcierr,param_1);
    return false;
  }
  return local_10 == 0x440;
}

// 00719BB0 FUN_00719bb0
#line 4 "decomp/ST.exe/functions/00719BB0/decomp.c"
undefined4 __cdecl st::fn_00719BB0(MCIDEVICEID *param_1)

{
  MCIDEVICEID MVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*param_1 != 0) {
    local_14 = 0;
    local_10 = 0;
    local_8 = 0;
    local_c = 4;
    st::external_000000D3(*param_1,0x814,0x102,(DWORD_PTR)&local_14);
    if ((local_10 == 0x20c) || (local_10 == 0x212)) {
      MVar1 = *param_1;
    }
    else {
      local_c = 5;
      st::external_000000D3(*param_1,0x814,0x102,(DWORD_PTR)&local_14);
      if (local_10 != 0) {
        return 1;
      }
      MVar1 = *param_1;
      local_10 = 0;
    }
    if (MVar1 != 0) {
      st::fn_00719560((DWORD_PTR)param_1);
      st::fn_00719C60((DWORD_PTR)param_1);
    }
  }
  return 0;
}

// 00719C60 FUN_00719c60
#line 4 "decomp/ST.exe/functions/00719C60/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00719C60 -> EXTERNAL:000000D3 @ 00719C80 */

void __cdecl st::fn_00719C60(DWORD_PTR dwParam2)

{
  MCIDEVICEID mciId;
  DWORD_PTR DVar1;

  DVar1 = dwParam2;
  mciId = *(MCIDEVICEID *)dwParam2;
  if (mciId != 0) {
    dwParam2 = 0;
    st::external_000000D3(mciId,0x804,2,(DWORD_PTR)&dwParam2);
    *(undefined4 *)DVar1 = 0;
  }
  return;
}

// 00719C90 FUN_00719c90
#line 4 "decomp/ST.exe/functions/00719C90/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00719C90 -> EXTERNAL:000000D2 @ 00719CCB */

void __cdecl st::fn_00719C90(MCIERROR mcierr,MCIDEVICEID *param_2)

{
  BOOL BVar1;
  CHAR local_104 [256];

  if (*param_2 != 0) {
    st::fn_00719C60((DWORD_PTR)param_2);
  }
  *param_2 = 0;
  if (DAT_007f07c4 != 0) {
    BVar1 = st::external_000000D2(mcierr,local_104,0x100);
    if (BVar1 != 0) {
      st::external_00000081((HWND)0x0,local_104,"MCI error",0x2030);
    }
  }
  return;
}

// 0071A230 FUN_0071a230
#line 4 "decomp/ST.exe/functions/0071A230/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0071A230 parameter used as this of cMf32::RecDel @ 0071A23C */

void __cdecl st::fn_0071A230(cMf32 *param_1,char *param_2)

{
  st::fn_006F17C0(param_1,2,param_2);
  return;
}

// 0071A250 FUN_0071a250
#line 4 "decomp/ST.exe/functions/0071A250/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0071A250 parameter used as this of cMf32::RecRen @ 0071A264 */

void __cdecl st::fn_0071A250(cMf32 *param_1,char *param_2,char *param_3,int param_4)

{
  st::fn_006F1910(param_1,2,param_2,param_3,param_4);
  return;
}

// 0071A4B0 FUN_0071a4b0
#line 4 "decomp/ST.exe/functions/0071A4B0/decomp.c"
void __cdecl st::fn_0071A4B0(int *param_1)

{
  int iVar1;
  byte local_208 [512];
  uint local_8;

  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 5);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      iVar1 = st::fn_006B1190(*(DArrayTy **)(*param_1 + 5),local_208);
      while (-1 < iVar1) {
        st::fn_006F20E0(*(cMf32 **)(*param_1 + 1),&local_8);
        iVar1 = st::fn_006B1190(*(DArrayTy **)(*param_1 + 5),local_208);
      }
      st::fn_006AE110(*(DArrayTy **)(*param_1 + 5));
      *(undefined4 *)(*param_1 + 5) = 0;
    }
    st::fn_006AB060((void **)param_1);
  }
  return;
}

// 0071A8D0 FUN_0071a8d0
#line 4 "decomp/ST.exe/functions/0071A8D0/decomp.c"
void __cdecl st::fn_0071A8D0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;

  iVar4 = 0;
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != nullptr) {
    if (puVar1[3] != 0) {
      local_c = 0;
      if (0 < (int)puVar1[2]) {
        do {
          iVar2 = puVar1[3];
          if (*(int **)(iVar4 + iVar2) != nullptr) {
            iVar3 = 0;
            if (0 < **(int **)(iVar4 + iVar2)) {
              iVar5 = 5;
              do {
                if (*(int *)(*(int *)(iVar4 + iVar2) + iVar5) != 0) {
                  st::fn_006F20E0((cMf32 *)*puVar1,(uint *)(*(int *)(iVar4 + iVar2) + iVar5));
                }
                iVar3 = iVar3 + 1;
                iVar5 = iVar5 + 5;
                iVar2 = puVar1[3];
              } while (iVar3 < **(int **)(iVar4 + iVar2));
            }
            st::fn_006AB060((void **)(puVar1[3] + iVar4));
          }
          local_c = local_c + 1;
          iVar4 = iVar4 + 4;
        } while (local_c < (int)puVar1[2]);
      }
      st::fn_006AB060((void **)(puVar1 + 3));
    }
    if ((DArrayTy *)puVar1[1] != nullptr) {
      st::fn_006B5570((DArrayTy *)puVar1[1]);
    }
    st::fn_006AB060((void **)param_1);
  }
  return;
}

// 0071A990 FUN_0071a990
#line 4 "decomp/ST.exe/functions/0071A990/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00568DD0 -> 0071A990 @ 00568F1C | 00568DD0 -> 0071A990 @ 005692A5 | 00568DD0 ->
   0071A990 @ 00569684 | 00568DD0 -> 0071A990 @ 005699C6 | 00568DD0 -> 0071A990 @ 00569A1E |
   00568DD0 -> 0071A990 @ 00569A82 | 00568DD0 -> 0071A990 @ 00569ADA

   [STPrototypeApplier] Propagated return.
   Evidence: 0071A990 returns used as parameter 0 of FUN_006c1390 @ 00569204 | 0071A990 returns used
   as parameter 0 of FUN_006c1390 @ 0056958D | 0071A990 returns used as parameter 0 of FUN_006c1390
   @ 0056994D */

uint * __cdecl
st::fn_0071A990(AnonShape_0071A990_7656000F *param_1,int soundId,int param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;

  if (((((param_1 != nullptr) && (param_1->field_000C != 0)) &&
       (-1 < soundId)) &&
      ((soundId < param_1->field_0008 &&
       (piVar3 = *(int **)(param_1->field_000C + soundId * 4), piVar3 != nullptr)))) &&
     (iVar1 = *piVar3, 0 < iVar1)) {
    if ((param_3 < 0) || (iVar1 <= param_3)) {
      if (iVar1 < 2) {
        param_3 = 0;
      }
      else {
        piVar3 = *(int **)(param_1->field_000C + soundId * 4);
        uVar2 = st::fn_0072E6C0();
        param_3 = (int)uVar2 % *piVar3;
      }
    }
    iVar1 = param_3 * 5 + 5;
    if (*(int *)(iVar1 + (int)piVar3) != 0) {
      if (param_4 != nullptr) {
        *param_4 = *(undefined1 *)(param_3 * 5 + 4 + (int)piVar3);
      }
      return *(uint **)(*(int *)(param_1->field_000C + soundId * 4) + iVar1);
    }
  }
  return nullptr;
}

// 0071B100 FUN_0071b100
#line 4 "decomp/ST.exe/functions/0071B100/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0071B100 -> EXTERNAL:000000C5 @ 0071B120

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0071B100 -> EXTERNAL:000000C3 @ 0071B17B | 0071B100 -> EXTERNAL:000000C5 @ 0071B120 */

int __cdecl st::fn_0071B100(HKEY hKey,PHKEY phkResult)

{
  PHKEY lpSubKey;
  LSTATUS LVar1;
  int iVar2;
  undefined1 local_108 [260];

  lpSubKey = phkResult;
  if ((phkResult != (PHKEY)0x0) && (*(char *)phkResult != '\0')) {
    LVar1 = st::external_000000C5(hKey,(LPCSTR)phkResult,(PHKEY)&phkResult);
    if (LVar1 == 0) {
      while( true ) {
        local_108[0] = '\0';
        LVar1 = st::external_000000C8((HKEY)phkResult,0,local_108,0x104);
        if (LVar1 != 0) break;
        iVar2 = st::fn_0071B100((HKEY)phkResult,(PHKEY)local_108);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      st::external_000000C9((HKEY)phkResult);
    }
    LVar1 = st::external_000000C3(hKey,(LPCSTR)lpSubKey);
    return LVar1;
  }
  return 0;
}

// 0071B190 FUN_0071b190
#line 4 "decomp/ST.exe/functions/0071B190/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0001 (ST_OBJECT_TYPE_0001).
   Evidence: exact registry pointer; create function first */

void * __cdecl st::fn_0071B190(void)

{
  undefined4 *this;

  this = (undefined4 *)st::fn_0072E530(0x90);
  if (this != nullptr) {
    sub_006E5FB0(this);
    *this = &VTable_0079E284;
    this[6] = 0;
    this[8] = 0;
    this[7] = 0;
    this[9] = 0;
    this[10] = 0;
    this[0x19] = 0;
    this[0x18] = 0;
    this[0x14] = 0;
    this[0x13] = 0;
    this[0x12] = 0;
    this[0x15] = 0;
    this[0x16] = 0;
    this[0x17] = 0;
    this[0x1d] = 0;
    this[0x11] = 0xffffffff;
    InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x1e));
    return this;
  }
  return nullptr;
}

// 0071B1B0 FUN_0071b1b0
#line 4 "decomp/ST.exe/functions/0071B1B0/decomp.c"
undefined4 * __fastcall st::fn_0071B1B0(undefined4 *param_1)

{
  st::fn_006E5FB0(param_1);
  *param_1 = &st_global_0079E284;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  param_1[0x11] = 0xffffffff;
  st::external_00000017((LPCRITICAL_SECTION)(param_1 + 0x1e));
  return param_1;
}

// 0071B760 FUN_0071b760
#line 4 "decomp/ST.exe/functions/0071B760/decomp.c"
undefined4
st::fn_0071B760(uint param_1,byte param_2,AnonShape_0071B760_B33E06ED *param_3,
            AnonShape_0071B760_D695FB3E *param_4,uint *param_5,undefined4 *param_6)

{
  byte bVar1;
  uint uVar2;

  switch(param_1 & 0xfffff) {
  case 0xfb:
    uVar2 = (uint)param_4->field_000F;
    break;
  case 0xfc:
    uVar2 = (uint)param_4->field_000E;
    break;
  case 0xfd:
    uVar2 = (uint)param_4->field_000D;
    break;
  case 0xfe:
    uVar2 = (uint)param_4->field_000C;
    break;
  default:
    uVar2 = (uint)(byte)(&param_3->field_0x0)[param_1 & 0xfffff];
  }
  *param_5 = uVar2 & 0x80;
  *param_6 = 1;
  if ((param_2 & 0x10) == 0) {
    bVar1 = (byte)(param_1 >> 0x18);
    if (((((param_1 & 0x40000000) != 0) && ((param_3->field_0038 & 0x80) == 0)) &&
        ((param_3->field_00B8 & 0x80) == 0)) ||
       (((param_1 & 0x40000000) == 0 &&
        (((bVar1 >> 5 & 1) != param_3->field_0038 >> 7 ||
         ((bVar1 >> 4 & 1) != param_3->field_00B8 >> 7)))))) {
      *param_6 = 0;
    }
    if (((((param_1 & 0x8000000) != 0) && ((param_3->field_001D & 0x80) == 0)) &&
        ((param_3->field_009D & 0x80) == 0)) ||
       (((param_1 & 0x8000000) == 0 &&
        (((bVar1 >> 2 & 1) != param_3->field_001D >> 7 ||
         ((bVar1 >> 1 & 1) != param_3->field_009D >> 7)))))) {
      *param_6 = 0;
    }
    if ((((param_1 & 0x1000000) == 0) || ((param_3->field_002A & 0x80) != 0)) ||
       ((param_3->field_0036 & 0x80) != 0)) {
      if ((param_1 & 0x1000000) != 0) {
        return 0;
      }
      if (((byte)(param_1 >> 0x17) & 1) == param_3->field_002A >> 7) {
        if (((byte)(param_1 >> 0x16) & 1) == param_3->field_0036 >> 7) {
          return 0;
        }
        *param_6 = 0;
        return 0;
      }
    }
  }
  else if (((((((param_1 & 0x40000000) == 0) || ((param_3->field_0038 & 0x80) != 0)) ||
             ((param_3->field_00B8 & 0x80) != 0)) &&
            (((param_1 & 0x20000000) == 0 || ((param_3->field_0038 & 0x80) != 0)))) &&
           ((((((param_1 & 0x10000000) == 0 || ((param_3->field_00B8 & 0x80) != 0)) &&
              ((((param_1 & 0x8000000) == 0 || ((param_3->field_001D & 0x80) != 0)) ||
               ((param_3->field_009D & 0x80) != 0)))) &&
             ((((param_1 & 0x4000000) == 0 || ((param_3->field_001D & 0x80) != 0)) &&
              (((param_1 & 0x2000000) == 0 || ((param_3->field_009D & 0x80) != 0)))))) &&
            ((((param_1 & 0x1000000) == 0 || ((param_3->field_002A & 0x80) != 0)) ||
             ((param_3->field_0036 & 0x80) != 0)))))) &&
          (((param_1 & 0x800000) == 0 || ((param_3->field_002A & 0x80) != 0)))) {
    if ((param_1 & 0x400000) == 0) {
      return 0;
    }
    if ((param_3->field_0036 & 0x80) != 0) {
      return 0;
    }
  }
  *param_6 = 0;
  return 0;
}

// 0071B970 FUN_0071b970
#line 4 "decomp/ST.exe/functions/0071B970/decomp.c"
undefined4 st::fn_0071B970(uint *param_1,byte *param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (((((*param_1 & 8) != 0) && ((*param_2 & 8) != 0)) && (param_1[1] == *(uint *)(param_2 + 4)))
     || ((((*param_1 & 8) == 0 && ((*param_2 & 8) == 0)) &&
         (((byte)param_1[1] == param_2[4] && (STField<byte>(param_1,5) == param_2[5])))))) {
    uVar1 = 1;
  }
  return uVar1;
}

// 0071C7C0 FUN_0071c7c0
#line 4 "decomp/ST.exe/functions/0071C7C0/decomp.c"
undefined4 __thiscall st::fn_0071C7C0(void *this,int *param_1)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  bool bVar4;
  byte local_68 [100];

  if (STField<int>(this,0x24) != 0) {
    *(undefined4 *)(STField<int>(this,0x24) + 4) = 0;
    iVar1 = st::fn_006B1190(STField<DArrayTy *>(this,0x24),local_68);
    if (-1 < iVar1) {
      do {
        iVar1 = 0x13;
        bVar4 = true;
        pbVar2 = local_68;
        piVar3 = param_1;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar4 = *(int *)pbVar2 == *piVar3;
          pbVar2 = pbVar2 + 4;
          piVar3 = piVar3 + 1;
        } while (bVar4);
        if (bVar4) {
          return 1;
        }
        iVar1 = st::fn_006B1190(STField<DArrayTy *>(this,0x24),local_68);
        if (iVar1 < 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

// 0071C830 FUN_0071c830
#line 4 "decomp/ST.exe/functions/0071C830/decomp.c"
void __fastcall st::fn_0071C830(AnonShape_0071C830_6B4541B2 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  if (param_1->field_0024 != 0) {
    param_1->field_0070 = 1;
    *(undefined4 *)(param_1->field_0024 + 4) = 0;
    while( true ) {
      iVar2 = param_1->field_0024;
      uVar3 = *(uint *)(iVar2 + 4);
      if (*(uint *)(iVar2 + 0xc) <= uVar3) break;
      iVar4 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
      *(uint *)(iVar2 + 4) = uVar3 + 1;
      if (iVar4 == 0) {
        return;
      }
      piVar1 = (int *)(iVar4 + 0x60);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}

// 0071C870 FUN_0071c870
#line 4 "decomp/ST.exe/functions/0071C870/decomp.c"
void __fastcall st::fn_0071C870(AnonShape_0071C870_66664424 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  if (param_1->field_0024 != 0) {
    param_1->field_0070 = 1;
    *(undefined4 *)(param_1->field_0024 + 4) = 0;
    while( true ) {
      iVar1 = param_1->field_0024;
      uVar2 = *(uint *)(iVar1 + 4);
      if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
      iVar3 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
      *(uint *)(iVar1 + 4) = uVar2 + 1;
      if (iVar3 == 0) {
        return;
      }
      if (*(int *)(iVar3 + 0x60) != 0) {
        *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + -1;
      }
    }
  }
  return;
}

// 0071C9F0 FUN_0071c9f0
#line 4 "decomp/ST.exe/functions/0071C9F0/decomp.c"
void __thiscall st::fn_0071C9F0(void *this,int param_1)

{
  DArrayTy *array;
  uint index;
  byte local_10 [8];
  int local_8;

  index = 0;
  if (param_1 != 0) {
    array = STField<DArrayTy *>(this,0x28);
    STField<undefined4>(this,0x58) = 0;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,local_10);
        if (*(int *)(local_8 + 8) == param_1) {
          st::fn_006B0C70(STField<DArrayTy *>(this,0x28),index);
        }
        else {
          if ((local_10[0] & 2) != 0) {
            STField<undefined4>(this,0x58) = 1;
          }
          index = index + 1;
        }
        array = STField<DArrayTy *>(this,0x28);
      } while ((int)index < (int)array->count);
    }
  }
  return;
}

// 0071CF60 FUN_0071cf60
#line 4 "decomp/ST.exe/functions/0071CF60/decomp.c"
/* [STVTableApplier] Virtual slot 0079E284+0x8 */

undefined4 __fastcall st::fn_0071CF60(int *param_1)

{
  undefined4 uVar1;

  if ((param_1[7] & 0xf0000000U) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0071cf6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*param_1 + 8))();
    return uVar1;
  }
  return 0;
}

// 0071CF80 FUN_0071cf80
#line 4 "decomp/ST.exe/functions/0071CF80/decomp.c"
/* [STVTableApplier] Virtual slot 0079E284+0xC */

undefined4 __fastcall st::fn_0071CF80(void *param_1)

{
  int iVar1;

  if (STField<int>(param_1,0x188) != 0) {
    STField<undefined2>(param_1,0x18e) = STField<undefined2>(param_1,0x1e8);
    STField<undefined2>(param_1,0x18c) = STField<undefined2>(param_1,0x1c);
    STField<int>(param_1,400) = (int)param_1 + 0x24;
    iVar1 = st::fn_006E5FE0(param_1,(undefined4 *)((int)param_1 + 0x178));
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

// 0071E000 CreateButton
#line 4 "decomp/ST.exe/functions/0071E000/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0002 (ST_OBJECT_TYPE_0002).
   Evidence: exact registry pointer; create function first */

ButtonClassTy * __cdecl st::fn_0071E000(void)

{
  ButtonClassTy *pBVar1;

  pBVar1 = (ButtonClassTy *)st::fn_006B04D0(0x1ec);
  if (pBVar1 != nullptr) {
    st::fn_0072B700((undefined4 *)pBVar1);
    pBVar1->vtable = &st_global_0079E288;
    *(undefined4 *)&pBVar1->field_0x1d4 = 1;
    *(undefined4 *)&pBVar1->field_0x174 = 0;
    return pBVar1;
  }
  return nullptr;
}

// 0071E040 FUN_0071e040
#line 4 "decomp/ST.exe/functions/0071E040/decomp.c"
undefined4 * __fastcall st::fn_0071E040(undefined4 *param_1)

{
  st::fn_006E5FB0(param_1);
  *param_1 = &st_global_0079E294;
  param_1[8] = 0;
  param_1[9] = 0xffffffff;
  return param_1;
}

// 0071E060 FUN_0071e060
#line 4 "decomp/ST.exe/functions/0071E060/decomp.c"
undefined4 __thiscall st::fn_0071E060(void *this,int param_1,int param_2)

{
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  if (-1 < STField<int>(this,0x24)) {
    local_1c = *(undefined4 *)(STField<int>(this,0x20) + STField<int>(this,0x24) * 4);
    local_18 = 2;
    local_14 = 0x20;
    local_10 = 1;
    st::fn_006E6060(this,local_24);
  }
  STField<int>(this,0x24) = param_1;
  if (param_2 != 0) {
    local_1c = *(undefined4 *)(STField<int>(this,0x20) + param_1 * 4);
    local_18 = 2;
    local_14 = 0x20;
    local_10 = 3;
    st::fn_006E6060(this,local_24);
  }
  return 0;
}

// 0071E6D0 CreateRadio
#line 4 "decomp/ST.exe/functions/0071E6D0/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0009 (ST_OBJECT_TYPE_0009).
   Evidence: exact registry pointer; create function first */

RadioClassTy * __cdecl st::fn_0071E6D0(void)

{
  RadioClassTy *this;

  this = (RadioClassTy *)st::fn_006B04D0(0x68);
  if (this != nullptr) {
    sub_006E5FB0(this);
    *(VTable_0079E294 **)this = &VTable_0079E294;
    this->field_0020 = 0;
    this->field_0024 = 0xffffffff;
    return this;
  }
  return nullptr;
}

// 0071E6F0 FUN_0071e6f0
#line 4 "decomp/ST.exe/functions/0071E6F0/decomp.c"
undefined4 * __fastcall st::fn_0071E6F0(undefined4 *param_1)

{
  st::fn_0072B700(param_1);
  *param_1 = &st_global_0079E298;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x71] = 0;
  return param_1;
}

// 0071E860 FUN_0071e860
#line 4 "decomp/ST.exe/functions/0071E860/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E863 MOV AX,word ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E867 MOV DX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E872 MOV AX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E884 MOV DX,word ptr
   [EBP + 0x14] */

int __thiscall st::fn_0071E860(void *this,ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  int iVar1;

  STField<ushort>(this,0x148) = param_1;
  STField<ushort>(this,0x14c) = param_3;
  STField<ushort>(this,0x14a) = param_2;
  STField<ushort>(this,0x14e) = param_4;
  iVar1 = st::fn_006E5FE0(this,(undefined4 *)((int)this + 0x134));
  return -(uint)(iVar1 != 0);
}

// 0071F210 CreateViewer
#line 4 "decomp/ST.exe/functions/0071F210/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0008 (ST_OBJECT_TYPE_0008).
   Evidence: exact registry pointer; create function first */

ViewerClassTy * __cdecl st::fn_0071F210(void)

{
  ViewerClassTy *pVVar1;

  pVVar1 = (ViewerClassTy *)st::fn_006B04D0(0x1f8);
  if (pVVar1 != nullptr) {
    FUN_0072b700((undefined4 *)pVVar1);
    pVVar1->field_0000 = &VTable_0079E298;
    *(undefined4 *)&pVVar1->field_0x1f0 = 0;
    *(undefined4 *)&pVVar1->field_0x1ec = 0;
    pVVar1->field_01B8 = 0;
    pVVar1->field_01B4 = 0;
    pVVar1->field_01C4 = 0;
    return pVVar1;
  }
  return nullptr;
}

// 0071F230 FUN_0071f230
#line 4 "decomp/ST.exe/functions/0071F230/decomp.c"
int __fastcall st::fn_0071F230(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = 0;
  iVar4 = param_1[0x4f];
  if (iVar4 < param_1[0x81]) {
    do {
      iVar2 = param_1[0x4e];
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 8))(iVar4,iVar4 == iVar2);
      if (param_1[0xc] < iVar1 + iVar3) {
        return 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*param_1 + 0xc))(iVar4,iVar4 == iVar2,0,iVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar3 = iVar3 + param_1[0x82] + iVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[0x81]);
  }
  return 0;
}

// 0071F2B0 FUN_0071f2b0
#line 4 "decomp/ST.exe/functions/0071F2B0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0071F2B0 returns zeroed full register at 0071F2E9 @ 0071F2ED

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F2B3 MOV AX,word ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F2BA MOV CX,word ptr
   [EBP + 0xc] */

uint __thiscall st::fn_0071F2B0(void *this,ushort param_1,ushort param_2)

{
  int iVar1;

  STField<ushort>(this,0x156) = param_2;
  STField<ushort>(this,0x154) = param_1;
  iVar1 = st::fn_006E5FE0(this,(undefined4 *)((int)this + 0x140));
  if (iVar1 == 0) {
    return STField<uint>(this,0x158);
  }
  return 0;
}

// 0071F2F0 FUN_0071f2f0
#line 4 "decomp/ST.exe/functions/0071F2F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F2F3 MOV AX,word ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F2F7 MOV DX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F302 MOV AX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F314 MOV DX,word ptr
   [EBP + 0x14] */

int __thiscall st::fn_0071F2F0(void *this,ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  int iVar1;

  STField<ushort>(this,0x174) = param_1;
  STField<ushort>(this,0x178) = param_3;
  STField<ushort>(this,0x176) = param_2;
  STField<ushort>(this,0x17a) = param_4;
  iVar1 = st::fn_006E5FE0(this,(undefined4 *)((int)this + 0x160));
  return -(uint)(iVar1 != 0);
}

// 0071F340 FUN_0071f340
#line 4 "decomp/ST.exe/functions/0071F340/decomp.c"
int __fastcall st::fn_0071F340(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  iVar3 = param_1[0x4f];
  if (iVar3 < param_1[0x81]) {
    do {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 8))(iVar3,iVar3 == param_1[0x4e]);
      if (param_1[0xc] < iVar1 + iVar2) break;
      iVar2 = iVar2 + param_1[0x82] + iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x81]);
  }
  return iVar3 - param_1[0x4f];
}

