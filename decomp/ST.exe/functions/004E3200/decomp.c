#include "../../pseudocode_runtime.h"


void __thiscall FUN_004e3200(void *this,int *param_1)

{
  uint index;
  byte uVar1;
  DArrayTy *pDVar4;
  int local_EAX_178;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar6;
  int local_EAX_275;
  bool bVar2;
  byte bVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_01;
  int local_EAX_707;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_02;
  byte *puVar8;
  uint *puVar9;
  int *piVar10;
  uint index_00;
  uint *puVar11;
  uint *puVar12;
  undefined1 local_78 [8];
  char local_70;
  uint local_48 [2];
  char local_40;
  byte local_3f;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_36 [7];
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  puVar8 = nullptr;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (*param_1 == 0) {
    pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
    *param_1 = (int)pDVar4;
  }
  if (param_1[1] == 0) {
    pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
    param_1[1] = (int)pDVar4;
  }
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(param_1[1] + 0xc) = 0;
  iVar6 = STField<int>(this,0x5ac);
  if (iVar6 == 0x35) {
    do {
      if (puVar8[(int)(&PTR_DAT_007bfc04)[STField<int>(this,0x239)]] == '\0') {
        iVar6 = thunk_FUN_004e60d0(STField<int>(this,0x24),(int)puVar8);
        iVar5 = thunk_FUN_004e7f20(STField<int>(this,0x24),(int)puVar8,iVar6 + 1);
      }
      else {
        iVar5 = thunk_FUN_004e5910(STField<int>(this,0x24),(uint)puVar8);
      }
      if (iVar5 != 0) {
        uVar1 = thunk_FUN_004e6140(STField<int>(this,0x24),(int)puVar8);
        iVar6 = thunk_FUN_004e60d0(STField<int>(this,0x24),(int)puVar8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((iVar6 < CONCAT31(extraout_var_01,uVar1)) &&
           (((STField<int>(this,0x361) != 2 || (STField<undefined1 *>(this,0x369) != puVar8))
            && (local_EAX_707 = thunk_FUN_004e5f90(STField<int>(this,0x24),(uint)puVar8),
               local_EAX_707 == 0)))) {
          memset(local_48, 0, 0x30); /* compiler bulk-zero initialization */
          iVar6 = thunk_FUN_004e60d0(STField<int>(this,0x24),(int)puVar8);
          local_48[0] = (iVar6 + 1) * 0x10000 | (uint)puVar8 & 0xffff;
          if (puVar8[(int)(&PTR_DAT_007bfc04)[STField<int>(this,0x239)]] == '\0') {
LAB_004e3526:
            local_40 = '\x01';
          }
          else {
            bVar2 = thunk_FUN_004e5c40(STField<byte *>(this,0x24),(uint)puVar8);
            local_40 = '\0';
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var_02,bVar2) != 0) goto LAB_004e3526;
          }
          thunk_FUN_004c7260(this,CASE_2,(int)puVar8,&local_8,&local_c,&local_10,&local_14);
          local_3a = (undefined2)local_8;
          local_3e = (undefined2)local_c;
          /* ST_CALLSITE[004E355E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          bVar3 = LookupRecordByte(STField<char>(this,0x24));
          if (bVar3 == 3) {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          /* ST_CALLSITE[004E3583]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_3f = LookupRecordByte(STField<char>(this,0x24));
          puVar12 = local_36;
          iVar6 = thunk_FUN_004e60d0(STField<int>(this,0x24),(int)puVar8);
          thunk_FUN_004e68a0(STField<byte *>(this,0x24),puVar8,iVar6 + 1,puVar12);
          if (puVar8[(int)(&PTR_DAT_007bfc04)[STField<int>(this,0x239)]] == '\0') {
            pDVar4 = (DArrayTy *)param_1[1];
          }
          else {
            pDVar4 = (DArrayTy *)*param_1;
          }
          Library::DKW::TBL::DArrayAppend(pDVar4,local_48);
        }
      }
      puVar8 = puVar8 + 1;
    } while ((int)puVar8 < 0x9b);
  }
  else if (((0x53 < iVar6) && (iVar6 < 0x5b)) &&
          (local_18 = 0, (&DAT_0079a3fc)[(iVar6 * 3 + -0xfc) * 5] != 0)) {
    puVar9 = &DAT_0079a3fc + (iVar6 * 3 + -0xfc) * 5;
    do {
      if (0xe < local_18) break;
      local_EAX_178 = thunk_FUN_004e5910(STField<int>(this,0x24),*puVar9);
      if (local_EAX_178 != 0) {
        uVar1 = thunk_FUN_004e6140(STField<int>(this,0x24),*puVar9);
        iVar6 = thunk_FUN_004e60d0(STField<int>(this,0x24),*puVar9);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (((iVar6 < CONCAT31(extraout_var,uVar1)) &&
            ((STField<int>(this,0x361) != 2 || (STField<uint>(this,0x369) != *puVar9)))) &&
           (local_EAX_275 = thunk_FUN_004e5f90(STField<int>(this,0x24),*puVar9),
           local_EAX_275 == 0)) {
          iVar6 = STField<int>(this,0x24);
          memset(local_48, 0, 0x30); /* compiler bulk-zero initialization */
          iVar6 = thunk_FUN_004e60d0(iVar6,*puVar9);
          local_48[0] = (iVar6 + 1) * 0x10000 | (uint)(ushort)*puVar9;
          if (STField<int>(this,0x4d4) == 0) {
LAB_004e336e:
            local_40 = '\0';
          }
          else {
            bVar2 = thunk_FUN_004e5c40(STField<byte *>(this,0x24),*puVar9);
            local_40 = '\x01';
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var_00,bVar2) == 0) goto LAB_004e336e;
          }
          thunk_FUN_004c7260(this,CASE_2,*puVar9,&local_8,&local_c,&local_10,&local_14);
          local_3e = (undefined2)local_c;
          local_3a = (undefined2)local_8;
          /* ST_CALLSITE[004E33A8]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          bVar3 = LookupRecordByte(STField<char>(this,0x24));
          if (bVar3 == 3) {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          /* ST_CALLSITE[004E33CD]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_3f = LookupRecordByte(STField<char>(this,0x24));
          puVar12 = local_36;
          iVar6 = thunk_FUN_004e60d0(STField<int>(this,0x24),*puVar9);
          thunk_FUN_004e68a0(STField<byte *>(this,0x24),(undefined1 *)*puVar9,iVar6 + 1,puVar12);
          Library::DKW::TBL::DArrayAppend((DArrayTy *)*param_1,local_48);
        }
      }
      puVar11 = puVar9 + 1;
      puVar9 = puVar9 + 1;
      local_18 = local_18 + 1;
    } while (*puVar11 != 0);
  }
  local_18 = 2;
  piVar10 = param_1;
  do {
    auto param_1_after_write = *(int **)(*piVar10 + 0xc); /* compiler stack-slot lifetime split */
    while (param_1_after_write != nullptr) {
      pDVar4 = (DArrayTy *)*piVar10;
      param_1_after_write = nullptr;
      index_00 = 0;
      if ((int)(pDVar4->count - 2) < 0) break;
      do {
        DArrayGetElement(pDVar4,index_00,local_48);
        index = index_00 + 1;
        DArrayGetElement((DArrayTy *)*piVar10,index,local_78);
        if ((local_40 == '\0') && (local_70 != '\0')) {
          FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)*piVar10,index_00,index);
          param_1_after_write = (int *)0x1;
        }
        pDVar4 = (DArrayTy *)*piVar10;
        index_00 = index;
      } while ((int)index <= (int)(pDVar4->count - 2));
    }
    piVar10 = piVar10 + 1;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      return;
    }
  } while( true );
}

