#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0055.cpp

// 00550110 FUN_00550110
#line 4 "decomp/ST.exe/functions/00550110/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0054F1D0 @ 0054F999
   -> TEST TEST EAX,EAX | 0054F1D0 @ 0054F9D0 -> TEST TEST EAX,EAX */

int __fastcall st::fn_00550110(STPlaySystemC *param_1)

{
  uint uVar1;
  bool bVar2;

  uVar1 = 0;
  if ((byte)param_1->field_004E < (byte)param_1->field_004D) {
    param_1->field_003D->field_0005 = 0;
    param_1->field_004E = param_1->field_004E + '\x01';
    /* ST_CALLSITE[00550130]: CALL 0x00404b15; direct=00404B15 STPlaySystemC::sub_00550190 */
    st::fn_00404B15(param_1);
    return 1;
  }
  if (param_1->field_003D != nullptr) {
    param_1->field_003D->field_0005 = param_1->field_0057;
    bVar2 = param_1->field_0057 != 0;
    if (bVar2) {
      /* ST_CALLSITE[00550154]: CALL 0x00404b15; direct=00404B15 STPlaySystemC::sub_00550190 */
      st::fn_00404B15(param_1);
    }
    uVar1 = (uint)bVar2;
    param_1->field_0057 = 0;
  }
  return uVar1;
}

// 005501D0 FUN_005501d0
#line 4 "decomp/ST.exe/functions/005501D0/decomp.c"
void __thiscall st::fn_005501D0(void *this,void *command)

{
  undefined1 local_24 [16];
  undefined4 local_14;
  void *local_10;

  STField<int>(command,0x17) = (int)command + 0x1b;
  if (STField<char>(command,0xe) == '\x05') {
    local_14 = 0x43ff;
  }
  else {
    if (STField<char>(command,0xe) != '2') {
      /* ST_CALLSITE[005501F3]: CALL 0x00404ebc; direct=00404EBC STAllPlayersC::CmdToPlsObj */
      st::fn_00404EBC(g_allPlayers_007FA174,command);
      return;
    }
    local_14 = 0x4400;
  }
  local_10 = command;
  /* ST_CALLSITE[0055021A]: CALL dword ptr [EAX + 0x20] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*STField<int *>(this,0x1c) + 0x20))(local_24);
  return;
}

// 00550380 FUN_00550380
#line 1 "decomp/ST.exe/functions/00550380/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00550380 -> 00533A10 @ 005503A7 */

void st::fn_00550380(byte param_1)

{
  DAT_0080c50a = 0;
  DAT_0080c512 = 1;
  if (g_optPanel_008016DC != nullptr) {
    /* ST_CALLSITE[005503A7]: CALL 0x00405ef7; direct=00405EF7 OptPanelTy::Notification */
    st::fn_00405EF7(g_optPanel_008016DC,'\n',param_1);
  }
  return;
}

// 005503C0 FUN_005503c0
#line 4 "decomp/ST.exe/functions/005503C0/decomp.c"
void __thiscall st::fn_005503C0(void *this,int param_1)

{
  if (DAT_00808788 == 0) {
    STField<int>(this,0xf4) = param_1;
    DAT_00808788 = 1;
    if (g_optPanel_008016DC != nullptr) {
      /* ST_CALLSITE[005503EC]: CALL 0x00404f16; direct=00404F16 OptPanelTy::Question */
      st::fn_00404F16(g_optPanel_008016DC,'\a');
      return;
    }
    STField<undefined4>(this,0xd0) = 0x44ff;
    /* ST_CALLSITE[00550408]: CALL dword ptr [EDX + 0x20] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x20))((int)this + 0xc0);
  }
  return;
}

// 00550430 FUN_00550430
#line 4 "decomp/ST.exe/functions/00550430/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00550430(void *this,int param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  char *pcVar3;

  uVar1 = 0;
  if (DAT_00808aaf != 0) {
    pcVar3 = &CHAR_00h_00808ab0;
    while (*(int *)(pcVar3 + 0x40) != param_1) {
      uVar1 = uVar1 + 1;
      pcVar3 = pcVar3 + 0x9c;
      if (DAT_00808aaf <= uVar1) {
        return;
      }
    }
    DVar2 = st::fn_006E51B0((STAppC *)&DAT_00807620);
    *(DWORD *)(pcVar3 + 0x48) = DVar2;
    if (((param_2 != 0) && (DAT_00808788 != 0)) && (STField<int>(this,0xf4) == param_1)) {
      STField<undefined4>(this,0xf4) = 0;
      DAT_00808788 = 0;
      STField<undefined4>(this,0xd0) = 0xa106;
      st::fn_006E3DD0((AppClassTy *)&DAT_00807620,3,0x101,(int)this + 0xc0);
    }
  }
  return;
}

// 005504F0 FUN_005504f0
#line 4 "decomp/ST.exe/functions/005504F0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005504F0(void *this,int param_1,UINT param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  CHAR local_10c [260];
  void *local_8;

  uVar2 = 0;
  local_8 = this;
  if (DAT_00808aaf != 0) {
    pcVar3 = (char *)&DAT_00808af6;
    do {
      if (((*(int *)(pcVar3 + -6) == param_1) && (*pcVar3 != '\0')) && (param_2 != 0)) {
        pcVar1 = st::fn_006B0140(param_2,g_hINSTANCE_00807618);
        /* ST_CALLSITE[00550543]: CALL dword ptr [0x0085bde8] */
        st::external_00000080(local_10c,st::mutable_c_string("%s %s"),pcVar3 + -0x46,pcVar1);
        if (g_popUp_008016D8 != nullptr) {
          st::fn_004014D8(g_popUp_008016D8,local_10c,8);
        }
      }
      uVar2 = uVar2 + 1;
      pcVar3 = pcVar3 + 0x9c;
    } while (uVar2 < DAT_00808aaf);
  }
  if (param_3 != 0) {
    st::fn_00401370(local_8,param_1);
  }
  return;
}

// 00550830 FUN_00550830
#line 1 "decomp/ST.exe/functions/00550830/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_00550830(int param_1)

{
  uint uVar1;
  int soundId;

  if (param_1 != 0) {
    /* ST_CALLSITE[0055084A]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s> %s"),param_1,param_1 + 0x40);
    if (g_popUp_008016D8 != nullptr) {
      if (((byte *)param_1)[0x450] == 0xff) {
        uVar1 = 8;
      }
      else {
        uVar1 = (uint)((byte *)param_1)[0x450];
      }
      st::fn_004014D8(g_popUp_008016D8,(char *)&DAT_0080f33a,uVar1);
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0x38;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0x39;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0x3a;
    }
    /* ST_CALLSITE[005508AF]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    st::fn_00404BD8
              ((SoundClassTy *)&g_sound,SOUND_MODE_5,nullptr,soundId,nullptr,0);
  }
  return;
}

// 005508F0 FUN_005508f0
#line 4 "decomp/ST.exe/functions/005508F0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005508F0(void *this,int param_1)

{
  HINSTANCE module;
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  uint *puVar10;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  uint local_c;
  byte local_5;

  cVar7 = -1;
  uVar3 = (uint)DAT_00808aaf;
  uVar1 = 0;
  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(0xff));
  local_5 = 0;
  if (uVar3 != 0) {
    pcVar5 = (char *)&DAT_00808af6;
    do {
      if ((*(int *)(pcVar5 + -6) == param_1) && (*pcVar5 == '\x01')) {
        cVar7 = pcVar5[-2];
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(cVar7));
        break;
      }
      uVar1 = uVar1 + 1;
      pcVar5 = pcVar5 + 0x9c;
    } while (uVar1 < uVar3);
    if (uVar3 != 0) {
      pcVar5 = (char *)&DAT_00808af6;
      uVar1 = uVar3;
      do {
        if ((pcVar5[-2] == cVar7) && (*pcVar5 == '\x01')) {
          local_5 = local_5 + 1;
        }
        pcVar5 = pcVar5 + 0x9c;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  local_10 = this;
  if (((((DAT_0080877e != '\0') && (local_5 < 2)) && (cVar7 != -1)) &&
      ((((char)DAT_008087a0 == '\x04' || ((char)DAT_008087a0 == '\a')) ||
       (((char)DAT_008087a0 == '\x13' ||
        (((char)DAT_008087a0 == '\r' || ((char)DAT_008087a0 == '\x0e')))))))) &&
     (uVar1 = local_c & 0xff, (&DAT_00809950)[uVar1] == '\0')) {
    uVar8 = 0;
    if (uVar3 != 0) {
      pcVar5 = (char *)&DAT_00808af6;
      do {
        module = g_hINSTANCE_00807618;
        if ((*(int *)(pcVar5 + -6) == param_1) && (*pcVar5 == '\x01')) {
          pcVar9 = pcVar5 + -0x46;
          *pcVar5 = '\0';
          pcVar2 = st::fn_006B0140(0x4273,module);
          /* ST_CALLSITE[005509EE]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %s"),pcVar2,pcVar9);
          if (g_popUp_008016D8 != nullptr) {
            st::fn_004014D8(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
          }
        }
        uVar8 = uVar8 + 1;
        pcVar5 = pcVar5 + 0x9c;
      } while (uVar8 < DAT_00808aaf);
    }
    local_18 = (uint)g_bulkInitializedRecords_008087C7[uVar1].field_0021;
    local_1c = 8;
    local_14 = uVar1;
    st::fn_00403C33((undefined4 *)0x5,&local_1c,1,0xffffffff);
  }
  if ((&DAT_00809950)[local_c & 0xff] == '\0') {
    uVar1 = 0;
    uVar3 = (uint)DAT_00808aaf;
    if (uVar3 != 0) {
      piVar6 = reinterpret_cast<int *>(&DAT_00808af0);
      while (*piVar6 != param_1) {
        uVar1 = uVar1 + 1;
        piVar6 = piVar6 + 0x27;
        if (uVar3 <= uVar1) {
          return;
        }
      }
      if (uVar1 != uVar3 - 1) {
        pcVar5 = (char *)(&DAT_00808b4c + uVar1 * 0x27);
        pcVar9 = &CHAR_00h_00808ab0 + uVar1 * 0x9c;
        for (uVar3 = ((uVar3 - uVar1) + -1) * 0x27 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pcVar9 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      puVar10 = (undefined4 *)
                ((int)g_bulkInitializedRecords_008087C7 + (uint)DAT_00808aaf * 0x9c + 0x24d);
      for (iVar4 = 0x27; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      DAT_00808aaf = DAT_00808aaf - 1;
      if (g_playPanel_008016E4 != nullptr) {
        /* ST_CALLSITE[00550B06]: CALL 0x00405e07; direct=00405E07 PlayPanelTy::sub_0053A540 */
        st::fn_00405E07(g_playPanel_008016E4);
      }
    }
  }
  return;
}

// 00550BB0 FUN_00550bb0
#line 4 "decomp/ST.exe/functions/00550BB0/decomp.c"
void __fastcall st::fn_00550BB0(int param_1)

{
  int iVar1;
  InternalExceptionFrame local_50;
  int local_c;
  char local_5;

  if (DAT_0080877e == '\0') {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = param_1;
    iVar1 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    if (iVar1 == 0) {
      st::fn_006B6500(g_int_00811764,1);
      local_5 = '\0';
      iVar1 = st::fn_00715360(g_int_00811764,1,'B',&local_5,1,0,0xffffffff);
      if (iVar1 == 0) {
        STField<undefined4>(local_c,0x59) = 1;
      }
      st::fn_006B6500(g_int_00811764,DAT_0080733c);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
  }
  return;
}

// 00550C90 FUN_00550c90
#line 4 "decomp/ST.exe/functions/00550C90/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA83C>00401C99

   [STObjectFactoryApplier] Central object factory for 0x0149 (ST_OBJECT_TYPE_0149).
   Evidence: registry[35] at 007CA838 stores type 0x0149 and executable pointer 00401C99; allocation
   size 481 has no unique current class-layout match */

void * __cdecl st::fn_00550C90(void)

{
  undefined4 *this;

  this = st::fn_006B04D0(0x1e1);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    STField<undefined2>(this,0x1be) = 100;
    *(undefined2 *)(this + 0x6f) = 100;
    this[0x17] = 0;
    this[0x18] = 0xffffffff;
    this[0x19] = 4;
    this[0x1a] = 0;
    STField<undefined2>(this,0x172) = 2;
    this[0x5e] = 0;
    this[0x5f] = 0;
    STField<undefined4>(this,0x185) = 0;
    STField<undefined4>(this,0x189) = 0;
    *this = st::machine_word_boundary_cast<undefined4>(&st_global_0079AE64);
    this[0xf] = 0x1c7;
    this[0x11] = 0;
    this[0x10] = 0x13d;
    this[0x12] = 0x8c;
    this[0x60] = 0;
    ((undefined1 *)this)[0x61] = 0;
    STField<undefined1>(this,0x1bb) = 2;
    this[0x73] = 0;
    this[0x72] = 0;
    this[0x71] = 0;
    this[0x70] = 0;
    ((undefined1 *)this)[0x74] = 0;
    STField<undefined4>(this,0x1d9) = 0;
    STField<undefined4>(this,0x1d5) = 0;
    STField<undefined4>(this,0x1d1) = 0;
    STField<undefined4>(this,0x1dd) = 0;
    return this;
  }
  return nullptr;
}

// 005527D0 CreateUpgPanel
#line 4 "decomp/ST.exe/functions/005527D0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA904>0040403E

   [STObjectFactoryApplier] Central object factory for 0x0153 (ST_OBJECT_UPG_PANEL).
   Evidence: registry[60] at 007CA900 stores type 0x0153 and executable pointer 0040403E; allocation
   size 1015 uniquely matches /UpgPanelTy */

UpgPanelTy * __cdecl st::fn_005527D0(void)

{
  UpgPanelTy *this;

  this = (UpgPanelTy *)st::fn_006B04D0(0x3f7);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    this->field_0178 = 0;
    this->field_017C = 0;
    this->field_0185 = 0;
    this->field_0189 = 0;
    this->vtable = &st_global_0079AE90;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    this->field_0040 = 0x128;
    this->field_0048 = 0x8c;
    this->field_0180 = 1;
    this->field_0184 = 0;
    memset(&this->field_01AB, 0, 0x240); /* compiler bulk-zero initialization */
    this->field_03F3 = nullptr;
    this->field_03EF = nullptr;
    this->field_03EB = nullptr;
    return this;
  }
  return nullptr;
}

// 00552F50 FUN_00552f50
#line 4 "decomp/ST.exe/functions/00552F50/decomp.c"
int __cdecl st::fn_00552F50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  void *local_8;

  local_8 = nullptr;
  if (param_1 < 0) {
    return 0;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    iVar1 = param_1 * 2 + 1;
    local_8 = st::fn_006AAC70(iVar1 * iVar1);
    local_10 = 0;
    local_c = 0;
    if (0 < iVar1) {
      do {
        iVar3 = 0;
        do {
          iVar2 = st::fn_006ACED8(param_1,param_1,iVar3,local_c);
          *(bool *)(local_10 + (int)local_8) = iVar2 <= param_1;
          local_10 = local_10 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
        local_c = local_c + 1;
      } while (local_c < iVar1);
    }
    g_currentExceptionFrame = local_54.previous;
    return (int)local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  if (local_8 == nullptr) {
    st::fn_006AB060(&local_8);
  }
  return (int)local_8;
}

// 00553060 FUN_00553060
#line 4 "decomp/ST.exe/functions/00553060/decomp.c"
undefined4 __cdecl st::fn_00553060(int param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;

  if (g_array_00802A4C != nullptr) {
    uVar1 = g_array_00802A4C->count;
    uVar3 = 0;
    if (0 < (int)uVar1) {
      bVar4 = uVar1 != 0;
      do {
        if ((((bVar4) &&
             (psVar2 = DArrayAt<short>(g_array_00802A4C, uVar3), psVar2 != nullptr)) && (*(int *)(psVar2 + 1) != 0)) &&
           (*psVar2 == param_1)) {
          return *(undefined4 *)(psVar2 + 1);
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < uVar1;
      } while ((int)uVar3 < (int)uVar1);
    }
  }
  return 0;
}

// 005530E0 FUN_005530e0
#line 4 "decomp/ST.exe/functions/005530E0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005530E0 returns forwarded through return of FUN_005532f0 @ 0055334B */

byte * __cdecl st::fn_005530E0(int param_1)

{
  int iVar1;
  InternalExceptionFrame local_54;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  byte *local_8;

  local_8 = nullptr;
  if (param_1 < 0) {
    return nullptr;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    if (g_array_00802A4C == nullptr) {
      st::fn_00403549();
    }
    local_8 = (byte *)st::fn_00403ACB(param_1);
    if (local_8 == nullptr) {
      local_8 = (byte *)st::fn_00405A38(param_1);
      if (local_8 != nullptr) {
        uStack_e = SUB42(local_8,0);
        local_c = (undefined2)((uint)local_8 >> 0x10);
        local_10 = (undefined2)param_1;
        st::fn_006AE1C0(g_array_00802A4C,&local_10);
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  if (local_8 == nullptr) {
    st::fn_006AB060(&local_8);
  }
  return local_8;
}

// 005531F0 FUN_005531f0
#line 1 "decomp/ST.exe/functions/005531F0/decomp.c"

void st::fn_005531F0(void)

{
  int iVar1;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    if (g_array_00802A4C == nullptr) {
      g_array_00802A4C = st::fn_006AE290(nullptr,10,6,10);
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  return;
}

// 00553270 FUN_00553270
#line 4 "decomp/ST.exe/functions/00553270/decomp.c"
void st::fn_00553270(void)

{
  void *pvVar1;
  DArrayTy *array;
  uint uVar2;
  bool bVar3;

  if (g_array_00802A4C != nullptr) {
    uVar2 = 0;
    array = g_array_00802A4C;
    if (0 < (int)g_array_00802A4C->count) {
      bVar3 = g_array_00802A4C->count != 0;
      do {
        if (((bVar3) &&
            (pvVar1 = DArrayAt<void>(array, uVar2), pvVar1 != nullptr
            )) && (STField<int>(pvVar1,2) != 0)) {
          st::fn_006AB060((void *)((int)pvVar1 + 2));
          array = g_array_00802A4C;
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < array->count;
      } while ((int)uVar2 < (int)array->count);
    }
    st::fn_006AE110(array);
    g_array_00802A4C = nullptr;
  }
  return;
}

// 005532F0 FUN_005532f0
#line 4 "decomp/ST.exe/functions/005532F0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005532F0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8
   [STAbiConsistencyApplier] pointer_return_element_width target=return:-1: return=/byte *32
   Evidence: generic returned address is dereferenced with one consistent machine width across
   callers; width=1, sites=00558DC0 @ 00558E7E CMP byte ptr [EAX + EBX*0x1],0x0 | 00559110 @
   005591DD CMP byte ptr [EAX + ESI*0x1],0x0 | 005594A0 @ 0055956D CMP byte ptr [EDX + EAX*0x1],0x0
   | 00559620 @ 005596ED CMP byte ptr [EDX + EAX*0x1],0x0 | 005597A0 @ 005598B7 CMP byte ptr [ECX +
   EAX*0x1],0x0 | 005599D0 @ 00559A77 CMP byte ptr [EDX + EAX*0x1],0x0 | 00559B30 @ 00559C47 CMP
   byte ptr [ECX + EAX*0x1],0x0 | 00559D60 @ 00559E07 CMP byte ptr [EDX + EAX*0x1],0x0 | 00559EC0 @
   00559FDD CMP byte ptr [ECX + EAX*0x1],0x0 | 0055A110 @ 0055A1BA CMP byte ptr [EDX + EAX*0x1],0x0
   | 0055A270 @ 0055A38D CMP byte ptr [ECX + EAX*0x1],0x0 | 0055A4C0 @ 0055A56A CMP byte ptr [EDX +
   EAX*0x1],0x0 | 0055A620 @ 0055A73D CMP byte ptr [ECX + EAX*0x1],0x0 | 0055A870 @ 0055A91A CMP
   byte ptr [EDX + EAX*0x1],0x0 | 0055AD00 @ 0055AE71 CMP byte ptr [ECX + EDX*0x1],0x0 */

byte * __cdecl st::fn_005532F0(Global_sub_005532F0_param_1Enum param_1)

{
  byte *pbVar1;

  switch(param_1) {
  case CASE_0:
    return (byte *)&DAT_007c89e4;
  case CASE_1:
    return (byte *)&DAT_007c89e8;
  case CASE_2:
    return (byte *)&DAT_007c89f4;
  case CASE_3:
    return (byte *)&DAT_007c8a10;
  case CASE_4:
    return (byte *)&DAT_007c8a44;
  case CASE_5:
    return (byte *)&DAT_007c8a98;
  case CASE_6:
    return (byte *)&DAT_007c8b14;
  case CASE_7:
    return (byte *)&DAT_007c8bc0;
  case CASE_8:
    return (byte *)&DAT_007c8ca4;
  default:
    pbVar1 = st::fn_00403A0D(param_1);
    return pbVar1;
  }
}

// 00553390 FUN_00553390
#line 4 "decomp/ST.exe/functions/00553390/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00553990 -> 00553390 @ 005539F2; FUN_00553990 parameter param_3 | 00553D40 -> 00553390
   @ 00553D6C; FUN_00553d40 parameter param_1 | 00553DB0 -> 00553390 @ 00553DDC; FUN_00553db0
   parameter param_1 */

void __cdecl st::fn_00553390(int param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  if ((((param_3 != nullptr) && (-1 < param_1)) && (param_1 < param_4)) &&
     (((-1 < param_2 && (param_2 < param_5)) && ((-1 < param_6 && (param_6 < 0x10)))))) {
    param_3[param_2 * param_4 + param_1] = (byte)param_6;
    if (DAT_00802a50 != 0) {
      /* ST_CALLSITE[005533DB]: CALL EDX */
      (*DAT_00802a50)(param_1,param_2,param_3);
    }
  }
  return;
}

// 00553410 FUN_00553410
#line 4 "decomp/ST.exe/functions/00553410/decomp.c"
/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=0055343E MOV DL,byte ptr
   [EBP + 0x1c] */

void __cdecl st::fn_00553410(int param_1,int param_2,int param_3,int param_4,int param_5,byte param_6)

{
  int iVar1;

  if ((((param_1 < 0) || (param_4 <= param_1)) || (param_2 < 0)) || (param_5 <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 * param_4 + param_1;
  }
  *(byte *)(iVar1 + param_3) = param_6;
  if (DAT_00802a50 != 0) {
    /* ST_CALLSITE[00553450]: CALL EAX */
    (*DAT_00802a50)(param_1,param_2,param_3);
  }
  return;
}

// 00553480 FUN_00553480
#line 4 "decomp/ST.exe/functions/00553480/decomp.c"
/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=2, ignored=0, unknown=0 */

uint __cdecl st::fn_00553480(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 local_18 [4];
  int local_8;

  uVar2 = param_4;
  uVar3 = 0;
  local_8 = 0;
  if ((((param_1 < 0) || ((int)param_4 <= param_1)) || (param_2 < 0)) || (param_5 <= param_2)) {
    iVar4 = -1;
  }
  else {
    iVar4 = param_2 * param_4 + param_1;
  }
  if (param_1 < 1) {
    local_18[0] = 1;
    local_8 = 1;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((0 < param_2) &&
       (bVar1 = *(byte *)((iVar4 - param_4) + -1 + param_3), param_4 = (uint)bVar1, bVar1 < 0xf)) {
      uVar3 = (uint)*(ushort *)(&DAT_007c88f4 + param_4 * 0x10);
    }
    bVar1 = *(byte *)(iVar4 + -1 + param_3);
    param_4 = (uint)bVar1;
    if (bVar1 < 0xf) {
      uVar3 = uVar3 | *(ushort *)(&DAT_007c88f6 + param_4 * 0x10);
    }
  }
  if (((0 < param_1) && (param_2 < param_5 + -1)) &&
     (bVar1 = *(byte *)(iVar4 + param_3 + -1 + uVar2), param_4 = (uint)bVar1, bVar1 < 0xf)) {
    uVar3 = uVar3 | *(ushort *)(&DAT_007c88f8 + param_4 * 0x10);
  }
  if (param_2 < param_5 + -1) {
    bVar1 = *(byte *)(iVar4 + param_3 + uVar2);
    param_4 = (uint)bVar1;
    if (bVar1 < 0xf) {
      uVar3 = uVar3 | *(ushort *)(&DAT_007c88fa + param_4 * 0x10);
    }
  }
  else {
    local_18[local_8] = 3;
    local_8 = local_8 + 1;
  }
  if (((param_1 < (int)(uVar2 - 1)) && (param_2 < param_5 + -1)) &&
     (bVar1 = *(byte *)(iVar4 + param_3 + 1 + uVar2), param_4 = (uint)bVar1, bVar1 < 0xf)) {
    uVar3 = uVar3 | *(ushort *)(&DAT_007c88fc + param_4 * 0x10);
  }
  if (param_1 < (int)(uVar2 - 1)) {
    bVar1 = *(byte *)(iVar4 + 1 + param_3);
    param_4 = (uint)bVar1;
    if (bVar1 < 0xf) {
      uVar3 = uVar3 | *(ushort *)(&DAT_007c88fe + param_4 * 0x10);
    }
  }
  else {
    local_18[local_8] = 5;
    local_8 = local_8 + 1;
  }
  if (param_1 < (int)(uVar2 - 1)) {
    if (0 < param_2) {
      bVar1 = *(byte *)((iVar4 - uVar2) + 1 + param_3);
      param_4 = (uint)bVar1;
      if (bVar1 < 0xf) {
        uVar3 = uVar3 | *(ushort *)(&DAT_007c8900 + param_4 * 0x10);
      }
      goto LAB_00553637;
    }
  }
  else {
LAB_00553637:
    if (0 < param_2) {
      bVar1 = *(byte *)((iVar4 - uVar2) + param_3);
      param_4 = (uint)bVar1;
      if (bVar1 < 0xf) {
        uVar3 = uVar3 | STReplaceLowWord((uint32_t)(param_2), (uint16_t)(*(undefined2 *)(&DAT_007c8902 + param_4 * 0x10)));
      }
      goto LAB_00553663;
    }
  }
  local_18[local_8] = 7;
  local_8 = local_8 + 1;
LAB_00553663:
  if (local_8 != 0) {
    puVar5 = local_18;
    do {
      switch(*puVar5) {
      case 1:
        if ((uVar3 & 0x400) != 0) {
          if ((uVar3 & 0x800) == 0) {
            uVar3 = uVar3 | 0x20;
          }
          if ((uVar3 & 0x400) != 0) break;
        }
        if ((uVar3 & 0x800) != 0) {
          uVar3 = uVar3 | 0x10;
        }
        break;
      case 3:
        if ((uVar3 & 0x800) != 0) {
          if ((uVar3 & 0x100) == 0) {
            uVar3 = uVar3 | 0x80;
          }
          if ((uVar3 & 0x800) != 0) break;
        }
        if ((uVar3 & 0x100) != 0) {
          uVar3 = uVar3 | 0x40;
        }
        break;
      case 5:
        if ((uVar3 & 0x100) != 0) {
          if ((uVar3 & 0x200) == 0) {
            uVar3 = uVar3 | 2;
          }
          if ((uVar3 & 0x100) != 0) break;
        }
        if ((uVar3 & 0x200) != 0) {
          uVar3 = uVar3 | 1;
        }
        break;
      case 7:
        if ((uVar3 & 0x200) != 0) {
          if ((uVar3 & 0x400) == 0) {
            uVar3 = uVar3 | 8;
          }
          if ((uVar3 & 0x200) != 0) break;
        }
        if ((uVar3 & 0x400) != 0) {
          uVar3 = uVar3 | 4;
        }
      }
      puVar5 = puVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return uVar3;
}

// 005537D0 FUN_005537d0
#line 4 "decomp/ST.exe/functions/005537D0/decomp.c"
short __cdecl st::fn_005537D0(ushort param_1)

{
  short sVar1;

  if (param_1 == 0) {
    return 0xf;
  }
  sVar1 = 0;
  do {
    if (param_1 == (&DAT_007c8884)[sVar1]) {
      return sVar1;
    }
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0xf);
  sVar1 = 0;
  do {
    if ((((&DAT_007c8884)[sVar1] ^ param_1) & 0xf00) == 0) {
      return sVar1;
    }
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0xf);
  return -1;
}

// 00553840 FUN_00553840
#line 4 "decomp/ST.exe/functions/00553840/decomp.c"
short __cdecl st::fn_00553840(short param_1)

{
  short sVar1;

  if (param_1 == 0) {
    return 0xf;
  }
  sVar1 = 0;
  do {
    if (param_1 == (&DAT_007c8884)[sVar1]) {
      return sVar1;
    }
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0xf);
  return -1;
}

// 00553880 FUN_00553880
#line 4 "decomp/ST.exe/functions/00553880/decomp.c"
bool __cdecl st::fn_00553880(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  if ((((param_3 != 0) && (-1 < param_1)) && (param_1 < (int)param_4)) &&
     ((-1 < param_2 && (param_2 < param_5)))) {
    uVar2 = st::fn_0040209F(param_1,param_2,param_3,param_4,param_5);
    uVar1 = st::fn_00402DD3((short)uVar2);
    return uVar1 == *(byte *)(param_2 * param_4 + param_1 + param_3);
  }
  return true;
}

// 00553910 FUN_00553910
#line 4 "decomp/ST.exe/functions/00553910/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00553990 -> 00553910 @ 00553A23; FUN_00553990 parameter param_3 | 00553A70 -> 00553910
   @ 00553AC6; FUN_00553a70 parameter param_3

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_00553910(int param_1,int param_2,byte *param_3,uint param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  if ((((param_3 != nullptr) && (-1 < param_1)) && (param_1 < (int)param_4)) &&
     ((-1 < param_2 && (param_2 < param_5)))) {
    uVar2 = st::fn_0040209F(param_1,param_2,(int)param_3,param_4,param_5);
    sVar1 = st::fn_0040425A((ushort)uVar2);
    st::fn_00401622(param_1,param_2,(int)param_3,param_4,param_5,(byte)sVar1);
  }
  return;
}

// 00553990 FUN_00553990
#line 4 "decomp/ST.exe/functions/00553990/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00558DC0 -> 00553990 @ 00559019; /VisibleClassTy+0x4c | 00559110 -> 00553990 @
   005593AC; /VisibleClassTy+0x4c */

void __cdecl st::fn_00553990(int param_1,int param_2,byte *param_3,uint param_4,int param_5)

{
  short *psVar1;

  if ((((param_3 != nullptr) && (-1 < param_1)) && (param_1 < (int)param_4)) &&
     ((-1 < param_2 && (param_2 < param_5)))) {
    st::fn_00401D07(param_1,param_2,param_3,param_4,param_5,0xf);
    psVar1 = &SHORT_007c88d4;
    do {
      st::fn_00401D07(*psVar1 + param_1,st::machine_word_boundary_cast<int>(psVar1[1] + param_2),param_3,param_4,param_5,0xf);
      psVar1 = psVar1 + 2;
    } while ((int)psVar1 < 0x7c88f4);
    psVar1 = &SHORT_007c88d4;
    do {
      st::fn_00403E63(*psVar1 + param_1,st::machine_word_boundary_cast<int>(psVar1[1] + param_2),param_3,param_4,param_5);
      psVar1 = psVar1 + 2;
    } while ((int)psVar1 < 0x7c88f4);
  }
  return;
}

// 00553A70 FUN_00553a70
#line 4 "decomp/ST.exe/functions/00553A70/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00559110 -> 00553A70 @ 005592F3; /VisibleClassTy+0x4c */

void __cdecl st::fn_00553A70(int param_1,int param_2,byte *param_3,uint param_4,int param_5)

{
  short *psVar1;

  if ((((param_3 != nullptr) && (-1 < param_1)) && (param_1 < (int)param_4)) &&
     ((-1 < param_2 && (param_2 < param_5)))) {
    st::fn_00401D07(param_1,param_2,param_3,param_4,param_5,0);
    psVar1 = &SHORT_007c88d4;
    do {
      st::fn_00403E63(*psVar1 + param_1,st::machine_word_boundary_cast<int>(psVar1[1] + param_2),param_3,param_4,param_5);
      psVar1 = psVar1 + 2;
    } while ((int)psVar1 < 0x7c88f4);
  }
  return;
}

// 00553B00 FUN_00553b00
#line 4 "decomp/ST.exe/functions/00553B00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00553B00 -> 00553990 @ 00553BA3 */

void __cdecl
st::fn_00553B00(int param_1,int param_2,byte *param_3,uint param_4,int param_5,undefined *param_6)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (param_3 != nullptr) {
    pbVar3 = st::fn_004028BF((Global_sub_005532F0_param_1Enum)param_6);
    iVar2 = (int)param_6 * 2 + 1;
    iVar5 = param_1 - (int)param_6;
    iVar4 = param_2 - (int)param_6;
    if (0 < iVar2) {
      auto param_1_after_write = (int)(param_3 + iVar4 * param_4 + iVar5); /* compiler stack-slot lifetime split */
      iVar6 = 0;
      int param_2_after_write = iVar2; /* compiler stack-slot lifetime split */
      param_6 = pbVar3;
      while( true ) {
        do {
          iVar1 = iVar6 + iVar5;
          if (((((iVar1 < 0) || ((int)param_4 <= iVar1)) || (iVar4 < 0)) ||
              ((param_5 <= iVar4 || (*(char *)(param_1_after_write + iVar6) != '\x0f')))) &&
             ((pbVar3 == nullptr || (param_6[iVar6] != '\0')))) {
            st::fn_00402B76(iVar1,iVar4,param_3,param_4,param_5);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
        param_6 = param_6 + iVar2;
        iVar4 = iVar4 + 1;
        param_1_after_write = param_1_after_write + param_4;
        param_2_after_write = param_2_after_write + -1;
        if (param_2_after_write == 0) break;
        iVar6 = 0;
      }
    }
  }
  return;
}

// 00553C20 FUN_00553c20
#line 4 "decomp/ST.exe/functions/00553C20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00553C20 -> 00553A70 @ 00553CC2 */

void __cdecl
st::fn_00553C20(int param_1,int param_2,byte *param_3,uint param_4,int param_5,undefined *param_6)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (param_3 != nullptr) {
    pbVar3 = st::fn_004028BF((Global_sub_005532F0_param_1Enum)param_6);
    iVar2 = (int)param_6 * 2 + 1;
    iVar5 = param_1 - (int)param_6;
    iVar4 = param_2 - (int)param_6;
    if (0 < iVar2) {
      auto param_1_after_write = (int)(param_3 + iVar4 * param_4 + iVar5); /* compiler stack-slot lifetime split */
      iVar6 = 0;
      int param_2_after_write = iVar2; /* compiler stack-slot lifetime split */
      param_6 = pbVar3;
      while( true ) {
        do {
          iVar1 = iVar6 + iVar5;
          if (((((iVar1 < 0) || ((int)param_4 <= iVar1)) || (iVar4 < 0)) ||
              ((param_5 <= iVar4 || (*(char *)(param_1_after_write + iVar6) != '\0')))) &&
             ((pbVar3 == nullptr || (param_6[iVar6] != '\0')))) {
            st::fn_00404E35(iVar1,iVar4,param_3,param_4,param_5);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
        param_6 = param_6 + iVar2;
        iVar4 = iVar4 + 1;
        param_1_after_write = param_1_after_write + param_4;
        param_2_after_write = param_2_after_write + -1;
        if (param_2_after_write == 0) break;
        iVar6 = 0;
      }
    }
  }
  return;
}

// 00553D40 FUN_00553d40
#line 4 "decomp/ST.exe/functions/00553D40/decomp.c"
void __cdecl st::fn_00553D40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if ((param_1 != 0) && (iVar1 = 0, 0 < param_3)) {
    do {
      iVar2 = 0;
      if (0 < param_2) {
        do {
          st::fn_00401D07(iVar2,iVar1,(byte *)param_1,param_2,param_3,0xf);
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}

// 00553DB0 FUN_00553db0
#line 4 "decomp/ST.exe/functions/00553DB0/decomp.c"
void __cdecl st::fn_00553DB0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if ((param_1 != 0) && (iVar1 = 0, 0 < param_3)) {
    do {
      iVar2 = 0;
      if (0 < param_2) {
        do {
          st::fn_00401D07(iVar2,iVar1,(byte *)param_1,param_2,param_3,0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}

// 00553E20 FUN_00553e20
#line 4 "decomp/ST.exe/functions/00553E20/decomp.c"
/* [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

HDC __cdecl st::fn_00553E20(int param_1,undefined *param_2,byte param_3)

{
  char cVar1;
  HDC pHVar2;
  int iVar3;
  uint uVar4;
  char *pcVar6;
  LOGFONTA *pLVar7;
  char *pcVar8;
  CHAR *pCVar9;
  LOGFONTA local_98;
  byte local_5c [88];

  pLVar7 = &local_98;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = (LOGFONTA *)&pLVar7->lfWidth;
  }
  local_98.lfCharSet = param_3;
  uVar4 = 0xffffffff;
  pcVar6 = "Verdana";
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_98.lfHeight = -0x10;
  local_98.lfWidth = 0;
  local_98.lfEscapement = 0;
  local_98.lfOrientation = 0;
  local_98.lfWeight = 400;
  local_98.lfItalic = '\0';
  local_98.lfUnderline = '\0';
  local_98.lfStrikeOut = '\0';
  local_98.lfOutPrecision = '\x03';
  local_98.lfClipPrecision = '\x02';
  local_98.lfQuality = '\x01';
  local_98.lfPitchAndFamily = '\"';
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_98.lfFaceName;
  memmove(pCVar9, pcVar6, uVar4); /* compiler REP MOVS byte copy */
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  auto _param_3 = 0xe4fae200;
  local_5c[0] = 0x20;
  local_5c[1] = 0x21;
  local_5c[2] = 0x22;
  local_5c[3] = 0x23;
  local_5c[4] = 0x25;
  local_5c[5] = 0x26;
  local_5c[6] = 0x27;
  local_5c[7] = 0x28;
  local_5c[8] = 0x29;
  local_5c[9] = 0x2c;
  local_5c[10] = 0x2d;
  local_5c[0xb] = 0x2e;
  local_5c[0xc] = 0x2f;
  local_5c[0xd] = 0x30;
  local_5c[0xe] = 0x31;
  local_5c[0xf] = 0x32;
  local_5c[0x10] = 0x33;
  local_5c[0x11] = 0x34;
  local_5c[0x12] = 0x35;
  local_5c[0x13] = 0x36;
  local_5c[0x14] = 0x37;
  local_5c[0x15] = 0x38;
  local_5c[0x16] = 0x39;
  local_5c[0x17] = 0x3a;
  local_5c[0x18] = 0x3d;
  local_5c[0x19] = 0x3e;
  local_5c[0x1a] = 0x3f;
  local_5c[0x1b] = 0x41;
  local_5c[0x1c] = 0x42;
  local_5c[0x1d] = 0x43;
  local_5c[0x1e] = 0x44;
  local_5c[0x1f] = 0x45;
  local_5c[0x20] = 0xd;
  local_5c[0x21] = 10;
  local_5c[0x22] = 0x46;
  local_5c[0x23] = 0x47;
  local_5c[0x24] = 0x48;
  local_5c[0x25] = 0x49;
  local_5c[0x42] = 0xd;
  local_5c[0x43] = 10;
  local_5c[0x26] = 0x4a;
  local_5c[0x27] = 0x4b;
  local_5c[0x28] = 0x4c;
  local_5c[0x29] = 0x4d;
  local_5c[0x2a] = 0x4e;
  local_5c[0x2b] = 0x4f;
  local_5c[0x2c] = 0x50;
  local_5c[0x2d] = 0x51;
  local_5c[0x2e] = 0x52;
  local_5c[0x2f] = 0x53;
  local_5c[0x30] = 0x54;
  local_5c[0x31] = 0x55;
  local_5c[0x32] = 0x56;
  local_5c[0x33] = 0x57;
  local_5c[0x34] = 0x58;
  local_5c[0x35] = 0x59;
  local_5c[0x36] = 0x5a;
  local_5c[0x37] = 0x5c;
  local_5c[0x38] = 0x5f;
  local_5c[0x39] = 0x61;
  local_5c[0x3a] = 0x62;
  local_5c[0x3b] = 99;
  local_5c[0x3c] = 100;
  local_5c[0x3d] = 0x65;
  local_5c[0x3e] = 0x66;
  local_5c[0x3f] = 0x67;
  local_5c[0x40] = 0x68;
  local_5c[0x41] = 0x69;
  local_5c[0x44] = 0x6a;
  local_5c[0x45] = 0x6b;
  local_5c[0x46] = 0x6c;
  local_5c[0x47] = 0x6d;
  local_5c[0x48] = 0x6e;
  local_5c[0x49] = 0x6f;
  local_5c[0x4a] = 0x70;
  local_5c[0x4b] = 0x71;
  local_5c[0x4c] = 0x72;
  local_5c[0x4d] = 0x73;
  local_5c[0x4e] = 0x74;
  local_5c[0x4f] = 0x75;
  local_5c[0x50] = 0x76;
  local_5c[0x51] = 0x77;
  local_5c[0x52] = 0x78;
  local_5c[0x53] = 0x79;
  local_5c[0x54] = 0x7a;
  local_5c[0x55] = 0x7c;
  local_5c[0x56] = 0x7e;
  /* ST_CALLSITE[0055403F]: CALL 0x0070d1f0; direct=0070D1F0 ccFntTy::operator_new */
  pHVar2 = st::fn_0070D1F0
                     (0x19d,&local_98,nullptr,local_5c,param_1,&param_3,1,3,1,1,0x40021c,param_2
                     );
  return pHVar2;
}

// 005545C0 FUN_005545c0
#line 4 "decomp/ST.exe/functions/005545C0/decomp.c"
int * __fastcall st::fn_005545C0(int *param_1)

{
  int iVar2;
  char *resourceString;
  int iVar1;

  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = *(int *)(*param_1 + 4);
  iVar2 = param_1[2];
  param_1[8] = *(int *)(*param_1 + 8);
  param_1[9] = 0;
  param_1[0xb] = 1;
  param_1[10] = 1;
  STField<undefined4>(iVar2,0x58) = 1;
  STField<undefined4>(iVar2,0x5C) = 1;
  resourceString = st::fn_006B0140(0x267a,g_hINSTANCE_00807618);
  iVar1 = st::fn_007111C0((void *)param_1[2],resourceString);
  param_1[0xe] = 0;
  param_1[0xd] = st::machine_word_boundary_cast<int>(param_1[0xb] + iVar1);
  param_1[0x10] = 1;
  param_1[0xc] = st::machine_word_boundary_cast<int>(param_1[8] / (param_1[0xb] + iVar1));
  param_1[0xf] = -1;
  param_1[0x14] = -1;
  return param_1;
}

// 005547D0 FUN_005547d0
#line 1 "decomp/ST.exe/functions/005547D0/decomp.c"

void st::fn_005547D0(int param_1,int param_2)

{
  /* ST_CALLSITE[005547E2]: CALL 0x00401d43; direct=00401D43 DarkScreen */
  st::fn_00401D43(g_dDXContext_0080759C,param_1,param_2);
  return;
}

// 00555600 FUN_00555600
#line 4 "decomp/ST.exe/functions/00555600/decomp.c"
void st::fn_00555600(undefined4 param_1)

{
  CHAR local_108 [260];

  /* ST_CALLSITE[0055561E]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(local_108,st::mutable_c_string("%s%s"),&CHAR_00h_00807680,param_1);
  st::fn_0072EA70(local_108,(char *)&DAT_007c8ff0);
  return;
}

// 00555650 FUN_00555650
#line 4 "decomp/ST.exe/functions/00555650/decomp.c"
void __fastcall st::fn_00555650(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int **)(param_1 + 0x4c) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_0072EA90(*(int **)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}

// 005557B0 FUN_005557b0
#line 4 "decomp/ST.exe/functions/005557B0/decomp.c"
void __fastcall st::fn_005557B0(AnonShape_005557B0_28260162 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  void *pvVar3;

  if (param_1->field_0024 != nullptr) {
    param_1->field_0024->iteratorIndex = 0;
    while( true ) {
      pDVar1 = param_1->field_0024;
      uVar2 = pDVar1->iteratorIndex;
      if (pDVar1->count <= uVar2) break;
      pvVar3 = DArrayAt<void>(pDVar1, uVar2);
      pDVar1->iteratorIndex = uVar2 + 1;
      if (pvVar3 == nullptr) break;
      if (-1 < (int)STField<uint>(pvVar3,0x32)) {
        st::fn_006E8BA0
                  (g_sT3DSMAPContext_00807598,STField<uint>(pvVar3,0x32));
        STField<undefined4>(pvVar3,0x32) = 0xffffffff;
      }
    }
    st::fn_006AE110(param_1->field_0024);
    param_1->field_0024 = nullptr;
  }
  return;
}

// 00555840 FUN_00555840
#line 4 "decomp/ST.exe/functions/00555840/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00555840 returns used as parameter 1 of Library::Ourlib::MFTSPR::mfTSprGetNumFas @
   005570C3 */

char * __cdecl st::fn_00555840(undefined4 param_1)

{
  /* ST_CALLSITE[00555851]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(st::pointer_boundary_cast<LPSTR>(&DAT_00802a5c),st::mutable_c_string("TRAKS%02d"),param_1);
  return (char *)&DAT_00802a5c;
}

// 00555880 FUN_00555880
#line 4 "decomp/ST.exe/functions/00555880/decomp.c"
undefined4 st::fn_00555880(RecoveredRecord_TraksClassTy_00555880 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;

  sVar1 = param_1->field_001C;
  if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (sVar2 = param_1->field_001E, -1 < sVar2))
     && (((sVar2 < g_worldGrid.sizeY && (sVar3 = param_1->field_0020, -1 < sVar3)) &&
         (sVar3 < g_worldGrid.sizeZ)))) {
    iVar4 = st::fn_00404D3B(sVar1,sVar2,sVar3);
    if (iVar4 != 0) {
      return 1;
    }
    return 0;
  }
  if (-1 < param_1->field_0020) {
    return 1;
  }
  return 0;
}

// 00556730 CreateTraks
#line 4 "decomp/ST.exe/functions/00556730/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA80C>004025A9

   [STObjectFactoryApplier] Central object factory for 0x0109 (ST_OBJECT_TRAKS).
   Evidence: registry[29] at 007CA808 stores type 0x0109 and executable pointer 004025A9; allocation
   size 2092 uniquely matches /TraksClassTy */

TraksClassTy * __cdecl st::fn_00556730(void)

{
  TraksClassTy *pTVar1;

  pTVar1 = (TraksClassTy *)st::fn_006B04D0(0x82c);
  if (pTVar1 != nullptr) {
    pTVar1 = st::fn_00402509(pTVar1);
    return pTVar1;
  }
  return nullptr;
}

// 00558BA0 FUN_00558ba0
#line 4 "decomp/ST.exe/functions/00558BA0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA824>0040150F

   [STObjectFactoryApplier] Central object factory for 0x0121 (ST_OBJECT_TYPE_0121).
   Evidence: registry[32] at 007CA820 stores type 0x0121 and executable pointer 0040150F; allocation
   size 664 has no unique current class-layout match */

void * __cdecl st::fn_00558BA0(void)

{
  VisibleClassTy *pVVar1;

  pVVar1 = (VisibleClassTy *)st::fn_006B04D0(0x298);
  if (pVVar1 != nullptr) {
    pVVar1 = st::fn_00405DB7(pVVar1);
    return pVVar1;
  }
  return nullptr;
}

// 00558BD0 FUN_00558bd0
#line 4 "decomp/ST.exe/functions/00558BD0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00558BD0 returns zeroed full register at 00558BEA @ 00558BED */

uint __cdecl st::fn_00558BD0(int param_1,int param_2,int param_3)

{
  st::fn_007178C0(g_sT3DSMAPContext_00807598,param_3,param_1,param_2);
  return 0;
}

// 0055AFB0 FUN_0055afb0
#line 4 "decomp/ST.exe/functions/0055AFB0/decomp.c"
undefined4 __thiscall
st::fn_0055AFB0(void *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte *local_c;
  int *local_8;

  if (((STField<int>(this,0x114) != 0) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    uVar2 = 0;
    local_8 = (int *)((int)this + 0x74);
    local_c = &g_bulkInitializedRecords_008087C7[0].field_0022;
    do {
      if ((uVar2 != param_4) && (*local_c != 0xff)) {
        if (DAT_00808a8f == '\0') {
          if ((char)param_4 == (char)uVar2) {
LAB_0055b0bb:
            iVar4 = 0;
          }
          else {
            uVar3 = param_4 & 0xff;
            uVar5 = uVar2 & 0xff;
            bVar1 = g_playerRelationMatrix[uVar3][uVar5];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 1)) {
              iVar4 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar5][uVar3] != 1)) goto LAB_0055b0bb;
              iVar4 = 2;
            }
          }
          bVar6 = iVar4 < 0;
        }
        else {
          bVar6 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                  g_bulkInitializedRecords_008087C7[param_4 & 0xff].field_0023;
        }
        if (bVar6) {
          if ((((*local_8 != 0) && (-1 < param_1)) && (param_1 < STField<int>(this,0x20))) &&
             (((-1 < param_2 && (param_2 < STField<int>(this,0x24))) &&
              (((int)local_c < 0x808a71 &&
               (*(char *)(STField<int>(this,0x20) * param_2 + *local_8 + param_1) != '\0')))))) {
            return 1;
          }
        }
      }
      local_c = local_c + 0x51;
      uVar2 = uVar2 + 1;
      local_8 = local_8 + 1;
    } while ((int)local_c < 0x808a71);
  }
  return 0;
}

// 0055B3D0 FUN_0055b3d0
#line 4 "decomp/ST.exe/functions/0055B3D0/decomp.c"
undefined4 __thiscall
st::fn_0055B3D0(void *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte *local_c;
  int *local_8;

  if (((STField<int>(this,0x114) != 0) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    uVar2 = 0;
    local_8 = (int *)((int)this + 0xb4);
    local_c = &g_bulkInitializedRecords_008087C7[0].field_0022;
    do {
      if ((uVar2 != param_4) && (*local_c != 0xff)) {
        if (DAT_00808a8f == '\0') {
          if ((char)param_4 == (char)uVar2) {
LAB_0055b4de:
            iVar4 = 0;
          }
          else {
            uVar3 = param_4 & 0xff;
            uVar5 = uVar2 & 0xff;
            bVar1 = g_playerRelationMatrix[uVar3][uVar5];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 1)) {
              iVar4 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar5][uVar3] != 1)) goto LAB_0055b4de;
              iVar4 = 2;
            }
          }
          bVar6 = iVar4 < 0;
        }
        else {
          bVar6 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                  g_bulkInitializedRecords_008087C7[param_4 & 0xff].field_0023;
        }
        if (bVar6) {
          if ((((*local_8 != 0) && (-1 < param_1)) && (param_1 < STField<int>(this,0x20))) &&
             (((-1 < param_2 && (param_2 < STField<int>(this,0x24))) &&
              (((int)local_c < 0x808a71 &&
               (*(char *)(STField<int>(this,0x20) * param_2 + *local_8 + param_1) != '\0')))))) {
            return 1;
          }
        }
      }
      local_c = local_c + 0x51;
      uVar2 = uVar2 + 1;
      local_8 = local_8 + 1;
    } while ((int)local_c < 0x808a71);
  }
  return 0;
}

// 0055B5E0 FUN_0055b5e0
#line 4 "decomp/ST.exe/functions/0055B5E0/decomp.c"
undefined4 __thiscall
st::fn_0055B5E0(void *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte *local_c;
  int *local_8;

  if (((STField<int>(this,0x114) != 0) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    uVar2 = 0;
    local_8 = (int *)((int)this + 0xd4);
    local_c = &g_bulkInitializedRecords_008087C7[0].field_0022;
    do {
      if ((uVar2 != param_4) && (*local_c != 0xff)) {
        if (DAT_00808a8f == '\0') {
          if ((char)param_4 == (char)uVar2) {
LAB_0055b6ee:
            iVar4 = 0;
          }
          else {
            uVar3 = param_4 & 0xff;
            uVar5 = uVar2 & 0xff;
            bVar1 = g_playerRelationMatrix[uVar3][uVar5];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 1)) {
              iVar4 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar5][uVar3] != 1)) goto LAB_0055b6ee;
              iVar4 = 2;
            }
          }
          bVar6 = iVar4 < 0;
        }
        else {
          bVar6 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                  g_bulkInitializedRecords_008087C7[param_4 & 0xff].field_0023;
        }
        if (bVar6) {
          if ((((*local_8 != 0) && (-1 < param_1)) && (param_1 < STField<int>(this,0x20))) &&
             (((-1 < param_2 && (param_2 < STField<int>(this,0x24))) &&
              (((int)local_c < 0x808a71 &&
               (*(char *)(STField<int>(this,0x20) * param_2 + *local_8 + param_1) != '\0')))))) {
            return 1;
          }
        }
      }
      local_c = local_c + 0x51;
      uVar2 = uVar2 + 1;
      local_8 = local_8 + 1;
    } while ((int)local_c < 0x808a71);
  }
  return 0;
}

// 0055B9F0 FUN_0055b9f0
#line 4 "decomp/ST.exe/functions/0055B9F0/decomp.c"
uint __thiscall st::fn_0055B9F0(void *this,RecoveredRecord_VisibleClassTy_0055B9F0 *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x110);
  uVar4 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        pbVar3 = (byte *)(STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C));
      }
      else {
        pbVar3 = nullptr;
      }
      if ((((*(int *)(pbVar3 + 8) == param_1->field_0008) && (*pbVar3 == param_1->field_0000)) &&
          (pbVar3[1] == param_1->field_0001)) &&
         (((*(short *)(pbVar3 + 2) == param_1->field_0002 &&
           (*(short *)(pbVar3 + 4) == param_1->field_0004)) &&
          ((pbVar3[6] == param_1->field_0006 && (pbVar3[7] == param_1->field_0007)))))) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return 0xffffffff;
}

// 0055BA90 FUN_0055ba90
#line 4 "decomp/ST.exe/functions/0055BA90/decomp.c"
char * __thiscall st::fn_0055BA90(void *this,char param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x110);
  uVar4 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        pcVar3 = (char *)(STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C));
      }
      else {
        pcVar3 = nullptr;
      }
      if ((*(int *)(pcVar3 + 8) == param_2) && (*pcVar3 == param_1)) {
        return pcVar3;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return nullptr;
}

// 0055BCB0 FUN_0055bcb0
#line 1 "decomp/ST.exe/functions/0055BCB0/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_0055BCB0(void)

{
  /* ST_CALLSITE[0055BCB5]: CALL dword ptr [0x0085c050] */
  st::external_00000102((CFsgsConnection *)&DAT_00802a90);
  _DAT_00802a90 = &st_global_0079AEFC;
  DAT_00802a98 = 0;
  DAT_00802a99 = 0;
  DAT_00802a9a = 0;
  DAT_00802abb = 7;
  DAT_00802abc = 0;
  DAT_00802ed4 = 0;
  DAT_00802cd4 = 0;
  DAT_00802ad4 = 0;
  DAT_008030d4 = 0;
  _DAT_00802acc = 0;
  DAT_00802ad0 = 0;
  DAT_00803140 = 1;
  DAT_00803144 = 0;
  DAT_00803148 = 0;
  return;
}

// 0055BD40 FUN_0055bd40
#line 4 "decomp/ST.exe/functions/0055BD40/decomp.c"
CFsgsConnection * __thiscall st::fn_0055BD40(void *this,byte param_1)

{
  *(CFsgsConnectionVTable **)this = &st_global_0079AEFC;
  /* ST_CALLSITE[0055BD4C]: CALL dword ptr [0x0085c04c] */
  st::external_00000101(static_cast<CFsgsConnection *>(this));
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(static_cast<HoloTy *>(this));
  }
  return static_cast<CFsgsConnection *>(this);
}

// 0055BD80 FUN_0055bd80
#line 1 "decomp/ST.exe/functions/0055BD80/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 0055BD80 returns return of Library::MSVCRT::FUN_0072ece0 @ 0055BD8B */

int st::fn_0055BD80(void)

{
  int iVar1;

  iVar1 = st::fn_0072ECE0(0x55bda0);
  return iVar1;
}

// 0055BDD0 FUN_0055bdd0
#line 4 "decomp/ST.exe/functions/0055BDD0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055BDD0 -> 0072E340 @ 0055BE55 | 0055BDD0 -> 0072ED50 @ 0055BE34 | 0055C830 ->
   0055BDD0 @ 0055C8DB | 0055C830 -> 0055BDD0 @ 0055CA31 | 0055C830 -> 0055BDD0 @ 0055CAE4 |
   0055C830 -> 0055BDD0 @ 0055CC62 | 0055C830 -> 0055BDD0 @ 0055CD2A */

void st::fn_0055BDD0(char *param_1,char *source)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;

  if (param_1 == nullptr) {
    st::fn_0072E340((char *)&DAT_0080f33a,source,0x834);
  }
  else {
    st::fn_0072E340((char *)&DAT_0080f33a,param_1,0x20);
    uVar2 = 0xffffffff;
    pcVar5 = &st_global_007C94CC;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_0080f33a;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
    uVar2 = 0xffffffff;
    pcVar5 = &st_global_007C94CC;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    st::fn_0072ED50((char *)&DAT_0080f33a,source,0x814 - (~uVar2 - 1));
  }
  DAT_0080fb6d = 0;
  if (g_popUp_008016D8 != nullptr) {
    st::fn_004014D8(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
  }
  return;
}

// 0055BEB0 FUN_0055beb0
#line 4 "decomp/ST.exe/functions/0055BEB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055C180 -> 0055BEB0 @ 0055C1FD | 0055C290 -> 0055BEB0 @ 0055C2BA | 005A4350 ->
   0055BEB0 @ 005A6806 */

void __thiscall st::fn_0055BEB0(void *this,DWORD lastError)

{
  int iVar1;

  /* ST_CALLSITE[0055BEB6]: CALL dword ptr [0x0085c048] */
  iVar1 = st::external_00000100(static_cast<CFsgsConnection *>(this));
  if (((iVar1 != 0) && (STField<undefined1>(this,8) = 0, STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    STField<undefined4>(this,0x1b) = 0x614f;
    STField<DWORD>(this,0x1f) = lastError;
    /* ST_CALLSITE[0055BEED]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

// 0055BF20 FUN_0055bf20
#line 4 "decomp/ST.exe/functions/0055BF20/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0055BF20(void *this,undefined4 param_1)

{
  CFsgsConnection *slotStorage;
  CFsgsConnection *pCVar1;
  int iVar2;
  char *pcVar3;
  BITMAPINFO *pBVar4;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  CFsgsConnection *local_c;
  tagBITMAPINFO *local_8;

  STField<undefined4>(this,0x3c) = param_1;
  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = static_cast<CFsgsConnection *>(this);
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pCVar1 = local_c;
  if (iVar2 == 0) {
    /* ST_CALLSITE[0055BF6A]: CALL EDI */
    pcVar3 = st::external_000000FF(local_c);
    if (pcVar3 != nullptr) {
      /* ST_CALLSITE[0055BF72]: CALL EDI */
      pcVar3 = st::external_000000FF(pCVar1);
      local_8 = (tagBITMAPINFO *)st::fn_006BC260(pcVar3);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != nullptr) {
    g_currentExceptionFrame = &local_94;
    local_94.previous = local_50.previous;
    iVar2 = st::fn_0072D7F0(local_94.jumpBuffer,0);
    pCVar1 = local_c;
    if (iVar2 == 0) {
      slotStorage = local_c + 0x40;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(local_c + 0x40) != 0) {
        st::fn_006AB060(slotStorage);
      }
      pBVar4 = st::fn_006BBFA0
                         (local_8,nullptr,*(HPALETTE *)(pCVar1 + 0x3c));
      *(BITMAPINFO **)slotStorage = pBVar4;
      g_currentExceptionFrame = local_94.previous;
      st::fn_006AB060(&local_8);
      return;
    }
    g_currentExceptionFrame = local_94.previous;
    st::fn_006AB060(&local_8);
  }
  return;
}

// 0055C050 FUN_0055c050
#line 4 "decomp/ST.exe/functions/0055C050/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0055C050 returns used as parameter 4 of DibPut @ 005A8830 */

byte * __thiscall st::fn_0055C050(void *this,int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;

  if (STField<int>(this,0x40) == 0) {
    st::fn_004017A3(this,STField<undefined4>(this,0x3c));
    if (STField<int>(this,0x40) == 0) {
      return nullptr;
    }
  }
  iVar4 = 0xe;
  iVar3 = 0x1c;
  /* ST_CALLSITE[0055C07E]: CALL dword ptr [0x0085c040] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = st::external_000000FE
                    (static_cast<CFsgsConnection *>(this),(char *)(param_1 + 0x10),*(ulong *)(param_1 + 0x25));
  pbVar2 = (byte *)st::fn_006B55F0
                             (nullptr,0,0,0,
                              STField<byte *>(this,0x40),0,0,iVar1 * 0xe,iVar3,iVar4);
  return pbVar2;
}

// 0055C0E0 FUN_0055c0e0
#line 4 "decomp/ST.exe/functions/0055C0E0/decomp.c"
void __thiscall
st::fn_0055C0E0(void *this,char *param_1,undefined4 param_2,int param_3,uint param_4,
            undefined4 *param_5)

{
  int iVar1;
  InternalExceptionFrame local_48;

  if (((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) &&
     (param_5 != nullptr)) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    iVar1 = st::fn_0072D7F0(local_48.jumpBuffer,0);
    if (iVar1 == 0) {
      /* ST_CALLSITE[0055C13A]: CALL 0x00402108; direct=00402108 FSGSTy::SetBanner */
      st::fn_00402108(g_fSGS_0081174C,param_1,param_2,param_3,param_4,param_5);
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
  }
  return;
}

// 0055C180 FUN_0055c180
#line 4 "decomp/ST.exe/functions/0055C180/decomp.c"
void __fastcall st::fn_0055C180(CFsgsConnection *param_1)

{
  char cVar1;
  ulong uVar2;
  DWORD lastError;
  int iVar3;
  char *pcVar4;

  *(undefined4 *)(param_1 + 0x6b8) = 0;
  /* ST_CALLSITE[0055C1CC]: CALL dword ptr [0x0085c034] */
  st::external_000000FB
            (param_1,(-(uint)((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) & 0x10) + 0x45535344,
             DAT_00807dd5 & 0xffff0000 | DAT_00807dd1 >> 0x10,(char *)&DAT_00807da1,(_GUID *)&DAT_007cd6f0,9
            );
  iVar3 = -1;
  pcVar4 = &CHAR_00h_00808406;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar3 == -2) {
    /* ST_CALLSITE[0055C20E]: CALL dword ptr [0x0085c010] */
    st::external_000000F2(param_1);
    /* ST_CALLSITE[0055C220]: CALL dword ptr [EAX + 0x3c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1 + 0x3c))(1,100,0,0);
    return;
  }
  /* ST_CALLSITE[0055C1EA]: CALL dword ptr [0x0085c038] */
  uVar2 = st::external_000000FC(param_1,&CHAR_00h_00808406);
  if (uVar2 == 0) {
    /* ST_CALLSITE[0055C1F4]: CALL dword ptr [0x0085bbcc] */
    lastError = st::external_00000028();
    st::fn_00405E0C(param_1,lastError);
    return;
  }
  param_1[8] = (CFsgsConnection)0x1;
  return;
}

// 0055C260 FUN_0055c260
#line 4 "decomp/ST.exe/functions/0055C260/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055C260 -> 0055BEB0 @ 0055C272 */

void __thiscall st::fn_0055C260(void *this,DWORD param_1)

{
  if (STField<char>(this,8) != '\0') {
    STField<undefined1>(this,8) = 0;
    st::fn_00405E0C(this,param_1);
  }
  return;
}

// 0055C290 FUN_0055c290
#line 4 "decomp/ST.exe/functions/0055C290/decomp.c"
void __thiscall st::fn_0055C290(void *this,char *param_1)

{
  ulong uVar1;
  DWORD lastError;

  if (param_1 != nullptr) {
    /* ST_CALLSITE[0055C29E]: CALL dword ptr [0x0085c038] */
    uVar1 = st::external_000000FC(static_cast<CFsgsConnection *>(this),param_1);
    if (uVar1 == 1) {
      STField<undefined1>(this,8) = 1;
      return;
    }
  }
  /* ST_CALLSITE[0055C2B1]: CALL dword ptr [0x0085bbcc] */
  lastError = st::external_00000028();
  st::fn_00405E0C(this,lastError);
  return;
}

// 0055C2E0 FUN_0055c2e0
#line 4 "decomp/ST.exe/functions/0055C2E0/decomp.c"
void __thiscall st::fn_0055C2E0(void *this,int param_1,int param_2)

{
  if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055C2FC]: CALL 0x00405529; direct=00405529 FSGSTy::ConnectProc */
    st::fn_00405529(g_fSGS_0081174C,param_1,param_2);
  }
  return;
}

// 0055C500 FUN_0055c500
#line 4 "decomp/ST.exe/functions/0055C500/decomp.c"
void __thiscall st::fn_0055C500(void *this,int param_1)

{
  STField<undefined1>(this,8) = 0;
  if (((STField<char>(this,9) == '\0') && (param_1 != 0)) && (g_fSGS_0081174C != nullptr))
  {
    STField<undefined4>(this,0x1b) = 0x6150;
    STField<int>(this,0x1f) = param_1;
    /* ST_CALLSITE[0055C537]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

// 0055C550 FUN_0055c550
#line 4 "decomp/ST.exe/functions/0055C550/decomp.c"
void __fastcall st::fn_0055C550(int param_1)

{
  if ((((char *)param_1)[9] == '\0') && (g_fSGS_0081174C != nullptr)) {
    *(undefined4 *)(param_1 + 0x1b) = 0x6151;
    /* ST_CALLSITE[0055C576]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_fSGS_0081174C->GetMessage((STMessage *)(param_1 + 0xb));
  }
  return;
}

// 0055C590 FUN_0055c590
#line 4 "decomp/ST.exe/functions/0055C590/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0055C590 -> EXTERNAL:00000059 @ 0055C63C

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055C590 -> EXTERNAL:00000059 @ 0055C63C */

void st::fn_0055C590(undefined4 param_1,LPCVOID lpBuffer,LPCVOID nNumberOfBytesToWrite)

{
  bool bVar1;
  LPCVOID pvVar2;
  HANDLE hFile;
  BOOL BVar3;

  if (g_fSGS_0081174C == nullptr) {
    return;
  }
  if (lpBuffer != (LPCVOID)0x0) {
    bVar1 = true;
    /* ST_CALLSITE[0055C5D5]: CALL ESI */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s"),&CHAR_00h_00807680,st_global_0079AEF0);
    /* ST_CALLSITE[0055C5E1]: CALL dword ptr [0x0085bc7c] */
    st::external_00000054((LPCSTR)&DAT_0080f33a,(LPSECURITY_ATTRIBUTES)0x0);
    /* ST_CALLSITE[0055C604]: CALL ESI */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079AEF0,
              st_global_0079AEF4);
    /* ST_CALLSITE[0055C61F]: CALL dword ptr [0x0085bc80] */
    hFile = st::external_00000055((LPCSTR)&DAT_0080f33a,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                        (HANDLE)0x0);
    pvVar2 = nNumberOfBytesToWrite;
    if (hFile != (HANDLE)0xffffffff) {
      /* ST_CALLSITE[0055C63C]: CALL dword ptr [0x0085bc90] */
      BVar3 = st::external_00000059(hFile,lpBuffer,(DWORD)nNumberOfBytesToWrite,(LPDWORD)&lpBuffer,
                        (LPOVERLAPPED)0x0);
      if ((BVar3 != 0) && (pvVar2 == lpBuffer)) {
        bVar1 = false;
      }
      /* ST_CALLSITE[0055C64E]: CALL dword ptr [0x0085bbc8] */
      st::external_00000027(hFile);
      if (!bVar1) {
        /* ST_CALLSITE[0055C670]: CALL 0x004050e2; direct=004050E2 FSGSTy::CheckUpdate */
        st::fn_004050E2(g_fSGS_0081174C);
        return;
      }
    }
    /* ST_CALLSITE[0055C65F]: CALL 0x00402ced; direct=00402CED FSGSTy::DoLogon */
    st::fn_00402CED(g_fSGS_0081174C);
    return;
  }
  /* ST_CALLSITE[0055C5AA]: CALL 0x00402ced; direct=00402CED FSGSTy::DoLogon */
  st::fn_00402CED(g_fSGS_0081174C);
  return;
}

// 0055C6C0 FUN_0055c6c0
#line 4 "decomp/ST.exe/functions/0055C6C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055C6D6 CMP ECX,0x2 classifies dword parameter loaded at 0055C6D3 | 0055C6DB CMP
   ECX,0x4 classifies dword parameter loaded at 0055C6D3 */

void __thiscall st::fn_0055C6C0(void *this,int param_1)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    STField<undefined4>(this,0x1b) = 0x6152;
    STField<int>(this,0x1f) = param_1;
    /* ST_CALLSITE[0055C711]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

// 0055C740 FUN_0055c740
#line 4 "decomp/ST.exe/functions/0055C740/decomp.c"
void __thiscall st::fn_0055C740(void *this,int param_1)

{
  if ((((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) && (param_1 == 0))
     && (g_fSGS_0081174C != nullptr)) {
    STField<undefined4>(this,0x1b) = 0x6153;
    /* ST_CALLSITE[0055C777]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

// 0055C790 FUN_0055c790
#line 4 "decomp/ST.exe/functions/0055C790/decomp.c"
void __thiscall st::fn_0055C790(void *this,undefined4 param_1)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    STField<undefined4>(this,0x1b) = 0x6154;
    STField<undefined4>(this,0x1f) = param_1;
    /* ST_CALLSITE[0055C7C6]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

// 0055C7E0 FUN_0055c7e0
#line 4 "decomp/ST.exe/functions/0055C7E0/decomp.c"
void __thiscall st::fn_0055C7E0(void *this,undefined4 param_1)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    STField<undefined4>(this,0x1b) = 0x6155;
    STField<undefined4>(this,0x1f) = param_1;
    /* ST_CALLSITE[0055C816]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

// 0055C830 FUN_0055c830
#line 4 "decomp/ST.exe/functions/0055C830/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0055C830_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_D=13;CASE_F=15;CASE_10=16;CASE_12=18;CASE_13=19;CASE_17=23;CASE_FF=255
    */

void __thiscall
st::fn_0055C830(void *this,Global_sub_0055C830_param_1Enum param_1,byte *param_2,undefined4 param_3,
            byte *param_4,char *param_5)

{
  byte bVar1;
  char cVar2;
  char *pcVar3_mg2;
  char *pcVar4_mg5;
  char *pcVar4_mg6;
  char *pcVar4_mgB;
  char *pcVar4_mgA;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  CHAR local_688 [512];
  char local_488 [63];
  undefined1 local_449;
  char local_448 [259];
  undefined1 local_345;
  byte local_34 [15];
  undefined1 local_25;
  byte *local_f;
  undefined4 local_b;
  byte *pbVar9_mg0;
  byte *pbVar8_mg0;
  byte *pbVar8_mg1;
  byte *pbVar6_mg1;

  pbVar8_mg0 = param_4;
  if (STField<char>(this,8) != '\0') {
    switch(param_1) {
    case CASE_1:
    case CASE_2:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        st::fn_0072E340((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        st::fn_0072EE80(param_5,(byte *)"%4s%d%d%d%d");
        local_f = param_2;
        local_b = param_3;
        /* ST_CALLSITE[0055CE81]: CALL 0x00404269; direct=00404269 FSGSTy::AddPlayer */
        st::fn_00404269(g_fSGS_0081174C,(undefined4 *)local_34);
        uVar4 = 0xffffffff;
        pbVar6 = pbVar8_mg0;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
        if (((~uVar4 < 100) && (DAT_00807360 != '\0')) && (param_1 == CASE_2)) {
          pcVar4_mgB = st::fn_006B0140(0x259a,g_hINSTANCE_00807618);
          /* ST_CALLSITE[0055CECF]: CALL dword ptr [0x0085bde8] */
          st::external_00000080(local_688,st::mutable_c_string("%s %s"),pbVar8_mg0,pcVar4_mgB);
LAB_0055cf74:
          /* ST_CALLSITE[0055CF81]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
          st::fn_0040347C(g_fSGS_0081174C,1,(byte *)&CHAR_00h_008016a0,local_688,5);
          return;
        }
      }
      break;
    case CASE_3:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        st::fn_0072E340((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        /* ST_CALLSITE[0055CF1E]: CALL 0x00403ae4; direct=00403AE4 FSGSTy::DelPlayer */
        st::fn_00403AE4(g_fSGS_0081174C,local_34);
        uVar4 = 0xffffffff;
        pbVar6 = pbVar8_mg0;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
        if ((~uVar4 < 100) && (DAT_00807360 != '\0')) {
          pcVar4_mgA = st::fn_006B0140(0x259b,g_hINSTANCE_00807618);
          /* ST_CALLSITE[0055CF62]: CALL dword ptr [0x0085bde8] */
          st::external_00000080(local_688,st::mutable_c_string("%s %s"),pbVar8_mg0,pcVar4_mgA);
          goto LAB_0055cf74;
        }
      }
      break;
    case CASE_4:
    case CASE_A:
      pcVar3_mg2 = st::fn_006B0140((-(uint)(param_1 != CASE_4) & 2) + 0x2575,g_hINSTANCE_00807618
                                     );
      uVar4 = 0xffffffff;
      pcVar7 = pcVar3_mg2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar5 = 0xffffffff;
      pbVar6_mg1 = param_4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar1 = *pbVar6_mg1;
        pbVar6_mg1 = pbVar6_mg1 + 1;
      } while (bVar1 != 0);
      param_2 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(~uVar4 + ~uVar5 + 4));
      if (param_2 != nullptr) {
        /* ST_CALLSITE[0055C8C1]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)param_2,st::mutable_c_string("%s %s"),pcVar3_mg2,param_4);
        if (STField<char>(this,9) != '\0') {
          st::fn_00404831((char *)param_2,param_5);
          st::fn_006AB060(&param_2);
          return;
        }
        if (g_fSGS_0081174C != nullptr) {
          /* ST_CALLSITE[0055C908]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
          st::fn_0040347C(g_fSGS_0081174C,9,param_2,param_5,0);
          st::fn_006AB060(&param_2);
          return;
        }
        if (g_startSystem_0081176C != nullptr) {
          pcVar7 = local_488;
          for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
            pcVar7[0] = '\0';
            pcVar7[1] = '\0';
            pcVar7[2] = '\0';
            pcVar7[3] = '\0';
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = '\0';
          st::fn_0072E340(local_488,(char *)param_2,0x40);
          local_449 = 0;
          st::fn_0072E340(local_448,param_5,0x410);
          local_345 = 0;
          /* ST_CALLSITE[0055C97D]: CALL 0x00402bbc; direct=00402BBC StartSystemTy::AddToChat */
          st::fn_00402BBC(g_startSystem_0081176C,(int)local_488);
        }
        st::fn_006AB060(&param_2);
        return;
      }
      break;
    case CASE_5:
      pbVar6 = (byte *)((int)this + 0x2c);
      pbVar8 = param_4;
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_0055c9c0:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0055c9c5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_0055c9c0;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0055c9c5:
      if (iVar3 != 0) {
        st::fn_0072E340((char *)((int)this + 0x2c),(char *)param_4,0x10);
        STField<undefined1>(this,0x3b) = 0;
        STField<char>(this,0x2b) = (STField<char>(this,0x2b) == '\a') + '\a';
      }
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        /* ST_CALLSITE[0055CA12]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
        st::fn_0040347C(g_fSGS_0081174C,STField<byte>(this,0x2b),param_4,param_5,5);
        return;
      }
      break;
    case CASE_6:
      pcVar4_mg5 = st::fn_006B0140(0x2576,g_hINSTANCE_00807618);
      pbVar8_mg1 = param_4;
      uVar4 = 0xffffffff;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar4_mg5;
        pcVar4_mg5 = pcVar4_mg5 + 1;
      } while (cVar2 != '\0');
      uVar5 = 0xffffffff;
      pbVar9_mg0 = param_4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar1 = *pbVar9_mg0;
        pbVar9_mg0 = pbVar9_mg0 + 1;
      } while (bVar1 != 0);
      param_2 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(~uVar4 + ~uVar5 + 4));
      if (param_2 != nullptr) {
        pcVar4_mg6 = st::fn_006B0140(0x2576,g_hINSTANCE_00807618);
        /* ST_CALLSITE[0055CC48]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)param_2,st::mutable_c_string("%s %s"),pcVar4_mg6,pbVar8_mg1);
        if (STField<char>(this,9) != '\0') {
          st::fn_00404831((char *)param_2,param_5);
          st::fn_006AB060(&param_2);
          return;
        }
        if (g_fSGS_0081174C != nullptr) {
          /* ST_CALLSITE[0055CC8F]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
          st::fn_0040347C(g_fSGS_0081174C,4,param_2,param_5,5);
          st::fn_006AB060(&param_2);
          return;
        }
        if (g_startSystem_0081176C != nullptr) {
          pcVar7 = local_488;
          for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
            pcVar7[0] = '\0';
            pcVar7[1] = '\0';
            pcVar7[2] = '\0';
            pcVar7[3] = '\0';
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = '\0';
          st::fn_0072E340(local_488,(char *)param_2,0x40);
          local_449 = 0;
          st::fn_0072E340(local_448,param_5,0x410);
          local_345 = 0;
          /* ST_CALLSITE[0055CD04]: CALL 0x00402bbc; direct=00402BBC StartSystemTy::AddToChat */
          st::fn_00402BBC(g_startSystem_0081176C,(int)local_488);
        }
        st::fn_006AB060(&param_2);
        return;
      }
      break;
    case CASE_7:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        /* ST_CALLSITE[0055CE02]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
        st::fn_0040347C(g_fSGS_0081174C,1,(byte *)&CHAR_00h_008016a0,param_5,5);
        /* ST_CALLSITE[0055CE0D]: CALL 0x00402c84; direct=00402C84 FSGSTy::JoinChannel */
        st::fn_00402C84(g_fSGS_0081174C);
        return;
      }
      break;
    case CASE_9:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        st::fn_0072E340((char *)local_34,(char *)param_4,0x10);
        local_25 = 0;
        local_f = param_2;
        local_b = param_3;
        /* ST_CALLSITE[0055CFCB]: CALL 0x00404a75; direct=00404A75 FSGSTy::ChangePlayer */
        st::fn_00404A75(g_fSGS_0081174C,local_34);
        return;
      }
      break;
    case CASE_D:
    case CASE_F:
      if (g_fSGS_0081174C != nullptr) {
        STField<undefined4>(this,0x1b) = 0x6156;
        STField<Global_sub_0055C830_param_1Enum>(this,0x1f) = param_1;
        /* ST_CALLSITE[0055CFF8]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
      }
      break;
    case CASE_10:
      if (STField<char>(this,9) != '\0') {
        st::fn_00404831((char *)param_4,param_5);
        return;
      }
      if (g_fSGS_0081174C != nullptr) {
        /* ST_CALLSITE[0055CB08]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
        st::fn_0040347C(g_fSGS_0081174C,6,param_4,param_5,5);
        return;
      }
      if (g_startSystem_0081176C != nullptr) {
        pcVar7 = local_488;
        for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = '\0';
        st::fn_0072E340(local_488,(char *)param_4,0x40);
        local_449 = 0;
        st::fn_0072E340(local_448,param_5,0x410);
        local_345 = 0;
        /* ST_CALLSITE[0055CB78]: CALL 0x00402bbc; direct=00402BBC StartSystemTy::AddToChat */
        st::fn_00402BBC(g_startSystem_0081176C,(int)local_488);
        return;
      }
      break;
    case CASE_12:
      if (STField<char>(this,9) != '\0') {
        st::fn_00404831((char *)param_4,param_5);
        return;
      }
      if (g_fSGS_0081174C != nullptr) {
        /* ST_CALLSITE[0055CA55]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
        st::fn_0040347C(g_fSGS_0081174C,2,param_4,param_5,5);
        return;
      }
      if (g_startSystem_0081176C != nullptr) {
        pcVar7 = local_488;
        for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = '\0';
        st::fn_0072E340(local_488,(char *)param_4,0x40);
        local_449 = 0;
        st::fn_0072E340(local_448,param_5,0x410);
        local_345 = 0;
        /* ST_CALLSITE[0055CAC5]: CALL 0x00402bbc; direct=00402BBC StartSystemTy::AddToChat */
        st::fn_00402BBC(g_startSystem_0081176C,(int)local_488);
        return;
      }
      break;
    case CASE_13:
      if (STField<char>(this,9) != '\0') {
        st::fn_00404831(nullptr,param_5);
        return;
      }
      if (g_fSGS_0081174C != nullptr) {
        /* ST_CALLSITE[0055CD4F]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
        st::fn_0040347C(g_fSGS_0081174C,3,(byte *)&CHAR_00h_008016a0,param_5,5);
        return;
      }
      if (g_startSystem_0081176C != nullptr) {
        pcVar7 = local_488;
        for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = '\0';
        uVar4 = 0xffffffff;
        pcVar7 = &CHAR_00h_008016a0;
        do {
          pcVar9 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar9 + -uVar4;
        pcVar9 = local_488;
        memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
        st::fn_0072E340(local_448,param_5,0x410);
        local_345 = 0;
        /* ST_CALLSITE[0055CDCE]: CALL 0x00402bbc; direct=00402BBC StartSystemTy::AddToChat */
        st::fn_00402BBC(g_startSystem_0081176C,(int)local_488);
        return;
      }
      break;
    case CASE_17:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        /* ST_CALLSITE[0055CBAB]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
        st::fn_0040347C(g_fSGS_0081174C,7,param_4,param_5,5);
        return;
      }
      break;
    case CASE_FF:
      if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
        /* ST_CALLSITE[0055CBDE]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
        st::fn_0040347C(g_fSGS_0081174C,4,param_4,param_5,5);
        return;
      }
    }
  }
  return;
}

// 0055D390 FUN_0055d390
#line 4 "decomp/ST.exe/functions/0055D390/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00597120 -> 0055D390 @ 0059778F

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0055D390(void *this,char *resourceString,char *param_2,ulong param_3)

{
  /* ST_CALLSITE[0055D3A4]: CALL dword ptr [0x0085c030] */
  st::external_000000FA(static_cast<CFsgsConnection *>(this),resourceString,param_2,param_3);
  st::fn_0072E340((char *)((int)this + 0x648),resourceString,0x3f);
  STField<undefined1>(this,0x687) = 0;
  st::fn_0072E340((char *)((int)this + 0x688),param_2,0x1f);
  STField<ulong>(this,0x6a8) = param_3;
  STField<undefined1>(this,0x6a7) = 0;
  return;
}

// 0055D410 FUN_0055d410
#line 4 "decomp/ST.exe/functions/0055D410/decomp.c"
void __fastcall st::fn_0055D410(CFsgsConnection *param_1)

{
  /* ST_CALLSITE[0055D425]: CALL dword ptr [0x0085c030] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::external_000000FA
            (param_1,(char *)(param_1 + 0x648),(char *)(param_1 + 0x688),*(ulong *)(param_1 + 0x6a8)
            );
  return;
}

// 0055D440 FUN_0055d440
#line 4 "decomp/ST.exe/functions/0055D440/decomp.c"
void __thiscall st::fn_0055D440(void *this,int param_1,undefined4 *param_2)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D463]: CALL 0x0040556a; direct=0040556A FSGSTy::SetChannelList */
    st::fn_0040556A(g_fSGS_0081174C,param_1,param_2);
  }
  return;
}

// 0055D480 FUN_0055d480
#line 4 "decomp/ST.exe/functions/0055D480/decomp.c"
void __thiscall st::fn_0055D480(void *this,int param_1)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D49F]: CALL 0x00403e95; direct=00403E95 FSGSTy::CreateGame */
    st::fn_00403E95(g_fSGS_0081174C,param_1);
  }
  return;
}

// 0055D4C0 FUN_0055d4c0
#line 4 "decomp/ST.exe/functions/0055D4C0/decomp.c"
void __thiscall st::fn_0055D4C0(void *this,int param_1,int *param_2)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D4E3]: CALL 0x004015be; direct=004015BE FSGSTy::SetGameList */
    st::fn_004015BE(g_fSGS_0081174C,param_1,param_2);
  }
  return;
}

// 0055D500 FUN_0055d500
#line 4 "decomp/ST.exe/functions/0055D500/decomp.c"
void __thiscall
st::fn_0055D500(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  STField<undefined4>(this,0x6b8) = param_2;
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D531]: CALL 0x004044fd; direct=004044FD FSGSTy::SetLadder */
    st::fn_004044FD(g_fSGS_0081174C,param_1,param_2,param_3,param_4);
  }
  return;
}

// 0055D550 FUN_0055d550
#line 4 "decomp/ST.exe/functions/0055D550/decomp.c"
void __thiscall st::fn_0055D550(void *this,byte *param_1,uint param_2,byte *param_3)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D577]: CALL 0x0040172b; direct=0040172B FSGSTy::SetInfo */
    st::fn_0040172B(g_fSGS_0081174C,param_1,param_2,param_3);
  }
  return;
}

// 0055D590 FUN_0055d590
#line 1 "decomp/ST.exe/functions/0055D590/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 005A3AB0 -> 0055D590 @ 005A3BA6 | 005A3AB0 -> 0055D590 @ 005A3BF1 | 005A3AB0 ->
   0055D590 @ 005A3C39 | 005A3AB0 -> 0055D590 @ 005A3C81 | 005A3AB0 -> 0055D590 @ 005A3DC7 */

byte * st::fn_0055D590(char *text,uint param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;

  if ((param_3 == nullptr) ||
     (uVar6 = 0, pbVar2 = (byte *)text, pbVar5 = param_3, pbVar4 = param_3, param_2 == 0)) {
    return nullptr;
  }
LAB_0055d5ad:
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 == *pbVar5) {
      if (bVar1 != 0) {
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0055d5d1;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
        if (bVar1 != 0) goto LAB_0055d5ad;
      }
      iVar3 = 0;
    }
    else {
LAB_0055d5d1:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar3 == 0) {
      return param_3 + uVar6 * 0x240 + 0x40;
    }
    uVar6 = uVar6 + 1;
    pbVar5 = pbVar4 + 0x240;
    pbVar2 = (byte *)text;
    pbVar4 = pbVar5;
    if (param_2 <= uVar6) {
      return nullptr;
    }
  } while( true );
}

// 0055D630 FUN_0055d630
#line 4 "decomp/ST.exe/functions/0055D630/decomp.c"
void __thiscall st::fn_0055D630(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D650]: CALL 0x00405a6f; direct=00405A6F FSGSTy::ChangePlayerPing */
    st::fn_00405A6F(g_fSGS_0081174C,param_1,param_2,param_3);
  }
  return;
}

// 0055D670 FUN_0055d670
#line 4 "decomp/ST.exe/functions/0055D670/decomp.c"
void __thiscall st::fn_0055D670(void *this,undefined4 param_1,undefined4 param_2)

{
  if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D68C]: CALL 0x00402c70; direct=00402C70 FSGSTy::Download */
    st::fn_00402C70(g_fSGS_0081174C,param_1,param_2);
  }
  return;
}

// 0055D6B0 FUN_0055d6b0
#line 4 "decomp/ST.exe/functions/0055D6B0/decomp.c"
void __thiscall st::fn_0055D6B0(void *this,int param_1)

{
  if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D6C8]: CALL 0x00404b92; direct=00404B92 FSGSTy::Finished */
    st::fn_00404B92(g_fSGS_0081174C,param_1);
  }
  return;
}

// 0055D6F0 FUN_0055d6f0
#line 4 "decomp/ST.exe/functions/0055D6F0/decomp.c"
void __cdecl st::fn_0055D6F0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  if (0 < param_2) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + param_1) = *(undefined1 *)((uint)*(byte *)(iVar1 + param_1) + param_3);
      iVar1 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// 0055D910 FUN_0055d910
#line 1 "decomp/ST.exe/functions/0055D910/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_0055D910(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000004;

  if (PTR_008032b4 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032b4);
  }
  if (PTR_008032b8 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032b8);
  }
  if (PTR_008032bc != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032bc);
  }
  if (PTR_008032c0 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032c0);
  }
  if (PTR_008032c4 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032c4);
  }
  if (PTR_008032c8 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032c8);
  }
  if (PTR_008032cc != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032cc);
  }
  if (PTR_008032d0 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032d0);
  }
  if (PTR_008032d4 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032d4);
  }
  PTR_008073cc = PTR_008032c0;
  PTR_00807560 = PTR_008032c4;
  PTR_008073c8 = PTR_008032bc;
  return;
}

// 0055DB70 FUN_0055db70
#line 1 "decomp/ST.exe/functions/0055DB70/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_0055DB70(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000004;

  if (PTR_008032a4 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032a4);
  }
  if (PTR_008032a8 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032a8);
  }
  if (PTR_008032ac != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032ac);
  }
  if (PTR_008032b0 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&PTR_008032b0);
  }
  return;
}

// 0055DDF0 FUN_0055ddf0
#line 4 "decomp/ST.exe/functions/0055DDF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0055DDF0 -> 006BC360 @ 0055DE11 */

void __cdecl st::fn_0055DDF0(undefined4 *param_1,int *param_2,ushort *param_3,int param_4,int param_5)

{
  undefined4 local_404 [256];

  st::fn_006BD740(param_2);
  st::fn_006BC360(param_3,local_404,nullptr);
  st::fn_00719080(param_1,local_404,0,0x100,param_4,param_5);
  return;
}

// 0055DE60 FUN_0055de60
#line 1 "decomp/ST.exe/functions/0055DE60/decomp.c"

int st::fn_0055DE60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_3 - param_1 >> 0x1f;
  iVar2 = (param_3 - param_1 ^ uVar3) - uVar3;
  uVar3 = param_4 - param_2 >> 0x1f;
  iVar1 = (param_4 - param_2 ^ uVar3) - uVar3;
  if (iVar1 <= iVar2) {
    return (iVar2 - iVar1) * DAT_00803320 + DAT_00803324 * iVar1;
  }
  return (iVar1 - iVar2) * DAT_00803320 + DAT_00803324 * iVar2;
}

// 0055DEE0 FUN_0055dee0
#line 4 "decomp/ST.exe/functions/0055DEE0/decomp.c"
void st::fn_0055DEE0(byte *param_1)

{
  int scalar_puVar13;
  int scalar_local_40;

  byte bVar1;
  ushort uVar2;
  byte uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *puVar7;
  short *psVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ushort *puVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  byte *local_44;
  ushort *local_40;
  ushort *local_3c;
  int local_38;
  byte *local_34;
  int local_30;
  int local_2c;
  short *local_28;
  int local_24;
  int local_20;
  ushort *local_1c;
  byte *local_18;
  short *local_14;
  ushort *local_10;
  int local_c;
  ushort *local_8;

  local_8 = nullptr;
  local_18 = nullptr;
  local_24 = 0;
  local_20 = 0;
  local_14 = static_cast<short *>(st::fn_006AAC10(DAT_008033a8 * DAT_008033a4 * 2));
  iVar4 = st::fn_0055EE70(param_1,DAT_00803390,1);
  iVar9 = DAT_00803324 * DAT_00803358;
  iVar5 = DAT_008033a4;
  if (0 < iVar4) {
    local_44 = (undefined1 *)(iVar4 + 1U >> 1);
    pbVar13 = param_1;
    do {
      puVar15 = (ushort *)(DAT_00803304 + (char)*pbVar13);
      pbVar17 = (byte *)(DAT_00803308 + (char)pbVar13[1]);
      if (((((int)puVar15 < 0) || (iVar5 <= (int)puVar15)) || ((int)pbVar17 < 0)) ||
         ((DAT_008033a8 <= (int)pbVar17 ||
          ((short)PTR_008033b4[(int)(iVar5 * (int)pbVar17 + (int)puVar15)] < 1)))) {
        iVar16 = (int)puVar15 * 0x10000;
        iVar18 = (int)pbVar17 * 0x10000;
        iVar11 = DAT_00803390;
        do {
          iVar16 = iVar16 - ((int)(char)*pbVar13 << 0x10) / DAT_00803390;
          iVar18 = iVar18 - ((int)(char)pbVar13[1] << 0x10) / DAT_00803390;
          puVar15 = (ushort *)(iVar16 >> 0x10);
          pbVar17 = (byte *)(iVar18 >> 0x10);
          iVar11 = iVar11 + -1;
          if (iVar11 < DAT_0080335c) goto cf_continue_loop_0055E2E9;
        } while ((((int)puVar15 < 0) || (iVar5 <= (int)puVar15)) ||
                (((int)pbVar17 < 0 ||
                 ((DAT_008033a8 <= (int)pbVar17 ||
                  ((short)PTR_008033b4[(int)(iVar5 * (int)pbVar17 + (int)puVar15)] < 1))))));
        if (DAT_0080335c <= iVar11) goto LAB_0055e02a;
      }
      else {
LAB_0055e02a:
        local_3c = (ushort *)st::fn_006AD0B0((int)puVar15,(int)pbVar17,DAT_00803304,DAT_00803308);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = pbVar17;
        local_1c = puVar15;
LAB_0055e048:
        local_2c = 30000;
        local_c = 1;
        local_28 = st::pointer_boundary_cast<short *>(&DAT_007edcab);
        do {
          local_10 = (ushort *)((int)local_28[-1] + (int)local_1c);
          if ((((-1 < (int)local_10) && ((int)local_10 < DAT_008033a4)) &&
              (pbVar14 = param_1 + *local_28, -1 < (int)pbVar14)) &&
             (((int)pbVar14 < DAT_008033a8 &&
              (local_20 = (short)PTR_008033b4
                                      [(int)(DAT_008033a4 * (int)pbVar14 + (int)local_10)],
              0 < local_20)))) {
            if (local_20 <= iVar9) break;
            iVar5 = local_20 + (DAT_00803324 - DAT_00803320);
            if (iVar5 < local_2c) {
              local_24 = local_c;
              local_2c = iVar5;
              local_18 = pbVar14;
              local_8 = local_10;
            }
            else if ((iVar5 == local_2c) &&
                    ((uVar6 = ((int)local_10 - (int)puVar15) * (DAT_00803308 - (int)pbVar17) -
                              ((int)pbVar14 - (int)pbVar17) * (DAT_00803304 - (int)puVar15),
                     uVar12 = (int)uVar6 >> 0x1f, iVar11 = (uVar6 ^ uVar12) - uVar12,
                     uVar6 = ((int)local_8 - (int)puVar15) * (DAT_00803308 - (int)pbVar17) -
                             ((int)local_18 - (int)pbVar17) * (DAT_00803304 - (int)puVar15),
                     uVar12 = (int)uVar6 >> 0x1f, iVar5 = (uVar6 ^ uVar12) - uVar12, iVar11 < iVar5
                     || ((iVar11 == iVar5 && ((ushort *)local_c == local_3c)))))) {
              local_24 = local_c;
              local_18 = pbVar14;
              local_8 = local_10;
            }
          }
          local_28 = local_28 + 5;
          local_c = local_c + 2;
        } while ((int)local_28 < 0x7edcce);
        iVar5 = DAT_008033a4;
        if ((local_20 < 1) || (iVar9 < local_20)) {
          local_c = 0;
          local_28 = st::pointer_boundary_cast<short *>(&DAT_007edca6);
          do {
            local_10 = (ushort *)((int)local_28[-1] + (int)local_1c);
            if ((((-1 < (int)local_10) && ((int)local_10 < DAT_008033a4)) &&
                (pbVar14 = param_1 + *local_28, -1 < (int)pbVar14)) &&
               (((int)pbVar14 < DAT_008033a8 &&
                (local_20 = (short)PTR_008033b4
                                        [(int)(DAT_008033a4 * (int)pbVar14 + (int)local_10)],
                0 < local_20)))) {
              if (local_20 <= iVar9) break;
              if (local_20 < local_2c) {
                local_24 = local_c;
                local_2c = local_20;
                local_18 = pbVar14;
                local_8 = local_10;
              }
              else if ((local_20 == local_2c) &&
                      ((uVar6 = ((int)local_10 - (int)puVar15) * (DAT_00803308 - (int)pbVar17) -
                                ((int)pbVar14 - (int)pbVar17) * (DAT_00803304 - (int)puVar15),
                       uVar12 = (int)uVar6 >> 0x1f, iVar16 = (uVar6 ^ uVar12) - uVar12,
                       uVar6 = ((int)local_8 - (int)puVar15) * (DAT_00803308 - (int)pbVar17) -
                               ((int)local_18 - (int)pbVar17) * (DAT_00803304 - (int)puVar15),
                       uVar12 = (int)uVar6 >> 0x1f, iVar11 = (uVar6 ^ uVar12) - uVar12,
                       iVar16 < iVar11 || ((iVar16 == iVar11 && ((ushort *)local_c == local_3c))))))
              {
                local_24 = local_c;
                local_18 = pbVar14;
                local_8 = local_10;
              }
            }
            local_28 = local_28 + 5;
            local_c = local_c + 2;
          } while ((int)local_28 < 0x7edcce);
          if ((0 < local_20) && (local_20 <= iVar9)) goto cf_continue_loop_0055E2E9;
          param_1 = local_18;
          local_3c = (ushort *)local_24;
          local_1c = local_8;
          scalar_puVar13 = DAT_008033a4 * (int)local_18 + (int)local_8; /* split integer lifetime from pointer-typed SSA storage */
          if ((ushort)local_14[scalar_puVar13] < 0xff) {
            local_14[scalar_puVar13] = local_14[scalar_puVar13] + 1;
          }
          goto LAB_0055e048;
        }
      }
cf_continue_loop_0055E2E9:
      pbVar13 = pbVar13 + 4;
      local_44 = (undefined1 *)((int)local_44 - 1);
    } while (local_44 != nullptr);
  }
  iVar9 = 0;
  if (0 < DAT_008033a8) {
    do {
      psVar8 = local_14 + iVar5 * iVar9;
      iVar11 = 0;
      if (0 < iVar5) {
        puVar7 = PTR_00803380 + iVar5 * iVar9 * 2 + 1;
        do {
          iVar11 = iVar11 + 1;
          *puVar7 = (char)*psVar8;
          puVar7 = puVar7 + 2;
          psVar8 = psVar8 + 1;
          iVar5 = DAT_008033a4;
        } while (iVar11 < DAT_008033a4);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < DAT_008033a8);
  }
  if ((iVar5 < 5) || (DAT_008033a8 < 5)) {
    iVar9 = 0;
    if (0 < DAT_008033a8) {
      do {
        puVar15 = (ushort *)(local_14 + iVar5 * iVar9);
        iVar11 = 0;
        if (0 < iVar5) {
          pbVar17 = PTR_00803380 + iVar5 * iVar9 * 2 + 1;
          do {
            *puVar15 = (ushort)*pbVar17;
            iVar11 = iVar11 + 1;
            pbVar17 = pbVar17 + 2;
            puVar15 = puVar15 + 1;
            iVar5 = DAT_008033a4;
          } while (iVar11 < DAT_008033a4);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < DAT_008033a8);
      if (0 < DAT_008033a8) {
        local_38 = 2;
        do {
          if (0 < iVar5) {
            local_44 = PTR_00803380 + (local_38 + -2) * iVar5 * 2 + 1;
            iVar5 = 2;
            do {
              iVar9 = local_38 + -4;
              local_3c = nullptr;
              param_1 = nullptr;
              if (local_38 < iVar9) {
LAB_0055eb08:
                uVar3 = 0;
              }
              else {
                local_40 = (ushort *)(local_14 + iVar9 * DAT_008033a4);
                do {
                  if ((-1 < iVar9) && (iVar9 < DAT_008033a8)) {
                    puVar15 = local_40;
                    for (iVar11 = iVar5 + -4; iVar11 <= iVar5; iVar11 = iVar11 + 1) {
                      if ((-1 < iVar11) && (iVar11 < DAT_008033a4)) {
                        param_1 = param_1 + 1;
                        local_3c = (ushort *)((int)local_3c + (uint)*puVar15);
                      }
                      puVar15 = puVar15 + 1;
                    }
                  }
                  iVar9 = iVar9 + 1;
                  local_40 = local_40 + DAT_008033a4;
                } while (iVar9 <= local_38);
                if ((int)param_1 < 1) goto LAB_0055eb08;
                uVar3 = (undefined1)((int)local_3c / (int)param_1);
              }
              *local_44 = uVar3;
              local_44 = local_44 + 2;
              iVar9 = iVar5 + -1;
              iVar5 = iVar5 + 1;
            } while (iVar9 < DAT_008033a4);
          }
          iVar9 = local_38 + -1;
          iVar5 = DAT_008033a4;
          local_38 = local_38 + 1;
        } while (iVar9 < DAT_008033a8);
      }
    }
  }
  else {
    local_1c = nullptr;
    local_8 = (ushort *)local_14;
    if (0 < iVar5) {
      pbVar17 = PTR_00803380 + 1;
      do {
        sVar10 = 0;
        iVar9 = 3;
        pbVar14 = pbVar17;
        do {
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + iVar5 * 2;
          sVar10 = sVar10 + (ushort)bVar1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        local_1c = (ushort *)((int)local_1c + 1);
        pbVar17 = pbVar17 + 2;
        *local_8 = sVar10;
        local_8 = local_8 + 1;
        iVar5 = DAT_008033a4;
      } while ((int)local_1c < DAT_008033a4);
    }
    iVar9 = 1;
    do {
      iVar11 = iVar9;
      iVar9 = 0;
      if (0 < iVar5) {
        pbVar17 = PTR_00803380 + (iVar11 + 2) * iVar5 * 2 + 1;
        psVar8 = local_14 + iVar5 * iVar11;
        do {
          bVar1 = *pbVar17;
          pbVar17 = pbVar17 + 2;
          iVar9 = iVar9 + 1;
          *psVar8 = psVar8[-iVar5] + (ushort)bVar1;
          psVar8 = psVar8 + 1;
          iVar5 = DAT_008033a4;
        } while (iVar9 < DAT_008033a4);
      }
      iVar9 = iVar11 + 1;
    } while (iVar9 < 3);
    if (iVar9 < DAT_008033a8 + -2) {
      iVar11 = iVar11 + 3;
      do {
        iVar16 = 0;
        if (0 < iVar5) {
          param_1 = PTR_00803380 + iVar11 * iVar5 * 2 + 1;
          pbVar17 = PTR_00803380 + (iVar11 + -5) * iVar5 * 2 + 1;
          psVar8 = local_14 + iVar5 * iVar9;
          do {
            bVar1 = *pbVar17;
            pbVar17 = pbVar17 + 2;
            iVar16 = iVar16 + 1;
            *psVar8 = (psVar8[-iVar5] - (ushort)bVar1) + (ushort)*param_1;
            param_1 = param_1 + 2;
            psVar8 = psVar8 + 1;
            iVar5 = DAT_008033a4;
          } while (iVar16 < DAT_008033a4);
        }
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 1;
      } while (iVar9 < DAT_008033a8 + -2);
    }
    if (iVar9 < DAT_008033a8) {
      param_1 = (byte *)(iVar9 + -3);
      do {
        iVar11 = 0;
        if (0 < iVar5) {
          pbVar17 = PTR_00803380 + (int)param_1 * iVar5 * 2 + 1;
          psVar8 = local_14 + iVar5 * iVar9;
          do {
            bVar1 = *pbVar17;
            pbVar17 = pbVar17 + 2;
            iVar11 = iVar11 + 1;
            *psVar8 = psVar8[-iVar5] - (ushort)bVar1;
            psVar8 = psVar8 + 1;
            iVar5 = DAT_008033a4;
          } while (iVar11 < DAT_008033a4);
        }
        iVar9 = iVar9 + 1;
        param_1 = param_1 + 1;
      } while (iVar9 < DAT_008033a8);
    }
    param_1 = nullptr;
    local_30 = 0xf;
    local_34 = (byte *)&DAT_0000000c;
    local_38 = 9;
    do {
      iVar11 = 0;
      local_8 = (ushort *)(local_14 + iVar5 * (int)param_1);
      local_10 = (ushort *)(PTR_00803380 + iVar5 * (int)param_1 * 2);
      iVar9 = 3;
      puVar15 = local_8;
      do {
        uVar2 = *puVar15;
        puVar15 = puVar15 + 1;
        iVar11 = iVar11 + (uint)uVar2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if ((*local_10 & 7) != 0) {
        STField<byte>(local_10,1) =
             (byte)((int)(iVar11 + (uint)STField<byte>(local_10,1) * 4) / local_38);
        iVar5 = DAT_008033a4;
      }
      local_40 = (ushort *)local_34;
      local_3c = local_8 + 3;
      pbVar17 = (byte *)((int)local_10 + 3);
      local_44 = (undefined1 *)0x2;
      local_c = 3;
      do {
        iVar11 = iVar11 + (uint)*local_3c;
        if ((pbVar17[-1] & 7) != 0) {
          *pbVar17 = (byte)((int)(iVar11 + (uint)*pbVar17 * 4) / (int)local_40);
          iVar5 = DAT_008033a4;
        }
        pbVar17 = pbVar17 + 2;
        local_40 = (ushort *)((int)local_40 + (int)(param_1 + 3));
        local_3c = local_3c + 1;
        local_44 = (undefined1 *)((int)local_44 + -1);
      } while (local_44 != nullptr);
      if (3 < iVar5 + -2) {
        puVar15 = local_8 + 5;
        pbVar17 = (byte *)((int)local_10 + 7);
        do {
          iVar11 = iVar11 + ((uint)*puVar15 - (uint)puVar15[-5]);
          if ((pbVar17[-1] & 7) != 0) {
            *pbVar17 = (byte)((int)(iVar11 + (uint)*pbVar17 * 4) / local_30);
            iVar5 = DAT_008033a4;
          }
          local_c = local_c + 1;
          puVar15 = puVar15 + 1;
          pbVar17 = pbVar17 + 2;
        } while (local_c < iVar5 + -2);
      }
      if (local_c < iVar5) {
        pbVar17 = (byte *)((int)local_10 + local_c * 2 + 1);
        local_40 = local_8 + local_c + -3;
        iVar9 = local_c;
        do {
          iVar11 = iVar11 - (uint)*local_40;
          if ((pbVar17[-1] & 7) != 0) {
            *pbVar17 = (byte)((int)(iVar11 + (uint)*pbVar17 * 4) /
                             (((iVar5 - iVar9) + 2) * (int)(param_1 + 3)));
            iVar5 = DAT_008033a4;
          }
          iVar9 = iVar9 + 1;
          local_40 = local_40 + 1;
          pbVar17 = pbVar17 + 2;
        } while (iVar9 < iVar5);
      }
      param_1 = param_1 + 1;
      local_38 = local_38 + 3;
      local_34 = local_34 + 4;
      local_30 = local_30 + 5;
    } while (local_38 < 0x10);
    if ((int)param_1 < DAT_008033a8 + -2) {
      do {
        iVar11 = 0;
        local_8 = (ushort *)(local_14 + iVar5 * (int)param_1);
        local_10 = (ushort *)(PTR_00803380 + iVar5 * (int)param_1 * 2);
        iVar9 = 3;
        puVar15 = local_8;
        do {
          uVar2 = *puVar15;
          puVar15 = puVar15 + 1;
          iVar11 = iVar11 + (uint)uVar2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if ((*local_10 & 7) != 0) {
          iVar5 = iVar11 + (uint)STField<byte>(local_10,1) * 4;
          STField<char>(local_10,1) =
               ((char)(iVar5 / 0xf) + (char)(iVar5 >> 0x1f)) -
               (char)((longlong)iVar5 * 0x88888889 >> 0x3f);
          iVar5 = DAT_008033a4;
        }
        local_3c = local_8 + 3;
        local_40 = (ushort *)0x14;
        pbVar17 = (byte *)((int)local_10 + 3);
        local_c = 3;
        do {
          iVar11 = iVar11 + (uint)*local_3c;
          if ((pbVar17[-1] & 7) != 0) {
            *pbVar17 = (byte)((int)(iVar11 + (uint)*pbVar17 * 4) / (int)local_40);
            iVar5 = DAT_008033a4;
          }
          local_40 = (ushort *)((int)local_40 + 5);
          local_3c = local_3c + 1;
          pbVar17 = pbVar17 + 2;
        } while ((int)local_40 < 0x1a);
        if (3 < iVar5 + -2) {
          pbVar17 = (byte *)((int)local_10 + 7);
          puVar15 = local_8 + 5;
          do {
            iVar11 = iVar11 + ((uint)*puVar15 - (uint)puVar15[-5]);
            if ((pbVar17[-1] & 7) != 0) {
              iVar5 = iVar11 + (uint)*pbVar17 * 4;
              *pbVar17 = ((char)(iVar5 / 0x19) + (char)(iVar5 >> 0x1f)) -
                         (char)((longlong)iVar5 * 0x51eb851f >> 0x3f);
              iVar5 = DAT_008033a4;
            }
            local_c = local_c + 1;
            puVar15 = puVar15 + 1;
            pbVar17 = pbVar17 + 2;
          } while (local_c < iVar5 + -2);
        }
        if (local_c < iVar5) {
          pbVar17 = (byte *)((int)local_10 + local_c * 2 + 1);
          local_40 = local_8 + local_c + -3;
          iVar9 = local_c;
          do {
            iVar11 = iVar11 - (uint)*local_40;
            if ((pbVar17[-1] & 7) != 0) {
              *pbVar17 = (byte)((int)(iVar11 + (uint)*pbVar17 * 4) / (((iVar5 - iVar9) + 2) * 5));
              iVar5 = DAT_008033a4;
            }
            iVar9 = iVar9 + 1;
            local_40 = local_40 + 1;
            pbVar17 = pbVar17 + 2;
          } while (iVar9 < iVar5);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < DAT_008033a8 + -2);
    }
    if ((int)param_1 < DAT_008033a8) {
      do {
        iVar11 = (DAT_008033a8 - (int)param_1) + 2;
        iVar16 = 0;
        local_8 = (ushort *)(local_14 + iVar5 * (int)param_1);
        local_10 = (ushort *)(PTR_00803380 + iVar5 * (int)param_1 * 2);
        iVar9 = 3;
        puVar15 = local_8;
        do {
          uVar2 = *puVar15;
          puVar15 = puVar15 + 1;
          iVar16 = iVar16 + (uint)uVar2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if ((*local_10 & 7) != 0) {
          STField<byte>(local_10,1) =
               (byte)((int)(iVar16 + (uint)STField<byte>(local_10,1) * 4) / (iVar11 * 3));
          iVar5 = DAT_008033a4;
        }
        scalar_local_40 = iVar11 * 4; /* split integer lifetime from pointer-typed SSA storage */
        local_3c = local_8 + 3;
        pbVar17 = (byte *)((int)local_10 + 3);
        local_44 = (undefined1 *)0x2;
        local_c = 3;
        do {
          iVar16 = iVar16 + (uint)*local_3c;
          if ((pbVar17[-1] & 7) != 0) {
            *pbVar17 = (byte)((int)(iVar16 + (uint)*pbVar17 * 4) / scalar_local_40);
            iVar5 = DAT_008033a4;
          }
          local_3c = local_3c + 1;
          local_40 = (ushort *)((int)local_40 + iVar11);
          pbVar17 = pbVar17 + 2;
          local_44 = (undefined1 *)((int)local_44 + -1);
        } while (local_44 != nullptr);
        if (3 < iVar5 + -2) {
          local_40 = (ushort *)((int)local_10 + 7);
          puVar15 = local_8 + 5;
          do {
            iVar16 = iVar16 + ((uint)*puVar15 - (uint)puVar15[-5]);
            if ((*(byte *)((int)local_40 + -1) & 7) != 0) {
              *(byte *)local_40 = (byte)((int)(iVar16 + (uint)(byte)*local_40 * 4) / (iVar11 * 5));
              iVar5 = DAT_008033a4;
            }
            local_40 = (ushort *)((int)local_40 + 2);
            local_c = local_c + 1;
            puVar15 = puVar15 + 1;
          } while (local_c < iVar5 + -2);
        }
        if (local_c < iVar5) {
          pbVar17 = (byte *)((int)local_10 + local_c * 2 + 1);
          local_40 = local_8 + local_c + -3;
          do {
            iVar16 = iVar16 - (uint)*local_40;
            if ((pbVar17[-1] & 7) != 0) {
              *pbVar17 = (byte)((int)(iVar16 + (uint)*pbVar17 * 4) /
                               (((iVar5 - local_c) + 2) * iVar11));
              iVar5 = DAT_008033a4;
            }
            local_c = local_c + 1;
            local_40 = local_40 + 1;
            pbVar17 = pbVar17 + 2;
          } while (local_c < iVar5);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < DAT_008033a8);
    }
  }
  st::fn_006AB060(&local_14);
  return;
}

// 0055EE70 FUN_0055ee70
#line 1 "decomp/ST.exe/functions/0055EE70/decomp.c"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0055DEE0 -> 0055EE70 @ 0055DF1B */

int st::fn_0055EE70(byte *param_1,int param_2,int param_3)

{
  alignas(4) byte st_stack_frame[100];

  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  int local_34;
  int local_28;

  iVar5 = param_2 * -4;
  pbVar9 = (st_stack_frame + 16) + iVar5;
  pcVar10 = (st_stack_frame + 16) + iVar5;
  pcVar11 = (st_stack_frame + 16) + iVar5;
  pbVar12 = (st_stack_frame + 16) + iVar5;
  puVar7 = (st_stack_frame + 16) + iVar5;
  iVar6 = 0;
  iVar3 = param_2 * -2 + 3;
  local_28 = 0;
  do {
    iVar8 = local_28;
    iVar1 = param_2;
    *puVar7 = (char)iVar1;
    puVar7[1] = -(char)iVar6;
    local_28 = iVar8 + 1;
    puVar7 = puVar7 + 2;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 6 + iVar6 * 4;
      param_2 = iVar1;
    }
    else {
      iVar3 = iVar3 + 10 + (iVar6 - iVar1) * 4;
      param_2 = iVar1 + -1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < param_2);
  if ((iVar6 == param_2) && (param_2 != iVar1)) {
    ((st_stack_frame + 16))[local_28 * 2 + iVar5] = (char)param_2;
    ((st_stack_frame + 17))[local_28 * 2 + iVar5] = -(char)iVar6;
    local_28 = iVar8 + 2;
  }
  if (0 < iVar8) {
    pcVar2 = (st_stack_frame + 16) + local_28 * 2 + iVar5;
    pcVar4 = (st_stack_frame + 16) + iVar8 * 2 + iVar5;
    local_28 = local_28 + iVar8;
    do {
      *pcVar2 = -pcVar4[1];
      pcVar2[1] = -*pcVar4;
      pcVar2 = pcVar2 + 2;
      pcVar4 = pcVar4 + -2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar3 = 0;
  iVar5 = 0;
  local_34 = 0;
  pbVar13 = param_1;
  do {
    if (iVar5 < 1) {
      *pbVar13 = *pbVar9;
      pbVar13[1] = pbVar9[1];
      iVar5 = iVar5 + param_3;
      iVar3 = iVar3 + 1;
      pbVar13 = pbVar13 + 2;
    }
    iVar5 = iVar5 + -1;
    local_34 = local_34 + 1;
    pbVar9 = pbVar9 + 2;
  } while (local_34 < local_28);
  iVar6 = 0;
  pbVar9 = param_1 + iVar3 * 2;
  do {
    if (iVar5 < 1) {
      *pbVar9 = pcVar10[1];
      pbVar9[1] = -*pcVar10;
      iVar5 = iVar5 + param_3;
      iVar3 = iVar3 + 1;
      pbVar9 = pbVar9 + 2;
    }
    iVar5 = iVar5 + -1;
    iVar6 = iVar6 + 1;
    pcVar10 = pcVar10 + 2;
  } while (iVar6 < local_28);
  iVar6 = 0;
  pbVar9 = param_1 + iVar3 * 2;
  do {
    if (iVar5 < 1) {
      *pbVar9 = -*pcVar11;
      pbVar9[1] = -pcVar11[1];
      iVar5 = iVar5 + param_3;
      iVar3 = iVar3 + 1;
      pbVar9 = pbVar9 + 2;
    }
    iVar5 = iVar5 + -1;
    iVar6 = iVar6 + 1;
    pcVar11 = pcVar11 + 2;
  } while (iVar6 < local_28);
  iVar6 = 0;
  pbVar9 = param_1 + iVar3 * 2;
  do {
    if (iVar5 < 1) {
      *pbVar9 = -pbVar12[1];
      pbVar9[1] = *pbVar12;
      iVar5 = iVar5 + param_3;
      iVar3 = iVar3 + 1;
      pbVar9 = pbVar9 + 2;
    }
    iVar5 = iVar5 + -1;
    iVar6 = iVar6 + 1;
    pbVar12 = pbVar12 + 2;
  } while (iVar6 < local_28);
  return iVar3;
}

// 0055F0C0 FUN_0055f0c0
#line 4 "decomp/ST.exe/functions/0055F0C0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int * st::fn_0055F0C0(int *param_1,uint param_2,uint param_3,int param_4,uint param_5,
                  callback_0055F0C0_p5 *param_6,callback_0055F0C0_p6 *param_7)

{
  alignas(4) byte st_stack_frame[156];

  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  int local_6c;
  int *local_64;
  int local_60;
  int local_54;
  int local_50;
  uint local_48;
  int *local_44 [4];
  uint *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  int *piVar4_mg0;

  puStack_c = (undefined *)&DAT_0079afc0;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_48 = param_2;
  if (9 < (int)param_2) {
    local_48 = 10;
  }
  uStack_7c = 0x55f112;
  local_34 = (uint *)((st_stack_frame + 32) + param_2 * -4);
  auStack_8c[4 - param_2] = 0x55f126;
  local_24 = (int *)((st_stack_frame + 32) + param_2 * -8);
  auStack_8c[param_2 * -2 + 4] = 0x55f144;
  local_1c = (st_stack_frame + 32) + param_3 * -4 + param_2 * -8;
  local_30 = (int *)((st_stack_frame + 32) + param_3 * -4 + param_2 * -8);
  local_8 = 0xffffffff;
  auStack_8c[param_2 * -2 + (4 - param_3)] = param_3 * 4;
  auStack_8c[param_2 * -2 + (3 - param_3)] = 0x55f158;
  ExceptionList = &local_14;
  local_44[0] = static_cast<int *>(st::fn_006AAC70(auStack_8c[param_2 * -2 + (4 - param_3)]));
  if (param_4 < 0) {
    param_4 = 1;
  }
  local_2c = -1;
  local_60 = param_4;
  if (0 < param_4) {
    do {
      piVar4_mg0 = param_1;
      piVar4 = local_24;
      for (uVar2 = param_2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar4 = *piVar4_mg0;
        piVar4_mg0 = piVar4_mg0 + 1;
        piVar4 = piVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(char *)piVar4 = (char)*piVar4_mg0;
        piVar4_mg0 = (int *)((int)piVar4_mg0 + 1);
        piVar4 = (int *)((int)piVar4 + 1);
      }
      local_50 = 0;
      if (0 < (int)param_3) {
        local_64 = local_30;
        do {
          iVar6 = 0;
          local_28 = 0;
          iVar3 = 0;
          local_54 = 0;
          iVar5 = 0;
          piVar4 = local_24;
          if (0 < (int)param_2) {
            do {
              if ((int)local_48 <= iVar3) break;
              if (-1 < *piVar4) {
                iVar6 = iVar6 + *piVar4;
                local_28 = iVar6;
                iVar3 = iVar3 + 1;
                local_54 = iVar3;
              }
              iVar5 = iVar5 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar5 < (int)param_2);
          }
          if (iVar3 < 1) break;
          if (iVar6 == 0) {
            uVar2 = iVar3 * 100;
            if (0 < iVar5) {
              puVar1 = local_34;
              iVar3 = iVar5;
              do {
                *puVar1 = (*(int *)(((int)local_24 - (int)local_34) + (int)puVar1) < 0) - 1 & 100;
                puVar1 = puVar1 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          else {
            uVar2 = 0;
            if (0 < iVar5) {
              puVar1 = local_34;
              local_6c = iVar5;
              do {
                iVar6 = *(int *)((int)puVar1 + ((int)local_24 - (int)local_34));
                if (iVar6 < 0) {
                  *puVar1 = 0;
                }
                else {
                  *puVar1 = (iVar6 * iVar3 * 100) / local_28;
                  iVar3 = local_54;
                }
                uVar2 = uVar2 + *puVar1;
                puVar1 = puVar1 + 1;
                local_6c = local_6c + -1;
              } while (local_6c != 0);
            }
          }
          param_5 = param_5 * 0x41c64e6d + 0x3039;
          iVar6 = (param_5 >> 0x10) % uVar2 + 1;
          iVar3 = 0;
          puVar1 = local_34;
          if (0 < iVar5) {
            do {
              iVar6 = iVar6 - *puVar1;
              if (iVar6 < 1) break;
              iVar3 = iVar3 + 1;
              puVar1 = puVar1 + 1;
            } while (iVar3 < iVar5);
          }
          if (iVar5 <= iVar3) break;
          *local_64 = iVar3;
          piVar4 = local_24;
          local_24[iVar3] = -1;
          auStack_8c[param_2 * -2 + (4 - param_3)] = iVar3;
          auStack_8c[param_2 * -2 + (3 - param_3)] = (uint)piVar4;
          auStack_8c[param_2 * -2 + (2 - param_3)] = local_50;
          auStack_8c[param_2 * -2 + (1 - param_3)] = (uint)local_30;
          auStack_8c[param_2 * -2 - param_3] = 0x55f2ac;
          /* ST_CALLSITE[0055F2A9]: CALL dword ptr [EBP + 0x20] */
          (*param_7)(auStack_8c[param_2 * -2 + (1 - param_3)],
                     auStack_8c[param_2 * -2 + (2 - param_3)],
                     auStack_8c[param_2 * -2 + (3 - param_3)],
                     auStack_8c[param_2 * -2 + (4 - param_3)]);
          local_50 = local_50 + 1;
          local_64 = local_64 + 1;
        } while (local_50 < (int)param_3);
      }
      if ((int)param_3 <= local_50) {
        auStack_8c[param_2 * -2 + (4 - param_3)] = param_3;
        auStack_8c[param_2 * -2 + (3 - param_3)] = (uint)local_30;
        auStack_8c[param_2 * -2 + (2 - param_3)] = 0x55f2d2;
        /* ST_CALLSITE[0055F2CF]: CALL dword ptr [EBP + 0x1c] */
        iVar3 = (*param_6)(auStack_8c[param_2 * -2 + (3 - param_3)],
                           auStack_8c[param_2 * -2 + (4 - param_3)]);
        if (local_2c < iVar3) {
          local_2c = iVar3;
          piVar4 = local_30;
          piVar7 = local_44[0];
          for (uVar2 = param_3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            *piVar7 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar7 = piVar7 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(char *)piVar7 = (char)*piVar4;
            piVar4 = (int *)((int)piVar4 + 1);
            piVar7 = (int *)((int)piVar7 + 1);
          }
        }
      }
      local_60 = local_60 + -1;
    } while (local_60 != 0);
  }
  if (local_2c < 0) {
    auStack_8c[param_2 * -2 + (4 - param_3)] = (uint)local_44;
    auStack_8c[param_2 * -2 + (3 - param_3)] = 0x55f311;
    st::fn_006AB060((void *)auStack_8c[param_2 * -2 + (4 - param_3)]);
  }
  ExceptionList = local_14;
  return local_44[0];
}

