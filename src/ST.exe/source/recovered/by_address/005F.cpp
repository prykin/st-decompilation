#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/005F.cpp

// 005F0050 FUN_005f0050
#line 4 "decomp/ST.exe/functions/005F0050/decomp.c"
undefined4 __fastcall st::fn_005F0050(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((0 < *(int *)(param_1 + 0x23e)) && (*(int *)(param_1 + 0x23a) != 5)) &&
     (*(int *)(param_1 + 0x23a) != 6)) {
    return 1;
  }
  return 0;
}

// 005F0090 FUN_005f0090
#line 4 "decomp/ST.exe/functions/005F0090/decomp.c"
undefined4 st::fn_005F0090(void)

{
  return 0;
}

// 005F00B0 FUN_005f00b0
#line 4 "decomp/ST.exe/functions/005F00B0/decomp.c"
void __thiscall st::fn_005F00B0(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char local_14 [16];

  *param_1 = 4;
  param_1[1] = STField<undefined1>(this,0x21d);
  param_1[2] = 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 3) = uVar3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0xc))();
  param_1[7] = uVar2;
  *(undefined4 *)(param_1 + 8) = STField<undefined4>(this,0x18);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)this + 0x74))(local_14);
  st::fn_0072E340(st::pointer_boundary_cast<char *>(param_1 + 0xc),local_14,0xe);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x7c))();
  param_1[0x1b] = uVar2;
  iVar1 = STField<int>(this,0x23a);
  if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 7)) {
    param_1[0x1d] = 1;
  }
  return;
}

// 005F0150 FUN_005f0150
#line 4 "decomp/ST.exe/functions/005F0150/decomp.c"
void __thiscall st::fn_005F0150(void *this,AnonShape_005F0150_6EC63067 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0xc))();
  param_1->field_0x4 = uVar2;
  param_1->field_0005 = 4;
  param_1->field_0006 = 1;
  iVar1 = STField<int>(this,0x23a);
  if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 7)) {
    param_1->field_0007 = 1;
  }
  iVar1 = STField<int>(this,0x2b1);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*(int *)this + 0x134))();
    param_1->field_0x1c = uVar2;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar3 = (**(code **)(*(int *)this + 0x13c))();
    param_1->field_0021 = uVar3;
    return;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x134))();
  param_1->field_0x1c = uVar2;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x138))();
  param_1->field_001D = uVar3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x13c))();
  param_1->field_0021 = uVar3;
  return;
}

// 005F0240 FUN_005f0240
#line 4 "decomp/ST.exe/functions/005F0240/decomp.c"
void __thiscall st::fn_005F0240(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;

  *param_1 = 4;
  param_1[1] = 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar2;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(*(int *)this + 0xc))();
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = STField<undefined4>(this,0x18);
  return;
}

// 005F0280 FUN_005f0280
#line 4 "decomp/ST.exe/functions/005F0280/decomp.c"
void __thiscall st::fn_005F0280(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;

  *param_1 = 4;
  param_1[1] = 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar2;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(*(int *)this + 0xc))();
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = STField<undefined4>(this,0x18);
  return;
}

// 005F02C0 FUN_005f02c0
#line 4 "decomp/ST.exe/functions/005F02C0/decomp.c"
void __thiscall st::fn_005F02C0(void *this,int param_1,undefined1 *param_2)

{
  if (((param_2 != nullptr) && (param_1 == 0x15)) &&
     (STField<char>(this,0x24f) == '\0')) {
    STField<undefined1>(this,0x325) = *param_2;
    STField<undefined1>(this,800) = 1;
    STField<undefined4>(this,0x321) = 0x15;
  }
  return;
}

// 005F0310 FUN_005f0310
#line 4 "decomp/ST.exe/functions/005F0310/decomp.c"
void __fastcall st::fn_005F0310(AnonShape_005F0310_D6E15516 *param_1)

{
  if (((param_1->field_0321 == 0x15) && ((param_1->field_031C & 1) != 0)) &&
     (param_1->field_024F == '\0')) {
    st::fn_004031F2(param_1,(uint)param_1->field_0325,-1,-1,-1,0);
    param_1->field_0320 = 0;
  }
  return;
}

// 005F0360 FUN_005f0360
#line 4 "decomp/ST.exe/functions/005F0360/decomp.c"
undefined4 st::fn_005F0360(void)

{
  return 0xff;
}

// 005F0380 FUN_005f0380
#line 4 "decomp/ST.exe/functions/005F0380/decomp.c"
undefined4 __fastcall st::fn_005F0380(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x2b1)) {
  case 0:
  case 3:
    return 1;
  case 1:
  case 4:
    return 2;
  case 2:
  case 5:
    return 3;
  default:
    return 0;
  }
}

// 005F03D0 FUN_005f03d0
#line 4 "decomp/ST.exe/functions/005F03D0/decomp.c"
undefined4 st::fn_005F03D0(void)

{
  return 0xffffffff;
}

// 005F03F0 FUN_005f03f0
#line 4 "decomp/ST.exe/functions/005F03F0/decomp.c"
undefined4 st::fn_005F03F0(void)

{
  return 0xffffffff;
}

// 005F0410 FUN_005f0410
#line 4 "decomp/ST.exe/functions/005F0410/decomp.c"
undefined4 st::fn_005F0410(void)

{
  return 0;
}

// 005F0430 FUN_005f0430
#line 4 "decomp/ST.exe/functions/005F0430/decomp.c"
undefined4 st::fn_005F0430(void)

{
  return 0;
}

// 005F0470 FUN_005f0470
#line 4 "decomp/ST.exe/functions/005F0470/decomp.c"
undefined4 __thiscall st::fn_005F0470(void *this,int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if ((((param_1 == 0x1b) || (param_1 == 7)) || (param_1 == 0x13)) &&
     (STField<int>(this,0x23a) == 1)) {
    uVar1 = 1;
  }
  return uVar1;
}

// 005F04B0 FUN_005f04b0
#line 4 "decomp/ST.exe/functions/005F04B0/decomp.c"
void __thiscall st::fn_005F04B0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  piVar1 = param_1;
  iVar3 = st::fn_006E62D0
                    (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1,(int *)&param_1);
  piVar2 = param_1;
  if (iVar3 != -4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    if (((iVar3 == 0x1b) || (iVar3 == 7)) || (iVar3 == 0x13)) {
      STField<undefined1>(this,0x24e) = 1;
      STField<int>(this,0x2a3) = piVar2[9];
      STField<undefined2>(this,0x2ab) = STField<undefined2>(piVar2,0x32);
      STField<int *>(this,0x2a7) = piVar1;
      iVar3 = st::fn_00404EC1(STField<short>(this,0x242),STField<short>(this,0x244),
                                 STField<short>(this,0x246),0,st::pointer_boundary_cast<AnonShape_00495FF0_59081BDD *>(this));
      if (iVar3 == 0) {
        STField<char>(this,0x252) = STField<char>(this,0x252) + -1;
      }
      STField<undefined4>(this,0x23a) = 4;
      if (piVar1 != STField<int *>(this,0x18)) {
        STField<undefined1>(this,0x24f) = 1;
      }
    }
  }
  return;
}

// 005F05A0 FUN_005f05a0
#line 4 "decomp/ST.exe/functions/005F05A0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005F05C8 MOV CX,word ptr
   [EBP + 0x8] */

void __thiscall st::fn_005F05A0(void *this,ushort param_1,undefined2 param_2)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  ushort local_c;
  undefined2 local_a;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    local_e = (**(code **)(*(int *)this + 0x144))();
    local_c = param_1;
    local_a = param_2;
    local_14 = 0x5dda;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

// 005F0620 FUN_005f0620
#line 4 "decomp/ST.exe/functions/005F0620/decomp.c"
void __fastcall st::fn_005F0620(AnonShape_005F0620_60AA17CE *param_1)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    switch(param_1->field_02B1) {
    case 0:
    case 1:
    case 2:
      local_e = param_1->field_0032;
      local_14 = 0x5dd8;
      break;
    case 3:
    case 4:
    case 5:
      local_e = param_1->field_0032;
      local_14 = 0x5ddd;
      break;
    default:
      goto switchD_005f064c_default;
    }
    local_c = param_1->field_02A3;
    local_a = param_1->field_02AB;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*DAT_008117bc)(local_24);
  }
switchD_005f064c_default:
  return;
}

// 005F06E0 FUN_005f06e0
#line 4 "decomp/ST.exe/functions/005F06E0/decomp.c"
void __fastcall st::fn_005F06E0(AnonShape_005F0620_60AA17CE *param_1)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    switch(param_1->field_02B1) {
    case 0:
    case 1:
    case 2:
      local_e = param_1->field_0032;
      local_14 = 0x5dd9;
      break;
    case 3:
    case 4:
    case 5:
      local_e = param_1->field_0032;
      local_14 = 0x5dde;
      break;
    default:
      goto switchD_005f070c_default;
    }
    local_a = param_1->field_02AB;
    local_c = param_1->field_02A3;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*DAT_008117bc)(local_24);
  }
switchD_005f070c_default:
  return;
}

// 005F07A0 FUN_005f07a0
#line 4 "decomp/ST.exe/functions/005F07A0/decomp.c"
undefined4 __fastcall st::fn_005F07A0(STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  STFishC *this;
  short sVar3;
  int local_EAX_72;
  dword dVar4;
  int iVar5;
  int iVar4;
  short local_a;
  short local_8;
  short local_6;

  if ((param_1->field_024F == '\0') && (0 < param_1->field_0246)) {
    local_EAX_72 = st::fn_00404D3B(param_1->field_0242,*(short *)&param_1->field_0x244,
                                      param_1->field_0246 + -1);
    if (local_EAX_72 == 0) {
      sVar1 = param_1->field_0242;
      sVar2 = *(short *)&param_1->field_0x244;
      sVar3 = param_1->field_0246 + -1;
      if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
         (((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) &&
          ((sVar3 < g_worldGrid.sizeZ &&
           (this = (STFishC *)
                   STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[0], this != nullptr)))))) {
        dVar4 = this->slot_2C();
        if (dVar4 == 99) {
          iVar5 = st::fn_0040162C(this,param_1);
          if (iVar5 != 0) {
            iVar5 = st::fn_00403E9A(param_1,(AnonShape_005EFAE0_B406B78B *)this);
            if (iVar5 != 0) {
              iVar4 = st::fn_00405083((int *)this);
              if (iVar4 != 0) {
                st::fn_004018C5(this,&local_6,&local_8,&local_a);
                iVar5 = st::fn_00403FC6(param_1,(local_6 + 1) * 0xc9,(local_8 + 1) * 0xc9,
                                           local_a * 0xc9 + 0x96,param_1->field_02BA,'\x01',0x3c);
                if (iVar5 != 0) {
                  return 1;
                }
              }
              st::fn_00402743(this,param_1);
            }
          }
        }
      }
    }
  }
  return 0;
}

// 005F09B0 FUN_005f09b0
#line 4 "decomp/ST.exe/functions/005F09B0/decomp.c"
undefined4 __thiscall st::fn_005F09B0(void *this,AnonShape_005EFAE0_B406B78B *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if ((STField<char>(this,0x24f) == '\0') && (param_1 != nullptr)) {
    STField<undefined4>(this,0x2a7) = param_1->field_0018;
    STField<undefined2>(this,0x2ab) = param_1->field_0032;
    STField<undefined4>(this,0x2a3) = param_1->field_0024;
    uVar1 = 1;
    STField<undefined1>(this,0x24f) = 1;
    if (STField<char>(this,800) != '\0') {
      STField<undefined1>(this,800) = 0;
    }
  }
  return uVar1;
}

// 005F0A30 FUN_005f0a30
#line 4 "decomp/ST.exe/functions/005F0A30/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005F0A30 returns return of FUN_004b7d50 @ 005F0B4F */

bool __fastcall st::fn_005F0A30(STSprGameObjC *param_1)

{
  short sVar1;
  short sVar2;
  STWorldObject *this;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  STBoatC_field_06F7State SVar8;

  uVar5 = (uint)(byte)param_1->field_024F;
  if ((param_1->field_024F != 0) &&
     (uVar5 = (uint)(ushort)param_1->field_0246, 0 < param_1->field_0246)) {
    uVar5 = st::fn_00404D3B(param_1->field_0242,param_1->field_0244,(short)(uVar5 - 1));
    if (uVar5 == 0) {
      sVar1 = param_1->field_0242;
      sVar2 = param_1->field_0244;
      uVar4 = param_1->field_0246 - 1;
      uVar5 = (uint)uVar4;
      if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
         (((sVar2 < g_worldGrid.sizeY && (-1 < (short)uVar4)) && ((short)uVar4 < g_worldGrid.sizeZ))
         )) {
        uVar5 = (uint)sVar1;
        this = STGridAt3D(g_worldGrid, uVar5, sVar2, uVar4).objects[0];
        if (this != nullptr) {
          uVar5 = this->GetObjectTypeId();
          if (uVar5 == 99) {
            iVar6 = param_1->vfunc_138();
            iVar7 = param_1->vfunc_130();
            SVar8 = param_1->slot_2C();
            st::fn_00403CCE(this,SVar8,iVar7,iVar6);
            iVar6 = param_1->vfunc_AC((short)*(undefined4 *)&this->field_0x18);
            uVar5 = 0;
            if (iVar6 != 0) {
              st::fn_00403BA2((int *)this);
              bVar3 = st::fn_00402743(this,(STBoatC *)param_1);
              uVar5 = (uint)bVar3;
            }
          }
        }
      }
    }
  }
  return SUB41(uVar5,0);
}

// 005F0BA0 FUN_005f0ba0
#line 4 "decomp/ST.exe/functions/005F0BA0/decomp.c"
undefined4 __fastcall st::fn_005F0BA0(AnonShape_005F0BA0_C8D654C5 *param_1)

{
  undefined1 *this;
  char cVar1;
  int iVar2;
  int iVar3;

  if (g_playSystem_00802A38->field_00E4 % 5 == 0) {
    this = st::pointer_boundary_cast<undefined1 *>(&param_1->field_0x1d5);
    if (param_1->field_02B5 == 1) {
      st::fn_0040116D
                ((STT3DSprC *)this,PTR_00806724->entries[param_1->field_02D2],
                 (int)PTR_00806724->field_002C);
      iVar2 = st::machine_word_boundary_cast<int>(param_1->field_02D2 + -1);
      param_1->field_02D2 = iVar2;
      if (iVar2 == (int)PTR_00806724->entryCount / 2) {
        cVar1 = st::fn_004056CD((int)this);
        if (cVar1 != '\0') {
          st::fn_00404903((int)param_1);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (*(code *)**(undefined4 **)this)();
        }
      }
      if ((int)param_1->field_02D2 < 0) {
        param_1->field_02D2 = 0;
        st::fn_0040116D((STT3DSprC *)this,0,(int)PTR_00806724->field_002C);
        return 1;
      }
    }
    else {
      st::fn_0040116D
                ((STT3DSprC *)this,PTR_00806724->entries[param_1->field_02D2],
                 (int)PTR_00806724->field_002C);
      iVar2 = param_1->field_02D2;
      iVar3 = iVar2 + 1;
      param_1->field_02D2 = iVar3;
      if (PTR_00806724->entryCount <= iVar3) {
        param_1->field_02D2 = iVar2;
        st::fn_00403D0F((STT3DSprC *)this);
        return 1;
      }
      if (iVar3 == (int)PTR_00806724->entryCount / 2) {
        st::fn_00402A90((STT3DSprC *)this);
      }
    }
  }
  return 0;
}

// 005F0E20 FUN_005f0e20
#line 4 "decomp/ST.exe/functions/005F0E20/decomp.c"
undefined4 __thiscall st::fn_005F0E20(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;

  if (param_2 == this) {
    return 4;
  }
  if ((param_2 != nullptr) && (this = (void *)(uint)DAT_0080874d, (void *)param_2[9] == this)) {
    this = (void *)param_2[8];
    if (this == (void *)0x14) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*param_2 + 0xec))();
      this = nullptr;
      if (iVar1 != 0) {
        return 3;
      }
    }
    else if ((this == (void *)0x3e8) || (this == (void *)0x3e9)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*param_2 + 0xec))();
      this = nullptr;
      if (iVar1 != 0) {
        return 4;
      }
    }
  }
  return (uint)this & 0xffff0000;
}

// 005F0EC0 FUN_005f0ec0
#line 4 "decomp/ST.exe/functions/005F0EC0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0064DB00 -> 005F0EC0 @ 0064DC41; AiEventClassTy::_CreateArt parameter param_1; MOVSX at
   0064DC3A establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0064DB00 -> 005F0EC0 @ 0064DC41; AiEventClassTy::_CreateArt parameter param_2; MOVSX at
   0064DC36 establishes signed source width 2 */

void __cdecl
st::fn_005F0EC0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            char *param_6,char *param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar7;
  int local_158 [7];
  int local_13c;
  undefined4 local_138;
  short local_134;
  short local_132;
  short local_130;
  undefined4 local_12e;
  undefined4 local_12a;
  char local_126 [14];
  undefined1 local_118;
  char local_117 [259];
  undefined1 local_14;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  char *pcVar5_mg1;
  char *pcVar5_mg0;
  char *pcVar5_mg4;
  char *pcVar5_mg3;

  memset(local_158, 0, 0x151); /* compiler bulk-zero initialization */
  local_13c = param_1;
  local_158[2] = 1;
  local_158[3] = 1;
  local_138 = param_9;
  local_158[6] = param_2;
  local_13 = param_3;
  local_158[0] = 0x172;
  local_158[1] = 0xff;
  local_158[4] = 0;
  local_158[5] = 0xfd;
  local_12e = 0;
  local_134 = (short)param_3 * 0xc9 + 100;
  local_f = param_4;
  local_12a = param_8;
  local_132 = (short)param_4 * 0xc9 + 100;
  local_b = param_5;
  local_130 = (short)param_5 * 200 + 100;
  if (param_6 != nullptr) {
    uVar3 = 0xffffffff;
    pcVar5_mg0 = param_6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5_mg0;
      pcVar5_mg0 = pcVar5_mg0 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0xf) {
      uVar3 = 0xffffffff;
      do {
        pcVar5_mg1 = param_6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5_mg1 = param_6 + 1;
        cVar1 = *param_6;
        param_6 = pcVar5_mg1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5_mg1 + -uVar3;
      pcVar7 = local_126;
      memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
      uVar4 = 0;
    }
    else {
      st::fn_0072E340(local_126,param_6,0xe);
      local_118 = 0;
    }
  }
  if (param_7 != nullptr) {
    uVar3 = 0xffffffff;
    pcVar5_mg3 = param_7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5_mg3;
      pcVar5_mg3 = pcVar5_mg3 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x104) {
      uVar3 = 0xffffffff;
      do {
        pcVar5_mg4 = param_7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5_mg4 = param_7 + 1;
        cVar1 = *param_7;
        param_7 = pcVar5_mg4;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5_mg4 + -uVar3;
      pcVar7 = local_117;
      memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
    }
    else {
      st::fn_0072E340(local_117,param_7,0x103);
      local_14 = 0;
    }
  }
  g_playSystem_00802A38->vfunc_08(0x14f,0,0,(short)local_158,0);
  return;
}

// 005F1320 CreateSTManBasis
#line 4 "decomp/ST.exe/functions/005F1320/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CAA1C>0040258B

   [STObjectFactoryApplier] Central object factory for 0x015B (ST_OBJECT_ST_MAN_BASIS).
   Evidence: registry[95] at 007CAA18 stores type 0x015B and executable pointer 0040258B; allocation
   size 72 uniquely matches /STManBasisC; calls named constructor STManBasisC::STManBasisC */

STManBasisC * __cdecl st::fn_005F1320(void)

{
  STManBasisC *this;

  this = (STManBasisC *)st::fn_006B04D0(0x48);
  if (this != nullptr) {
    g_manBasis_00811784 = st::fn_00405AE2(this);
    return g_manBasis_00811784;
  }
  g_manBasis_00811784 = nullptr;
  return nullptr;
}

// 005F1380 FUN_005f1380
#line 4 "decomp/ST.exe/functions/005F1380/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005F1380 returns return of sub_006E60A0 @ 005F13A6 */

int __fastcall st::fn_005F1380(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 005F13C0 FUN_005f13c0
#line 4 "decomp/ST.exe/functions/005F13C0/decomp.c"
undefined4 __thiscall st::fn_005F13C0(void *this,int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x38);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      do {
        if ((((bVar5) &&
             (psVar3 = (short *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c)),
             psVar3 != nullptr)) && ((char)psVar3[3] == param_4)) &&
           (((*psVar3 == param_1 && (psVar3[1] == param_2)) && (psVar3[2] == param_3)))) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  iVar1 = STField<int>(this,0x3c);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      do {
        if (((bVar5) &&
            (psVar3 = (short *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c)),
            psVar3 != nullptr)) &&
           (((char)psVar3[3] == param_4 &&
            (((*psVar3 == param_1 && (psVar3[1] == param_2)) && (psVar3[2] == param_3)))))) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return 1;
}

// 005F15F0 FUN_005f15f0
#line 4 "decomp/ST.exe/functions/005F15F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005F162F MOV AX,word ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005F23D0 -> 005F15F0 @ 005F26C1; FUN_005f23d0 parameter param_2 */

int __thiscall
st::fn_005F15F0(void *this,ushort param_1,short param_2,undefined2 param_3,undefined1 param_4,
            undefined2 param_5,char param_6)

{
  DArrayTy *pDVar1;
  int local_EAX_152;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort local_24;
  short local_22;
  undefined2 local_20;
  undefined1 local_1e;
  undefined2 local_1d;
  uint local_1b;
  undefined4 local_16;
  undefined4 local_12;
  undefined1 local_e;
  char local_d;
  undefined4 local_c;

  if (STField<int>(this,0x3c) == 0) {
    pDVar1 = st::fn_006AE290(nullptr,10,0x20,10);
    STField<DArrayTy *>(this,0x3c) = pDVar1;
  }
  pDVar1 = STField<DArrayTy *>(this,0x3c);
  if (pDVar1 == nullptr) {
    return -1;
  }
  puVar4 = &local_24;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  }
  local_24 = param_1;
  local_22 = param_2;
  local_20 = param_3;
  local_1e = param_4;
  local_1d = param_5;
  local_1b = g_playSystem_00802A38->field_00E4;
  local_12 = 0;
  local_16 = 0;
  local_d = param_6;
  local_c = 0xffffffff;
  if (-1 < param_6) {
    local_e = 0;
    local_EAX_152 = st::fn_006AE1C0(pDVar1,&local_24);
    return local_EAX_152 + 1;
  }
  local_e = (undefined1)PTR_00806724->entryCount;
  iVar2 = st::fn_006AE1C0(pDVar1,&local_24);
  return iVar2 + 1;
}

// 005F1700 FUN_005f1700
#line 4 "decomp/ST.exe/functions/005F1700/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * st::fn_005F1700(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     uint param_7)

{
  AnonNested_005F1700_003C_057131A3 *pAVar1;
  int iVar2;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  InternalExceptionFrame local_5c;
  int local_18;
  AnonShape_005F1700_3FAAC417 *local_14;
  ushort *local_10;
  char *local_c;
  uint local_8;

  local_10 = nullptr;
  if (param_1 == 1) {
    local_c = (&PTR_s_basis_40_007ce534)[param_2];
  }
  else {
    local_c = (&PTR_s_basis_10_007ce530)[param_2];
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    return local_10;
  }
  puVar2 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,local_c,0xffffffff,0,1,0,nullptr);
  if (param_3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    return puVar2;
  }
  if (-1 < (int)param_7) {
    pAVar1 = local_14->field_003C;
    if (param_7 < pAVar1->field_000C) {
      iVar3 = pAVar1->field_0008 * param_7 + pAVar1->field_001C;
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      if (param_1 == 0) {
        uVar5 = 0x45;
        uVar4 = 0x5a;
      }
      else {
        uVar5 = 100;
        uVar4 = 0x78;
      }
      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar2,9),
                 STField<uint>(puVar2,0xd),uVar4,uVar5,0);
      *(uint *)(iVar3 + 0x18) = local_8;
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar2,STField<int>(puVar2,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,*(uint *)(iVar3 + 0xe));
      st::fn_006EA3E0(g_sT3DSMAPContext_00807598,local_8,-1);
      st::fn_006E9210(g_sT3DSMAPContext_00807598,local_8);
      if (param_1 != 0) {
        param_5 = param_5 + 100;
        param_4 = param_4 + 100;
        local_18 = param_4;
      }
      st::fn_006EA960
                (g_sT3DSMAPContext_00807598,local_8,(float)param_4 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_5 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_6 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
      *(undefined1 *)(iVar3 + 6) = 1;
      g_currentExceptionFrame = local_5c.previous;
      return puVar2;
    }
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_10;
}

// 005F1E40 FUN_005f1e40
#line 4 "decomp/ST.exe/functions/005F1E40/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * st::fn_005F1E40(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;

  puVar1 = st::fn_0040169F(param_1,param_2,1,param_3,param_4,param_5,0xffffffff);
  if (puVar1 == nullptr) {
    return nullptr;
  }
  if (param_1 == 0) {
    puVar1 = st::fn_006E9000
                       (g_sT3DSMAPContext_00807598,*STField<undefined4 *>(puVar1,0x21),0x5a,0x35,
                        (float)param_3 * _DAT_007904f8 * _DAT_007904f0,
                        (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
                        (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc,0);
    return (undefined4 *)puVar1;
  }
  puVar1 = st::fn_006E9000
                     (g_sT3DSMAPContext_00807598,*STField<undefined4 *>(puVar1,0x21),0x78,0x56,
                      (float)(param_3 + 100) * _DAT_007904f8 * _DAT_007904f0,
                      (float)(param_4 + 100) * _DAT_007904f8 * _DAT_007904f0,
                      (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc,0);
  return (undefined4 *)puVar1;
}

// 005F23D0 FUN_005f23d0
#line 4 "decomp/ST.exe/functions/005F23D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004B9FA0 -> 005F23D0 @ 004BA77A | 004D32C0 -> 005F23D0 @ 004D3487 */

undefined4 __thiscall
st::fn_005F23D0(void *this,int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  VisibleClassTy *pVVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int local_EAX_707;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  STManBasisC *local_c;
  undefined4 local_8;

  iVar4 = param_2;
  iVar6 = param_1;
  local_8 = 0;
  if ((((param_6 == 3) || (param_3 != 0)) || (param_5 == 0x39)) ||
     ((param_5 == 0x4f || (*(int *)(&DAT_007918bc + param_6 * 4 + param_5 * 0xc) != 0)))) {
    return 0;
  }
  local_c = st::pointer_boundary_cast<STManBasisC *>(this);
  iVar3 = st::fn_00403F12(this,param_1,param_2,0,(char)param_4);
  pVVar1 = g_visibleClass_00802A88;
  if (iVar3 == 0) {
    return local_8;
  }
  if (g_visibleClass_00802A88 == nullptr) {
cf_common_exit_005F26AF:
    iVar5 = st::fn_00405AB5(local_c,(ushort)iVar6,(short)param_2,0,(char)param_4,0,'\0');
    if (-1 < iVar5) {
      local_8 = 1;
    }
  }
  else {
    if ((char)param_4 == '\x01') {
      if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
            ((st::fn_00403F53
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6,iVar4,
                         &param_6,&param_3), pVVar2 = g_visibleClass_00802A88, -1 < param_6 &&
             (((param_6 < (int)pVVar1->field_0030 &&
               (iVar4 = param_3 + g_centeredOffsets5[0], -1 < iVar4)) &&
              (iVar4 < pVVar1->field_0034)))))) &&
           ((pVVar1->field_004C != nullptr &&
            (pVVar1->field_004C[param_6 + iVar4 * pVVar1->field_0030] == 0)))) &&
          (DAT_0080874d != -1)) &&
         ((((g_visibleClass_00802A88->field_00F8 != 0 &&
            (st::fn_00403F53
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6 + 1,
                        param_2,&param_5,&local_10), pVVar1 = g_visibleClass_00802A88, -1 < param_5)
            ) && ((param_5 < (int)pVVar2->field_0030 &&
                  (((local_10 = local_10 + g_centeredOffsets5[0], -1 < local_10 &&
                    (local_10 < pVVar2->field_0034)) && (pVVar2->field_004C != nullptr)))))) &&
          (((pVVar2->field_004C[param_5 + local_10 * pVVar2->field_0030] == 0 &&
            (DAT_0080874d != -1)) && (g_visibleClass_00802A88->field_00F8 != 0)))))) {
        iVar4 = param_2 + 1;
        st::fn_00403F53
                  (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6,iVar4,&local_14
                   ,&local_18);
        iVar3 = param_1;
        pVVar2 = g_visibleClass_00802A88;
        if (((((-1 < local_14) && (local_14 < (int)pVVar1->field_0030)) &&
             ((local_18 = local_18 + g_centeredOffsets5[0], iVar6 = iVar3, -1 < local_18 &&
              ((((local_18 < pVVar1->field_0034 && (pVVar1->field_004C != nullptr)) &&
                (pVVar1->field_004C[local_14 + local_18 * pVVar1->field_0030] == 0)) &&
               ((DAT_0080874d != -1 && (g_visibleClass_00802A88->field_00F8 != 0)))))))) &&
            ((st::fn_00403F53
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_1 + 1,
                         iVar4,&param_1,&local_1c), -1 < param_1 &&
             ((param_1 < (int)pVVar2->field_0030 &&
              (local_1c = g_centeredOffsets5[0] + local_1c, -1 < local_1c)))))) &&
           ((local_1c < pVVar2->field_0034 &&
            ((pVVar2->field_004C != nullptr &&
             (pVVar2->field_004C[param_1 + local_1c * pVVar2->field_0030] == 0))))))
        goto cf_common_exit_005F26AF;
      }
    }
    else {
      iVar4 = st::fn_00404E5D(g_visibleClass_00802A88,iVar6,iVar4,0);
      if (iVar4 == 0) goto cf_common_exit_005F26AF;
    }
    local_EAX_707 = st::fn_00401465(local_c,(short)iVar6,(short)param_2,0,(byte)param_4,0);
    if (-1 < local_EAX_707) {
      return 1;
    }
  }
  return local_8;
}

// 005F3410 CreateSTBHEShell
#line 4 "decomp/ST.exe/functions/005F3410/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9EC>00402C89

   [STObjectFactoryApplier] Central object factory for 0x0150 (ST_OBJECT_STBHE_SHELL).
   Evidence: registry[89] at 007CA9E8 stores type 0x0150 and executable pointer 00402C89; allocation
   size 373 uniquely matches /STBHEShellC */

STBHEShellC * __cdecl st::fn_005F3410(void)

{
  STBHEShellC *pSVar1;

  pSVar1 = (STBHEShellC *)st::fn_006B04D0(0x175);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_004017B2(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 005F3530 FUN_005f3530
#line 4 "decomp/ST.exe/functions/005F3530/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 005F3530 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 005F35AA */

int st::fn_005F3530(AnonReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                AnonShape_005F3530_93A949A7 *param_4)

{
  int iVar2;
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_4->field_0171 + 0x29);
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + param_4->field_00AB * 4), iVar2 != 0)) {
    iVar1 = st::fn_00403E1D
                      (param_1,iVar2,
                       (float)param_4->field_0093 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_0097 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_009B * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,param_3);
    return iVar1;
  }
  return -4;
}

// 005F3940 FUN_005f3940
#line 1 "decomp/ST.exe/functions/005F3940/decomp.c"

int st::fn_005F3940(int param_1,int param_2,int param_3)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;

  iVar4 = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar5 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
  param_2 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  if ((((g_sT3DSMAPContext_00807598->field_0048 <= iVar4) &&
       (iVar4 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= iVar5)) &&
     (iVar5 <= g_sT3DSMAPContext_00807598->field_0054)) {
    iVar3 = st::fn_006DDBD0();
    pVVar2 = g_visibleClass_00802A88;
    if (iVar3 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == nullptr) {
      return iVar3;
    }
    if (DAT_0080874d == -1) {
      return iVar3;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return iVar3;
    }
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,&param_3,
               &local_8);
    if (param_2 < 0) {
      return iVar3;
    }
    if (4 < param_2) {
      return iVar3;
    }
    if (param_3 < 0) {
      return iVar3;
    }
    if ((int)pVVar2->field_0030 <= param_3) {
      return iVar3;
    }
    local_8 = g_centeredOffsets5[param_2] + local_8;
    if (local_8 < 0) {
      return iVar3;
    }
    if (pVVar2->field_0034 <= local_8) {
      return iVar3;
    }
    if (pVVar2->field_004C == nullptr) {
      return iVar3;
    }
    if (pVVar2->field_004C[param_3 + local_8 * pVVar2->field_0030] != 0) {
      return iVar3;
    }
  }
  return 0;
}

// 005F3B00 FUN_005f3b00
#line 4 "decomp/ST.exe/functions/005F3B00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005F27C0 -> 005F3B00 @ 005F2825 */

void __fastcall st::fn_005F3B00(STBHEShellC *param_1)

{
  if (param_1->field_008F != 0) {
    st::fn_006E8BA0(g_sT3DSMAPContext_00807598,param_1->field_008F);
  }
  return;
}

// 005F3B30 FUN_005f3b30
#line 4 "decomp/ST.exe/functions/005F3B30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_005F3B30(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar2 = param_1 * param_1;
  fVar3 = fVar2 * _DAT_00790784;
  fVar4 = fVar2 * param_1 * _DAT_0079c588;
  fVar1 = param_3 - param_1 * param_2;
  fVar5 = fVar3 * fVar2 - fVar4 * param_1;
  if (fVar5 != _DAT_0079034c) {
    *param_5 = (fVar1 * fVar2 - fVar4 * param_4) / fVar5;
    param_5[1] = (fVar3 * param_4 - fVar1 * param_1) / fVar5;
    return 1;
  }
  return 0;
}

// 005F4A30 FUN_005f4a30
#line 4 "decomp/ST.exe/functions/005F4A30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005F4A80 MOV EBX,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 st::fn_005F4A30(int param_1,byte param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_58;
  AnonShape_005F4A30_D28DC55A *local_14;
  char **local_10;
  int local_c;
  undefined4 local_8;

  local_c = param_1;
  local_8 = 0;
  local_10 = &PTR_s_pics_g_007ce5f8;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  iVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    return local_8;
  }
  if (local_c != 0) {
    uVar2 = (uint)param_2;
    local_14 = (AnonShape_005F4A30_D28DC55A *)
               st::fn_00709AF0
                         (PTR_00806764,CASE_1D,local_10[uVar2],0xffffffff,0,1,0,nullptr);
    puVar1 = (uint *)(iVar3 + 0x1f);
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)puVar1,1,0,local_14->field_0009,
               local_14->field_000D,*(int *)(&DAT_007ce5b0 + uVar2 * 8) / 2,
               *(int *)(&DAT_007ce5b4 + uVar2 * 8) / 2 - 0xe,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)local_14,local_14->field_0021,1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,*(uint *)(iVar3 + 0xe));
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,*puVar1,
               (float)*(int *)(iVar3 + 2) * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)(iVar3 + 6) * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)(iVar3 + 10) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*puVar1,0);
    *(undefined1 *)(iVar3 + 0x1e) = 1;
    if (param_3 != 0) {
      st::fn_006EAB60(g_sT3DSMAPContext_00807598,*puVar1);
      *(undefined1 *)(iVar3 + 0x1e) = 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return 1;
  }
  g_currentExceptionFrame = local_58.previous;
  return local_8;
}

// 005F5440 FUN_005f5440
#line 4 "decomp/ST.exe/functions/005F5440/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_005F5440(AnonShape_005F5440_D27C3BDE *param_1)

{
  dword dVar1;
  DArrayTy *pDVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  if (param_1->field_0169 != nullptr) {
    dVar1 = param_1->field_0169->count;
    local_c = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = param_1->field_0169;
        if (((local_c < pDVar2->count) &&
            (pcVar7 = DArrayAt<char>(pDVar2, local_c),
            pcVar7 != nullptr)) && (*pcVar7 == '\x01')) {
          if (*(int *)(pcVar7 + 0x1f) == -1) {
            st::fn_00403247((int)pcVar7,pcVar7[1],0);
          }
          pVVar4 = g_visibleClass_00802A88;
          if (g_visibleClass_00802A88 != nullptr) {
            iVar6 = *(int *)(pcVar7 + 10);
            local_8 = STBiasedDiv16(iVar6, 200); /* exact signed 16-bit grid-index division */
            iVar6 = *(int *)(pcVar7 + 6);
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            iVar5 = *(int *)(pcVar7 + 2);
            iVar5 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
            if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                ((st::fn_00403F53
                            (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar6
                             ,&local_10,&local_14), local_8 < 0 || ((4 < local_8 || (local_10 < 0)))
                 ))) || (((int)pVVar4->field_0030 <= local_10 ||
                         ((((iVar6 = g_centeredOffsets5[local_8] + local_14, iVar6 < 0 ||
                            (pVVar4->field_0034 <= iVar6)) || (pVVar4->field_004C == nullptr))
                          || (pVVar4->field_004C[local_10 + iVar6 * pVVar4->field_0030] != 0)))))) {
              if (pcVar7[0x1e] == '\0') {
                st::fn_006EAAA0
                          (g_sT3DSMAPContext_00807598,*(uint *)(pcVar7 + 0x1f),0);
                pcVar7[0x1e] = '\x01';
              }
            }
            else if (pcVar7[0x1e] != '\0') {
              st::fn_006EAB60
                        (g_sT3DSMAPContext_00807598,*(uint *)(pcVar7 + 0x1f));
              pcVar7[0x1e] = '\0';
            }
          }
          st::fn_006EA270
                    (g_sT3DSMAPContext_00807598,*(uint *)(pcVar7 + 0x1f),0,*(uint *)(pcVar7 + 0xe));
          st::fn_006EA960
                    (g_sT3DSMAPContext_00807598,*(uint *)(pcVar7 + 0x1f),
                     (float)*(int *)(pcVar7 + 2) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)(pcVar7 + 6) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)(pcVar7 + 10) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
  }
  return;
}

// 005F65D0 CreateSTColl3
#line 4 "decomp/ST.exe/functions/005F65D0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA98C>00401F82

   [STObjectFactoryApplier] Central object factory for 0x0144 (ST_OBJECT_ST_COLL3).
   Evidence: registry[77] at 007CA988 stores type 0x0144 and executable pointer 00401F82; allocation
   size 755 uniquely matches /STColl3C */

STColl3C * __cdecl st::fn_005F65D0(void)

{
  STColl3C *pSVar1;

  pSVar1 = (STColl3C *)st::fn_006B04D0(0x2f3);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00402EC8(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 005F6AB0 FUN_005f6ab0
#line 1 "decomp/ST.exe/functions/005F6AB0/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_005F6AB0(void)

{
  return;
}

// 005F6AD0 FUN_005f6ad0
#line 4 "decomp/ST.exe/functions/005F6AD0/decomp.c"
undefined4 st::fn_005F6AD0(void)

{
  return 1;
}

// 005F6DF0 FUN_005f6df0
#line 4 "decomp/ST.exe/functions/005F6DF0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall st::fn_005F6DF0(STAllPlayersC *param_1)

{
  undefined1 *this;

  this = st::pointer_boundary_cast<undefined1 *>(&param_1->field_0x1d5);
  st::fn_004045D9
            ((STT3DSprC *)this,(float)*(int *)&param_1->field_0x2c1 * _DAT_007904f8 * _DAT_007904f0,
             (float)*(int *)&param_1->field_0x2c5 * _DAT_007904f8 * _DAT_007904f0,
             (float)*(int *)&param_1->field_0x2c9 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  st::fn_00403107(param_1,*(ushort *)&param_1->field_0x2c1,*(short *)&param_1->field_0x2c5,
               *(ushort *)&param_1->field_0x2c9);
  st::fn_00405AA6(this,'\x0e');
  st::fn_00401AB9((STColl3C *)param_1);
  st::fn_00402982(this,0);
  return;
}

// 005F6EE0 FUN_005f6ee0
#line 4 "decomp/ST.exe/functions/005F6EE0/decomp.c"
int __fastcall st::fn_005F6EE0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (*(int *)(param_1 + 0x269) * 100) / 600;
}

// 005F8810 FUN_005f8810
#line 4 "decomp/ST.exe/functions/005F8810/decomp.c"
void __thiscall st::fn_005F8810(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;

  sVar1 = STField<short>(this,0x285);
  sVar2 = STField<short>(this,0x281);
  sVar3 = STField<short>(this,0x27d);
  if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
      ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) && (sVar1 < g_worldGrid.sizeZ)) {
    this_00 = STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[1];
    if ((this_00 != nullptr) && (this_00->value_20 == 0xbe)) {
      st::fn_00404728(this_00,param_1);
    }
  }
  return;
}

// 005F88D0 FUN_005f88d0
#line 4 "decomp/ST.exe/functions/005F88D0/decomp.c"
undefined4 __thiscall
st::fn_005F88D0(void *this,int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 *param_5
            )

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;
  int iVar4;
  undefined4 uVar5;

  sVar1 = STField<short>(this,0x285);
  sVar2 = STField<short>(this,0x281);
  sVar3 = STField<short>(this,0x27d);
  uVar5 = 0;
  if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
      ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) && (sVar1 < g_worldGrid.sizeZ)) {
    this_00 = STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[1];
    if ((this_00 != nullptr) && (this_00->value_20 == 0xbe)) {
      if (param_2 == 0) {
        iVar4 = st::fn_00404A07(this_00,param_1,nullptr,nullptr,nullptr);
        if (iVar4 != 0) {
          uVar5 = 1;
        }
      }
      else {
        iVar4 = st::fn_00404A07(this_00,param_1,param_3,param_4,param_5);
        if (iVar4 != 0) {
          return 1;
        }
      }
    }
  }
  return uVar5;
}

// 005F89F0 FUN_005f89f0
#line 4 "decomp/ST.exe/functions/005F89F0/decomp.c"
undefined4 __thiscall st::fn_005F89F0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;

  uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar2;
  uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar1;
  iVar4 = ((uVar2 >> 0x10) % 5 + STField<int>(this,0x27d)) - param_1;
  iVar5 = ((uVar1 >> 0x10) % 5 + STField<int>(this,0x281)) - param_1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (g_worldGrid.sizeX <= iVar4) {
    iVar4 = g_worldGrid.sizeX + -1;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (g_worldGrid.sizeY <= iVar5) {
    iVar5 = g_worldGrid.sizeY + -1;
  }
  param_1 = STField<int>(this,0x285);
  while( true ) {
    sVar6 = (short)iVar4;
    sVar7 = (short)iVar5;
    sVar8 = (short)param_1;
    iVar3 = st::fn_00404D3B(sVar6,sVar7,sVar8);
    if ((iVar3 != 0) &&
       (((((sVar6 < 0 || (g_worldGrid.sizeX <= sVar6)) || (sVar7 < 0)) ||
         ((g_worldGrid.sizeY <= sVar7 || (sVar8 < 0)))) ||
        ((g_worldGrid.sizeZ <= sVar8 ||
         (STGridAt3D(g_worldGrid, sVar6, sVar7, sVar8).objects[0] == nullptr)))))) break;
    param_1 = param_1 + 1;
    if ((4 < param_1) || (STField<int>(this,0x285) + 2 < param_1)) break;
  }
  if ((-1 < param_1) && (param_1 < 5)) {
    STField<int>(this,0x295) = iVar5;
    STField<int>(this,0x291) = iVar4;
    STField<int>(this,0x299) = param_1;
    return 1;
  }
  return 0;
}

// 005F8BA0 FUN_005f8ba0
#line 4 "decomp/ST.exe/functions/005F8BA0/decomp.c"
undefined4 __thiscall st::fn_005F8BA0(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;

  iVar4 = STField<int>(this,0x285);
  do {
    if (4 < iVar4) {
      return 0;
    }
    sVar5 = (short)iVar4;
    iVar3 = st::fn_00404D3B(STField<short>(this,0x27d),STField<short>(this,0x281),sVar5);
    if (iVar3 != 0) {
      sVar1 = STField<short>(this,0x27d);
      sVar2 = STField<short>(this,0x281);
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
         (((g_worldGrid.sizeY <= sVar2 || (sVar5 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar5 ||
           (STGridAt3D(g_worldGrid, sVar1, sVar2, sVar5).objects[0] == nullptr)))))) {
        *param_1 = STField<undefined4>(this,0x27d);
        *param_2 = STField<undefined4>(this,0x281);
        *param_3 = iVar4;
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

// 005F8CC0 FUN_005f8cc0
#line 4 "decomp/ST.exe/functions/005F8CC0/decomp.c"
void __fastcall st::fn_005F8CC0(void *param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  iVar1 = st::fn_00405399(param_1,&local_10,&local_c,&local_8);
  if (iVar1 != 0) {
    st::fn_00403C24(param_1,local_10,local_c,local_8);
  }
  return;
}

// 005F8D10 FUN_005f8d10
#line 4 "decomp/ST.exe/functions/005F8D10/decomp.c"
undefined4 __fastcall st::fn_005F8D10(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  short local_a;
  short local_8;
  short local_6;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*param_1 + 0x1c))();
  st::fn_00401AB9((STColl3C *)param_1);
  switch(uVar2) {
  case 0:
    uVar2 = 5;
    if (STField<char>(param_1,0x29d) == '\x01') {
      if (STField<char>(param_1,699) == '\x01') {
        st::fn_004018C5((STFishC *)param_1,&local_a,&local_8,&local_6);
        if ((((int)local_a == STField<int>(param_1,0x291)) &&
            ((int)local_8 == STField<int>(param_1,0x295))) &&
           ((int)local_6 == STField<int>(param_1,0x299))) {
          STField<undefined1>(param_1,699) = 3;
          return 5;
        }
      }
      else {
        iVar3 = st::fn_004057B3((AnonShape_005FA180_2D8671A3 *)param_1);
        if (PTR_00806724->entryCount <= iVar3) {
          STField<undefined4>(param_1,0x2dd) = 2;
          return 5;
        }
      }
    }
    break;
  case 1:
    if (STField<int>(param_1,0x2ea) != 0) {
      st::fn_00404AE3((STColl3C *)param_1);
      STField<uint>(param_1,0x2d5) = g_playSystem_00802A38->field_00E4;
      uVar1 = g_playSystem_00802A38->field_00E4;
      STField<undefined4>(param_1,0x2ef) = 0;
      STField<uint>(param_1,0x2d9) = uVar1 + 0x32;
      STField<undefined1>(param_1,699) = 1;
      STField<undefined4>(param_1,0x76) = 1;
      if (0 < param_1[0xa8]) {
        STField<undefined1>(param_1,0x29f) = 1;
        return 0xc;
      }
      STField<undefined1>(param_1,0x29f) = 0;
      return 0xc;
    }
    if (STField<char>(param_1,0x29f) == '\0') {
      if (STField<char>(param_1,0x29d) != '\x01') {
        if (STField<char>(param_1,0x29d) == '\x03') {
          STField<uint>(param_1,0x2d5) = g_playSystem_00802A38->field_00E4;
          uVar1 = g_playSystem_00802A38->field_00E4;
          STField<undefined1>(param_1,699) = 1;
          STField<undefined4>(param_1,0x76) = 1;
          STField<uint>(param_1,0x2d9) = uVar1 + 0x32;
          STField<undefined4>(param_1,0x2ef) = 0;
          return 0xc;
        }
        goto LAB_005f8ea2;
      }
    }
    else {
      if ((param_1[0xa8] != 0) && (STField<char>(param_1,0x29d) == '\0')) {
        st::fn_004018C5((STFishC *)param_1,&local_a,&local_8,&local_6);
        return 10;
      }
      if (STField<char>(param_1,0x29d) != '\x01') {
LAB_005f8ea2:
        STField<undefined1>(param_1,699) = 2;
        return 8;
      }
    }
  default:
    uVar2 = 6;
    STField<undefined1>(param_1,699) = 3;
    break;
  case 2:
    iVar3 = st::fn_00402FAE(param_1);
    if (-1 < iVar3) {
      return 5;
    }
    STField<undefined4>(param_1,0x2dd) = 0xc;
    STField<undefined4>(param_1,0x76) = 1;
    STField<uint>(param_1,0x2d5) = g_playSystem_00802A38->field_00E4;
    STField<uint>(param_1,0x2d9) = g_playSystem_00802A38->field_00E4 + 0x32;
    return 0;
  }
  return uVar2;
}

// 005F9050 FUN_005f9050
#line 4 "decomp/ST.exe/functions/005F9050/decomp.c"
undefined4 __thiscall st::fn_005F9050(void *this,int *param_1,undefined4 *param_2)

{
  STWorldObject *this_00;
  short sVar1;
  int iVar3;
  int iVar2;
  short local_c [2];
  undefined4 local_8;

  st::fn_004018C5(st::pointer_boundary_cast<STFishC *>(this),(short *)&local_8,(short *)((int)&local_8 + 2),local_c);
  sVar1 = local_c[0] + -1;
  if (((((-1 < (short)local_8) && ((short)local_8 < g_worldGrid.sizeX)) && (-1 < STPiece<2,2>(local_8))) &&
      ((((STPiece<2,2>(local_8) < g_worldGrid.sizeY && (-1 < sVar1)) &&
        ((sVar1 < g_worldGrid.sizeZ &&
         ((this_00 = STGridAt3D(g_worldGrid, local_8, STPiece<2,2>(local_8), sVar1).objects[0],
          this_00 != nullptr && (this_00->value_20 == 1000)))))) &&
       (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x6e)))) &&
     (((*(int *)&this_00->field_0x18 == STField<int>(this,0x255) &&
       (iVar3 = st::fn_00401C7B((int)this_00), iVar3 == 0)) &&
      (iVar3 = st::fn_004029E1(this_00,STField<undefined4>(this,0x18)), iVar3 != 0)))) {
    st::fn_004043EF(this_00,STField<int>(this,0x18));
    st::fn_004031E3(this_00,st::pointer_boundary_cast<uint *>(&local_8),(int *)((int)&local_8 + 2),local_c);
    iVar2 = st::fn_004052CC((STT3DSprC *)((int)&this_00[0xd].vtable + 1));
    *param_2 = iVar2;
    *param_1 = st::machine_word_boundary_cast<int>(local_c[0] + -0x5a);
    return 1;
  }
  return 0;
}

// 005F91E0 FUN_005f91e0
#line 4 "decomp/ST.exe/functions/005F91E0/decomp.c"
void __thiscall st::fn_005F91E0(void *this,int param_1,int param_2)

{
  STWorldObject *this_00;
  int iVar1;
  short local_c [2];
  short local_8;
  short local_6;

  st::fn_004018C5(st::pointer_boundary_cast<STFishC *>(this),&local_6,&local_8,local_c);
  local_c[0] = local_c[0] + -1;
  if (((((-1 < local_6) && (local_6 < g_worldGrid.sizeX)) && (-1 < local_8)) &&
      ((local_8 < g_worldGrid.sizeY && (-1 < local_c[0])))) && (local_c[0] < g_worldGrid.sizeZ)) {
    this_00 = STGridAt3D(g_worldGrid, local_6, local_8, local_c[0]).objects[0];
    if ((this_00 != nullptr) && (this_00->value_20 == 1000)) {
      iVar1 = this_00->GetObjectTypeId();
      if ((iVar1 == 0x6e) && (*(int *)&this_00->field_0x18 == STField<int>(this,0x255))) {
        st::fn_00403D69(this_00,STField<int>(this,0x18),param_1);
        if (param_2 < 1) {
          st::fn_004050BA(this_00,STField<int>(this,0x18));
          st::fn_004044DF(this_00,STField<int>(this,0x18));
        }
      }
    }
  }
  return;
}

// 005F9310 FUN_005f9310
#line 4 "decomp/ST.exe/functions/005F9310/decomp.c"
undefined1 __thiscall st::fn_005F9310(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = STField<int>(this,0x2c1);
  iVar3 = STBiasedDiv16(iVar3, 0xc9); /* exact signed 16-bit grid-index division */
  iVar4 = STField<int>(this,0x2c5);
  iVar4 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
  iVar2 = STField<int>(this,0x2c9);
  iVar2 = STBiasedDiv16(iVar2, 200); /* exact signed 16-bit grid-index division */
  if (g_manRub3_008117A4 != nullptr) {
    iVar3 = st::fn_0040441C(g_manRub3_008117A4,STField<int>(this,0x235),iVar3,iVar4,iVar2,
                               (int *)((int)this + 0x27d),param_1);
    if (iVar3 != 0) {
      STField<undefined1>(this,0x29e) = 1;
      return STField<undefined1>(this,0x29e);
    }
  }
  if (STField<char>(this,0x29e) != '\0') {
    st::fn_00404AE3(st::pointer_boundary_cast<STColl3C *>(this));
  }
  return STField<undefined1>(this,0x29e);
}

// 005F95B0 FUN_005f95b0
#line 4 "decomp/ST.exe/functions/005F95B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_005F95B0(AnonShape_005F95B0_F363C582 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  longlong lVar10;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_14;
  int local_10;
  int local_c;
  short local_8;
  short local_6;

  iVar7 = 0;
  local_1c = 0;
  if (param_1->field_02E6 == 0) {
    return 0;
  }
  uVar1 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
  param_1->field_001C = uVar1;
  local_18 = (uVar1 >> 0x10) % 0x169;
  *(uint *)(param_1->field_02E6 + 0x4c) = local_18;
  fcos((float10)local_18 * (float10)_DAT_0079c70c);
  lVar10 = st::fn_0072E288();
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fsin(extraout_ST0);
  *(int *)(param_1->field_02E6 + 0x50) = (int)lVar10;
  lVar10 = st::fn_0072E288();
  *(int *)(param_1->field_02E6 + 0x54) = (int)lVar10;
  st::fn_004031E3(param_1,(uint *)&local_8,(int *)&local_6,(short *)&local_c);
  param_1->field_02C5 = (int)local_6;
  param_1->field_02C1 = (int)local_8;
  param_1->field_02C9 = (int)(short)local_c;
  *(int *)(param_1->field_02E6 + 0x34) = (int)local_8;
  *(int *)(param_1->field_02E6 + 0x38) = (int)local_6;
  *(undefined4 *)(param_1->field_02E6 + 0x40) = *(undefined4 *)(param_1->field_02E6 + 0x14);
  *(undefined4 *)(param_1->field_02E6 + 0x44) = *(undefined4 *)(param_1->field_02E6 + 0x18);
  *(undefined4 *)(param_1->field_02E6 + 0x48) = *(undefined4 *)(param_1->field_02E6 + 0x1c);
  local_c = local_c + 0x14;
  sVar5 = (short)local_c;
  *(int *)(param_1->field_02E6 + 0x3c) = (int)sVar5;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar9 = *(int *)(param_1->field_02E6 + 0x1c);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar8 = *(int *)(param_1->field_02E6 + 0x3c) - iVar9;
  if (iVar8 < 1) {
    return 0;
  }
  local_18 = (uint)(short)(((short)(iVar8 / 200) + (short)(iVar8 >> 0x1f)) -
                          (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
  if ((int)local_18 < 1) {
    pvVar2 = st::fn_006AAC70(200);
    local_10 = 10;
    iVar9 = 0;
    do {
      iVar4 = iVar9 + 4;
      *(undefined2 *)(iVar9 + 2 + (int)pvVar2) = 0;
      iVar3 = (local_10 / 2 + iVar8) / local_10;
      iVar7 = iVar7 + iVar3;
      iVar8 = iVar8 - iVar3;
      *(short *)(iVar9 + (int)pvVar2) = (short)iVar7;
      local_10 = local_10 + -1;
      iVar9 = iVar4;
    } while (iVar4 < 0x28);
    *(undefined4 *)(param_1->field_02E6 + 0x50) = 0;
    *(undefined4 *)(param_1->field_02E6 + 0x54) = 0;
    *(void **)(param_1->field_02E6 + 0x58) = pvVar2;
    *(undefined4 *)(param_1->field_02E6 + 0x5c) = 10;
    return 1;
  }
  iVar7 = STBiasedDiv16(iVar9, 200); /* exact signed 16-bit grid-index division */
  iVar9 = STBiasedDiv16(sVar5, 200); /* exact signed 16-bit grid-index division */
  sVar5 = STBiasedDiv16(local_6, 0xc9); /* exact signed 16-bit grid-index division */
  sVar6 = STBiasedDiv16(local_8, 0xc9); /* exact signed 16-bit grid-index division */
  iVar7 = st::fn_00405CEA(sVar6,sVar5,iVar9,iVar7,&local_20,&local_24);
  switch(local_18) {
  case 1:
    local_10 = 0x14;
    break;
  case 2:
    local_10 = 0x1c;
    break;
  case 3:
    local_10 = 0x22;
    break;
  case 4:
    local_10 = 0x2a;
    break;
  default:
    local_10 = 0x28;
  }
  if (iVar7 == 0) {
    iVar7 = param_1->field_02E6;
    local_18 = 4;
    local_64 = *(undefined4 *)(iVar7 + 0x1c);
    local_60 = *(int *)(iVar7 + 0x1c) + 0x32;
    local_3c = 0xaa;
    local_58 = (int)(short)local_c;
    local_38 = 0;
    local_5c = local_58 + -0x32;
  }
  else {
    local_10 = local_10 + 8;
    sVar5 = (short)local_c >> 0xf;
    if (iVar7 == 1) {
      iVar7 = param_1->field_02E6;
      local_18 = 5;
      local_64 = *(undefined4 *)(iVar7 + 0x1c);
      local_60 = *(int *)(iVar7 + 0x1c) + 0x32;
      local_54 = (int)(short)local_c;
      if ((short)local_c < 0) {
        iVar9 = (short)(((short)local_c / 200 + sVar5) -
                       (short)((longlong)local_54 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)local_c / 200 + sVar5) -
                            (short)((longlong)local_54 * 0x51eb851f >> 0x3f));
      }
      local_3c = 0x10e;
      local_38 = 0xaa;
      local_5c = *(int *)(iVar7 + 0x1c) + (iVar9 - local_20) * 200;
      local_58 = local_54 + -0x32;
      local_34 = 0;
    }
    else {
      iVar7 = param_1->field_02E6;
      local_18 = 6;
      local_64 = *(undefined4 *)(iVar7 + 0x1c);
      local_60 = *(int *)(iVar7 + 0x1c) + 0x32;
      local_50 = (int)(short)local_c;
      if ((short)local_c < 0) {
        iVar8 = (int)(short)(((short)local_c / 200 + sVar5) -
                            (short)((longlong)local_50 * 0x51eb851f >> 0x3f));
        iVar9 = iVar8 + -1;
      }
      else {
        iVar9 = (int)(short)(((short)local_c / 200 + sVar5) -
                            (short)((longlong)local_50 * 0x51eb851f >> 0x3f));
        iVar8 = iVar9;
      }
      local_3c = 0xb4;
      local_5c = *(int *)(iVar7 + 0x1c) + (iVar9 - local_24) * 200;
      if ((short)local_c < 0) {
        iVar8 = iVar8 + -1;
      }
      local_38 = 0xb4;
      local_34 = 0xaa;
      local_58 = *(int *)(iVar7 + 0x1c) + (iVar8 - local_20) * 200;
      local_54 = local_50 + -0x32;
      if (local_50 + 1 == local_20) {
        local_38 = 0x10e;
      }
      local_30 = 0;
    }
  }
  local_40 = 0;
  local_44 = 0;
  local_14 = *(void **)(iVar7 + 0x58);
  if (local_14 == nullptr) {
    local_14 = st::fn_006AAC70(200);
  }
  iVar7 = local_10;
  iVar9 = st::fn_00405B3C(&local_64,st::machine_word_boundary_cast<undefined4>(&local_44),local_18,(int)local_14,local_10);
  if (iVar9 != 0) {
    st::fn_006AB060(&local_14);
    return local_1c;
  }
  *(void **)(param_1->field_02E6 + 0x58) = local_14;
  *(int *)(param_1->field_02E6 + 0x5c) = iVar7;
  return 1;
}

// 005F9BD0 FUN_005f9bd0
#line 1 "decomp/ST.exe/functions/005F9BD0/decomp.c"

void st::fn_005F9BD0(short param_1,short param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  short sVar1;
  short sVar2;
  int local_8;

  *param_5 = 0;
  *param_6 = 0;
  local_8 = 0;
  sVar2 = g_worldGrid.sizeX;
  for (; param_4 < param_3; param_4 = param_4 + 1) {
    if ((((-1 < param_1) && (param_1 < sVar2)) && (-1 < param_2)) &&
       (((param_2 < g_worldGrid.sizeY && (sVar1 = (short)param_4, -1 < sVar1)) &&
        ((sVar1 < g_worldGrid.sizeZ &&
         (g_worldGrid.cells
          [(int)sVar1 * (int)g_worldGrid.planeStride + (int)sVar2 * (int)param_2 + (int)param_1].
          objects[0] != nullptr)))))) {
      if (local_8 == 0) {
        *param_5 = param_4;
      }
      local_8 = local_8 + 1;
      *param_6 = param_4;
      sVar2 = g_worldGrid.sizeX;
    }
  }
  return;
}

// 005F9CB0 FUN_005f9cb0
#line 4 "decomp/ST.exe/functions/005F9CB0/decomp.c"
undefined4 __thiscall st::fn_005F9CB0(void *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = STField<int>(this,0x2e6);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (*(short *)(iVar2 + 0x32) == -1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = *(int *)(iVar2 + 0x60) - (param_1 - *(int *)(iVar2 + 0x68)) * *(int *)(iVar2 + 100);
    if (iVar4 < 1) {
      param_1 = 3;
      iVar4 = 0;
      goto LAB_005f9d2f;
    }
  }
  else {
    if (*(short *)(iVar2 + 0x32) != 1) {
      return 0;
    }
    iVar4 = (param_1 - *(int *)(iVar2 + 0x68)) * *(int *)(iVar2 + 100) + *(int *)(iVar2 + 0x60);
    if (*(int *)(iVar2 + 0x5c) <= iVar4) {
      param_1 = 3;
      iVar4 = *(int *)(iVar2 + 0x5c) + -1;
      goto LAB_005f9d2f;
    }
  }
  param_1 = 1;
LAB_005f9d2f:
  iVar3 = (int)*(short *)(*(int *)(iVar2 + 0x58) + 2 + iVar4 * 4);
  sVar1 = *(short *)(*(int *)(iVar2 + 0x58) + iVar4 * 4);
  *param_2 = (*(int *)(iVar2 + 0x50) * iVar3) / 10000 + *(int *)(iVar2 + 0x34);
  *param_3 = (*(int *)(STField<int>(this,0x2e6) + 0x54) * iVar3) / 10000 +
             *(int *)(STField<int>(this,0x2e6) + 0x38);
  iVar2 = STField<int>(this,0x2e6);
  if (*(int *)(iVar2 + 0x14) != *(int *)(iVar2 + 0x34)) {
    *param_2 = *param_2 +
               ((*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x34)) * iVar4) / *(int *)(iVar2 + 0x5c);
  }
  iVar2 = STField<int>(this,0x2e6);
  if (*(int *)(iVar2 + 0x18) != *(int *)(iVar2 + 0x38)) {
    *param_3 = *param_3 +
               ((*(int *)(iVar2 + 0x44) - *(int *)(iVar2 + 0x38)) * iVar4) / *(int *)(iVar2 + 0x5c);
  }
  *param_4 = *(int *)(STField<int>(this,0x2e6) + 0x3c) - (int)sVar1;
  return param_1;
}

// 005F9E40 FUN_005f9e40
#line 4 "decomp/ST.exe/functions/005F9E40/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall st::fn_005F9E40(AnonShape_005F9E40_7E333F34 *param_1)

{
  undefined4 *puVar1;
  STT3DSprC *this;
  int iVar2;

  puVar1 = (undefined4 *)param_1->field_02E6;
  if (puVar1 != nullptr) {
    this = (STT3DSprC *)*puVar1;
    if (this != nullptr) {
      st::fn_00401064(this,'\x0e',puVar1[8]);
      st::fn_004030BC(this,'\x0e');
      iVar2 = param_1->field_02E6;
      st::fn_004045D9
                (this,(float)*(int *)(iVar2 + 0x14) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 0x18) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 0x1c) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      return;
    }
    if (-1 < (int)puVar1[1]) {
      st::fn_006EA270(st::pointer_boundary_cast<ST3DSMAPContext *>(param_1->field_0211),puVar1[1],0,puVar1[8]);
      iVar2 = param_1->field_02E6;
      st::fn_006EA960
                (param_1->field_0211,*(uint *)(iVar2 + 4),
                 (float)*(int *)(iVar2 + 0x14) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 0x18) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 0x1c) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    }
  }
  return;
}

// 005F9F70 FUN_005f9f70
#line 4 "decomp/ST.exe/functions/005F9F70/decomp.c"
void __fastcall st::fn_005F9F70(AnonShape_005F9F70_43CA4DAC *param_1)

{
  STT3DSprC *pSVar1;
  uint uVar2;

  if ((undefined4 *)param_1->field_02E6 != nullptr) {
    pSVar1 = *(STT3DSprC **)param_1->field_02E6;
    if (pSVar1 != nullptr) {
      st::fn_004021D5(pSVar1);
      st::fn_0072E2B0(*(HoloTy **)param_1->field_02E6);
      *(undefined4 *)param_1->field_02E6 = 0;
    }
    uVar2 = *(uint *)(param_1->field_02E6 + 4);
    if (-1 < (int)uVar2) {
      st::fn_006E8BA0(param_1->field_0211,uVar2);
      *(undefined4 *)(param_1->field_02E6 + 4) = 0xffffffff;
    }
  }
  return;
}

// 005F9FF0 FUN_005f9ff0
#line 4 "decomp/ST.exe/functions/005F9FF0/decomp.c"
void __fastcall st::fn_005F9FF0(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x2e6);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x58) != 0)) {
    st::fn_006AB060((void *)(iVar1 + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2e6) + 0x58) = 0;
  }
  return;
}

// 005FA030 FUN_005fa030
#line 4 "decomp/ST.exe/functions/005FA030/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005FA070 -> 005FA030 @ 005FA08A; STColl3C::sub_005FA070 this; stable alias ESI */

void __fastcall st::fn_005FA030(STColl3C *param_1)

{
  st::fn_00403F8A((AnonShape_005F9F70_43CA4DAC *)param_1);
  st::fn_00403E77((int)param_1);
  if (param_1->field_02E6 != nullptr) {
    st::fn_006AB060(&param_1->field_02E6);
  }
  return;
}

// 005FA0B0 FUN_005fa0b0
#line 4 "decomp/ST.exe/functions/005FA0B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005F5F20 -> 005FA0B0 @ 005F6290 */

void __fastcall st::fn_005FA0B0(STColl3C *param_1)

{
  STColl3CVTable_at_1D5 **this;
  uint uVar1;

  this = &param_1->vtable_at_1d5;
  uVar1 = ((0x18 - (int)param_1->field_006C / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
  st::fn_00401064((STT3DSprC *)this,'\x0e',uVar1);
  st::fn_00401064((STT3DSprC *)this,'\f',uVar1);
  st::fn_004052FE((STT3DSprC *)this,'\x0e',(0x18 - (int)param_1->field_006C / 0xf) % 0x18);
  st::fn_004030BC((STT3DSprC *)this,'\x0e');
  return;
}

// 005FA180 FUN_005fa180
#line 4 "decomp/ST.exe/functions/005FA180/decomp.c"
int __fastcall st::fn_005FA180(AnonShape_005FA180_2D8671A3 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;

  iVar3 = param_1->field_02D1;
  if (g_playSystem_00802A38->field_00E4 % 5 != 0) {
    return iVar3;
  }
  if (param_1->field_02BB == '\x02') {
    puVar1 = st::pointer_boundary_cast<undefined1 *>(&param_1->field_0x1d5);
    st::fn_0040116D
              ((STT3DSprC *)puVar1,PTR_00806724->entries[iVar3],(int)PTR_00806724->field_002C);
    iVar3 = st::machine_word_boundary_cast<int>(param_1->field_02D1 + -1);
    param_1->field_02D1 = iVar3;
    if (iVar3 == (int)PTR_00806724->entryCount / 2) {
      cVar2 = st::fn_004056CD((int)puVar1);
      if (cVar2 != '\0') {
        st::fn_00401AB9((STColl3C *)param_1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)**(undefined4 **)puVar1)();
      }
    }
    iVar3 = param_1->field_02D1;
    if (iVar3 < 0) {
      param_1->field_02D1 = 0;
      st::fn_0040116D((STT3DSprC *)puVar1,0,(int)PTR_00806724->field_002C);
    }
    return iVar3;
  }
  puVar1 = st::pointer_boundary_cast<undefined1 *>(&param_1->field_0x1d5);
  st::fn_0040116D
            ((STT3DSprC *)puVar1,PTR_00806724->entries[iVar3],(int)PTR_00806724->field_002C);
  iVar3 = param_1->field_02D1;
  iVar6 = iVar3 + 1;
  param_1->field_02D1 = iVar6;
  if (PTR_00806724->entryCount <= iVar6) {
    param_1->field_02D1 = iVar3;
    st::fn_00404EC1((short)param_1->field_025D,(short)param_1->field_0261,
                       (short)param_1->field_0265,0,(AnonShape_00495FF0_59081BDD *)param_1);
    st::fn_00403D0F((STT3DSprC *)puVar1);
    param_1->field_02BB = 0;
    st::fn_0040464C(param_1);
    return iVar6;
  }
  if (iVar6 == (int)PTR_00806724->entryCount / 2) {
    st::fn_00402A90((STT3DSprC *)puVar1);
    iVar5 = (int)param_1->field_0045;
    iVar7 = (int)param_1->field_0043;
    iVar3 = (int)param_1->field_0041;
    uVar9 = 0;
    iVar8 = 0;
    uVar4 = st::fn_004052CC((STT3DSprC *)puVar1);
    st::fn_004051A5(uVar4,iVar8,iVar3,iVar7,iVar5,uVar9);
  }
  return iVar6;
}

// 005FA360 FUN_005fa360
#line 4 "decomp/ST.exe/functions/005FA360/decomp.c"
undefined4 __thiscall
st::fn_005FA360(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5,
            int *param_6,int *param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int local_14;
  int local_10;
  int local_8;

  local_14 = param_4;
  iVar2 = st::fn_006ACF90(STField<int>(this,0x27d),STField<int>(this,0x281),param_2,param_3);
  if (iVar2 < 7) {
    *param_5 = STField<int>(this,0x27d);
    *param_6 = STField<int>(this,0x281);
    *param_7 = STField<int>(this,0x285);
    *param_1 = 0;
    return 1;
  }
  iVar3 = st::fn_0040272A(param_2,param_3,STField<int>(this,0x27d),STField<int>(this,0x281)
                            );
  local_8 = 0;
  bVar1 = false;
  iVar2 = param_2;
  iVar5 = param_3;
  do {
    if (bVar1) goto LAB_005fa524;
    do {
      local_10 = 0;
      iVar4 = param_4;
      do {
        local_14 = iVar4;
        if (4 < iVar4) {
          local_14 = 0;
        }
        iVar2 = *(short *)(&DAT_007ce7b0 + (iVar3 + local_8) * 4) + param_2;
        iVar5 = *(short *)(&DAT_007ce7b2 + (iVar3 + local_8) * 4) + param_3;
        if ((((-1 < iVar2) && (iVar2 < g_worldGrid.sizeX)) && (-1 < iVar5)) &&
           (((iVar5 < g_worldGrid.sizeY && (-1 < local_14)) && (local_14 < g_worldGrid.sizeZ)))) {
          sVar6 = (short)iVar2;
          sVar7 = (short)iVar5;
          sVar8 = (short)local_14;
          iVar4 = st::fn_00404D3B(sVar6,sVar7,sVar8);
          if ((iVar4 != 0) &&
             (((sVar6 < 0 || (g_worldGrid.sizeX <= sVar6)) ||
              ((sVar7 < 0 ||
               ((((g_worldGrid.sizeY <= sVar7 || (sVar8 < 0)) || (g_worldGrid.sizeZ <= sVar8)) ||
                (STGridAt3D(g_worldGrid, sVar6, sVar7, sVar8).objects[0] == nullptr)))))))) {
            bVar1 = true;
            break;
          }
        }
        iVar4 = local_14 + 1;
        local_10 = local_10 + 1;
      } while (local_10 < 5);
    } while ((local_8 != 0) && (local_8 = -local_8, local_8 < 0));
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  if (!bVar1) {
    return 0;
  }
LAB_005fa524:
  *param_5 = iVar2;
  *param_6 = iVar5;
  *param_7 = local_14;
  *param_1 = 1;
  return 1;
}

// 005FA5E0 FUN_005fa5e0
#line 1 "decomp/ST.exe/functions/005FA5E0/decomp.c"

int st::fn_005FA5E0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;

  iVar2 = param_3 - param_1;
  if (iVar2 == 0) {
    return ((param_4 - param_2 < 1) - 1 & 0xfffffff8) + 0xc;
  }
  iVar1 = ((param_4 - param_2) * 1000) / iVar2;
  if (iVar2 < 0) {
    if (iVar1 < -0x13a3) {
      return 0xc;
    }
    if (iVar1 < -0x5d9) {
      return 0xb;
    }
    if (iVar1 < -0x29c) {
      return 10;
    }
    if (iVar1 < -199) {
      return 9;
    }
    if (iVar1 < 199) {
      return 8;
    }
    if (iVar1 < 0x29c) {
      return 7;
    }
    if (iVar1 < 0x5d9) {
      return 6;
    }
    if (iVar1 < 0x13a3) {
      return 5;
    }
    if (iVar1 < 0x2ff1509) {
      return 0;
    }
  }
  else {
    if (iVar1 < -0x13a3) {
      return 0xc;
    }
    if (-0x5da < iVar1) {
      if (iVar1 < -0x29c) {
        return 3;
      }
      if (iVar1 < -199) {
        return 2;
      }
      if (iVar1 < 199) {
        return 1;
      }
      if (0x29b < iVar1) {
        if (iVar1 < 0x5d9) {
          return 0xf;
        }
        if (0x13a2 < iVar1) {
          if (iVar1 < 0x2ff1509) {
            return 0;
          }
          return 0xd;
        }
        return 0xe;
      }
      return 0;
    }
  }
  return 4;
}

// 005FA7F0 FUN_005fa7f0
#line 4 "decomp/ST.exe/functions/005FA7F0/decomp.c"
undefined4 __thiscall
st::fn_005FA7F0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  st::fn_00405C90(this,6);
  st::fn_00405105(this,5);
  iVar1 = st::fn_00404318
                    (st::pointer_boundary_cast<AnonReceiver_004167A0 *>(this),(short)param_1,(short)param_2,(short)param_3);
  if (iVar1 == 0) {
    STField<undefined4>(this,0x299) = param_3;
    STField<undefined4>(this,0x291) = param_1;
    STField<undefined4>(this,0x295) = param_2;
    return 1;
  }
  if ((iVar1 != -1) && (iVar1 == 1)) {
    STField<undefined4>(this,0x299) = param_3;
    STField<undefined4>(this,0x291) = param_1;
    STField<undefined4>(this,0x295) = param_2;
    return 2;
  }
  return 0;
}

// 005FAC40 FUN_005fac40
#line 4 "decomp/ST.exe/functions/005FAC40/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=005FAC8D MOVSX EAX,word ptr [EBP + 0x8] */

void __thiscall
st::fn_005FAC40(void *this,short param_1,int param_2,int param_3,short param_4,short param_5,
            int param_6)

{
  int _param_1 = static_cast<int>(param_1);
  int _param_4 = static_cast<int>(param_4);
  int _param_5 = static_cast<int>(param_5);

  int iVar1;
  uint uVar2;
  int iVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000006;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000012;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000016;

  uVar2 = _param_1;
  if (STField<int>(this,0x2e6) != 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (_param_1 == 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_1 = _param_4;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_4 = _param_5;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_5 = param_6;
    }
    else {
      st::fn_004031E3(this,(uint *)&param_1,(int *)&param_4,&param_5);
    }
    if (param_2 == 1) {
      *(int *)(STField<int>(this,0x2e6) + 0x14) = (int)param_1;
      *(int *)(STField<int>(this,0x2e6) + 0x18) = (int)param_4;
      *(int *)(STField<int>(this,0x2e6) + 0x1c) = param_5 + -0x32;
      *(uint *)(STField<int>(this,0x2e6) + 0x68) = g_playSystem_00802A38->field_00E4;
      *(undefined4 *)(STField<int>(this,0x2e6) + 100) = 9;
      *(undefined4 *)(STField<int>(this,0x2e6) + 0x60) =
           *(undefined4 *)(STField<int>(this,0x2e6) + 0x1c);
      *(undefined4 *)(STField<int>(this,0x2e6) + 0x34) =
           *(undefined4 *)(STField<int>(this,0x2e6) + 0x14);
      *(undefined4 *)(STField<int>(this,0x2e6) + 0x38) =
           *(undefined4 *)(STField<int>(this,0x2e6) + 0x18);
      if (uVar2 == 0) {
        param_3 = *(int *)(STField<int>(this,0x2e6) + 0x3c);
      }
      else {
        *(int *)(STField<int>(this,0x2e6) + 0x3c) = param_3;
      }
      iVar1 = STField<int>(this,0x2e6);
      iVar3 = *(int *)(iVar1 + 0x1c) - param_3;
      if (iVar3 != 0) {
        *(int *)(iVar1 + 0x50) = (*(int *)(iVar1 + 100) * 100) / iVar3 + 1;
        *(undefined4 *)(STField<int>(this,0x2e6) + 0x54) =
             *(undefined4 *)(STField<int>(this,0x2e6) + 0x50);
      }
    }
  }
  return;
}

// 005FADA0 FUN_005fada0
#line 4 "decomp/ST.exe/functions/005FADA0/decomp.c"
undefined4 __thiscall st::fn_005FADA0(void *this,int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar3;
  short local_a;
  short local_8;
  short local_6;

  uVar3 = 0;
  if (STField<int>(this,0x2e6) == 0) {
    st::fn_00401168(st::pointer_boundary_cast<STColl3C *>(this));
  }
  else {
    st::fn_00403F8A(st::pointer_boundary_cast<AnonShape_005F9F70_43CA4DAC *>(this));
  }
  if (STField<int>(this,0x2e6) != 0) {
    memset((void *)(STField<int>(this,0x2e6) + 8), 0, 0x2a); /* compiler bulk-zero initialization */
    st::fn_004031E3(this,(uint *)&local_6,(int *)&local_8,&local_a);
    if (param_3 == 1) {
      st::fn_00405763(this,0,1,param_1,local_6,local_8,(int)local_a);
    }
    else {
      *(int *)(STField<int>(this,0x2e6) + 0x14) = (int)local_6;
      *(int *)(STField<int>(this,0x2e6) + 0x18) = (int)local_8;
      *(int *)(STField<int>(this,0x2e6) + 0x1c) = (int)local_a;
    }
    uVar3 = 1;
    if (STField<char>(this,0x2b6) != '\0') {
      st::fn_00401AAF
                (st::pointer_boundary_cast<AnonReceiver_00416270 *>(this),param_3);
      uVar1 = *(uint *)(STField<int>(this,0x2e6) + 4);
      if (-1 < (int)uVar1) {
        if (param_3 != 1) {
          param_2 = uVar1;
          uVar1 = st::fn_004052CC((STT3DSprC *)((int)this + 0x1d5));
        }
        st::fn_006EA460(STField<void *>(this,0x211),uVar1,param_2);
      }
    }
  }
  return uVar3;
}

// 005FAEE0 FUN_005faee0
#line 4 "decomp/ST.exe/functions/005FAEE0/decomp.c"
bool __fastcall st::fn_005FAEE0(AnonShape_005FAEE0_B5D482C5 *param_1)

{
  AnonNested_005FAEE0_02E6_E37EB1FC *pAVar1;
  int iVar2;
  int iVar3;

  pAVar1 = param_1->field_02E6;
  if (pAVar1 == nullptr) {
    return true;
  }
  iVar3 = pAVar1->field_0060 -
          (g_playSystem_00802A38->field_00E4 - pAVar1->field_0068) * pAVar1->field_0064;
  iVar2 = pAVar1->field_003C;
  pAVar1->field_001C = iVar3;
  pAVar1 = param_1->field_02E6;
  pAVar1->field_0014 = pAVar1->field_0014 + pAVar1->field_0050;
  pAVar1 = param_1->field_02E6;
  pAVar1->field_0018 = pAVar1->field_0018 + pAVar1->field_0054;
  return iVar3 < iVar2;
}

// 005FAF70 FUN_005faf70
#line 4 "decomp/ST.exe/functions/005FAF70/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005F8650 -> 005FAF70 @ 005F8788; STColl3C::sub_005F8650 parameter param_1

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005F8650 -> 005FAF70 @ 005F8788; STColl3C::sub_005F8650 parameter param_3

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 005F8650 -> 005FAF70 @ 005F8788; MOVSX at 005F8778 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 005F8650 -> 005FAF70 @ 005F8788; MOVSX at 005F8775 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 005F8650 -> 005FAF70 @ 005F8788; MOVSX at 005F874D establishes signed source width 2 */

int __thiscall
st::fn_005FAF70(void *this,int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  short sVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  sVar1 = (**(code **)(*(int *)this + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6);
  return (int)sVar1;
}

// 005FAFB0 FUN_005fafb0
#line 4 "decomp/ST.exe/functions/005FAFB0/decomp.c"
void __thiscall st::fn_005FAFB0(void *this,int param_1)

{
  if (STField<int>(this,0x2dd) == 1) {
    STField<uint>(this,0x2e1) = g_playSystem_00802A38->field_00E4 + param_1;
  }
  return;
}

// 005FAFF0 FUN_005faff0
#line 4 "decomp/ST.exe/functions/005FAFF0/decomp.c"
void __thiscall st::fn_005FAFF0(void *this,int param_1)

{
  uint uVar1;

  uVar1 = g_playSystem_00802A38->field_00E4;
  STField<undefined1>(this,0x2e5) = 1;
  STField<uint>(this,0x2e1) = uVar1 + param_1;
  return;
}

// 005FB030 FUN_005fb030
#line 4 "decomp/ST.exe/functions/005FB030/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0062E3A0 -> 005FB030 @ 0062E405 */

void __fastcall st::fn_005FB030(AnonShape_005FB030_9C7404C6 *param_1)

{
  switch(param_1->field_02DD) {
  case 1:
    param_1->field_02EA = 1;
    param_1->field_02EE = 0;
    return;
  case 3:
  case 6:
  case 0xc:
    param_1->field_02EF = 0;
  case 2:
  case 4:
    param_1->field_02EA = 1;
    param_1->field_02EE = 1;
    return;
  case 5:
    param_1->field_02EA = 1;
    param_1->field_02EE = 1;
  case 8:
  case 9:
  case 10:
  case 0xb:
    param_1->field_02EA = 1;
    param_1->field_02EE = 1;
    return;
  default:
    return;
  }
}

// 005FB100 FUN_005fb100
#line 4 "decomp/ST.exe/functions/005FB100/decomp.c"
void __fastcall st::fn_005FB100(AnonShape_005FB100_42251CC8 *param_1)

{
  int iVar1;
  int uVar2;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  uVar5 = 0;
  iVar1 = (int)param_1->field_0045;
  iVar2 = (int)param_1->field_0043;
  iVar3 = (int)param_1->field_0041;
  iVar4 = 0;
  uVar2 = st::fn_004052CC((STT3DSprC *)&param_1->field_0x1d5);
  st::fn_004051A5(uVar2,iVar4,iVar3,iVar2,iVar1,uVar5);
  uVar5 = g_playSystem_00802A38->field_00E4;
  param_1->field_02DD = 7;
  param_1->field_02E1 = uVar5 + 0x15;
  return;
}

// 005FB170 FUN_005fb170
#line 4 "decomp/ST.exe/functions/005FB170/decomp.c"
/* [STSwitchEnumApplier] Switch target field_02DD uses
   /SubmarineTitans/Recovered/Enums/STColl3C_field_02DDState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12

   [STSwitchEnumApplier] Switch target field_02DD uses
   /SubmarineTitans/Recovered/Enums/STColl3C_field_02DDState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13
    */

void __fastcall st::fn_005FB170(STColl3C *param_1)

{
  switch(param_1->field_02DD) {
  case CASE_1:
    st::fn_00401B04(param_1);
    return;
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_8:
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
    st::fn_00401D8E(param_1,0);
    st::fn_00403C1A(param_1);
    param_1->field_02DD = CASE_D;
  }
  return;
}

// 005FB1F0 FUN_005fb1f0
#line 4 "decomp/ST.exe/functions/005FB1F0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=005FB234 MOVSX EAX,word ptr [EBP + 0x10] */

uint __thiscall
st::fn_005FB1F0(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  int _param_3 = static_cast<int>(param_3);
  int _param_4 = static_cast<int>(param_4);

  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000e;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000012;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  uint local_c;
  int local_8;

  uVar3 = (int)param_1 - (int)STField<short>(this,0x41);
  uVar8 = (int)uVar3 >> 0x1f;
  if ((((int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a0) &&
      (uVar3 = (int)param_2 - (int)STField<short>(this,0x43), uVar8 = (int)uVar3 >> 0x1f,
      (int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a0)) &&
     (local_8 = (int)param_3, uVar3 = local_8 - STField<short>(this,0x45),
     uVar8 = (int)uVar3 >> 0x1f, (int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a8)) {
    uVar4 = st::fn_006AFF5B((int)STField<short>(this,0x6c));
    uVar5 = st::fn_006AFF50((int)STField<short>(this,0x6c));
    iVar9 = (int)param_1 - (int)STField<short>(this,0x41);
    iVar7 = (int)param_2 - (int)STField<short>(this,0x43);
    uVar3 = (int)(iVar9 * uVar5 - iVar7 * uVar4) / 10000;
    uVar8 = (int)(iVar7 * uVar5 + iVar9 * uVar4) / 10000;
    uVar6 = local_8 - STField<short>(this,0x45);
    if ((int)(DAT_007ce7a8 * uVar6 * uVar6 + DAT_007ce7a4 * uVar8 * uVar8 +
             DAT_007ce7a0 * uVar3 * uVar3) < DAT_007ce7ac) {
      iVar9 = (int)param_4 - (int)STField<short>(this,0x41);
      iVar7 = (int)param_5 - (int)STField<short>(this,0x43);
      st::fn_004051AA((int)(iVar9 * uVar5 - iVar7 * uVar4) / 10000,
                         (int)(iVar7 * uVar5 + iVar9 * uVar4) / 10000,
                         (int)param_6 - (int)STField<short>(this,0x45),uVar3,uVar8,uVar6,
                         (int *)&DAT_007ce794,0x7ce7a0,(uint *)&param_3,&local_c,&local_10);
      auto _param_4 = (int)(_param_3 * uVar5 + local_c * uVar4) / 10000;
      iVar7 = (int)(local_c * uVar5 - _param_3 * uVar4) / 10000;
      st::fn_006DD530
                (STField<ST3DSMAPContext *>(this,0x211),&local_1c,&local_18,&local_14);
      lVar10 = st::fn_0072E288();
      sVar1 = STField<short>(this,0x45);
      lVar11 = st::fn_0072E288();
      sVar2 = STField<short>(this,0x43);
      lVar12 = st::fn_0072E288();
      STPiece<0,1>(param_2) = (undefined1)iVar7;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return ((uint)(0 < (int)(((int)(short)lVar10 - (int)sVar1) * local_10 +
                               ((int)(short)lVar11 - (int)sVar2) * iVar7 +
                              ((int)(short)lVar12 - (int)STField<short>(this,0x41)) * _param_4))
              << 8 | local_10 & 0xff) << 0x10 | (uint)CONCAT11((undefined1)param_2,(char)_param_4);
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

// 005FB540 FUN_005fb540
#line 4 "decomp/ST.exe/functions/005FB540/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005FB567 SHR EAX,0x10 classifies dword parameter loaded at 005FB543 */

undefined4 __thiscall
st::fn_005FB540(void *this,uint param_1,short *param_2,short *param_3,short *param_4,int *param_5)

{
  *param_2 = STField<short>(this,0x41) + (short)(char)param_1;
  *param_3 = (short)(char)(param_1 >> 8) + STField<short>(this,0x43);
  *param_4 = (short)(char)(param_1 >> 0x10) + STField<short>(this,0x45);
  *param_5 = (int)(char)(param_1 >> 0x18) + (int)STField<short>(this,0x45);
  return 0;
}

// 005FB5C0 FUN_005fb5c0
#line 4 "decomp/ST.exe/functions/005FB5C0/decomp.c"
undefined4 st::fn_005FB5C0(void)

{
  return 0;
}

// 005FB600 FUN_005fb600
#line 4 "decomp/ST.exe/functions/005FB600/decomp.c"
undefined4 __fastcall st::fn_005FB600(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;

  uVar2 = 0;
  if (STField<int>(param_1,0x2a0) < 3) {
    uVar1 = st::fn_00403A49(param_1,1);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var,uVar1) == 0) {
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

// 005FC3A0 CreateSTContainer
#line 4 "decomp/ST.exe/functions/005FC3A0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9FC>00403558

   [STObjectFactoryApplier] Central object factory for 0x0157 (ST_OBJECT_ST_CONTAINER).
   Evidence: registry[91] at 007CA9F8 stores type 0x0157 and executable pointer 00403558; allocation
   size 1147 uniquely matches /STContainerC; calls base/helper constructor(s) STSprGameObjC; exact
   derived allocation size wins */

STContainerC * __cdecl st::fn_005FC3A0(void)

{
  STContainerC *this;

  this = (STContainerC *)st::fn_006B04D0(0x47b);
  if (this != nullptr) {
    st::fn_00401807((STSprGameObjC *)this);
    this->vtable = &st_global_0079C714;
    this->vtable_at_1d5 = &st_global_0079C710;
    return this;
  }
  return nullptr;
}

// 005FC450 FUN_005fc450
#line 4 "decomp/ST.exe/functions/005FC450/decomp.c"
bool __thiscall st::fn_005FC450(void *this,int param_1)

{
  int iVar1;

  iVar1 = STField<int>(this,0x23e) - param_1;
  STField<int>(this,0x23e) = iVar1;
  if (iVar1 < 1) {
    STField<undefined4>(this,0x23e) = 0;
  }
  return STField<int>(this,0x23e) == 0;
}

// 005FC4A0 FUN_005fc4a0
#line 4 "decomp/ST.exe/functions/005FC4A0/decomp.c"
undefined4 __fastcall st::fn_005FC4A0(AnonShape_005FC4A0_70B17F95 *param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;

  sVar8 = param_1->field_034E;
  bVar5 = false;
  bVar4 = false;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0242 = sVar8;
  sVar8 = param_1->field_0350;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0244 = sVar8;
  sVar8 = param_1->field_0352;
  sVar8 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
  param_1->field_0246 = sVar8;
  param_1->field_0231 = 0xfe;
  if ((((short)(param_1->field_046F * 0xc9 + 100) != param_1->field_034E) ||
      ((short)(param_1->field_0473 * 0xc9 + 100) != param_1->field_0350)) ||
     ((short)(param_1->field_0477 * 200 + 100) != param_1->field_0352)) {
    bVar5 = true;
    param_1->field_0242 = param_1->field_046F;
    param_1->field_0244 = param_1->field_0473;
    param_1->field_0246 = param_1->field_0477;
  }
  sVar8 = param_1->field_0242;
  sVar2 = param_1->field_0244;
  sVar3 = param_1->field_0246;
  if ((((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
        ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar3)) ||
      (STGridAt3D(g_worldGrid, sVar8, sVar2, sVar3).objects[0] == nullptr)) &&
     (iVar6 = st::fn_00401325
                        (sVar8,sVar2,sVar3,0,(RecoveredRecord_DumpClassC_00495EC0 *)param_1),
     iVar6 == 0)) {
    param_1->field_0252 = param_1->field_0252 + '\x01';
    bVar4 = true;
  }
  else {
    sVar8 = param_1->field_0242;
    sVar2 = param_1->field_0246;
    sVar3 = param_1->field_0244;
    if (sVar8 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar8) {
      return 0;
    }
    if (sVar3 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar3) {
      return 0;
    }
    if (sVar2 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar2) {
      return 0;
    }
    this = STGridAt3D(g_worldGrid, sVar8, sVar3, sVar2).objects[0];
    if (this == nullptr) {
      return 0;
    }
    iVar6 = this->GetObjectTypeId();
    if (((iVar6 != 0x1b) && (iVar6 != 7)) && (iVar6 != 0x13)) {
      return 0;
    }
    iVar6 = (*this->vtable[5].slots_00_28[9])(0xfe);
    if (iVar6 == 0) {
      return 0;
    }
    (*this->vtable[5].slots_00_28[10])(param_1->field_0018);
    param_1->field_02A3 = this[1].vtable;
    param_1->field_02AB = *(undefined2 *)&this[1].field_0xe;
    param_1->field_02A7 = *(undefined4 *)&this->field_0x18;
    param_1->field_024E = 1;
    param_1->field_024F = 1;
    param_1->field_023A = 4;
    if (param_1->field_0211 != nullptr) {
      st::fn_006EA460
                (param_1->field_0211,param_1->field_01ED,*(int *)&this[0xd].field_0x19);
    }
    bVar5 = false;
  }
  param_1->field_0251 = (byte)param_1->field_0354;
  iVar6 = (int)((ulonglong)((longlong)param_1->field_0354 * -0x77777777) >> 0x20) +
          param_1->field_0354;
  param_1->field_0277 = (int)param_1->field_034E;
  param_1->field_02BE = (int)param_1->field_034E;
  param_1->field_027B = (int)param_1->field_0350;
  param_1->field_027F = (int)param_1->field_0352;
  param_1->field_02BA = (iVar6 >> 3) - (iVar6 >> 0x1f);
  param_1->field_02C2 = (int)param_1->field_0350;
  param_1->field_02C6 = (int)param_1->field_0352;
  param_1->field_0231 = 0xfe;
  uVar7 = st::fn_004022B6(param_1->field_033E);
  param_1->field_02B1 = uVar7;
  param_1->field_0235 = param_1->field_0332;
  param_1->field_0236 = 0;
  param_1->field_023E = 2000;
  if (bVar4) {
    if (param_1->field_0342 == 1) {
      st::fn_00404223(param_1,(uint)param_1->field_0251);
      param_1->field_023A = 2;
      param_1->field_02E9 = 1;
    }
    else if (bVar5) {
      iVar6 = st::fn_00403FC6(param_1,(int)(short)(param_1->field_0242 * 0xc9 + 100),
                                 (int)(short)(param_1->field_0244 * 0xc9 + 100),
                                 (int)(short)(param_1->field_0246 * 200 + 100),param_1->field_0354,
                                 '\x01',0x1e);
      if (iVar6 != 0) {
        param_1->field_023A = 2;
      }
    }
    else {
      uVar1 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
      param_1->field_001C = uVar1;
      st::fn_00403FC6(param_1,param_1->field_0277,param_1->field_027B,st::machine_word_boundary_cast<int>(param_1->field_027F + -0x1e)
                         ,param_1->field_0354,'\0',0x1e - (uVar1 >> 0x10) % 0xb);
      param_1->field_023A = 1;
    }
  }
  param_1->field_02D6 = 0xffffffff;
  param_1->field_02D2 = 0xffffffff;
  param_1->field_02E0 = g_playSystem_00802A38->field_00E4;
  return 1;
}

// 005FCC00 FUN_005fcc00
#line 4 "decomp/ST.exe/functions/005FCC00/decomp.c"
int __thiscall st::fn_005FCC00(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;

  puVar3 = (byte *)(param_1);
  puVar4 = (byte *)((int)this + 0x326);
  memmove(puVar4, puVar3, 0x155); /* compiler REP MOVS byte copy */
  iVar2 = 0;
  puVar3 = (byte *)((int)param_1 + 0x155);
  puVar4 = (byte *)((int)this + 0x231);
  memmove(puVar4, puVar3, 0xf5); /* compiler REP MOVS byte copy */
  iVar1 = st::fn_00402559(st::pointer_boundary_cast<STAllPlayersC *>(this),(int *)((int)param_1 + 0x246));
  return iVar1 + 0x24a;
}

// 005FCC70 FUN_005fcc70
#line 4 "decomp/ST.exe/functions/005FCC70/decomp.c"
void __thiscall st::fn_005FCC70(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  pcVar4 = (char *)((int)this + 0x35c);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  memmove(param_1, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 005FCCB0 FUN_005fccb0
#line 4 "decomp/ST.exe/functions/005FCCB0/decomp.c"
void __thiscall st::fn_005FCCB0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg1;
  char *pcVar4_mg0;

  uVar2 = 0xffffffff;
  pcVar4_mg0 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar4_mg0 + 1;
  } while (cVar1 != '\0');
  if (0xe < ~uVar2 - 1) {
    st::fn_0072E340((char *)((int)this + 0x35c),param_1,0xe);
    STField<undefined1>(this,0x36a) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4_mg1 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4_mg1 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4_mg1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4_mg1 + -uVar2;
  pcVar5 = (char *)((int)this + 0x35c);
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 005FCD40 FUN_005fcd40
#line 4 "decomp/ST.exe/functions/005FCD40/decomp.c"
undefined4 st::fn_005FCD40(int param_1)

{
  if (param_1 != 1) {
    if (param_1 == 2) {
      return 1;
    }
    if (param_1 == 3) {
      return 2;
    }
  }
  return 0;
}

// 005FCDC0 FUN_005fcdc0
#line 4 "decomp/ST.exe/functions/005FCDC0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C848>004042FF | P:0079C848>004042FF */

undefined4 __fastcall st::fn_005FCDC0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x346)) {
  case 0xdc:
    return 2;
  default:
    return 0;
  case 0xde:
    return 1;
  case 0xe0:
    return 4;
  case 0xe2:
    return 3;
  }
}

// 005FCE70 FUN_005fce70
#line 4 "decomp/ST.exe/functions/005FCE70/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005FCE70 returns return of Library::MSVCRT::_strncpy @ 005FCE97 */

char * __thiscall st::fn_005FCE70(void *this,char *param_1)

{
  char *pcVar1;

  pcVar1 = st::fn_0072E340((char *)((int)this + 0x36b),param_1,0x103);
  STField<undefined1>(this,0x46e) = 0;
  return pcVar1;
}

// 005FCEB0 FUN_005fceb0
#line 4 "decomp/ST.exe/functions/005FCEB0/decomp.c"
void __fastcall st::fn_005FCEB0(AnonShape_005FCEB0_FA1F7938 *param_1)

{
  int iVar1;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  int local_8;

  if (DAT_008117bc != nullptr) {
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    local_12 = param_1->field_0032;
    local_10 = param_1->field_032A;
    local_18 = 0x5dd6;
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_0358,
                       &local_8);
    if (iVar1 != -4) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_e = *(undefined2 *)(local_8 + 0x32);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*DAT_008117bc)(local_28);
  }
  return;
}

// 005FCF50 FUN_005fcf50
#line 4 "decomp/ST.exe/functions/005FCF50/decomp.c"
/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044C130 -> 005FCF50 @ 0044C3FD */

void __cdecl
st::fn_005FCF50(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,char *param_5,
            undefined1 *param_6,STAllPlayersC_GetTOBJImage_param_2Enum *param_7)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  *param_4 = 0;
  *param_5 = '\0';
  *param_6 = 0x1d;
  *param_7 = 0;
  if ((param_3 == 0xe) || (param_3 == 0xc)) {
    if (param_1 == 1) {
      pcVar4 = "cont1";
    }
    else if (param_1 == 2) {
      pcVar4 = "cont2";
    }
    else {
      if (param_1 != 3) {
        return;
      }
      pcVar4 = &CHAR_c_007ce4d4;
    }
    uVar2 = 0xffffffff;
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    memmove(param_5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
    *param_4 = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
  }
  return;
}

// 005FCFF0 FUN_005fcff0
#line 4 "decomp/ST.exe/functions/005FCFF0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:9: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=005FD00D MOV ECX,dword ptr [EBP +
   0x2c]; first-use mask

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0064D890 -> 005FCFF0 @ 0064D9D1; zero-filled partial register load at 0064D91D

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0064D890 -> 005FCFF0 @ 0064D9D1; AiEventClassTy::_CreateRCCont parameter param_2; MOVSX
   at 0064D9C6 establishes signed source width 2 */

void __cdecl
st::fn_005FCFF0(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,char *param_8,undefined4 param_9,ushort param_10)

{
  int _param_10 = static_cast<int>(param_10);

  char cVar1;
  uint uVar3;
  char *pcVar5;
  char *pcVar7;
  uint local_15c [7];
  int local_140;
  int local_13c;
  undefined4 local_138;
  short local_134;
  short local_132;
  short local_130;
  undefined4 local_12e;
  undefined4 local_12a;
  char local_126 [14];
  undefined1 local_118;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  char *pcVar5_mg1;
  char *pcVar5_mg0;

  auto _param_10 = (uint)param_10;
  memset(local_15c, 0, 0x155); /* compiler bulk-zero initialization */
  local_15c[1] = param_1;
  local_15c[2] = 1;
  local_15c[3] = 1;
  local_13c = param_3;
  local_138 = param_4;
  local_140 = _param_10 << 0x10;
  local_13 = param_5;
  local_15c[0] = 0x1a4;
  local_15c[4] = 0;
  local_15c[5] = 0xfe;
  local_12e = 0;
  local_134 = (short)param_5 * 0xc9 + 100;
  local_f = param_6;
  local_15c[6] = param_2;
  local_132 = (short)param_6 * 0xc9 + 100;
  local_b = param_7;
  local_12a = param_9;
  local_130 = (short)param_7 * 200 + 100;
  if (param_8 != nullptr) {
    uVar3 = 0xffffffff;
    pcVar5_mg0 = param_8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5_mg0;
      pcVar5_mg0 = pcVar5_mg0 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0xf) {
      uVar3 = 0xffffffff;
      do {
        pcVar5_mg1 = param_8;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5_mg1 = param_8 + 1;
        cVar1 = *param_8;
        param_8 = pcVar5_mg1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5_mg1 + -uVar3;
      pcVar7 = local_126;
      memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
    }
    else {
      st::fn_0072E340(local_126,param_8,0xe);
      local_118 = 0;
    }
  }
  g_playSystem_00802A38->vfunc_08(0x157,0,0,(short)local_15c,0);
  return;
}

// 005FD1B0 FUN_005fd1b0
#line 4 "decomp/ST.exe/functions/005FD1B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005FD211 MOV AX,word ptr
   [EBP + 0x18]

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005FD207 MOV CX,word ptr
   [EBP + 0x1c]

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005FD1DC MOV DX,word ptr
   [EBP + 0x20] */

undefined4 __cdecl
st::fn_005FD1B0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            ushort param_5,ushort param_6,ushort param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,char *param_11,undefined4 param_12,undefined4 param_13)

{
  char cVar1;
  uint uVar3;
  char *pcVar5;
  char *pcVar7;
  undefined4 local_160 [7];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  ushort local_138;
  ushort local_136;
  ushort local_134;
  undefined4 local_132;
  undefined4 local_12e;
  char local_12a [14];
  undefined1 local_11c;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  int local_8;
  char *pcVar5_mg1;
  char *pcVar5_mg0;

  memset(local_160, 0, 0x155); /* compiler bulk-zero initialization */
  local_13c = param_4;
  local_160[1] = param_1;
  local_134 = param_7;
  local_160[2] = 1;
  local_160[3] = 1;
  local_140 = param_3;
  local_144 = 1;
  local_f = param_10;
  local_138 = param_5;
  local_136 = param_6;
  local_12e = param_12;
  local_17 = param_8;
  local_13 = param_9;
  local_8 = 0;
  local_160[0] = 0x1a4;
  local_160[4] = 0;
  local_160[5] = 0xfe;
  local_160[6] = param_2;
  local_132 = param_13;
  if (param_11 != nullptr) {
    uVar3 = 0xffffffff;
    pcVar5_mg0 = param_11;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5_mg0;
      pcVar5_mg0 = pcVar5_mg0 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0xf) {
      uVar3 = 0xffffffff;
      do {
        pcVar5_mg1 = param_11;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5_mg1 = param_11 + 1;
        cVar1 = *param_11;
        param_11 = pcVar5_mg1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5_mg1 + -uVar3;
      pcVar7 = local_12a;
      memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
    }
    else {
      st::fn_0072E340(local_12a,param_11,0xe);
      local_11c = 0;
    }
  }
  g_playSystem_00802A38->vfunc_08(0x157,0,(short)&local_8,(short)local_160,0);
  if (local_8 == 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(local_8 + 0x18);
}

// 005FD380 FUN_005fd380
#line 4 "decomp/ST.exe/functions/005FD380/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C858>004038FA | P:0079C858>004038FA */

undefined2 __fastcall st::fn_005FD380(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined2 *)(param_1 + 0x32);
}

// 005FD3A0 FUN_005fd3a0
#line 4 "decomp/ST.exe/functions/005FD3A0/decomp.c"
undefined4 __thiscall st::fn_005FD3A0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int local_EAX_152;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *puVar6;
  byte *local_10;
  uint local_c;
  short local_8;
  short local_6;

  iVar4 = param_1;
  iVar2 = st::fn_00403EBD(st::pointer_boundary_cast<STGameObjC *>(this),(STMessage *)param_1);
  if (iVar2 == 0xffff) {
    return 0xffff;
  }
  uVar1 = *(uint *)(iVar4 + 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      st::fn_00405C4F(st::pointer_boundary_cast<AnonShape_005FDA60_3863B978 *>(this));
      return 0;
    }
    if (uVar1 == 0) {
      iVar4 = st::fn_0040367A(st::pointer_boundary_cast<AnonShape_00600750_A7773F7A *>(this));
      if (iVar4 != 0) {
LAB_005fd4eb:
        st::fn_00403C10(this);
        return 0;
      }
    }
    else if (uVar1 == 2) {
      puVar5 = *(undefined4 **)(iVar4 + 0x14);
      if (puVar5[3] != 2) {
        puVar6 = (byte *)((int)this + 0x206);
        memmove(puVar6, puVar5, 0x2c); /* compiler REP MOVS byte copy */
        puVar5 = puVar5 + 0xb;
        STField<undefined4>(this,0x22a) = DAT_007e65e4;
        iVar4 = st::fn_00401B68();
        if (iVar4 != 0) {
          STField<undefined1>(this,0x232) = 1;
        }
        local_EAX_152 = st::fn_0040227F(st::pointer_boundary_cast<AnonShape_005FD850_1F07DA54 *>(this));
        if ((-1 < local_EAX_152) &&
           (iVar4 = st::fn_004026C6(this,st::pointer_boundary_cast<undefined2 *>(&local_6),(undefined2 *)((int)&param_1 + 2),&local_8),
           iVar4 != 0)) {
          st::fn_00405EB1(st::pointer_boundary_cast<AnonShape_005FEA50_174FA294 *>(this));
          st::fn_00403A17(this,(int)local_6,(int)STPiece<2,2>(param_1),(int)local_8);
          st::fn_00404610(this,(int)local_6,(int)STPiece<2,2>(param_1),0x45f);
          return 0;
        }
        goto LAB_005fd4eb;
      }
      iVar3 = st::fn_00404F98(this,puVar5);
      if (iVar3 != 0) {
        memset((void *)((int)this + 0x1d5), 0, 0x2d); /* compiler bulk-zero initialization */
        if (STField<char>(this,0x232) != '\0') {
          st::fn_00403E27
                    (st::pointer_boundary_cast<AnonReceiver_005FDB50 *>(this),0,-1);
          return 0;
        }
      }
    }
  }
  else if ((uVar1 == 0x10f) &&
          (local_10 = (byte *)st::fn_00403161(this,(int *)&local_c), local_10 != nullptr)) {
    st::fn_004025F9(g_playSystem_00802A38,STField<int *>(this,0x18),local_10,local_c);
    st::fn_006AB060(&local_10);
  }
  return 0;
}

// 005FD5C0 FUN_005fd5c0
#line 4 "decomp/ST.exe/functions/005FD5C0/decomp.c"
undefined4 st::fn_005FD5C0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = param_2 - param_1[3];
  if (iVar4 == 0) {
    return 0;
  }
  iVar1 = param_1[2];
  if (iVar4 < iVar1 / 2) {
    iVar2 = *param_1;
    iVar3 = iVar2 * iVar4 - (iVar2 * iVar4 * iVar4) / iVar1;
    iVar4 = ((param_1[1] * iVar3 * iVar3) / 10) / (iVar2 * iVar2 * 2);
    *param_3 = iVar3 / 10;
    *param_4 = iVar4 + (iVar4 * iVar3 * 2) / (iVar2 * iVar1 * 3);
    return 1;
  }
  return 2;
}

// 005FD6A0 FUN_005fd6a0
#line 4 "decomp/ST.exe/functions/005FD6A0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005FD6A0 returns return of sub_006E60A0 @ 005FD6C6 */

int __fastcall st::fn_005FD6A0(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 005FD6E0 FUN_005fd6e0
#line 4 "decomp/ST.exe/functions/005FD6E0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7AC>00404FFC

   [STObjectFactoryApplier] Central object factory for 0x010A (ST_OBJECT_TYPE_010A).
   Evidence: registry[17] at 007CA7A8 stores type 0x010A and executable pointer 00404FFC; allocation
   size 579 has no unique current class-layout match */

void * __cdecl st::fn_005FD6E0(void)

{
  undefined4 *puVar1;

  puVar1 = st::fn_006B04D0(0x243);
  if (puVar1 != nullptr) {
    puVar1 = st::fn_0040276B(puVar1);
    return puVar1;
  }
  return nullptr;
}

// 005FD710 FUN_005fd710
#line 4 "decomp/ST.exe/functions/005FD710/decomp.c"
undefined4 * __fastcall st::fn_005FD710(undefined4 *param_1)

{

  st::fn_00401933((STGameObjC *)param_1);
  *param_1 = st::machine_word_boundary_cast<undefined4>(&st_global_0079C8A0);
  memset((void *)((int)param_1 + 0x206), 0, 0x3d); /* compiler bulk-zero initialization */
  return param_1;
}

// 005FD750 FUN_005fd750
#line 4 "decomp/ST.exe/functions/005FD750/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00476A10 -> 005FD750 @ 00476B0B; MOVSX at 00476B00 establishes signed source width 2 |
   00476A10 -> 005FD750 @ 00476B69; MOVSX at 00476B60 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00476A10 -> 005FD750 @ 00476B0B; MOVSX at 00476AFD establishes signed source width 2 |
   00476A10 -> 005FD750 @ 00476B69; MOVSX at 00476B58 establishes signed source width 2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00476A10 -> 005FD750 @ 00476B0B; literal 100 at 00476B03 | 00476A10 -> 005FD750 @
   00476B69; literal 100 at 00476B5E */

void __cdecl
st::fn_005FD750(uint param_1,short param_2,short param_3,ushort param_4,uint param_5,undefined4 param_6
            )

{
  STGameObjC *this;
  int iVar1;
  uint local_30 [5];
  short local_1c;
  short local_1a;
  ushort local_18;
  undefined4 local_16;
  ushort local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_30, 0, 0x2c); /* compiler bulk-zero initialization */
  local_1c = param_2;
  local_1a = param_3;
  local_18 = param_4;
  local_12 = (ushort)param_5;
  local_30[3] = 1;
  local_30[2] = 1;
  local_30[1] = param_1;
  local_30[0] = 0x82;
  this = st::fn_004028BA(g_allPlayers_007FA174,(char)param_1,local_12,CASE_1);
  if (this != nullptr) {
    iVar1 = this->vfunc_F8();
    if (iVar1 != 0) {
      local_16 = this->field_0018;
    }
  }
  local_10 = param_6;
  local_c = 0xb4;
  local_8 = 5;
  g_playSystem_00802A38->vfunc_08(0x10a,0,0,(short)local_30,0);
  return;
}

// 005FD830 FUN_005fd830
#line 4 "decomp/ST.exe/functions/005FD830/decomp.c"
undefined4 st::fn_005FD830(void)

{
  return 1;
}

// 005FD850 FUN_005fd850
#line 4 "decomp/ST.exe/functions/005FD850/decomp.c"
int __fastcall st::fn_005FD850(AnonShape_005FD850_1F07DA54 *param_1)

{
  byte *puVar1;
  AnonShape_004AB810_8E5693D5 *pAVar2;
  int iVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  int local_8;

  iVar6 = 0;
  iVar3 = -1;
  local_8 = -1;
  if (param_1->field_0226 != 0) {
    puVar1 = (byte *)(st::fn_006AAC70(st::machine_word_boundary_cast<uint>(param_1->field_0226 * 0x52)));
    param_1->field_0233 = st::machine_word_boundary_cast<undefined4>(puVar1);
    local_8 = 0;
    uVar4 = st::machine_word_boundary_cast<uint>(param_1->field_0226 * 0x52);
    memset(puVar1, 0, uVar4); /* compiler bulk-zero initialization */
    iVar3 = 0;
  }
  if (((param_1->field_0233 != 0) && (param_1->field_0232 != '\0')) &&
     (iVar7 = 0, 0 < param_1->field_0226)) {
    do {
      pAVar2 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
      if (pAVar2 == nullptr) {
        pAVar2 = nullptr;
      }
      else {
        pAVar2 = st::fn_00401316(pAVar2);
      }
      iVar6 = iVar6 + 0x52;
      *(AnonShape_004AB810_8E5693D5 **)(param_1->field_0233 + -0x10 + iVar6) = pAVar2;
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1->field_0226);
    return local_8;
  }
  return iVar3;
}

// 005FD940 FUN_005fd940
#line 4 "decomp/ST.exe/functions/005FD940/decomp.c"
int __thiscall st::fn_005FD940(void *this,int param_1)

{
  STT3DSprC *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;

  iVar2 = 0;
  local_8 = 0;
  if (((STField<int>(this,0x233) != 0) && (STField<int>(this,0x226) != 0)) &&
     (iVar3 = 0, 0 < STField<int>(this,0x226))) {
    iVar4 = 0;
    do {
      if (iVar3 == param_1) {
        if (*(int *)(iVar4 + 0x4e + STField<int>(this,0x233)) != 0) {
          st::fn_006AB060((void *)(iVar4 + 0x4e + STField<int>(this,0x233)));
          iVar2 = local_8;
        }
        pSVar1 = *(STT3DSprC **)(iVar4 + 0x42 + STField<int>(this,0x233));
        if (pSVar1 != nullptr) {
          st::fn_004021D5(pSVar1);
          st::fn_0072E2B0(*(HoloTy **)(iVar4 + 0x42 + STField<int>(this,0x233)));
          *(undefined4 *)(iVar4 + 0x42 + STField<int>(this,0x233)) = 0;
          iVar2 = local_8;
        }
        *(undefined4 *)(iVar4 + 0x39 + STField<int>(this,0x233)) = 5;
      }
      else if (*(int *)(iVar4 + 0x39 + STField<int>(this,0x233)) != 5) {
        iVar2 = iVar2 + 1;
        local_8 = iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x52;
    } while (iVar3 < STField<int>(this,0x226));
    return iVar2;
  }
  return 0;
}

// 005FDA60 FUN_005fda60
#line 4 "decomp/ST.exe/functions/005FDA60/decomp.c"
void __fastcall st::fn_005FDA60(AnonShape_005FDA60_3863B978 *param_1)

{
  int *slotStorage;
  STT3DSprC *pSVar1;
  int iVar2;
  int local_8;

  slotStorage = &param_1->field_0233;
  iVar2 = 0;
  if (param_1->field_0233 != 0) {
    if ((param_1->field_0226 != 0) && (local_8 = 0, 0 < param_1->field_0226)) {
      do {
        if (*(int *)(iVar2 + 0x4e + *slotStorage) != 0) {
          st::fn_006AB060((void *)(iVar2 + 0x4e + *slotStorage));
        }
        pSVar1 = *(STT3DSprC **)(iVar2 + 0x42 + *slotStorage);
        if (pSVar1 != nullptr) {
          st::fn_004021D5(pSVar1);
          st::fn_0072E2B0(*(HoloTy **)(iVar2 + 0x42 + *slotStorage));
          *(undefined4 *)(iVar2 + 0x42 + *slotStorage) = 0;
        }
        local_8 = local_8 + 1;
        iVar2 = iVar2 + 0x52;
      } while (local_8 < param_1->field_0226);
    }
    st::fn_006AB060(slotStorage);
  }
  if (param_1->field_023B != 0) {
    st::fn_006AB060(&param_1->field_023B);
  }
  if (param_1->field_023F != 0) {
    st::fn_006AB060(&param_1->field_023F);
  }
  return;
}

// 005FE280 FUN_005fe280
#line 4 "decomp/ST.exe/functions/005FE280/decomp.c"
undefined4 st::fn_005FE280(short *param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  short *psVar1;
  int iVar2;
  int iVar3;

  iVar2 = param_2;
  psVar1 = param_1;
  iVar3 = st::fn_00402FE5((int *)((int)param_1 + 0x29),param_2,&param_2,(int *)&param_1);
  if (iVar3 == 1) {
    *param_3 = (*(int *)(psVar1 + 0xc) * param_2) / *(int *)(psVar1 + 0x10) + (int)*psVar1;
    *param_4 = (*(int *)(psVar1 + 0xe) * param_2) / *(int *)(psVar1 + 0x10) + (int)psVar1[1];
    *param_5 = (int)psVar1[2] - (int)param_1;
    return 1;
  }
  if (iVar3 == 2) {
    *param_3 = (int)*psVar1;
    *param_4 = (int)psVar1[1];
    *param_5 = (int)psVar1[2] - (iVar2 - STField<int>(psVar1,0x35)) * *(int *)(psVar1 + 0x12);
    return 1;
  }
  return 0;
}

// 005FE360 FUN_005fe360
#line 4 "decomp/ST.exe/functions/005FE360/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=005FE3A0 MOVSX EDI,word ptr [EBP + 0x1c] */

undefined4
st::fn_005FE360(short *param_1,int param_2,int param_3,short param_4,int param_5,short param_6,
            short param_7)

{
  int _param_6 = static_cast<int>(param_6);

  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000001a;

  param_1[7] = param_6;
  param_1[2] = param_4;
  param_1[8] = param_7;
  *param_1 = (short)param_2;
  param_1[1] = (short)param_3;
  *(int *)(param_1 + 0xc) = (int)(short)param_5 - (int)(short)param_2;
  param_1[6] = (short)param_5;
  *(int *)(param_1 + 0xe) = (int)param_6 - (int)(short)param_3;
  iVar2 = st::fn_006ACED8(param_2,param_3,param_5,_param_6);
  *(int *)(param_1 + 0x10) = iVar2;
  param_1[0x12] = 0x11;
  param_1[0x13] = 0;
  if (iVar2 == 0) {
    return 0;
  }
  param_1[3] = *param_1;
  param_1[9] = *param_1;
  sVar1 = param_1[2];
  iVar3 = (iVar2 + -100) / 0x32;
  param_1[4] = param_1[1];
  param_1[5] = sVar1;
  param_1[10] = param_1[1];
  param_1[0xb] = sVar1;
  if (0x1d < iVar3) {
    iVar3 = 0xf;
  }
  iVar4 = (int)sVar1 - (int)param_1[8];
  STField<undefined4>(param_1,0x2d) = 7;
  STField<undefined4>(param_1,0x31) = 200;
  if (800 < iVar4) {
    if (iVar4 < 0x3b6) {
      iVar5 = *(int *)(&DAT_007ce948 + iVar3 * 4);
      iVar3 = *(int *)(&DAT_007ce9c8 + iVar3 * 4);
      STField<undefined4>(param_1,0x35) = 0;
      STField<int>(param_1,0x29) = iVar5 - ((iVar5 - iVar3) * (iVar4 + -800)) / 200;
      return 1;
    }
    return 0xffffffff;
  }
  if (iVar4 < 600) {
    if (iVar4 < 400) {
      if (iVar4 < 200) {
        iVar5 = *(int *)(iVar3 * 4 + 0x7ceac8);
      }
      else {
        iVar5 = *(int *)(iVar3 * 4 + 0x7ceac8);
        iVar5 = ((*(int *)(iVar3 * 4 + 0x7cea48) - iVar5) * (iVar4 + -400)) / 200 + iVar5;
      }
    }
    else {
      iVar5 = *(int *)(iVar3 * 4 + 0x7cea48);
      iVar5 = ((*(int *)(&DAT_007ce9c8 + iVar3 * 4) - iVar5) * (iVar4 + -400)) / 200 + iVar5;
    }
  }
  else {
    iVar5 = ((*(int *)(&DAT_007ce948 + iVar3 * 4) - *(int *)(&DAT_007ce9c8 + iVar3 * 4)) *
            (iVar4 + -600)) / 200 + *(int *)(&DAT_007ce9c8 + iVar3 * 4);
  }
  STField<int>(param_1,0x29) = iVar5;
  STField<undefined4>(param_1,0x35) = 0;
  return 1;
}

// 005FE5D0 FUN_005fe5d0
#line 4 "decomp/ST.exe/functions/005FE5D0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005FFF60 @ 0060000F
   -> TEST TEST EAX,EAX */

int __thiscall st::fn_005FE5D0(void *this,int param_1,undefined2 *param_2,int param_3)

{
  short *psVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_c = 1;
  local_8 = 0;
  if (STField<int>(this,0x233) == 0) {
    return 0;
  }
  psVar1 = (short *)(param_1 * 0x52 + STField<int>(this,0x233));
  if (*(int *)(psVar1 + 0x27) != 0) {
    st::fn_006AB060(psVar1 + 0x27);
  }
  pvVar2 = st::fn_006AAC70(600);
  *(void **)(psVar1 + 0x27) = pvVar2;
  psVar1[0x23] = 0;
  psVar1[0x24] = 0;
  psVar1[0x25] = 0;
  psVar1[0x26] = 0;
  local_20 = -1;
  local_24 = -1;
  local_28 = -1;
  do {
    if (local_8 == 0) {
      local_8 = 1;
      **(undefined2 **)(psVar1 + 0x27) = *param_2;
      *(undefined2 *)(*(int *)(psVar1 + 0x27) + 2) = param_2[1];
      *(undefined2 *)(*(int *)(psVar1 + 0x27) + 4) = param_2[2];
    }
    else {
      iVar3 = st::fn_00403328(psVar1,local_8,&local_10,&local_14,&local_18);
      if (iVar3 != 0) {
        if (local_18 <= *(short *)(param_3 + 4)) {
          local_c = 0;
        }
        iVar3 = STBiasedDiv16(local_10, 0xc9); /* exact signed 16-bit grid-index division */
        iVar8 = STBiasedDiv16(local_14, 0xc9); /* exact signed 16-bit grid-index division */
        iVar7 = STBiasedDiv16(local_18, 200); /* exact signed 16-bit grid-index division */
        if ((((iVar3 < 0) || (g_worldGrid.sizeX <= iVar3)) || (iVar8 < 0)) ||
           (((g_worldGrid.sizeY <= iVar8 || (iVar7 < 0)) || (g_worldGrid.sizeZ <= iVar7)))) {
          local_8 = local_8 + -1;
          if (local_8 < 1) {
            st::fn_00403C10(this);
            return 0;
          }
          goto cf_common_exit_005FE866;
        }
        if (((iVar3 != local_20) || (iVar8 != local_24)) || (iVar7 != local_28)) {
          sVar9 = (short)iVar3;
          sVar10 = (short)iVar8;
          sVar11 = (short)iVar7;
          iVar4 = st::fn_00404D3B(sVar9,sVar10,sVar11);
          local_28 = iVar7;
          local_24 = iVar8;
          local_20 = iVar3;
          if ((iVar4 == 0) &&
             ((((((-1 < sVar9 && (sVar9 < g_worldGrid.sizeX)) && (-1 < sVar10)) &&
                ((sVar10 < g_worldGrid.sizeY && (-1 < sVar11)))) &&
               ((sVar11 < g_worldGrid.sizeZ &&
                (STGridAt3D(g_worldGrid, sVar9, sVar10, sVar11).objects[0] != nullptr)))) ||
              (uVar5 = st::fn_00404A3E(local_10,local_14,local_18), -1 < (int)uVar5)))) {
            local_c = 0;
          }
        }
        piVar6 = (int *)(psVar1 + 0x27);
        iVar3 = local_8 * 6;
        local_8 = local_8 + 1;
        *(undefined2 *)(*piVar6 + iVar3) = (undefined2)local_10;
        *(undefined2 *)(*piVar6 + 2 + iVar3) = (undefined2)local_14;
        *(undefined2 *)(*piVar6 + 4 + iVar3) = (undefined2)local_18;
        if (99 < local_8) {
          local_c = 0;
          goto cf_common_exit_005FE866;
        }
      }
    }
    if (local_c == 0) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
cf_common_exit_005FE866:
      *(uint *)(param_1 * 0x52 + 0x35 + STField<int>(this,0x233)) =
           g_playSystem_00802A38->field_00E4;
      if (local_8 != 0) {
        *(int *)(psVar1 + 0x23) = local_8;
      }
      local_2c = (uint)(local_c == 0);
      return local_2c;
    }
  } while( true );
}

// 005FE990 FUN_005fe990
#line 4 "decomp/ST.exe/functions/005FE990/decomp.c"
undefined4 st::fn_005FE990(int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (200 < param_1) {
    switch(param_1 / 200) {
    case 1:
      if (param_2 < 0x12d) {
        uVar1 = 1;
      }
      break;
    case 2:
      if (param_2 < 0x1f6) {
        return 1;
      }
      break;
    case 3:
      if (param_2 < 0x2bf) {
        return 1;
      }
      break;
    case 4:
      if (param_2 < 0x388) {
        return 1;
      }
    }
  }
  return uVar1;
}

// 005FEA50 FUN_005fea50
#line 4 "decomp/ST.exe/functions/005FEA50/decomp.c"
void __fastcall st::fn_005FEA50(AnonShape_005FEA50_174FA294 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  iVar5 = 0;
  if (0 < param_1->field_0226) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      *(undefined4 *)(iVar3 + 0x39 + param_1->field_0233) = 2;
      iVar1 = param_1->field_022E;
      if ((iVar1 == 5) || (iVar1 == 6)) {
        if (uVar4 < 0x51) {
          uVar2 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
          param_1->field_001C = uVar2;
          uVar2 = uVar2 >> 0x10 & 7;
        }
        else if (iVar1 == 5) {
          uVar2 = (g_playSystem_00802A38->field_00E4 - 0x4a) + uVar4;
        }
        else if (uVar4 < 0x99) {
          uVar2 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
          param_1->field_001C = uVar2;
          uVar2 = uVar2 >> 0x10 & 7;
        }
        else {
          uVar2 = (g_playSystem_00802A38->field_00E4 - 0x94) + uVar4;
        }
      }
      else {
        uVar2 = st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 + uVar4);
      }
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 + 9;
      *(uint *)(iVar3 + 0x3d + param_1->field_0233) = uVar2;
      iVar3 = iVar3 + 0x52;
    } while (iVar5 < param_1->field_0226);
  }
  return;
}

// 005FEB60 FUN_005feb60
#line 4 "decomp/ST.exe/functions/005FEB60/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int __thiscall st::fn_005FEB60(void *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  void **ppvVar4;
  short sVar5;
  int iVar6;
  int iVar8;
  int iVar7;
  uint uVar9;
  void *pvVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  uint *puVar16;
  STWorldObject *this_00;
  undefined4 *puVar17;
  bool bVar18;
  uint auStack_69c [383];
  undefined4 uStack_a0;
  int local_64;
  int local_60;
  int local_58;
  int local_50;
  int local_44;
  short local_30 [2];
  short local_2c [4];
  int local_24;
  short local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079c9a0);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  iVar13 = 0;
  local_50 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  if (local_50 < 1) {
    iVar13 = 0;
  }
  else {
    sVar14 = STField<short>(this,0x21a);
    local_64 = STBiasedDiv16(sVar14, 0xc9); /* exact signed 16-bit grid-index division */
    sVar14 = STField<short>(this,0x21c);
    iVar15 = STBiasedDiv16(sVar14, 0xc9); /* exact signed 16-bit grid-index division */
    uStack_a0 = 0x5fec55;
    local_1c = (undefined1 *)auStack_69c;
    local_8 = 0xffffffff;
    local_44 = 0;
    ExceptionList = &local_14;
    ppvVar4 = &local_14;
    puVar16 = auStack_69c;
    if (0 < local_50) {
      do {
        iVar6 = local_50 - local_44;
        iVar12 = iVar15 - iVar6;
        local_24 = local_64 - iVar6;
        local_60 = iVar6 + 1 + iVar15;
        local_58 = iVar6 + 1 + local_64;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        if (local_24 < 0) {
          local_24 = 0;
        }
        if (g_worldGrid.sizeY < local_60) {
          local_60 = (int)g_worldGrid.sizeY;
        }
        if (g_worldGrid.sizeX < local_58) {
          local_58 = (int)g_worldGrid.sizeX;
        }
        for (; iVar6 = local_24, iVar12 < local_60; iVar12 = iVar12 + 1) {
          for (; iVar6 < local_58; iVar6 = iVar6 + 1) {
            sVar14 = (short)iVar6;
            if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                 (sVar5 = (short)iVar12, sVar5 < 0)) ||
                ((g_worldGrid.sizeY <= sVar5 || (sVar11 = (short)local_44, sVar11 < 0)))) ||
               (g_worldGrid.sizeZ <= sVar11)) {
              this_00 = nullptr;
            }
            else {
              this_00 = STGridAt3D(g_worldGrid, sVar14, sVar5, sVar11).objects[0];
            }
            if (((this_00 != nullptr) &&
                (iVar8 = (*this_00->vtable[5].slots_00_28[0])(), iVar8 != 0)) &&
               ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
                ((g_playSystem_00802A38 == nullptr ||
                 (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8)))))) {
              bVar1 = *(byte *)&this_00[1].vtable;
              bVar2 = STField<byte>(this,0x24);
              if (DAT_00808a8f == '\0') {
                if (bVar1 == bVar2) {
LAB_005fee45:
                  iVar8 = 0;
                }
                else {
                  bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                  if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar8 = -2;
                  }
                  else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar8 = -1;
                  }
                  else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                    iVar8 = 1;
                  }
                  else {
                    if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                    goto LAB_005fee45;
                    iVar8 = 2;
                  }
                }
                bVar18 = iVar8 < 0;
              }
              else {
                bVar18 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar1].field_0023;
              }
              if ((bVar18) && (iVar8 = (*this_00->vtable[5].slots_00_28[2])(), iVar8 != 0)) {
                st::fn_004031E3(this_00,(uint *)local_20,(int *)local_30,local_2c);
                iVar7 = st::fn_006ACF90(param_1,param_2,(int)local_20[0],(int)local_30[0]);
                iVar8 = st::fn_00404B9C(param_3 - local_2c[0],iVar7);
                if (iVar8 != 0) {
                  iVar8 = 0;
                  if (0 < iVar13) {
                    do {
                      if (((uint)*(ushort *)&this_00[1].field_0xe == auStack_69c[iVar8 * 6]) &&
                         (this_00[1].vtable == (STWorldObjectVTable *)auStack_69c[iVar8 * 6 + 2]))
                      goto LAB_005fef0e;
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < iVar13);
                  }
                  auStack_69c[iVar13 * 6 + 2] = (uint)this_00[1].vtable;
                  auStack_69c[iVar13 * 6] = (uint)*(ushort *)&this_00[1].field_0xe;
                  uVar9 = this_00->GetObjectTypeId();
                  auStack_69c[iVar13 * 6 + 1] = uVar9;
                  auStack_69c[iVar13 * 6 + 3] = *(uint *)&this_00[0xe].field_0x1d;
                  auStack_69c[iVar13 * 6 + 4] = *(uint *)((int)&this_00[0xe].value_20 + 1);
                  iVar13 = iVar13 + 1;
                }
              }
            }
LAB_005fef0e:
          }
        }
        local_44 = local_44 + 1;
        ppvVar4 = st::pointer_boundary_cast<void **>(ExceptionList);
        puVar16 = (uint *)local_1c;
      } while (local_44 < local_50);
    }
    local_1c = (undefined1 *)puVar16;
    ExceptionList = ppvVar4;
    if (iVar13 != 0) {
      STField<int>(this,0x237) = iVar13;
      pvVar10 = st::fn_006AAC70(iVar13 * 0x18);
      STField<void *>(this,0x23b) = pvVar10;
      pvVar10 = st::fn_006AAC70(iVar13 * 4);
      STField<void *>(this,0x23f) = pvVar10;
      puVar16 = auStack_69c;
      puVar17 = STField<undefined4 *>(this,0x23b);
      for (iVar15 = (iVar13 * 3 & 0x1fffffffU) << 1; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
      for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar16;
        puVar16 = st::pointer_boundary_cast<uint *>((undefined4 *)((int)puVar16 + 1));
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      iVar15 = 0;
      if (0 < iVar13) {
        do {
          *(int *)(STField<int>(this,0x23f) + iVar15 * 4) = iVar15;
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar13);
      }
      if (STField<int>(this,0x226) < iVar13) {
        st::fn_0040305D(STField<int>(this,0x23b),STField<int *>(this,0x23f),iVar13);
      }
    }
  }
  ExceptionList = local_14;
  return iVar13;
}

// 005FF150 FUN_005ff150
#line 1 "decomp/ST.exe/functions/005FF150/decomp.c"

void st::fn_005FF150(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_c;
  int local_8;

  local_c = 0;
  piVar6 = param_2;
  if (0 < param_3) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(param_1 + 0x10 + *piVar6 * 0x18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)(param_1 + *piVar6 * 0x18 + 0xc);
      piVar5 = param_2;
      local_8 = local_c;
      if (0 < local_c) {
        do {
          iVar4 = *piVar5;
          iVar1 = param_1 + iVar4 * 0x18;
          if (*(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0xc) <= iVar2 + iVar3) {
            *piVar5 = *piVar6;
            *piVar6 = iVar4;
          }
          local_8 = local_8 + -1;
          piVar5 = piVar5 + 1;
        } while (local_8 != 0);
      }
      local_c = local_c + 1;
      piVar6 = piVar6 + 1;
    } while (local_c < param_3);
  }
  return;
}

// 005FF1F0 FUN_005ff1f0
#line 4 "decomp/ST.exe/functions/005FF1F0/decomp.c"
int __thiscall st::fn_005FF1F0(void *this,undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_10;
  uint local_8;

  uVar6 = 0;
  local_8 = 0;
  local_10 = -1;
  if ((param_3 != 0) &&
     (((param_3 < 1 || (4 < param_3)) ||
      (uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039, STField<uint>(this,0x1c) = uVar1
      , (uVar1 >> 0x10) % (param_3 + 1U) == 0)))) {
    return 30000;
  }
  iVar3 = STField<int>(this,0x237);
  iVar2 = STField<int>(this,0x226) * 2;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  if (iVar3 < 2) {
    if (iVar3 == 1) {
      return 0;
    }
    return -1;
  }
  if (0 < iVar3) {
    piVar5 = STField<int *>(this,0x23f);
    iVar2 = iVar3;
    do {
      iVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      iVar7 = STField<int>(this,0x23b) + iVar7 * 0x18;
      uVar6 = uVar6 + *(int *)(iVar7 + 0x10) + *(int *)(iVar7 + 0xc);
      iVar2 = iVar2 + -1;
      local_8 = uVar6;
    } while (iVar2 != 0);
  }
  do {
    if ((param_2 < 1) || ((int)local_8 < 1)) {
      return local_10;
    }
    iVar7 = 0;
    uVar6 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar6;
    iVar2 = 0;
    if (0 < iVar3) {
      piVar5 = STField<int *>(this,0x23f);
      do {
        iVar4 = STField<int>(this,0x23b) + *piVar5 * 0x18;
        iVar4 = *(int *)(iVar4 + 0x10) + *(int *)(iVar4 + 0xc);
        iVar7 = iVar7 + iVar4;
        if ((int)((uVar6 >> 0x10) % local_8) <= iVar7) goto LAB_005ff2fa;
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar2 < iVar3);
      iVar2 = 0;
LAB_005ff2fa:
      if (0 < iVar4) {
        local_10 = iVar2;
      }
    }
    param_2 = param_2 + -1;
  } while( true );
}

// 005FF3A0 FUN_005ff3a0
#line 4 "decomp/ST.exe/functions/005FF3A0/decomp.c"
undefined4 __thiscall
st::fn_005FF3A0(void *this,undefined2 *param_1,undefined2 *param_2,short *param_3)

{
  STGameObjC *this_00;
  int iVar1;

  this_00 = st::fn_004028BA
                      (g_allPlayers_007FA174,STField<char>(this,0x20a),
                       STField<ushort>(this,0x224),CASE_1);
  if (this_00 != nullptr) {
    iVar1 = this_00->vfunc_F8();
    if (iVar1 != 0) {
      st::fn_004031E3(this_00,(uint *)param_1,(int *)param_2,param_3);
      *param_3 = *param_3 + -0x1e;
      return 1;
    }
  }
  return 0;
}

// 005FF430 FUN_005ff430
#line 4 "decomp/ST.exe/functions/005FF430/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005FF430_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 005FF430 -> 00416270 @ 005FF4AC */

undefined4 __thiscall
st::fn_005FF430(void *this,Global_sub_005FF430_param_1Enum param_1,int param_2,undefined4 param_3,
            short *param_4,undefined4 param_5,short *param_6,short *param_7,undefined2 *param_8)

{
  ushort *puVar1;
  short sVar2;
  STAllPlayersC_GetObjPtr_param_3Enum SVar3;
  STGameObjC *this_00;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;

  uVar7 = 0;
  if (param_2 != 30000) {
    puVar1 = (ushort *)
             (STField<int>(this,0x23b) +
             *(int *)(STField<int>(this,0x23f) + param_2 * 4) * 0x18);
    SVar3 = st::fn_00404052(*(Global_sub_00601DB0_param_1Enum *)
                                (STField<int>(this,0x23b) + 4 +
                                *(int *)(STField<int>(this,0x23f) + param_2 * 4) * 0x18));
    this_00 = st::fn_004028BA(g_allPlayers_007FA174,(char)puVar1[4],*puVar1,SVar3);
    if (this_00 == nullptr) {
      return 0;
    }
    st::fn_004031E3(this_00,st::pointer_boundary_cast<uint *>(&param_3),(int *)&param_4,(short *)((int)&param_5 + 2));
    iVar4 = (*this_00->vtable->vfunc_78)();
    if (iVar4 < 1) {
      return 0;
    }
    uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x1f) + (short)param_3;
    uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    *param_7 = (short)((ulonglong)(uVar5 >> 0x10) % 0x1f) + (short)param_4;
    *param_8 = STPiece<2,2>(param_5);
    return 1;
  }
  if (STField<int>(this,0x22e) < 5) {
switchD_005ff553_default:
    if ((short)param_5 < 0) {
      iVar4 = (short)param_5 / 200 + -1;
    }
    else {
      iVar4 = (int)((short)param_5 / 200);
    }
    sVar2 = (short)param_3;
    switch(iVar4) {
    case 0:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x65) + sVar2;
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      uVar6 = 0x65;
      STField<uint>(this,0x1c) = uVar5;
      uVar5 = uVar5 >> 0x10;
      break;
    case 1:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x12e) + sVar2;
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      uVar6 = 0x12e;
      STField<uint>(this,0x1c) = uVar5;
      uVar5 = uVar5 >> 0x10;
      break;
    case 2:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x1f7) + sVar2;
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      uVar6 = 0x1f7;
      STField<uint>(this,0x1c) = uVar5;
      uVar5 = uVar5 >> 0x10;
      break;
    case 3:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x2c0) + sVar2;
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      uVar6 = 0x2c0;
      STField<uint>(this,0x1c) = uVar5;
      uVar5 = uVar5 >> 0x10;
      break;
    case 4:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x389) + sVar2;
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      uVar6 = 0x389;
      STField<uint>(this,0x1c) = uVar5;
      uVar5 = uVar5 >> 0x10;
      break;
    default:
      goto switchD_005ffb0e_default;
    }
    uVar7 = 1;
    *param_7 = (short)(uVar5 % uVar6) + (short)param_4;
    *param_8 = 0;
switchD_005ffb0e_default:
    return uVar7;
  }
  if (STField<int>(this,0x22e) != 5) {
    switch(param_1) {
    case CASE_0:
      goto switchD_005ff553_caseD_0;
    case CASE_1:
      goto switchD_005ff553_caseD_1;
    case CASE_2:
      goto switchD_005ff553_caseD_2;
    case CASE_3:
      goto switchD_005ff553_caseD_3;
    case CASE_4:
      goto switchD_005ff553_caseD_4;
    case CASE_5:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      sVar2 = (STField<short>(this,0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0xab;
      goto LAB_005ff625;
    case CASE_6:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21a) + 0xab;
      iVar4 = STField<int>(this,0x1c);
      goto LAB_005ff63a;
    case CASE_7:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21a) + 0xab;
      iVar4 = STField<int>(this,0x1c);
      goto LAB_005ff5fd;
    case CASE_8:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      sVar2 = (STField<short>(this,0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0xab;
      goto LAB_005ff5e8;
    case CASE_9:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      sVar2 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21a) + 0x174;
      goto LAB_005ff8c9;
    case CASE_A:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      *param_6 = (STField<short>(this,0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) +
                 -0x174;
      sVar2 = STField<short>(this,0x21c);
      goto cf_common_exit_005FFA34;
    case CASE_B:
      sVar2 = STField<short>(this,0x21a);
      break;
    case CASE_C:
      sVar2 = STField<short>(this,0x21a);
      goto LAB_005ff95e;
    case CASE_D:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      sVar2 = (STField<short>(this,0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x174;
LAB_005ff95e:
      *param_6 = sVar2;
      iVar4 = STField<int>(this,0x1c);
LAB_005ffa94:
      uVar5 = iVar4 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      sVar2 = (STField<short>(this,0x21c) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x174;
      goto cf_common_exit_005FFAB2;
    case CASE_E:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      sVar2 = (STField<short>(this,0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x174;
      break;
    case CASE_F:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21a) + 0x174;
      iVar4 = STField<int>(this,0x1c);
      goto LAB_005ffa18;
    case CASE_10:
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21a) + 0x174;
      iVar4 = STField<int>(this,0x1c);
      goto LAB_005ffa94;
    default:
      goto switchD_005ff553_default;
    }
    *param_6 = sVar2;
    iVar4 = STField<int>(this,0x1c);
LAB_005ffa18:
    uVar5 = iVar4 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    sVar2 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21c) + 0x174;
    goto cf_common_exit_005FFA34;
  }
  switch(param_1) {
  case CASE_0:
switchD_005ff553_caseD_0:
    *param_6 = STField<short>(this,0x21a);
    sVar2 = STField<short>(this,0x21c);
    goto cf_common_exit_005FFA34;
  case CASE_1:
switchD_005ff553_caseD_1:
    uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    sVar2 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21a) + 0xab;
LAB_005ff8c9:
    *param_6 = sVar2;
    *param_7 = STField<short>(this,0x21c);
    *param_8 = STField<undefined2>(this,0x21e);
    return 1;
  case CASE_2:
switchD_005ff553_caseD_2:
    uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    *param_6 = (STField<short>(this,0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0xab;
    sVar2 = STField<short>(this,0x21c);
    goto cf_common_exit_005FFA34;
  case CASE_3:
switchD_005ff553_caseD_3:
    sVar2 = STField<short>(this,0x21a);
LAB_005ff5e8:
    *param_6 = sVar2;
    iVar4 = STField<int>(this,0x1c);
LAB_005ff5fd:
    uVar5 = iVar4 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    sVar2 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21c) + 0xab;
    goto cf_common_exit_005FFA34;
  case CASE_4:
switchD_005ff553_caseD_4:
    sVar2 = STField<short>(this,0x21a);
LAB_005ff625:
    *param_6 = sVar2;
    iVar4 = STField<int>(this,0x1c);
LAB_005ff63a:
    uVar5 = iVar4 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    sVar2 = (STField<short>(this,0x21c) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0xab;
    goto cf_common_exit_005FFAB2;
  case CASE_5:
    uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    *param_6 = (STField<short>(this,0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x7e;
    iVar4 = STField<int>(this,0x1c);
    break;
  case CASE_6:
    uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21a) + 0x7e;
    iVar4 = STField<int>(this,0x1c);
    break;
  case CASE_7:
    uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21a) + 0x7e;
    iVar4 = STField<int>(this,0x1c);
    goto LAB_005ff73a;
  case CASE_8:
    uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    *param_6 = (STField<short>(this,0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x7e;
    iVar4 = STField<int>(this,0x1c);
LAB_005ff73a:
    uVar5 = iVar4 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar5;
    sVar2 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + STField<short>(this,0x21c) + 0x7e;
cf_common_exit_005FFA34:
    *param_7 = sVar2;
    *param_8 = STField<undefined2>(this,0x21e);
    return 1;
  default:
    goto switchD_005ff553_default;
  }
  uVar5 = iVar4 * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar5;
  sVar2 = (STField<short>(this,0x21c) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x7e;
cf_common_exit_005FFAB2:
  *param_7 = sVar2;
  *param_8 = STField<undefined2>(this,0x21e);
  return 1;
}

// 005FFF60 FUN_005fff60
#line 4 "decomp/ST.exe/functions/005FFF60/decomp.c"
undefined4 __thiscall st::fn_005FFF60(void *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  short local_1c;
  short sStack_1a;
  short sStack_18;
  undefined2 uStack_16;
  short local_14;
  short local_12;
  short local_10 [4];
  int local_8;

  iVar4 = STField<int>(this,0x226);
  local_8 = iVar4;
  iVar2 = st::fn_004026C6(this,st::pointer_boundary_cast<undefined2 *>(&local_1c),st::pointer_boundary_cast<undefined2 *>(&sStack_1a),&sStack_18);
  iVar5 = param_2;
  if (iVar2 == 0) {
    st::fn_004035A8(this,param_1);
    return 0;
  }
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar4 = st::fn_00403DCD(this,param_1,param_2,CONCAT22(sStack_1a,local_1c),
                               (short *)CONCAT22(sStack_18,sStack_1a),CONCAT22(uStack_16,sStack_18),
                               &local_14,&local_12,st::pointer_boundary_cast<undefined2 *>(local_10));
    if (((iVar4 != 0) &&
        (iVar4 = st::fn_00402978((short *)(STField<int>(this,0x233) + param_1 * 0x52),
                                    (int)local_1c,(int)sStack_1a,sStack_18,(int)local_14,local_12,
                                    local_10[0]), -1 < iVar4)) &&
       (iVar3 = st::fn_004051FF(this,param_1,st::pointer_boundary_cast<undefined2 *>(&local_1c),(int)&local_14), iVar3 != 0)) break;
    if ((param_2 != 30000) && (iVar5 = iVar5 + 1, STField<int>(this,0x226) < iVar5)) {
      iVar5 = 0;
    }
    local_8 = local_8 + -1;
    iVar4 = local_8;
  }
  if (param_2 == 30000) {
    return 1;
  }
  iVar4 = *(int *)(STField<int>(this,0x23f) + iVar5 * 4);
  *(uint *)(STField<int>(this,0x23b) + 0xc + iVar4 * 0x18) =
       *(uint *)(STField<int>(this,0x23b) + 0xc + iVar4 * 0x18) >> 1;
  puVar1 = (uint *)(STField<int>(this,0x23b) + 0x10 +
                   *(int *)(STField<int>(this,0x23f) + iVar5 * 4) * 0x18);
  *puVar1 = *puVar1 >> 1;
  return 1;
}

